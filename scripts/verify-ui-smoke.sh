#!/usr/bin/env bash
# Start the real desktop application in an isolated X display and verify clean teardown.
set -euo pipefail

repo_dir=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)
panel=${HOME}/.local/bin/octa-control
[[ -x "$panel" ]] || panel="${repo_dir}/target/release/octa-control"
[[ -x "$panel" ]] || { echo "release panel is not built" >&2; exit 1; }
command -v xvfb-run >/dev/null || { echo "xvfb-run is required" >&2; exit 1; }

if pgrep -x octa-control >/dev/null; then
    echo "refusing UI smoke test while another octa-control process is running" >&2
    exit 1
fi

audit_tmp=$(mktemp -d -t octa-ui-audit.XXXXXXXX)
cleanup() {
    [[ "$audit_tmp" == /tmp/octa-ui-audit.* ]] && rm -rf -- "$audit_tmp"
}
trap cleanup EXIT

set +e
XDG_CONFIG_HOME="${audit_tmp}/config" \
XDG_CACHE_HOME="${audit_tmp}/cache" \
timeout --signal=TERM --kill-after=2s 8s \
    xvfb-run -a env -u WAYLAND_DISPLAY "$panel" \
    >"${audit_tmp}/stdout" 2>"${audit_tmp}/stderr"
result=$?
set -e

if [[ $result -ne 0 && $result -ne 124 ]]; then
    sed -n '1,160p' "${audit_tmp}/stderr" >&2
    echo "desktop panel failed during startup (exit $result)" >&2
    exit "$result"
fi
[[ ! -s "${audit_tmp}/stderr" ]] || {
    sed -n '1,160p' "${audit_tmp}/stderr" >&2
    echo "desktop panel emitted startup errors" >&2
    exit 1
}
if pgrep -x octa-control >/dev/null; then
    echo "desktop panel left a background process after window teardown" >&2
    exit 1
fi

echo "PASS: desktop panel started against the attached device and exited without errors or a background process."
