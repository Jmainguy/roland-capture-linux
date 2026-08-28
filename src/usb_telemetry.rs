//! Read-only probing for the OCTA's auxiliary interrupt-IN interfaces.

use crate::device::Kind;
use anyhow::{Context, Result};
use rusb::{DeviceHandle, GlobalContext};
use std::collections::BTreeMap;
use std::time::{Duration, Instant};

const VID: u16 = 0x0582;

#[derive(Clone, Debug, Default)]
pub struct TelemetryCapture {
    pub interface: u8,
    pub endpoint: u8,
    pub frames: usize,
    pub unique: BTreeMap<Vec<u8>, usize>,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ClockFrame {
    pub sequence: u8,
    /// Driver-preserved bit 0 of byte 2. Its semantic meaning is not yet proven.
    pub rate_flag: bool,
    pub external_hz: u32,
    pub external: bool,
    pub locked: bool,
}

pub fn decode_clock_frame(frame: &[u8]) -> Result<ClockFrame> {
    if frame.len() != 8 {
        anyhow::bail!("clock telemetry frame must be 8 bytes, got {}", frame.len());
    }
    if frame[1] != 0 {
        anyhow::bail!("unexpected nonzero reserved clock telemetry byte 1");
    }
    if frame[2] & !1 != 0 {
        anyhow::bail!("unexpected clock telemetry flags 0x{:02x}", frame[2]);
    }
    let external_hz = u32::from_le_bytes([frame[3], frame[4], frame[5], 0]);
    Ok(ClockFrame {
        sequence: frame[0],
        rate_flag: frame[2] & 1 != 0,
        external_hz,
        external: frame[6] != 0,
        locked: frame[7] != 0,
    })
}

pub fn capture(kind: Kind, interface: u8, seconds: u64) -> Result<TelemetryCapture> {
    let endpoint = match interface {
        3 => 0x82,
        4 => 0x81,
        _ => anyhow::bail!("telemetry interface must be 3 or 4"),
    };
    let handle = open_device(kind)?;
    if handle.kernel_driver_active(interface).unwrap_or(false) {
        anyhow::bail!(
            "refusing to detach the active kernel audio driver from interface {interface}; \
             use a passive usbmon capture instead"
        );
    }

    let result = capture_claimed(&handle, interface, endpoint, seconds);
    let _ = handle.release_interface(interface);
    result
}

fn capture_claimed(
    handle: &DeviceHandle<GlobalContext>,
    interface: u8,
    endpoint: u8,
    seconds: u64,
) -> Result<TelemetryCapture> {
    handle
        .claim_interface(interface)
        .with_context(|| format!("claim telemetry interface {interface}"))?;
    handle
        .set_alternate_setting(interface, 1)
        .with_context(|| format!("enable telemetry interface {interface}"))?;

    let deadline = Instant::now() + Duration::from_secs(seconds.max(1));
    let mut capture = TelemetryCapture {
        interface,
        endpoint,
        ..Default::default()
    };
    let mut buffer = [0_u8; 8];
    while Instant::now() < deadline {
        match handle.read_interrupt(endpoint, &mut buffer, Duration::from_millis(100)) {
            Ok(length) => {
                let frame = buffer[..length].to_vec();
                capture.frames += 1;
                *capture.unique.entry(frame).or_default() += 1;
            }
            Err(rusb::Error::Timeout) => {}
            Err(error) => return Err(error).context("read telemetry interrupt endpoint"),
        }
    }
    Ok(capture)
}

fn open_device(kind: Kind) -> Result<DeviceHandle<GlobalContext>> {
    rusb::devices()
        .context("enumerate USB")?
        .iter()
        .find(|device| {
            device
                .device_descriptor()
                .map(|descriptor| {
                    descriptor.vendor_id() == VID && descriptor.product_id() == kind.usb_pid()
                })
                .unwrap_or(false)
        })
        .with_context(|| format!("{} USB device not found", kind.label()))?
        .open()
        .with_context(|| format!("open {} USB device", kind.label()))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn decodes_observed_96k_clock_frame() {
        assert_eq!(
            decode_clock_frame(&[1, 0, 0, 0, 0x77, 0x01, 0, 1]).unwrap(),
            ClockFrame {
                sequence: 1,
                rate_flag: false,
                external_hz: 96_000,
                external: false,
                locked: true,
            }
        );
    }

    #[test]
    fn decodes_observed_48k_fractional_clock_frame() {
        assert_eq!(
            decode_clock_frame(&[0, 0, 1, 0x80, 0xBB, 0, 0, 1]).unwrap(),
            ClockFrame {
                sequence: 0,
                rate_flag: true,
                external_hz: 48_000,
                external: false,
                locked: true,
            }
        );
    }

    #[test]
    fn decodes_external_unlocked_state() {
        assert_eq!(
            decode_clock_frame(&[2, 0, 0, 0x80, 0xbb, 0, 1, 0]).unwrap(),
            ClockFrame {
                sequence: 2,
                rate_flag: false,
                external_hz: 48_000,
                external: true,
                locked: false,
            }
        );
    }

    #[test]
    fn rejects_unknown_flag_bits() {
        assert!(decode_clock_frame(&[0, 0, 2, 0, 0, 0, 0, 0]).is_err());
    }
}
