//! Transactional application of the preset fields whose hardware protocol has
//! been physically verified. Unknown fields are rejected during preflight;
//! they are never silently skipped.

use crate::kernel_mixer;
use crate::mixer;
use crate::model::{
    Capabilities, CaptureSettings, DirectMixer, Pan, PatchSource, Preamp, RawLevel, Reverb,
    DIRECT_MIXERS, INPUT_MIX_CHANNELS, OUTPUT_PAIRS, PREAMP_CHANNELS,
};
use anyhow::{bail, Context, Result};

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct ApplyResult {
    pub preamps: [Preamp; PREAMP_CHANNELS],
    pub direct_mixers: [DirectMixer; DIRECT_MIXERS],
    pub patch_bay: [PatchSource; OUTPUT_PAIRS],
    pub reverb: Reverb,
}

fn read_verified(card: u32) -> Result<ApplyResult> {
    Ok(ApplyResult {
        preamps: kernel_mixer::read_preamps(card)?,
        direct_mixers: {
            let inputs = kernel_mixer::read_direct_input_switches(card)?;
            let waves = kernel_mixer::read_wave_outputs(card)?;
            let mut masters = kernel_mixer::read_direct_masters(card)?;
            for mix in 0..DIRECT_MIXERS {
                masters[mix].inputs = inputs[mix].clone();
                masters[mix].wave_outputs = waves[mix].clone();
            }
            masters
        },
        patch_bay: kernel_mixer::read_patch_bay(card)?,
        reverb: kernel_mixer::read_reverb(card)?,
    })
}

/// Capture every currently readable preset field. System settings whose
/// transport is still unknown retain their typed defaults in the returned
/// draft rather than being represented as hardware readback.
pub fn capture(card: u32) -> Result<CaptureSettings> {
    let verified = read_verified(card)?;
    let mut settings = CaptureSettings::default();
    settings.preamps = verified.preamps;
    settings.direct_mixers = verified.direct_mixers;
    settings.patch_bay = verified.patch_bay;
    settings.reverb = verified.reverb;
    settings.validate()?;
    Ok(settings)
}

/// Reproduce the Windows panel's "Directly Output Inputs" transformation.
/// The fifth output route and all WAVE OUT strips are intentionally preserved.
pub fn directly_output_inputs(card: u32, rate: u32) -> Result<ApplyResult> {
    let desired = direct_output_profile(capture(card)?)?;
    apply(card, rate, &desired, false)
}

/// Apply the Windows "Directly Output Inputs" profile, prove its complete
/// readback, then restore and prove the exact original readable state.
pub fn verify_direct_output_inputs(card: u32, rate: u32) -> Result<()> {
    let original = capture(card).context("capture Directly Output Inputs baseline")?;
    directly_output_inputs(card, rate).context("verify Directly Output Inputs profile")?;
    apply(card, rate, &original, false).map_err(|error| {
        anyhow::anyhow!(
            "Directly Output Inputs passed, but restoring the original routing failed: {error:#}"
        )
    })?;
    Ok(())
}

fn direct_output_profile(mut desired: CaptureSettings) -> Result<CaptureSettings> {
    for mix in 0..DIRECT_MIXERS {
        desired.patch_bay[mix] = PatchSource::DirectMix(mix as u8 + 1);
        for channel in 0..INPUT_MIX_CHANNELS {
            let selected = channel / 2 == mix;
            let last_pair = channel / 2 == 4;
            let strip = &mut desired.direct_mixers[mix].inputs[channel];
            strip.level = RawLevel::new(if selected { 72 } else { 0 });
            strip.pan = Pan::new(if selected || last_pair {
                if channel & 1 == 0 {
                    -100
                } else {
                    100
                }
            } else {
                0
            })?;
            strip.stereo_link = last_pair;
            strip.muted = false;
            strip.soloed = false;
            strip.reverb_send = RawLevel::new(0);
        }
        let mixer = &mut desired.direct_mixers[mix];
        mixer.input_master = RawLevel::new(72);
        mixer.input_master_right = RawLevel::new(72);
        mixer.link_input_output_masters = true;
    }
    desired.validate()?;
    Ok(desired)
}

