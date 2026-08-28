#!/usr/bin/env bash
# Simulate one OCTA-only unplug/replug while the real panel is open.
set -euo pipefail

repo_dir=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)
panel=${HOME}/.local/bin/octa-control
cli=${HOME}/.local/bin/octa
[[ -x "$panel" ]] || panel="${repo_dir}/target/release/octa-control"
[[ -x "$cli" ]] || cli="${repo_dir}/target/release/octa"
for command in xvfb-run xdotool import lsusb sudo; do
    command -v "$command" >/dev/null || { echo "$command is required" >&2; exit 1; }
done
sudo -n true || { echo "passwordless sudo is required for USB authorization" >&2; exit 1; }
pgrep -x octa-control >/dev/null && {
    echo "refusing hot-plug audit while another octa-control process is running" >&2
    exit 1
}

device_paths=()
for device in /sys/bus/usb/devices/*; do
    [[ -f "$device/idVendor" && -f "$device/idProduct" ]] || continue
    if [[ $(<"$device/idVendor") == 0582 && $(<"$device/idProduct") == 0120 ]]; then
        device_paths+=("$device")
    fi
done
[[ ${#device_paths[@]} -eq 1 ]] || {
    echo "expected exactly one attached OCTA-CAPTURE; found ${#device_paths[@]}" >&2
    exit 1
}
authorized="${device_paths[0]}/authorized"
[[ $(<"$authorized") == 1 ]] || { echo "OCTA is already deauthorized" >&2; exit 1; }
initial_status=$($cli --device octa status)
card=$(sed -n 's/^OCTA-CAPTURE: ALSA card \([0-9][0-9]*\).*/\1/p' <<<"$initial_status")
[[ -n "$card" ]] || { echo "could not identify the OCTA ALSA card" >&2; exit 1; }

audit_tmp=$(mktemp -d -t octa-hotplug-audit.XXXXXXXX)
cleanup() {
    printf '1\n' | sudo tee "$authorized" >/dev/null || true
    [[ "$audit_tmp" == /tmp/octa-hotplug-audit.* ]] && rm -rf -- "$audit_tmp"
}
trap cleanup EXIT
export OCTA_HOTPLUG_AUDIT_DIR="$audit_tmp"
export OCTA_HOTPLUG_AUDIT_PANEL="$panel"
export OCTA_HOTPLUG_AUDIT_CLI="$cli"
export OCTA_HOTPLUG_AUTHORIZED="$authorized"
export OCTA_HOTPLUG_CARD="$card"

timeout --signal=KILL 45s xvfb-run -a bash -c '
    env -u WAYLAND_DISPLAY \
        XDG_CONFIG_HOME="$OCTA_HOTPLUG_AUDIT_DIR/config" \
        XDG_CACHE_HOME="$OCTA_HOTPLUG_AUDIT_DIR/cache" \
        "$OCTA_HOTPLUG_AUDIT_PANEL" \
        >"$OCTA_HOTPLUG_AUDIT_DIR/stdout" \
        2>"$OCTA_HOTPLUG_AUDIT_DIR/stderr" &
    panel_pid=$!
    window=$(timeout 6s xdotool search --sync --name "Roland Capture Control" | head -1)
    xdotool windowfocus --sync "$window"
    sleep 2
    import -window "$window" "$OCTA_HOTPLUG_AUDIT_DIR/connected-before.png"

    printf "0\n" | sudo tee "$OCTA_HOTPLUG_AUTHORIZED" >/dev/null
    for _ in $(seq 1 20); do
        [[ ! -e "/sys/class/sound/card$OCTA_HOTPLUG_CARD" ]] && break
        sleep 0.25
    done
    [[ ! -e "/sys/class/sound/card$OCTA_HOTPLUG_CARD" ]] || exit 31
    kill -0 "$panel_pid" || exit 32
    sleep 2
    import -window "$window" "$OCTA_HOTPLUG_AUDIT_DIR/disconnected.png"

    printf "1\n" | sudo tee "$OCTA_HOTPLUG_AUTHORIZED" >/dev/null
    recovered=0
    for _ in $(seq 1 60); do
        if "$OCTA_HOTPLUG_AUDIT_CLI" --device octa status \
            >"$OCTA_HOTPLUG_AUDIT_DIR/recovered-status" 2>/dev/null \
            && grep -Fq "Hardware clock (USB): 44100 Hz" "$OCTA_HOTPLUG_AUDIT_DIR/recovered-status" \
            && grep -Fq "10 channels @ 44100 Hz" "$OCTA_HOTPLUG_AUDIT_DIR/recovered-status" \
            && grep -Fq "12 channels @ 44100 Hz" "$OCTA_HOTPLUG_AUDIT_DIR/recovered-status"; then
            recovered=1
            break
        fi
        sleep 0.5
    done
    [[ $recovered -eq 1 ]] || exit 33
    kill -0 "$panel_pid" || exit 34
    sleep 2
    import -window "$window" "$OCTA_HOTPLUG_AUDIT_DIR/connected-after.png"
    kill -TERM "$panel_pid"
    wait "$panel_pid" || true
'

unexpected_stderr=$(grep -Ev \
    '^(ALSA lib control_hw\.c:.*SNDRV_CTL_IOCTL_SUBSCRIBE_EVENTS failed: No such device|ALSA lib confmisc\.c:.*Cannot get card index for [0-9]+)$' \
    "$audit_tmp/stderr" || true)
[[ -z "$unexpected_stderr" ]] || {
    printf '%s\n' "$unexpected_stderr" >&2
    echo "panel emitted unexpected errors during hot-plug audit" >&2
    exit 1
}
before=$(sha256sum "$audit_tmp/connected-before.png" | awk '{print $1}')
offline=$(sha256sum "$audit_tmp/disconnected.png" | awk '{print $1}')
after=$(sha256sum "$audit_tmp/connected-after.png" | awk '{print $1}')
[[ "$before" != "$offline" && "$offline" != "$after" ]] || {
    echo "panel did not visibly follow disconnect and reconnect" >&2
    exit 1
}
grep -Fq 'Hardware clock (USB): 44100 Hz' "$audit_tmp/recovered-status" \
    || { echo "hardware clock did not recover at 44.1 kHz" >&2; exit 1; }
pgrep -x octa-control >/dev/null && { echo "panel process leaked" >&2; exit 1; }

echo "PASS: the open panel followed OCTA-only disconnect/reconnect and ALSA, clock, and PipeWire topology recovered."
