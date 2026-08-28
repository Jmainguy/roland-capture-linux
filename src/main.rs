//! Roland OCTA-CAPTURE / QUAD-CAPTURE control for Linux.
//!
//! Changes the hardware sample-rate clock via vendor USB control, then matches PipeWire.

mod alsa;
mod compressor;
mod control;
mod device;
mod diagnostics;
mod identity;
mod kernel_mixer;
mod mixer;
mod model;
mod observe;
mod pipewire;
mod preset;
mod preset_apply;
mod probe;
mod quad;
mod reverb;
mod seq_midi;
mod state;
mod sysex;
mod usb_rate;
mod usb_telemetry;

use anyhow::{bail, Context, Result};
use clap::{Parser, Subcommand};
use device::{Kind, Select};
use std::path::PathBuf;
use std::thread;
use std::time::Duration;

#[derive(Parser)]
#[command(
    name = "octa",
    about = "Roland OCTA/QUAD-CAPTURE — sample rate + PipeWire sync",
    long_about = "Change the Capture hardware clock and sync PipeWire.\n\
                  \n\
                  `octa rate 96k` uses a Roland vendor USB control to switch the live clock.\n\
                  When both OCTA and QUAD are plugged in, pass `--device octa` or `--device quad`."
)]
struct Cli {
    /// Which interface to control (required when both are present).
    #[arg(long, value_enum, default_value_t = Select::Auto, global = true)]
    device: Select,

    #[command(subcommand)]
    command: Option<Commands>,
}

#[derive(Subcommand)]
enum Commands {
    /// Set hardware rate via USB, verify, then sync PipeWire.
    Rate {
        /// 44100, 48000, 96000, 192000 — or 44.1k / 48k / 96k / 192k
        rate: String,
        /// Skip USB rate switch; only force PipeWire (can mismatch hardware).
        #[arg(long)]
        no_wait: bool,
        /// Old flow: wait for front-panel SAMPLE FREQ + power cycle instead of USB.
        #[arg(long)]
        power_cycle: bool,
    },
    /// Probe the hardware rate and sync PipeWire.
    Sync,
    /// Show ALSA / PipeWire state.
    Status,
    /// Read and decode OCTA preamp and Direct Mix state without writing.
    MixerStatus,
    /// Reversibly verify one reverb-time step and restore the original value.
    ReverbVerify,
    /// Verify Directly Output Inputs, then restore the exact original state.
    DirectOutputVerify {
        /// Confirm that physical output routing will change briefly during this test.
        #[arg(long)]
        i_understand_routing_will_change: bool,
    },
    /// Release the device (idle streams; OCTA front-panel SAMPLE FREQ).
    Unlock,
    /// Watch hardware rate (USB poll); sync PipeWire when it changes.
    Watch {
        /// Poll interval in milliseconds.
        #[arg(long, default_value_t = 1000)]
        interval: u64,
        /// Only print changes; do not sync PipeWire.
        #[arg(long)]
        no_sync: bool,
    },
    /// Capture and summarize read-only MIDI traffic for protocol diagnostics.
    MidiMonitor {
        /// Capture duration in seconds.
        #[arg(long, default_value_t = 3)]
        seconds: u64,
    },
    /// Read the auxiliary USB interrupt interfaces without issuing writes.
    UsbMonitor {
        /// Capture duration per interface in seconds.
        #[arg(long, default_value_t = 2)]
        seconds: u64,
    },
    /// Export sanitized device/system diagnostics as JSON.
    SupportBundle {
        /// Destination JSON file.
        output: PathBuf,
    },
    /// Export all currently readable OCTA controls as a validated local preset.
    PresetExport {
        /// Destination preset JSON file.
        output: PathBuf,
        /// Human-readable preset name.
        #[arg(long, default_value = "Hardware snapshot")]
        name: String,
    },
    /// Transactionally apply all protocol-verified controls from a preset.
    PresetApply {
        /// Validated preset JSON file.
        input: PathBuf,
        /// Permit this transaction to turn on +48 V phantom power.
        #[arg(long)]
        allow_phantom: bool,
    },
}

#[derive(Clone, Copy, Debug)]
enum Rate {
    Hz44100,
    Hz48000,
    Hz96000,
    Hz192000,
}

