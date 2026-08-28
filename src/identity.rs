//! Read-only USB identity and duplicate-device detection.

use crate::device::Kind;
use anyhow::{Context, Result};

const VID: u16 = 0x0582;

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct UsbIdentity {
    pub kind: Kind,
    pub bus: u8,
    pub address: u8,
    pub device_revision: String,
    pub manufacturer: Option<String>,
    pub product: Option<String>,
    pub serial: Option<String>,
}

pub fn enumerate(kind: Kind) -> Result<Vec<UsbIdentity>> {
    let devices = rusb::devices().context("enumerate USB identities")?;
    let mut identities = Vec::new();
    for device in devices.iter() {
        let descriptor = match device.device_descriptor() {
            Ok(descriptor)
                if descriptor.vendor_id() == VID && descriptor.product_id() == kind.usb_pid() =>
            {
                descriptor
            }
            _ => continue,
        };
        let (manufacturer, product, serial) = match device.open() {
            Ok(handle) => (
                handle.read_manufacturer_string_ascii(&descriptor).ok(),
                handle.read_product_string_ascii(&descriptor).ok(),
                handle.read_serial_number_string_ascii(&descriptor).ok(),
            ),
            Err(_) => (None, None, None),
        };
        identities.push(UsbIdentity {
            kind,
            bus: device.bus_number(),
            address: device.address(),
            device_revision: descriptor.device_version().to_string(),
            manufacturer,
            product,
            serial,
        });
    }
    identities.sort_by_key(|identity| (identity.bus, identity.address));
    Ok(identities)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn identity_fields_distinguish_usb_instances() {
        let one = UsbIdentity {
            kind: Kind::Octa,
            bus: 1,
            address: 2,
            device_revision: "2.00".into(),
            manufacturer: Some("Roland".into()),
            product: Some("OCTA-CAPTURE".into()),
            serial: Some("one".into()),
        };
        let mut two = one.clone();
        two.address = 3;
        assert_ne!(one, two);
    }
}
