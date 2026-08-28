//! PipeWire / Pulse helpers via CLI tools.

use crate::device::Kind;
use anyhow::{bail, Context, Result};
use std::fs;
use std::path::PathBuf;
use std::process::{Command, Stdio};
use std::thread;
use std::time::Duration;

/// WirePlumber drop-in written by `octa` so channel count matches the USB altsetting.
fn channels_conf_path() -> Result<PathBuf> {
    let home = std::env::var_os("HOME").context("$HOME not set")?;
    Ok(PathBuf::from(home).join(".config/wireplumber/wireplumber.conf.d/99-octa-channels.conf"))
}

fn quad_test_conf_path() -> Result<PathBuf> {
    let home = std::env::var_os("HOME").context("$HOME not set")?;
    Ok(PathBuf::from(home).join(".config/wireplumber/wireplumber.conf.d/99-quad-192.conf"))
}

/// Remove the one-off Quad 192 kHz test drop-in if present.
pub fn cleanup_temp_quad_conf() {
    if let Ok(path) = quad_test_conf_path() {
        let _ = fs::remove_file(path);
    }
}

/// Write WirePlumber channel props for this device + rate.
pub fn configure_channels_for_rate(kind: Kind, hz: u32) -> Result<()> {
    cleanup_temp_quad_conf();

    let path = channels_conf_path()?;
    if let Some(dir) = path.parent() {
        fs::create_dir_all(dir)?;
    }

    let (play_ch, cap_ch) = kind.channels(hz);
    let play_pos = kind.play_position_full(hz);
    let cap_pos = kind.cap_position_full(hz);
    let extra = if hz == 192000 {
        "        api.alsa.period-size = 512\n        api.alsa.headroom = 512\n"
    } else {
        ""
    };

    let suspend = "        session.suspend-timeout-seconds = 0\n";
    let rate_pin = format!(
        "        audio.rate = {hz}\n\
                 node.lock-rate = true\n"
    );
    let profile_play_layout = if hz == 192000 {
        format!(
            "        audio.channels = {play_ch}\n\
                     audio.position = {play_pos}\n\
                     channelmix.lock-channels = true\n"
        )
    } else {
        String::new()
    };
    let profile_cap_layout = if hz == 192000 {
        format!(
            "        audio.channels = {cap_ch}\n\
                     audio.position = {cap_pos}\n\
                     channelmix.lock-channels = true\n"
        )
    } else {
        String::new()
    };

    let out_match = match kind {
        Kind::Octa => format!(
            "               {{ node.name = \"~alsa_output.usb-Roland_OCTA-CAPTURE*\" }}\n\
                           {{ node.name = \"~alsa_output.hw_OCTACAPTURE*\" }}\n"
        ),
        Kind::Quad => format!(
            "               {{ node.name = \"~alsa_output.usb-Roland_QUAD-CAPTURE*\" }}\n\
                           {{ node.name = \"~alsa_output.hw_QUADCAPTURE*\" }}\n"
        ),
    };
    let in_match = match kind {
        Kind::Octa => format!(
            "               {{ node.name = \"~alsa_input.usb-Roland_OCTA-CAPTURE*\" }}\n\
                           {{ node.name = \"~alsa_input.hw_OCTACAPTURE*\" }}\n"
        ),
        Kind::Quad => format!(
            "               {{ node.name = \"~alsa_input.usb-Roland_QUAD-CAPTURE*\" }}\n\
                           {{ node.name = \"~alsa_input.hw_QUADCAPTURE*\" }}\n"
        ),
    };
    // UCM creates one named node per physical channel. Only raw hw nodes used
    // by Pro Audio should be expanded to the full USB stream width.
    let raw_out_match = match kind {
        Kind::Octa => "               { node.name = \"~alsa_output.hw_OCTACAPTURE*\" }\n",
        Kind::Quad => "               { node.name = \"~alsa_output.hw_QUADCAPTURE*\" }\n",
    };
    let raw_in_match = match kind {
        Kind::Octa => "               { node.name = \"~alsa_input.hw_OCTACAPTURE*\" }\n",
        Kind::Quad => "               { node.name = \"~alsa_input.hw_QUADCAPTURE*\" }\n",
    };

    // Unlock the other Roland device so its node.lock-rate cannot fight the graph.
    let other = kind.other();
    let other_out = match other {
        Kind::Octa => format!(
            "               {{ node.name = \"~alsa_output.usb-Roland_OCTA-CAPTURE*\" }}\n\
                           {{ node.name = \"~alsa_output.hw_OCTACAPTURE*\" }}\n"
        ),
        Kind::Quad => format!(
            "               {{ node.name = \"~alsa_output.usb-Roland_QUAD-CAPTURE*\" }}\n\
                           {{ node.name = \"~alsa_output.hw_QUADCAPTURE*\" }}\n"
        ),
    };
    let other_in = match other {
        Kind::Octa => format!(
            "               {{ node.name = \"~alsa_input.usb-Roland_OCTA-CAPTURE*\" }}\n\
                           {{ node.name = \"~alsa_input.hw_OCTACAPTURE*\" }}\n"
        ),
        Kind::Quad => format!(
            "               {{ node.name = \"~alsa_input.usb-Roland_QUAD-CAPTURE*\" }}\n\
                           {{ node.name = \"~alsa_input.hw_QUADCAPTURE*\" }}\n"
        ),
    };
    let body = format!(
        "# Managed by `octa` — do not edit by hand.\n\
         # {kind} USB altsetting channel count for {hz} Hz.\n\
         monitor.alsa.rules = [\n\
           {{\n\
             matches = [\n\
         {out_match}\
             ]\n\
             actions = {{\n\
               update-props = {{\n\
                 {rate_pin}\
                 {profile_play_layout}\
                 {suspend}\
         {extra}\
               }}\n\
             }}\n\
           }}\n\
           {{\n\
             matches = [\n\
         {in_match}\
             ]\n\
             actions = {{\n\
               update-props = {{\n\
                 {rate_pin}\
                 {profile_cap_layout}\
                 {suspend}\
         {extra}\
               }}\n\
             }}\n\
           }}\n\
           {{\n\
             matches = [\n\
         {raw_out_match}\
             ]\n\
             actions = {{\n\
               update-props = {{\n\
                 audio.channels = {play_ch}\n\
                 audio.position = {play_pos}\n\
                 channelmix.lock-channels = true\n\
               }}\n\
             }}\n\
           }}\n\
           {{\n\
             matches = [\n\
         {raw_in_match}\
             ]\n\
             actions = {{\n\
               update-props = {{\n\
                 audio.channels = {cap_ch}\n\
                 audio.position = {cap_pos}\n\
                 channelmix.lock-channels = true\n\
               }}\n\
             }}\n\
           }}\n\
           {{\n\
             matches = [\n\
         {other_out}\
         {other_in}\
             ]\n\
             actions = {{\n\
               update-props = {{\n\
                 node.lock-rate = false\n\
                 session.suspend-timeout-seconds = 5\n\
               }}\n\
             }}\n\
           }}\n\
         ]\n"
    );
    fs::write(&path, body).with_context(|| format!("write {}", path.display()))?;
    println!("  PipeWire channels: playback {play_ch} / capture {cap_ch} (for {hz} Hz on {kind})");

    write_clock_conf(hz)?;
    Ok(())
}