impl Rate {
    fn hz(self) -> u32 {
        match self {
            Self::Hz44100 => 44100,
            Self::Hz48000 => 48000,
            Self::Hz96000 => 96000,
            Self::Hz192000 => 192000,
        }
    }

    fn enum_byte(self) -> u8 {
        match self {
            Self::Hz44100 => 0,
            Self::Hz48000 => 1,
            Self::Hz96000 => 2,
            Self::Hz192000 => 3,
        }
    }

    fn label(self) -> &'static str {
        match self {
            Self::Hz44100 => "44.1 kHz",
            Self::Hz48000 => "48 kHz",
            Self::Hz96000 => "96 kHz",
            Self::Hz192000 => "192 kHz",
        }
    }

    fn parse(s: &str) -> Result<Self> {
        let t = s.trim().to_ascii_lowercase().replace(' ', "");
        Ok(match t.as_str() {
            "44100" | "44.1k" | "44k" | "44100hz" | "44.1" => Self::Hz44100,
            "48000" | "48k" | "48000hz" | "48" => Self::Hz48000,
            "96000" | "96k" | "96000hz" | "96" => Self::Hz96000,
            "192000" | "192k" | "192000hz" | "192" => Self::Hz192000,
            _ => bail!("unknown rate {s:?} — use 44100, 48000, 96000, or 192000"),
        })
    }
}

fn main() -> Result<()> {
    let cli = Cli::parse();
    match cli.command {
        None => {
            print_help_hint();
            Ok(())
        }
        Some(Commands::Rate {
            rate,
            no_wait,
            power_cycle,
        }) => cmd_rate(
            cli.device.resolve()?,
            Rate::parse(&rate)?,
            no_wait,
            power_cycle,
        ),
        Some(Commands::Sync) => cmd_sync(cli.device.resolve()?),
        Some(Commands::Status) => cmd_status(cli.device),
        Some(Commands::MixerStatus) => cmd_mixer_status(cli.device.resolve()?),
        Some(Commands::ReverbVerify) => cmd_reverb_verify(cli.device.resolve()?),
        Some(Commands::DirectOutputVerify {
            i_understand_routing_will_change,
        }) => {
            if !i_understand_routing_will_change {
                bail!("refusing to change physical routing without --i-understand-routing-will-change");
            }
            let kind = cli.device.resolve()?;
            if kind != Kind::Octa {
                bail!("Directly Output Inputs is implemented only for OCTA-CAPTURE");
            }
            let card = alsa::find_card(kind).context("OCTA-CAPTURE is not present")?;
            let rate = usb_rate::get_hardware_rate(kind)?;
            preset_apply::verify_direct_output_inputs(card, rate)?;
            println!("Directly Output Inputs matched complete hardware readback; the exact original readable state was restored and confirmed.");
            Ok(())
        }
        Some(Commands::Unlock) => cmd_unlock(cli.device.resolve()?),
        Some(Commands::Watch { interval, no_sync }) => {
            cmd_watch(cli.device.resolve()?, interval, no_sync)
        }
        Some(Commands::MidiMonitor { seconds }) => cmd_midi_monitor(cli.device.resolve()?, seconds),
        Some(Commands::UsbMonitor { seconds }) => cmd_usb_monitor(cli.device.resolve()?, seconds),
        Some(Commands::SupportBundle { output }) => {
            let kind = match cli.device.resolve() {
                Ok(kind) => kind,
                Err(_) if cli.device == Select::Octa => Kind::Octa,
                Err(_) if cli.device == Select::Quad => Kind::Quad,
                Err(error) => return Err(error),
            };
            diagnostics::SupportBundle::collect(kind).write_json(&output)?;
            println!("Wrote sanitized support bundle to {}", output.display());
            Ok(())
        }
        Some(Commands::PresetExport { output, name }) => {
            let kind = cli.device.resolve()?;
            let card = alsa::find_card(kind).context("Roland Capture device is not present")?;
            if kind == Kind::Quad {
                quad::save(&output, &quad::read(card)?)?;
                println!(
                    "Exported verified QUAD-CAPTURE controls ({name}) to {}",
                    output.display()
                );
                return Ok(());
            }
            let settings = preset_apply::capture(card)?;
            preset::Preset::new(name, kind, settings)?.save(&output, kind)?;
            println!(
                "Exported verified hardware controls to {}",
                output.display()
            );
            println!(
                "Unmapped system settings are stored as typed defaults, not claimed readback."
            );
            Ok(())
        }
        Some(Commands::PresetApply {
            input,
            allow_phantom,
        }) => {
            let kind = cli.device.resolve()?;
            let card = alsa::find_card(kind).context("Roland Capture device is not present")?;
            if kind == Kind::Quad {
                let current = quad::read(card)?;
                let desired = quad::load(&input)?;
                quad::apply(card, &current, &desired)?;
                println!(
                    "Applied QUAD preset and confirmed every field by complete hardware readback."
                );
                return Ok(());
            }
            let rate = usb_rate::get_hardware_rate(kind)?;
            let preset = preset::Preset::load(&input, kind)?;
            preset_apply::apply(card, rate, &preset.settings, allow_phantom)?;
            println!(
                "Applied {:?} and confirmed all verified controls by hardware readback.",
                preset.name
            );
            Ok(())
        }
    }
}

