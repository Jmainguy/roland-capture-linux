//! OCTA-CAPTURE mixer state over its ALSA Control MIDI port.

use crate::kernel_mixer;
use crate::model::{
    Compressor, DirectMixer, InputGain, Pan, PatchSource, Preamp, RawLevel, Reverb, ReverbType,
    DIRECT_MIXERS, INPUT_MIX_CHANNELS, PREAMP_CHANNELS,
};
use crate::seq_midi::ControlPort;
use crate::sysex;
use anyhow::{bail, Context, Result};
use std::thread;
use std::time::{Duration, Instant};

const HEADER: [u8; 7] = [0xf0, 0x41, 0x10, 0x00, 0x00, 0x4d, 0x12];
const LOAD_REQUEST: &str = "F0 41 10 00 00 4D 11 01 00 00 00 00 00 08 7A 7D F7";

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct MixerSnapshot {
    /// Five device-global bytes at the head of the Roland full-state image.
    /// Their semantics are intentionally left raw until differential physical
    /// or control-panel evidence identifies each field.
    pub device_globals_raw: [u8; 5],
    pub patch_bay: [PatchSource; crate::model::OUTPUT_PAIRS],
    pub reverb: Reverb,
    pub preamps: [Preamp; PREAMP_CHANNELS],
    pub direct_mixers: [DirectMixer; DIRECT_MIXERS],
}

fn bit(group: u8, channel_in_group: usize) -> bool {
    group & (1 << channel_in_group) != 0
}

fn grouped(data: &[u8], first_group: usize, channel: usize) -> bool {
    bit(data[first_group + channel / 4], channel % 4)
}

fn nibbles(data: &[u8]) -> u32 {
    data.iter()
        .fold(0, |value, nibble| (value << 4) | u32::from(*nibble))
}

fn decode_pan(data: &[u8]) -> Pan {
    let fixed = nibbles(data) as f32;
    let percent = (100.0 * (fixed - 16_384.0) / 16_384.0).round() as i8;
    Pan::new(percent.clamp(-100, 100)).unwrap_or_default()
}

/// UI code: 0 is silence, 1..=84 represent -71..=+12 dB.
fn decode_volume(data: &[u8]) -> RawLevel {
    let fixed = nibbles(data);
    if fixed == 0 {
        return RawLevel::new(0);
    }
    let db = (20.0 * (fixed as f32 / 2_097_152.0).log10()).round() as i16;
    RawLevel::new((db.clamp(-71, 12) + 72) as u8)
}

pub fn decode_load(data: &[u8]) -> Result<MixerSnapshot> {
    if data.len() < 1146 {
        bail!("OCTA mixer dump is too short: {} bytes", data.len());
    }
    let patch_bay = std::array::from_fn(|output| match data[5 + output] {
        0..=3 => PatchSource::DirectMix(data[5 + output] + 1),
        4..=8 => PatchSource::WaveOut(data[5 + output] - 3),
        _ => PatchSource::default(),
    });
    let reverb_kind = match data[10] {
        1 => ReverbType::Echo,
        2 => ReverbType::Room,
        3 => ReverbType::SmallHall,
        4 => ReverbType::LargeHall,
        5 => ReverbType::Plate,
        _ => ReverbType::Off,
    };
    let reverb_index = usize::from(data[10].clamp(1, 5) - 1);
    let reverb = Reverb {
        kind: reverb_kind,
        pre_delay: RawLevel::new(data[11 + reverb_index]),
        time: RawLevel::new(data[16 + reverb_index]),
    };
    let preamps = std::array::from_fn(|channel| {
        let bypass = grouped(data, 38, channel);
        Preamp {
            gain: InputGain::from_half_db(data[29 + channel]).unwrap_or_default(),
            phantom_power: grouped(data, 21, channel),
            high_impedance: channel < 2 && bit(data[27], channel),
            phase_inverted: grouped(data, 25, channel),
            low_cut_100_hz: grouped(data, 23, channel),
            compressor: Compressor {
                enabled: !bypass,
                bypass,
                stereo_link: bit(data[37], channel / 2),
                gate: RawLevel::new(data[40 + channel]),
                attack: RawLevel::new(data[48 + channel]),
                release: RawLevel::new(data[56 + channel]),
                threshold: RawLevel::new(data[64 + channel]),
                ratio: RawLevel::new(data[72 + channel]),
                output_gain: RawLevel::new(data[80 + channel]),
            },
        }
    });
    let direct_mixers = std::array::from_fn(|mixer| {
        let mut direct = DirectMixer::default();
        for channel in 0..INPUT_MIX_CHANNELS {
            let strip = &mut direct.inputs[channel];
            let pair = channel / 2;
            strip.stereo_link = if pair < 4 {
                bit(data[88 + mixer * 2], pair)
            } else {
                bit(data[89 + mixer * 2], 0)
            };
            strip.soloed = bit(data[104 + mixer * 3 + channel / 4], channel % 4);
            strip.muted = bit(data[116 + mixer * 3 + channel / 4], channel % 4);
            let pan = 128 + (mixer * INPUT_MIX_CHANNELS + channel) * 4;
            strip.pan = decode_pan(&data[pan..pan + 4]);
            let volume = 288 + (mixer * INPUT_MIX_CHANNELS + channel) * 6;
            strip.level = decode_volume(&data[volume..volume + 6]);
            if mixer == 0 {
                let reverb = 528 + channel * 6;
                strip.reverb_send = decode_volume(&data[reverb..reverb + 6]);
            }
        }
        for channel in 0..INPUT_MIX_CHANNELS {
            let pair = channel / 2;
            let strip = &mut direct.wave_outputs[channel];
            strip.stereo_link = if pair < 4 {
                bit(data[588 + mixer * 2], pair)
            } else {
                bit(data[589 + mixer * 2], 0)
            };
            strip.soloed = bit(data[604 + mixer * 3 + channel / 4], channel % 4);
            strip.muted = bit(data[616 + mixer * 3 + channel / 4], channel % 4);
            let pan = 628 + (mixer * INPUT_MIX_CHANNELS + channel) * 4;
            strip.pan = decode_pan(&data[pan..pan + 4]);
            let volume = 788 + (mixer * INPUT_MIX_CHANNELS + channel) * 6;
            strip.level = decode_volume(&data[volume..volume + 6]);
        }
        direct.stereo_link_master = data[1028 + mixer] != 0;
        direct.input_master = decode_volume(&data[1032 + mixer * 12..1038 + mixer * 12]);
        direct.input_master_right = decode_volume(&data[1038 + mixer * 12..1044 + mixer * 12]);
        if mixer == 0 {
            direct.reverb_return = decode_volume(&data[1080..1086]);
        }
        direct.link_input_output_masters = data[1086 + mixer] != 0;
        direct.output_stereo_link_master = data[1094 + mixer] != 0;
        direct.output_master = decode_volume(&data[1098 + mixer * 12..1104 + mixer * 12]);
        direct.output_master_right = decode_volume(&data[1104 + mixer * 12..1110 + mixer * 12]);
        direct
    });
    Ok(MixerSnapshot {
        device_globals_raw: data[..5].try_into().expect("five-byte slice"),
        patch_bay,
        reverb,
        preamps,
        direct_mixers,
    })
}

