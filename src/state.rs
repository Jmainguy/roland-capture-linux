//! Shared read-only device snapshot used by GUI, diagnostics, and CLI exports.

use crate::{alsa, device::Kind, identity, kernel_mixer, mixer, usb_rate};

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct DeviceSnapshot {
    pub kind: Kind,
    pub card: Option<u32>,
    pub rate: Option<u32>,
    pub rate_vendor_status: Option<u8>,
    pub clock: Option<kernel_mixer::ClockState>,
    pub mixer: Option<mixer::MixerSnapshot>,
    pub device_globals_raw: Option<[u8; 5]>,
    pub kernel_preamps: Option<[crate::model::Preamp; crate::model::PREAMP_CHANNELS]>,
    pub kernel_direct_input_switches: Option<
        [[crate::model::MixerStrip; crate::model::INPUT_MIX_CHANNELS]; crate::model::DIRECT_MIXERS],
    >,
    pub kernel_wave_outputs: Option<
        [[crate::model::MixerStrip; crate::model::INPUT_MIX_CHANNELS]; crate::model::DIRECT_MIXERS],
    >,
    pub kernel_direct_masters: Option<[crate::model::DirectMixer; crate::model::DIRECT_MIXERS]>,
    pub kernel_patch_bay: Option<[crate::model::PatchSource; crate::model::OUTPUT_PAIRS]>,
    pub kernel_reverb: Option<crate::model::Reverb>,
    pub quad: Option<crate::quad::QuadSettings>,
    pub error: Option<String>,
    pub identities: Vec<identity::UsbIdentity>,
}

impl DeviceSnapshot {
    pub fn read(kind: Kind) -> Self {
        let identities = identity::enumerate(kind).unwrap_or_default();
        if identities.len() > 1 {
            return Self {
                kind,
                card: alsa::find_card(kind).ok(),
                rate: None,
                rate_vendor_status: None,
                clock: None,
                mixer: None,
                device_globals_raw: None,
                kernel_preamps: None,
                kernel_direct_input_switches: None,
                kernel_wave_outputs: None,
                kernel_direct_masters: None,
                kernel_patch_bay: None,
                kernel_reverb: None,
                quad: None,
                error: Some(format!(
                    "{} identical {} devices detected; writes are disabled until one is selected",
                    identities.len(),
                    kind.label()
                )),
                identities,
            };
        }
        let card = alsa::find_card(kind).ok();
        if card.is_none() {
            return Self {
                kind,
                card,
                rate: None,
                rate_vendor_status: None,
                clock: None,
                mixer: None,
                device_globals_raw: None,
                kernel_preamps: None,
                kernel_direct_input_switches: None,
                kernel_wave_outputs: None,
                kernel_direct_masters: None,
                kernel_patch_bay: None,
                kernel_reverb: None,
                quad: None,
                error: None,
                identities,
            };
        }
        match usb_rate::get_rate_state(kind) {
            Ok(rate) => Self {
                kind,
                card,
                rate: Some(rate.hz),
                rate_vendor_status: Some(rate.vendor_status),
                clock: card.and_then(|card| kernel_mixer::read_clock_state(card).ok()),
                mixer: if kind == Kind::Octa {
                    card.and_then(|card| mixer::read(card).ok())
                } else {
                    None
                },
                device_globals_raw: if kind == Kind::Octa {
                    card.and_then(|card| kernel_mixer::read_device_globals(card).ok())
                } else {
                    None
                },
                kernel_preamps: if kind == Kind::Octa {
                    card.and_then(|card| kernel_mixer::read_preamps(card).ok())
                } else {
                    None
                },
                kernel_direct_input_switches: if kind == Kind::Octa {
                    card.and_then(|card| kernel_mixer::read_direct_input_switches(card).ok())
                } else {
                    None
                },
                kernel_wave_outputs: if kind == Kind::Octa {
                    card.and_then(|card| kernel_mixer::read_wave_outputs(card).ok())
                } else {
                    None
                },
                kernel_direct_masters: if kind == Kind::Octa {
                    card.and_then(|card| kernel_mixer::read_direct_masters(card).ok())
                } else {
                    None
                },
                kernel_patch_bay: if kind == Kind::Octa {
                    card.and_then(|card| kernel_mixer::read_patch_bay(card).ok())
                } else {
                    None
                },
                kernel_reverb: if kind == Kind::Octa {
                    card.and_then(|card| kernel_mixer::read_reverb(card).ok())
                } else {
                    None
                },
                quad: if kind == Kind::Quad {
                    card.and_then(|card| crate::quad::read(card).ok())
                } else {
                    None
                },
                error: None,
                identities,
            },
            Err(error) => Self {
                kind,
                card,
                rate: None,
                rate_vendor_status: None,
                clock: card.and_then(|card| kernel_mixer::read_clock_state(card).ok()),
                mixer: None,
                device_globals_raw: card
                    .and_then(|card| kernel_mixer::read_device_globals(card).ok()),
                kernel_preamps: card.and_then(|card| kernel_mixer::read_preamps(card).ok()),
                kernel_direct_input_switches: card
                    .and_then(|card| kernel_mixer::read_direct_input_switches(card).ok()),
                kernel_wave_outputs: card
                    .and_then(|card| kernel_mixer::read_wave_outputs(card).ok()),
                kernel_direct_masters: card
                    .and_then(|card| kernel_mixer::read_direct_masters(card).ok()),
                kernel_patch_bay: card.and_then(|card| kernel_mixer::read_patch_bay(card).ok()),
                kernel_reverb: card.and_then(|card| kernel_mixer::read_reverb(card).ok()),
                quad: if kind == Kind::Quad {
                    card.and_then(|card| crate::quad::read(card).ok())
                } else {
                    None
                },
                error: Some(error.to_string()),
                identities,
            },
        }
    }

    pub fn connected(&self) -> bool {
        self.card.is_some()
    }
}

// The main binary compiles shared modules directly for its legacy layout; the
// desktop binary consumes this through the library crate.
#[allow(dead_code)]
pub fn read_all() -> Vec<DeviceSnapshot> {
    [Kind::Octa, Kind::Quad]
        .into_iter()
        .map(DeviceSnapshot::read)
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn offline_snapshot_is_internally_consistent() {
        let snapshot = DeviceSnapshot {
            kind: Kind::Quad,
            card: None,
            rate: None,
            rate_vendor_status: None,
            clock: None,
            mixer: None,
            device_globals_raw: None,
            kernel_preamps: None,
            kernel_direct_input_switches: None,
            kernel_wave_outputs: None,
            kernel_direct_masters: None,
            kernel_patch_bay: None,
            kernel_reverb: None,
            quad: None,
            error: None,
            identities: Vec::new(),
        };
        assert!(!snapshot.connected());
    }
}
