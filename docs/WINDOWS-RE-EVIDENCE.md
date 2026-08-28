# Windows v1.5.3 reverse-engineering evidence

This ledger records reproducible static evidence from the user-supplied Roland
Windows driver archive. Original artifacts are never modified or executed.

## Frozen inputs

- `octa_w1011d_v153DL.zip`: SHA-256
  `7e70baa68b1589e9e45e90b7f94313ffa41e618dfb59556c90ea7b43499ab5c0`
- `RDDP1110.EXE`: SHA-256
  `634c140bc4e49b0d65c70d5156be19573ad3d440ac5ea24e24d3ad59974da406`
- `RDWM1110.SYS`: SHA-256
  `69030388d6b901cdbd1d72087b52f7dc5222a81ac49ffbc86bb49582c167299b`
- Ghidra 12.1.3 official distribution: SHA-256
  `93a5d11a9ad510622acaaf908c556a7b9b764d338e78a7567f3689bf5081fd54`

The durable Ghidra project and generated exports live under
`tmp/windows-v153-analysis/`. Export scripts are versioned in `tools/ghidra/`.

## Evidence ledger

| ID | Claim | Status | Evidence | Next proof obligation |
|---|---|---|---|---|
| WIN-001 | `RDDP1110.EXE` is the control-panel process and talks to the driver with IOCTL `0x22225c` | verified-static | imports and callers exported in `rddp-io-callers.txt`; wrapper at `0x14000f3d0` | none for boundary identification |
| WIN-002 | Initialize scopes All/Mic Pre/Direct Mix/Reverb/Patch Bay map to internal command `9`, values `0..4` | verified-static | menu 128 IDs `0x8063`, `0x805f..0x8062`; message-map handlers `0x1400272d0`, `0x140027420`, `0x140027390`, `0x1400274b0`, `0x140027540`; common callee `0x140027fb0`; firmware persistence handler independently maps those selectors to All and the four component domains | keep destructive reset disabled pending resolution of the shared storage path's failed-live behavior |
| WIN-003 | Internal command `9` emits OCTA DT1 address `00 00 00 02`, one-byte scope | verified-static | `RDWM1110.SYS` dispatcher `0x140006550`, command-9 case; firmware registry entry 2 and setter `0x00320c50` independently confirm the address and payload semantics | keep destructive reset disabled pending resolution of the shared storage path's failed-live behavior |
| WIN-004 | Hardware Backup All emits DT1 `00 00 00 01 01`; Recall All emits `00 00 00 01 00`; both are queued asynchronously on USB-MIDI cable 2 and the control panel returns without refresh/readback | verified-static/failed-live | English string IDs `0x808a`/`0x8089`; UI handlers `0x14001cf80`/`0x14001edd0`; driver command 7/8 helper `0x14000aad0`; queue helper `0x14001b5e0`; `corrected-backup-retry-20260827.pcapng` proves Linux emitted `24 f0 41 10 / 24 00 00 4d / 24 12 00 00 / 24 00 01 01 / 26 7e f7 00`, its OUT URB completed, and Linux then remained silent for 10 seconds. The later EP0 read returned no data; another endpoint-`0x06` OUT completed but received no endpoint-`0x86` reply, while continuous endpoint `0x82` traffic persisted. Firmware independently proves this is a standalone external-memory action, so a missing Windows setup transaction is no longer the leading explanation. | distinguish an external-memory failure from firmware synchronization failure without another live persistence write |
| WIN-005 | Directly Output Inputs is a composed mixer rewrite, not a single preset opcode | verified-static | menu ID `0x8064`, handler `0x14001eca0`, implementation `0x140016050`; command families `0x21`, `0x23..0x27`, `0x2a`, `0x2c`; exact native final-state fixture passes | live below-192-kHz apply/readback/rollback validation |
| WIN-006 | Windows reverb pre-delay/time use zero-based DT1 parameter banks `00 04 <type-1> 01/02` and the public raw ranges | verified-live | driver dispatcher command `0x12`/`0x13` cases require bank `< 5`; snapshot serializer indexes arrays with type `- 1`; attached Room pre-delay `0→1→0` and time `14→15→14` passed readback and restoration | none |
| WIN-007 | Compressor stereo link is a pair-scoped boolean DT1 at `00 05 <pair-left-channel> 05` | verified-live | driver dispatcher command `0x14`; attached Inputs 7–8 tested off → on → off with full readback and exact restoration | none |
| WIN-008 | Full-state bytes 0–4 are device-global metadata; byte 2 is the sample-rate enum (`2` = 96 kHz, `3` = 192 kHz) | verified-correlated | serializer `0x1400074e0`; attached 192 kHz raw bytes `[00,00,03,00,01]`; public OCTA 96 kHz image begins `[00,00,02,...]` | map bytes 0, 1, 3, and 4 by controlled differential evidence |
| WIN-009 | The `DrvConfig` sample-rate combo invokes the driver's coordinated rate-transition path; it is not a separate mixer SysEx control | verified-static | `CDrvPropDlg` message map at `0x14020c390`; handler `0x14002c2f0`; IOCTL `0x222328`; driver dispatch `0x1400292b0`; serialized command-6 worker `0x1400253a0`; setter chain `0x140006290` → `0x140027130` → `0x140027c20` → `0x140005fb0` | Linux preparation-time vendor-rate behavior is already live verified; continue rate-transition stress testing |
| WIN-010 | ASIO buffer size, streaming performance, ASIO-in-light, and WDM port layout in `DrvConfig` are Windows host-driver preferences rather than OCTA mixer settings | verified-static | dialog resource 187 and its draft/apply message handlers; these fields are grouped in the driver-properties launcher rather than the OCTA mixer surface | document the corresponding PipeWire/ALSA tuning separately; no device-control implementation required |
| WIN-011 | The five leading mixer-snapshot bytes are not generic OCTA utility-setting readback; only byte 2 is proven as sample-rate enum | verified-correlated | serializer `0x1400074e0`, RDDP device layout rooted at `+0x20c`, command-`0x0c` wrapper `0x14001fb30`; attached bytes stayed `[00,00,03,00,01]` at 192 kHz where Digital/VS Expand are unavailable | map LCD, VS Expand, Digital, and Power Off through separate front-panel captures or firmware evidence |
| WIN-012 | Interface-3's 8-byte interrupt packet carries external-clock frequency in bytes 3–5, source in byte 6, and lock in byte 7 | verified-live/internal | RDWM telemetry parser `0x140005220` and state updater `0x140005320`; IOCTL `0x222340`; RDDP display updater `0x14002e140`; strings `0x80ba..0x80bc`; native kernel endpoint reported and followed attached 44.1/48/44.1 kHz transitions | verify external locked/unlocked transitions when a digital source is available |
| WIN-013 | OCTA-CAPTURE has exactly six host-controlled compressor parameters—Gate, Attack, Release, Threshold, Ratio, and Output Gain—and no Knee parameter | verified-static/live | official panel RTTI contains `CBarCompGate`, `CBarCompAtk`, `CBarCompRel`, `CBarCompThres`, `CBarCompRatio`, and `CBarCompGain`, with no Knee class/string; driver commands `0x16..0x1b` map contiguously to DT1 fields `07..0c`; the complete snapshot has exactly those six bytes per input; all six ALSA controls were read from the attached OCTA and Gate passed reversible write/readback | none; the broader public-map Knee type does not apply to this model |

## Reproduction

Run Ghidra headlessly against the frozen files with the scripts in
`tools/ghidra/`. The authoritative exports identify every selected string,
message-map handler, IOCTL caller, and decompiled function by virtual address.
Decompiler output is evidence, not a substitute for assembly or live protocol
validation; persistent and destructive actions remain confirmation-gated.