pub fn parse_dump(stdout: &[u8]) -> Result<MixerSnapshot> {
    let text = String::from_utf8_lossy(stdout);
    let bytes: Vec<u8> = text
        .split_ascii_whitespace()
        .filter_map(|word| {
            (word.len() == 2)
                .then(|| u8::from_str_radix(word, 16).ok())
                .flatten()
        })
        .collect();
    let start = bytes
        .windows(HEADER.len())
        .position(|window| window == HEADER)
        .context("OCTA mixer DT1 response not found")?;
    let message = &bytes[start..];
    let end = message
        .iter()
        .position(|byte| *byte == 0xf7)
        .context("unterminated OCTA mixer DT1 response")?;
    let message = &message[..=end];
    if message.len() < 13 || message[7..11] != [0x01, 0x00, 0x00, 0x00] {
        bail!("unexpected OCTA mixer response address");
    }
    let data_end = message.len() - 2;
    let sum = message[7..data_end]
        .iter()
        .map(|byte| u32::from(*byte))
        .sum::<u32>();
    let expected = ((0x80 - (sum % 0x80)) & 0x7f) as u8;
    if message[data_end] != expected {
        bail!("OCTA mixer response checksum mismatch");
    }
    decode_load(&message[11..data_end])
}

pub fn read(card: u32) -> Result<MixerSnapshot> {
    if kernel_mixer::sensitivity_controls_present(card) {
        let inputs = kernel_mixer::read_direct_input_switches(card)?;
        let wave_outputs = kernel_mixer::read_wave_outputs(card)?;
        let mut direct_mixers = kernel_mixer::read_direct_masters(card)?;
        for mixer in 0..DIRECT_MIXERS {
            direct_mixers[mixer].inputs = inputs[mixer].clone();
            direct_mixers[mixer].wave_outputs = wave_outputs[mixer].clone();
        }
        return Ok(MixerSnapshot {
            device_globals_raw: kernel_mixer::read_device_globals(card)?,
            patch_bay: kernel_mixer::read_patch_bay(card)?,
            reverb: kernel_mixer::read_reverb(card)?,
            preamps: kernel_mixer::read_preamps(card)?,
            direct_mixers,
        });
    }
    let _ = card;
    let port = ControlPort::open("octa mixer readback")?;
    let request = sysex::build_request([0x01, 0x00, 0x00, 0x00], [0x00, 0x00, 0x08, 0x7a]);
    debug_assert_eq!(
        request,
        LOAD_REQUEST
            .split_ascii_whitespace()
            .map(|word| u8::from_str_radix(word, 16).unwrap())
            .collect::<Vec<_>>()
    );
    port.send(&request)?;
    let deadline = Instant::now() + Duration::from_secs(1);
    while let Some(message) = port.receive_until(deadline)? {
        let transcript = message
            .iter()
            .map(|byte| format!("{byte:02X}"))
            .collect::<Vec<_>>()
            .join(" ");
        if let Ok(snapshot) = parse_dump(transcript.as_bytes()) {
            return Ok(snapshot);
        }
    }
    bail!("timed out waiting for OCTA mixer readback")
}

fn roland_checksum(bytes: &[u8]) -> u8 {
    ((0x80 - (bytes.iter().map(|byte| u32::from(*byte)).sum::<u32>() % 0x80)) & 0x7f) as u8
}

