# Corrected Backup retry: USB endpoint analysis

Source capture: `../corrected-backup-retry-20260827.pcapng`

SHA-256: `a74bd6ef9ec46e6f8cadf48e9fa4e205d0ea0f222dc054754df20d92c4166352`

The capture contains 46,280 packets over 23.103038 seconds. The attached
OCTA-CAPTURE was USB bus 1, device address 11.

## Timeline

| Relative time | Frame | Endpoint | Observation |
|---:|---:|---:|---|
| 5.230579 s | 10521 | OUT `0x06` | Exact cable-2 Backup DT1 submitted |
| 5.231205 s | 10524 | OUT `0x06` | Backup DT1 URB completed successfully |
| 5.250218–5.265232 s | 10563–10600 | IN `0x86` | Four final interrupt-IN completions/submissions; the last completion carries data, then no further completion appears |
| 15.242827 s | 30555 | EP0 IN `0x80` | Vendor control read (`bRequest=3`, `wValue=1`, `wIndex=0`, length 4) submitted |
| 17.242905 s | 34556 | EP0 IN `0x80` | The control read ends after two seconds with status `-2`; no data was returned |
| 17.279700 s | 34631 | OUT `0x06` | Full mixer RQ1 submitted |
| 17.280137 s | 34634 | OUT `0x06` | RQ1 OUT URB completed successfully; no endpoint-`0x86` reply follows before capture end |

The Backup write is accepted by the host USB stack and reaches a successful
OUT-URB completion. The failure begins on device-to-host control traffic:
endpoint `0x86` stops completing about 35 ms after Backup, and the later EP0
status read returns no data. Host-to-device endpoint `0x06` remains able to
complete OUT URBs, including the later RQ1.

Endpoint `0x82` continues for the full capture: 46,208 packets total, including
24,098 between Backup and RQ1 and 11,647 after RQ1. This proves that the USB
device and its continuous feedback/interrupt path did not disappear. The
capture did not include audio payload URBs, so it does not by itself prove that
audio samples continued.

## Conclusion

This is an asymmetric device control-plane failure, not USB disconnection and
not malformed OUT packetization. The strongest current hypothesis is that the
firmware's Backup/external-memory workflow wedges or stops servicing the MIDI
IN and vendor-control response paths while an independent continuous endpoint
keeps running. The capture does not distinguish a failed external-memory
device from a firmware synchronization bug.

Do not expose or retry Backup, Recall, or Initialize on live hardware until
that firmware/storage failure mode can be bounded or detected without issuing
another persistence action.

`control-midi.txt` is the compact endpoint transcript. `non-iso.csv` retains
the complete extracted field set for reproducible follow-up analysis.