fn clock_conf_path() -> Result<PathBuf> {
    let home = std::env::var_os("HOME").context("$HOME not set")?;
    Ok(PathBuf::from(home).join(".config/pipewire/pipewire.conf.d/99-octa-clock.conf"))
}

fn write_clock_conf(hz: u32) -> Result<()> {
    let path = clock_conf_path()?;
    if let Some(dir) = path.parent() {
        fs::create_dir_all(dir)?;
    }
    let body = format!(
        "# Managed by `octa` — do not edit by hand.\n\
         # Keep this equal to the active Capture hardware clock so ALSA opens match.\n\
         context.properties = {{\n\
             default.clock.rate          = {hz}\n\
             default.clock.allowed-rates = [ 44100, 48000, 96000, 192000 ]\n\
         }}\n"
    );
    fs::write(&path, body).with_context(|| format!("write {}", path.display()))?;
    Ok(())
}

fn default_profile_path() -> Result<PathBuf> {
    let home = std::env::var_os("HOME").context("$HOME not set")?;
    Ok(PathBuf::from(home).join(".local/state/wireplumber/default-profile"))
}

fn upsert_default_profile(card_name: &str, profile: &str) -> Result<()> {
    let path = default_profile_path()?;
    let key = card_name;
    let line = format!("{key}={profile}\n");
    let body = if path.exists() {
        fs::read_to_string(&path)?
    } else {
        String::from("[default-profile]\n")
    };
    let mut out = String::new();
    let mut replaced = false;
    for l in body.lines() {
        if l.starts_with(key) {
            out.push_str(&line);
            replaced = true;
        } else {
            out.push_str(l);
            out.push('\n');
        }
    }
    if !replaced {
        if !out.ends_with('\n') {
            out.push('\n');
        }
        out.push_str(&line);
    }
    if let Some(dir) = path.parent() {
        fs::create_dir_all(dir)?;
    }
    fs::write(&path, out)?;
    Ok(())
}