fn dt1_data(address: [u8; 4], data: &[u8]) -> Result<String> {
    if data.iter().any(|value| *value > 0x7f) {
        bail!("OCTA mixer values must be seven-bit MIDI data");
    }
    let mut bytes = HEADER.to_vec();
    bytes.extend_from_slice(&address);
    bytes.extend_from_slice(data);
    bytes.push(roland_checksum(&bytes[7..]));
    bytes.push(0xf7);
    Ok(bytes
        .iter()
        .map(|byte| format!("{byte:02X}"))
        .collect::<Vec<_>>()
        .join(" "))
}

#[cfg(test)]
fn dt1(address: [u8; 4], value: u8) -> String {
    dt1_data(address, &[value]).expect("one-byte DT1 value is seven-bit")
}

fn write_data(card: u32, address: [u8; 4], data: &[u8]) -> Result<()> {
    if kernel_mixer::sensitivity_controls_present(card) {
        bail!(
            "kernel Roland controls are active; direct SysEx writes are disabled for this session"
        );
    }
    let _ = card;
    let message = dt1_data(address, data)?;
    let message = message
        .split_ascii_whitespace()
        .map(|word| u8::from_str_radix(word, 16).context("decode OCTA DT1 byte"))
        .collect::<Result<Vec<_>>>()?;
    ControlPort::open("octa mixer write")?.send(&message)?;
    thread::sleep(Duration::from_millis(25));
    Ok(())
}

fn write_byte(card: u32, address: [u8; 4], value: u8) -> Result<()> {
    write_data(card, address, &[value])
}

fn fixed_nibbles(mut fixed: u32, length: usize) -> Vec<u8> {
    let mut data = vec![0; length];
    for nibble in data.iter_mut().rev() {
        *nibble = (fixed & 0x0f) as u8;
        fixed >>= 4;
    }
    data
}

fn encode_pan(pan: Pan) -> Vec<u8> {
    let fixed = (16_384.0 + 16_384.0 * f32::from(pan.get()) / 100.0) as u32;
    fixed_nibbles(fixed & 0xffff, 4)
}

fn encode_volume(level: RawLevel) -> Vec<u8> {
    let fixed = if level.get() == 0 {
        0
    } else {
        let db = f32::from(level.get()) - 72.0;
        (10_f32.powf(db / 20.0) * 2_097_152.0).round() as u32
    };
    fixed_nibbles(fixed.min(0x7fffff), 6)
}

fn input_address(channel: usize, offset: u8) -> [u8; 4] {
    [0x00, 0x05, channel as u8, offset]
}

/// Apply changed settings for one zero-based input and require full device readback.
pub fn apply_preamp(
    card: u32,
    channel: usize,
    current: &Preamp,
    desired: &Preamp,
) -> Result<Preamp> {
    if channel >= PREAMP_CHANNELS {
        bail!("preamp channel must be 1..={PREAMP_CHANNELS}");
    }
    desired.validate_for_channel(channel + 1)?;
    if kernel_mixer::sensitivity_controls_present(card) {
        if desired.compressor.stereo_link != current.compressor.stereo_link {
            kernel_mixer::write_compressor_stereo_link(
                card,
                channel / 2,
                desired.compressor.stereo_link,
            )?;
        }
        if current.gain != desired.gain {
            kernel_mixer::write_sensitivity(card, channel, desired.gain.half_db())?;
        }
        for (suffix, old, new) in [
            (
                "Phantom Power",
                current.phantom_power,
                desired.phantom_power,
            ),
            ("Low Cut", current.low_cut_100_hz, desired.low_cut_100_hz),
            (
                "Phase Invert",
                current.phase_inverted,
                desired.phase_inverted,
            ),
            (
                "High Impedance",
                current.high_impedance,
                desired.high_impedance,
            ),
            (
                "Compressor",
                current.compressor.enabled,
                desired.compressor.enabled,
            ),
        ] {
            if old != new {
                kernel_mixer::write_preamp_switch(card, channel, suffix, new)?;
            }
        }
        for (suffix, old, new) in [
            (
                "Compressor Gate",
                current.compressor.gate,
                desired.compressor.gate,
            ),
            (
                "Compressor Attack",
                current.compressor.attack,
                desired.compressor.attack,
            ),
            (
                "Compressor Release",
                current.compressor.release,
                desired.compressor.release,
            ),
            (
                "Compressor Threshold",
                current.compressor.threshold,
                desired.compressor.threshold,
            ),
            (
                "Compressor Ratio",
                current.compressor.ratio,
                desired.compressor.ratio,
            ),
            (
                "Compressor Output Gain",
                current.compressor.output_gain,
                desired.compressor.output_gain,
            ),
        ] {
            if old != new {
                kernel_mixer::write_compressor_parameter(card, channel, suffix, new)?;
            }
        }
        let confirmed = kernel_mixer::read_preamps(card)?[channel].clone();
        let mut expected = desired.clone();
        expected.compressor.bypass = !expected.compressor.enabled;
        if confirmed != expected {
            bail!("Input {} did not match hardware readback", channel + 1);
        }
        return Ok(confirmed);
    }
    let boolean = |value: bool| u8::from(value);
    let mut changes = Vec::new();
    if current.phantom_power != desired.phantom_power {
        changes.push((0x00, boolean(desired.phantom_power)));
    }
    if current.low_cut_100_hz != desired.low_cut_100_hz {
        changes.push((0x01, boolean(desired.low_cut_100_hz)));
    }
    if current.phase_inverted != desired.phase_inverted {
        changes.push((0x02, boolean(desired.phase_inverted)));
    }
    if channel < 2 && current.high_impedance != desired.high_impedance {
        changes.push((0x03, boolean(desired.high_impedance)));
    }
    if current.gain != desired.gain {
        changes.push((0x04, desired.gain.half_db()));
    }
    let desired_bypass = !desired.compressor.enabled;
    if current.compressor.bypass != desired_bypass {
        changes.push((0x06, boolean(desired_bypass)));
    }
    for (offset, old, new) in [
        (0x07, current.compressor.gate, desired.compressor.gate),
        (0x08, current.compressor.attack, desired.compressor.attack),
        (0x09, current.compressor.release, desired.compressor.release),
        (
            0x0a,
            current.compressor.threshold,
            desired.compressor.threshold,
        ),
        (0x0b, current.compressor.ratio, desired.compressor.ratio),
        (
            0x0c,
            current.compressor.output_gain,
            desired.compressor.output_gain,
        ),
    ] {
        if old != new {
            changes.push((offset, new.get()));
        }
    }
    for (offset, value) in changes {
        write_byte(card, input_address(channel, offset), value)?;
    }
    let confirmed = read(card)?.preamps[channel].clone();
    let mut expected = desired.clone();
    // Pair-scoped compressor linking is readable but its separate settings
    // write protocol has not yet been physically verified.
    expected.compressor.stereo_link = current.compressor.stereo_link;
    expected.compressor.bypass = !expected.compressor.enabled;
    if confirmed != expected {
        bail!(
            "Input {} readback did not match the requested settings",
            channel + 1
        );
    }
    Ok(confirmed)
}

