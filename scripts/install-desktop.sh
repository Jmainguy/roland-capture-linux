#!/usr/bin/env bash
set -euo pipefail

repo_dir=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)
data_dir=${XDG_DATA_HOME:-"${HOME}/.local/share"}
bin_dir="${HOME}/.local/bin"
app_id=io.github.jmainguy.OctaCaptureControl

cargo build --release --manifest-path "${repo_dir}/Cargo.toml" --bin octa-control --bin octa

install -d "${bin_dir}" "${data_dir}/applications" \
  "${data_dir}/icons/hicolor/scalable/apps" "${data_dir}/metainfo"
install -m 0755 "${repo_dir}/target/release/octa-control" "${bin_dir}/octa-control"
install -m 0755 "${repo_dir}/target/release/octa" "${bin_dir}/octa"
install -m 0644 "${repo_dir}/packaging/${app_id}.svg" \
  "${data_dir}/icons/hicolor/scalable/apps/${app_id}.svg"
install -m 0644 "${repo_dir}/packaging/${app_id}.metainfo.xml" \
  "${data_dir}/metainfo/${app_id}.metainfo.xml"

sed "s|@EXEC@|${bin_dir}/octa-control|" \
  "${repo_dir}/packaging/${app_id}.desktop.in" \
  > "${data_dir}/applications/${app_id}.desktop"
chmod 0644 "${data_dir}/applications/${app_id}.desktop"

if command -v update-desktop-database >/dev/null 2>&1; then
  update-desktop-database "${data_dir}/applications" || true
fi
if command -v gtk-update-icon-cache >/dev/null 2>&1 \
  && [[ -f "${data_dir}/icons/hicolor/index.theme" ]]; then
  gtk-update-icon-cache -f -t "${data_dir}/icons/hicolor" >/dev/null || true
fi

echo "Installed Roland Capture Control for the current user."
echo "No cron job or systemd service was installed."

resolved_cli=$(command -v octa || true)
if [[ -n "$resolved_cli" ]] && ! cmp -s "$resolved_cli" "${bin_dir}/octa"; then
  echo "Warning: PATH resolves a different octa executable at ${resolved_cli}." >&2
  echo "Move/remove that stale executable or put ${bin_dir} earlier in PATH." >&2
fi
