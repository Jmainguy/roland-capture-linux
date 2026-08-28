# OCTA-CAPTURE control coverage matrix

Source inventory: Roland OCTA-CAPTURE owner's manual v1.6, especially printed
pages 43–62. “Documented” means the control and its user-facing semantics are
specified by Roland; it does not mean the host-device protocol is known.

| Surface | Controls | Documented constraints | Model/UI | Transport |
|---|---|---|---|---|
| Device | sample rate | 44.1/48/96/192 kHz | complete | verified read/write |
| Device | clock source/sync | internal, external locked at reported Hz, or external unlocked | live status in UI, CLI, and support bundle | verified persistent kernel endpoint ownership and internal/external transitions. An attached QUAD-CAPTURE provided exact 48 kHz S/PDIF; twenty-sample runs proved external lock, AUTO fallback to internal on source loss, and external relock on restoration. External-unlocked remains decoded/presented when reported. |
| Host audio driver | ASIO buffer size, streaming-performance slider, ASIO-in-light, WDM port layout | Windows driver preferences, not OCTA hardware state | intentionally not reproduced | replaced by PipeWire/ALSA configuration where applicable |
| Cross-model map fields | input selector, sync mode, paired mode, solo dim, Auto-Sens automatic/margin | absent from the OCTA v1.6 utility menu | hidden from OCTA UI; retained only for preset-schema compatibility | public-map/STUDIO evidence is not treated as OCTA feature evidence |
| Preamp 1–8 | gain | 0–50 dB, 0.5 dB steps | validated | verified read/write |
| Preamp 1–8 | +48 V phantom | boolean | represented | verified read/write; safety-gated |
| Preamp 1–2 | Hi-Z | boolean; unavailable on 3–8 | validated | verified read/write |
| Preamp 1–8 | phase invert | boolean | represented | verified read/write |
| Preamp 1–8 | low cut | boolean; 100 Hz | represented | verified read/write |
| Preamp 1–8 | input meter | live 14-bit level | live dBFS bars | verified kernel-owned stream/read |
| Compressor 1–8 | gate, attack, release, threshold, ratio, gain | −∞/−69…−20 dB; 0…800 ms; 0…8000 ms; −40…0 dB; 1:1…1:∞; −40…+40 dB | real-unit bounded live controls | verified read/write and restored one-step Gate test |
| Compressor 1–8 | enable/bypass, output meter | boolean/live level | live controls and dBFS bar | verified read/write and kernel-owned stream/read |
| Compressor 1–8 | stereo link | adjacent pair | live pair control | Windows command `0x14` mapped; Inputs 7–8 off → on → off verified and restored |
| Compressor 1–8 | knee | not applicable | deliberately absent | official OCTA panel has exactly six parameter classes and driver commands `0x16..0x1b` map only Gate/Attack/Release/Threshold/Ratio/Gain to `07..0c` (WIN-013) |
| Auto-Sens | channel selection and start/stop | manual/30 s/1/3/5 min | complete | verified start/finish/cancel |
| Input Mixer A–D | link, mute, solo, pan, level | 10 inputs each | live control | verified read/write |
| Input Mixer A | reverb send | unavailable on B–D | capability-gated live control | verified read/write |
| Output Mixer A–D | link, mute, solo, pan, level | ten WAVE OUT channels | live control | verified read/write |
| Master A–D | input/output master, master link, stereo link | four mixers | live control | verified read/write |
| Reverb | type | off/echo/room/small hall/large hall/plate | live control | verified read/write |
| Reverb | return | unavailable at 192 kHz | capability-gated live control | verified read/write |
| Reverb | pre-delay, time | unavailable at 192 kHz | bounded live controls | verified read/write; Room pre-delay `0→1→0` and time `14→15→14` restored with fresh readback |
| Patch Bay | OUTPUT 1–2 through 9–10 source | WAVE OUT 1–10 or Direct Mix A–D; unavailable at 192 kHz | live control | verified read/write |
| Patch Bay | initial and multi-monitor profiles | changes several routes | transactional actions | verified component writes/readback with rollback |
| Patch Bay | directly output inputs | changes patch bay and all mixers; unavailable at 192 kHz | confirmation-gated transactional action | exact Windows profile statically recovered and live-verified; complete target readback matched, then the exact original state was restored and confirmed |
| System | LCD contrast | 0–19 | identified as device-local physical setting | live 10→11→10 emitted no MIDI/control/telemetry change; complete 1,146-byte snapshots at 10 and 11 were byte-identical; no host readback exposed |
| System | VS Expand | off/on; incompatible with 192 kHz; power cycle required | identified as device-local physical setting; software write disabled | live OFF→ON* →OFF emitted no MIDI/control event and no clock-telemetry change; no host readback exposed; restored before restart; active vendor command remains unproven |
| System | digital input | off/auto; unavailable at 192 kHz | identified as device-local physical setting; software write disabled | live AUTO→OFF→AUTO emitted no MIDI/control event; normalized clock telemetry and complete host-readable snapshots were identical at AUTO and OFF; restored to AUTO; no host readback exposed |
| System | clear all mute/solo | all Direct Mix input and WAVE OUT strips | live control | composed from verified per-strip writes; full readback required |
| System | auto power off | off/4 hours | identified as device-local physical setting; software write disabled | reconstructed v1.51 runtime implements a local inactivity timer and front-panel OFF/4 HOURS item; its start/cancel routines are reached only from the device event dispatcher; no mixer-snapshot field or host command/readback is proven |
| Local presets | export/apply preamp, mixer, reverb type, patch bay | validated; phantom confirmation; capability gating | transactional live action | successful full readback physically verified; rollback implemented; unresolved fields rejected |
| Persistence | hardware backup all / recall all | preamp, mixer, reverb, patch bay | unavailable on attached unit | two exact Backup trials wedged control responses until power-cycle; USB evidence proves OUT success, and firmware proves unchecked fallible external-memory calls while holding the persistence mutex. The action transport and UI entry points have been removed. |
| Initialize | all/mic pre/direct mix/reverb/patch bay | destructive reset scopes | unavailable on attached unit | Windows and v1.51 firmware independently confirm address `00 00 00 02`, scope values `0..4`, and the exact persistence-domain mapping, but Initialize shares the failed persistence task. It is documented without a live action entry point. |
| Physical monitor | MAIN OUT/PHONES volume, monitor-select switch | front-panel hardware controls | documented as physical-only | no host control exposed by Roland panel |
| Physical direct monitor | INPUT MIX knob | adjusts selected input-mixer master | represented by Direct Mix master controls | verified read/write through mixer master |