fn direct_address(mixer: usize, channel: usize, offset: u8) -> [u8; 4] {
    [0x00, 0x06, (mixer * 0x10 + channel) as u8, offset]
}

/// Apply one hardware-input strip and require a matching full device readback.
pub fn apply_direct_input(
    card: u32,
    mixer: usize,
    channel: usize,
    current: &crate::model::MixerStrip,
    desired: &crate::model::MixerStrip,
) -> Result<crate::model::MixerStrip> {
    if mixer >= DIRECT_MIXERS || channel >= INPUT_MIX_CHANNELS {
        bail!("invalid Direct Mix or input channel");
    }
    if kernel_mixer::sensitivity_controls_present(card) {
        for (suffix, old, new) in [
            ("Stereo Link", current.stereo_link, desired.stereo_link),
            ("Mute", current.muted, desired.muted),
            ("Solo", current.soloed, desired.soloed),
        ] {
            if old != new {
                kernel_mixer::write_direct_input_switch(card, mixer, channel, suffix, new)?;
            }
        }
        if current.pan != desired.pan {
            kernel_mixer::write_direct_input_value(
                card,
                mixer,
                channel,
                "Pan",
                i32::from(desired.pan.get()),
                -100,
                100,
            )?;
        }
        if current.level != desired.level {
            kernel_mixer::write_direct_input_value(
                card,
                mixer,
                channel,
                "Level",
                i32::from(desired.level.get()),
                0,
                84,
            )?;
        }
        if mixer == 0 && current.reverb_send != desired.reverb_send {
            kernel_mixer::write_direct_input_value(
                card,
                mixer,
                channel,
                "Reverb Send",
                i32::from(desired.reverb_send.get()),
                0,
                84,
            )?;
        }
        let confirmed = kernel_mixer::read_direct_input_switches(card)?[mixer][channel].clone();
        let mut expected = desired.clone();
        if mixer != 0 {
            expected.reverb_send = confirmed.reverb_send;
        }
        if confirmed != expected {
            bail!("Direct Mix switch state did not match hardware readback");
        }
        return Ok(confirmed);
    }
    let boolean = |value: bool| [u8::from(value)];
    if current.stereo_link != desired.stereo_link {
        write_data(
            card,
            direct_address(mixer, channel, 0x00),
            &boolean(desired.stereo_link),
        )?;
    }
    if current.soloed != desired.soloed {
        write_data(
            card,
            direct_address(mixer, channel, 0x02),
            &boolean(desired.soloed),
        )?;
    }
    if current.muted != desired.muted {
        write_data(
            card,
            direct_address(mixer, channel, 0x03),
            &boolean(desired.muted),
        )?;
    }
    if current.pan != desired.pan {
        write_data(
            card,
            direct_address(mixer, channel, 0x04),
            &encode_pan(desired.pan),
        )?;
    }
    if current.level != desired.level {
        write_data(
            card,
            direct_address(mixer, channel, 0x08),
            &encode_volume(desired.level),
        )?;
    }
    if mixer == 0 && current.reverb_send != desired.reverb_send {
        write_data(
            card,
            direct_address(mixer, channel, 0x0e),
            &encode_volume(desired.reverb_send),
        )?;
    }
    let confirmed = read(card)?.direct_mixers[mixer].inputs[channel].clone();
    let mut expected = desired.clone();
    if mixer != 0 {
        expected.reverb_send = confirmed.reverb_send;
    }
    if confirmed != expected {
        bail!(
            "Direct Mix {} Input {} readback did not match the requested settings",
            (b'A' + mixer as u8) as char,
            channel + 1
        );
    }
    Ok(confirmed)
}

