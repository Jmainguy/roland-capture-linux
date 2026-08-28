# External digital-clock acceptance test

The OCTA-CAPTURE clock decoder, kernel ALSA control, CLI presentation, desktop
presentation, and sanitized diagnostics are implemented. Live internal and
external clock transitions are verified using an attached QUAD-CAPTURE as the
48 kHz coaxial IEC958/S/PDIF source.

## Available host hardware audit

The current Linux host identifies itself through SMBIOS as MSI Z170A PC MATE
MS-7971 v2.0 with a Realtek ALC887 codec. The codec dump contains IEC958
converter widgets, but their digital pins have firmware defaults marked N/A.
ALSA exposes only `ALC887-VD Analog` playback and no IEC958 playback PCM.

The official MSI board specification lists three analog rear audio ports and
its internal-connector inventory has no S/PDIF header. The component marked
`JSPI1` in the board layout is the motherboard flash interface, not S/PDIF.
The AMD HDMI device provides HDMI audio only; converting it to the OCTA's
coaxial S/PDIF input requires external hardware.

Authoritative board specification:
<https://www.msi.com/Motherboard/z170a-pc-mate/Specification>

No HDA pin override was attempted because there is no documented physical
digital connector behind the codec pin. Such an override could create a PCM
device in software without creating an electrical clock source.

## Verified attached-hardware result

On 2026-08-28 a QUAD-CAPTURE (`0582:012f`) COAXIAL OUT (3/4) was connected to
the OCTA-CAPTURE COAXIAL IN (9/10). The QUAD playback endpoint ran at exactly
48 kHz and the OCTA produced twenty consecutive external/locked/48 kHz clock
samples. Removing the QUAD source produced twenty consecutive internal/locked
48 kHz samples; restoring it produced twenty consecutive external/locked
48 kHz samples. This proves AUTO's intended failover behavior: it falls back
to the internal clock when no valid source exists rather than remaining in an
external-unlocked state.

The cable direction matters: QUAD **OUT** must feed OCTA **IN**. The QUAD emits
a valid digital clock even when its ALSA PCM is stopped, so stopping playback
alone is not a signal-loss test.

## Reproducible acceptance sequence

With a real coaxial IEC958 source attached:

```bash
# With DIGITAL=AUTO and no valid source:
./scripts/verify-clock-state.sh internal
# Attach/start a 48 kHz IEC958 source:
./scripts/verify-clock-state.sh external-locked 48000
# Remove the source; AUTO falls back to internal:
./scripts/verify-clock-state.sh internal
# Restore the source and confirm recovery:
./scripts/verify-clock-state.sh external-locked 48000
```

Each command is read-only and requires ten identical ALSA telemetry samples.
The desktop panel must follow the same Internal/External (48000 Hz, locked)
transitions. External-unlocked presentation remains supported for telemetry
that reports it, but DIGITAL=AUTO does not generate that state during source
loss on the attached OCTA.

Required external equipment: a 75-ohm coaxial S/PDIF source/cable, or the
host's HDMI output plus an HDMI-to-coaxial-S/PDIF extractor and coaxial cable.