/// Look up the PipeWire card object name for a Roland Capture device.
pub fn find_card_name(kind: Kind) -> Option<String> {
    let out = Command::new("pactl")
        .args(["list", "short", "cards"])
        .output()
        .ok()?;
    let needle = kind.pw_match();
    for line in String::from_utf8_lossy(&out.stdout).lines() {
        if line.contains(needle) {
            return line.split_whitespace().nth(1).map(str::to_string);
        }
    }
    None
}

pub fn remember_profile_off(kind: Kind) -> Result<()> {
    if let Some(card) = find_card_name(kind) {
        upsert_default_profile(&card, "off")?;
    }
    Ok(())
}

pub fn remember_profile_active(kind: Kind) -> Result<()> {
    if let Some(card) = find_card_name(kind) {
        upsert_default_profile(&card, kind.card_profile())?;
    }
    Ok(())
}

/// Pause kernel autoset while `octa` owns the clock.
pub struct AutosetPause;

impl AutosetPause {
    fn path() -> &'static str {
        "/sys/module/snd_usb_audio/parameters/octa_capture_autoset"
    }

    pub fn enter() -> Self {
        let path = std::path::Path::new(Self::path());
        if path.exists() {
            if let Err(e) = fs::write(path, "N") {
                eprintln!(
                    "  (could not pause octa_capture_autoset: {e} — \
                     re-run scripts/install-kernel-module.sh or: sudo chmod 666 {})",
                    Self::path()
                );
            }
        }
        Self
    }
}

impl Drop for AutosetPause {
    fn drop(&mut self) {
        thread::sleep(Duration::from_millis(800));
        let path = std::path::Path::new(Self::path());
        if path.exists() {
            let _ = fs::write(path, "Y");
        }
    }
}

/// Preserve the user's selected microphone across a PipeWire/WirePlumber bounce.
/// Device synchronization may recreate node IDs, so retain the stable node name.
pub struct DefaultSourcePreserver(Option<String>);

impl DefaultSourcePreserver {
    pub fn capture() -> Self {
        let source = Command::new("pactl")
            .arg("get-default-source")
            .output()
            .ok()
            .filter(|output| output.status.success())
            .and_then(|output| {
                let value = String::from_utf8_lossy(&output.stdout).trim().to_string();
                (!value.is_empty()).then_some(value)
            });
        Self(source)
    }
}

