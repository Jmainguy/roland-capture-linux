//! Native ALSA controls exposed by the Roland Capture kernel mixer.

use alsa::ctl::{ElemId, ElemIface, ElemType, ElemValue};
use alsa::hctl::HCtl;
use anyhow::{bail, Context, Result};
use std::ffi::CString;

use crate::model::{
    DirectMixer, MixerStrip, Pan, PatchSource, Preamp, RawLevel, Reverb, ReverbType, DIRECT_MIXERS,
    INPUT_MIX_CHANNELS, OUTPUT_PAIRS, PREAMP_CHANNELS,
};

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ClockState {
    pub external: bool,
    pub locked: bool,
    pub external_hz: u32,
    pub rate_flag: bool,
}

pub fn read_clock_state(card: u32) -> Result<ClockState> {
    let hctl = open(card)?;
    let mut id = ElemId::new(ElemIface::Mixer);
    id.set_name(&CString::new("Clock State")?);
    let value = hctl
        .find_elem(&id)
        .context("Roland clock-state control is unavailable")?
        .read()
        .context("read Roland clock state")?;
    let field = |index| {
        value
            .get_integer(index)
            .context("Roland clock-state value is not integer")
    };
    if field(0)? == 0 {
        bail!("Roland clock telemetry has not produced a valid packet yet");
    }
    Ok(ClockState {
        external: field(1)? != 0,
        locked: field(2)? != 0,
        external_hz: u32::try_from(field(3)?).context("negative external clock frequency")?,
        rate_flag: field(4)? != 0,
    })
}

pub fn set_meter_stream(card: u32, enabled: bool) -> Result<()> {
    write_boolean_named(card, "Meter Stream", enabled)
}

pub fn read_meters(card: u32) -> Result<([u16; PREAMP_CHANNELS], [u16; PREAMP_CHANNELS])> {
    let hctl = open(card)?;
    let mut input = [0; PREAMP_CHANNELS];
    let mut compressor_output = [0; PREAMP_CHANNELS];
    for channel in 0..PREAMP_CHANNELS {
        input[channel] = u16::try_from(read_integer_named(
            &hctl,
            &format!("Input {} Meter", channel + 1),
            0,
            0x3fff,
        )?)?;
        compressor_output[channel] = u16::try_from(read_integer_named(
            &hctl,
            &format!("Input {} Compressor Output Meter", channel + 1),
            0,
            0x3fff,
        )?)?;
    }
    Ok((input, compressor_output))
}

fn control_id(channel: usize) -> Result<ElemId> {
    if channel >= PREAMP_CHANNELS {
        bail!("preamp channel must be 1..={PREAMP_CHANNELS}");
    }
    let mut id = ElemId::new(ElemIface::Mixer);
    let name = CString::new(format!("Input {} Sensitivity", channel + 1))?;
    id.set_name(&name);
    Ok(id)
}

fn open(card: u32) -> Result<HCtl> {
    let hctl = HCtl::new(&format!("hw:{card}"), false).context("open ALSA control device")?;
    hctl.load().context("load ALSA controls")?;
    Ok(hctl)
}

fn refresh(hctl: &HCtl) -> Result<u32> {
    let mut id = ElemId::new(ElemIface::Mixer);
    id.set_name(&CString::new("Roland Capture Snapshot Generation")?);
    let raw = hctl
        .find_elem(&id)
        .context("Roland kernel snapshot control is unavailable")?
        .read()
        .context("refresh Roland kernel snapshot")?
        .get_integer(0)
        .context("Roland snapshot generation is not integer")?;
    u32::try_from(raw).context("Roland snapshot generation is negative")
}

pub fn read_device_globals(card: u32) -> Result<[u8; 5]> {
    let hctl = open(card)?;
    let mut id = ElemId::new(ElemIface::Mixer);
    id.set_name(&CString::new("Roland Capture Device Globals Raw")?);
    let value = hctl
        .find_elem(&id)
        .context("Roland device-global raw control is unavailable")?
        .read()
        .context("read Roland device-global raw bytes")?;
    let bytes = value
        .get_bytes()
        .context("Roland device-global control is not bytes")?;
    bytes
        .get(..5)
        .context("Roland device-global control is too short")?
        .try_into()
        .context("copy Roland device-global bytes")
}

