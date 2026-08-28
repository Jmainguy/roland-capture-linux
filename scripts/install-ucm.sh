#!/usr/bin/env bash
# Install desktop-friendly ALSA UCM profiles for OCTA/QUAD-CAPTURE.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SRC="$SCRIPT_DIR/../ucm2/USB-Audio"
DEST="/usr/share/alsa/ucm2/USB-Audio"

if [[ $EUID -ne 0 ]] && ! sudo -n true 2>/dev/null; then
	echo "Run as root or with sudo." >&2
	exit 1
fi

run_root() { if [[ $EUID -eq 0 ]]; then "$@"; else sudo "$@"; fi; }

run_user() {
	local user="${SUDO_USER:-$USER}"
	local uid
	uid="$(id -u "$user")"
	local runtime="/run/user/$uid"
	if [[ $EUID -eq 0 && "$user" != "root" ]]; then
		sudo -u "$user" env XDG_RUNTIME_DIR="$runtime" \
			DBUS_SESSION_BUS_ADDRESS="unix:path=${runtime}/bus" "$@"
	else
		env XDG_RUNTIME_DIR="${XDG_RUNTIME_DIR:-$runtime}" "$@"
	fi
}

for f in \
	"$SRC/Roland/Octa-Capture.conf" \
	"$SRC/Roland/Octa-Capture-HiFi.conf" \
	"$SRC/Roland/Quad-Capture.conf" \
	"$SRC/Roland/Quad-Capture-HiFi.conf" \
	"$SRC/conf.d/0582-0120.conf"
do
	if [[ ! -f "$f" ]]; then
		echo "Missing $f" >&2
		exit 1
	fi
done

run_root mkdir -p "$DEST/Roland" "$DEST/conf.d"
run_root cp -v \
	"$SRC/Roland/Octa-Capture.conf" \
	"$SRC/Roland/Octa-Capture-HiFi.conf" \
	"$SRC/Roland/Quad-Capture.conf" \
	"$SRC/Roland/Quad-Capture-HiFi.conf" \
	"$DEST/Roland/"
run_root cp -v \
	"$SRC/conf.d/0582-0120.conf" \
	"$DEST/conf.d/"

echo "Installed OCTA/QUAD-CAPTURE desktop UCM under $DEST"
echo "Restarting WirePlumber so the card re-enumerates…"
run_user systemctl --user restart wireplumber.service 2>/dev/null || true
sleep 2

if command -v pactl >/dev/null; then
	run_user pactl list cards 2>/dev/null | awk '
		/OCTA-CAPTURE|QUAD-CAPTURE/ {hit=1}
		hit && /Profiles:/ {p=1}
		hit && p && /^[[:space:]]+[a-zA-Z0-9].*:/ {print "  " $0}
		hit && /Active Profile:/ {print "  " $0; exit}
	' || true
fi

echo "Done. Settings → Sound now lists mono inputs and practical output destinations."
echo "At 192 kHz use Pro Audio — the HiFi splits describe the full-width channel layouts."
