# Completion audit

## QUAD-CAPTURE completion (2026-08-28)

| Surface | Result | Evidence |
|---|---|---|
| Control transport | verified-live | model `00 00 56`, 59-byte snapshot, hidden USB-MIDI cable 1; Windows `RDWM1117.SYS` 1.5.3 parser and dispatcher |
| Preamps | verified-live | low-cut reversible write/read/restore; phase and sensitivity mapped to bounded native ALSA controls |
| Compressors | verified-live | bypass packing corrected from the Windows snapshot parser; all six parameters and stereo link readable/writable with full snapshot confirmation |
| Direct monitor mixer | verified-live | all three 24-bit fixed-point levels decoded; Input 1 changed 72→71→72 and restored by hardware readback |
| Auto-Sens and digital I/O | verified-live | Auto-Sens, method, margin, Digital In, and three-way Digital Out each changed, reread, and restored through exact driver address mappings |
| Presets and UI | verified-live | QUAD JSON export/apply round-trip, desktop smoke, Ctrl+1–7 navigation, and AT-SPI accessibility audit |
| Audio with controls | verified-live | simultaneous S32_LE 4-channel playback, 6-channel capture, and 90 ALSA control reads at 48 kHz |
| Installation | verified-live | paired modules, release GUI/CLI, desktop metadata, both attached devices, and no cron/systemd/background process |

Roland's physical phantom, Hi-Z, ground-lift, MONO, MIX, and output-volume
controls are not host settings and are not represented as writable software
controls. Firmware update, initialize, and internal-memory backup/restore remain
disabled because they are outside live control and have broader recovery risk.

This is the requirement-by-requirement gate for declaring the native Linux
control panel complete. A passing unit test is not substituted for attached
hardware evidence. `verified-live` means the behavior and readback were tested
on USB `0582:0120`; `implemented` means the UI/code exists but the stated live
gate remains open.

