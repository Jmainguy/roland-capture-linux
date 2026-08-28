# QUAD-CAPTURE native-control roadmap

The target is feature parity with the OCTA-CAPTURE Linux application where the
QUAD-CAPTURE hardware actually provides the corresponding feature. QUAD work
inherits the OCTA safety rules: no daemon, cron, or user service; no write is
exposed without bounded values and hardware readback; firmware updater traffic
is never replayed as control traffic.

## Source baseline

| Artifact | Version | SHA-256 |
|---|---:|---|
| `quad_w1011d_v153DL.zip` | Windows driver 1.5.3 | `3e14b687d360569e0a68fd49e094cd09886fa417a2b81b0ddf2b6c111b155092` |
| `quad_sys_v104.zip` | device firmware 1.04 | `59cc2c12d998e6c97d733b260f280636202efb636f91e29fac290a7097832df6` |

The archives are copied into the repository root. Expanded working copies live
under `tmp/quad-windows-v153/` and `tmp/quad-firmware-v104/`.

## Completed native support

- USB discovery and explicit OCTA/QUAD selection.
- Vendor sample-rate read/write at 44.1, 48, 96, and 192 kHz.
- Correct S32_LE PCM alternate settings: 4 playback / 6 capture channels below
  192 kHz, and 2 / 2 channels at 192 kHz.
- PipeWire rate synchronization, Pro Audio profile, UCM integration, and
  diagnostics.
- Live 48 kHz QUAD playback and capture, plus its coaxial clock driving the
  OCTA-CAPTURE.
- Private model-56 control transport on USB-MIDI virtual cable 1 while the
  public MIDI cable remains available.
- Coherent 59-byte snapshot plus typed, bounded ALSA controls for both
  preamps, both compressors and stereo link, all three direct-monitor inputs,
  Auto-Sens/method/margin, Digital In, and Digital Out.
- QUAD-specific desktop pages, full-readback transactions, JSON presets, CLI
  status/export/apply, hotplug polling, diagnostics, and installed packaging.

## Evidence findings

Firmware update files use model `00 69`; normal live control uses model
`00 00 56`, device ID `10`, on hidden USB-MIDI cable 1. The initial RQ1 is
`F0 41 10 00 00 56 11 01 00 00 00 00 00 00 3B 44 F7`, returning a 59-byte
DT1 snapshot at `01 00 00 00`. `tools/quad_firmware_inventory.py` inventories
updater files offline without confusing update traffic with live controls.

The Windows package contains `RDDP1117.EXE` (control panel), `RDAS1117.DLL`,
`RDAH1117.EXE`, and `RDWM1117.SYS`. The recovered `0x22225c` IOCTL dispatcher,
DT1 constructors, incremental response parser, and startup RQ1 established the
normal live protocol and exact setting addresses used by the native driver.

## Completion boundary

All live software settings listed in Roland's owner manual are implemented.
Phantom, Hi-Z, ground lift, MONO, MIX, and output volume are physical switches
or knobs; the UI deliberately does not fabricate software controls for them.

Backup, restore, initialize, and firmware-update paths stay disabled until
their QUAD-specific failure behavior and recovery are independently proven.
