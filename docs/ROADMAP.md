# OCTA-CAPTURE Linux roadmap

## Current upstream boundary

The upstream deliverable is streaming correctness only: OCTA's packed 24-bit
format, OCTA/QUAD alternate rates, automatic vendor clock synchronization, MIDI
cable exposure, and separate UCM profiles. It does not include a kernel Roland
mixer or changes to shared mixer/MIDI infrastructure. The complete control
surface remains in this optional userspace application. Older kernel-mixer
milestones below are retained as engineering history and protocol evidence.

Protocol discovery update (2026-08-27): the public
[`dctucker/roland-capture`](https://github.com/dctucker/roland-capture)
repository contains OCTA-specific Windows captures and a nearly complete mixer
memory map. The immediate Linux transport blocker is the kernel's cable-0-only
MIDI quirk; OCTA mixer traffic is asymmetric (host cable 2, device cable 1).
Existing captures are an accelerator, not a limit on scope: missing operations
will be recovered with controlled pcaps and, where necessary, clean-room
behavioral analysis of the Windows driver/control panel. That evidence path
does not change the native ALSA mixer and full desktop-control-panel plan.

That map also identifies a settings block at `00 02 00 04…07` for
input-selector auto, sync auto/internal, individual/paired mode, and solo dim,
plus Auto-Sens auto/margin at `00 02 01 00…01`. The OCTA-CAPTURE v1.6 owner's
manual does not expose those fields in its utility menu, and the available
broadcasts are STUDIO-CAPTURE traffic. They are therefore cross-model research
leads, not OCTA UI controls or enabled writes. The real unresolved OCTA utility
settings were LCD contrast, VS Expand, Digital input, and Power Off. LCD
Contrast is now physically proven device-local across MIDI, USB control,
telemetry, and full-snapshot observations. VS Expand is likewise physically
proven device-local for an OFF → ON* → OFF transition. Digital input is now
physically proven device-local for an AUTO → OFF → AUTO transition using the
same evidence surfaces. The reconstructed v1.51 runtime then proved Power Off
is an internal inactivity timer reached from the device event dispatcher, with
no proven mixer-snapshot field or Roland host command. All four utility-system
items are now classified without speculative writes.

A dedicated legacy USB-MIDI decoder has reconstructed both model families in
the public corpus. `mixer/load-save.pcapng` is STUDIO-CAPTURE model `00 00 6b`,
not OCTA-CAPTURE: its two 1,504-byte image writes and six subsequent system
broadcasts are useful shared-protocol hypotheses but are not OCTA readback
evidence. The actual `octa-capture/` traces use model `00 00 4d`, cable 2 for
host requests, and 1,146-byte snapshot payloads. The OCTA power-on trace also
contains checksum-valid raw `0` broadcasts at `00 02 00 02` on cables 1 and 2;
the public map labels that field reset, but its action semantics remain
unverified. This corrected model boundary is enforced before enabling writes.

Protocol recovery remains scheduled for every missing write, persistent
action, and reset operation; captures or targeted clean-room binary analysis
may fill those gaps without reducing the full-control target.

## Objective

Deliver reliable native Linux support for the Roland OCTA-CAPTURE and, where
the protocol is shared, the QUAD-CAPTURE. Preserve the working ALSA/PipeWire
audio path already recovered, upstream the generally useful pieces, and only
reverse-engineer Roland's proprietary drivers where observable device behavior
is still missing.

This is an interoperability project. Do not copy or redistribute Roland code,
firmware, signing material, or proprietary assets. Record behavior and produce
an independent Linux implementation.

## What is already known

The project is not starting from zero:

- OCTA-CAPTURE is USB `0582:0120`; QUAD-CAPTURE is `0582:012f`.
- OCTA audio is packed 24-bit `S24_3LE`, not the `S32_LE` declared by the old
  in-tree quirk. That mismatch causes noise/garbage.
- QUAD correctly uses 24-bit audio in an `S32_LE` container.
- Alternate settings expose 44.1, 48, 96, and 192 kHz.
- OCTA normally provides 10 playback and 12 capture channels, dropping to 4/4
  at 192 kHz. QUAD normally provides 4/6, dropping to 2/2 at 192 kHz.
- Both devices use implicit feedback; capture must be active for playback.
- The vendor sample-rate protocol is implemented in `src/usb_rate.rs` and the
  kernel endpoint-start patch.
- The GUI and CLI now share the physically verified rate-change operation in
  `src/control.rs`; the GUI exposes all four rates with pending/error state.
- Windows v1.5.3 static analysis confirms its `DrvConfig` sample-rate combo
  enters the driver's serialized rate-transition worker through IOCTL
  `0x222328`; it is not an additional Roland mixer command. Windows-only ASIO
  buffer/performance and WDM-layout preferences are outside hardware parity
  and map, where useful, to normal ALSA/PipeWire configuration.
- A Rust CLI, kernel quirk patches, install scripts, PipeWire integration, and
  an OCTA UCM profile already exist.
- The attached OCTA now runs the corrected packed-24-bit module: a live
  44.1 kHz playback stream was verified as 10-channel `S24_3LE`, and the
  kernel exposed all four packed-24-bit playback/capture altsettings.
- `UPSTREAM.md` contains the current kernel and alsa-ucm-conf submission plan.

## Definition of success

### Core support

- Clean, channel-correct, full-duplex audio at every advertised rate.
- Stable operation across disconnects, suspend/resume, XRUNs, PipeWire graph
  changes, and repeated rate transitions.
- MIDI and digital I/O behave correctly.
- Normal applications work without the `octa` utility running continuously.
- Appropriate changes are accepted upstream in Linux and alsa-ucm-conf.

### Native desktop control panel

Recover and independently implement every supported device-control operation
that users need on Linux through a polished graphical application comparable
to the Windows/macOS control panels. Users must not need CLI commands, config
file edits, cron, or a systemd polling service for everyday configuration.

- Patch-bay routing and Direct Mix A-D.
- Preamplifier gain, phantom power, phase, low-cut, and input sensitivity.
- Compressor/gate parameters and enable state.
- Auto-Sens.
- Output, monitor, and headphone routing or levels.
- Clock source, sample rate, and digital synchronization state.
- Readback, persistence, reset, and preset behavior.

Parity must be measured against observable Windows/macOS and front-panel
behavior, not assumed from UI labels.

### Desktop application requirements

- Native window with device selection, connected/offline state, firmware
  identity, sample rate, clock source, and sync/lock status.
- Mixer with meters and controls for gain, phantom power, phase, low-cut,
  compressor/gate, mute, solo, stereo linking, and Auto-Sens where supported.
- Direct Mix A-D views with clear channel strips, pan, levels, and mix identity.
- Visual patch bay for WAVE OUT, Direct Mix, physical outputs, coaxial I/O,
  headphones, and monitor paths, with invalid routes disabled.
- Preset load/save, rename, duplicate, import/export, dirty state, and explicit
  confirmation before persistent or destructive writes.
- Hardware-originated changes reflected without UI/device feedback loops.
- Hot-plug, reconnect, and multiple-device support, with model- and
  firmware-specific controls hidden or disabled.
- Keyboard navigation, accessible labels, scalable layout, light/dark theme
  integration, and useful error messages.
- Diagnostics that export a sanitized support bundle and expose the same typed
  device state used by the CLI.

The application owns monitoring only while it is running. It may minimize to a
normal desktop notification area, but it must not install or depend on cron, a
systemd user unit, or a permanent polling daemon. Basic ALSA/PipeWire audio must
continue to work when the application is closed.

## Evidence rules

- Do not infer a command from a single capture when it can be isolated by
  repeated controlled experiments.
- Change one control at a time and capture before/after state.
- Record USB setup fields, payload bytes, direction, timing, response, and
  device state for every candidate operation.
- Distinguish USB control transfers, MIDI SysEx, streaming traffic, firmware
  update traffic, and ordinary OS enumeration.
- Confirm writes with readback or an externally observable hardware effect.
- Test boundary values and invalid values before assigning field widths or
  signedness.
- Separate facts, strong inferences, hypotheses, and unknowns in all protocol
  notes.
- Do not declare a feature complete until it works after cold plug and without
  first booting Windows or macOS.

## Phase 1: freeze and verify the current baseline

1. Inventory supported hardware revisions, firmware versions, USB descriptors,
   and host/kernel versions.
2. Preserve `lsusb -v`, `/proc/asound/card*/stream0`, `alsa-info.sh`, kernel
   logs, and PipeWire graph output for both devices at every rate.
3. Build a repeatable audio fixture that emits known per-channel signals and
   verifies channel order, sample packing, amplitude, polarity, and continuity.
4. Run simultaneous playback/capture tests at 44.1, 48, 96, and 192 kHz.
5. Stress rate changes, plug/unplug, suspend/resume, application restarts, and
   XRUN recovery.
6. Turn every reproducible failure into a recorded test case before changing
   implementation code.

Deliverable: a versioned compatibility matrix and raw evidence bundle for each
tested device/firmware/kernel combination.

## Phase 2: harden and upstream core audio

Follow `UPSTREAM.md` while rebasing against the current Linux sound tree:

1. Submit the minimal OCTA `S24_3LE` correction.
2. Submit alternate-setting and vendor rate synchronization support for OCTA and QUAD.
3. Submit the OCTA stereo-pair profile to `alsa-ucm-conf`.
4. Address review without coupling upstream kernel behavior to the optional
   userspace CLI.
5. Retest the accepted implementation on the real hardware and track the first
   released kernel and alsa-ucm-conf versions containing it.

Deliverable: upstream-quality patches, review evidence, and a documented path
for users of older kernels.

## Phase 3: control-protocol observation

Build a behavioral oracle before disassembling complete proprietary drivers.

### Windows capture

Use a supported Roland Windows driver with USBPcap/Wireshark. Capture separate
sessions for installation/enumeration, control-panel startup, each individual
control change, preset load/save, rate changes, reset, and shutdown. Record the
matching UI action and initial/final hardware state beside every trace.

### macOS capture

Capture equivalent operations on a supported macOS release where practical.
Use it as an independent comparison: shared byte sequences are likely device
protocol, while host-specific sequences may be driver plumbing.

### Front-panel and MIDI capture

Observe whether front-panel changes emit MIDI SysEx or alter values readable by
USB controls. Expand `src/sysex.rs` only after checksums, addressing, model ID,
read/write semantics, and value domains are verified.

Deliverable: a machine-readable transaction corpus and a protocol ledger
mapping operations to evidence.

## Phase 4: targeted proprietary-driver analysis

Static analysis is a gap-closing tool, not the starting point.

1. Preserve downloaded installers with source URL, publication metadata, size,
   and cryptographic hashes.
2. Unpack installers and inventory kernel drivers, services, control-panel
   applications, libraries, firmware blobs, resources, and configuration.
3. Start with an older Intel macOS driver for structural recovery when it
   retains useful Mach-O/IOKit metadata or symbols.
4. Use Windows binaries to correlate captured IOCTLs, URBs, constants, command
   tables, and control-panel actions.
5. Trace only code paths relevant to unresolved protocol fields. Avoid spending
   time reconstructing installers, UI frameworks, logging, or unrelated OS
   compatibility layers.
6. Maintain a symbol/function ledger with addresses, evidence, confidence, and
   links to matching USB transactions.
7. Validate every recovered semantic claim against the physical device.

Deliverable: documented answers for gaps that behavioral capture alone could
not resolve. A complete source-like decompilation of Roland's drivers is not a
prerequisite for Linux support.

## Phase 5: shared control engine

1. Define a typed protocol layer independent of CLI presentation.
2. Implement read operations before destructive or persistent writes.
3. Add strict range checking, device/firmware compatibility gates, timeouts,
   and response validation.
4. Expose the same typed operations to the CLI and GUI; neither frontend may
   contain a separate copy of protocol logic.
5. Keep the CLI for scripting, diagnostics, and protocol development, with a
   dry-run or decoded-output mode where useful.
6. Add an event/state layer that coalesces reads, prevents stale writes,
   distinguishes device changes from UI changes, and survives disconnects.
7. Keep streaming compatibility in `snd-usb-audio`'s existing descriptor,
   endpoint, and implicit-feedback quirk paths. Do not replace the generic USB
   audio driver with a standalone Roland driver.
8. Upstream stable, well-understood Roland controls through a dedicated
   `sound/usb/mixer_roland_capture.c` module, selected from the normal USB
   mixer-quirk dispatcher. Model differences belong in capability tables, not
   duplicated OCTA/QUAD/STUDIO implementations.
9. Expose ordinary gain, switch, enum, routing, and mixer values as standard
   ALSA controls with cached readback, serialization, disconnect handling, and
   device-originated notification support. Keep presets, confirmations,
   workflows, visualization, and policy in userspace.
10. Make the desktop application ALSA-control-first when the kernel module is
   available, retaining its verified direct SysEx transport as a compatibility
   fallback for older kernels. Never let both transports write concurrently.
11. Never upload firmware or issue undocumented persistent/reset commands merely
   as a probe.

Deliverable: a safe Linux control library, state model, and diagnostic CLI with
feature-by-feature parity documentation.

## Phase 5A: upstream Roland Capture ALSA mixer

Follow the architecture used by substantial vendor mixers such as Scarlett:

1. Add `mixer_roland_capture.c/.h` inside `sound/usb`, built into
   `snd-usb-audio`; keep only its dispatch hook in `mixer_quirks.c`.
2. Start with OCTA-CAPTURE (`0582:0120`) and a minimal read-only identity/state
   probe plus one reversible, physically verified control family.
3. Add controls in reviewable groups: preamps, dynamics, Direct Mix strips,
   masters, patch bay, reverb, then safe system settings.
4. Use the kernel USB-MIDI facilities or a small internal SysEx transport only
   with explicit endpoint ownership and arbitration. Prototype the viable paths
   and discuss the preferred boundary with maintainers early; use pcaps and
   targeted Windows-driver disassembly to fill protocol gaps without changing
   the dedicated-mixer destination. The implementation must serialize requests,
   validate Roland checksums and model IDs, time out cleanly, cache state, and
   survive unplug/suspend.
5. Do not place local preset files, Auto-Sens timing UI, destructive confirmation
   dialogs, or continuous graphical meters in kernel policy. ALSA controls
   expose mechanisms; the desktop app owns workflows and presentation.
6. Add QUAD/STUDIO only where protocol evidence and physical validation support
   them; share code through per-model capability and address tables.
7. Switch the desktop app to discover the new ALSA controls and fall back to its
   direct protocol backend when they are absent.

Deliverable: an upstream-reviewable kernel patch series plus an ALSA-first UI
backend, with identical readback and safety behavior across both transports.

Current kernel RFC status (2026-08-28): the mainline tree has a dedicated
Roland mixer lifecycle that opens the control-cable pair through ALSA's
existing in-kernel raw-MIDI API. Conventional MIDI cable 0 stays untouched,
and the implementation adds no callback, packet path, or exported API to the
shared USB-MIDI driver. It provides bounded SysEx transport, serialized
full-snapshot RQ1 with model/address/checksum validation, and eight ALSA input
sensitivity controls. The complete `sound/usb` object set passes a `W=1` build.
The Fedora backport was built against the exact 7.1.8 and 7.1.10 prepared
kernel-devel trees, loaded without rebooting, and physically verified on
2026-08-27. All eight controls returned live state. Input 8 was changed from
50.0 to 49.5 dB and back to 50.0 dB, with a fresh full-device snapshot
confirming both writes. The original installed modules were preserved and
checksummed before the live swap. This completes the first reversible kernel
control family; the next gate is ALSA-first application selection followed by
the remaining control groups.

The second kernel family was loaded and physically verified the same day. ALSA
now exposes phantom power, low-cut, phase invert, compressor enable, and Hi-Z
(Inputs 1–2) alongside sensitivity. Readback reflected real device state,
including Input 2 low-cut and phase already enabled. The authorized Input 2
phantom test passed off → on → off with full-snapshot confirmation and restored
the original off state. The installed panel reads these controls natively and
allows only supported, evidence-backed preamp fields. Compressor parameters,
compressor pair-link, and Auto-Sens were subsequently added through the kernel
ABI below.

The compressor/gate parameter family followed: Gate, Attack, Release,
Threshold, Ratio, and Output Gain are exposed for all eight inputs as raw
0–127 ALSA controls, using the already verified DT1 offsets `0x07`–`0x0c`.
All 48 controls returned live state. With Input 2's compressor disabled, Gate
was physically changed 22 → 23 → 22 and restored with exact snapshot readback.
The panel now reads and writes these parameters through ALSA. Static Windows
driver analysis then mapped pair-scoped compressor stereo link to command
`0x14` and DT1 `00 05 <pair-left-channel> 05`; Inputs 7–8 passed an
off → on → off physical test with full readback and exact restoration.

Official OCTA-CAPTURE v1.5.3 panel and driver analysis subsequently closed the
last compressor ambiguity: the shared public map's Knee type is not supported
by this model. The official UI has exactly six parameter classes and driver
commands `0x16..0x1b` write exactly the six DT1 fields `07..0c`; there is no
Knee class, label, command, or snapshot field (WIN-013).

Direct Mix hardware-input switches are the next completed kernel layer: mute,
solo, and stereo link for ten inputs across Mixes A–D (120 ALSA controls).
Direct Mix D Input 10 Mute was physically tested off → on → off and restored.
To keep hundreds of controls responsive, the ABI now provides one explicit
hardware snapshot-generation read per application poll; individual control
reads use that validated cache. One refresh plus twelve representative reads
completed in roughly 0.05 seconds. The panel initially enabled the three
supported strip switches while later families remained visibly disabled; those
later families are now implemented as described below.

Pan and level are now exposed for all 40 Direct Mix hardware-input strips, and
Mix A adds ten reverb-send controls. Pan uses the panel's −100…+100 domain;
level/send use mute plus −71…+12 dB (`0…84`) with ALSA dB metadata, backed by
an exact fixed-point lookup matching the verified encoder. Physical tests
passed and restored: Mix D Input 10 Pan 100 → 99 → 100, Level 72 → 73 → 72,
and Mix A Input 10 Reverb Send 0 → 1 → 0. The installed panel enables the full
hardware-input strip.

All WAVE OUT strips are now implemented through the same source-parameterized
kernel path: mute, solo, stereo link, pan, and level for ten channels across
Mixes A–D (200 controls). Mix D WAVE OUT 10 was physically tested and restored:
mute off → on → off, pan 100 → 99 → 100, and level 72 → 73 → 72. The installed
panel now enables the complete WAVE OUT grid.

Direct Mix masters complete this control-page kernel layer with 29 additional
controls: input/output stereo links and left/right master levels for Mixes A–D,
input/output master linking for each mix, and Mix A reverb return. Physical
tests passed and restored the original state: Mix D input master 72 → 73 → 72
(with its stereo-linked right channel following), Mix D input/output master
link off → on → off, and Mix A reverb return 72 → 73 → 72. The installed panel
now reads and writes every Direct Mix hardware-input, WAVE OUT, and master
setting through ALSA with full-snapshot verification.

The next kernel slice adds all five patch-bay source enums and global reverb
type/pre-delay/time. Output 9–10 routing and reverb type passed reversible
tests and were restored. Comparing the public type implementation corrected
pre-delay to a 13-item `0…12` enum and time to `0…49` representing 0.1–5.0 s;
both bounds are now enforced by the module and panel. The attached device
ignored valid parameter DT1 frames despite accepting the type frame, so
pre-delay/time physical writes remain under capture-level investigation and
are not counted complete yet.

Auto-Sens is now kernel-backed and enabled in the installed panel for manual,
30-second, 1-, 3-, and 5-minute runs. Eight ALSA selection controls feed one
Off/Running/Cancel action control; the timed deadline remains in-process and
exists only while the panel is open. The transport requires 5 ms pacing between
selection/mode DT1 frames. Input 8-only Start → Cancel passed live testing,
returned to Off, and left Input 8 at its original 50.0 dB sensitivity.

The documented patch-bay convenience actions are now being recovered as safe
userspace transactions rather than new device opcodes. Initial Setting maps
Main to Direct Mix A and OUTPUT 3–10 to their matching WAVE OUT pairs;
Multi-Monitor maps Direct Mix A–D to OUTPUT 1–8 and preserves OUTPUT 9–10.
Both snapshot the original routes, verify the completed profile, and attempt a
reverse-order rollback if any intermediate route fails. Static Windows v1.5.3
analysis recovered the complete Directly Output Inputs transformation. It is
now a confirmation-gated preset transaction with complete readback and full
rollback, and is disabled at 192 kHz where Mixes B–D and the patch bay do not
exist. Its exact final-state fixture passes; live validation below 192 kHz is
still pending.

## Phase 6: build the desktop application

Current status: the application shell, all documented OCTA settings pages,
typed draft model, sample-rate write path, diagnostics, icon, AppStream
metadata, desktop launcher, and user-local installer are implemented. The
installed application was validated on 2026-08-27, and no cron/systemd job or
background process was installed. The Inputs page now has live readback and
verified writes for gain/sensitivity, phantom, phase, low-cut, Hi-Z,
compressor enable/bypass, and the mapped dynamics fields. Input 2 phantom was
physically exercised on/off with full snapshot confirmation and restored off.
Pair-scoped compressor stereo link is also live following static driver
mapping and physical verification; other pages remain deliberately unbound
until their protocol entries meet the evidence rules.

The System page's clear-mute/solo action is now live. It uses the verified
per-strip mute and solo addresses across Direct Mix A–D (hardware inputs and
WAVE OUT channels), skips flags that are already clear, and accepts success
only after a complete mixer readback contains no remaining mute or solo flag.

Direct Mix hardware-input strips, patch-bay routes, and reverb now also use
live full-snapshot state and verified per-control writes. Reversible tests of
Mix D Input 1 mute, OUTPUT 9–10 routing, and reverb type all succeeded and were
restored to their original values. The attached device accepts type writes but
currently ignores otherwise valid pre-delay/time DT1 frames, so those two
parameters remain an explicit evidence item. All ten computer-playback channels and
both left/right input/output master paths now have verified writes. Reversible
Mix D tests covered a stereo-linked WAVE OUT mute, master stereo-link, and
packed -1 dB/0 dB master volume, restoring every original value.

Auto-Sens now supports per-input selection, an explicit sensitivity-change
acknowledgement, manual finish/cancel, and in-window timed completion at 30
seconds, 1, 3, or 5 minutes. Start/cancel and start/finish were physically
tested on Input 8; full readback confirmed its original 50.0 dB sensitivity
after both tests.

All eight analog input meters are now live in the Inputs page using the
physically verified `00 0a 00 01` DT1 stream and the capture-derived 14-bit
dBFS mapping. Mixer communication now uses shareable ALSA sequencer clients,
so meter traffic, once-per-second hardware-originated full snapshots, and
verified control writes coexist without taking the raw control port hostage.
Normal close and Ctrl+C both disable meter streaming; post-close capture
confirmed that no frames or application process remain.

Periodic hardware refresh now keeps hardware truth current without overwriting
a user's unsaved Direct Mix edits: dirty or in-flight drafts are preserved until
they are applied or discarded. Local preset saves use a same-directory temporary
file, `fsync`, and atomic rename so a failed write cannot truncate a prior preset.
System controls whose read/write addresses are not yet verified are visibly
disabled rather than appearing actionable.

Live preamp and compressor-output meters now follow the same ALSA-first
architecture as control writes. The kernel owns the reserved vendor cable and
exports cached 14-bit meter values plus a one-second `Meter Stream` lease. The
panel renews the lease only while open. Live tests proved input frames update,
normal operation holds the lease, an idle lease expires, and even a forced
process exit returns the stream to Off automatically. This replaces the stale
userspace sequencer path that could not coexist with the dedicated kernel MIDI
client.

The passive front-panel capture assistant now records both directions of every
reversible experiment and finishes with an idle restored-state capture. It
produces separate action/restore control and all-traffic diffs, records the
initial value as the final physical state, and requires an explicit
`--allow-risky` acknowledgement for phantom, initialize/reset, hardware
backup/recall, or power-off experiments.

Kernel packaging now installs the dedicated audio and MIDI transport as a
single transaction. The exact-kernel installer backs up prior update modules,
removes obsolete single-module precedence, reloads the pair in dependency
order, verifies the snapshot and meter ALSA controls, and rolls back on any
load/precedence/device failure. It temporarily masks socket activation during
reload, safely unbinds only interfaces owned by `snd-usb-audio` if a stale
reference blocks removal, retries slow PipeWire synchronization, and always
unmasks/restarts the graph. The installed Fedora paths were verified under
`updates/octa-capture/`, with PipeWire/Pulse/WirePlumber restored and both OCTA
playback and capture devices present.

An attached-device hot-plug simulation deauthorized only the OCTA USB device
for three seconds while the control panel was running. The application stayed
alive, cleared cached hardware values and all safety confirmations while
offline, reacquired card 0 and the clock endpoint after reauthorization, and
returned PipeWire to 44.1 kHz with 10 playback and 12 capture channels. Closing
the panel left no background process.

Compressor controls now present their documented physical units rather than a
generic raw 0–127 scale. The model, preset loader, ALSA adapter, and kernel all
enforce the distinct Gate/Attack/Release/Threshold/Ratio/Gain domains. Input 2
Gate was physically tested from −48 dB to −47 dB and back, with both writes
confirmed by fresh full-device snapshots and the original value restored.

The complete dedicated Roland Capture mixer implementation has also been
synchronized from the live-tested Fedora 7.1.8 tree into the Linux 7.2
mainline worktree. The source compiles through `CC` and `LD` there with no API
errors and passes `checkpatch.pl` with zero errors or warnings. Standalone
`modpost` remains unavailable in that partial build because it has no full
kernel `Module.symvers`; the same source builds a complete module against the
running Fedora kernel headers.

The four sample-rate paths have now also completed a rollback-safe repeated
live audit: two passes through 48, 96, 192, and 44.1 kHz (eight transitions)
confirmed the USB hardware clock, PipeWire graph rate, and the expected OCTA
10/12-channel topology below 192 kHz and 4/4 topology at 192 kHz. The test
restored the original 44.1 kHz state automatically.

The GUI and CLI now share a device snapshot type and sanitized support-bundle
export. Local presets support validated load, save-as, rename/duplicate flow,
revert, model/schema checking, import size limits, and dirty-state display.
The panel and CLI can now transactionally apply every protocol-verified preset
field. The transaction captures an original full snapshot, validates every
mixer and dynamics range, requires explicit acknowledgement before enabling
phantom power, gates 192 kHz capabilities, rereads the full device, and rolls
earlier writes back if a later operation fails. It applies the physically
verified reverb parameters and rejects unmapped system changes during preflight
instead of silently omitting them. This remains explicitly separate from the
still-unmapped device-resident Backup All / Recall All feature.

Live verification exported the attached unit, reapplied it as a byte-identical
no-op, then changed Input 2 Gate from raw 22 (−48 dB) to raw 23 (−47 dB) and
back through the whole-preset path. Fresh exports confirmed both states, Input
2 phantom remained off, and the complete restored settings JSON matched the
original. Preset validation now requires both channels in each adjacent
compressor-link pair to agree, and the verified pair control participates in
the same transactional apply/rollback path.

Static analysis of the user-supplied Windows v1.5.3 control panel and kernel
driver maps what that software labels as Backup All, Recall All, and five
Initialize scopes. It covers English resources, MFC handlers, IOCTL
`0x22225c`, the driver dispatcher, and exact checksum-bearing DT1 construction.
It does not yet prove that those writes are sufficient or correctly interpreted
by the attached v1.51 device. Two authorized Backup trials left USB control
unresponsive until a power cycle. The second USB capture proves Linux emitted
the exact Windows cable-2 packet for address `00 00 00 01`, value `1`, then
made no request for 10 seconds. Endpoint analysis further proves that OUT URB
completed, endpoint `0x86` stopped returning data about 35 ms later, the first
later EP0 read failed, and later endpoint-`0x06` OUT still completed while
continuous endpoint-`0x82` traffic persisted. Therefore neither packetization,
premature RQ1, nor whole-device USB removal explains the failure. Firmware
analysis now supplies the DT1 semantics and standalone persistence workflow;
the remaining question is whether external memory fails or that workflow
deadlocks the control-response path. The ALSA action control remains removed
and all desktop memory actions remain disabled. Recall and Initialize were not
attempted.
The sample-rate transport itself now enforces bounded readback instead of ever
returning success after confirmation expires; its undecoded vendor status byte
is retained in shared state and diagnostics without assigning unsupported lock
semantics. `octa status` also reports that raw byte next to the verified live
hardware rate, clearly labeling its meaning as undecoded; this gives capture
experiments a common observable without prematurely presenting it as a digital
lock indicator.
Read-only USB identity enumeration now supplies bus/address, serial, and device
revision to the GUI. The app labels firmware as unavailable rather than
misrepresenting the USB revision, includes only revision and device count in
sanitized diagnostics, and suppresses ambiguous writes when more than one unit
of the selected model is present.
System/light/dark theme selection and navigation choices now use eframe's
normal per-user persistence. Only UI preferences are saved there; editable
hardware drafts and preset contents remain separate.
The mixer grid now supplies per-channel AccessKit names for compact checkboxes
and sliders, all seven pages have `Ctrl+1`…`Ctrl+7` navigation, and eframe's
keyboard focus and zoom behavior remains enabled.

1. Prototype Linux-native toolkits against USB access, real-time meters,
   packaging, accessibility, HiDPI, and desktop integration. Prefer a
   memory-safe Rust stack and keep protocol/state crates UI-agnostic.
2. Build the shell: device selector, connection state, navigation,
   transactional error handling, and diagnostics.
3. Add pages in risk order: status/rate/clock, preamps, mixer, dynamics, patch
   bay, then presets and persistent operations.
4. Use optimistic UI only for reversible controls with reliable readback;
   otherwise show pending state until the device confirms a write.
5. Throttle meters and serialize commands so rendering cannot starve audio or
   saturate the USB control endpoint.
6. Persist only application preferences locally. Keep hardware state and
   exported presets separate and explicitly labeled.
7. Package the app with an icon, `.desktop` entry, metadata, udev permissions,
   and distribution-friendly artifacts. Install no cron or systemd user job.

Deliverable: a native Linux OCTA/QUAD control panel covering every protocol
operation proven in Phases 3-5.

## Phase 7: verification and release

- Compare every implemented operation with the Roland control panel and front
  panel across restarts and cold plugs.
- Test simultaneous audio, MIDI, and control traffic under load.
- Verify all channels and rates with objective recorded-signal analysis.
- Test permissions and failure behavior without root after installation.
- Test keyboard-only use, accessible labels, HiDPI, theme changes, device
  removal during edits, reconnects, and multiple connected devices.
- Verify closing the app leaves no background poller and normal audio keeps
  working.
- Document unsupported firmware/hardware combinations explicitly.
- Package the userspace utility and UCM data through normal distribution paths.
- Maintain regression fixtures from sanitized captures; do not include Roland
  binaries or confidential material.

## Immediate next actions when this project resumes

The current completion gate is tracked in `docs/COMPLETION-AUDIT.md`; it is the
authoritative checklist for remaining live evidence rather than a claim that
implemented controls are already verified.

The native `eframe`/`egui` application, shared diagnostic CLI, and dedicated
kernel mixer now cover sample rate, decoded clock source/lock state, preamps,
compressors, Auto-Sens, Direct Mix A–D, patch bay, reverb, meters, transactional
local presets, and explicitly disabled hardware-memory/reset placeholders. The
attached OCTA has provided live reversible evidence for the ordinary control
families. An isolated 10 → 11 → 10 experiment proved LCD Contrast is
device-local: it changed no MIDI, USB control, clock telemetry, or complete
mixer-snapshot byte. A subsequent OFF → ON* → OFF capture proved VS Expand
also emits no MIDI/control event or clock-telemetry change. Digital AUTO → OFF
→ AUTO is complete and proved device-local across USB control, MIDI, clock
telemetry, and complete mixer snapshots. Auto Power Off is now classified from
the reconstructed v1.51 runtime as a local inactivity timer with no proven
host command or readback. Static analysis of Roland's v1.51 updater is now an explicit
second evidence path: the Blackfin flash image, its boot entry, and both
application-bank entries have been mapped without executing or flashing it.
That work is intended to distinguish device-local persistence from hidden host
commands; it does not authorize speculative live writes.

1. Continue tracing the reconstructed runtime's USB/MIDI dispatcher and
   persistence store. The real `midi` device descriptor, complete-message MIDI
   state machine, OCTA model-`00 00 4d` DT1 constructor, completed-message
   parser, and registered-class address dispatcher are now identified. The
   `00 00 00 01` Backup/Recall address is an ordinary registry lookup, not a
   top-level opcode. Its dynamically constructed entry and setter are now
   recovered: payload `1` posts selector 5 (Backup), while payload `0` posts
   selector 6 (Recall). The complete event handoff and persistence consumer are
   also recovered. Backup writes all five domains to `extmem`, waits about 3.33
   seconds, and releases its lock; Recall follows a separate restore path.
   There is no firmware evidence for a missing Windows session prerequisite.
   The failed capture localizes the hang to an asymmetric response-path fault:
   MIDI IN and EP0 response handling fail while MIDI OUT and endpoint `0x82`
   remain alive. Firmware assembly now shows that Backup holds its persistence
   mutex across fallible external-memory preparation and five writes, ignores
   every return value, and reaches unlock only if all calls return. This is a
   sufficient firmware-level mechanism for the observed permanent wedge even
   though static evidence cannot identify the exact blocking operation.
   Classify hardware persistence unavailable on this unit and do not use
   another live persistence action. Classify unresolved front-panel behavior
   from firmware and automatic attached-device readback; do not wait for manual
   knob/button experiments. LCD Contrast, VS Expand, and Digital captures are
   retained under `evidence/incoming/` as completed evidence.
2. Implement only addresses and domains confirmed by those OCTA captures, with
   readback and rate-capability gating.
3. Do not repeat Backup/Recall or scoped Initialize writes on the attached
   unit. The v1.51 firmware proves the DT1 selector, standalone external-memory
   workflow, unchecked fallible calls, and unlock-after-return structure. This
   explains how the action can permanently wedge without a packet error, but
   offers no safe host-side recovery. Preserve the exported baseline and
   captured failed transaction for comparison.
4. Complete sustained simultaneous audio/MIDI/control traffic, suspend/resume,
   XRUN, and interactive accessibility verification.
5. Prepare only the format, alternate-rate, automatic-clock, and MIDI-cable
   quirks for upstream ALSA review; keep the full mixer in userspace.
6. Capture one Windows session containing control-panel startup plus exactly one
   low-risk reversible control change; use it to establish the trace/ledger
   format before collecting the full corpus.

The trace format and offline normalizer/differ are now implemented in
`tools/octa_trace.py`; the controlled acquisition procedure and sanitized corpus
layout are documented in `docs/CAPTURE-WORKFLOW.md`. The next external evidence
needed is the first three-capture experiment from a supported host with the
official panel already installed.

For controls reachable on the physical OCTA front panel, that experiment is now
automated by `scripts/capture-front-panel.sh`: it performs passive usbmon
baseline/action/baseline collection, normalization, control pairing, privacy
hashing, diff generation, manifest validation, and raw-capture cleanup.

The first physical experiment was completed for Input 1 COMP off-to-on. It
showed that front-panel compressor changes do not emit host-visible USB control,
bulk MIDI, or interrupt events while streaming. This rules out passive event
observation as the command source for that setting; an official control-panel
capture is still needed to observe its active read/write protocol.

LCD Contrast was subsequently captured at 10, 11, and restored 10 with full
mixer snapshots at both values. The snapshots were byte-identical and neither
direction emitted any host-visible event, establishing that it is a
device-local display setting rather than a missing host control.

## 2026-08-28 external-clock acceptance

The hardware gate is complete. A QUAD-CAPTURE COAXIAL OUT (3/4) connected to
the OCTA-CAPTURE COAXIAL IN (9/10) supplied a stable 48 kHz clock. Repeated
ALSA readback proved external lock, automatic internal fallback when the QUAD
USB source was removed, and automatic external relock when it returned. The
QUAD's prepared kernel quirk was also brought in line with the repository
patch, exposing its 44.1/48/96 kHz four-channel and 192 kHz two-channel PCM
alternate settings; live 48 kHz playback used altsetting 2 at exactly 48 kHz.

## Non-goals and cautions

- Do not rewrite working ALSA USB infrastructure as a standalone driver unless
  evidence proves the generic driver cannot support the hardware correctly.
- Do not add Roland hardware-mixer controls or generic mixer/MIDI infrastructure
  to the upstream kernel series. Keep vendor control policy in userspace.
- Do not translate decompiled proprietary code line-for-line.
- Do not treat a successful stream open as proof of correct sample framing,
  channel order, clocking, or long-term stability.
- Do not advertise untested rates or controls.
- Do not pursue a complete driver decompilation merely as a progress metric.
  Recover only what is required to explain and reproduce device behavior.