fn cmd_mixer_status(kind: Kind) -> Result<()> {
    let card = alsa::find_card(kind)?;
    if kind == Kind::Quad {
        println!("{}", serde_json::to_string_pretty(&quad::read(card)?)?);
        return Ok(());
    }
    let snapshot = match mixer::read(card) {
        Ok(snapshot) => snapshot,
        Err(direct_error) if kernel_mixer::sensitivity_controls_present(card) => {
            let inputs = kernel_mixer::read_direct_input_switches(card)?;
            let wave_outputs = kernel_mixer::read_wave_outputs(card)?;
            let mut direct_mixers = kernel_mixer::read_direct_masters(card)?;
            for mixer in 0..model::DIRECT_MIXERS {
                direct_mixers[mixer].inputs = inputs[mixer].clone();
                direct_mixers[mixer].wave_outputs = wave_outputs[mixer].clone();
            }
            eprintln!(
                "Using native kernel mixer controls (direct SysEx backend unavailable: {direct_error})"
            );
            mixer::MixerSnapshot {
                device_globals_raw: kernel_mixer::read_device_globals(card)?,
                patch_bay: kernel_mixer::read_patch_bay(card)?,
                reverb: kernel_mixer::read_reverb(card)?,
                preamps: kernel_mixer::read_preamps(card)?,
                direct_mixers,
            }
        }
        Err(error) => return Err(error),
    };
    println!(
        "Device-global raw bytes: {:02X?}",
        snapshot.device_globals_raw
    );
    println!("Patch bay:");
    for (output, source) in snapshot.patch_bay.iter().enumerate() {
        println!(
            "  OUTPUT {}–{}: {:?}",
            output * 2 + 1,
            output * 2 + 2,
            source
        );
    }
    println!("Reverb: {:?}", snapshot.reverb);
    for (index, preamp) in snapshot.preamps.iter().enumerate() {
        println!(
            "Input {}: sens={:.1}dB phantom={} hi-z={} phase={} low-cut={} comp={} comp-link={}",
            index + 1,
            preamp.gain.db(),
            preamp.phantom_power,
            preamp.high_impedance,
            preamp.phase_inverted,
            preamp.low_cut_100_hz,
            preamp.compressor.enabled,
            preamp.compressor.stereo_link,
        );
    }
    for (mix_index, direct) in snapshot.direct_mixers.iter().enumerate() {
        println!("Direct Mix {}:", (b'A' + mix_index as u8) as char);
        for (channel, strip) in direct.inputs.iter().enumerate() {
            let level = if strip.level.get() == 0 {
                "-inf".to_owned()
            } else {
                format!("{:+}dB", i16::from(strip.level.get()) - 72)
            };
            println!(
                "  Input {}: stereo={} mute={} solo={} pan={:+}% level={}",
                channel + 1,
                strip.stereo_link,
                strip.muted,
                strip.soloed,
                strip.pan.get(),
                level,
            );
        }
    }
    Ok(())
}