impl Drop for DefaultSourcePreserver {
    fn drop(&mut self) {
        let Some(source) = &self.0 else { return };
        let mut consecutive_matches = 0;
        for _ in 0..20 {
            let requested = Command::new("pactl")
                .args(["set-default-source", source])
                .stdout(Stdio::null())
                .stderr(Stdio::null())
                .status()
                .is_ok_and(|status| status.success());
            thread::sleep(Duration::from_millis(100));
            let matches = requested
                && Command::new("pactl")
                    .arg("get-default-source")
                    .output()
                    .ok()
                    .filter(|output| output.status.success())
                    .is_some_and(|output| String::from_utf8_lossy(&output.stdout).trim() == source);
            consecutive_matches = if matches { consecutive_matches + 1 } else { 0 };
            // WirePlumber may apply its own default shortly after nodes return.
            // Require several stable observations instead of accepting the
            // first successful pactl request.
            if consecutive_matches == 3 {
                return;
            }
        }
    }
}

pub fn enable_suspend_for_unlock() -> Result<()> {
    let path = channels_conf_path()?;
    if path.exists() {
        let text = fs::read_to_string(&path)?;
        let text = text.replace(
            "session.suspend-timeout-seconds = 0",
            "session.suspend-timeout-seconds = 2",
        );
        fs::write(&path, text)?;
    }
    Ok(())
}

fn run(cmd: &str, args: &[&str]) -> Result<()> {
    let status = Command::new(cmd)
        .args(args)
        .stdout(Stdio::null())
        .stderr(Stdio::null())
        .status()
        .with_context(|| format!("failed to spawn {cmd}"))?;
    if !status.success() {
        return Ok(());
    }
    Ok(())
}

pub fn stop_stack_briefly() -> Result<()> {
    let _ = Command::new("systemctl")
        .args([
            "--user",
            "stop",
            "pipewire-pulse.socket",
            "pipewire.socket",
            "pipewire-pulse.service",
            "wireplumber.service",
            "pipewire.service",
        ])
        .status();
    thread::sleep(Duration::from_millis(800));
    Ok(())
}

pub fn start_stack() -> Result<()> {
    run(
        "systemctl",
        &[
            "--user",
            "start",
            "pipewire.socket",
            "pipewire-pulse.socket",
            "pipewire.service",
            "wireplumber.service",
            "pipewire-pulse.service",
        ],
    )?;
    for _ in 0..40 {
        if Command::new("pw-metadata")
            .args(["-n", "settings", "0"])
            .stdout(Stdio::null())
            .stderr(Stdio::null())
            .status()
            .map(|s| s.success())
            .unwrap_or(false)
        {
            return Ok(());
        }
        thread::sleep(Duration::from_millis(100));
    }
    bail!("PipeWire did not become ready");
}

pub fn ensure_stack() -> Result<()> {
    let ready = Command::new("pw-metadata")
        .args(["-n", "settings", "0"])
        .stdout(Stdio::null())
        .stderr(Stdio::null())
        .status()
        .map(|s| s.success())
        .unwrap_or(false);
    if ready {
        return Ok(());
    }
    start_stack()
}

pub fn restart_wireplumber() -> Result<()> {
    // Full restart so monitor.alsa.rules drop-ins are reloaded (try-restart
    // often leaves existing ALSA nodes with stale audio.rate / channel props).
    let _ = Command::new("systemctl")
        .args(["--user", "stop", "wireplumber.service"])
        .stdout(Stdio::null())
        .stderr(Stdio::null())
        .status();
    thread::sleep(Duration::from_millis(400));
    let _ = Command::new("systemctl")
        .args(["--user", "start", "wireplumber.service"])
        .stdout(Stdio::null())
        .stderr(Stdio::null())
        .status();
    for _ in 0..40 {
        if Command::new("pactl")
            .args(["info"])
            .stdout(Stdio::null())
            .stderr(Stdio::null())
            .status()
            .map(|s| s.success())
            .unwrap_or(false)
        {
            break;
        }
        thread::sleep(Duration::from_millis(100));
    }
    thread::sleep(Duration::from_millis(300));
    Ok(())
}

