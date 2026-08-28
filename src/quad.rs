//! Typed QUAD-CAPTURE controls exposed by the native kernel mixer.

use alsa::ctl::{ElemId, ElemIface, ElemType, ElemValue};
use alsa::hctl::HCtl;
use anyhow::{bail, Context, Result};
use serde::{Deserialize, Serialize};
use std::ffi::CString;
use std::path::Path;

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct QuadPreamp {
    pub sensitivity_half_db: u8,
    pub low_cut: bool,
    pub phase_invert: bool,
    pub compressor_enabled: bool,
    pub gate: u8,
    pub attack: u8,
    pub release: u8,
    pub threshold: u8,
    pub ratio: u8,
    pub output_gain: u8,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct QuadSettings {
    pub auto_sens: bool,
    pub auto_sens_automatic: bool,
    pub auto_sens_margin_db: i8,
    pub digital_input: bool,
    pub digital_output: u8,
    pub preamps: [QuadPreamp; 2],
    pub compressor_stereo_link: bool,
    pub monitor_levels: [u8; 3],
}

fn open(card: u32) -> Result<HCtl> {
    let hctl = HCtl::new(&format!("hw:{card}"), false).context("open ALSA control device")?;
    hctl.load().context("load ALSA controls")?;
    Ok(hctl)
}

fn id(name: &str) -> Result<ElemId> {
    let mut id = ElemId::new(ElemIface::Mixer);
    id.set_name(&CString::new(name)?);
    Ok(id)
}

fn read_bool(hctl: &HCtl, name: &str) -> Result<bool> {
    hctl.find_elem(&id(name)?)
        .with_context(|| format!("{name} unavailable"))?
        .read()?
        .get_boolean(0)
        .context("control is not boolean")
}

fn read_int(hctl: &HCtl, name: &str, min: i32, max: i32) -> Result<i32> {
    let value = hctl
        .find_elem(&id(name)?)
        .with_context(|| format!("{name} unavailable"))?
        .read()?
        .get_integer(0)
        .context("control is not integer")?;
    if !(min..=max).contains(&value) {
        bail!("{name} returned {value}, expected {min}..={max}");
    }
    Ok(value)
}

fn read_enum(hctl: &HCtl, name: &str, max: u32) -> Result<u32> {
    let value = hctl
        .find_elem(&id(name)?)
        .with_context(|| format!("{name} unavailable"))?
        .read()?
        .get_enumerated(0)
        .context("control is not enumerated")?;
    if value > max {
        bail!("{name} returned invalid item {value}");
    }
    Ok(value)
}

fn refresh(hctl: &HCtl) -> Result<()> {
    let _ = read_int(hctl, "Roland Capture Snapshot Generation", 0, i32::MAX)?;
    Ok(())
}

pub fn read(card: u32) -> Result<QuadSettings> {
    let hctl = open(card)?;
    refresh(&hctl)?;
    let mut found = Vec::new();
    for channel in 0..2 {
        let prefix = format!("Input {}", channel + 1);
        found.push(QuadPreamp {
            sensitivity_half_db: read_int(&hctl, &format!("{prefix} Sensitivity"), 0, 108)? as u8,
            low_cut: read_bool(&hctl, &format!("{prefix} Low Cut"))?,
            phase_invert: read_bool(&hctl, &format!("{prefix} Phase Invert"))?,
            compressor_enabled: read_bool(&hctl, &format!("{prefix} Compressor"))?,
            gate: read_int(&hctl, &format!("{prefix} Compressor Gate"), 0, 50)? as u8,
            attack: read_int(&hctl, &format!("{prefix} Compressor Attack"), 0, 124)? as u8,
            release: read_int(&hctl, &format!("{prefix} Compressor Release"), 0, 124)? as u8,
            threshold: read_int(&hctl, &format!("{prefix} Compressor Threshold"), 0, 40)? as u8,
            ratio: read_int(&hctl, &format!("{prefix} Compressor Ratio"), 0, 13)? as u8,
            output_gain: read_int(&hctl, &format!("{prefix} Compressor Output Gain"), 0, 80)? as u8,
        });
    }
    let preamps: [QuadPreamp; 2] = found
        .try_into()
        .map_err(|_| anyhow::anyhow!("invalid QUAD preamp count"))?;
    Ok(QuadSettings {
        auto_sens: read_bool(&hctl, "Auto-Sens")?,
        auto_sens_automatic: read_bool(&hctl, "Auto-Sens Automatic")?,
        auto_sens_margin_db: read_int(&hctl, "Auto-Sens Margin", -12, 0)? as i8,
        digital_input: read_bool(&hctl, "Digital Input")?,
        digital_output: read_enum(&hctl, "Digital Output", 2)? as u8,
        preamps,
        compressor_stereo_link: read_bool(&hctl, "Input 1 Compressor Stereo Link")?,
        monitor_levels: [
            read_int(&hctl, "Direct Monitor Input 1 Level", 0, 84)? as u8,
            read_int(&hctl, "Direct Monitor Input 2 Level", 0, 84)? as u8,
            read_int(&hctl, "Direct Monitor Coaxial Level", 0, 84)? as u8,
        ],
    })
}

fn write(card: u32, name: &str, ty: ElemType, value: i32) -> Result<()> {
    let hctl = open(card)?;
    let id = id(name)?;
    let elem = hctl
        .find_elem(&id)
        .with_context(|| format!("{name} unavailable"))?;
    let mut v = ElemValue::new(ty)?;
    v.set_id(&id);
    match ty {
        ElemType::Boolean => v.set_boolean(0, value != 0).context("prepare boolean")?,
        ElemType::Integer => v.set_integer(0, value).context("prepare integer")?,
        ElemType::Enumerated => v.set_enumerated(0, value as u32).context("prepare enum")?,
        _ => bail!("unsupported control type"),
    }
    elem.write(&v).with_context(|| format!("write {name}"))?;
    Ok(())
}

fn apply_once(card: u32, old: &QuadSettings, new: &QuadSettings) -> Result<QuadSettings> {
    if new.auto_sens_margin_db < -12 || new.auto_sens_margin_db > 0 || new.digital_output > 2 {
        bail!("QUAD global setting is outside its verified domain");
    }
    if new.compressor_stereo_link {
        let a = &new.preamps[0];
        let b = &new.preamps[1];
        if (
            a.compressor_enabled,
            a.gate,
            a.attack,
            a.release,
            a.threshold,
            a.ratio,
            a.output_gain,
        ) != (
            b.compressor_enabled,
            b.gate,
            b.attack,
            b.release,
            b.threshold,
            b.ratio,
            b.output_gain,
        ) {
            bail!("stereo-linked compressors must have matching channel 1 and 2 settings");
        }
    }
    if old.compressor_stereo_link {
        write(card, "Input 1 Compressor Stereo Link", ElemType::Boolean, 0)?;
    }
    for (channel, (before, after)) in old.preamps.iter().zip(&new.preamps).enumerate() {
        let prefix = format!("Input {}", channel + 1);
        for (name, a, b, max) in [
            (
                "Sensitivity",
                before.sensitivity_half_db,
                after.sensitivity_half_db,
                108,
            ),
            ("Compressor Gate", before.gate, after.gate, 50),
            ("Compressor Attack", before.attack, after.attack, 124),
            ("Compressor Release", before.release, after.release, 124),
            (
                "Compressor Threshold",
                before.threshold,
                after.threshold,
                40,
            ),
            ("Compressor Ratio", before.ratio, after.ratio, 13),
            (
                "Compressor Output Gain",
                before.output_gain,
                after.output_gain,
                80,
            ),
        ] {
            if b > max {
                bail!("{prefix} {name} is outside 0..={max}");
            }
            if a != b {
                write(
                    card,
                    &format!("{prefix} {name}"),
                    ElemType::Integer,
                    i32::from(b),
                )?;
            }
        }
        for (name, a, b) in [
            ("Low Cut", before.low_cut, after.low_cut),
            ("Phase Invert", before.phase_invert, after.phase_invert),
            (
                "Compressor",
                before.compressor_enabled,
                after.compressor_enabled,
            ),
        ] {
            if a != b {
                write(
                    card,
                    &format!("{prefix} {name}"),
                    ElemType::Boolean,
                    i32::from(b),
                )?;
            }
        }
    }
    if old.compressor_stereo_link || new.compressor_stereo_link {
        write(
            card,
            "Input 1 Compressor Stereo Link",
            ElemType::Boolean,
            i32::from(new.compressor_stereo_link),
        )?;
    }
    for (name, a, b) in [
        ("Auto-Sens", old.auto_sens, new.auto_sens),
        (
            "Auto-Sens Automatic",
            old.auto_sens_automatic,
            new.auto_sens_automatic,
        ),
        ("Digital Input", old.digital_input, new.digital_input),
    ] {
        if a != b {
            write(card, name, ElemType::Boolean, i32::from(b))?;
        }
    }
    if old.auto_sens_margin_db != new.auto_sens_margin_db {
        write(
            card,
            "Auto-Sens Margin",
            ElemType::Integer,
            i32::from(new.auto_sens_margin_db),
        )?;
    }
    if old.digital_output != new.digital_output {
        write(
            card,
            "Digital Output",
            ElemType::Enumerated,
            i32::from(new.digital_output),
        )?;
    }
    for (index, (a, b)) in old
        .monitor_levels
        .iter()
        .zip(new.monitor_levels)
        .enumerate()
    {
        if b > 84 {
            bail!("monitor level must be 0..=84");
        }
        if *a != b {
            write(
                card,
                [
                    "Direct Monitor Input 1 Level",
                    "Direct Monitor Input 2 Level",
                    "Direct Monitor Coaxial Level",
                ][index],
                ElemType::Integer,
                i32::from(b),
            )?;
        }
    }
    let confirmed = read(card)?;
    if &confirmed != new {
        bail!("QUAD-CAPTURE full readback did not match requested settings");
    }
    Ok(confirmed)
}

/// Apply all changed settings and restore the previous readable snapshot if any
/// write or final full-snapshot comparison fails.
pub fn apply(card: u32, old: &QuadSettings, new: &QuadSettings) -> Result<QuadSettings> {
    match apply_once(card, old, new) {
        Ok(confirmed) => Ok(confirmed),
        Err(error) => {
            if let Ok(partial) = read(card) {
                let _ = apply_once(card, &partial, old);
            }
            Err(error.context("QUAD transaction failed; restoration was attempted"))
        }
    }
}

pub fn save(path: &Path, settings: &QuadSettings) -> Result<()> {
    std::fs::write(path, serde_json::to_vec_pretty(settings)?).context("save QUAD preset")
}

pub fn load(path: &Path) -> Result<QuadSettings> {
    let settings: QuadSettings =
        serde_json::from_slice(&std::fs::read(path).context("read QUAD preset")?)?;
    Ok(settings)
}
