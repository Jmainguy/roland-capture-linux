#!/usr/bin/env bash
# Read-only, stability-checked verifier for the OCTA-CAPTURE clock telemetry.
set -euo pipefail

repo_dir=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)
cli=${HOME}/.local/bin/octa
[[ -x "$cli" ]] || cli="${repo_dir}/target/release/octa"

fail() {
    echo "FAIL: $*" >&2
    exit 1
}

usage() {
    echo "usage: $0 internal | external-unlocked | external-locked RATE_HZ" >&2
    exit 2
}

[[ $# -ge 1 ]] || usage
expected=$1
expected_hz=${2:-}
case "$expected" in
    internal|external-unlocked) [[ $# -eq 1 ]] || usage ;;
    external-locked)
        [[ $# -eq 2 && "$expected_hz" =~ ^[0-9]+$ ]] || usage
        ;;
    *) usage ;;
esac

status=$($cli --device octa status)
card=$(sed -n 's/^OCTA-CAPTURE: ALSA card \([0-9][0-9]*\).*/\1/p' <<<"$status")
[[ -n "$card" ]] || fail "attached OCTA-CAPTURE was not discovered"

observed=""
for _ in {1..10}; do
    values=$(amixer -c "$card" cget name='Clock State' \
        | sed -n 's/^  : values=//p')
    IFS=, read -r valid external locked hz rate_flag <<<"$values"
    [[ "$valid" == 1 ]] || fail "clock telemetry is not valid"
    sample="${external},${locked},${hz},${rate_flag}"
    if [[ -z "$observed" ]]; then
        observed=$sample
    elif [[ "$sample" != "$observed" ]]; then
        fail "clock telemetry was not stable: $observed then $sample"
    fi
    sleep 0.1
done

case "$expected" in
    internal)
        [[ "$external" == 0 ]] || fail "expected internal clock, observed $observed"
        ;;
    external-unlocked)
        [[ "$external" == 1 && "$locked" == 0 ]] \
            || fail "expected external unlocked, observed $observed"
        ;;
    external-locked)
        [[ "$external" == 1 && "$locked" == 1 && "$hz" == "$expected_hz" ]] \
            || fail "expected external ${expected_hz} Hz locked, observed $observed"
        ;;
esac

echo "PASS: stable $expected clock telemetry on ALSA card $card ($observed)."
