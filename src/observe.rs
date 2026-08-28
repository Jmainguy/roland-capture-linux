//! Read-only MIDI observation helpers for protocol discovery and diagnostics.

use crate::sysex::{self, MidiEvent};
use anyhow::{bail, Context, Result};
use std::collections::BTreeMap;
use std::process::Command;

#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct MidiSummary {
    pub messages: usize,
    pub control_changes: BTreeMap<(u8, u8), ValueRange>,
    pub roland_data: Vec<([u8; 4], Vec<u8>)>,
    pub other_messages: usize,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ValueRange {
    pub count: usize,
    pub minimum: u8,
    pub maximum: u8,
    pub last: u8,
}

impl MidiSummary {
    pub fn observe(&mut self, event: MidiEvent) {
        self.messages += 1;
        match event {
            MidiEvent::ControlChange {
                channel,
                controller,
                value,
            } => {
                self.control_changes
                    .entry((channel, controller))
                    .and_modify(|range| {
                        range.count += 1;
                        range.minimum = range.minimum.min(value);
                        range.maximum = range.maximum.max(value);
                        range.last = value;
                    })
                    .or_insert(ValueRange {
                        count: 1,
                        minimum: value,
                        maximum: value,
                        last: value,
                    });
            }
            MidiEvent::RolandData { address, data } => self.roland_data.push((address, data)),
            MidiEvent::Other(_) => self.other_messages += 1,
        }
    }
}

pub fn capture_midi(port: &str, seconds: u64) -> Result<MidiSummary> {
    let output = Command::new("amidi")
        .args(["-p", port, "-d", "-t", &seconds.max(1).to_string()])
        .output()
        .context("run amidi — install alsa-utils")?;
    if !output.status.success() {
        bail!(
            "amidi capture failed: {}",
            String::from_utf8_lossy(&output.stderr).trim()
        );
    }

    let mut summary = MidiSummary::default();
    for line in String::from_utf8_lossy(&output.stdout).lines() {
        let message: Vec<u8> = line
            .split_whitespace()
            .filter_map(|word| u8::from_str_radix(word, 16).ok())
            .collect();
        if !message.is_empty() {
            summary.observe(sysex::decode_message(&message)?);
        }
    }
    Ok(summary)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn summarizes_control_change_ranges() {
        let mut summary = MidiSummary::default();
        for value in [10, 4, 99] {
            summary.observe(MidiEvent::ControlChange {
                channel: 0,
                controller: 27,
                value,
            });
        }
        assert_eq!(
            summary.control_changes[&(0, 27)],
            ValueRange {
                count: 3,
                minimum: 4,
                maximum: 99,
                last: 99
            }
        );
    }
}
