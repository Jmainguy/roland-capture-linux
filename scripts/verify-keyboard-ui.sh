#!/usr/bin/env bash
# Verify page shortcuts and desktop zoom without activating any hardware action.
set -euo pipefail

repo_dir=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)
panel=${HOME}/.local/bin/octa-control
[[ -x "$panel" ]] || panel="${repo_dir}/target/release/octa-control"
for command in xvfb-run xdotool import sha256sum; do
    command -v "$command" >/dev/null || { echo "$command is required" >&2; exit 1; }
done
if pgrep -x octa-control >/dev/null; then
    echo "refusing keyboard audit while another octa-control process is running" >&2
    exit 1
fi

audit_tmp=$(mktemp -d -t octa-keyboard-audit.XXXXXXXX)
cleanup() {
    [[ "$audit_tmp" == /tmp/octa-keyboard-audit.* ]] && rm -rf -- "$audit_tmp"
}
trap cleanup EXIT
export OCTA_KEYBOARD_AUDIT_DIR="$audit_tmp"
export OCTA_KEYBOARD_AUDIT_PANEL="$panel"

timeout --signal=KILL 20s xvfb-run -a bash -c '
    env -u WAYLAND_DISPLAY \
        XDG_CONFIG_HOME="$OCTA_KEYBOARD_AUDIT_DIR/config" \
        XDG_CACHE_HOME="$OCTA_KEYBOARD_AUDIT_DIR/cache" \
        "$OCTA_KEYBOARD_AUDIT_PANEL" \
        >"$OCTA_KEYBOARD_AUDIT_DIR/stdout" \
        2>"$OCTA_KEYBOARD_AUDIT_DIR/stderr" &
    panel_pid=$!
    window=$(timeout 6s xdotool search --sync --name "Roland Capture Control" | head -1)
    xdotool windowfocus --sync "$window"
    sleep 1
    index=1
    for key in ctrl+1 ctrl+2 ctrl+3 ctrl+4 ctrl+5 ctrl+6 ctrl+7; do
        xdotool key "$key"
        sleep 0.35
        import -window "$window" "$OCTA_KEYBOARD_AUDIT_DIR/page-$index.png"
        index=$((index + 1))
    done
    xdotool key ctrl+plus
    sleep 0.35
    import -window "$window" "$OCTA_KEYBOARD_AUDIT_DIR/zoomed.png"
    xdotool key ctrl+minus
    kill -TERM "$panel_pid"
    wait "$panel_pid" || true
'

[[ ! -s "$audit_tmp/stderr" ]] || {
    sed -n '1,160p' "$audit_tmp/stderr" >&2
    echo "desktop panel emitted errors during keyboard audit" >&2
    exit 1
}
unique_pages=$(sha256sum "$audit_tmp"/page-*.png | awk '{print $1}' | sort -u | wc -l)
[[ "$unique_pages" -eq 7 ]] || { echo "page shortcuts did not render seven distinct pages" >&2; exit 1; }
page_seven=$(sha256sum "$audit_tmp/page-7.png" | awk '{print $1}')
zoomed=$(sha256sum "$audit_tmp/zoomed.png" | awk '{print $1}')
[[ "$page_seven" != "$zoomed" ]] || { echo "desktop zoom shortcut did not change rendering" >&2; exit 1; }
pgrep -x octa-control >/dev/null && { echo "desktop panel process leaked" >&2; exit 1; }

echo "PASS: Ctrl+1…7 rendered all seven pages, desktop zoom changed rendering, and no process remained."