fn cmd_reverb_verify(kind: Kind) -> Result<()> {
    if kind != Kind::Octa {
        bail!("reverb verification is implemented only for OCTA-CAPTURE");
    }
    let card = alsa::find_card(kind)?;
    let snapshot = if kernel_mixer::sensitivity_controls_present(card) {
        kernel_mixer::read_reverb(card)?
    } else {
        mixer::read(card)?.reverb
    };
    if snapshot.kind == model::ReverbType::Off {
        bail!("reverb is Off; select a reverb type before running this verifier");
    }
    let original = snapshot.clone();
    let probe_raw = if original.time.get() < reverb::TIME_MAX {
        original.time.get() + 1
    } else {
        original.time.get() - 1
    };
    let mut probe = original.clone();
    probe.time = model::RawLevel::new(probe_raw);
    let changed = match mixer::apply_reverb(card, &original, &probe) {
        Ok(changed) => changed,
        Err(probe_error) => {
            let observed = if kernel_mixer::sensitivity_controls_present(card) {
                kernel_mixer::read_reverb(card)
            } else {
                mixer::read(card).map(|snapshot| snapshot.reverb)
            };
            if let Ok(observed) = observed {
                if observed != original {
                    mixer::apply_reverb(card, &observed, &original).with_context(|| {
                        format!(
                            "CRITICAL: probe failed ({probe_error:#}) and restoration also failed"
                        )
                    })?;
                }
            }
            return Err(probe_error).context("apply reversible reverb-time probe");
        }
    };
    if changed.time != probe.time {
        bail!("reverb probe did not reach the requested value");
    }
    match mixer::apply_reverb(card, &changed, &original) {
        Ok(restored) if restored == original => {
            println!(
                "Verified reverb {:?} time {}→{}→{} with full hardware readback.",
                original.kind,
                original.time.get(),
                probe.time.get(),
                restored.time.get()
            );
            Ok(())
        }
        Ok(restored) => bail!(
            "reverb restoration readback mismatch: expected {:?}, got {:?}",
            original,
            restored
        ),
        Err(error) => Err(error).context(
            "CRITICAL: reverb probe changed hardware but restoration failed; restore manually",
        ),
    }
}

fn cmd_usb_monitor(kind: Kind, seconds: u64) -> Result<()> {
    println!(
        "Observing {} auxiliary USB telemetry (read-only)…",
        kind.label()
    );
    for interface in [3, 4] {
        let capture = usb_telemetry::capture(kind, interface, seconds)?;
        println!(
            "  interface {} endpoint 0x{:02x}: {} frame(s), {} unique",
            capture.interface,
            capture.endpoint,
            capture.frames,
            capture.unique.len()
        );
        for (frame, count) in capture.unique.iter().take(20) {
            if interface == 3 {
                match usb_telemetry::decode_clock_frame(frame) {
                    Ok(clock) => println!(
                        "    {frame:02x?} x{count} => sequence={} source={} external_hz={} lock={} rate_flag={}",
                        clock.sequence,
                        if clock.external { "external" } else { "internal" },
                        clock.external_hz,
                        if clock.locked { "locked" } else { "unlocked" },
                        u8::from(clock.rate_flag)
                    ),
                    Err(_) => println!("    {frame:02x?} x{count}"),
                }
            } else {
                println!("    {frame:02x?} x{count}");
            }
        }
        if capture.unique.len() > 20 {
            println!("    … {} more unique frame(s)", capture.unique.len() - 20);
        }
    }
    Ok(())
}

fn cmd_midi_monitor(kind: Kind, seconds: u64) -> Result<()> {
    let port = alsa::find_midi(kind).with_context(|| format!("{} MIDI not found", kind.label()))?;
    println!(
        "Observing {port} for {} second(s) (read-only)…",
        seconds.max(1)
    );
    let summary = observe::capture_midi(&port, seconds)?;
    println!("{} MIDI messages", summary.messages);
    for ((channel, controller), range) in summary.control_changes {
        println!(
            "  CC channel={} controller={} count={} range={}..={} last={}",
            channel + 1,
            controller,
            range.count,
            range.minimum,
            range.maximum,
            range.last
        );
    }
    for (address, data) in summary.roland_data {
        println!("  Roland DT1 address={address:02x?} data={data:02x?}");
    }
    if summary.other_messages > 0 {
        println!("  other messages={}", summary.other_messages);
    }
    Ok(())
}

