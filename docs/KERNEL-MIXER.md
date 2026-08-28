# Roland Capture kernel mixer research

> **Historical design record:** this implementation remains useful protocol and
> hardware-validation research, but it is not part of the upstream submission
> plan. Upstream work is limited to streaming quirks and UCM profiles. The full
> hardware control plane remains in the optional userspace application; see
> [`../UPSTREAM.md`](../UPSTREAM.md).

## Superseded design decision

Keep OCTA/QUAD audio streaming inside `snd-usb-audio`. Descriptor fixes,
alternate settings, rate synchronization during stream preparation, MIDI cable discovery, and Roland implicit
feedback remain quirks because they adapt non-standard hardware to the generic
USB-audio engine.

Add substantial control support in a dedicated
`sound/usb/mixer_roland_capture.c/.h`. The module exposes stable device
mechanisms as ALSA controls. The desktop application remains responsible for
presets, safety confirmations, Auto-Sens workflow, graphical meters, and other
policy or presentation.

## Current-mainline constraint

OCTA-CAPTURE's quirk table declares fixed PCM and MIDI endpoints, then ignores
interfaces 3 and 4. It has no standard USB Audio Class mixer interface.
`snd_usb_mixer_apply_create_quirk()` is consequently never reached for this
device. Adding an OCTA case beside Scarlett would compile but never execute.

The first kernel series therefore needs an explicit vendor-mixer creation path.
The proposed shape is:

1. Add a `QUIRK_AUDIO_ROLAND_CAPTURE` composite-quirk type for the vendor
   control interface.
2. Refactor mixer allocation/lifecycle so a vendor initializer can create an
   ALSA mixer without first parsing nonexistent UAC mixer descriptors.
3. Dispatch that initializer to `snd_roland_capture_init()` in the dedicated
   source file.
4. Preserve the normal `usb_mixer_interface` list, disconnect, suspend/resume,
   `snd_device` cleanup, and ALSA control registration paths.

Interface 3 triggers vendor-mixer creation, but OCTA control SysEx actually
uses the fixed MIDI endpoint on interface 2. The control driver opens the
dedicated host-output and device-input control substreams through ALSA's
existing in-kernel raw-MIDI API. It does not submit competing USB URBs or add a
second client interface to the shared USB-MIDI driver.

The verified endpoint masks are asymmetric: host output cables are `0x0005`
(ordinary MIDI cable 0 plus control cable 2), while device input cables are
`0x0003` (ordinary MIDI cable 0 plus control cable 1). Those masks naturally
produce two raw-MIDI substreams in each direction: conventional MIDI is
subdevice 0 and the corresponding control cable is subdevice 1. The mixer opens
subdevice 1 for input and output using `snd_rawmidi_kernel_open()`, so ALSA's
existing exclusive-open and lifecycle rules reserve only the control paths
while a transaction or bounded meter session is active.
Cable 0 remains available to normal MIDI applications without any Roland hook,
packet interception, RCU callback, or exported API in `sound/usb/midi.c`.

## Protocol invariants

- Roland manufacturer ID `0x41`, device ID `0x10`, OCTA model ID `0x4d`.
- DT1 writes use command `0x12`; RQ1 reads use command `0x11`.
- Validate framing, model, address, payload length, and Roland checksum.
- Exactly one request may be outstanding per device.
- Bound every wait and return real errors; never report success after timeout.
- Cache confirmed hardware state, not speculative requested state.
- Serialize ALSA callbacks, refreshes, notification handling, suspend/resume,
  and disconnect.
- Do not persist, initialize, or upload firmware from probe.
- Coalesce successive read-only ALSA control refreshes onto one hardware
  snapshot for 500 ms. The desktop's one-second poll therefore sees coherent
  state without issuing the 1,146-byte request once per control family.
- Never apply that coalescing window to write confirmation; reversible writes
  always force fresh full-state readback.

## Reviewable control series

