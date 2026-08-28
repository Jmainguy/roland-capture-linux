# Upstream contribution guide

This repo carries **local** workarounds so OCTA-CAPTURE / QUAD-CAPTURE work on
Fedora today. Upstream targets differ by layer. Prefer landing in **ALSA /
kernel / alsa-ucm-conf** first; Fedora then picks those up. Do **not** open
Fedora-only PRs for these unless upstream has stalled for a long time.

## Recommended bundling

| # | What | Where | Depends on |
|---|------|-------|------------|
| **A** | OCTA sample-format fix (`S24_3LE`) | Linux kernel (`snd-usb-audio`) | — |
| **B** | Multi-rate alts + vendor rate-on-start (OCTA **and** QUAD) | Same kernel series as A | A for OCTA |
| **C** | OCTA HiFi UCM stereo splits | [alsa-ucm-conf](https://github.com/alsa-project/alsa-ucm-conf) | Works with stock 44.1; nicer with B |
| **D** | Roland Capture ALSA mixer controls | Linux `sound/usb/mixer_roland_capture.c` | A/B independent; protocol evidence required |
| — | Desktop UI, presets, diagnostics, compatibility SysEx backend | **Stay here** | D preferred, direct fallback supported |

Do **not** split OCTA rates vs QUAD rates into separate kernel series: both share
the same vendor USB rate SET and the same endpoint-start hook. One series is
easier to review.

Do **not** put the UCM profile in the kernel series — different tree and
maintainers.

---

## A — OCTA-CAPTURE: make audio work at all

**Problem:** Stock quirk hard-codes `S32_LE` (4 bytes/sample). The device
streams **24-bit in 3 bytes** (`S24_3LE`). Result: garbage / noise / silence
even at 44.1 kHz.

**Where:** Linux kernel — `sound/usb/quirks-table.h` for `USB_DEVICE(0x0582, 0x0120)`.

**How to send:**

1. Base on current mainline (or `sound.git` / linux-next as maintainers prefer).
2. One small patch: change OCTA playback/capture format to `SNDRV_PCM_FMTBIT_S24_3LE`
   for the existing 44.1 kHz altsettings only. Also fix the comment
   `OCTO-CAPTURE` → `OCTA-CAPTURE`.
3. Email to **alsa-devel@alsa-project.org** (Cc: Takashi Iwai / USB-audio
   maintainers as per `MAINTAINERS`). Subject prefix:
   `ALSA: usb-audio: …`
4. Use `Signed-off-by:`, describe before/after (noise → clean tone), include
   `alsa-info.sh` and a note that QUAD (`0x012f`) already uses `S32_LE` correctly.

**Local source:** the format hunks in [`patches/quirks-table-octa-quad.patch`](patches/quirks-table-octa-quad.patch).

**Tip:** This patch can land alone if reviewers want rates later. It is the
highest-value, lowest-risk change.

---

## B — Multi-rate clocks (OCTA + QUAD) + vendor rate SET

**Problem:** Stock quirks hide USB altsettings 2–4, so only **44.1 kHz** is
visible. Hardware supports 48 / 96 / 192. Rate changes are **vendor USB**, not
class-compliant clock selectors. Opening PCM at rate *N* must SET the hardware
clock or you get silent / wrong-rate streams (especially with PipeWire locked
to 48 kHz).

**Where:** Same kernel tree:

| File | Change |
|------|--------|
| `sound/usb/quirks-table.h` | OCTA + QUAD: expose alts 1–4 with correct formats, channel counts, and one rate per alt |
| `sound/usb/quirks.c` | On endpoint start for `0x0120` / `0x012f`, vendor SET rate (`0x40` OUT / `0x0008`, poll IN `0x0001`) |

**How to send:**

1. Prefer a **single series** after (or including) patch A, e.g.:
   - `PATCH 1/2` — OCTA `S24_3LE` (A)
   - `PATCH 2/2` — expose multi-rate alts for OCTA+QUAD + rate-on-start quirk
2. Same path: **alsa-devel** mailing list (or `b4` / lore against sound tree).
3. Document:
   - One rate per altsetting (do **not** advertise a wide `rate_max` on alt 1).
   - Channel drop at 192 kHz (OCTA 4/4, QUAD 2/2).
   - Implicit feedback: playback needs capture open (existing behavior).
4. Test matrix: 44.1 / 48 / 96 / 192 on both devices with PipeWire and a simple
   ALSA `aplay`/`arecord` pair; attach `alsa-info.sh` + `/proc/asound/card*/stream0`.

**Local source:**

- [`patches/quirks-table-octa-quad.patch`](patches/quirks-table-octa-quad.patch)
- [`patches/quirks-c-rate-on-start.patch`](patches/quirks-c-rate-on-start.patch)

**Upstream vs this repo — `octa_capture_autoset`:**

This repo’s rate-on-start patch adds a module param so the `octa` CLI can pause
autoset while it drives rates. For **upstream**, prefer:

- **Always-on** rate SET on endpoint start (no module param), **or**
- Keep the param only if maintainers want an escape hatch.

Do not block the series on userspace `octa`. Vanilla PipeWire/JACK should work
with autoset enabled once alts + SET are present.

**Do not submit “QUAD rates only” separately** unless OCTA hardware is
unavailable for testing — the quirk code is shared.

---

## C — OCTA-CAPTURE ALSA UCM HiFi profile

**Problem:** QUAD already has stereo-pair sinks in GNOME Settings via distro
UCM ([alsa-ucm-conf#494](https://github.com/alsa-project/alsa-ucm-conf/pull/494)).
OCTA falls back to one **Multichannel** device.

**Where:** GitHub PR → [alsa-project/alsa-ucm-conf](https://github.com/alsa-project/alsa-ucm-conf)

**What to include** (from this repo’s [`ucm2/`](ucm2/)):

| Path | Role |
|------|------|
| `USB-Audio/Roland/Octa-Capture.conf` | Use-case entry |
| `USB-Audio/Roland/Octa-Capture-HiFi.conf` | SplitPCM stereo pairs |
| Either `USB-Audio/conf.d/0582-0120.conf` **or** a `Macro.roland-octacapture.StringMatch` line in `USB-Audio/USB-Audio.conf` (match how QUAD was done) |

**How to send:**

1. Fork `alsa-ucm-conf`, one commit, `Signed-off-by:`.
2. PR description: list output/input labels; note 192 kHz → use **Pro Audio**
   (HiFi assumes 10/12 channels).
3. Attach `alsa-info.sh` with OCTA connected and HiFi active.
4. Mention patch-bay caveat briefly (OUTPUT 1–2 often **Direct Mix A**, which
   sums all WAVE OUTs) so testers are not confused.

Independent of kernel A/B: UCM works at stock 44.1 once format (A) is fixed;
multi-rate (B) is not required for the PR.

Fedora’s `alsa-ucm` package tracks this repo — no separate Fedora UCM PR needed
after merge.

---

## D — dedicated Roland Capture mixer support

Do not replace `snd-usb-audio`. Keep the existing Roland streaming and implicit
feedback quirks, and add a vendor mixer module following the organizational
precedent of `mixer_scarlett2.c`:

- `mixer_roland_capture.c/.h` owns protocol transport, locking, cached state,
  ALSA control callbacks, model capability tables, and lifecycle cleanup.
- `mixer_quirks.c` contains only the VID/PID dispatch hook.
- `quirks-table.h`, `quirks.c`, and `implicit.c` continue to handle descriptor,
  rate-start, MIDI endpoint, and streaming behavior.
- Start with OCTA and one small verified control group. Split later control
  families into reviewable patches rather than submitting the whole userspace
  implementation at once.
- Treat public pcaps and the current memory map as evidence, not a boundary.
  Recover gaps through controlled captures and, only where needed, clean-room
  behavioral analysis of the proprietary Windows stack; keep the resulting
  implementation independent and expressed through the same ALSA control ABI.

The desktop application should prefer these ALSA controls and preserve direct
SysEx only for older kernels or capabilities not yet upstream. Detailed design
and review gates are in [`docs/KERNEL-MIXER.md`](docs/KERNEL-MIXER.md).

---

## What stays out of those PRs (on purpose)

| Item | Why |
|------|-----|
| `octa` CLI (`rate` / `sync` / `watch` / SysEx) | Userspace convenience; kernel autoset covers the common case |
| WirePlumber `99-octa-*.conf` drop-ins | Distro/user config; channel counts follow USB alts after B |
| `scripts/install-kernel-module.sh` | Distro packaging / DKMS territory, not ALSA |
| `scripts/99-octa-capture.rules` | Needed for **userspace** USB rate control; unnecessary if only kernel SET is used |
| Local preset files and confirmation workflows | Userspace policy, not ALSA control mechanism |
| Graphical meters and UI state | Remain in the desktop app; kernel controls expose stable mechanisms only |

---

## Suggested order of work

```text
1. Kernel PATCH A          → alsa-devel   (OCTA actually plays audio)
2. Kernel PATCH B          → alsa-devel   (48/96/192 + vendor SET, both devices)
3. alsa-ucm-conf PR C      → GitHub       (OCTA desktop stereo pairs)
4. Kernel mixer PATCH D    → alsa-devel   (small verified control groups)
5. Make UI ALSA-first      → direct SysEx remains an older-kernel fallback
```

C can be filed in parallel with B. A should go first or as 1/N of the kernel
series so bisect stays clean if rates need another revision.

---

## Submission checklist

### Kernel (A / B)

- [ ] Patches against current sound / mainline tree
- [ ] `Signed-off-by:` on every commit
- [ ] Subject: `ALSA: usb-audio: …`
- [ ] Sent to alsa-devel (see [alsa-project.org](https://www.alsa-project.org/) / lore.kernel.org)
- [ ] Tested on real OCTA (`0582:0120`) and QUAD (`0582:012f`) where claimed
- [ ] `/proc/asound/card*/stream0` shows expected Format / Rates / Altsets
- [ ] No wide `rate_max` on a single altsetting

### UCM (C)

- [ ] PR to https://github.com/alsa-project/alsa-ucm-conf
- [ ] Modeled on QUAD PR [#494](https://github.com/alsa-project/alsa-ucm-conf/pull/494)
- [ ] `Signed-off-by:` + `alsa-info.sh` attachment
- [ ] HiFi + Pro Audio both mentioned; 192 kHz called out

---

## Quick map of this repo → upstream

| Local path | Upstream destination |
|------------|----------------------|
| `patches/quirks-table-octa-quad.patch` (format only) | Kernel A |
| `patches/quirks-table-octa-quad.patch` (alts 2–4) | Kernel B |
| `patches/quirks-c-rate-on-start.patch` | Kernel B |
| `patches/mixer-roland-capture*.patch` | Kernel D |
| `ucm2/USB-Audio/…` | alsa-ucm-conf C |
| `src/`, desktop integration, presets, PipeWire conf | Remain in **octa**; consume D when present |

More background on the bugs: [`docs/KERNEL-FIX.md`](docs/KERNEL-FIX.md).
