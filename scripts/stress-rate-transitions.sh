#!/usr/bin/env bash
# Repeatedly switch every OCTA-CAPTURE rate, verify USB/PipeWire topology, and
# restore the starting rate even when a transition or assertion fails.
set -euo pipefail

cli=${OCTA_CLI:-"${HOME}/.local/bin/octa"}
cycles=${1:-2}

fail() {
    echo "FAIL: $*" >&2
    exit 1
}

[[ -x "$cli" ]] || fail "current installed CLI is unavailable at $cli"
[[ "$cycles" =~ ^[1-9][0-9]*$ ]] || fail "cycles must be a positive integer"

initial_status=$($cli --device octa status)
initial_rate=$(sed -n 's/^  Hardware clock (USB): \([0-9][0-9]*\) Hz$/\1/p' \
    <<<"$initial_status")
[[ -n "$initial_rate" ]] || fail "could not read the starting hardware rate"

restore() {
    local exit_status=$?
    trap - EXIT INT TERM
    echo "Restoring ${initial_rate} Hz…"
    if ! "$cli" --device octa rate "$initial_rate"; then
        echo "FAIL: automatic restoration to ${initial_rate} Hz failed" >&2
        exit 1
    fi
    exit "$exit_status"
}
trap restore EXIT INT TERM

verify_rate() {
    local rate=$1 expected_outputs=$2 expected_inputs=$3 status
    status=$($cli --device octa status)
    grep -Fq "Hardware clock (USB): ${rate} Hz" <<<"$status" \
        || fail "USB readback did not confirm ${rate} Hz"
    grep -Fq "— ${expected_outputs} channels @ ${rate} Hz" <<<"$status" \
        || fail "PipeWire output topology is wrong at ${rate} Hz"
    grep -Fq "— ${expected_inputs} channels @ ${rate} Hz" <<<"$status" \
        || fail "PipeWire input topology is wrong at ${rate} Hz"
    grep -Fq "value:'${rate}'" <<<"$status" \
        || fail "PipeWire clock did not reach ${rate} Hz"
}

for ((cycle = 1; cycle <= cycles; cycle++)); do
    echo "Cycle ${cycle}/${cycles}"
    for entry in "48000 10 12" "96000 10 12" "192000 4 4" "44100 10 12"; do
        read -r rate outputs inputs <<<"$entry"
        "$cli" --device octa rate "$rate"
        verify_rate "$rate" "$outputs" "$inputs"
    done
done

echo "PASS: $((cycles * 4)) rate transitions verified with USB and PipeWire readback."
