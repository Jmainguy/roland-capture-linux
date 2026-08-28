//! ALSA card / MIDI discovery for Roland Capture devices.

use crate::device::Kind;
use anyhow::{bail, Result};
use std::fs;
use std::path::PathBuf;
use std::process::Command;

pub fn find_card(kind: Kind) -> Result<u32> {
    for i in 0..10 {
        let path = format!("/proc/asound/card{i}/usbid");
        if let Ok(id) = fs::read_to_string(&path) {
            if id.trim() == kind.usbid() {
                return Ok(i);
            }
        }
    }
    bail!("no ALSA card with USB id {}", kind.usbid());
}

pub fn card_present(kind: Kind) -> bool {
    find_card(kind).is_ok()
}

pub fn find_midi(kind: Kind) -> Option<String> {
    let out = Command::new("amidi").arg("-l").output().ok()?;
    let text = String::from_utf8_lossy(&out.stdout);
    let needle = kind.label();
    for line in text.lines() {
        if line.contains(needle) {
            let parts: Vec<_> = line.split_whitespace().collect();
            if parts.len() >= 2 {
                return Some(parts[1].to_string());
            }
        }
    }
    find_card(kind).ok().map(|c| format!("hw:{c},0,0"))
}

pub fn print_stream_summary(card: u32) {
    let path = PathBuf::from(format!("/proc/asound/card{card}/stream0"));
    let Ok(text) = fs::read_to_string(path) else {
        println!("stream0: (unavailable)");
        return;
    };
    let mut section = "";
    for line in text.lines() {
        if line.starts_with("Playback:") {
            section = "Playback";
        } else if line.starts_with("Capture:") {
            section = "Capture";
        } else if line.contains("Status:") {
            print!("  {section} {}", line.trim());
        } else if line.contains("Altset =") || line.contains("Momentary freq") {
            print!(" {}", line.trim());
            if line.contains("Momentary freq") {
                println!();
            }
        }
    }
    if !text.contains("Momentary freq") {
        println!("  (idle — no Momentary freq)");
    }
}

/// True when both isoch interfaces are idle.
pub fn streams_idle(card: u32) -> bool {
    let path = PathBuf::from(format!("/proc/asound/card{card}/stream0"));
    let Ok(text) = fs::read_to_string(path) else {
        return false;
    };
    let play_stop = text.contains("Playback:")
        && text
            .split("Capture:")
            .next()
            .is_some_and(|p| p.contains("Status: Stop"));
    let cap_stop = text
        .split("Capture:")
        .nth(1)
        .is_some_and(|c| c.contains("Status: Stop"));
    play_stop && cap_stop
}