1. Infrastructure, OCTA match, lifecycle, and read-only snapshot diagnostics.
2. Sensitivity/gain with exact 0–50 dB, 0.5 dB domain and readback.
3. Phantom, Hi-Z, phase, low-cut, and compressor bypass.
4. Compressor parameters after user-facing units are fully mapped.
5. Direct Mix input and WAVE OUT strip controls.
6. Direct Mix masters, patch bay, and reverb.
7. Safe system settings; persistent and destructive operations remain
   userspace workflows unless maintainers explicitly request otherwise.
8. QUAD/STUDIO capability tables after physical validation.

Each writable series needs a reversible hardware test, restoration evidence,
unplug/suspend tests, concurrent PCM load, and `amixer`/PipeWire verification.

Unknown messages do not change the target architecture. For each gap, collect
baseline/action/baseline pcaps, correlate the official-panel action with the
USB-MIDI transfer, and use disassembly only to locate the relevant command
construction or response parser. Record independent semantics and tests; never
copy proprietary implementation code.

Model identity is an evidence boundary. The public six-setting broadcast trace
uses STUDIO-CAPTURE model `00 00 6b`; the OCTA uses `00 00 4d` and does not emit
those six frames after its 1,146-byte snapshot read. Therefore the kernel does
not expose the STUDIO observations as OCTA ALSA readback. The public OCTA
power-on capture does establish a one-byte `00 02 00 02` broadcast, but its
reset/action semantics remain unexposed until a reversible OCTA test confirms
them. The remaining safe writes, persistence, initialization, and other
documented settings stay in the plan.

## Userspace transition

The desktop app will discover a complete marker control before selecting the
kernel backend. It must use one backend for a device session:

- kernel controls present and complete: use ALSA controls;
- controls absent: use the existing direct SysEx compatibility backend;
- partial/unknown ABI: show diagnostics and do not mix kernel and direct writes.

The direct backend remains valuable for older distribution kernels and protocol
development. Once a control ABI is upstream, both backends must share the same
typed range validation and readback tests.

## Development trees

Kernel RFC work lives in `/home/jmainguy/Github/jmainguy/linux-roland`, a
current-mainline clone. The lifecycle/transport RFC exposes the asymmetric
control cables as ordinary raw-MIDI substreams and opens the dedicated pair
through ALSA's existing in-kernel raw-MIDI interface. It assembles and validates
Roland responses, caches the OCTA full snapshot, and exposes eight sensitivity
controls with verified-write readback semantics. No changes remain in the
shared USB-MIDI implementation or header. A mainline
`W=1` build successfully compiles every `sound/usb` object and links
`snd-usb-audio.o` plus `snd-usbmidi-lib.o`; kernel `checkpatch` reports zero
errors or warnings for the dedicated mixer file (with style-level CHECK
suggestions still available for cleanup). Final partial-tree `modpost` is not
meaningful without the complete kernel `Module.symvers`.

This was rerun against the Linux 7.2 worktree on 2026-08-27. With
`KBUILD_MODPOST_WARN=1`, Kbuild also emitted both `.ko` files after the clean
`W=1` compile; their unresolved-symbol warnings are the expected consequence
of the partial tree lacking the top-level `Module.symvers`, so those artifacts
are compile/link evidence only and must not be loaded. The live-loadable Fedora
modules continue to come from the matching prepared 7.1.10 kernel-devel tree.

Fedora's installed kernel-devel tree
is useful for matching packaged module builds, but it cannot compile an
arbitrary current-mainline `sound/usb` checkout when internal ALSA APIs differ.
Validate mainline patches in a prepared mainline build tree; validate a local
Fedora backport separately against Fedora's matching source package. The
Fedora backport source RPM has been preserved and extracted at
`/home/jmainguy/Github/jmainguy/linux-roland-fedora-7.1.8`; a backport must be
built against the exact running kernel-devel headers and a rollback module
prepared before replacing the active driver.