The Windows `DrvConfig` sample-rate combo is hardware-relevant, but it is not
a missing mixer command. Static tracing from dialog control `0x46a` through
IOCTL `0x222328` reaches the driver's serialized rate-transition worker. On
Linux that responsibility is already covered by the verified vendor-rate and
PCM endpoint-start path shared by the GUI and CLI. The adjacent ASIO buffer,
streaming-performance, ASIO-in-light, and WDM port-layout controls configure
the Windows host driver and therefore are deliberately excluded from hardware
control parity.

## Rate-dependent capabilities

At 192 kHz, only Direct Mixer A is available; reverb and patch-bay controls are
unavailable. The typed capability layer enforces this in the desktop UI. VS
Expand is also unavailable at 192 kHz.

## Numeric-scale policy

The six compressor encodings are now converted through the public type tables
and displayed in dB, milliseconds, and ratios; presets and the kernel reject
raw values outside each field's actual domain. Mixer faders use the verified
−∞/−71…+12 dB curve. Reverb pre-delay is displayed using the verified
13-value millisecond table, and time is displayed as 0.1–5.0 seconds. They
use the Windows-confirmed zero-based algorithm-bank addressing and passed
reversible physical tests on the attached unit.

Although the shared public map contains a Knee value type, the official
OCTA-CAPTURE panel and driver have no corresponding control, command, snapshot
field, label, or class. It belongs to other models and is not an OCTA parity
gap (WIN-013).