pub fn get_force_rate() -> Option<u32> {
    let out = Command::new("pw-metadata")
        .args(["-n", "settings", "0"])
        .output()
        .ok()?;
    let text = String::from_utf8_lossy(&out.stdout);
    for line in text.lines() {
        if !line.contains("clock.force-rate") {
            continue;
        }
        for part in line.split('\'') {
            if let Ok(v) = part.parse::<u32>() {
                if v == 0 {
                    return None;
                }
                if matches!(v, 44100 | 48000 | 96000 | 192000) {
                    return Some(v);
                }
            }
        }
    }
    None
}

pub fn channel_layout_changes(kind: Kind, from_hz: Option<u32>, to_hz: u32) -> bool {
    let (from_play, from_cap) = from_hz
        .map(|h| kind.channels(h))
        .unwrap_or_else(|| kind.channels(48000));
    let (to_play, to_cap) = kind.channels(to_hz);
    from_play != to_play || from_cap != to_cap
}

pub fn last_configured_rate() -> Option<u32> {
    let path = channels_conf_path().ok()?;
    let text = fs::read_to_string(path).ok()?;
    for line in text.lines() {
        // "# OCTA-CAPTURE USB altsetting channel count for 96000 Hz."
        if let Some(idx) = line.find(" for ") {
            let rest = &line[idx + 5..];
            let num: String = rest.chars().take_while(|c| c.is_ascii_digit()).collect();
            if let Ok(v) = num.parse() {
                return Some(v);
            }
        }
    }
    None
}

pub fn wait_force_rate(hz: u32) -> Result<()> {
    let want = hz.to_string();
    for _ in 0..20 {
        if get_force_rate() == Some(hz) {
            return Ok(());
        }
        let out = Command::new("pw-metadata")
            .args(["-n", "settings", "0"])
            .output()
            .ok();
        if let Some(out) = out {
            let text = String::from_utf8_lossy(&out.stdout);
            if text
                .lines()
                .any(|line| line.contains("clock.force-rate") && line.contains(&want))
            {
                return Ok(());
            }
        }
        thread::sleep(Duration::from_millis(50));
    }
    Ok(())
}

pub fn release_device(kind: Kind) -> Result<()> {
    release_device_ex(kind, false)
}

pub fn release_device_ex(kind: Kind, clear_force_rate: bool) -> Result<()> {
    if clear_force_rate {
        let _ = Command::new("pw-metadata")
            .args(["-n", "settings", "0", "clock.force-rate", "0"])
            .stdout(Stdio::null())
            .stderr(Stdio::null())
            .status();
    }

    move_defaults_off(kind);

    if let Some(card) = find_card_name(kind) {
        let _ = Command::new("pactl")
            .args(["set-card-profile", &card, "off"])
            .stdout(Stdio::null())
            .stderr(Stdio::null())
            .status();
    }
    thread::sleep(Duration::from_millis(400));
    Ok(())
}

/// Also idle the other Capture so a conflicting lock-rate cannot reopen it.
pub fn release_other(kind: Kind) -> Result<()> {
    release_device(kind.other())
}

fn move_defaults_off(kind: Kind) {
    let needle = kind.pw_match();
    if let Some(sink) = first_non_match_line(&["pactl", "list", "short", "sinks"], needle) {
        let _ = Command::new("pactl")
            .args(["set-default-sink", &sink])
            .stdout(Stdio::null())
            .stderr(Stdio::null())
            .status();
    }
    if let Some(src) = first_non_match_line(&["pactl", "list", "short", "sources"], needle) {
        if !src.contains(".monitor") {
            let _ = Command::new("pactl")
                .args(["set-default-source", &src])
                .stdout(Stdio::null())
                .stderr(Stdio::null())
                .status();
        }
    }
}