/// True only when the complete first kernel-control family is present.
pub fn sensitivity_controls_present(card: u32) -> bool {
    let Ok(hctl) = open(card) else { return false };
    (0..PREAMP_CHANNELS).all(|channel| {
        control_id(channel)
            .ok()
            .and_then(|id| hctl.find_elem(&id))
            .is_some()
    })
}

pub fn read_sensitivities(card: u32) -> Result<[u8; PREAMP_CHANNELS]> {
    let hctl = open(card)?;
    let mut values = [0; PREAMP_CHANNELS];
    for (channel, value) in values.iter_mut().enumerate() {
        let id = control_id(channel)?;
        let elem = hctl
            .find_elem(&id)
            .with_context(|| format!("Input {} Sensitivity is unavailable", channel + 1))?;
        let raw = elem
            .read()
            .context("read kernel sensitivity control")?
            .get_integer(0)
            .context("kernel sensitivity control is not an integer")?;
        *value = u8::try_from(raw)
            .ok()
            .filter(|v| *v <= 100)
            .with_context(|| {
                format!(
                    "kernel returned invalid Input {} sensitivity {raw}",
                    channel + 1
                )
            })?;
    }
    Ok(values)
}

/// Write one half-dB value and require a fresh hardware-backed ALSA readback.
pub fn write_sensitivity(card: u32, channel: usize, half_db: u8) -> Result<u8> {
    if half_db > 100 {
        bail!("sensitivity must be between 0.0 and 50.0 dB");
    }
    let hctl = open(card)?;
    let id = control_id(channel)?;
    let elem = hctl
        .find_elem(&id)
        .with_context(|| format!("Input {} Sensitivity is unavailable", channel + 1))?;
    let mut value = ElemValue::new(ElemType::Integer)?;
    value.set_id(&id);
    value
        .set_integer(0, i32::from(half_db))
        .context("prepare kernel sensitivity value")?;
    elem.write(&value)
        .context("write kernel sensitivity control")?;
    let confirmed = elem
        .read()
        .context("read back kernel sensitivity control")?
        .get_integer(0)
        .context("kernel sensitivity control is not an integer")?;
    if confirmed != i32::from(half_db) {
        bail!(
            "Input {} sensitivity readback was {confirmed}, expected {half_db}",
            channel + 1
        );
    }
    Ok(half_db)
}

fn read_boolean_named(hctl: &HCtl, name: &str) -> Result<bool> {
    let mut id = ElemId::new(ElemIface::Mixer);
    id.set_name(&CString::new(name)?);
    hctl.find_elem(&id)
        .with_context(|| format!("{name} is unavailable"))?
        .read()
        .context("read kernel boolean control")?
        .get_boolean(0)
        .context("kernel control is not boolean")
}

fn read_switch(hctl: &HCtl, channel: usize, suffix: &str) -> Result<bool> {
    read_boolean_named(hctl, &format!("Input {} {suffix}", channel + 1))
}

fn compressor_link_name(pair: usize) -> String {
    format!(
        "Inputs {}-{} Compressor Stereo Link",
        pair * 2 + 1,
        pair * 2 + 2
    )
}

pub fn write_compressor_stereo_link(card: u32, pair: usize, enabled: bool) -> Result<()> {
    if pair >= PREAMP_CHANNELS / 2 {
        bail!("compressor stereo-link pair must be 1..=4");
    }
    write_boolean_named(card, &compressor_link_name(pair), enabled)
}

fn write_boolean_named(card: u32, name: &str, enabled: bool) -> Result<()> {
    let hctl = open(card)?;
    let mut id = ElemId::new(ElemIface::Mixer);
    id.set_name(&CString::new(name)?);
    let elem = hctl
        .find_elem(&id)
        .with_context(|| format!("{name} is unavailable"))?;
    let mut value = ElemValue::new(ElemType::Boolean)?;
    value.set_id(&id);
    value
        .set_boolean(0, enabled)
        .context("prepare kernel preamp switch")?;
    elem.write(&value).context("write kernel preamp switch")?;
    if read_boolean_named(&hctl, name)? != enabled {
        bail!("{name} did not match hardware readback");
    }
    Ok(())
}

fn write_switch(card: u32, channel: usize, suffix: &str, enabled: bool) -> Result<()> {
    write_boolean_named(card, &format!("Input {} {suffix}", channel + 1), enabled)
}