fn daw_address(mixer: usize, channel: usize, offset: u8) -> [u8; 4] {
    [0x00, 0x07, (mixer * 0x10 + channel) as u8, offset]
}

/// Apply one computer-playback channel in a Direct Mix and verify readback.
pub fn apply_wave_output(
    card: u32,
    mixer: usize,
    channel: usize,
    current: &crate::model::MixerStrip,
    desired: &crate::model::MixerStrip,
) -> Result<crate::model::MixerStrip> {
    if mixer >= DIRECT_MIXERS || channel >= INPUT_MIX_CHANNELS {
        bail!("invalid Direct Mix or WAVE OUT channel");
    }
    if kernel_mixer::sensitivity_controls_present(card) {
        for (suffix, old, new) in [
            ("Stereo Link", current.stereo_link, desired.stereo_link),
            ("Mute", current.muted, desired.muted),
            ("Solo", current.soloed, desired.soloed),
        ] {
            if old != new {
                kernel_mixer::write_wave_output_switch(card, mixer, channel, suffix, new)?;
            }
        }
        if current.pan != desired.pan {
            kernel_mixer::write_wave_output_value(
                card,
                mixer,
                channel,
                "Pan",
                i32::from(desired.pan.get()),
                -100,
                100,
            )?;
        }
        if current.level != desired.level {
            kernel_mixer::write_wave_output_value(
                card,
                mixer,
                channel,
                "Level",
                i32::from(desired.level.get()),
                0,
                84,
            )?;
        }
        let confirmed = kernel_mixer::read_wave_outputs(card)?[mixer][channel].clone();
        if confirmed != *desired {
            bail!("Direct Mix WAVE OUT state did not match hardware readback");
        }
        return Ok(confirmed);
    }
    if current.stereo_link != desired.stereo_link {
        write_byte(
            card,
            daw_address(mixer, channel, 0x00),
            u8::from(desired.stereo_link),
        )?;
    }
    if current.soloed != desired.soloed {
        write_byte(
            card,
            daw_address(mixer, channel, 0x02),
            u8::from(desired.soloed),
        )?;
    }
    if current.muted != desired.muted {
        write_byte(
            card,
            daw_address(mixer, channel, 0x03),
            u8::from(desired.muted),
        )?;
    }
    if current.pan != desired.pan {
        write_data(
            card,
            daw_address(mixer, channel, 0x04),
            &encode_pan(desired.pan),
        )?;
    }
    if current.level != desired.level {
        write_data(
            card,
            daw_address(mixer, channel, 0x08),
            &encode_volume(desired.level),
        )?;
    }
    let confirmed = read(card)?.direct_mixers[mixer].wave_outputs[channel].clone();
    if confirmed != *desired {
        bail!(
            "Direct Mix {} WAVE OUT {} readback did not match",
            (b'A' + mixer as u8) as char,
            channel + 1
        );
    }
    Ok(confirmed)
}

/// Clear every mute and solo flag in all four Direct Mixers, then verify the
/// complete hardware snapshot. Other strip settings are left untouched.
pub fn clear_mutes_and_solos(card: u32) -> Result<MixerSnapshot> {
    let current = read(card)?;
    let native = kernel_mixer::sensitivity_controls_present(card);
    for mixer in 0..DIRECT_MIXERS {
        for channel in 0..INPUT_MIX_CHANNELS {
            let input = &current.direct_mixers[mixer].inputs[channel];
            if input.soloed {
                if native {
                    kernel_mixer::write_direct_input_switch(card, mixer, channel, "Solo", false)?;
                } else {
                    write_byte(card, direct_address(mixer, channel, 0x02), 0)?;
                }
            }
            if input.muted {
                if native {
                    kernel_mixer::write_direct_input_switch(card, mixer, channel, "Mute", false)?;
                } else {
                    write_byte(card, direct_address(mixer, channel, 0x03), 0)?;
                }
            }
            let wave = &current.direct_mixers[mixer].wave_outputs[channel];
            if wave.soloed {
                if native {
                    kernel_mixer::write_wave_output_switch(card, mixer, channel, "Solo", false)?;
                } else {
                    write_byte(card, daw_address(mixer, channel, 0x02), 0)?;
                }
            }
            if wave.muted {
                if native {
                    kernel_mixer::write_wave_output_switch(card, mixer, channel, "Mute", false)?;
                } else {
                    write_byte(card, daw_address(mixer, channel, 0x03), 0)?;
                }
            }
        }
    }
    let confirmed = read(card)?;
    let any_set = confirmed.direct_mixers.iter().any(|mixer| {
        mixer
            .inputs
            .iter()
            .chain(mixer.wave_outputs.iter())
            .any(|strip| strip.muted || strip.soloed)
    });
    if any_set {
        bail!("mute/solo clear did not match the hardware readback");
    }
    Ok(confirmed)
}

