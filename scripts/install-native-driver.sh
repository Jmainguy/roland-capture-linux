#!/usr/bin/env bash
# Build, transactionally install, and reload the streaming-only USB audio module.
set -euo pipefail

reload_modules=true
case ${1:-} in
	"") ;;
	--no-reload) reload_modules=false ;;
	*) echo "Usage: $0 [--no-reload]" >&2; exit 2 ;;
esac

kernel_release=$(uname -r)
kernel_version=${kernel_release%%-*}
script_dir=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)
project_dir=$(cd -- "$script_dir/.." && pwd)
default_tree=$(cd -- "$project_dir/.." && pwd)/linux-roland-fedora-$kernel_version
if [[ -n ${DRIVER_TREE:-} ]]; then
	driver_tree=$DRIVER_TREE
elif [[ -d $default_tree ]]; then
	driver_tree=$default_tree
else
	# Exact kernel-devel headers supply the running ABI. A prepared backport
	# source directory may survive a Fedora point-kernel update if it compiles.
	shopt -s nullglob
	prepared_trees=("$(cd -- "$project_dir/.." && pwd)"/linux-roland-fedora-*)
	shopt -u nullglob
	if (( ${#prepared_trees[@]} == 1 )); then
		driver_tree=${prepared_trees[0]}
	else
		driver_tree=$default_tree
	fi
fi
module_dir=$driver_tree/sound/usb
updates_dir=/lib/modules/$kernel_release/updates/octa-capture
audio_target=$updates_dir/snd-usb-audio.ko
midi_target=$updates_dir/snd-usbmidi-lib.ko
legacy_audio=/lib/modules/$kernel_release/updates/snd-usb-audio.ko
legacy_midi=/lib/modules/$kernel_release/updates/snd-usbmidi-lib.ko
backup_root=/var/lib/octa-capture-driver
backup_dir=$backup_root/$kernel_release-$(date -u +%Y%m%dT%H%M%SZ)

for command in make sudo modprobe depmod systemctl grep install amixer udevadm; do
	command -v "$command" >/dev/null || { echo "Missing required command: $command" >&2; exit 1; }
done
sudo -n true
[[ -d /usr/src/kernels/$kernel_release ]] || {
	echo "Missing exact kernel headers: /usr/src/kernels/$kernel_release" >&2
	exit 1
}
[[ -f $module_dir/quirks.c && -f $module_dir/quirks-table.h ]] || {
	echo "Prepared USB-audio driver tree not found: $driver_tree" >&2
	echo "Set DRIVER_TREE to the prepared exact-kernel source tree." >&2
	exit 1
}
grep -q 'roland_capture_set_rate' "$module_dir/quirks.c" || {
	echo "Driver tree lacks automatic Roland sample-rate synchronization." >&2
	exit 1
}
grep -q 'SNDRV_PCM_FMTBIT_S24_3LE' "$module_dir/quirks-table.h" || {
	echo "Driver tree lacks the OCTA-CAPTURE packed 24-bit correction." >&2
	exit 1
}

echo "Building streaming-only USB audio support for $kernel_release from $driver_tree"
make -C "/usr/src/kernels/$kernel_release" M="$module_dir" W=1 modules
[[ -f $module_dir/snd-usb-audio.ko ]] || {
	echo "Expected snd-usb-audio module was not built." >&2
	exit 1
}

sudo install -d -m 0755 "$backup_dir" "$updates_dir"
sudo install -m 0644 "$project_dir/scripts/99-octa-capture.rules" \
	/etc/udev/rules.d/99-octa-capture.rules
sudo udevadm control --reload-rules
sudo udevadm trigger --action=change --subsystem-match=usb --attr-match=idVendor=0582
audio_had_previous=false
midi_had_previous=false
legacy_audio_had_previous=false
legacy_midi_had_previous=false
if sudo test -f "$audio_target"; then
	sudo cp -a "$audio_target" "$backup_dir/"
	audio_had_previous=true
fi
if sudo test -f "$midi_target"; then
	sudo cp -a "$midi_target" "$backup_dir/"
	midi_had_previous=true
fi
if sudo test -f "$legacy_audio"; then
	sudo cp -a "$legacy_audio" "$backup_dir/legacy-snd-usb-audio.ko"
	legacy_audio_had_previous=true
fi
if sudo test -f "$legacy_midi"; then
	sudo cp -a "$legacy_midi" "$backup_dir/legacy-snd-usbmidi-lib.ko"
	legacy_midi_had_previous=true
fi

restore_modules() {
	set +e
	systemctl --user stop pipewire-pulse.socket pipewire-pulse.service \
		wireplumber.service pipewire.socket pipewire.service 2>/dev/null || true
	unload_audio_modules
	if $audio_had_previous; then sudo cp -a "$backup_dir/snd-usb-audio.ko" "$audio_target"; else sudo rm -f -- "$audio_target"; fi
	if $midi_had_previous; then sudo cp -a "$backup_dir/snd-usbmidi-lib.ko" "$midi_target"; else sudo rm -f -- "$midi_target"; fi
	if $legacy_audio_had_previous; then sudo cp -a "$backup_dir/legacy-snd-usb-audio.ko" "$legacy_audio"; fi
	if $legacy_midi_had_previous; then sudo cp -a "$backup_dir/legacy-snd-usbmidi-lib.ko" "$legacy_midi"; fi
	sudo depmod -a "$kernel_release"
	sudo modprobe snd_usb_audio
}

restart_user_audio() {
	systemctl --user unmask --runtime pipewire.socket pipewire-pulse.socket \
		pipewire.service wireplumber.service pipewire-pulse.service 2>/dev/null || true
	systemctl --user daemon-reload 2>/dev/null || true
	systemctl --user start pipewire.socket pipewire-pulse.socket \
		pipewire.service wireplumber.service pipewire-pulse.service 2>/dev/null || true
	sudo systemctl start alsa-state.service 2>/dev/null || true
}
trap restart_user_audio EXIT

unload_audio_modules() {
	if sudo modprobe -r snd_usb_audio snd_usbmidi_lib; then
		return 0
	fi
	# A socket-activated session manager can briefly retain ALSA cards even
	# after its units stop. Unbind only the interfaces currently owned by this
	# USB-audio driver, then retry; registering the replacement driver probes
	# those still-present devices again immediately.
	for interface_path in /sys/bus/usb/drivers/snd-usb-audio/*:*; do
		[[ -L $interface_path ]] || continue
		printf '%s' "${interface_path##*/}" |
			sudo tee /sys/bus/usb/drivers/snd-usb-audio/unbind >/dev/null
	done
	sudo modprobe -r snd_usb_audio snd_usbmidi_lib
}

systemctl --user stop pipewire-pulse.socket pipewire-pulse.service \
	wireplumber.service pipewire.socket pipewire.service 2>/dev/null || true
systemctl --user mask --runtime pipewire-pulse.socket pipewire-pulse.service \
	wireplumber.service pipewire.socket pipewire.service 2>/dev/null || true
sudo systemctl stop alsa-state.service 2>/dev/null || true
sudo rm -f -- "$legacy_audio" "$legacy_midi"
sudo install -m 0644 "$module_dir/snd-usb-audio.ko" "$audio_target"
# The reduced driver uses the distribution's unchanged snd-usbmidi-lib.
sudo rm -f -- "$midi_target"
sudo depmod -a "$kernel_release"

if ! $reload_modules; then
	echo "Installed Roland Capture streaming support for the next module load/reboot."
	echo "The currently loaded audio stack was not stopped or changed."
	echo "Previous update modules are recoverable from: $backup_dir"
	echo "No cron job, systemd unit, or persistent userspace process was installed."
	exit 0
fi

set +e
unload_audio_modules
reload_status=$?
if (( reload_status == 0 )); then
	sudo modprobe snd_ump
	sudo modprobe snd_usbmidi_lib && sudo modprobe snd_usb_audio
	reload_status=$?
fi
set -e
if (( reload_status != 0 )); then
	echo "USB-audio reload failed; restoring the previous update modules." >&2
	restore_modules
	exit 1
fi

sleep 2
audio_loaded=$(modinfo -n snd_usb_audio)
midi_loaded=$(modinfo -n snd_usbmidi_lib)
if [[ $audio_loaded != "$audio_target" || $midi_loaded == "$midi_target" ]]; then
	echo "Module precedence verification failed; rolling back." >&2
	echo "audio: $audio_loaded" >&2
	echo "midi:  $midi_loaded" >&2
	restore_modules
	exit 1
fi

roland_card=
for card in /proc/asound/card[0-9]*; do
	[[ -f $card/usbid ]] || continue
	case $(<"$card/usbid") in
		0582:0120|0582:012f) roland_card=${card##*card}; break ;;
	esac
done
if [[ -z $roland_card ]]; then
	echo "Roland Capture device did not return after reload; rolling back." >&2
	restore_modules
	exit 1
fi
[[ -r /proc/asound/card$roland_card/stream0 ]] || {
	echo "Roland PCM stream topology is unavailable; rolling back." >&2
	restore_modules
	exit 1
}

# Restart the graph before leaving. The kernel now synchronizes the hardware
# clock whenever PipeWire or ALSA prepares a PCM format, so no CLI sync follows.
restart_user_audio

echo "Installed and verified Roland Capture streaming module:"
echo "  $audio_target"
echo "Using the distribution USB-MIDI module: $midi_loaded"
echo "Previous update modules, when present, are recoverable from: $backup_dir"
echo "No cron job, systemd unit, or persistent userspace process was installed."