fn print_help_hint() {
    eprintln!(
        "Usage:\n  \
         octa rate 96k                  Switch hardware clock (USB) + sync PipeWire\n  \
         octa --device quad rate 192k   Same for QUAD-CAPTURE\n  \
         octa sync                      Read hardware rate (USB) → PipeWire\n  \
         octa watch                     Follow USB rate changes → PipeWire\n  \
         octa status                    Show ALSA / PipeWire\n  \
         octa unlock                    Release device (idle streams)\n"
    );
}

fn cmd_rate(kind: Kind, rate: Rate, no_wait: bool, power_cycle: bool) -> Result<()> {
    let hz = rate.hz();
    println!("Target: {} @ {} ({hz} Hz)", kind.label(), rate.label());

    if !no_wait && !power_cycle {
        control::set_sample_rate(kind, hz)?;
        println!("OK — {} + PipeWire at {hz} Hz", kind.label());
        return Ok(());
    }

    let card = alsa::find_card(kind).with_context(|| format!("{} not found", kind.label()))?;
    let _lock = RateLock::acquire(hz);
    let _autoset = pipewire::AutosetPause::enter();

    if no_wait {
        pipewire::release_device(kind)?;
        let _ = pipewire::release_other(kind);
        pipewire::configure_channels_for_rate(kind, hz)?;
        pipewire::ensure_stack()?;
        thread::sleep(Duration::from_millis(300));
        pipewire::set_clock_rate(hz)?;
        pipewire::enable_device_profile(kind)?;
        pipewire::set_device_default(kind)?;
        println!("PipeWire forced to {hz} Hz (--no-wait; hardware may still differ)");
        return Ok(());
    }

    if power_cycle {
        if kind != Kind::Octa {
            bail!("--power-cycle is only for OCTA-CAPTURE (front-panel SAMPLE FREQ)");
        }
        drop(_lock);
        return cmd_rate_power_cycle(rate);
    }

    pipewire::release_device(kind)?;
    let _ = pipewire::release_other(kind);
    for _ in 0..25 {
        if alsa::streams_idle(card) {
            break;
        }
        thread::sleep(Duration::from_millis(100));
    }
    thread::sleep(Duration::from_millis(200));

    if kind == Kind::Octa {
        if let Some(midi) = alsa::find_midi(kind) {
            if let Err(e) = sysex::write_sample_rate(&midi, rate.enum_byte()) {
                eprintln!("  (SysEx preference write skipped: {e})");
            }
        }
    }

    println!("Switching {} hardware clock via USB…", kind.label());
    usb_rate::set_hardware_rate(kind, hz)?;
    confirm_hardware_rate(kind, hz)?;
    apply_pipewire(kind, hz)?;
    println!("OK — {} + PipeWire at {hz} Hz", kind.label());
    Ok(())
}

fn confirm_hardware_rate(kind: Kind, hz: u32) -> Result<()> {
    match usb_rate::get_hardware_rate(kind) {
        Ok(actual) if actual == hz => {
            println!("  hardware confirmed at {hz} Hz (USB)");
            return Ok(());
        }
        Ok(actual) => {
            eprintln!("  USB reports {actual} Hz, expected {hz}; falling back to PCM probe…");
        }
        Err(e) => {
            eprintln!("  USB rate read failed ({e}); falling back to PCM probe…");
        }
    }
    let card = alsa::find_card(kind)?;
    let actual =
        probe::detect_rate(kind, card, Some(hz)).context("could not probe hardware rate")?;
    if actual != hz {
        pipewire::start_stack()?;
        bail!("hardware is at {actual} Hz, not {hz}");
    }
    println!("  hardware confirmed at {hz} Hz (PCM probe)");
    Ok(())
}