fn first_non_match_line(cmd: &[&str], needle: &str) -> Option<String> {
    let out = Command::new(cmd[0]).args(&cmd[1..]).output().ok()?;
    for line in String::from_utf8_lossy(&out.stdout).lines() {
        if line.contains(needle) || line.contains(".monitor") {
            continue;
        }
        let name = line.split_whitespace().nth(1)?;
        if !name.is_empty() {
            return Some(name.to_string());
        }
    }
    None
}

pub fn enable_device_profile(kind: Kind) -> Result<()> {
    let profile = kind.card_profile();
    let needle = kind.pw_match();
    for _ in 0..30 {
        if let Some(card) = find_card_name(kind) {
            let _ = Command::new("pactl")
                .args(["set-card-profile", &card, profile])
                .status();
            // WirePlumber may immediately flip Quad back to HiFi (higher priority).
            for _ in 0..15 {
                thread::sleep(Duration::from_millis(150));
                let _ = Command::new("pactl")
                    .args(["set-card-profile", &card, profile])
                    .stdout(Stdio::null())
                    .stderr(Stdio::null())
                    .status();
                if active_profile_is(&card, profile) {
                    return Ok(());
                }
            }
            return Ok(());
        }
        let present = Command::new("pactl")
            .args(["list", "short", "cards"])
            .output()
            .ok()
            .map(|o| String::from_utf8_lossy(&o.stdout).contains(needle))
            .unwrap_or(false);
        if !present {
            thread::sleep(Duration::from_millis(100));
            continue;
        }
    }
    Ok(())
}

fn active_profile_is(card: &str, want: &str) -> bool {
    let out = Command::new("pactl").args(["list", "cards"]).output().ok();
    let Some(out) = out else {
        return false;
    };
    let text = String::from_utf8_lossy(&out.stdout);
    let mut in_card = false;
    for line in text.lines() {
        if line.contains("Name:") {
            in_card = line.contains(card);
        }
        if in_card && line.contains("Active Profile:") {
            return line.contains(want);
        }
    }
    false
}

pub fn set_clock_rate(hz: u32) -> Result<()> {
    let rate = hz.to_string();
    let _ = Command::new("pw-metadata")
        .args([
            "-n",
            "settings",
            "0",
            "clock.allowed-rates",
            "[ 44100, 48000, 96000, 192000 ]",
        ])
        .stdout(Stdio::null())
        .stderr(Stdio::null())
        .status();
    let status = Command::new("pw-metadata")
        .args(["-n", "settings", "0", "clock.rate", &rate])
        .stdout(Stdio::null())
        .stderr(Stdio::null())
        .status()
        .context("pw-metadata")?;
    if !status.success() {
        bail!("pw-metadata clock.rate failed");
    }
    let status = Command::new("pw-metadata")
        .args(["-n", "settings", "0", "clock.force-rate", &rate])
        .stdout(Stdio::null())
        .stderr(Stdio::null())
        .status()
        .context("pw-metadata")?;
    if !status.success() {
        bail!("pw-metadata clock.force-rate failed");
    }
    Ok(())
}

fn find_sink_source(kind: Kind) -> (Option<String>, Option<String>) {
    let needle = kind.pw_match();
    let sinks = Command::new("pactl")
        .args(["list", "short", "sinks"])
        .output()
        .ok();
    let sources = Command::new("pactl")
        .args(["list", "short", "sources"])
        .output()
        .ok();

    // Prefer Main / pro nodes when HiFi splits are present.
    let sink = sinks.and_then(|o| {
        let text = String::from_utf8_lossy(&o.stdout);
        prefer_io_line(&text, needle, true)
    });
    let source = sources.and_then(|o| {
        let text = String::from_utf8_lossy(&o.stdout);
        prefer_io_line(&text, needle, false)
    });
    (sink, source)
}

