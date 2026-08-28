#!/usr/bin/env bash
exec "$(dirname -- "${BASH_SOURCE[0]}")/install-native-driver.sh" "$@"
# Build, install, and reload patched snd-usb-audio for Roland OCTA/QUAD-CAPTURE.
#
# Patches (under patches/):
#   quirks-table-octa-quad.patch  — OCTA S24_3LE + multi-rate; QUAD S32_LE + multi-rate
#   quirks-midi-mixer-cables.patch — expose OCTA's asymmetric mixer MIDI cables
#   quirks-c-rate-on-start.patch  — vendor sample-rate SET when PCM endpoints start
set -euo pipefail
shopt -s nullglob

KVER="$(uname -r)"
BUILD_DIR="${BUILD_DIR:-/tmp/kernel-build}"
SRC_DIR="$BUILD_DIR/linux-src-$KVER"
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PATCH_DIR="$SCRIPT_DIR/../patches"
PATCHES=(
	"$PATCH_DIR/quirks-table-octa-quad.patch"
	"$PATCH_DIR/quirks-midi-mixer-cables.patch"
	"$PATCH_DIR/quirks-c-rate-on-start.patch"
)

if [[ $EUID -ne 0 ]] && ! sudo -n true 2>/dev/null; then
	echo "Run as root or with sudo." >&2
	exit 1
fi

run_root() { if [[ $EUID -eq 0 ]]; then "$@"; else sudo "$@"; fi; }

# PipeWire is a user service; when this script is run via sudo, talk to SUDO_USER's session.
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