fn apply_pipewire(kind: Kind, hz: u32) -> Result<()> {
    let prev = pipewire::last_configured_rate();
    let layout_change = pipewire::channel_layout_changes(kind, prev, hz);

    pipewire::configure_channels_for_rate(kind, hz)?;

    // Quad HiFi↔pro-audio / 2ch↔4ch needs a clean PipeWire start so nodes are
    // created under the new monitor.alsa.rules. OCTA can usually get by with a
    // WirePlumber-only bounce except on 192 kHz layout changes.
    let full_bounce = kind == Kind::Quad || layout_change;

    pipewire::release_device(kind)?;
    let _ = pipewire::release_other(kind);
    let _ = pipewire::remember_profile_off(kind);

    if full_bounce {
        pipewire::stop_stack_briefly()?;
        if let Ok(card) = alsa::find_card(kind) {
            for _ in 0..20 {
                if alsa::streams_idle(card) {
                    break;
                }
                thread::sleep(Duration::from_millis(100));
            }
        }
        usb_rate::set_hardware_rate(kind, hz)?;
        pipewire::start_stack()?;
    } else {
        pipewire::ensure_stack()?;
        pipewire::restart_wireplumber()?;
        thread::sleep(Duration::from_millis(400));
        pipewire::release_device(kind)?;
        if let Ok(card) = alsa::find_card(kind) {
            for _ in 0..20 {
                if alsa::streams_idle(card) {
                    break;
                }
                thread::sleep(Duration::from_millis(100));
            }
        }
        usb_rate::set_hardware_rate(kind, hz)?;
    }

    pipewire::set_clock_rate(hz)?;
    pipewire::wait_force_rate(hz)?;
    pipewire::enable_device_profile(kind)?;
    pipewire::set_device_default(kind)?;
    let _ = pipewire::remember_profile_active(kind);

    thread::sleep(Duration::from_millis(600));
    if let Ok(actual) = usb_rate::get_hardware_rate(kind) {
        if actual != hz {
            eprintln!("  hardware drifted to {actual} Hz; re-applying {hz}…");
            pipewire::release_device(kind)?;
            thread::sleep(Duration::from_millis(300));
            usb_rate::set_hardware_rate(kind, hz)?;
            pipewire::set_clock_rate(hz)?;
            pipewire::enable_device_profile(kind)?;
            pipewire::set_device_default(kind)?;
            thread::sleep(Duration::from_millis(400));
        }
    }
    Ok(())
}

fn sync_pipewire_to(kind: Kind, hz: u32) -> Result<()> {
    let _default_source = pipewire::DefaultSourcePreserver::capture();
    let _guard = RateLock::acquire(hz);
    let _autoset = pipewire::AutosetPause::enter();
    apply_pipewire(kind, hz)
}

struct RateLock;

impl RateLock {
    fn path() -> std::path::PathBuf {
        std::env::temp_dir().join("octa-rate.lock")
    }

    fn intent_path() -> std::path::PathBuf {
        std::env::temp_dir().join("octa-rate.intent")
    }

    fn acquire(hz: u32) -> Self {
        let _ = std::fs::write(Self::path(), format!("{hz}\n"));
        let _ = std::fs::write(Self::intent_path(), format!("{hz}\n"));
        Self
    }

    fn held() -> bool {
        let p = Self::path();
        let Ok(meta) = std::fs::metadata(&p) else {
            return false;
        };
        if let Ok(modified) = meta.modified() {
            if modified.elapsed().unwrap_or_default() > Duration::from_secs(30) {
                let _ = std::fs::remove_file(&p);
                return false;
            }
        }
        true
    }

    fn recent_intent() -> Option<u32> {
        let p = Self::intent_path();
        let meta = std::fs::metadata(&p).ok()?;
        let modified = meta.modified().ok()?;
        if modified.elapsed().unwrap_or_default() > Duration::from_secs(60) {
            return None;
        }
        let text = std::fs::read_to_string(&p).ok()?;
        text.trim().parse().ok()
    }
}

impl Drop for RateLock {
    fn drop(&mut self) {
        let _ = std::fs::remove_file(Self::path());
    }
}

