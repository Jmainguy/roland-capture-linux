//! Typed OCTA-CAPTURE settings independent of USB/MIDI transport and GUI.

use anyhow::{bail, Result};
use serde::{Deserialize, Serialize};

pub const PREAMP_CHANNELS: usize = 8;
pub const INPUT_MIX_CHANNELS: usize = 10;
pub const DIRECT_MIXERS: usize = 4;
pub const OUTPUT_PAIRS: usize = 5;

#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct InputGain(u8);

impl InputGain {
    pub fn from_half_db(half_db: u8) -> Result<Self> {
        if half_db > 100 {
            bail!("OCTA input sensitivity must be between 0 and 50 dB");
        }
        Ok(Self(half_db))
    }

    pub fn db(self) -> f32 {
        f32::from(self.0) / 2.0
    }

    pub fn half_db(self) -> u8 {
        self.0
    }
}

impl Default for InputGain {
    fn default() -> Self {
        Self(0)
    }
}

#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct RawLevel(u8);

impl RawLevel {
    pub fn new(value: u8) -> Self {
        Self(value.min(127))
    }

    pub fn get(self) -> u8 {
        self.0
    }
}

#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct Pan(i8);

impl Pan {
    pub fn new(value: i8) -> Result<Self> {
        if !(-100..=100).contains(&value) {
            bail!("pan must be between 100% left and 100% right");
        }
        Ok(Self(value))
    }

    pub fn get(self) -> i8 {
        self.0
    }
}

#[derive(Clone, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct Compressor {
    pub enabled: bool,
    pub bypass: bool,
    pub stereo_link: bool,
    pub gate: RawLevel,
    pub attack: RawLevel,
    pub release: RawLevel,
    pub threshold: RawLevel,
    pub ratio: RawLevel,
    pub output_gain: RawLevel,
}

#[derive(Clone, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct Preamp {
    pub gain: InputGain,
    pub phantom_power: bool,
    pub high_impedance: bool,
    pub phase_inverted: bool,
    pub low_cut_100_hz: bool,
    pub compressor: Compressor,
}

impl Preamp {
    pub fn validate_for_channel(&self, channel: usize) -> Result<()> {
        if !(1..=PREAMP_CHANNELS).contains(&channel) {
            bail!("preamp channel must be 1..={PREAMP_CHANNELS}");
        }
        if self.high_impedance && channel > 2 {
            bail!("Hi-Z is only supported on inputs 1 and 2");
        }
        let compressor = &self.compressor;
        for (name, value, maximum) in [
            ("gate", compressor.gate.get(), crate::compressor::GATE_MAX),
            (
                "attack",
                compressor.attack.get(),
                crate::compressor::ATTACK_MAX,
            ),
            (
                "release",
                compressor.release.get(),
                crate::compressor::RELEASE_MAX,
            ),
            (
                "threshold",
                compressor.threshold.get(),
                crate::compressor::THRESHOLD_MAX,
            ),
            (
                "ratio",
                compressor.ratio.get(),
                crate::compressor::RATIO_MAX,
            ),
            (
                "output gain",
                compressor.output_gain.get(),
                crate::compressor::OUTPUT_GAIN_MAX,
            ),
        ] {
            if value > maximum {
                bail!("compressor {name} raw value must be 0..={maximum}");
            }
        }
        Ok(())
    }
}

#[derive(Clone, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct MixerStrip {
    pub stereo_link: bool,
    pub muted: bool,
    pub soloed: bool,
    pub pan: Pan,
    pub level: RawLevel,
    pub reverb_send: RawLevel,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default)]
pub struct DirectMixer {
    pub inputs: [MixerStrip; INPUT_MIX_CHANNELS],
    pub wave_outputs: [MixerStrip; INPUT_MIX_CHANNELS],
    pub link_input_output_masters: bool,
    pub stereo_link_master: bool,
    pub input_master: RawLevel,
    pub input_master_right: RawLevel,
    pub output_stereo_link_master: bool,
    pub output_master: RawLevel,
    pub output_master_right: RawLevel,
    pub reverb_return: RawLevel,
}

impl Default for DirectMixer {
    fn default() -> Self {
        Self {
            inputs: std::array::from_fn(|_| MixerStrip::default()),
            wave_outputs: std::array::from_fn(|_| MixerStrip::default()),
            link_input_output_masters: false,
            stereo_link_master: false,
            input_master: RawLevel::default(),
            input_master_right: RawLevel::default(),
            output_stereo_link_master: false,
            output_master: RawLevel::default(),
            output_master_right: RawLevel::default(),
            reverb_return: RawLevel::default(),
        }
    }
}

