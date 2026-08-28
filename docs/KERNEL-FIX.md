# Fixing OCTA-CAPTURE / QUAD-CAPTURE audio on Linux

## Root cause

### OCTA-CAPTURE (`0582:0120`)

The USB stream uses **24-bit samples in 3 bytes per channel**. The in-tree
kernel quirk hard-codes **`S32_LE` (4 bytes)**, which misaligns the stream and
produces garbage. The quirk also hides USB **altsettings 2–4**, so only
**44.1 kHz** is usable.

### QUAD-CAPTURE (`0582:012f`)

Format is correctly **`S32_LE`** (24-bit in a 32-bit container). Stock quirk
still hides altsettings 2–4, so only **44.1 kHz** is exposed even though the
hardware supports 48 / 96 / 192 kHz.

Do **not** put every rate into a single altsetting with a high `rate_max` —
ALSA would still use altsetting 1's packet layout at the wrong rate.

Rate switching is proprietary (Roland vendor USB). Two layers:

1. **Kernel** — starting PCM at N Hz sets the hardware clock (endpoint-start
   quirk; `octa_capture_autoset=Y` by default). Vanilla PipeWire/JACK works.
2. **Userspace control layer** — currently exposed through `octa rate` and
   PipeWire sync, and ultimately through the native desktop control panel.
   During rate changes it clears autoset so WP probes do not flap.

```bash
octa rate 96k   # optional helper (OCTA)
octa status
```

## Streaming-only driver

Build and install the prepared exact-kernel driver tree via:

```bash
./scripts/install-native-driver.sh
```

The installer builds and reloads the patched `snd-usb-audio` module while using
the distribution's unchanged `snd-usbmidi-lib` (stopping PipeWire briefly).
It contains only format, alternate-setting, clock-synchronization, and MIDI
cable descriptors; it does not install a kernel Roland mixer. Previous update modules are copied under
`/var/lib/octa-capture-driver/`; failed reload or verification restores them.
No reboot is needed. After restarting the user audio graph, the installer runs
the built CLI sync path so PipeWire's clock and channel profile return to the
live hardware rate instead of silently falling back to 48 kHz.

For an active workstation, install without stopping audio and let the modules
take effect at the next reboot (or later manual unload):

```bash
./scripts/install-native-driver.sh --no-reload
```

Verify:

```bash
grep -E 'Format|Rates|Channels|Altset' /proc/asound/card*/stream0
# OCTA: S24_3LE, rates 44100 / 48000 / 96000 / 192000
# QUAD: S32_LE,  rates 44100 / 48000 / 96000 / 192000
```

On 2026-08-27 the attached OCTA was hot-loaded with the corrected module. A
live 44.1 kHz PipeWire playback test opened altsetting 1 as 10-channel
`S24_3LE`, reported a 44.1 kHz momentary endpoint frequency, and used the
expected packed-sample packet sizing. All four playback and capture
altsettings were simultaneously visible in `/proc/asound/card0/stream0`.

Reinstall after kernel upgrades (same command).

## Manual build (Fedora)

```bash
sudo dnf install kernel-devel-$(uname -r) rpm-build
./scripts/install-native-driver.sh
```

## Rates

### OCTA-CAPTURE

| Altsetting | Rate | Playback | Capture |
|------------|------|----------|---------|
| 1 | 44.1 kHz | 10 ch | 12 ch |
| 2 | 48 kHz | 10 ch | 12 ch |
| 3 | 96 kHz | 10 ch | 12 ch |
| 4 | 192 kHz | 4 ch | 4 ch |

### QUAD-CAPTURE

| Altsetting | Rate | Playback | Capture |
|------------|------|----------|---------|
| 1 | 44.1 kHz | 4 ch | 6 ch |
| 2 | 48 kHz | 4 ch | 6 ch |
| 3 | 96 kHz | 4 ch | 6 ch |
| 4 | 192 kHz | 2 ch | 2 ch |

Match rates by opening PCM at the desired rate (PipeWire `clock.force-rate`,
JACK, etc.), or use `octa rate 96k` on OCTA. Front-panel follow is userspace
only. The desktop control panel will own it while running; `octa sync` remains
a manual diagnostic command. There is no kernel poller, cron job, or systemd
user service.

## PipeWire / JACK / REAPER

- Prefer matching the device and PipeWire clocks; set your DAW project to the same rate.
- Both devices use **implicit feedback**: playback only works when capture is also open.
- Desktop sources/sinks come from ALSA UCM HiFi splits installed by
  `sudo ./scripts/install-ucm.sh`; every hardware channel is presented
  independently rather than as a forced stereo pair.
- Use analog inputs unless you need digital paths. At **192 kHz** use **Pro Audio**
  (channel counts drop; HiFi assumes the full 10/12 or 4/6 alts).
