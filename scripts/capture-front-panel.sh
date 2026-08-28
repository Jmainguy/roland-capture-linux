#!/usr/bin/env bash
# Guided, passive one-control OCTA/QUAD front-panel capture.
set -euo pipefail

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_DIR="$(cd -- "$SCRIPT_DIR/.." && pwd)"
TRACE_TOOL="$PROJECT_DIR/tools/octa_trace.py"
CAPTURE_SECONDS=8
CHECK_ONLY=false
ALLOW_RISKY=false

usage() {
	cat <<'EOF'
Usage:
  capture-front-panel.sh --check [octa|quad]
  capture-front-panel.sh [--seconds N] [--allow-risky] <octa|quad> <control> <initial> <changed> <output-dir>

Example:
  ./scripts/capture-front-panel.sh octa compressor-input-1 off on evidence/incoming/compressor-input-1

The script passively records both directions of one reversible change. It never
sends a device command. Raw pcapng files stay in a private temporary directory
and are deleted after normalized, paired, and diffed evidence is produced.
EOF
}

while [[ ${1:-} == --* ]]; do
	case "$1" in
		--check) CHECK_ONLY=true; shift ;;
		--allow-risky) ALLOW_RISKY=true; shift ;;
		--seconds)
			[[ ${2:-} =~ ^[1-9][0-9]*$ ]] || { echo "--seconds requires a positive integer" >&2; exit 2; }
			CAPTURE_SECONDS="$2"
			shift 2
			;;
		*) usage >&2; exit 2 ;;
	esac
done

MODEL_ARG=${1:-octa}
case "$MODEL_ARG" in
	octa) PRODUCT=0120; MODEL=OCTA-CAPTURE ;;
	quad) PRODUCT=012f; MODEL=QUAD-CAPTURE ;;
	*) usage >&2; exit 2 ;;
esac

for command in lsusb tshark timeout python3 jq sha256sum sudo; do
	command -v "$command" >/dev/null || { echo "Missing required command: $command" >&2; exit 1; }
done
[[ -x "$TRACE_TOOL" ]] || { echo "Trace tool is not executable: $TRACE_TOOL" >&2; exit 1; }

