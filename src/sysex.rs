//! Roland SysEx helpers for OCTA-CAPTURE sample rate.

use anyhow::{bail, Context, Result};
use std::process::Command;

const ROLAND_HEADER: [u8; 6] = [0x41, 0x10, 0x00, 0x00, 0x4D, 0x12];

/// Device settings base (`O_SETTINGS`) + `sample_rate` offset.
const SAMPLE_RATE_ADDR: [u8; 4] = [0x00, 0x02, 0x00, 0x01];

fn checksum(data: &[u8]) -> u8 {
    let sum: u32 = data.iter().map(|&b| u32::from(b)).sum();
    ((0x80 - (sum % 0x80)) & 0x7f) as u8
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub enum MidiEvent {
    ControlChange {
        channel: u8,
        controller: u8,
        value: u8,
    },
    RolandData {
        address: [u8; 4],
        data: Vec<u8>,
    },
    Other(Vec<u8>),
}

pub fn decode_message(message: &[u8]) -> Result<MidiEvent> {
    if message.len() == 3 && message[0] & 0xF0 == 0xB0 {
        return Ok(MidiEvent::ControlChange {
            channel: message[0] & 0x0F,
            controller: message[1],
            value: message[2],
        });
    }

    if message.len() >= 13
        && message[0] == 0xF0
        && message[1..7] == ROLAND_HEADER
        && message.last() == Some(&0xF7)
    {
        let address = [message[7], message[8], message[9], message[10]];
        let data_end = message.len() - 2;
        let data = &message[11..data_end];
        let expected = checksum(&message[7..data_end]);
        if message[data_end] != expected {
            bail!(
                "Roland checksum mismatch: got {:02x}, expected {expected:02x}",
                message[data_end]
            );
        }
        return Ok(MidiEvent::RolandData {
            address,
            data: data.to_vec(),
        });
    }

    Ok(MidiEvent::Other(message.to_vec()))
}

/// Build a standard Roland RQ1 request without sending it.
#[allow(dead_code)]
pub fn build_request(address: [u8; 4], size: [u8; 4]) -> Vec<u8> {
    let mut body = Vec::with_capacity(8);
    body.extend_from_slice(&address);
    body.extend_from_slice(&size);

    let mut message = vec![0xF0, 0x41, 0x10, 0x00, 0x00, 0x4D, 0x11];
    message.extend_from_slice(&body);
    message.push(checksum(&body));
    message.push(0xF7);
    message
}

/// DT1 write: set sample_rate enum (0=44.1k … 3=192k).
pub fn write_sample_rate(midi_port: &str, enum_byte: u8) -> Result<()> {
    if enum_byte > 3 {
        bail!("sample_rate enum must be 0..=3");
    }
    let mut body = Vec::with_capacity(5);
    body.extend_from_slice(&SAMPLE_RATE_ADDR);
    body.push(enum_byte);
    let ck = checksum(&body);

    let mut msg = vec![0xF0];
    msg.extend_from_slice(&ROLAND_HEADER);
    msg.extend_from_slice(&body);
    msg.push(ck);
    msg.push(0xF7);

    let hex: String = msg.iter().map(|b| format!("{b:02X}")).collect();
    let status = Command::new("amidi")
        .args(["-p", midi_port, "-S", &hex])
        .status()
        .context("amidi not found — install alsa-utils")?;
    if !status.success() {
        bail!("amidi exited with {status}");
    }
    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn builds_known_sample_rate_request() {
        assert_eq!(
            build_request([0x00, 0x02, 0x00, 0x01], [0x00, 0x00, 0x00, 0x01]),
            vec![
                0xF0, 0x41, 0x10, 0x00, 0x00, 0x4D, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00,
                0x01, 0x7C, 0xF7
            ]
        );
    }

    #[test]
    fn decodes_control_change() {
        assert_eq!(
            decode_message(&[0xB0, 0x1B, 0x73]).unwrap(),
            MidiEvent::ControlChange {
                channel: 0,
                controller: 0x1B,
                value: 0x73
            }
        );
    }

    #[test]
    fn validates_roland_data_checksum() {
        let message = [
            0xF0, 0x41, 0x10, 0x00, 0x00, 0x4D, 0x12, 0x00, 0x02, 0x00, 0x01, 0x02, 0x7B, 0xF7,
        ];
        assert_eq!(
            decode_message(&message).unwrap(),
            MidiEvent::RolandData {
                address: [0x00, 0x02, 0x00, 0x01],
                data: vec![0x02]
            }
        );
    }
}