reload_snd_usb_audio() {
	echo "Reloading snd-usb-audio…"
	# Stop sockets too — otherwise PipeWire respawns and keeps the module busy.
	run_user systemctl --user stop \
		pipewire-pulse.socket pipewire.socket \
		pipewire-pulse.service wireplumber.service pipewire.service 2>/dev/null || true
	sleep 2

	local bound=()
	local dev
	shopt -s nullglob
	for dev in /sys/bus/usb/drivers/snd-usb-audio/*:*; do
		bound+=("$(basename "$dev")")
	done
	for dev in "${bound[@]}"; do
		echo "Unbinding $dev"
		echo -n "$dev" | run_root tee /sys/bus/usb/drivers/snd-usb-audio/unbind >/dev/null || true
	done
	sleep 0.5

	if ! run_root modprobe -r snd-usb-audio; then
		echo "Could not unload snd-usb-audio (still busy)." >&2
		echo "Close apps using USB audio and re-run." >&2
		run_root modprobe snd-usb-audio 2>/dev/null || true
		for dev in "${bound[@]}"; do
			echo -n "$dev" | run_root tee /sys/bus/usb/drivers/snd-usb-audio/bind >/dev/null 2>&1 || true
		done
		run_user systemctl --user start \
			pipewire.socket pipewire-pulse.socket \
			pipewire.service wireplumber.service pipewire-pulse.service 2>/dev/null || true
		return 1
	fi
	run_root modprobe snd-usb-audio
	sleep 0.5
	for dev in "${bound[@]}"; do
		echo "Binding $dev"
		echo -n "$dev" | run_root tee /sys/bus/usb/drivers/snd-usb-audio/bind >/dev/null 2>&1 || true
	done
	sleep 2

	run_user systemctl --user start \
		pipewire.socket pipewire-pulse.socket \
		pipewire.service wireplumber.service pipewire-pulse.service 2>/dev/null || true
	sleep 2

	echo "Loaded module:"
	modinfo -F filename snd-usb-audio 2>/dev/null || true
	local found=0
	local card usbid
	for card in /proc/asound/card*; do
		[[ -f "$card/usbid" ]] || continue
		usbid="$(cat "$card/usbid")"
		case "$usbid" in
		0582:0120)
			found=1
			echo "OCTA-CAPTURE ($card):"
			grep -E 'Format|Rates|Channels|Altset' "$card/stream0" 2>/dev/null || true
			;;
		0582:012f)
			found=1
			echo "QUAD-CAPTURE ($card):"
			grep -E 'Format|Rates|Channels|Altset' "$card/stream0" 2>/dev/null || true
			;;
		esac
	done
	if (( !found )); then
		echo "(OCTA/QUAD not visible yet — unplug/replug if needed)"
	fi

	# octa (user) pauses autoset during rate changes; kernel rejects 0666 mode.
	if [[ -e /sys/module/snd_usb_audio/parameters/octa_capture_autoset ]]; then
		run_root chmod 666 /sys/module/snd_usb_audio/parameters/octa_capture_autoset || true
	fi
}

extract_kernel_source() {
	mkdir -p "$BUILD_DIR"
	cd "$BUILD_DIR"

	local rpm=(kernel-*.src.rpm)
	if (( ${#rpm[@]} == 0 )); then
		echo "Downloading kernel source for $KVER…"
		local arch
		arch="$(uname -m)"
		local ver_rel="${KVER%."$arch"}"   # 7.1.3-200.fc44
		local ver="${ver_rel%%-*}"         # 7.1.3
		local rel="${ver_rel#*-}"          # 200.fc44

		if ! run_root dnf download --source "kernel-$ver-$rel" 2>/dev/null; then
			local url="https://kojipkgs.fedoraproject.org/packages/kernel/${ver}/${rel}/src/kernel-${ver}-${rel}.src.rpm"
			echo "dnf has no SRPM; fetching $url …"
			run_root curl -fL --retry 3 -o "kernel-${ver}-${rel}.src.rpm" "$url"
		fi
		rpm=(kernel-*.src.rpm)
	fi
	if (( ${#rpm[@]} == 0 )); then
		echo "kernel source RPM not found for $KVER" >&2
		exit 1
	fi
	echo "Unpacking ${rpm[0]}…"
	rm -rf "$SRC_DIR"
	cpio -idmv < <(rpm2cpio "${rpm[0]}")

	local tarball=(linux-*.tar.*)
	if (( ${#tarball[@]} == 0 )); then
		echo "No linux-*.tar.* in kernel source RPM" >&2
		exit 1
	fi

	echo "Extracting ${tarball[0]}…"
	tar -xf "${tarball[0]}"
	local extracted=(linux-*/)
	if (( ${#extracted[@]} != 1 )); then
		echo "Unexpected kernel tarball layout" >&2
		exit 1
	fi
	mv "${extracted[0]}" "$SRC_DIR"

	if [[ -f "/boot/config-$KVER" ]]; then
		cp "/boot/config-$KVER" "$SRC_DIR/.config"
	fi
}

apply_patches() {
	local patch
	for patch in "${PATCHES[@]}"; do
		if [[ ! -f "$patch" ]]; then
			echo "Missing patch: $patch" >&2
			exit 1
		fi
		echo "Applying $(basename "$patch")…"
		if ! patch -p1 --forward --batch -N <"$patch"; then
			echo "Failed to apply $patch" >&2
			echo "Source tree: $SRC_DIR" >&2
			exit 1
		fi
	done

	if ! grep -q 'octa_capture_set_rate' sound/usb/quirks.c; then
		echo "rate-on-start quirk missing from quirks.c after patch" >&2
		exit 1
	fi
	if ! grep -q '0x012f' sound/usb/quirks-table.h || ! grep -q '192000' sound/usb/quirks-table.h; then
		echo "QUAD multi-rate quirk missing from quirks-table.h after patch" >&2
		exit 1
	fi
	if ! grep -q 'out_cables = 0x0005' sound/usb/quirks-table.h ||
	   ! grep -q 'in_cables  = 0x0003' sound/usb/quirks-table.h; then
		echo "OCTA mixer MIDI cable quirk missing from quirks-table.h after patch" >&2
		exit 1
	fi
}

if [[ ! -f "$SRC_DIR/sound/usb/quirks-table.h" ]]; then
	extract_kernel_source
fi

cd "$SRC_DIR"

# Fresh tree each install so patches always apply cleanly against stock.
if grep -q 'octa_capture_set_rate\|S24_3LE' sound/usb/quirks.c sound/usb/quirks-table.h 2>/dev/null; then
	echo "Source tree already patched; re-extracting stock kernel…"
	extract_kernel_source
	cd "$SRC_DIR"
fi

apply_patches

make olddefconfig >/dev/null
make -C "/lib/modules/$KVER/build" M="$PWD/sound/usb" modules

run_root mkdir -p "/lib/modules/$KVER/updates"
run_root cp sound/usb/snd-usb-audio.ko "/lib/modules/$KVER/updates/"
run_root depmod -a

echo "Installed /lib/modules/$KVER/updates/snd-usb-audio.ko"
reload_snd_usb_audio
echo "OCTA/QUAD: multi-rate alts + rate-on-start. Optional: cargo install --path .  # octa CLI"