pub fn apply_direct_masters(
    card: u32,
    mixer: usize,
    current: &DirectMixer,
    desired: &DirectMixer,
) -> Result<DirectMixer> {
    if mixer >= DIRECT_MIXERS {
        bail!("invalid Direct Mix");
    }
    if desired.stereo_link_master && desired.input_master != desired.input_master_right {
        bail!("linked input masters must have matching left/right levels");
    }
    if desired.output_stereo_link_master && desired.output_master != desired.output_master_right {
        bail!("linked output masters must have matching left/right levels");
    }
    if kernel_mixer::sensitivity_controls_present(card) {
        for (suffix, old, new) in [
            (
                "Input Master Stereo Link",
                current.stereo_link_master,
                desired.stereo_link_master,
            ),
            (
                "Link Input Output Masters",
                current.link_input_output_masters,
                desired.link_input_output_masters,
            ),
            (
                "Output Master Stereo Link",
                current.output_stereo_link_master,
                desired.output_stereo_link_master,
            ),
        ] {
            if old != new {
                kernel_mixer::write_master_switch(card, mixer, suffix, new)?;
            }
        }
        for (suffix, old, new) in [
            (
                "Input Master Left",
                current.input_master,
                desired.input_master,
            ),
            (
                "Input Master Right",
                current.input_master_right,
                desired.input_master_right,
            ),
            (
                "Output Master Left",
                current.output_master,
                desired.output_master,
            ),
            (
                "Output Master Right",
                current.output_master_right,
                desired.output_master_right,
            ),
        ] {
            if old != new {
                kernel_mixer::write_master_level(card, mixer, suffix, new)?;
            }
        }
        if mixer == 0 && current.reverb_return != desired.reverb_return {
            kernel_mixer::write_master_level(card, mixer, "Reverb Return", desired.reverb_return)?;
        }
        let confirmed = kernel_mixer::read_direct_masters(card)?[mixer].clone();
        let matches = confirmed.stereo_link_master == desired.stereo_link_master
            && confirmed.input_master == desired.input_master
            && confirmed.input_master_right == desired.input_master_right
            && confirmed.link_input_output_masters == desired.link_input_output_masters
            && confirmed.output_stereo_link_master == desired.output_stereo_link_master
            && confirmed.output_master == desired.output_master
            && confirmed.output_master_right == desired.output_master_right
            && (mixer != 0 || confirmed.reverb_return == desired.reverb_return);
        if !matches {
            bail!("Direct Mix master state did not match hardware readback");
        }
        return Ok(confirmed);
    }
    let direct = (mixer * 0x10) as u8;
    if current.stereo_link_master != desired.stereo_link_master {
        write_byte(
            card,
            [0x00, 0x08, direct, 0x00],
            u8::from(desired.stereo_link_master),
        )?;
    }
    if current.input_master != desired.input_master {
        write_data(
            card,
            [0x00, 0x08, direct, 0x01],
            &encode_volume(desired.input_master),
        )?;
    }
    if current.input_master_right != desired.input_master_right {
        write_data(
            card,
            [0x00, 0x08, direct + 1, 0x01],
            &encode_volume(desired.input_master_right),
        )?;
    }
    if mixer == 0 && current.reverb_return != desired.reverb_return {
        write_data(
            card,
            [0x00, 0x08, 0x00, 0x07],
            &encode_volume(desired.reverb_return),
        )?;
    }
    if current.link_input_output_masters != desired.link_input_output_masters {
        write_byte(
            card,
            [0x00, 0x08, direct, 0x0d],
            u8::from(desired.link_input_output_masters),
        )?;
    }
    if current.output_stereo_link_master != desired.output_stereo_link_master {
        write_byte(
            card,
            [0x00, 0x09, direct, 0x00],
            u8::from(desired.output_stereo_link_master),
        )?;
    }
    if current.output_master != desired.output_master {
        write_data(
            card,
            [0x00, 0x09, direct, 0x01],
            &encode_volume(desired.output_master),
        )?;
    }
    if current.output_master_right != desired.output_master_right {
        write_data(
            card,
            [0x00, 0x09, direct + 1, 0x01],
            &encode_volume(desired.output_master_right),
        )?;
    }
    let confirmed = read(card)?.direct_mixers[mixer].clone();
    let matches = confirmed.stereo_link_master == desired.stereo_link_master
        && confirmed.input_master == desired.input_master
        && confirmed.input_master_right == desired.input_master_right
        && confirmed.link_input_output_masters == desired.link_input_output_masters
        && confirmed.output_stereo_link_master == desired.output_stereo_link_master
        && confirmed.output_master == desired.output_master
        && confirmed.output_master_right == desired.output_master_right
        && (mixer != 0 || confirmed.reverb_return == desired.reverb_return);
    if !matches {
        bail!(
            "Direct Mix {} master readback did not match",
            (b'A' + mixer as u8) as char
        );
    }
    Ok(confirmed)
}

fn patch_value(source: PatchSource) -> Result<u8> {
    source.validate()?;
    Ok(match source {
        PatchSource::DirectMix(mixer) => mixer - 1,
        PatchSource::WaveOut(pair) => pair + 3,
    })
}

pub fn apply_patch_bay(card: u32, output: usize, desired: PatchSource) -> Result<PatchSource> {
    if output >= crate::model::OUTPUT_PAIRS {
        bail!(
            "patch-bay output must be 1..={}",
            crate::model::OUTPUT_PAIRS
        );
    }
    if kernel_mixer::sensitivity_controls_present(card) {
        kernel_mixer::write_patch_bay(card, output, desired)?;
        let confirmed = kernel_mixer::read_patch_bay(card)?[output];
        if confirmed != desired {
            bail!("patch-bay output {} readback mismatch", output + 1);
        }
        return Ok(confirmed);
    }
    write_byte(
        card,
        [0x00, 0x03, 0x00, output as u8],
        patch_value(desired)?,
    )?;
    let confirmed = read(card)?.patch_bay[output];
    if confirmed != desired {
        bail!("patch-bay output {} readback mismatch", output + 1);
    }
    Ok(confirmed)
}

