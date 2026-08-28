//! Detect which sample rate the hardware clock is actually on (PCM probe fallback).

use crate::device::Kind;
use anyhow::{bail, Result};
use std::fs;
use std::process::{Command, Stdio};
use std::thread;
use std::time::Duration;

/// Probe until a rate works. If `prefer` is set, try that rate first.
pub fn detect_rate(kind: Kind, card: u32, prefer: Option<u32>) -> Result<u32> {
    let mut order: Vec<(u32, u32, u32)> = [44100, 48000, 96000, 192000]
        .into_iter()
        .map(|rate| {
            let (play, cap) = kind.channels(rate);
            (rate, cap, play)
        })
        .collect();
    if let Some(pref) = prefer {
        if let Some(i) = order.iter().position(|(r, ..)| *r == pref) {
            let first = order.remove(i);
            order.insert(0, first);
        }
    }

    let fmt = match kind {
        Kind::Octa => "S24_3LE",
        Kind::Quad => "S32_LE",
    };

    for &(rate, ch, play_ch) in &order {
        eprint!("  probing {rate}… ");
        if probe_one(card, fmt, rate, ch, play_ch) {
            eprintln!("ok");
            return Ok(rate);
        }
        eprintln!("no");
    }
    bail!("no working rate — is the {} connected?", kind.label());
}

fn probe_one(card: u32, fmt: &str, rate: u32, cap_ch: u32, play_ch: u32) -> bool {
    let raw = format!("/tmp/octa-probe-{rate}-{}.raw", std::process::id());
    let _ = fs::remove_file(&raw);

    let mut rec = Command::new("arecord")
        .args([
            "-D",
            &format!("hw:{card},0"),
            "-f",
            fmt,
            "-c",
            &cap_ch.to_string(),
            "-r",
            &rate.to_string(),
            "-d",
            "1",
            &raw,
        ])
        .stdout(Stdio::null())
        .stderr(Stdio::null())
        .spawn()
        .ok();

    thread::sleep(Duration::from_millis(200));

    let play_ok = Command::new("aplay")
        .args([
            "-D",
            &format!("hw:{card},0"),
            "-f",
            fmt,
            "-c",
            &play_ch.to_string(),
            "-r",
            &rate.to_string(),
            "-d",
            "1",
            "/dev/zero",
        ])
        .stdout(Stdio::null())
        .stderr(Stdio::null())
        .status()
        .map(|s| s.success())
        .unwrap_or(false);

    if let Some(mut child) = rec.take() {
        let _ = child.kill();
        let _ = child.wait();
    }
    let _ = fs::remove_file(&raw);
    play_ok
}
