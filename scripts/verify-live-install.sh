#!/usr/bin/env bash
# Read-only installed-system audit for attached Roland Capture devices.
set -euo pipefail

repo_dir=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)
data_dir=${XDG_DATA_HOME:-"${HOME}/.local/share"}
app_id=io.github.jmainguy.OctaCaptureControl
desktop_file="${data_dir}/applications/${app_id}.desktop"
metainfo_file="${data_dir}/metainfo/${app_id}.metainfo.xml"
icon_file="${data_dir}/icons/hicolor/scalable/apps/${app_id}.svg"
panel_bin="${HOME}/.local/bin/octa-control"
cli_bin="${HOME}/.local/bin/octa"

fail() {
    echo "FAIL: $*" >&2
    exit 1
}

for file in "$desktop_file" "$metainfo_file" "$icon_file" "$panel_bin" "$cli_bin"; do
    [[ -f "$file" ]] || fail "missing installed artifact: $file"
done
[[ -x "$panel_bin" && -x "$cli_bin" ]] || fail "installed binaries are not executable"

cmp -s "$panel_bin" "${repo_dir}/target/release/octa-control" \
    || fail "installed panel does not match the release build"
cmp -s "$cli_bin" "${repo_dir}/target/release/octa" \
    || fail "installed CLI does not match the release build"
resolved_cli=$(command -v octa || true)
[[ -n "$resolved_cli" ]] || fail "octa is not reachable through PATH"
cmp -s "$resolved_cli" "$cli_bin" \
    || fail "PATH resolves a stale octa CLI at $resolved_cli instead of $cli_bin"
desktop-file-validate "$desktop_file"
appstreamcli validate --no-net "$metainfo_file" >/dev/null
grep -Fq "Exec=${panel_bin}" "$desktop_file" || fail "desktop launcher has the wrong executable"

status=$($cli_bin --device octa status)
grep -Fq "OCTA-CAPTURE: ALSA card" <<<"$status" || fail "attached OCTA-CAPTURE was not discovered"
grep -Fq "Hardware clock (USB):" <<<"$status" || fail "USB clock readback is unavailable"
grep -Fq "Clock source / sync:" <<<"$status" || fail "clock telemetry is unavailable"
grep -Fq "MIDI: hw:" <<<"$status" || fail "control MIDI endpoint is unavailable"
grep -Fq "OCTA-CAPTURE PipeWire nodes:" <<<"$status" || fail "PipeWire nodes are unavailable"

card=$(sed -n 's/^OCTA-CAPTURE: ALSA card \([0-9][0-9]*\).*/\1/p' <<<"$status")
[[ -n "$card" ]] || fail "could not parse the OCTA ALSA card number"
controls=$(amixer -c "$card" scontrols)
if grep -Fq "'Hardware Memory Action'" <<<"$controls"; then
    fail "unsafe hardware Backup/Recall/Initialize action is exposed"
fi
for control in \
    "Clock State" \
    "Input 1 Sensitivity" \
    "Input 1 Phantom Power" \
    "Input 1 Compressor" \
    "Auto-Sens State" \
    "Direct Mix A Input 1 Level" \
    "Patch Bay Output 1-2 Source" \
    "Reverb Type" \
    "Roland Capture Snapshot Generation"; do
    grep -Fq "'$control'" <<<"$controls" || fail "missing ALSA control: $control"
done

for directory in \
    "${HOME}/.config/systemd/user" \
    "${HOME}/.local/share/systemd/user" \
    /etc/systemd/system \
    /usr/local/lib/systemd/system; do
    [[ -d "$directory" ]] || continue
    if find "$directory" -type f \( -iname '*octa*' -o -iname '*roland*capture*' \) -print -quit \
        | grep -q .; then
        fail "unexpected Roland/OCTA systemd unit under $directory"
    fi
done
if crontab -l 2>/dev/null | grep -Eiq 'octa|roland.?capture'; then
    fail "unexpected Roland/OCTA user cron entry"
fi

printf '%s\n' "$status"

quad_status=$($cli_bin --device quad status)
grep -Fq "QUAD-CAPTURE: ALSA card" <<<"$quad_status" || fail "attached QUAD-CAPTURE was not discovered"
quad_card=$(sed -n 's/^QUAD-CAPTURE: ALSA card \([0-9][0-9]*\).*/\1/p' <<<"$quad_status")
quad_controls=$(amixer -c "$quad_card" controls)
for control in \
    "Auto-Sens" \
    "Digital Input" \
    "Digital Output" \
    "Input 1 Sensitivity" \
    "Input 1 Compressor Stereo Link" \
    "Input 2 Compressor Output Gain" \
    "Direct Monitor Input 1 Level" \
    "Direct Monitor Input 2 Level" \
    "Direct Monitor Coaxial Level" \
    "QUAD-CAPTURE Snapshot"; do
    grep -Fq "name='$control'" <<<"$quad_controls" || fail "missing QUAD ALSA control: $control"
done
$cli_bin --device quad mixer-status >/dev/null
printf '%s\n' "$quad_status"
printf '\nPASS: installed panel, CLI, launcher, metadata, live device readback, ALSA controls, and no background job.\n'