fn preflight(
    current: &ApplyResult,
    desired: &CaptureSettings,
    rate: u32,
    allow_phantom_enable: bool,
) -> Result<Capabilities> {
    desired.validate()?;
    let capabilities = Capabilities::at_rate(rate)?;
    if desired.system != crate::model::SystemSettings::default() {
        bail!("preset contains non-default system settings whose hardware protocol is unresolved");
    }
    for channel in 0..PREAMP_CHANNELS {
        if !current.preamps[channel].phantom_power
            && desired.preamps[channel].phantom_power
            && !allow_phantom_enable
        {
            bail!(
                "preset would enable +48 V phantom power on Input {}; explicit confirmation is required",
                channel + 1
            );
        }
    }
    for mix in capabilities.direct_mixers..DIRECT_MIXERS {
        if desired.direct_mixers[mix] != current.direct_mixers[mix] {
            bail!(
                "Direct Mix {} is unavailable at {rate} Hz",
                (b'A' + mix as u8) as char
            );
        }
    }
    if !capabilities.reverb && desired.reverb != current.reverb {
        bail!("reverb is unavailable at {rate} Hz");
    }
    if !capabilities.patch_bay && desired.patch_bay != current.patch_bay {
        bail!("patch bay is unavailable at {rate} Hz");
    }
    Ok(capabilities)
}

fn apply_verified(
    card: u32,
    current: &ApplyResult,
    desired: &CaptureSettings,
    capabilities: Capabilities,
) -> Result<ApplyResult> {
    for channel in 0..PREAMP_CHANNELS {
        if current.preamps[channel] != desired.preamps[channel] {
            mixer::apply_preamp(
                card,
                channel,
                &current.preamps[channel],
                &desired.preamps[channel],
            )
            .with_context(|| format!("apply Input {}", channel + 1))?;
        }
    }
    for mix in 0..capabilities.direct_mixers {
        for channel in 0..INPUT_MIX_CHANNELS {
            if current.direct_mixers[mix].inputs[channel]
                != desired.direct_mixers[mix].inputs[channel]
            {
                mixer::apply_direct_input(
                    card,
                    mix,
                    channel,
                    &current.direct_mixers[mix].inputs[channel],
                    &desired.direct_mixers[mix].inputs[channel],
                )
                .with_context(|| {
                    format!(
                        "apply Direct Mix {} Input {}",
                        (b'A' + mix as u8) as char,
                        channel + 1
                    )
                })?;
            }
            if current.direct_mixers[mix].wave_outputs[channel]
                != desired.direct_mixers[mix].wave_outputs[channel]
            {
                mixer::apply_wave_output(
                    card,
                    mix,
                    channel,
                    &current.direct_mixers[mix].wave_outputs[channel],
                    &desired.direct_mixers[mix].wave_outputs[channel],
                )
                .with_context(|| {
                    format!(
                        "apply Direct Mix {} WAVE OUT {}",
                        (b'A' + mix as u8) as char,
                        channel + 1
                    )
                })?;
            }
        }
        mixer::apply_direct_masters(
            card,
            mix,
            &current.direct_mixers[mix],
            &desired.direct_mixers[mix],
        )
        .with_context(|| format!("apply Direct Mix {} masters", (b'A' + mix as u8) as char))?;
    }
    if capabilities.reverb && current.reverb != desired.reverb {
        mixer::apply_reverb(card, &current.reverb, &desired.reverb)
            .context("apply reverb settings")?;
    }
    if capabilities.patch_bay && current.patch_bay != desired.patch_bay {
        mixer::apply_patch_bay_profile(card, desired.patch_bay).context("apply patch bay")?;
    }
    read_verified(card)
}

fn matches_desired(
    confirmed: &ApplyResult,
    desired: &CaptureSettings,
    capabilities: Capabilities,
) -> bool {
    let preamps_match = confirmed
        .preamps
        .iter()
        .zip(&desired.preamps)
        .all(|(actual, wanted)| {
            let mut wanted = wanted.clone();
            wanted.compressor.bypass = !wanted.compressor.enabled;
            *actual == wanted
        });
    preamps_match
        && confirmed.direct_mixers[..capabilities.direct_mixers]
            == desired.direct_mixers[..capabilities.direct_mixers]
        && (!capabilities.patch_bay || confirmed.patch_bay == desired.patch_bay)
        && (!capabilities.reverb || confirmed.reverb == desired.reverb)
}

/// Apply every currently verified preset field, requiring complete readback.
/// If any operation or final comparison fails, make a best-effort full rollback
/// to the snapshot captured before the first write and report rollback status.
pub fn apply(
    card: u32,
    rate: u32,
    desired: &CaptureSettings,
    allow_phantom_enable: bool,
) -> Result<ApplyResult> {
    let original = read_verified(card).context("read preset transaction baseline")?;
    let capabilities = preflight(&original, desired, rate, allow_phantom_enable)?;
    match apply_verified(card, &original, desired, capabilities) {
        Ok(confirmed) if matches_desired(&confirmed, desired, capabilities) => Ok(confirmed),
        Ok(_) => rollback(card, rate, &original, "final preset readback did not match"),
        Err(error) => rollback(card, rate, &original, &error.to_string()),
    }
}