fn read_integer_named(hctl: &HCtl, name: &str, minimum: i32, maximum: i32) -> Result<i32> {
    let mut id = ElemId::new(ElemIface::Mixer);
    id.set_name(&CString::new(name)?);
    let raw = hctl
        .find_elem(&id)
        .with_context(|| format!("{name} is unavailable"))?
        .read()
        .context("read kernel integer control")?
        .get_integer(0)
        .context("kernel control is not integer")?;
    if raw < minimum || raw > maximum {
        bail!("{name} returned invalid value {raw}");
    }
    Ok(raw)
}

fn read_enumerated_named(hctl: &HCtl, name: &str, maximum: u32) -> Result<u32> {
    let mut id = ElemId::new(ElemIface::Mixer);
    id.set_name(&CString::new(name)?);
    let raw = hctl
        .find_elem(&id)
        .with_context(|| format!("{name} is unavailable"))?
        .read()
        .context("read kernel enumerated control")?
        .get_enumerated(0)
        .context("kernel control is not enumerated")?;
    if raw > maximum {
        bail!("{name} returned invalid item {raw}");
    }
    Ok(raw)
}

fn write_enumerated_named(card: u32, name: &str, item: u32, maximum: u32) -> Result<()> {
    if item > maximum {
        bail!("{name} item must be 0..={maximum}");
    }
    let hctl = open(card)?;
    let mut id = ElemId::new(ElemIface::Mixer);
    id.set_name(&CString::new(name)?);
    let elem = hctl
        .find_elem(&id)
        .with_context(|| format!("{name} is unavailable"))?;
    let mut value = ElemValue::new(ElemType::Enumerated)?;
    value.set_id(&id);
    value
        .set_enumerated(0, item)
        .context("prepare kernel enumerated value")?;
    elem.write(&value)
        .context("write kernel enumerated control")?;
    if read_enumerated_named(&hctl, name, maximum)? != item {
        bail!("{name} did not match hardware readback");
    }
    Ok(())
}

fn write_integer_named(card: u32, name: &str, raw: i32, minimum: i32, maximum: i32) -> Result<()> {
    if raw < minimum || raw > maximum {
        bail!("{name} must be {minimum}..={maximum}");
    }
    let hctl = open(card)?;
    let mut id = ElemId::new(ElemIface::Mixer);
    id.set_name(&CString::new(name)?);
    let elem = hctl
        .find_elem(&id)
        .with_context(|| format!("{name} is unavailable"))?;
    let mut value = ElemValue::new(ElemType::Integer)?;
    value.set_id(&id);
    value
        .set_integer(0, raw)
        .context("prepare kernel integer control")?;
    elem.write(&value).context("write kernel integer control")?;
    if read_integer_named(&hctl, name, minimum, maximum)? != raw {
        bail!("{name} did not match hardware readback");
    }
    Ok(())
}

fn compressor_maximum(suffix: &str) -> Result<u8> {
    Ok(match suffix {
        "Compressor Gate" => crate::compressor::GATE_MAX,
        "Compressor Attack" => crate::compressor::ATTACK_MAX,
        "Compressor Release" => crate::compressor::RELEASE_MAX,
        "Compressor Threshold" => crate::compressor::THRESHOLD_MAX,
        "Compressor Ratio" => crate::compressor::RATIO_MAX,
        "Compressor Output Gain" => crate::compressor::OUTPUT_GAIN_MAX,
        _ => bail!("unknown compressor parameter {suffix}"),
    })
}

pub fn read_preamps(card: u32) -> Result<[Preamp; PREAMP_CHANNELS]> {
    let hctl = open(card)?;
    refresh(&hctl)?;
    let gains = read_sensitivities(card)?;
    let mut preamps = std::array::from_fn(|_| Preamp::default());
    for channel in 0..PREAMP_CHANNELS {
        let preamp = &mut preamps[channel];
        preamp.gain = crate::model::InputGain::from_half_db(gains[channel])?;
        preamp.phantom_power = read_switch(&hctl, channel, "Phantom Power")?;
        preamp.low_cut_100_hz = read_switch(&hctl, channel, "Low Cut")?;
        preamp.phase_inverted = read_switch(&hctl, channel, "Phase Invert")?;
        preamp.high_impedance = channel < 2 && read_switch(&hctl, channel, "High Impedance")?;
        preamp.compressor.enabled = read_switch(&hctl, channel, "Compressor")?;
        preamp.compressor.bypass = !preamp.compressor.enabled;
        preamp.compressor.stereo_link =
            read_boolean_named(&hctl, &compressor_link_name(channel / 2))?;
        for (suffix, target) in [
            ("Compressor Gate", &mut preamp.compressor.gate),
            ("Compressor Attack", &mut preamp.compressor.attack),
            ("Compressor Release", &mut preamp.compressor.release),
            ("Compressor Threshold", &mut preamp.compressor.threshold),
            ("Compressor Ratio", &mut preamp.compressor.ratio),
            ("Compressor Output Gain", &mut preamp.compressor.output_gain),
        ] {
            *target = RawLevel::new(read_integer_named(
                &hctl,
                &format!("Input {} {suffix}", channel + 1),
                0,
                i32::from(compressor_maximum(suffix)?),
            )? as u8);
        }
    }
    Ok(preamps)
}

