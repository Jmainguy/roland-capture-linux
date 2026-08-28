# OCTA-CAPTURE control protocol ledger

## QUAD-CAPTURE transport

QUAD-CAPTURE uses Roland model `00 00 56` on hidden USB-MIDI cable 1. Its
coherent RQ1 snapshot contains 59 bytes at `01 00 00 00`. Live DT1 controls use
global addresses below `00 02`, channel/field preamp addresses below `00 05`,
and six-nibble fixed-point monitor levels below `00 06`–`00 08`.

Confirmed QUAD global DT1 addresses are `00 02 00 01` Digital Out,
`00 02 00 02` Digital In, `00 02 00 04` Auto-Sens, `00 02 01 00`
Auto-Sens automatic/manual, and `00 02 01 01` margin. Direct-monitor levels
use `00 06 ii 08` with input index `ii=0..2` and six data nibbles. Every one
was changed by one reversible step, reread in the coherent snapshot, and
restored on attached hardware.

Firmware update model `00 69` and erase model `45 00` are unrelated and are
never emitted by the control application.

## Mixer MIDI transport

The Windows control-panel capture in
[`dctucker/roland-capture`](https://github.com/dctucker/roland-capture)
establishes that the OCTA mixer protocol shares USB interface 2 with ordinary
MIDI but uses different embedded USB-MIDI cable numbers:

- conventional MIDI: cable 0;
- host mixer RQ1/DT1 messages: cable 2 (USB-MIDI event header `0x24` for a
  SysEx start/continue packet);
- device mixer replies: cable 1 (event header `0x14`).

The stock fixed-endpoint quirk exposes only cable 0 (`out_cables = in_cables =
0x0001`), so a valid Roland RQ1 sent through `hw:*,0,0` receives no reply. The
local kernel patch exposes output cables 0 and 2 (`0x0005`) and input cables 0
and 1 (`0x0003`). This preserves the musical MIDI port and adds the asymmetric
mixer port expected by Roland's protocol.

This ledger separates device-tested facts from hypotheses. Every write exposed
by the GUI must have a bounded value domain, a confirmation mechanism, and a
link to captured or reproducible evidence here.

## Test hardware

| Model | USB ID | USB revision | Serial | ALSA | Observed |
|---|---|---:|---|---|---|
| OCTA-CAPTURE | `0582:0120` | `2.00` | `ISRLD2D7DA9A` | card 0 / `hw:0,0,0` | 2026-08-27 |

The attached unit exposes four vendor-specific audio altsettings, a raw MIDI
port, a vendor-specific bulk MIDI interface, and two auxiliary interrupt-IN
interfaces. Current full-duplex operation was confirmed at 48 and 96 kHz with
10 playback and 12 capture channels; the unit was restored to 96 kHz after the
test.

## Proven operations

### Live sample-rate read/write

- Transport: USB vendor control transfer.
- Read: IN `0xc0`, request `3`, value `0x0001`, four-byte response containing
  24-bit little-endian rate plus status.
- Write: OUT `0x40`, request `3`, value `0x0008`, payload `40` followed by the
  24-bit little-endian rate.
- Domain: 44,100 / 48,000 / 96,000 / 192,000 Hz.
- Confirmation: vendor readback must equal the requested rate; ALSA stream and
  PipeWire clock are then independently inspected.
- Device evidence: on 2026-08-27, reapplying 96 kHz succeeded and subsequent
  status showed hardware, ALSA playback/capture, and PipeWire at 96 kHz.
- Passive usbmon evidence: on 2026-08-27, five repeated reads while audio was
  running each submitted request `3`, value `0x0001`, length `4` and completed
  with `00 77 01 00`, whose first three little-endian bytes are 96,000. The
  sanitized transaction and manifest are under
  `evidence/protocol/OCTA-CAPTURE/2.00/sample-rate/read/`.
- A passive capture of a known-safe 96 kHz reapply confirmed the OUT setup and
  payload (`40 00 77 01`) followed immediately by the documented IN read and
  response (`00 77 01 01`). The fourth readback byte changes with transition
  state and is not part of the rate. The sanitized write fixture is beside the
  read fixture under `sample-rate/write-96000/`.

The transport API preserves that fourth byte as `vendor_status` for diagnostics
but does not label it as clock lock or sync. Captures show both `0x00` and
`0x01` during successful transitions, and the kernel evidence likewise treats
it as unreliable. Rate writes now fail at the lowest transport layer unless a
valid readback reports the requested rate within the bounded confirmation
window.

The shared implementation is `src/control.rs`; both CLI and GUI use it.

## Additional observations

### Auxiliary clock telemetry — decoded

Interface 3 altsetting 1, interrupt IN endpoint `0x82`, emits 8-byte frames at
approximately 1 kHz:

`[sequence, 00, rate_flag, external_hz_le24 (3 bytes), external, locked]`

- Windows driver v1.5.3 independently proves this layout: its telemetry parser
  masks byte 2 to bit 0, decodes bytes 3–5 as an unsigned 24-bit integer, and
  copies bytes 6 and 7 into the source and lock fields returned by IOCTL
  `0x222340`. The control panel displays `INTERNAL` when byte 6 is zero,
  `EXTERNAL (%6d Hz)` when bytes 6 and 7 are nonzero, and `EXTERNAL (Unlock)`
  when byte 6 is nonzero and byte 7 is zero.
- At 96 kHz, bytes 3–5 decode to 96,000. At 48 kHz they decode to 48,000.
- The meaning of byte 2 bit 0 remains unresolved; it is preserved as
  `rate_flag` and is not presented as a user-facing clock state.
- Sequence alternated between 0 and 1 in both captures.
- Both captures were internal-clock state (`external=0`). Byte 7 was 1, but the
  Windows UI intentionally ignores the lock field while the source is internal.

The native kernel mixer now owns this interrupt endpoint continuously and
exports a volatile `Clock State` ALSA control containing validity, source,
lock, external frequency, and the still-unassigned rate flag. The desktop UI,
diagnostic CLI, and support bundle consume that control. Live 44.1 → 48 → 44.1
kHz transitions updated the endpoint value immediately without interrupting
endpoint ownership; the OCTA and PipeWire returned to 44.1 kHz afterward.

`scripts/verify-clock-state.sh` provides the remaining read-only physical
acceptance test. It requires ten identical live ALSA samples and can separately
assert `internal`, `external-unlocked`, or `external-locked RATE_HZ`; it neither
changes the device menu nor claims/detaches a USB interface. This prevents a
single stale telemetry sample from being accepted as external-clock evidence.

Interface 4 altsetting 1, interrupt IN endpoint `0x81`, emits four-byte
monotonically changing frames at about 8 kHz. It appears clock/feedback-related,
not control state, and remains undecoded.

The current ALSA composite quirk binds all interfaces to one card. Detaching an
auxiliary interface causes ALSA to shut down the whole card; therefore normal
tools must not claim these endpoints. `usb_telemetry::capture` now refuses to
detach a bound driver. Further observation must be passive via usbmon or be
implemented inside the kernel driver. A full USB unbind/rebind recovered the
test unit after this behavior was discovered.

### Continuous MIDI control-change stream

During one request experiment at 96 kHz, `amidi -d` received a continuous stream
of channel-1 Control Change messages with controller `0x1b` and values spanning
`0x02..0x7f`, for example `b0 1b 73`, `b0 1b 40`, `b0 1b 02`. The shape appears
meter-like, but a later two-second passive MIDI capture received no messages.
The source/channel meaning and causal link to the request are not proven. Do
not bind this to GUI meters until controlled input-channel tests identify
framing and scale.

### Live OCTA input meters — decoded and implemented

Meter streaming is enabled with DT1 `00 0a 00 00 = 01` and disabled with
`00 0a 00 00 = 00`. While enabled, the OCTA sends checksum-valid DT1 frames at
address `00 0a 00 01`. Each frame contains eight big-endian 14-bit amplitudes,
one two-byte value per analog input; `0x3fff` is 0 dBFS and zero is silence, so
the displayed scale is `20 log10(raw / 16383)`.

This mapping appears both in the public Windows capture corpus and in live
traffic from the attached unit. On 2026-08-27 the physical OCTA produced all
eight values after the enable command. The desktop app uses a shareable ALSA
sequencer subscription, allowing full snapshots and verified writes to proceed
while meters run. Closing the app or sending Ctrl+C transmits the disable
command; a post-close capture contained zero residual meter frames. No daemon
or background service is involved.

### Front-panel compressor toggle — no host-visible event

On 2026-08-27, a guided passive usbmon experiment captured Input 1 COMP off,
one physical off-to-on button press, and COMP on in three separate eight-second
windows. The user confirmed the button light before both baselines. All windows
contained normal isochronous audio plus identical enumeration descriptor reads,
with no bulk MIDI, interrupt, vendor payload, or action-only control transfer.
Corrected paired-control diffs are empty. Evidence and the detailed conclusion
are under `evidence/incoming/compressor-input-1/`.

This proves only that a front-panel COMP change is not spontaneously reported
over the observed host interfaces. It does not reveal the command used by the
official control panel, and it is not sufficient to enable compressor writes.

### Roland address-map SysEx

Existing code writes a Roland DT1 message with model ID `00 00 4d` and address
`00 02 00 01` for the remembered sample-rate enum. A standard Roland RQ1 sent
to that address on 2026-08-27 produced no visible SysEx response on the raw MIDI
port; only the continuous `b0 1b xx` stream was received. The address, device ID,
request path, and/or assumption that this raw port carries control-panel
readback therefore remain unproven.

### Live preamp read/write

The full mixer RQ1 at address `01 00 00 00`, size `00 00 08 7a`, returns a
checksum-validated DT1 snapshot. Per-input DT1 addresses are rooted at
`00 05 <zero-based input> <field>`: phantom `00`, low-cut `01`, phase `02`,
Hi-Z `03`, sensitivity `04`, compressor bypass `06`, and dynamics fields
`07..0c`. The control engine writes only changed fields and then requires a
matching full snapshot before reporting success.

OCTA input sensitivity is `0..50 dB` in `0.5 dB` steps (raw `0..100`), as
specified by Roland's OCTA-CAPTURE owner's manual and confirmed on the physical
front panel. Do not use the third-party project's shared `58 dB` sensitivity
type as the OCTA limit; it covers a broader model map.

On 2026-08-27, Input 2 phantom power was read as off, written on at address
`00 05 01 00`, and confirmed as bit `0x02` in the full snapshot. It was then
written off and confirmed as `0x00`. The device was left with phantom power
off. The GUI requires a separate safety acknowledgement before an off-to-on
phantom transition.

Stereo link remains read-only because its pair-scoped write behavior has not
yet been physically verified.

### Direct Mix, patch bay, and reverb

The full snapshot decodes Direct Mix A–D hardware-input stereo masks,
mute/solo masks, four-nibble pan, six-nibble logarithmic volume, Mix A reverb
sends, computer-playback strips, left/right input and output masters, master
stereo links, input/output master link, and Mix A reverb return. Pan uses
`0x0000` = left, `0x4000` = center, and `0x8000` = right. Volume uses a
six-nibble amplitude value with `0x200000` = 0 dB and zero = silence.

Per-channel Direct Mix DT1 addresses use `00 06 <mix*0x10+channel> <field>`;
stereo is `00`, solo `02`, mute `03`, pan `04..07`, volume `08..0d`, and Mix A
reverb send `0e..13`. On 2026-08-27, Direct Mix D Input 1 mute was written on,
confirmed as `0x01` in the full snapshot, restored off, and confirmed `0x00`.

Computer playback channels use the same layout under section `00 07`. Mix D
WAVE OUT 10 mute was enabled at `00 07 39 03`; because channels 9/10 were
stereo-linked, the group mask correctly became `0x03`. It was disabled and
confirmed restored to `0x00`.

Direct-input masters use section `00 08` and computer-output masters use
`00 09`, with the mix in the high nibble of the third byte and left/right in
its low nibble. Stereo link is offset `00`, six-nibble volume begins at `01`,
Mix A reverb return begins at `00 08 00 07`, and input/output master link is
offset `0d`. Mix D input-master stereo link was tested `1→0→1`. Its left input
master was changed from 0 dB (`200000`) to -1 dB (`1c8521`), confirmed, and
restored to `200000`.

Patch-bay outputs use addresses `00 03 00 00..04` and values Direct Mix A–D =
`0..3`, WAVE OUT 1–2 through 9–10 = `4..8`. OUTPUT 9–10 was temporarily
changed from WAVE 9–10 (`08`) to Direct Mix D (`03`), confirmed, restored to
`08`, and confirmed.

Reverb type is `00 04 00 00` (`0..5`: off, echo, room, small hall, large hall,
plate). Its five non-off parameter banks are zero-based: pre-delay and time are
at `00 04 <type-1> 01/02`. This differs from the one-based type enum. The
Windows command dispatcher requires the bank to be `< 5`, and the snapshot
serializer independently indexes both parameter arrays with `type - 1`.

The public type map identifies pre-delay as a 13-choice enum (`0…12`, labels
0.0, 0.1, 0.2, 0.4, 0.8, 1.6, 3.2, 6.4, 10, 20, 40, 80, 160) and time as a
scaled raw `0…49` value representing 0.1–5.0 seconds. Tests on 2026-08-27
observed the device ignoring checksum-valid parameter DT1 frames while it
accepted reverb-type frames on the same transport. Static analysis later proved
those tests used the one-based type enum as the address byte: for Room they sent
bank `02`, while the correct bank is `01`. This explains why both the kernel and
direct ALSA sequencer tests were ignored and rules out timing or transport as
the cause. With zero-based addressing installed, Room pre-delay passed
`0→1→0` and Room time passed `14→15→14`; every step was confirmed by fresh
full-state readback and the original state was restored.

### Auto-Sens

Auto-Sens selection bytes are `00 02 01 10..17`. Start writes mode `1` to
`00 02 01 02` and reset/execute `1` to `00 02 01 03`; finish writes mode `0`;
cancel writes mode `2` followed by reset `0`. Individual RQ1 reads of this
settings block return no response, so the application rereads the full mixer
snapshot and reports the resulting selected-input sensitivities on finish or
cancel. Manual mode waits for the user; 30-second, 1-, 3-, and 5-minute modes
use an in-process deadline while the window is running. No service or daemon
is involved.

On 2026-08-27, Input 8 alone was selected and start/cancel and start/finish
were exercised. Its sensitivity was `0x64` before testing and remained `0x64`
(50.0 dB) after both paths. The device was left out of Auto-Sens mode.

The kernel transport additionally established that the selection/mode burst
must be paced: back-to-back USB-MIDI sends return busy, while 5 ms between DT1
messages reliably enters Running. A kernel-backed Input 8 Start → Cancel test
then returned Off and preserved the same 50.0 dB sensitivity. The ALSA running
state is necessarily host-maintained because the device still provides no
dedicated status readback.

### Device settings block — public-map evidence, writes unverified

The public `roland-capture` OCTA map identifies a settings area rooted at
`00 02 00 00`. These candidates come from the same load-map implementation
that correctly predicts the verified preamp, mixer, patch-bay, and reverb
fields, but their OCTA user-facing semantics still require isolated captures.

| Address | Public-map name | Encoded domain | Current confidence |
|---|---|---|---|
| `00 02 00 02` | `reset` | unknown byte | OCTA power-on broadcasts raw `0` on cables 1 and 2; action semantics unverified |
| `00 02 00 04` | `input_selector_auto` | boolean | OCTA map candidate; raw `0` broadcast only in STUDIO trace |
| `00 02 00 05` | `sync` | boolean (`1` annotated Auto) | OCTA map candidate; raw `1` broadcast only in STUDIO trace |
| `00 02 00 06` | `stereo-link` | boolean (`1` annotated Paired) | OCTA map candidate; raw `1` broadcast only in STUDIO trace |
| `00 02 00 07` | `dim_solo` | Off/−6/−12/−18 dB enum | OCTA map candidate; label ordering and OCTA transport unverified |
| `00 02 01 00` | Auto-Sens automatic mode | boolean | OCTA map candidate; raw `0` broadcast only in STUDIO trace |
| `00 02 01 01` | Auto-Sens margin | integer 0…12 dB | OCTA map candidate; raw `6` broadcast only in STUDIO trace |

The known OCTA `01 00 00 00` load response does not include these settings,
and individual settings-block reads have not produced a response on the
attached unit. The address inventory comes from the public project's OCTA map,
while the six-value broadcast evidence described below is STUDIO-specific. No
OCTA system-setting write is enabled from these candidates alone.

### Settings-image load and broadcast readback

The public `mixer/load-save.pcapng` contains two host-to-device,
checksum-valid DT1 messages at address `01 00 00 00`, each carrying exactly
1,504 data bytes. Its SysEx model is `00 00 6b`: STUDIO-CAPTURE. Each image is
followed by the six settings broadcasts above, with values
`00`, `01`, `01`, `01`, `00`, `06`. This proves STUDIO settings-image load and
device-originated readback, not OCTA behavior.

The public OCTA-specific traces use model `00 00 4d`, host cable 2, and a
1,146-byte `01 00 00 00` snapshot. `power on windows 10.pcapng` additionally
contains checksum-valid raw-`0` broadcasts at `00 02 00 02` on device cables 1
and 2. The public OCTA map calls that address `reset`, but neither a reset write
nor its exact semantics are established. The attached unit likewise did not
emit the six STUDIO frames after an identical OCTA snapshot-image no-op test;
its readable mixer state remained byte-identical. Persistent Backup All /
Recall All and every system-setting write remain separate OCTA capture targets.

Legacy USB-MIDI captures are normalized with
`tools/usb_midi_sysex.py`. It strips four-byte USB-MIDI event headers, follows
SysEx across URBs, validates Roland checksums, and emits direction/address/data
as JSONL. This avoids treating endpoint traffic as Linux usbmon control records.

### Patch-bay convenience profiles

The Windows-panel Initial Setting and Multi-Monitor buttons do not require a
new protocol family. They are documented multi-route patch-bay profiles and
are implemented transactionally with the already verified `00 03 00 xx`
writes. Initial Setting selects Direct Mix A for OUTPUT 1–2 and matching WAVE
OUT pairs for OUTPUT 3–10. Multi-Monitor selects Direct Mix A–D for OUTPUT
1–8 and leaves OUTPUT 9–10 unchanged. Directly Output Inputs is not equivalent
to a patch-only profile: Windows function `0x140016050` routes Direct Mix A–D
to OUTPUT 1–8, assigns each mix its matching input pair at unity and hard
left/right, silences other pairs, clears mute/solo/reverb send, keeps Inputs
9–10 linked and hard-panned but silent, sets both input masters to unity, and
links input/output masters. The native implementation preserves WAVE OUT
strips and OUTPUT 9–10, uses the transactional preset rollback path, requires
confirmation, and is capability-gated off at 192 kHz. Its exact final-state
fixture is tested; a below-192-kHz live validation remains outstanding.
The diagnostic CLI command `direct-output-verify` provides that gate without
leaving the device reconfigured: it requires an explicit routing-change flag,
applies and fully rereads the profile, then transactionally restores and
rereads the exact original readable state.

### Compressor stereo link

Windows driver command `0x14` emits a pair-scoped DT1 at
`00 05 <pair-left-channel> 05`, where the left-channel byte is `0`, `2`, `4`,
or `6` and the data byte is boolean. The native driver exposes four adjacent
pair controls. Inputs 7–8 were tested off → on → off on the attached unit;
full-state readback confirmed the enabled state and every related Input 7/8
ALSA value exactly matched its original value after restoration.

The settings-map candidate at `00 02 00 06` is a separate global paired-mode
setting and must not be confused with compressor stereo link.

### OCTA utility-menu scope and snapshot globals

Visual inspection of the local OCTA-CAPTURE v1.6 owner’s manual, printed pages
61–62, establishes the actual utility menu: LCD Contrast, Sample Freq, Reverb,
Patchbay, Auto Sens duration, Backup/Recall All, VS Expand, Digital, Clear
Mute/Solo, Power Off, and Initialize. Input-selector auto, a standalone clock
sync mode, global paired mode, solo dim, and Auto-Sens margin/automatic are not
listed and remain cross-model research fields rather than OCTA UI controls.

The five bytes at the start of the normal mixer snapshot must not be labeled as
those utility settings without additional evidence. Live rate correlation gave
`[00,00,00,00,01]` at 44.1 kHz and `[00,00,03,00,01]` at 192 kHz, then restored
the former. Only byte 2 is thereby proven to be the sample-rate enum. Byte 4
remained set even though the manual says Digital and VS Expand are unavailable
at 192 kHz; Windows object-layout and command-`0x0c` evidence instead associate
it with panel profile state such as Multi-Monitor. It is not used as Digital
input readback.

An attached-device isolated LCD Contrast experiment closed one of the utility
questions. The operator changed 10 → 11, held it for a full read, then restored
11 → 10. Neither direction emitted Roland MIDI, USB control traffic, or a
change in the interface-3 telemetry frame. More decisively, independent
1,146-byte `01 00 00 00` snapshots at 10, 11, and restored 10 were byte-for-byte
identical (normalized SHA-256
`32b897b8e76d331e4376c7ebd08f92892965a6ee58507c706c1463b154b06c6c`).
The panel therefore labels LCD contrast as device-local rather than displaying
the preset model's default as if it were hardware readback.

An isolated VS Expand experiment at 44.1 kHz then captured OFF → ON* →
OFF with stable baselines at both values. Neither direction emitted a Roland
MIDI or USB control transaction. The interface-3 clock frame (apart from its
alternating sequence byte) remained `00 00 44 ac 00 00 01` in every capture.
The unit was physically confirmed restored to OFF. This proves the front-panel
value is not a live host-visible event or clock field. It is labeled
device-local in the panel; an active software write remains disabled unless an
OCTA-specific command with readback is discovered. Evidence is retained under
`evidence/incoming/vs-expand-off-on-off/`.
Roland's published troubleshooting procedure separately confirms that a VS
Expand change requires a power cycle. The experiment restored OFF before any
restart and therefore did not activate two-unit mode.

An isolated Digital input experiment at 44.1 kHz captured AUTO → OFF →
AUTO while audio remained active. Both directions produced empty USB-control
diffs and no Roland MIDI transaction. Interface-3 clock telemetry remained the
same internal 44.1 kHz payload after normalizing its sequence byte. Complete
native-kernel mixer reads at AUTO, OFF, and restored AUTO each began with
identical device-global bytes `[00,00,00,00,01]`; all decoded mixer state was
also unchanged. The operator physically confirmed the final AUTO value. This
proves that Digital is not exposed as a live host event, telemetry field, or
mixer-snapshot field. The panel therefore identifies it as a device-local
front-panel setting instead of presenting a default as readback. An active
software write remains disabled unless an OCTA-specific command with readback
is discovered. Evidence is retained under
`evidence/incoming/digital-auto-off-auto/`.

The reconstructed v1.51 device runtime closes the remaining Auto Power Off
classification without requiring another physical-panel experiment. Its
utility resources contain the local `POWER OFF`, `OFF`, and `4HOURS` choices.
The adjacent utility class dispatches the setting inside the device, while the
runtime object initialized at `0x0043f890` implements the inactivity timer.
The timer's start and cancel routines at `0x0030ce5c` and `0x0030ce2c` have
direct callers only in the device event dispatcher (`0x00302f78` and
`0x00302f8c`). No complete-mixer-snapshot field, Roland host command, or host
readback path reaches that timer. The desktop panel therefore identifies Auto
Power Off as device-local and directs the operator to the front panel instead
of displaying a preset default as hardware state. The attached unit was
observed at 4 HOURS; no setting change was required for this classification.

## Unknown and blocked from writes

The public shared type map's compressor Knee domain does not apply to
OCTA-CAPTURE. Roland's official OCTA panel contains exactly six parameter
classes (Gate, Attack, Release, Threshold, Ratio, and Gain), while its driver
maps the six contiguous commands `0x16..0x1b` to DT1 fields `07..0c`. There is
no seventh parameter class, command, snapshot byte, label, or firmware string.
Knee is therefore intentionally absent from the Linux UI rather than an
unimplemented OCTA setting.

- Auto-Sens has no dedicated RQ1 status response; completion is confirmed by
  rereading resulting preamp sensitivities rather than a running flag.
- Physical monitor/headphone controls. LCD Contrast, VS Expand, Digital, and
  Auto Power Off are device-local; active host commands and readback remain
  unproven and the UI does not pretend preset defaults are hardware state.
- External digital locked/unlocked transition evidence (internal source is now
  continuously decoded and live-verified).
- Correct, known-good transaction evidence for hardware Backup/Recall and
  Initialize; the inferred payload-only implementation failed live safety
  validation and is disabled.

The first explicitly authorized Backup All trial on 2026-08-27 failed this
gate: the ALSA action timed out, subsequent mixer and vendor control requests
also timed out, and USB reauthorization/software reset could not recover the
unit. A physical OCTA power cycle restored normal operation. Subsequent Windows
driver analysis identified the divergence: Roland queues exactly one cable-2
DT1 and returns, while the failed Linux path waited 100 ms and issued a full
RQ1 during the firmware's asynchronous `Saving Parameters` lifecycle. The
corrected retry performed no immediate refresh and gave the device a 10-second
quiet period before later readback. A USB capture proves the exact cable-2 DT1
was emitted and its endpoint-`0x06` OUT URB completed successfully. Endpoint
`0x86` stopped completing roughly 35 ms later. Ten seconds after Backup, an
EP0 vendor-status read returned no data and ended after two seconds; a later
mixer RQ1 still completed on OUT endpoint `0x06`, but received no endpoint-
`0x86` reply. Continuous endpoint `0x82` traffic persisted for the full
capture. This localizes the failure to an asymmetric device control-response
path rather than USB disconnection or bad OUT packetization. The capture did
not include audio payload URBs. Backup, Recall, and Initialize remain disabled.

Firmware analysis now independently confirms the Windows payload mapping and
the full asynchronous consumer. Runtime registry entry 1 has address
`00 00 00 01`; its setter maps zero to selector 6 (Recall) and nonzero to
selector 5 (Backup), then posts event class 7. The event task forwards that
selector into the persistence queue. Backup writes all five parameter domains
to the `extmem` device at base offset `0x000f0040`, waits approximately 3.33
seconds, and releases its lock; Recall uses a distinct three-stage restore
path. The DT1 setter intentionally supplies no completion callback. Therefore
the emitted DT1 was semantically complete and does not require a prior
Windows-only session command. Assembly adds a concrete failure mechanism: the
Backup handler acquires its persistence mutex before external-memory
preparation and five domain writes, checks none of their return values, and
releases the mutex only after every call returns plus the fixed delay. The
storage wrappers can return an explicit open failure, but the handler ignores
it; a blocking storage operation would retain the mutex indefinitely. The
failed-live response-path wedge is consistent with that mechanism, although
the capture cannot identify the exact blocked call. Hardware persistence is
therefore classified unavailable on this attached unit, not merely awaiting a
different packet sequence. See `evidence/corrected-backup-analysis/REPORT.md`.

Local preset export/apply and the hardware Backup/Recall and Initialize command
encodings are mapped and implemented; only the latter destructive actions are
still awaiting explicitly authorized live tests. The other unknowns require
one-control-at-a-time Windows/macOS USB captures or equivalent driver/control-
panel analysis followed by physical readback tests. Persistent, reset,
phantom-power, and high-gain writes require additional confirmation and safety
gates before they may appear as enabled controls.

The reproducible capture, sanitization, normalization, and diff procedure is
defined in `docs/CAPTURE-WORKFLOW.md`. Normalized JSONL is the corpus source of
truth; inferred commands must still satisfy the evidence rules above.
The corpus now also includes paired `*.controls.jsonl` derivatives, generated
by matching each USB control submission to its completion. These are easier to
diff, while normalized packet records remain authoritative.

### Meter ownership and lease

The dedicated kernel MIDI client reserves the OCTA control cable, so userspace
must not attempt to open a second sequencer path for live meters. The kernel now
parses `00 0a 00 01` pre-compressor and `00 0a 00 11` post-compressor 14-bit
meter frames and exposes eight read-only ALSA controls for each family. A
`Meter Stream` control sends the verified `00 0a 00 00` enable/disable byte.
Enabling creates a one-second kernel lease; the panel renews it while open,
normal close disables immediately, and a hard-killed panel was physically
verified to time out back to Off without a daemon.

### Compressor display domains

The public type tables define Gate raw `0…50` as −∞ then −69…−20 dB,
Threshold `0…40` as −40…0 dB, Output Gain `0…80` as −40…+40 dB, Ratio
`0…13` as 1:1 through 1:∞, and the 125-entry Attack/Release tables as
0…800 ms and 0…8000 ms. These limits are enforced in the Rust model/preset
validator, UI sliders, ALSA userspace adapter, and kernel controls. On the
attached device, Input 2 Gate passed raw 22 (−48 dB) → 23 (−47 dB) → 22
(−48 dB), with fresh hardware snapshot readback after both writes.

The shared public tables also describe a Knee type used by other Roland
products. Official OCTA-CAPTURE v1.5.3 panel/driver analysis proves it is not
part of this model: the UI and driver expose only the six fields above, and the
driver writes them contiguously at `07..0c` (WIN-013).