fn rollback(card: u32, rate: u32, original: &ApplyResult, cause: &str) -> Result<ApplyResult> {
    let current =
        read_verified(card).context("preset failed and rollback baseline could not be read")?;
    let mut desired = CaptureSettings::default();
    desired.preamps = original.preamps.clone();
    desired.direct_mixers = original.direct_mixers.clone();
    desired.patch_bay = original.patch_bay;
    desired.reverb = original.reverb.clone();
    let capabilities = Capabilities::at_rate(rate)?;
    match apply_verified(card, &current, &desired, capabilities) {
        Ok(restored) if restored == *original => {
            bail!("{cause}; all earlier preset writes were rolled back")
        }
        Ok(_) => bail!("{cause}; WARNING: rollback readback did not match the original snapshot"),
        Err(error) => bail!("{cause}; WARNING: rollback also failed: {error}"),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::model::{InputGain, RawLevel};

    fn baseline() -> ApplyResult {
        let mut settings = CaptureSettings::default();
        for preamp in &mut settings.preamps {
            preamp.compressor.bypass = true;
        }
        ApplyResult {
            preamps: settings.preamps,
            direct_mixers: settings.direct_mixers,
            patch_bay: settings.patch_bay,
            reverb: settings.reverb,
        }
    }

    #[test]
    fn directly_output_profile_matches_windows_constants() {
        let mut original = CaptureSettings::default();
        original.patch_bay[4] = PatchSource::WaveOut(5);
        original.direct_mixers[0].wave_outputs[0].level = RawLevel::new(37);
        let desired = direct_output_profile(original).unwrap();

        assert_eq!(desired.patch_bay[0], PatchSource::DirectMix(1));
        assert_eq!(desired.patch_bay[3], PatchSource::DirectMix(4));
        assert_eq!(desired.patch_bay[4], PatchSource::WaveOut(5));
        assert_eq!(desired.direct_mixers[0].wave_outputs[0].level.get(), 37);
        for mix in 0..DIRECT_MIXERS {
            for channel in 0..INPUT_MIX_CHANNELS {
                let strip = &desired.direct_mixers[mix].inputs[channel];
                assert_eq!(strip.level.get(), if channel / 2 == mix { 72 } else { 0 });
                assert_eq!(strip.stereo_link, channel / 2 == 4);
                assert!(!strip.muted && !strip.soloed);
                assert_eq!(strip.reverb_send.get(), 0);
                let expected_pan = if channel / 2 == mix || channel / 2 == 4 {
                    if channel & 1 == 0 {
                        -100
                    } else {
                        100
                    }
                } else {
                    0
                };
                assert_eq!(strip.pan.get(), expected_pan);
            }
            assert_eq!(desired.direct_mixers[mix].input_master.get(), 72);
            assert_eq!(desired.direct_mixers[mix].input_master_right.get(), 72);
            assert!(desired.direct_mixers[mix].link_input_output_masters);
        }
    }

    #[test]
    fn preflight_requires_explicit_phantom_confirmation() {
        let current = baseline();
        let mut desired = CaptureSettings::default();
        desired.preamps[1].phantom_power = true;
        assert!(preflight(&current, &desired, 48_000, false).is_err());
        preflight(&current, &desired, 48_000, true).unwrap();
    }

    #[test]
    fn preflight_rejects_unavailable_192k_mixers() {
        let current = baseline();
        let mut desired = CaptureSettings::default();
        desired.direct_mixers[1].input_master = RawLevel::new(1);
        assert!(preflight(&current, &desired, 192_000, false).is_err());
    }

    #[test]
    fn preflight_rejects_unmapped_system_settings() {
        let current = baseline();
        let mut desired = CaptureSettings::default();
        desired.system.lcd_contrast = 11;
        assert!(preflight(&current, &desired, 48_000, false).is_err());
    }

    #[test]
    fn preflight_accepts_verified_reverb_parameters() {
        let current = baseline();
        let mut desired = CaptureSettings::default();
        desired.reverb.kind = crate::model::ReverbType::Room;
        desired.reverb.pre_delay = RawLevel::new(1);
        desired.reverb.time = RawLevel::new(14);
        preflight(&current, &desired, 48_000, false).unwrap();
    }

    #[test]
    fn matching_normalizes_compressor_bypass() {
        let mut confirmed = baseline();
        let mut desired = CaptureSettings::default();
        desired.preamps[0].gain = InputGain::from_half_db(2).unwrap();
        confirmed.preamps[0] = desired.preamps[0].clone();
        confirmed.preamps[0].compressor.bypass = true;
        assert!(matches_desired(
            &confirmed,
            &desired,
            Capabilities::at_rate(48_000).unwrap()
        ));
    }
}