pub fn read_direct_input_switches(
    card: u32,
) -> Result<[[MixerStrip; INPUT_MIX_CHANNELS]; DIRECT_MIXERS]> {
    let hctl = open(card)?;
    refresh(&hctl)?;
    let mut strips = std::array::from_fn(|_| std::array::from_fn(|_| MixerStrip::default()));
    for mixer in 0..DIRECT_MIXERS {
        let letter = (b'A' + mixer as u8) as char;
        for channel in 0..INPUT_MIX_CHANNELS {
            let strip = &mut strips[mixer][channel];
            strip.stereo_link = read_boolean_named(
                &hctl,
                &format!("Direct Mix {letter} Input {} Stereo Link", channel + 1),
            )?;
            strip.soloed = read_boolean_named(
                &hctl,
                &format!("Direct Mix {letter} Input {} Solo", channel + 1),
            )?;
            strip.muted = read_boolean_named(
                &hctl,
                &format!("Direct Mix {letter} Input {} Mute", channel + 1),
            )?;
            strip.pan = Pan::new(read_integer_named(
                &hctl,
                &format!("Direct Mix {letter} Input {} Pan", channel + 1),
                -100,
                100,
            )? as i8)?;
            strip.level = RawLevel::new(read_integer_named(
                &hctl,
                &format!("Direct Mix {letter} Input {} Level", channel + 1),
                0,
                84,
            )? as u8);
            if mixer == 0 {
                strip.reverb_send = RawLevel::new(read_integer_named(
                    &hctl,
                    &format!("Direct Mix A Input {} Reverb Send", channel + 1),
                    0,
                    84,
                )? as u8);
            }
        }
    }
    Ok(strips)
}

pub fn read_wave_outputs(card: u32) -> Result<[[MixerStrip; INPUT_MIX_CHANNELS]; DIRECT_MIXERS]> {
    let hctl = open(card)?;
    refresh(&hctl)?;
    let mut strips = std::array::from_fn(|_| std::array::from_fn(|_| MixerStrip::default()));
    for mixer in 0..DIRECT_MIXERS {
        let letter = (b'A' + mixer as u8) as char;
        for channel in 0..INPUT_MIX_CHANNELS {
            let prefix = format!("Direct Mix {letter} WAVE OUT {}", channel + 1);
            let strip = &mut strips[mixer][channel];
            strip.stereo_link = read_boolean_named(&hctl, &format!("{prefix} Stereo Link"))?;
            strip.soloed = read_boolean_named(&hctl, &format!("{prefix} Solo"))?;
            strip.muted = read_boolean_named(&hctl, &format!("{prefix} Mute"))?;
            strip.pan =
                Pan::new(read_integer_named(&hctl, &format!("{prefix} Pan"), -100, 100)? as i8)?;
            strip.level =
                RawLevel::new(read_integer_named(&hctl, &format!("{prefix} Level"), 0, 84)? as u8);
        }
    }
    Ok(strips)
}