#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub enum ReverbType {
    #[default]
    Off,
    Echo,
    Room,
    SmallHall,
    LargeHall,
    Plate,
}

#[derive(Clone, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct Reverb {
    pub kind: ReverbType,
    pub pre_delay: RawLevel,
    pub time: RawLevel,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub enum PatchSource {
    WaveOut(u8),
    DirectMix(u8),
}

impl PatchSource {
    pub fn validate(self) -> Result<()> {
        match self {
            Self::WaveOut(pair @ 1..=5) | Self::DirectMix(pair @ 1..=4) => {
                let _ = pair;
                Ok(())
            }
            Self::WaveOut(pair) => bail!("WAVE OUT pair index must be 1..=5, got {pair}"),
            Self::DirectMix(mixer) => bail!("Direct Mix index must be 1..=4, got {mixer}"),
        }
    }
}

impl Default for PatchSource {
    fn default() -> Self {
        Self::WaveOut(1)
    }
}

#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub enum AutoSensDuration {
    #[default]
    Manual,
    Seconds30,
    Minute1,
    Minutes3,
    Minutes5,
}

#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub enum DigitalInput {
    #[default]
    Off,
    Auto,
}

#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub enum AutoPowerOff {
    #[default]
    Off,
    Hours4,
}

#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub enum ClockSyncMode {
    #[default]
    Internal,
    Auto,
}

#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub enum StereoLinkMode {
    #[default]
    Individual,
    Paired,
}

#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub enum SoloDim {
    #[default]
    Off,
    Minus6Db,
    Minus12Db,
    Minus18Db,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default)]
pub struct SystemSettings {
    pub lcd_contrast: u8,
    pub auto_sens_duration: AutoSensDuration,
    pub vs_expand: bool,
    pub digital_input: DigitalInput,
    pub auto_power_off: AutoPowerOff,
    pub clock_sync: ClockSyncMode,
    pub stereo_link_mode: StereoLinkMode,
    pub solo_dim: SoloDim,
    pub auto_sens_automatic: bool,
    pub auto_sens_margin_db: u8,
}

impl Default for SystemSettings {
    fn default() -> Self {
        Self {
            lcd_contrast: 10,
            auto_sens_duration: AutoSensDuration::Manual,
            vs_expand: false,
            digital_input: DigitalInput::Off,
            auto_power_off: AutoPowerOff::Off,
            clock_sync: ClockSyncMode::Internal,
            stereo_link_mode: StereoLinkMode::Individual,
            solo_dim: SoloDim::Off,
            auto_sens_automatic: false,
            auto_sens_margin_db: 6,
        }
    }
}

