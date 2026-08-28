//! Safe, frontend-independent device operations.

use crate::{alsa, device::Kind, pipewire, sysex, usb_rate};
use anyhow::{bail, Context, Result};
use std::thread;
use std::time::Duration;

pub const SUPPORTED_RATES: [u32; 4] = [44_100, 48_000, 96_000, 192_000];

/// Set and confirm the hardware sample rate, then rebuild the PipeWire graph
/// for the device's channel count at that rate.
pub fn set_sample_rate(kind: Kind, hz: u32) -> Result<()> {
    if !SUPPORTED_RATES.contains(&hz) {
        bail!("unsupported sample rate {hz} Hz");
    }

    let card = alsa::find_card(kind).with_context(|| format!("{} not found", kind.label()))?;
    let _default_source = pipewire::DefaultSourcePreserver::capture();
    let _lock = RateLock::acquire(hz);
    let _autoset = pipewire::AutosetPause::enter();

    pipewire::release_device(kind)?;
    let _ = pipewire::release_other(kind);
    wait_for_idle(card);

    if kind == Kind::Octa {
        if let Some(midi) = alsa::find_midi(kind) {
            // This updates the OCTA's remembered front-panel preference. The
            // live USB clock write below remains authoritative for this call.
            let _ = sysex::write_sample_rate(&midi, rate_enum(hz)?);
        }
    }

    apply_pipewire(kind, hz)?;
    confirm_rate(kind, hz)
}

fn rate_enum(hz: u32) -> Result<u8> {
    SUPPORTED_RATES
        .iter()
        .position(|candidate| *candidate == hz)
        .map(|index| index as u8)
        .with_context(|| format!("unsupported sample rate {hz} Hz"))
}

fn wait_for_idle(card: u32) {
    for _ in 0..25 {
        if alsa::streams_idle(card) {
            break;
        }
        thread::sleep(Duration::from_millis(100));
    }
    thread::sleep(Duration::from_millis(200));
}

fn confirm_rate(kind: Kind, expected: u32) -> Result<()> {
    let actual = usb_rate::get_hardware_rate(kind).context("read hardware sample rate")?;
    if actual != expected {
        bail!("hardware reports {actual} Hz after requesting {expected} Hz");
    }
    Ok(())
}

fn apply_pipewire(kind: Kind, hz: u32) -> Result<()> {
    let previous = pipewire::last_configured_rate();
    let layout_changed = pipewire::channel_layout_changes(kind, previous, hz);

    pipewire::configure_channels_for_rate(kind, hz)?;
    pipewire::release_device(kind)?;
    let _ = pipewire::release_other(kind);
    let _ = pipewire::remember_profile_off(kind);

    if kind == Kind::Quad || layout_changed {
        pipewire::stop_stack_briefly()?;
        if let Ok(card) = alsa::find_card(kind) {
            wait_for_idle(card);
        }
        usb_rate::set_hardware_rate(kind, hz)?;
        pipewire::start_stack()?;
    } else {
        pipewire::ensure_stack()?;
        pipewire::restart_wireplumber()?;
        thread::sleep(Duration::from_millis(400));
        pipewire::release_device(kind)?;
        if let Ok(card) = alsa::find_card(kind) {
            wait_for_idle(card);
        }
        usb_rate::set_hardware_rate(kind, hz)?;
    }

    pipewire::set_clock_rate(hz)?;
    pipewire::wait_force_rate(hz)?;
    pipewire::enable_device_profile(kind)?;
    pipewire::set_device_default(kind)?;
    let _ = pipewire::remember_profile_active(kind);
    thread::sleep(Duration::from_millis(600));
    Ok(())
}

struct RateLock;

impl RateLock {
    fn path() -> std::path::PathBuf {
        std::env::temp_dir().join("octa-rate.lock")
    }

    fn acquire(hz: u32) -> Self {
        let _ = std::fs::write(Self::path(), format!("{hz}\n"));
        let _ = std::fs::write(
            std::env::temp_dir().join("octa-rate.intent"),
            format!("{hz}\n"),
        );
        Self
    }
}

impl Drop for RateLock {
    fn drop(&mut self) {
        let _ = std::fs::remove_file(Self::path());
    }
}
