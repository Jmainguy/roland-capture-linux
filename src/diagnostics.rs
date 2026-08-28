//! Sanitized, machine-readable support bundles shared by GUI and CLI.

use crate::{device::Kind, state::DeviceSnapshot};
use anyhow::{Context, Result};
use serde::Serialize;
use std::fs;
use std::path::Path;
use std::process::Command;
use std::time::{SystemTime, UNIX_EPOCH};

#[derive(Debug, Serialize)]
pub struct SupportBundle {
    schema: u32,
    generated_unix_seconds: u64,
    application_version: &'static str,
    device_model: &'static str,
    usb_id: &'static str,
    connected: bool,
    alsa_card: Option<u32>,
    hardware_rate_hz: Option<u32>,
    rate_vendor_status: Option<u8>,
    clock_source: Option<&'static str>,
    external_clock_hz: Option<u32>,
    external_clock_locked: Option<bool>,
    quad_controls_readable: bool,
    matching_usb_devices: usize,
    usb_device_revision: Option<String>,
    hardware_rate_error: Option<String>,
    kernel: Option<String>,
    pipewire_version: Option<String>,
    background_service: &'static str,
    privacy: &'static str,
}

fn first_line(command: &str, args: &[&str]) -> Option<String> {
    let output = Command::new(command).args(args).output().ok()?;
    if !output.status.success() {
        return None;
    }
    String::from_utf8_lossy(&output.stdout)
        .lines()
        .next()
        .map(str::trim)
        .filter(|line| !line.is_empty())
        .map(ToOwned::to_owned)
}

fn pipewire_version() -> Option<String> {
    let output = Command::new("pipewire").arg("--version").output().ok()?;
    if !output.status.success() {
        return None;
    }
    String::from_utf8_lossy(&output.stdout)
        .lines()
        .map(str::trim)
        .find(|line| line.starts_with("Linked with "))
        .map(ToOwned::to_owned)
}

impl SupportBundle {
    pub fn collect(kind: Kind) -> Self {
        let snapshot = DeviceSnapshot::read(kind);
        Self {
            schema: 1,
            generated_unix_seconds: SystemTime::now()
                .duration_since(UNIX_EPOCH)
                .unwrap_or_default()
                .as_secs(),
            application_version: env!("CARGO_PKG_VERSION"),
            device_model: kind.label(),
            usb_id: kind.usbid(),
            connected: snapshot.connected(),
            alsa_card: snapshot.card,
            hardware_rate_hz: snapshot.rate,
            rate_vendor_status: snapshot.rate_vendor_status,
            clock_source: snapshot.clock.map(|clock| {
                if clock.external {
                    "external"
                } else {
                    "internal"
                }
            }),
            external_clock_hz: snapshot
                .clock
                .filter(|clock| clock.external)
                .map(|clock| clock.external_hz),
            external_clock_locked: snapshot
                .clock
                .filter(|clock| clock.external)
                .map(|clock| clock.locked),
            quad_controls_readable: kind != Kind::Quad || snapshot.quad.is_some(),
            matching_usb_devices: snapshot.identities.len(),
            usb_device_revision: snapshot
                .identities
                .first()
                .map(|identity| identity.device_revision.clone()),
            hardware_rate_error: snapshot.error,
            kernel: first_line("uname", &["-sr"]),
            pipewire_version: pipewire_version(),
            background_service: "none",
            privacy: "serial numbers, usernames, hostnames, paths, and audio are excluded",
        }
    }

    pub fn write_json(&self, path: &Path) -> Result<()> {
        let bytes = serde_json::to_vec_pretty(self).context("encode support bundle")?;
        fs::write(path, bytes).with_context(|| format!("write support bundle {}", path.display()))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn serialized_bundle_has_no_common_identity_fields() {
        let json = serde_json::to_string(&SupportBundle::collect(Kind::Quad)).unwrap();
        for forbidden in ["serial_number", "username", "hostname", "home_directory"] {
            assert!(!json.contains(&format!("\"{forbidden}\"")));
        }
        assert!(json.contains("\"background_service\":\"none\""));
    }
}
