# Roland OCTA-CAPTURE / QUAD-CAPTURE — Linux audio

Upstream kernel work is intentionally limited to reliable streaming: correct
sample formats, alternate rates, automatic device-clock synchronization, and
normal MIDI exposure. The complete Roland hardware control surface remains in
this optional desktop application, so ALSA and PipeWire audio do not depend on
installing it. See [`UPSTREAM.md`](UPSTREAM.md).

Kernel quirk fix (multi-rate alts + vendor rate synchronization during stream
preparation) + `octa` CLI for
host-master rate switching and PipeWire sync. Optional ALSA UCM profiles expose
analog channels independently while grouping Main/Phones, coaxial, and Direct
Mix left/right paths into practical stereo endpoints in GNOME Settings.

The desktop panel provides native live control for both models. With QUAD
selected, Inputs covers its preamps, compressors and Auto-Sens; Direct Mix
covers the three monitor levels; Outputs covers coaxial Digital In/Out; and
Presets saves or applies a complete readback-verified JSON snapshot.

## Daily use

Launch the native control panel:

```bash
cargo run --bin octa-control
```

Install a normal desktop launcher for the current user:

```bash
./scripts/install-desktop.sh
```

Run the read-only installed-system audit with the OCTA attached:

```bash
./scripts/verify-live-install.sh
```

It checks the installed binaries and desktop metadata, discovers the live
device, verifies clock/ALSA/PipeWire/control-MIDI readback and representative
mixer controls, and confirms that no OCTA cron or systemd job was installed.

For a bounded, read-only concurrency check while both streams are already
active:

```bash
./scripts/stress-readback.sh 30
```

This repeatedly exercises clock telemetry and full-snapshot refresh without
writing a hardware setting, then confirms that playback, capture, the hardware
clock, and PipeWire channel topology remained intact.

The isolated desktop startup/teardown smoke test is:

```bash
./scripts/verify-ui-smoke.sh
```

It uses a temporary configuration directory and virtual display, connects the
real application to the attached device, checks for startup errors, and proves
that closing the window leaves no background process.

Keyboard navigation and zoom can be exercised without clicking any hardware
action:

```bash
./scripts/verify-keyboard-ui.sh
```

On a running desktop session, the real AccessKit/AT-SPI tree can be checked
with `./scripts/verify-accessibility.sh`. It temporarily enables the AT-SPI
screen-reader flag, inspects names and roles, closes the panel, and restores
the original flag.

This installs the GUI and CLI under `~/.local`, adds an application-menu entry,
and installs no cron job, systemd unit, or persistent background process.

The application provides live OCTA/QUAD discovery, device selection,
connection state, ALSA card identity, hardware sample-rate read/write, live
OCTA preamp and Direct Mix control, patch-bay routing, reverb, Auto-Sens, eight
input meters, validated local preset import/export, and sanitized diagnostic
export. It shows the USB location, serial, and device revision while explicitly
distinguishing that revision from an unknown firmware version. Duplicate
identical devices are detected and ambiguous writes are disabled. Every enabled
mixer write is range checked and confirmed with a full hardware readback.

The selected page/device/input/mixer and system/light/dark theme choice persist
as ordinary per-user application preferences. Hardware settings and preset
files are never stored in that preference record.

The seven main pages are reachable with `Ctrl+1` through `Ctrl+7`. Mixer
checkboxes, pan controls, levels, and reverb sends carry per-channel AccessKit
labels for keyboard and screen-reader navigation; standard desktop zoom
shortcuts remain available for scalable layouts.

For command-line diagnostics and scripting:

```bash
# The desktop installer installs both the panel and current CLI in ~/.local/bin.
./scripts/install-desktop.sh

# When only one Capture is plugged in, --device is optional:
octa rate 96k
octa sync
octa status
octa support-bundle octa-support.json

# With both plugged in, pick one:
octa --device octa rate 96k
octa --device quad rate 192k
octa --device quad status
octa --device quad unlock
```

Validated local presets can be exported from live hardware and applied as a
single readback-verified transaction. Unsupported fields are rejected before
writes, phantom enablement needs explicit acknowledgement, and partial failure
triggers rollback to the captured baseline:

```bash
octa --device octa preset-export studio.json --name "Studio"
octa --device octa preset-apply studio.json
# Only when the preset intentionally enables +48 V:
octa --device octa preset-apply studio.json --allow-phantom
```

QUAD-CAPTURE has no front-panel rate control — use `octa --device quad rate …`.
At **192 kHz** both devices drop channel counts; use the **Pro Audio** profile
(HiFi stereo splits assume the full-width alts).

For everyday configuration, the planned interface is a native desktop control
panel comparable to Roland's Windows/macOS application. Device discovery,
front-panel synchronization, and reconnect handling will live in the running
application; this project does not require a cron job or systemd user service.
The CLI remains useful for scripting, diagnostics, and development.

