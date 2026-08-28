#!/usr/bin/env bash
# Verify the Fedora/PipeWire HiFi presentation exposes one node per channel.
set -euo pipefail

check_inputs() {
	local model=$1 expected_nodes=$2 expected_stereo=$3 expected_mono=$4 listing
	listing=$(pactl list short sources | grep -v '\.monitor')
	listing=$(grep "Roland_${model}-CAPTURE" <<<"$listing" || true)
	local nodes stereo mono
	nodes=$(grep -c . <<<"$listing")
	stereo=$(grep -c '[[:space:]]2ch[[:space:]]' <<<"$listing" || true)
	mono=$(grep -c '[[:space:]]1ch[[:space:]]' <<<"$listing" || true)
	if [[ $nodes -ne $expected_nodes || $stereo -ne $expected_stereo || $mono -ne $expected_mono ]]; then
		echo "FAIL: ${model}-CAPTURE inputs: $nodes nodes ($stereo stereo, $mono mono); expected $expected_nodes ($expected_stereo stereo, $expected_mono mono)" >&2
		exit 1
	fi
	echo "PASS: ${model}-CAPTURE exposes $expected_stereo stereo and $expected_mono mono input sources"
}

check_outputs() {
	local model=$1 expected_nodes=$2 expected_stereo=$3 expected_mono=$4 listing
	listing=$(pactl list short sinks | grep "Roland_${model}-CAPTURE" || true)
	local nodes stereo mono
	nodes=$(grep -c . <<<"$listing")
	stereo=$(grep -c '[[:space:]]2ch[[:space:]]' <<<"$listing" || true)
	mono=$(grep -c '[[:space:]]1ch[[:space:]]' <<<"$listing" || true)
	if [[ $nodes -ne $expected_nodes || $stereo -ne $expected_stereo || $mono -ne $expected_mono ]]; then
		echo "FAIL: ${model}-CAPTURE outputs: $nodes nodes ($stereo stereo, $mono mono); expected $expected_nodes ($expected_stereo stereo, $expected_mono mono)" >&2
		exit 1
	fi
	echo "PASS: ${model}-CAPTURE exposes $expected_stereo stereo and $expected_mono mono output destinations"
}

check_outputs OCTA 8 2 6
check_inputs OCTA 10 2 8
check_outputs QUAD 2 2 0
check_inputs QUAD 4 2 2