pub fn apply_patch_bay_profile(
    card: u32,
    desired: [PatchSource; crate::model::OUTPUT_PAIRS],
) -> Result<[PatchSource; crate::model::OUTPUT_PAIRS]> {
    let original = if kernel_mixer::sensitivity_controls_present(card) {
        kernel_mixer::read_patch_bay(card)?
    } else {
        read(card)?.patch_bay
    };
    for output in 0..crate::model::OUTPUT_PAIRS {
        if original[output] == desired[output] {
            continue;
        }
        if let Err(error) = apply_patch_bay(card, output, desired[output]) {
            for rollback in (0..output).rev() {
                if original[rollback] != desired[rollback] {
                    let _ = apply_patch_bay(card, rollback, original[rollback]);
                }
            }
            return Err(error).context("apply patch-bay profile; earlier routes were rolled back");
        }
    }
    let confirmed = if kernel_mixer::sensitivity_controls_present(card) {
        kernel_mixer::read_patch_bay(card)?
    } else {
        read(card)?.patch_bay
    };
    if confirmed != desired {
        bail!("patch-bay profile did not match full hardware readback");
    }
    Ok(confirmed)
}

fn reverb_type_value(kind: ReverbType) -> u8 {
    match kind {
        ReverbType::Off => 0,
        ReverbType::Echo => 1,
        ReverbType::Room => 2,
        ReverbType::SmallHall => 3,
        ReverbType::LargeHall => 4,
        ReverbType::Plate => 5,
    }
}