The backport passed that gate on Fedora kernels 7.1.8 and 7.1.10 on
2026-08-27. It must be compiled as an
external module set with `make -C /usr/src/kernels/$(uname -r) M=... modules`,
not merely with an SRPM tree regenerated by `olddefconfig`: Fedora's prepared
generated headers contain build-time ABI details required for the runtime
`struct module` layout. The resulting `snd-usbmidi-lib.ko` and
`snd-usb-audio.ko` loaded successfully without rebooting. The mixer exposed
`Input 1 Sensitivity` through `Input 8 Sensitivity`; read-only queries matched
the device, and a reversible Input 8 50.0 → 49.5 → 50.0 dB test passed exact
post-write snapshot verification.

The next preamp-switch slice adds 34 boolean controls: phantom, low-cut, phase,
and compressor enable on all eight inputs, plus Hi-Z on Inputs 1–2. Compressor
enable deliberately translates to the device's inverted bypass bit. Input 2
phantom was physically toggled off → on → off and restored, with a fresh full
snapshot confirming each transition. Userspace now consumes the actual ALSA
preamp state and disables unsupported compressor parameters and Auto-Sens,
rather than mixing kernel and direct writers.

Six compressor/gate parameters per input are now present as bounded 0–127
integer controls. The kernel writes the verified per-input offsets and performs
a full snapshot before accepting the value. Input 2 Gate was tested 22 → 23 →
22 while its compressor was disabled, and the original value was restored.

Direct Mix A–D input mute, solo, and stereo-link state adds 120 boolean
controls. A reversible Mix D Input 10 mute test passed off → on → off. Since a
full control surface will contain hundreds of elements, ordinary element gets
return a validated cache; reading `Roland Capture Snapshot Generation` performs
one serialized full-device refresh for a complete userspace poll. This avoids
one SysEx round trip per element while retaining explicit live readback.

Direct Mix input pan (`−100…+100`), level, and Mix A reverb send are also live.
The latter two expose mute plus `−71…+12 dB` through an exact fixed-point table
and ALSA TLV metadata. Reversible pan, level, and send tests each moved one step
and restored with full-snapshot confirmation.

The identical switch/pan/level machinery now covers all 40 WAVE OUT strips,
selected by the `0x07` address family instead of hardware inputs at `0x06`.
Mix D WAVE OUT 10 mute, pan, and level each passed a one-step reversible test
and were restored.

The master layer adds 29 controls: input and output stereo-link switches,
left/right input and output master levels, and input/output-master linking for
all four mixes, plus Mix A reverb return. Mix D input master, Mix D
input/output link, and Mix A reverb return passed reversible one-step tests and
were restored. Stereo-linked master behavior was also observed in the hardware
snapshot: changing the left input master changed the right master with it.

Patch-bay source enums are now exposed for all five physical output pairs, and
global reverb exposes type plus bounded pre-delay/time controls. Output 9–10
passed WAVE OUT 9–10 → WAVE OUT 7–8 → WAVE OUT 9–10, and reverb type passed
Room → Small Hall → Room; all values were restored. Public protocol type data
corrected the parameter ABI to pre-delay `0…12` and time `0…49` (0.1–5.0 s).
The attached device currently ignores otherwise valid pre-delay/time DT1
frames while accepting type writes, so those two parameter writes remain an
open evidence item rather than being claimed physically complete.

Userspace preserves dirty Direct Mix drafts across the once-per-second hardware
refresh while still updating its separate hardware snapshot. This avoids losing
an edit between manipulation and Apply. Preset export is crash-safe at the file
level through a same-directory temporary file, `fsync`, and atomic rename.

Auto-Sens now uses eight ALSA selection controls plus a three-state action
control (Off, Running, Cancel). Because the hardware exposes no readable
running register, selection is staged in the kernel and every action is
followed by the normal full snapshot; Finish/Cancel verification is the fresh
selected-input sensitivity readback. Five milliseconds between the ten DT1
messages is required by the USB-MIDI transport. An Input 8-only Start → Cancel
test passed, returned the state to Off, and preserved its original sensitivity
of 100 half-dB steps (50.0 dB).