fn prefer_io_line(text: &str, needle: &str, playback: bool) -> Option<String> {
    let lines: Vec<&str> = text
        .lines()
        .filter(|l| l.contains(needle) && !l.contains(".monitor"))
        .collect();
    let pick = |pred: &dyn Fn(&str) -> bool| {
        lines
            .iter()
            .find(|l| pred(l))
            .and_then(|l| l.split_whitespace().nth(1).map(str::to_string))
    };
    if playback {
        pick(&|l| l.contains("pro-output"))
            .or_else(|| pick(&|l| l.contains("HiFi__Line1__sink") || l.contains("Main")))
            .or_else(|| pick(&|_| true))
    } else {
        pick(&|l| l.contains("pro-input"))
            .or_else(|| {
                pick(&|l| l.contains("HiFi__Line6__source") || l.contains("HiFi__Line4__source"))
            })
            .or_else(|| pick(&|l| l.contains("HiFi")))
            .or_else(|| pick(&|_| true))
    }
}

pub fn set_device_default(kind: Kind) -> Result<()> {
    let needle = kind.pw_match();
    for _ in 0..40 {
        let (sink, source) = find_sink_source(kind);
        if sink.is_some() {
            if let Some(s) = sink {
                let _ = Command::new("pactl")
                    .args(["set-default-sink", &s])
                    .status();
                let _ = Command::new("pactl")
                    .args(["set-sink-volume", "@DEFAULT_SINK@", "100%"])
                    .status();
            }
            if let Some(s) = source {
                let _ = Command::new("pactl")
                    .args(["set-default-source", &s])
                    .status();
            }
            return Ok(());
        }
        let ready = Command::new("pactl")
            .args(["list", "short", "sinks"])
            .output()
            .ok()
            .map(|o| String::from_utf8_lossy(&o.stdout).contains(needle))
            .unwrap_or(false);
        if !ready {
            thread::sleep(Duration::from_millis(100));
            continue;
        }
        thread::sleep(Duration::from_millis(100));
    }
    Ok(())
}

pub fn print_clock() {
    let out = Command::new("pw-metadata")
        .args(["-n", "settings", "0"])
        .output();
    println!("PipeWire clock:");
    if let Ok(out) = out {
        for line in String::from_utf8_lossy(&out.stdout).lines() {
            if line.contains("clock.rate")
                || line.contains("clock.force-rate")
                || line.contains("clock.allowed-rates")
            {
                println!("  {line}");
            }
        }
    } else {
        println!("  (pw-metadata unavailable)");
    }
}

pub fn print_device_sink(kind: Kind) {
    let out = Command::new("pw-dump").output();
    println!("{} PipeWire nodes:", kind.label());
    let Ok(out) = out else {
        println!("  (pw-dump unavailable)");
        return;
    };
    let Ok(objects) = serde_json::from_slice::<serde_json::Value>(&out.stdout) else {
        println!("  (could not decode pw-dump output)");
        return;
    };
    let needle = kind.pw_match();
    let mut found = false;
    for object in objects.as_array().into_iter().flatten() {
        let Some(props) = object.pointer("/info/props") else {
            continue;
        };
        let name = props
            .get("node.name")
            .and_then(|v| v.as_str())
            .unwrap_or("");
        let class = props
            .get("media.class")
            .and_then(|v| v.as_str())
            .unwrap_or("");
        if !name.contains(needle) || !matches!(class, "Audio/Sink" | "Audio/Source") {
            continue;
        }
        let description = props
            .get("node.description")
            .and_then(|v| v.as_str())
            .unwrap_or(name);
        let channels = props
            .get("audio.channels")
            .and_then(json_scalar)
            .unwrap_or_else(|| "?".to_string());
        let rate = props
            .get("audio.rate")
            .and_then(json_scalar)
            .unwrap_or_else(|| "?".to_string());
        println!("  {class}: {description} — {channels} channels @ {rate} Hz");
        println!("    {name}");
        found = true;
    }
    if !found {
        println!("  (no active audio nodes)");
    }
}

fn json_scalar(value: &serde_json::Value) -> Option<String> {
    value
        .as_str()
        .map(str::to_string)
        .or_else(|| value.as_u64().map(|number| number.to_string()))
}