Local preset JSON files are schema-versioned, device-model checked, range
validated, and limited to 2 MiB on import. They affect the editable application
draft only; importing a file never writes to the hardware. The Diagnostics page
and `support-bundle` command export JSON without serial numbers, usernames,
hostnames, paths, or audio.

The native-driver installer also installs the USB access rule. For a
userspace-only setup, install it once manually; the user must be in the
`audio` group:

```bash
sudo cp scripts/99-octa-capture.rules /etc/udev/rules.d/
sudo udevadm control --reload-rules
```

At **192 kHz** OCTA drops to **4 channels** (vs 10/12); QUAD drops to **2**
(vs 4/6). `octa` rewrites a WirePlumber drop-in for the active device.

## Kernel module (once per kernel)

```bash
./scripts/install-native-driver.sh
```

This builds the exact-kernel streaming-only Roland Capture source tree and
installs `snd-usb-audio` transactionally while retaining the distribution's
unchanged `snd-usbmidi-lib`. It backs up previous update modules,
installs/reloads the non-root USB permission rule, reloads without a reboot,
verifies the Roland PCM topology, and rolls back on failure. Set `DRIVER_TREE` when
the prepared tree is not the adjacent `linux-roland-fedora-$(uname -r | cut
-d- -f1)` directory. Re-run after kernel upgrades. It installs no service,
cron job, or background process.

## Desktop channel splits (UCM)

Fedora's stock profiles do not provide a useful desktop layout for both
interfaces. This project replaces both HiFi presentations with mono inputs,
mono unpaired outputs, and stereo endpoints for explicit L/R destinations:

```bash
sudo ./scripts/install-ucm.sh
```

What that does:

1. Copies the OCTA and QUAD profiles from `ucm2/USB-Audio/Roland/` into
   `/usr/share/alsa/ucm2/`
2. Adds `ucm2/USB-Audio/conf.d/0582-0120.conf` so ALSA maps USB id `0582:0120`
   to that profile (no edit of the big system `USB-Audio.conf`)
3. Restarts WirePlumber so the card re-enumerates

OCTA exposes Main / Phones 1–2, Coaxial Output 9–10, Coaxial Input 9–10, and
Direct Mix A Input 11–12 as stereo; Outputs 3–8 and analog Inputs 1–8 stay
independent. QUAD exposes Main / Phones 1–2, Coaxial Output 3–4, Coaxial Input
3–4, and Direct Mix Input 5–6 as stereo; analog Inputs 1–2 stay independent.
Direct Mix routing remains a separate hardware-mixing decision.

**Pro Audio** remains available for DAWs that want the raw 10×12 (or 4×4 @ 192k)
device. Re-run `install-ucm.sh` after `alsa-ucm` package updates if the files are
removed.

### OCTA: “I selected Output 3 but still hear it on my Main speakers”

PipeWire/UCM routing is fine — each Settings sink maps to one USB WAVE OUT
channel. The OCTA’s **hardware patch bay** decides what those channels feed on
the rear jacks; the hardware patch-bay destinations themselves are stereo
pairs.

By default, **OUTPUT 1–2** is often patched to **Direct Mix A**, and Direct Mix A
**sums all WAVE OUT 1–10** from the computer. So choosing **Output 3** in Settings
still plays through speakers on MAIN 1–2.

Fix on the unit (or Windows/Mac Control Panel if you use it):

1. Open **Patch Bay** (front panel: see owner’s manual § Patch Bay, or Device →
   Open the Patch Bay in the Control Panel).
2. Set **OUTPUT 1-2** to **WAVE OUT 1-2** (not Direct Mix A).
3. Optionally set OUTPUT 3-4 → WAVE OUT 3-4, and so on, if you want each pair
   isolated on its own jacks.

Or keep Direct Mix A on MAIN for monitoring, and mute WAVE OUT 3–10 in that
mixer so only 1–2 reach the speakers.

Headphones follow the OUTPUT 1–2 patch as well. Patch bay is unavailable at
192 kHz.

## How rate switching works

- **Host master (normal):** `octa rate …` or app/PipeWire opens at a rate → kernel quirk SETs the device.
- **Panel follow (OCTA):** while open, the desktop control panel polls the live
  hardware rate and full mixer state, follows device-originated changes, and
  reports decoded internal/external clock and lock state from the kernel-owned
  telemetry endpoint. `octa unlock` and `octa sync` remain available as manual
  diagnostic workflows.

Vendor USB control (same on OCTA and QUAD):

- OUT `0x40` / request `3` / `wValue=0x0008` with payload `40` + 24-bit LE rate
- IN `0xc0` / request `3` / `wValue=0x0001` until ready / to read current rate

## Upstream

See [`UPSTREAM.md`](UPSTREAM.md) for where/how to send kernel and UCM patches
(format fix, multi-rate, OCTA HiFi profile) versus what stays in this repo.

For the longer-term verification, control-panel parity, USB-capture, and
targeted driver-research plan, see [`docs/ROADMAP.md`](docs/ROADMAP.md).

## License

MIT
