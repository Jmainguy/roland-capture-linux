#!/usr/bin/env bash
# Inspect the live AccessKit/AT-SPI tree on the current desktop session.
set -euo pipefail

repo_dir=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)
panel=${HOME}/.local/bin/octa-control
[[ -x "$panel" ]] || panel="${repo_dir}/target/release/octa-control"
[[ -n ${DISPLAY:-} || -n ${WAYLAND_DISPLAY:-} ]] || {
    echo "a running X11 or Wayland desktop session is required" >&2
    exit 1
}
for command in busctl python3; do
    command -v "$command" >/dev/null || { echo "$command is required" >&2; exit 1; }
done
python3 -c 'import pyatspi' || { echo "python3-pyatspi is required" >&2; exit 1; }
pgrep -x octa-control >/dev/null && {
    echo "refusing accessibility audit while another octa-control process is running" >&2
    exit 1
}

screen_reader=$(busctl --user get-property \
    org.a11y.Bus /org/a11y/bus org.a11y.Status ScreenReaderEnabled | awk '{print $2}')
audit_tmp=$(mktemp -d -t octa-accessibility-audit.XXXXXXXX)
panel_pid=
cleanup() {
    if [[ -n "$panel_pid" ]]; then
        kill -TERM "$panel_pid" 2>/dev/null || true
        wait "$panel_pid" 2>/dev/null || true
    fi
    busctl --user set-property \
        org.a11y.Bus /org/a11y/bus org.a11y.Status ScreenReaderEnabled b "$screen_reader" \
        >/dev/null || true
    [[ "$audit_tmp" == /tmp/octa-accessibility-audit.* ]] && rm -rf -- "$audit_tmp"
}
trap cleanup EXIT

busctl --user set-property \
    org.a11y.Bus /org/a11y/bus org.a11y.Status ScreenReaderEnabled b true
XDG_CONFIG_HOME="${audit_tmp}/config" XDG_CACHE_HOME="${audit_tmp}/cache" \
    "$panel" >"${audit_tmp}/stdout" 2>"${audit_tmp}/stderr" &
panel_pid=$!
sleep 3
python3 "${repo_dir}/tools/audit_accessibility.py" \
    2> >(grep -v 'dbind-WARNING' >&2 || true)
kill -TERM "$panel_pid" 2>/dev/null || true
wait "$panel_pid" 2>/dev/null || true
panel_pid=
[[ ! -s "$audit_tmp/stderr" ]] || {
    sed -n '1,160p' "$audit_tmp/stderr" >&2
    echo "panel emitted errors during accessibility audit" >&2
    exit 1
}