pub fn read_direct_masters(card: u32) -> Result<[DirectMixer; DIRECT_MIXERS]> {
    let hctl = open(card)?;
    refresh(&hctl)?;
    let mut mixers = std::array::from_fn(|_| DirectMixer::default());
    for (mixer, state) in mixers.iter_mut().enumerate() {
        let letter = (b'A' + mixer as u8) as char;
        let prefix = format!("Direct Mix {letter}");
        state.stereo_link_master =
            read_boolean_named(&hctl, &format!("{prefix} Input Master Stereo Link"))?;
        state.input_master =
            RawLevel::new(
                read_integer_named(&hctl, &format!("{prefix} Input Master Left"), 0, 84)? as u8,
            );
        state.input_master_right =
            RawLevel::new(
                read_integer_named(&hctl, &format!("{prefix} Input Master Right"), 0, 84)? as u8,
            );
        state.link_input_output_masters =
            read_boolean_named(&hctl, &format!("{prefix} Link Input Output Masters"))?;
        state.output_stereo_link_master =
            read_boolean_named(&hctl, &format!("{prefix} Output Master Stereo Link"))?;
        state.output_master =
            RawLevel::new(
                read_integer_named(&hctl, &format!("{prefix} Output Master Left"), 0, 84)? as u8,
            );
        state.output_master_right = RawLevel::new(read_integer_named(
            &hctl,
            &format!("{prefix} Output Master Right"),
            0,
            84,
        )? as u8);
        if mixer == 0 {
            state.reverb_return =
                RawLevel::new(
                    read_integer_named(&hctl, "Direct Mix A Reverb Return", 0, 84)? as u8,
                );
        }
    }
    Ok(mixers)
}

pub fn read_patch_bay(card: u32) -> Result<[PatchSource; OUTPUT_PAIRS]> {
    let hctl = open(card)?;
    refresh(&hctl)?;
    let mut routes = [PatchSource::default(); OUTPUT_PAIRS];
    for (output, route) in routes.iter_mut().enumerate() {
        let item = read_enumerated_named(
            &hctl,
            &format!(
                "Patch Bay Output {}-{} Source",
                output * 2 + 1,
                output * 2 + 2
            ),
            8,
        )? as u8;
        *route = if item <= 3 {
            PatchSource::DirectMix(item + 1)
        } else {
            PatchSource::WaveOut(item - 3)
        };
    }
    Ok(routes)
}

pub fn read_reverb(card: u32) -> Result<Reverb> {
    let hctl = open(card)?;
    refresh(&hctl)?;
    let kind = match read_enumerated_named(&hctl, "Reverb Type", 5)? {
        0 => ReverbType::Off,
        1 => ReverbType::Echo,
        2 => ReverbType::Room,
        3 => ReverbType::SmallHall,
        4 => ReverbType::LargeHall,
        5 => ReverbType::Plate,
        _ => unreachable!(),
    };
    Ok(Reverb {
        kind,
        pre_delay: RawLevel::new(read_integer_named(&hctl, "Reverb Pre Delay", 0, 12)? as u8),
        time: RawLevel::new(read_integer_named(&hctl, "Reverb Time", 0, 49)? as u8),
    })
}

pub fn write_preamp_switch(card: u32, channel: usize, suffix: &str, enabled: bool) -> Result<()> {
    write_switch(card, channel, suffix, enabled)
}

pub fn write_compressor_parameter(
    card: u32,
    channel: usize,
    suffix: &str,
    value: RawLevel,
) -> Result<()> {
    write_integer_named(
        card,
        &format!("Input {} {suffix}", channel + 1),
        i32::from(value.get()),
        0,
        i32::from(compressor_maximum(suffix)?),
    )
}

pub fn write_direct_input_switch(
    card: u32,
    mixer: usize,
    channel: usize,
    suffix: &str,
    enabled: bool,
) -> Result<()> {
    if mixer >= DIRECT_MIXERS || channel >= INPUT_MIX_CHANNELS {
        bail!("invalid Direct Mix or input channel");
    }
    let letter = (b'A' + mixer as u8) as char;
    write_boolean_named(
        card,
        &format!("Direct Mix {letter} Input {} {suffix}", channel + 1),
        enabled,
    )
}

pub fn write_direct_input_value(
    card: u32,
    mixer: usize,
    channel: usize,
    suffix: &str,
    value: i32,
    minimum: i32,
    maximum: i32,
) -> Result<()> {
    if mixer >= DIRECT_MIXERS || channel >= INPUT_MIX_CHANNELS {
        bail!("invalid Direct Mix or input channel");
    }
    let letter = (b'A' + mixer as u8) as char;
    write_integer_named(
        card,
        &format!("Direct Mix {letter} Input {} {suffix}", channel + 1),
        value,
        minimum,
        maximum,
    )
}