mapfile -t USB_MATCHES < <(lsusb -d "0582:$PRODUCT")
if (( ${#USB_MATCHES[@]} != 1 )); then
	echo "Expected exactly one $MODEL (0582:$PRODUCT), found ${#USB_MATCHES[@]}" >&2
	exit 1
fi
read -r BUS_WORD BUS_TEXT DEVICE_WORD DEVICE_TEXT REST <<<"${USB_MATCHES[0]}"
[[ $BUS_WORD == Bus && $DEVICE_WORD == Device && -n $REST ]] || {
	echo "Could not parse lsusb output: ${USB_MATCHES[0]}" >&2
	exit 1
}
BUS=$((10#${BUS_TEXT}))
ADDRESS=$((10#${DEVICE_TEXT%:}))
USBMON="usbmon$BUS"

sudo -n true
sudo modprobe usbmon
sudo test -r "/sys/kernel/debug/usb/usbmon/${BUS}u"

if $CHECK_ONLY; then
	echo "Ready: $MODEL on bus $BUS device $ADDRESS; capture interface $USBMON"
	exit 0
fi

(( $# == 5 )) || { usage >&2; exit 2; }
CONTROL=$2
INITIAL=$3
CHANGED=$4
OUTPUT_DIR=$5
if [[ $CONTROL =~ (phantom|48v|initialize|reset|backup|recall|power-off) ]] && ! $ALLOW_RISKY; then
	echo "Refusing risky capture '$CONTROL' without --allow-risky." >&2
	echo "Confirm connected equipment and restoration consequences first." >&2
	exit 2
fi
if [[ -e "$OUTPUT_DIR" ]]; then
	echo "Refusing to overwrite existing output: $OUTPUT_DIR" >&2
	exit 1
fi
mkdir -p -- "$OUTPUT_DIR"
RAW_FILES=()
cleanup() {
	if (( ${#RAW_FILES[@]} )); then
		sudo rm -f -- "${RAW_FILES[@]}"
	fi
}
trap cleanup EXIT

normalize_capture() {
	local name=$1
	local raw=$2
	"$TRACE_TOOL" normalize --bus "$BUS" --address "$ADDRESS" \
		"$raw" "$OUTPUT_DIR/$name.jsonl"
	"$TRACE_TOOL" controls "$OUTPUT_DIR/$name.jsonl" "$OUTPUT_DIR/$name.controls.jsonl"
}

capture() {
	local name=$1
	local instruction=$2
	local raw
	raw=$(sudo mktemp --suffix=.pcapng /tmp/octa-front-panel.XXXXXX)
	RAW_FILES+=("$raw")
	read -r -p "$instruction Press Enter to begin. "
	echo "Capturing $name for $CAPTURE_SECONDS seconds…"
	sudo timeout "${CAPTURE_SECONDS}s" tshark -q -i "$USBMON" \
		-w "$raw" >/dev/null 2>&1 &
	local capture_pid=$!
	if [[ $name == action ]]; then
		echo "NOW: make exactly one '$CONTROL' change from '$INITIAL' to '$CHANGED'."
	elif [[ $name == restore ]]; then
		echo "NOW: restore exactly one '$CONTROL' change from '$CHANGED' to '$INITIAL'."
	fi
	local status=0
	wait "$capture_pid" || status=$?
	[[ $status == 0 || $status == 124 ]] || { echo "tshark failed with status $status" >&2; exit 1; }
	sudo chown "$(id -u):$(id -g)" "$raw"
	normalize_capture "$name" "$raw"
}

capture baseline-a "Leave '$CONTROL' at '$INITIAL' and do not touch the unit."
capture action "Prepare to change '$CONTROL' exactly once from '$INITIAL' to '$CHANGED'."
capture baseline-b "Leave '$CONTROL' at '$CHANGED' and do not touch the unit."
capture restore "Prepare to restore '$CONTROL' exactly once from '$CHANGED' to '$INITIAL'."
capture baseline-c "Confirm '$CONTROL' is back at '$INITIAL' and do not touch the unit."

"$TRACE_TOOL" diff "$OUTPUT_DIR/baseline-a.controls.jsonl" \
	"$OUTPUT_DIR/action.controls.jsonl" >"$OUTPUT_DIR/action.controls.diff.json"
"$TRACE_TOOL" diff "$OUTPUT_DIR/baseline-b.controls.jsonl" \
	"$OUTPUT_DIR/action.controls.jsonl" >"$OUTPUT_DIR/action-repeat.controls.diff.json"
"$TRACE_TOOL" diff "$OUTPUT_DIR/baseline-a.jsonl" \
	"$OUTPUT_DIR/action.jsonl" >"$OUTPUT_DIR/action.all-traffic.diff.json"
"$TRACE_TOOL" diff "$OUTPUT_DIR/baseline-b.controls.jsonl" \
	"$OUTPUT_DIR/restore.controls.jsonl" >"$OUTPUT_DIR/restore.controls.diff.json"
"$TRACE_TOOL" diff "$OUTPUT_DIR/baseline-c.controls.jsonl" \
	"$OUTPUT_DIR/restore.controls.jsonl" >"$OUTPUT_DIR/restore-repeat.controls.diff.json"
"$TRACE_TOOL" diff "$OUTPUT_DIR/baseline-b.jsonl" \
	"$OUTPUT_DIR/restore.jsonl" >"$OUTPUT_DIR/restore.all-traffic.diff.json"

SERIAL=$(lsusb -d "0582:$PRODUCT" -v 2>/dev/null \
	| awk '/iSerial/ && serial == "" {serial=$3} END {print serial}')
SERIAL_HASH=$(sha256sum <<<"$SERIAL" | awk '{print $1}')
RATE=$($PROJECT_DIR/target/debug/octa --device "$MODEL_ARG" status 2>/dev/null \
	| awk '/Hardware clock \(USB\):/ && rate == "" {rate=$4} END {print rate}')
RATE=${RATE:-0}

jq -n \
	--arg model "$MODEL" --arg usb_id "0582:$PRODUCT" --arg serial_hash "$SERIAL_HASH" \
	--arg control "$CONTROL" --arg initial "$INITIAL" --arg changed "$CHANGED" \
	--argjson rate "$RATE" \
	'{schema:1, model:$model, usb_id:$usb_id, serial_hash:$serial_hash,
          firmware:"unknown; record front-panel version if available",
          host_os:"Linux passive usbmon", panel_version:"front panel",
          control:$control, initial_value:$initial, requested_value:$changed,
	  observed_value:$initial, sample_rate:$rate, audio_active:true,
	  persistence:"not tested", notes:"Both directions captured; physical control restored to initial value."}' \
	>"$OUTPUT_DIR/manifest.json"
"$TRACE_TOOL" validate-manifest "$OUTPUT_DIR/manifest.json"

echo "Capture complete: $OUTPUT_DIR"
echo "Final physical state recorded as restored: '$CONTROL' = '$INITIAL'."
echo "Raw USB captures were deleted; normalized evidence and diffs remain."
