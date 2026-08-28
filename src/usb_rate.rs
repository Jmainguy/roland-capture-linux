//! Live sample-rate get/set via Roland vendor USB controls.
//!
//! Protocol (from roland-capture focused USB captures):
//! - Vendor OUT `bmRequestType=0x40`, `bRequest=3`, `wValue=0x0008`,
//!   payload `[0x40, rate_le24…]` — set live clock (streams should be idle).
//! - Vendor IN `0xc0` / request 3 / `wValue=0x0001`, 4 bytes —
//!   `[rate_le24…, status]`; status 0 = ready. Works while streaming.
//!
//! Same control protocol on OCTA-CAPTURE (`0120`) and QUAD-CAPTURE (`012f`).

use crate::device::Kind;
use anyhow::{bail, Context, Result};
use rusb::{DeviceHandle, Direction, GlobalContext, Recipient, RequestType};
use std::time::Duration;

const VID: u16 = 0x0582;
const TIMEOUT: Duration = Duration::from_millis(2000);

fn open_device(kind: Kind) -> Result<DeviceHandle<GlobalContext>> {
    let pid = kind.usb_pid();
    rusb::devices()
        .context("enumerate USB")?
        .iter()
        .find(|d| {
            d.device_descriptor()
                .map(|desc| desc.vendor_id() == VID && desc.product_id() == pid)
                .unwrap_or(false)
        })
        .with_context(|| format!("{} USB device not found", kind.label()))?
        .open()
        .with_context(|| {
            format!(
                "open {} USB device — ensure you are in the `audio` group \
                 (install scripts/99-octa-capture.rules)",
                kind.label()
            )
        })
}

fn rate_payload(hz: u32) -> [u8; 4] {
    [
        0x40,
        (hz & 0xff) as u8,
        ((hz >> 8) & 0xff) as u8,
        ((hz >> 16) & 0xff) as u8,
    ]
}

fn decode_rate(buf: &[u8]) -> Result<(u32, u8)> {
    if buf.len() < 4 {
        bail!("short vendor rate response ({} bytes)", buf.len());
    }
    let hz = u32::from(buf[0]) | (u32::from(buf[1]) << 8) | (u32::from(buf[2]) << 16);
    let status = buf[3];
    match hz {
        44100 | 48000 | 96000 | 192000 => Ok((hz, status)),
        _ => bail!("vendor reported unexpected rate {hz} Hz (raw {:02x?})", buf),
    }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct RateState {
    pub hz: u32,
    /// Vendor byte observed beside the rate. Captures show it changing during
    /// transitions, but it is not reliable enough to call a lock indicator.
    pub vendor_status: u8,
}

/// Read the complete live rate response, preserving the undecoded status byte.
pub fn get_rate_state(kind: Kind) -> Result<RateState> {
    let dev = open_device(kind)?;
    read_rate_state(&dev)
}

fn read_rate_state(dev: &DeviceHandle<GlobalContext>) -> Result<RateState> {
    let in_type = rusb::request_type(Direction::In, RequestType::Vendor, Recipient::Device);
    let mut buf = [0u8; 4];
    let n = dev
        .read_control(in_type, 3, 0x0001, 0, &mut buf, TIMEOUT)
        .context("vendor get-rate control transfer")?;
    if n < 4 {
        bail!("short vendor get-rate response ({n} bytes)");
    }
    let (hz, vendor_status) = decode_rate(&buf)?;
    Ok(RateState { hz, vendor_status })
}

/// Read the live hardware sample-rate clock (vendor IN, wValue 0x0001).
pub fn get_hardware_rate(kind: Kind) -> Result<u32> {
    Ok(get_rate_state(kind)?.hz)
}

/// Ask the device to switch its live sample-rate clock.
pub fn set_hardware_rate(kind: Kind, hz: u32) -> Result<()> {
    match hz {
        44100 | 48000 | 96000 | 192000 => {}
        _ => bail!("unsupported rate {hz}"),
    }

    let dev = open_device(kind)?;
    let payload = rate_payload(hz);
    let out_type = rusb::request_type(Direction::Out, RequestType::Vendor, Recipient::Device);

    let written = dev
        .write_control(out_type, 3, 0x0008, 0, &payload, TIMEOUT)
        .context("vendor set-rate control transfer")?;
    if written != payload.len() {
        bail!("short write on set-rate ({written} bytes)");
    }

    let mut last_observation = None;
    for _ in 0..40 {
        if let Ok(state) = read_rate_state(&dev) {
            last_observation = Some(state);
            if state.hz == hz {
                return Ok(());
            }
        }
        std::thread::sleep(Duration::from_millis(25));
    }
    match last_observation {
        Some(state) => bail!(
            "hardware did not confirm {hz} Hz; last response was {} Hz (status 0x{:02x})",
            state.hz,
            state.vendor_status
        ),
        None => bail!("hardware did not return a valid rate confirmation for {hz} Hz"),
    }
}

#[cfg(test)]
mod rate_tests {
    use super::*;

    #[test]
    fn decodes_rate_and_preserves_vendor_status() {
        assert_eq!(decode_rate(&[0x00, 0x77, 0x01, 0x01]).unwrap(), (96_000, 1));
    }

    #[test]
    fn rejects_short_and_unknown_rate_responses() {
        assert!(decode_rate(&[0, 0, 0]).is_err());
        assert!(decode_rate(&[1, 2, 3, 0]).is_err());
    }
}