impl SystemSettings {
    pub fn validate(&self) -> Result<()> {
        if self.lcd_contrast > 19 {
            bail!("LCD contrast must be 0..=19");
        }
        if self.auto_sens_margin_db > 12 {
            bail!("Auto-Sens margin must be 0..=12 dB");
        }
        Ok(())
    }
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct CaptureSettings {
    pub preamps: [Preamp; PREAMP_CHANNELS],
    pub direct_mixers: [DirectMixer; DIRECT_MIXERS],
    pub patch_bay: [PatchSource; OUTPUT_PAIRS],
    pub reverb: Reverb,
    pub system: SystemSettings,
}

impl Default for CaptureSettings {
    fn default() -> Self {
        Self {
            preamps: std::array::from_fn(|_| Preamp::default()),
            direct_mixers: std::array::from_fn(|_| DirectMixer::default()),
            patch_bay: std::array::from_fn(|index| PatchSource::WaveOut((index + 1) as u8)),
            reverb: Reverb::default(),
            system: SystemSettings::default(),
        }
    }
}

impl CaptureSettings {
    pub fn validate(&self) -> Result<()> {
        for (index, preamp) in self.preamps.iter().enumerate() {
            preamp.validate_for_channel(index + 1)?;
        }
        for pair in 0..(PREAMP_CHANNELS / 2) {
            let left = pair * 2;
            let right = left + 1;
            if self.preamps[left].compressor.stereo_link
                != self.preamps[right].compressor.stereo_link
            {
                bail!(
                    "Inputs {}–{} compressor stereo-link values must match",
                    left + 1,
                    right + 1
                );
            }
        }
        for source in self.patch_bay {
            source.validate()?;
        }
        for (mix, mixer) in self.direct_mixers.iter().enumerate() {
            for (channel, strip) in mixer.inputs.iter().enumerate() {
                validate_strip(strip, true).map_err(|error| {
                    anyhow::anyhow!(
                        "Direct Mix {} Input {}: {error}",
                        (b'A' + mix as u8) as char,
                        channel + 1
                    )
                })?;
            }
            for (channel, strip) in mixer.wave_outputs.iter().enumerate() {
                validate_strip(strip, false).map_err(|error| {
                    anyhow::anyhow!(
                        "Direct Mix {} WAVE OUT {}: {error}",
                        (b'A' + mix as u8) as char,
                        channel + 1
                    )
                })?;
            }
            for (name, level) in [
                ("input master left", mixer.input_master),
                ("input master right", mixer.input_master_right),
                ("output master left", mixer.output_master),
                ("output master right", mixer.output_master_right),
                ("reverb return", mixer.reverb_return),
            ] {
                if level.get() > 84 {
                    bail!(
                        "Direct Mix {} {name} must be 0..=84",
                        (b'A' + mix as u8) as char
                    );
                }
            }
            if mixer.stereo_link_master && mixer.input_master != mixer.input_master_right {
                bail!(
                    "Direct Mix {} linked input masters must match",
                    (b'A' + mix as u8) as char
                );
            }
            if mixer.output_stereo_link_master && mixer.output_master != mixer.output_master_right {
                bail!(
                    "Direct Mix {} linked output masters must match",
                    (b'A' + mix as u8) as char
                );
            }
        }
        if self.reverb.pre_delay.get() > crate::reverb::PRE_DELAY_MAX {
            bail!("reverb pre-delay is outside its 0..=12 domain");
        }
        if self.reverb.time.get() > crate::reverb::TIME_MAX {
            bail!("reverb time is outside its 0..=49 domain");
        }
        self.system.validate()
    }
}

fn validate_strip(strip: &MixerStrip, allow_reverb_send: bool) -> Result<()> {
    if strip.level.get() > 84 {
        bail!("level must be 0..=84");
    }
    if strip.reverb_send.get() > 84 {
        bail!("reverb send must be 0..=84");
    }
    if !allow_reverb_send && strip.reverb_send != RawLevel::default() {
        bail!("WAVE OUT strips do not support reverb send");
    }
    Ok(())
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Capabilities {
    pub direct_mixers: usize,
    pub reverb: bool,
    pub patch_bay: bool,
}

impl Capabilities {
    pub fn at_rate(rate: u32) -> Result<Self> {
        match rate {
            44_100 | 48_000 | 96_000 => Ok(Self {
                direct_mixers: 4,
                reverb: true,
                patch_bay: true,
            }),
            192_000 => Ok(Self {
                direct_mixers: 1,
                reverb: false,
                patch_bay: false,
            }),
            _ => bail!("unsupported sample rate {rate}"),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn validates_documented_gain_range() {
        assert_eq!(InputGain::from_half_db(99).unwrap().db(), 49.5);
        assert_eq!(InputGain::from_half_db(100).unwrap().db(), 50.0);
        assert!(InputGain::from_half_db(101).is_err());
    }

    #[test]
    fn rejects_hiz_after_input_two() {
        let mut preamp = Preamp::default();
        preamp.high_impedance = true;
        assert!(preamp.validate_for_channel(1).is_ok());
        assert!(preamp.validate_for_channel(3).is_err());
    }

    #[test]
    fn rejects_out_of_domain_compressor_values() {
        let mut preamp = Preamp::default();
        preamp.compressor.ratio = RawLevel::new(14);
        assert!(preamp.validate_for_channel(1).is_err());
        preamp.compressor.ratio = RawLevel::new(13);
        assert!(preamp.validate_for_channel(1).is_ok());
    }

    #[test]
    fn applies_192k_capability_limits() {
        assert_eq!(
            Capabilities::at_rate(192_000).unwrap(),
            Capabilities {
                direct_mixers: 1,
                reverb: false,
                patch_bay: false
            }
        );
    }

    #[test]
    fn default_state_is_valid() {
        CaptureSettings::default().validate().unwrap();
    }

    #[test]
    fn rejects_invalid_mixer_domains() {
        let mut settings = CaptureSettings::default();
        settings.direct_mixers[0].inputs[0].level = RawLevel::new(85);
        assert!(settings.validate().is_err());
        settings.direct_mixers[0].inputs[0].level = RawLevel::new(84);
        settings.direct_mixers[0].wave_outputs[0].reverb_send = RawLevel::new(1);
        assert!(settings.validate().is_err());
    }

    #[test]
    fn validates_auto_sens_margin() {
        let mut settings = SystemSettings::default();
        settings.auto_sens_margin_db = 12;
        settings.validate().unwrap();
        settings.auto_sens_margin_db = 13;
        assert!(settings.validate().is_err());
    }
}