fn cmd_rate_power_cycle(rate: Rate) -> Result<()> {
    use std::time::Instant;

    let kind = Kind::Octa;
    let hz = rate.hz();
    pipewire::release_device(kind)?;
    if let Some(midi) = alsa::find_midi(kind) {
        let _ = sysex::write_sample_rate(&midi, rate.enum_byte());
    }

    println!();
    println!("Power-cycle mode (front-panel SAMPLE FREQ):");
    println!(
        "  1. On the OCTA: hold DISPLAY → SAMPLE FREQ → {}",
        rate.label()
    );
    println!("  2. Power the OCTA OFF, then ON (USB can stay plugged in)");
    println!("Waiting for the OCTA to leave and return…");

    pipewire::stop_stack_briefly()?;
    let timeout = Duration::from_secs(120);
    let start = Instant::now();
    let mut saw_gone = !alsa::card_present(kind);
    while start.elapsed() < timeout {
        let present = alsa::card_present(kind);
        if !saw_gone && !present {
            saw_gone = true;
            println!("  OCTA disconnected…");
        }
        if saw_gone && present {
            thread::sleep(Duration::from_millis(1500));
            if alsa::card_present(kind) {
                break;
            }
        }
        thread::sleep(Duration::from_millis(300));
    }
    if !saw_gone {
        bail!("timed out — OCTA never powered off");
    }
    if !alsa::card_present(kind) {
        bail!("timed out waiting for OCTA to come back");
    }

    let card = alsa::find_card(kind)?;
    println!("  back as ALSA card {card}");
    confirm_hardware_rate(kind, hz)?;
    apply_pipewire(kind, hz)?;
    println!("OK — OCTA + PipeWire at {hz} Hz");
    Ok(())
}

fn cmd_sync(kind: Kind) -> Result<()> {
    println!("Reading {} hardware rate via USB…", kind.label());
    let _card = alsa::find_card(kind)?;

    let hz = match usb_rate::get_hardware_rate(kind) {
        Ok(hz) => {
            println!("  detected {hz} Hz (USB)");
            hz
        }
        Err(e) => {
            eprintln!("  USB rate read failed ({e}); PCM probing…");
            pipewire::stop_stack_briefly()?;
            let card = alsa::find_card(kind)?;
            let hz = probe::detect_rate(kind, card, None)?;
            println!("  detected {hz} Hz (PCM probe)");
            hz
        }
    };

    let _ = pipewire::release_other(kind);
    sync_pipewire_to(kind, hz)?;
    println!("OK — PipeWire synced to {hz} Hz");
    Ok(())
}

fn cmd_watch(kind: Kind, interval_ms: u64, no_sync: bool) -> Result<()> {
    use std::time::Instant;

    let interval = Duration::from_millis(interval_ms.max(200));
    println!(
        "Watching {} hardware rate via USB (every {} ms)…",
        kind.label(),
        interval.as_millis()
    );
    if no_sync {
        println!("(--no-sync: will only print changes)");
    } else {
        println!("(on change: sync PipeWire once rate is stable — Ctrl+C to stop)");
    }

    let mut last: Option<u32> = None;
    let mut candidate: Option<(u32, u8)> = None;
    let mut ignore_until: Option<Instant> = None;
    let mut was_locked = false;

    loop {
        let locked = RateLock::held();
        if locked {
            was_locked = true;
            candidate = None;
            thread::sleep(interval);
            continue;
        }
        if was_locked {
            was_locked = false;
            if let Some(hz) = RateLock::recent_intent() {
                last = Some(hz);
                candidate = None;
                ignore_until = Some(Instant::now() + Duration::from_secs(3));
                println!("hardware sample rate is {hz} Hz (from octa rate)");
            }
            thread::sleep(interval);
            continue;
        }

        if let Some(until) = ignore_until {
            if Instant::now() < until {
                thread::sleep(interval);
                continue;
            }
            ignore_until = None;
            candidate = None;
            thread::sleep(interval);
            continue;
        }

        match usb_rate::get_hardware_rate(kind) {
            Ok(hz) => match last {
                None => {
                    println!("hardware sample rate is {hz} Hz");
                    last = Some(hz);
                    candidate = None;
                }
                Some(prev) if prev != hz => {
                    let count = match candidate {
                        Some((c, n)) if c == hz => n + 1,
                        _ => 1,
                    };
                    candidate = Some((hz, count));
                    if count >= 3 {
                        if pipewire::get_force_rate() == Some(hz) {
                            println!(
                                "hardware sample rate changed {prev} -> {hz} Hz (already synced)"
                            );
                            last = Some(hz);
                            candidate = None;
                            thread::sleep(interval);
                            continue;
                        }
                        println!("hardware sample rate changed {prev} -> {hz} Hz");
                        last = Some(hz);
                        candidate = None;
                        if !no_sync {
                            if let Err(e) = sync_pipewire_to(kind, hz) {
                                eprintln!("  sync failed: {e}");
                            } else {
                                println!("  PipeWire synced to {hz} Hz");
                            }
                            ignore_until = Some(Instant::now() + Duration::from_secs(3));
                        }
                    }
                }
                _ => {
                    candidate = None;
                }
            },
            Err(e) => {
                if last.is_some() {
                    eprintln!("  (rate read failed: {e})");
                    last = None;
                    candidate = None;
                }
            }
        }
        thread::sleep(interval);
    }
}

