# Upstream contribution guide

The upstream goal is reliable audio and conventional MIDI without requiring the
Roland Capture Control application. The vendor control surface remains
userspace software.

This deliberately avoids a kernel vendor mixer, new ALSA control ABI, generic
mixer lifecycle changes, and USB-MIDI infrastructure changes.

## Deliverables

| Work | Destination | Purpose |
|---|---|---|
| OCTA 24-bit format correction | Linux `snd-usb-audio` | Replace corrupt/white-noise audio with `S24_3LE` |
| OCTA/QUAD alternate settings | Linux `snd-usb-audio` | Expose 44.1, 48, 96, and 192 kHz with correct channel counts |
| Roland rate-on-start quirk | Linux `snd-usb-audio` | Keep the hardware clock synchronized with the selected PCM format |
| OCTA/QUAD UCM profiles | `alsa-ucm-conf` | Present practical desktop endpoints in PipeWire |
| Hardware mixer, presets, meters, diagnostics | This repository | Provide the complete optional control panel |

The reduced kernel implementation changes only:

- `sound/usb/quirks-table.h`
- `sound/usb/quirks.c`

The UCM profiles are submitted to their own repository. No mixer, MIDI, or
generic USB-audio lifecycle files belong in the kernel series.

## Kernel series

Prepare reviewable commits against the current sound tree:

1. **ALSA: usb-audio: add Roland OCTA-CAPTURE multirate support**

   Change the existing 44.1 kHz playback and capture entries from
   `SNDRV_PCM_FMTBIT_S32_LE` to `SNDRV_PCM_FMTBIT_S24_3LE`. Correct the
   existing `OCTO-CAPTURE` typo and add the verified 48, 96 and 192 kHz
   alternate settings.

2. **ALSA: usb-audio: expose OCTA-CAPTURE control MIDI cables**

   Expose the verified asymmetric masks, host output `0x0005` and device input
   `0x0003`. Cable 0 remains conventional MIDI. The extra cables allow the
   optional userspace panel to work through normal raw-MIDI/ALSA sequencing.

3. **ALSA: usb-audio: add Roland QUAD-CAPTURE multirate support**

   Add the verified 48, 96 and 192 kHz alternate settings while preserving the
   device's two-channel playback and capture reduction at 192 kHz.

4. **ALSA: usb-audio: set Roland Capture rate during stream preparation**

   Read the current vendor clock, write only when it differs, and poll for the
   selected rate before streaming begins. There is no module parameter or
   dependency on the userspace application.

## Expected operation without the application

Kernel plus ALSA/PipeWire provides:

- Clean OCTA 24-bit playback and capture
- 44.1, 48, 96, and 192 kHz
- Automatic hardware clock synchronization
- Correct multichannel topology at every rate
- Conventional MIDI
- Pro Audio operation
- Friendly desktop endpoints when the UCM profile is installed

The physical panel and previously stored device state continue to govern
vendor-specific preamps, compressors, direct monitoring, patch-bay routing, and
reverb. Installing Roland Capture Control adds graphical access to those
features but is not required for audio streaming.

## UCM submission

Submit the files under `ucm2/USB-Audio/` to
[alsa-project/alsa-ucm-conf](https://github.com/alsa-project/alsa-ucm-conf).

Keep obvious stereo destinations together, including Main, Phones, coaxial
digital, and Direct Mix left/right outputs. Preserve independent analog inputs.
At 192 kHz, users should select the Pro Audio profile because the channel count
is reduced by the hardware.

## Submission checklist

### Current local verification

- Current mainline: full `sound/usb` `W=1` build passes.
- Strict `checkpatch`: zero errors, warnings, or checks.
- Fedora 7.1.10 reduced module: hot-loaded with the stock
  `snd-usbmidi-lib` and both devices enumerated correctly.
- OCTA-CAPTURE and QUAD-CAPTURE: full-duplex streaming passed at 44.1, 48, 96
  and 192 kHz on physical units, including the reduced channel layouts at
  192 kHz.
- OCTA-CAPTURE external digital clocking passed at every supported digital-I/O
  rate: 44.1, 48 and 96 kHz. The device disables digital I/O at 192 kHz.

- [ ] Rebase on the current sound maintainer tree
- [ ] One logical change per commit
- [ ] Subject prefix `ALSA: usb-audio:`
- [ ] Imperative commit messages explaining the observed failure and fix
- [ ] `Signed-off-by:` on every commit
- [ ] Run `scripts/checkpatch.pl --strict`
- [ ] Run a clean `W=1` build of `sound/usb`
- [ ] Test 44.1/48/96/192 kHz on real OCTA and QUAD hardware where claimed
- [ ] Verify playback and capture together because playback uses implicit feedback
- [ ] Capture `/proc/asound/card*/stream0` and `alsa-info.sh`
- [ ] Send to `linux-sound@vger.kernel.org` and recipients from `get_maintainer.pl`
- [ ] Submit UCM separately from kernel patches

## Repository map

| Local path | Destination |
|---|---|
| `patches/quirks-table-octa-quad.patch` | Kernel descriptor changes |
| `patches/quirks-c-rate-on-start.patch` | Kernel vendor clock quirk |
| `ucm2/USB-Audio/` | `alsa-ucm-conf` |
| `src/`, presets, diagnostics, protocol tools | Remain in this project |
| `docs/KERNEL-MIXER.md` | Historical engineering research, not an upstream plan |
