#!/usr/bin/env bash
# Exercise simultaneous read-only control/telemetry paths while audio is active.
set -euo pipefail

duration=${1:-15}
[[ "$duration" =~ ^[0-9]+$ ]] || { echo "duration must be whole seconds" >&2; exit 2; }
(( duration >= 1 && duration <= 300 )) || { echo "duration must be 1..300 seconds" >&2; exit 2; }

cli=${HOME}/.local/bin/octa
[[ -x "$cli" ]] || cli=target/release/octa
status=$($cli --device octa status)
card=$(sed -n 's/^OCTA-CAPTURE: ALSA card \([0-9][0-9]*\).*/\1/p' <<<"$status")
[[ -n "$card" ]] || { echo "attached OCTA-CAPTURE not found" >&2; exit 1; }
grep -Fq 'Playback Status: Running' <<<"$status" || { echo "playback was not running" >&2; exit 1; }
grep -Fq 'Capture Status: Running' <<<"$status" || { echo "capture was not running" >&2; exit 1; }

deadline=$((SECONDS + duration))
iterations=0
last_generation=-1
while (( SECONDS < deadline )); do
    clock=$(amixer -c "$card" cget name='Clock State')
    grep -Fq 'values=1,0,1,44100,0' <<<"$clock" \
        || { echo "clock telemetry changed or became invalid" >&2; exit 1; }
    generation=$(amixer -c "$card" cget name='Roland Capture Snapshot Generation' \
        | sed -n 's/^  : values=//p')
    [[ "$generation" =~ ^[0-9]+$ ]] || { echo "invalid snapshot generation" >&2; exit 1; }
    (( generation >= last_generation )) || { echo "snapshot generation moved backward" >&2; exit 1; }
    last_generation=$generation
    ((iterations += 1))
    sleep 0.25
done

after=$($cli --device octa status)
grep -Fq 'Playback Status: Running' <<<"$after" || { echo "playback stopped during audit" >&2; exit 1; }
grep -Fq 'Capture Status: Running' <<<"$after" || { echo "capture stopped during audit" >&2; exit 1; }
grep -Fq 'Hardware clock (USB): 44100 Hz' <<<"$after" || { echo "hardware clock changed" >&2; exit 1; }
grep -Fq "10 channels @ 44100 Hz" <<<"$after" || { echo "PipeWire playback node changed" >&2; exit 1; }
grep -Fq "12 channels @ 44100 Hz" <<<"$after" || { echo "PipeWire capture node changed" >&2; exit 1; }

printf 'PASS: %d read-only clock/snapshot iterations in %ss; playback and capture remained running at 44.1 kHz.\n' \
    "$iterations" "$duration"
