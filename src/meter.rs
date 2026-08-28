//! Live OCTA-CAPTURE input meters. Meter streaming exists only while a reader is alive.

use crate::sysex::{self, MidiEvent};
use anyhow::{bail, Context, Result};
use std::sync::atomic::{AtomicBool, Ordering};
use std::sync::mpsc::Sender;
use std::time::Duration;

pub const INPUT_METERS: usize = 8;
static SHUTDOWN_REQUESTED: AtomicBool = AtomicBool::new(false);

pub fn request_shutdown() {
    SHUTDOWN_REQUESTED.store(true, Ordering::Release);
}

pub fn shutdown_requested() -> bool {
    SHUTDOWN_REQUESTED.load(Ordering::Acquire)
}

pub fn reset_shutdown() {
    SHUTDOWN_REQUESTED.store(false, Ordering::Release);
}

#[derive(Clone, Copy, Debug, PartialEq)]
pub struct MeterFrame {
    /// Unsigned 14-bit amplitude, where `0x3fff` is 0 dBFS.
    pub input_raw: [u16; INPUT_METERS],
    /// Unsigned 14-bit post-compressor amplitude.
    pub compressor_output_raw: [u16; INPUT_METERS],
}

impl MeterFrame {
    pub fn input_dbfs(&self, channel: usize) -> f32 {
        raw_dbfs(self.input_raw[channel])
    }

    pub fn compressor_output_dbfs(&self, channel: usize) -> f32 {
        raw_dbfs(self.compressor_output_raw[channel])
    }
}

fn raw_dbfs(raw: u16) -> f32 {
    if raw == 0 {
        f32::NEG_INFINITY
    } else {
        20.0 * (f32::from(raw) / 16_383.0).log10()
    }
}

pub fn decode_message(message: &[u8]) -> Result<Option<MeterFrame>> {
    match sysex::decode_message(message)? {
        MidiEvent::RolandData { address, data } if address == [0x00, 0x0a, 0x00, 0x01] => {
            if data.len() != INPUT_METERS * 2 {
                bail!(
                    "OCTA input meter frame must contain 16 bytes, got {}",
                    data.len()
                );
            }
            let input_raw = std::array::from_fn(|channel| {
                (u16::from(data[channel * 2]) << 7) | u16::from(data[channel * 2 + 1])
            });
            Ok(Some(MeterFrame {
                input_raw,
                compressor_output_raw: [0; INPUT_METERS],
            }))
        }
        _ => Ok(None),
    }
}

pub fn parse_amidi_line(line: &str) -> Result<Option<MeterFrame>> {
    let message: Vec<u8> = line
        .split_ascii_whitespace()
        .map(|word| u8::from_str_radix(word, 16).context("decode amidi meter byte"))
        .collect::<Result<_>>()?;
    if message.is_empty() {
        return Ok(None);
    }
    decode_message(&message)
}

/// Run until the receiver is dropped or the device disconnects.
/// Cleanup always sends the documented meter-disable DT1 command.
pub fn run(_card: u32, sender: Sender<MeterFrame>) -> Result<()> {
    crate::kernel_mixer::set_meter_stream(_card, true)?;
    let result = read_frames(_card, &sender);
    let _ = crate::kernel_mixer::set_meter_stream(_card, false);
    result
}
fn read_frames(card: u32, sender: &Sender<MeterFrame>) -> Result<()> {
    loop {
        if shutdown_requested() {
            return Ok(());
        }
        // Renew the kernel's one-second stream lease. If this process exits
        // abruptly, the driver disables device meter traffic automatically.
        crate::kernel_mixer::set_meter_stream(card, true)?;
        let (input_raw, compressor_output_raw) = crate::kernel_mixer::read_meters(card)?;
        if sender
            .send(MeterFrame {
                input_raw,
                compressor_output_raw,
            })
            .is_err()
        {
            return Ok(());
        }
        std::thread::sleep(Duration::from_millis(33));
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn decodes_observed_octa_input_meter_frame() {
        let line = "F0 41 10 00 00 4D 12 00 0A 00 01 00 0B 00 02 00 0A 00 04 00 0B 00 0A 00 09 00 0A 32 F7";
        let frame = parse_amidi_line(line).unwrap().unwrap();
        assert_eq!(frame.input_raw, [11, 2, 10, 4, 11, 10, 9, 10]);
        assert!(frame.input_dbfs(0) < -60.0);
    }

    #[test]
    fn rejects_wrong_meter_payload_length() {
        let message = [
            0xf0, 0x41, 0x10, 0x00, 0x00, 0x4d, 0x12, 0x00, 0x0a, 0x00, 0x01, 0x01, 0x74, 0xf7,
        ];
        assert!(decode_message(&message).is_err());
    }
}