fn reverb_parameter_bank(kind: ReverbType) -> Option<u8> {
    reverb_type_value(kind).checked_sub(1)
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum ReverbWrite {
    Type,
    PreDelay,
    Time,
}

fn reverb_write_plan(current: &Reverb, desired: &Reverb) -> Vec<ReverbWrite> {
    let mut plan = Vec::new();
    if current.kind != desired.kind {
        plan.push(ReverbWrite::Type);
    }
    if desired.kind != ReverbType::Off {
        // A type change selects that algorithm's stored parameter bank.  The
        // old type's values therefore cannot be used to skip either write.
        if current.kind != desired.kind || current.pre_delay != desired.pre_delay {
            plan.push(ReverbWrite::PreDelay);
        }
        if current.kind != desired.kind || current.time != desired.time {
            plan.push(ReverbWrite::Time);
        }
    }
    plan
}

pub fn apply_reverb(card: u32, current: &Reverb, desired: &Reverb) -> Result<Reverb> {
    if desired.pre_delay.get() > 12 {
        bail!("reverb pre-delay must be 0..=12");
    }
    if desired.time.get() > 49 {
        bail!("reverb time must be 0..=49");
    }
    let plan = reverb_write_plan(current, desired);
    if kernel_mixer::sensitivity_controls_present(card) {
        if plan.contains(&ReverbWrite::Type) {
            kernel_mixer::write_reverb_type(card, desired.kind)?;
        }
        if plan.contains(&ReverbWrite::PreDelay) {
            kernel_mixer::write_reverb_parameter(card, "Reverb Pre Delay", desired.pre_delay)?;
        }
        if plan.contains(&ReverbWrite::Time) {
            kernel_mixer::write_reverb_parameter(card, "Reverb Time", desired.time)?;
        }
        let confirmed = kernel_mixer::read_reverb(card)?;
        let matches = confirmed.kind == desired.kind
            && (desired.kind == ReverbType::Off
                || (confirmed.pre_delay == desired.pre_delay && confirmed.time == desired.time));
        if !matches {
            bail!("reverb readback did not match the requested settings");
        }
        return Ok(confirmed);
    }
    let kind = reverb_type_value(desired.kind);
    if plan.contains(&ReverbWrite::Type) {
        write_byte(card, [0x00, 0x04, 0x00, 0x00], kind)?;
    }
    if plan.contains(&ReverbWrite::PreDelay) {
        let bank = reverb_parameter_bank(desired.kind)
            .ok_or_else(|| anyhow::anyhow!("reverb Off has no parameter bank"))?;
        write_byte(card, [0x00, 0x04, bank, 0x01], desired.pre_delay.get())?;
    }
    if plan.contains(&ReverbWrite::Time) {
        let bank = reverb_parameter_bank(desired.kind)
            .ok_or_else(|| anyhow::anyhow!("reverb Off has no parameter bank"))?;
        write_byte(card, [0x00, 0x04, bank, 0x02], desired.time.get())?;
    }
    let confirmed = read(card)?.reverb;
    let matches = confirmed.kind == desired.kind
        && (desired.kind == ReverbType::Off
            || (confirmed.pre_delay == desired.pre_delay && confirmed.time == desired.time));
    if !matches {
        bail!("reverb readback did not match the requested settings");
    }
    Ok(confirmed)
}

#[cfg(test)]
mod reverb_plan_tests {
    use super::*;

    fn reverb(kind: ReverbType, pre_delay: u8, time: u8) -> Reverb {
        Reverb {
            kind,
            pre_delay: RawLevel::new(pre_delay),
            time: RawLevel::new(time),
        }
    }

    #[test]
    fn type_change_applies_the_new_parameter_bank() {
        let current = reverb(ReverbType::Room, 2, 20);
        let desired = reverb(ReverbType::Plate, 2, 20);
        assert_eq!(
            reverb_write_plan(&current, &desired),
            vec![ReverbWrite::Type, ReverbWrite::PreDelay, ReverbWrite::Time]
        );
    }

    #[test]
    fn unchanged_reverb_has_no_writes() {
        let state = reverb(ReverbType::Room, 2, 20);
        assert!(reverb_write_plan(&state, &state).is_empty());
    }

    #[test]
    fn parameter_banks_are_zero_based_while_types_are_one_based() {
        assert_eq!(reverb_parameter_bank(ReverbType::Off), None);
        assert_eq!(reverb_parameter_bank(ReverbType::Echo), Some(0));
        assert_eq!(reverb_parameter_bank(ReverbType::Room), Some(1));
        assert_eq!(reverb_parameter_bank(ReverbType::Plate), Some(4));
    }
}

pub fn auto_sens_start(
    card: u32,
    selected: [bool; PREAMP_CHANNELS],
) -> Result<[Preamp; PREAMP_CHANNELS]> {
    if !selected.iter().any(|value| *value) {
        bail!("Auto-Sens requires at least one selected input");
    }
    if kernel_mixer::sensitivity_controls_present(card) {
        kernel_mixer::write_auto_sens_selection(card, selected)?;
        return kernel_mixer::write_auto_sens_state(card, 1);
    }
    for (channel, enabled) in selected.into_iter().enumerate() {
        write_byte(
            card,
            [0x00, 0x02, 0x01, 0x10 + channel as u8],
            u8::from(enabled),
        )?;
    }
    write_byte(card, [0x00, 0x02, 0x01, 0x02], 1)?;
    write_byte(card, [0x00, 0x02, 0x01, 0x03], 1)?;
    Ok(read(card)?.preamps)
}

pub fn auto_sens_finish(card: u32) -> Result<[Preamp; PREAMP_CHANNELS]> {
    if kernel_mixer::sensitivity_controls_present(card) {
        return kernel_mixer::write_auto_sens_state(card, 0);
    }
    write_byte(card, [0x00, 0x02, 0x01, 0x02], 0)?;
    Ok(read(card)?.preamps)
}

pub fn auto_sens_cancel(card: u32) -> Result<[Preamp; PREAMP_CHANNELS]> {
    if kernel_mixer::sensitivity_controls_present(card) {
        return kernel_mixer::write_auto_sens_state(card, 2);
    }
    write_byte(card, [0x00, 0x02, 0x01, 0x02], 2)?;
    write_byte(card, [0x00, 0x02, 0x01, 0x03], 0)?;
    Ok(read(card)?.preamps)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn decodes_grouped_preamp_switches() {
        let mut data = vec![0; 1146];
        data[..5].copy_from_slice(&[1, 2, 3, 4, 5]);
        data[23] = 0b0011;
        data[25] = 0b0100;
        data[27] = 0b0010;
        data[38] = 0b0001;
        let snapshot = decode_load(&data).unwrap();
        assert_eq!(snapshot.device_globals_raw, [1, 2, 3, 4, 5]);
        assert!(snapshot.preamps[0].low_cut_100_hz);
        assert!(snapshot.preamps[1].low_cut_100_hz);
        assert!(!snapshot.preamps[2].low_cut_100_hz);
        assert!(snapshot.preamps[2].phase_inverted);
        assert!(snapshot.preamps[1].high_impedance);
        assert!(snapshot.preamps[0].compressor.bypass);
        assert!(!snapshot.preamps[0].compressor.enabled);
    }

    #[test]
    fn builds_dt1_with_roland_checksum() {
        assert_eq!(
            dt1([0x00, 0x05, 0x01, 0x00], 1),
            "F0 41 10 00 00 4D 12 00 05 01 00 01 79 F7"
        );
    }

    #[test]
    fn maps_input_addresses() {
        assert_eq!(input_address(0, 1), [0, 5, 0, 1]);
        assert_eq!(input_address(1, 1), [0, 5, 1, 1]);
        assert_eq!(input_address(4, 1), [0, 5, 4, 1]);
        assert_eq!(input_address(0, 5), [0, 5, 0, 5]);
    }

    #[test]
    fn decodes_direct_mix_pan_volume_and_masks() {
        let mut data = vec![0; 1146];
        data[88] = 0b0010;
        data[104] = 0b0100;
        data[116] = 0b1000;
        data[128..132].copy_from_slice(&[4, 0, 0, 0]);
        data[288..294].copy_from_slice(&[2, 0, 0, 0, 0, 0]);
        let snapshot = decode_load(&data).unwrap();
        let mix = &snapshot.direct_mixers[0];
        assert!(mix.inputs[2].stereo_link);
        assert!(mix.inputs[3].stereo_link);
        assert!(mix.inputs[2].soloed);
        assert!(mix.inputs[3].muted);
        assert_eq!(mix.inputs[0].pan.get(), 0);
        assert_eq!(mix.inputs[0].level.get(), 72);
    }
}