pub fn write_wave_output_switch(
    card: u32,
    mixer: usize,
    channel: usize,
    suffix: &str,
    enabled: bool,
) -> Result<()> {
    if mixer >= DIRECT_MIXERS || channel >= INPUT_MIX_CHANNELS {
        bail!("invalid Direct Mix or WAVE OUT channel");
    }
    let letter = (b'A' + mixer as u8) as char;
    write_boolean_named(
        card,
        &format!("Direct Mix {letter} WAVE OUT {} {suffix}", channel + 1),
        enabled,
    )
}

pub fn write_wave_output_value(
    card: u32,
    mixer: usize,
    channel: usize,
    suffix: &str,
    value: i32,
    minimum: i32,
    maximum: i32,
) -> Result<()> {
    if mixer >= DIRECT_MIXERS || channel >= INPUT_MIX_CHANNELS {
        bail!("invalid Direct Mix or WAVE OUT channel");
    }
    let letter = (b'A' + mixer as u8) as char;
    write_integer_named(
        card,
        &format!("Direct Mix {letter} WAVE OUT {} {suffix}", channel + 1),
        value,
        minimum,
        maximum,
    )
}

pub fn write_master_switch(card: u32, mixer: usize, suffix: &str, enabled: bool) -> Result<()> {
    if mixer >= DIRECT_MIXERS {
        bail!("invalid Direct Mix");
    }
    let letter = (b'A' + mixer as u8) as char;
    write_boolean_named(card, &format!("Direct Mix {letter} {suffix}"), enabled)
}

pub fn write_master_level(card: u32, mixer: usize, suffix: &str, value: RawLevel) -> Result<()> {
    if mixer >= DIRECT_MIXERS {
        bail!("invalid Direct Mix");
    }
    let letter = (b'A' + mixer as u8) as char;
    write_integer_named(
        card,
        &format!("Direct Mix {letter} {suffix}"),
        i32::from(value.get()),
        0,
        84,
    )
}

pub fn write_patch_bay(card: u32, output: usize, source: PatchSource) -> Result<()> {
    if output >= OUTPUT_PAIRS {
        bail!("invalid patch-bay output");
    }
    source.validate()?;
    let item = match source {
        PatchSource::DirectMix(mixer) => u32::from(mixer - 1),
        PatchSource::WaveOut(pair) => u32::from(pair + 3),
    };
    write_enumerated_named(
        card,
        &format!(
            "Patch Bay Output {}-{} Source",
            output * 2 + 1,
            output * 2 + 2
        ),
        item,
        8,
    )
}

pub fn write_reverb_type(card: u32, kind: ReverbType) -> Result<()> {
    let item = match kind {
        ReverbType::Off => 0,
        ReverbType::Echo => 1,
        ReverbType::Room => 2,
        ReverbType::SmallHall => 3,
        ReverbType::LargeHall => 4,
        ReverbType::Plate => 5,
    };
    write_enumerated_named(card, "Reverb Type", item, 5)
}

pub fn write_reverb_parameter(card: u32, name: &str, value: RawLevel) -> Result<()> {
    let maximum = if name == "Reverb Pre Delay" { 12 } else { 49 };
    write_integer_named(card, name, i32::from(value.get()), 0, maximum)
}

pub fn write_auto_sens_selection(card: u32, selected: [bool; PREAMP_CHANNELS]) -> Result<()> {
    if !selected.iter().any(|value| *value) {
        bail!("Auto-Sens requires at least one selected input");
    }
    for (channel, enabled) in selected.into_iter().enumerate() {
        write_boolean_named(
            card,
            &format!("Auto-Sens Input {} Select", channel + 1),
            enabled,
        )?;
    }
    Ok(())
}

pub fn write_auto_sens_state(card: u32, item: u32) -> Result<[Preamp; PREAMP_CHANNELS]> {
    if item > 2 {
        bail!("invalid Auto-Sens state");
    }
    let hctl = open(card)?;
    let name = "Auto-Sens State";
    let mut id = ElemId::new(ElemIface::Mixer);
    id.set_name(&CString::new(name)?);
    let elem = hctl
        .find_elem(&id)
        .context("Auto-Sens kernel control is unavailable")?;
    let mut value = ElemValue::new(ElemType::Enumerated)?;
    value.set_id(&id);
    value
        .set_enumerated(0, item)
        .context("prepare Auto-Sens state")?;
    elem.write(&value).context("write Auto-Sens state")?;
    let expected = if item == 1 { 1 } else { 0 };
    if read_enumerated_named(&hctl, name, 2)? != expected {
        bail!("Auto-Sens state did not match the kernel readback");
    }
    read_preamps(card)
}