fn cmd_status(select: Select) -> Result<()> {
    let kinds: Vec<Kind> = match select {
        Select::Auto => [Kind::Octa, Kind::Quad]
            .into_iter()
            .filter(|k| alsa::card_present(*k))
            .collect(),
        Select::Octa => vec![Kind::Octa],
        Select::Quad => vec![Kind::Quad],
    };

    if kinds.is_empty() {
        println!("No Roland Capture device present.");
    }

    for kind in kinds {
        match alsa::find_card(kind) {
            Ok(card) => {
                println!("{}: ALSA card {card} ({})", kind.label(), kind.usbid());
                alsa::print_stream_summary(card);
                if kind == Kind::Octa {
                    match kernel_mixer::read_clock_state(card) {
                        Ok(clock) if !clock.external => {
                            println!("  Clock source / sync: Internal");
                        }
                        Ok(clock) if clock.locked => println!(
                            "  Clock source / sync: External ({} Hz, locked)",
                            clock.external_hz
                        ),
                        Ok(_) => println!("  Clock source / sync: External (unlocked)"),
                        Err(error) => println!("  Clock source / sync: (unavailable: {error})"),
                    }
                }
            }
            Err(_) => println!("{}: (not present)", kind.label()),
        }
        match usb_rate::get_rate_state(kind) {
            Ok(state) => {
                println!("  Hardware clock (USB): {} Hz", state.hz);
                println!(
                    "  Vendor rate-response status: 0x{:02x} (separate byte; meaning unassigned)",
                    state.vendor_status
                );
            }
            Err(e) => println!("  Hardware clock (USB): (unavailable: {e})"),
        }
        if let Some(midi) = alsa::find_midi(kind) {
            println!("  MIDI: {midi}");
        }
        pipewire::print_device_sink(kind);
        println!();
    }

    pipewire::print_clock();
    println!();
    println!("Note: PipeWire force-rate can disagree with the hardware clock.");
    println!("      Run `octa sync` (with `--device` if both are plugged in).");
    Ok(())
}

fn cmd_unlock(kind: Kind) -> Result<()> {
    println!("Releasing {}…", kind.label());
    let _ = pipewire::enable_suspend_for_unlock();
    pipewire::release_device_ex(kind, true)?;
    let _ = pipewire::restart_wireplumber();

    let mut idle = false;
    if let Ok(card) = alsa::find_card(kind) {
        for _ in 0..25 {
            if alsa::streams_idle(card) {
                idle = true;
                break;
            }
            thread::sleep(Duration::from_millis(200));
        }
    }

    if idle {
        println!("OK — USB audio streams are idle.");
    } else {
        println!(
            "Streams may still be busy; close apps using the {} and retry.",
            kind.label()
        );
    }
    println!();
    if kind == Kind::Octa {
        println!("Now on the OCTA: hold DISPLAY → SAMPLE FREQ → pick a rate.");
        println!("(If the menu still says locked, power-cycle after setting it.)");
        println!();
    } else {
        println!("QUAD-CAPTURE has no rate panel — use `octa --device quad rate …`.");
        println!();
    }
    println!("When finished:");
    let flag = match kind {
        Kind::Octa => "octa",
        Kind::Quad => "quad",
    };
    println!("  octa --device {flag} sync");
    println!("  octa --device {flag} rate 96k");
    Ok(())
}