| Requirement | Current status | Authoritative evidence | Remaining gate |
|---|---|---|---|
| Native desktop UI; keyboard, zoom, and screen-reader semantics; no daemon, cron, or user service | verified-live | passing live install/startup checks; `scripts/verify-keyboard-ui.sh` renders seven distinct Ctrl+1…7 pages and verifies zoom; `scripts/verify-accessibility.sh` observed 43 live AT-SPI nodes, all navigation labels, and no unnamed interactive Status-page control | none for the installed desktop integration |
| Device discovery and duplicate-device safety | verified-live | installed `octa status`; `src/identity.rs`; identity tests | multi-device test when a second supported unit exists |
| 44.1/48/96/192 kHz clock control and rate-dependent channel counts | verified-live | `docs/CONTROL-MATRIX.md`; `docs/WINDOWS-RE-EVIDENCE.md`; rollback-safe `scripts/stress-rate-transitions.sh` completed two cycles/eight transitions with USB clock, PipeWire clock, and 10/12 or 4/4 topology readback before restoring 44.1 kHz | none for repeated automatic transitions |
| Internal/external clock source and lock state | verified-live | attached QUAD-CAPTURE COAXIAL OUT provided an exact 48 kHz source; twenty-sample sequences verified internal → external locked → AUTO fallback to internal → external relock. `src/usb_telemetry.rs`; UI tests cover every presentation; `scripts/verify-clock-state.sh`; `docs/EXTERNAL-CLOCK-TEST.md`. | none; external-unlocked remains a supported decoded state, while AUTO source loss was physically proven to fall back to internal |
| Preamps: 0–50 dB sensitivity, phantom, phase, low-cut, Hi-Z | verified-live | `docs/CONTROL-MATRIX.md`; typed domains in `src/model.rs`; full read/write/readback tests | none for OCTA |
| Compressor/gate and stereo link | verified-live | `docs/CONTROL-MATRIX.md`; `docs/WINDOWS-RE-EVIDENCE.md` WIN-013 | none; official OCTA panel/driver prove the broader public-map Knee field does not apply |
| Auto-Sens selection/start/finish/cancel | verified-live | `docs/PROTOCOL.md`; kernel-backed Input 8 trials; resulting sensitivity readback | no device running-state response exists; UI must continue to label its timer as host-side |
| Direct Mix A–D, masters, mute/solo/link/pan/send | verified-live | `docs/CONTROL-MATRIX.md`; full snapshot readback; 369 concurrent snapshot/clock iterations over 120 seconds while both streams remained running | none for read/control coexistence |
| Patch bay and Initial/Multi-Monitor profiles | verified-live | transactional writes/readback and rollback in `src/preset_apply.rs` | none for component routes |
| Directly Output Inputs profile | verified-live | Windows routine recovered; exact final-state fixture passes; installed `octa direct-output-verify --i-understand-routing-will-change` applied the profile on attached hardware, matched complete target readback, restored the exact original state, and confirmed the restoration | none |
| Reverb type and parameters | verified-live | `docs/WINDOWS-RE-EVIDENCE.md`; read/write/readback tests | none for OCTA |
| Input/compressor-output meters | verified-live | `src/meter.rs`; observed frame fixture; ALSA controls; two-minute live control/audio stress produced no XRUN or USB/PipeWire error log | none for bounded attached-device load |
| Local preset save/load/validation/rollback | verified-live | `src/preset.rs`; `src/preset_apply.rs`; a fresh installed-CLI export and no-op apply confirmed every mapped field from attached-hardware readback after the rate stress run | none for mapped fields |
| Hardware Backup All / Recall All | failed-live/unavailable | Windows UI/driver analysis and v1.51 firmware independently prove the send-only cable-2 DT1, selectors, event handoff, and standalone external-memory workflows. Endpoint analysis proves the Backup OUT URB succeeded; EP0 and the later MIDI response failed while endpoint `0x82` persisted. Firmware assembly proves Backup holds its persistence mutex across unchecked fallible external-memory calls. The kernel action and userspace invocation paths are absent. | unavailable on this attached unit; local transactional presets provide the safe supported persistence path |
| Initialize all/component scopes | verified-static/unavailable | Windows driver analysis and v1.51 firmware independently confirm DT1 address `00 00 00 02`, scopes `0..4`, registry setter, event handoff, and All/Mic Pre/Direct Mix/Reverb/Patch Bay domain mapping. Initialize shares the unsafe persistence task; no kernel or userspace action path is exposed. | unavailable on this attached unit; retain protocol documentation only |
| Live device-originated panel changes | verified-live | open-panel polling of clock and complete mixer snapshot; generation counter; 369 readback iterations while both streams ran; reconnect test | none for live polling and refresh |
| Hot-plug and removal while the panel is open | verified-live | `scripts/verify-hotplug-ui.sh` rendered distinct connected/offline/reconnected states, kept the panel alive, cleared stale state/safety confirmations, reacquired the device, and verified restored ALSA clock plus 10/12-channel PipeWire topology | none for the requested hot-plug behavior; deliberate mid-write USB fault injection is outside normal acceptance testing |
| Cold boot persistence | verified-live | current boot journal discovers Roland USB at `15:29:55`, initializes the vendor mixer at `15:30:14`, and the installed live verifier confirms running audio/control state afterward | none for the installed Fedora build |
| LCD, VS Expand, Digital, Auto Power Off | classified device-local | reversible captures for the first three; reconstructed v1.51 utility/timer implementation for Auto Power; `docs/FIRMWARE-RE-EVIDENCE.md` | no host control may be enabled without positive command and readback evidence |
| MAIN OUT/PHONES knobs and monitor switch | classified physical-only | Roland panel/manual inventory; no host protocol control exposed | none unless positive host-protocol evidence is found |
| Diagnostic CLI and privacy-safe support export | verified-live | installed `octa status`; live schema-1 `support-bundle` JSON; diagnostics unit test proves serialization excludes identity fields; installed verifier rejects a stale PATH-shadowing CLI | none |
| ALSA/PipeWire audio preserved | verified-live | both streams remained running at 44.1 kHz through 369 telemetry/snapshot iterations over 120 seconds; no XRUN/USB/PipeWire errors; eight rate transitions restored 44.1 kHz; final installed audit shows both streams running with correct 10/12-channel nodes | none for the requested audio-preservation scope; system suspend/resume is a separate platform integration test |
| Desktop packaging and installed metadata | verified-live | binary byte comparison, desktop-file and AppStream validation in `scripts/verify-live-install.sh` | distribution package publication is separate from functional completion |
| Kernel streaming fixes suitable for upstreaming | implemented/tested locally | reduced changes are confined to `quirks-table.h` and `quirks.c`; current mainline compiles every `sound/usb` object with `W=1`; `UPSTREAM.md` | final mail-ready commit messages and current-hardware test attachments remain |

The goal must remain active while any objective-backed row is partial or merely
implemented. Destructive operations are not silently exercised as part of an
audit, and device-local settings are not represented as host-controllable just
to make the matrix appear complete.
