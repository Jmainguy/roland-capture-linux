use eframe::egui;
use octa::device::Kind;
use octa::model::{
    AutoSensDuration, CaptureSettings, DirectMixer, MixerStrip, PatchSource, Preamp, RawLevel,
    Reverb, ReverbType, DIRECT_MIXERS, INPUT_MIX_CHANNELS, OUTPUT_PAIRS, PREAMP_CHANNELS,
};
use octa::state::DeviceSnapshot;
use serde::{Deserialize, Serialize};
use std::sync::mpsc::{self, Receiver};
use std::thread;
use std::time::{Duration, Instant};

fn main() -> eframe::Result<()> {
    octa::meter::reset_shutdown();
    let _ = ctrlc::set_handler(octa::meter::request_shutdown);
    let options = eframe::NativeOptions {
        viewport: egui::ViewportBuilder::default()
            .with_inner_size([1120.0, 720.0])
            .with_min_inner_size([820.0, 560.0])
            .with_decorations(false)
            .with_title("Roland Capture Control"),
        ..Default::default()
    };

    eframe::run_native(
        "Roland Capture Control",
        options,
        Box::new(|cc| Ok(Box::new(ControlPanel::new(cc)))),
    )
}

const PREFERENCES_KEY: &str = "octa-control-ui-v1";
#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, Deserialize)]
enum Page {
    Status,
    Inputs,
    DirectMix,
    PatchBay,
    Outputs,
    Presets,
    Diagnostics,
}

#[derive(Clone, Copy, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
enum ThemeChoice {
    #[default]
    System,
    Light,
    Dark,
}

#[derive(Clone, Copy, Debug)]
enum AutoSensAction {
    Started,
    Finished,
    Cancelled,
}

impl ThemeChoice {
    fn label(self) -> &'static str {
        match self {
            Self::System => "System theme",
            Self::Light => "Light",
            Self::Dark => "Dark",
        }
    }

    fn apply(self, context: &egui::Context) {
        context.set_theme(match self {
            Self::System => egui::ThemePreference::System,
            Self::Light => egui::ThemePreference::Light,
            Self::Dark => egui::ThemePreference::Dark,
        });
    }
}

#[derive(Clone, Copy, Debug, Serialize, Deserialize)]
#[serde(default)]
struct UiPreferences {
    page: Page,
    selected: Kind,
    selected_input: usize,
    selected_mixer: usize,
    theme: ThemeChoice,
}

impl Default for UiPreferences {
    fn default() -> Self {
        Self {
            page: Page::Status,
            selected: Kind::Octa,
            selected_input: 0,
            selected_mixer: 0,
            theme: ThemeChoice::System,
        }
    }
}

impl Page {
    const ALL: [Self; 7] = [
        Self::Status,
        Self::Inputs,
        Self::DirectMix,
        Self::PatchBay,
        Self::Outputs,
        Self::Presets,
        Self::Diagnostics,
    ];

    fn label(self) -> &'static str {
        match self {
            Self::Status => "Status",
            Self::Inputs => "Inputs",
            Self::DirectMix => "Direct Mix",
            Self::PatchBay => "Patch Bay",
            Self::Outputs => "Outputs",
            Self::Presets => "Presets",
            Self::Diagnostics => "Diagnostics",
        }
    }
}

struct ControlPanel {
    page: Page,
    selected: Kind,
    statuses: Vec<DeviceSnapshot>,
    updates: Receiver<Vec<DeviceSnapshot>>,
    meter_updates: Option<Receiver<octa::meter::MeterFrame>>,
    meter_card: Option<u32>,
    meter_frame: Option<octa::meter::MeterFrame>,
    operation: Option<Receiver<Result<u32, String>>>,
    preamp_operation: Option<Receiver<Result<(usize, Preamp), String>>>,
    direct_operation: Option<Receiver<Result<(usize, usize, MixerStrip), String>>>,
    wave_operation: Option<Receiver<Result<(usize, usize, MixerStrip), String>>>,
    master_operation: Option<Receiver<Result<(usize, DirectMixer), String>>>,
    patch_operation: Option<Receiver<Result<(usize, PatchSource), String>>>,
    patch_profile_operation: Option<Receiver<Result<[PatchSource; OUTPUT_PAIRS], String>>>,
    direct_output_confirmed: bool,
    reverb_operation: Option<Receiver<Result<Reverb, String>>>,
    clear_operation: Option<Receiver<Result<octa::mixer::MixerSnapshot, String>>>,
    auto_sens_operation:
        Option<Receiver<Result<(AutoSensAction, [Preamp; PREAMP_CHANNELS]), String>>>,
    preset_operation: Option<Receiver<Result<octa::preset_apply::ApplyResult, String>>>,
    quad_operation: Option<Receiver<Result<octa::quad::QuadSettings, String>>>,
    operation_message: Option<Result<String, String>>,
    hardware_preamps: Option<[Preamp; PREAMP_CHANNELS]>,
    kernel_sensitivity_backend: bool,
    kernel_direct_switch_backend: bool,
    hardware_direct_mixers: Option<[DirectMixer; DIRECT_MIXERS]>,
    hardware_patch_bay: Option<[PatchSource; OUTPUT_PAIRS]>,
    hardware_reverb: Option<Reverb>,
    quad_hardware: Option<octa::quad::QuadSettings>,
    quad_draft: Option<octa::quad::QuadSettings>,
    preamp_dirty: [bool; PREAMP_CHANNELS],
    direct_dirty: [[bool; INPUT_MIX_CHANNELS]; DIRECT_MIXERS],
    wave_dirty: [[bool; INPUT_MIX_CHANNELS]; DIRECT_MIXERS],
    master_dirty: [bool; DIRECT_MIXERS],
    patch_dirty: [bool; OUTPUT_PAIRS],
    reverb_dirty: bool,
    auto_sens_selected: [bool; PREAMP_CHANNELS],
    auto_sens_confirmed: bool,
    auto_sens_running: bool,
    auto_sens_pending_duration: AutoSensDuration,
    auto_sens_deadline: Option<Instant>,
    phantom_confirmed: bool,
    preset_phantom_confirmed: bool,
    draft: CaptureSettings,
    saved_draft: CaptureSettings,
    preset_name: String,
    file_message: Option<Result<String, String>>,
    selected_input: usize,
    selected_mixer: usize,
    theme: ThemeChoice,
}

impl ControlPanel {
    fn new(cc: &eframe::CreationContext<'_>) -> Self {
        let preferences: UiPreferences = cc
            .storage
            .and_then(|storage| eframe::get_value(storage, PREFERENCES_KEY))
            .unwrap_or_default();
        preferences.theme.apply(&cc.egui_ctx);
        let (sender, updates) = mpsc::channel();
        let repaint = cc.egui_ctx.clone();

        thread::spawn(move || loop {
            let statuses = octa::state::read_all();
            if sender.send(statuses).is_err() {
                break;
            }
            repaint.request_repaint();
            thread::sleep(Duration::from_secs(1));
        });

        Self {
            page: preferences.page,
            selected: preferences.selected,
            statuses: Vec::new(),
            updates,
            meter_updates: None,
            meter_card: None,
            meter_frame: None,
            operation: None,
            preamp_operation: None,
            direct_operation: None,
            wave_operation: None,
            master_operation: None,
            patch_operation: None,
            patch_profile_operation: None,
            direct_output_confirmed: false,
            reverb_operation: None,
            clear_operation: None,
            auto_sens_operation: None,
            preset_operation: None,
            quad_operation: None,
            operation_message: None,
            hardware_preamps: None,
            kernel_sensitivity_backend: false,
            kernel_direct_switch_backend: false,
            hardware_direct_mixers: None,
            hardware_patch_bay: None,
            hardware_reverb: None,
            quad_hardware: None,
            quad_draft: None,
            preamp_dirty: [false; PREAMP_CHANNELS],
            direct_dirty: [[false; INPUT_MIX_CHANNELS]; DIRECT_MIXERS],
            wave_dirty: [[false; INPUT_MIX_CHANNELS]; DIRECT_MIXERS],
            master_dirty: [false; DIRECT_MIXERS],
            patch_dirty: [false; OUTPUT_PAIRS],
            reverb_dirty: false,
            auto_sens_selected: [true, false, false, false, false, false, false, false],
            auto_sens_confirmed: false,
            auto_sens_running: false,
            auto_sens_pending_duration: AutoSensDuration::Manual,
            auto_sens_deadline: None,
            phantom_confirmed: false,
            preset_phantom_confirmed: false,
            draft: CaptureSettings::default(),
            saved_draft: CaptureSettings::default(),
            preset_name: "Untitled preset".to_owned(),
            file_message: None,
            selected_input: preferences.selected_input.min(PREAMP_CHANNELS - 1),
            selected_mixer: preferences.selected_mixer.min(3),
            theme: preferences.theme,
        }
    }

    fn selected_status(&self) -> Option<&DeviceSnapshot> {
        self.statuses
            .iter()
            .find(|status| status.kind == self.selected)
    }

    fn connection_label(&self) -> &'static str {
        match self.selected_status().and_then(|status| status.card) {
            Some(_) => "Connected",
            None => "Offline",
        }
    }

    fn write_in_progress(&self) -> bool {
        self.operation.is_some()
            || self.preamp_operation.is_some()
            || self.direct_operation.is_some()
            || self.wave_operation.is_some()
            || self.master_operation.is_some()
            || self.patch_operation.is_some()
            || self.patch_profile_operation.is_some()
            || self.reverb_operation.is_some()
            || self.clear_operation.is_some()
            || self.auto_sens_operation.is_some()
            || self.preset_operation.is_some()
            || self.quad_operation.is_some()
    }

    fn clear_disconnected_hardware_state(&mut self) {
        self.hardware_preamps = None;
        self.hardware_direct_mixers = None;
        self.hardware_patch_bay = None;
        self.hardware_reverb = None;
        self.quad_hardware = None;
        self.quad_draft = None;
        self.kernel_sensitivity_backend = false;
        self.kernel_direct_switch_backend = false;
        self.meter_frame = None;
        self.phantom_confirmed = false;
        self.preset_phantom_confirmed = false;
        self.direct_output_confirmed = false;
        self.auto_sens_confirmed = false;
    }

    fn draw_status(&mut self, ui: &mut egui::Ui) {
        ui.heading("Device status");
        ui.add_space(12.0);
        egui::Grid::new("device-status")
            .num_columns(2)
            .spacing([32.0, 14.0])
            .show(ui, |ui| {
                ui.strong("Device");
                ui.label(self.selected.label());
                ui.end_row();
                ui.strong("Connection");
                ui.label(self.connection_label());
                ui.end_row();
                ui.strong("ALSA card");
                ui.label(
                    self.selected_status()
                        .and_then(|status| status.card)
                        .map(|card| format!("card{card}"))
                        .unwrap_or_else(|| "—".into()),
                );
                ui.end_row();
                ui.strong("Sample rate");
                ui.label(
                    self.selected_status()
                        .and_then(|status| status.rate)
                        .map(|rate| format_rate(rate))
                        .unwrap_or_else(|| "—".into()),
                );
                ui.end_row();
                if let Some(clock) = self.selected_status().and_then(|status| status.clock) {
                    ui.strong("Clock source / sync");
                    ui.label(format_clock_state(clock));
                    ui.end_row();
                }
                ui.strong("USB ID");
                ui.monospace(self.selected.usbid());
                ui.end_row();
                ui.strong("USB location");
                ui.label(
                    self.selected_status()
                        .and_then(|status| status.identities.first())
                        .map(|identity| format!("Bus {} Device {}", identity.bus, identity.address))
                        .unwrap_or_else(|| "—".into()),
                );
                ui.end_row();
                ui.strong("USB device revision");
                ui.label(
                    self.selected_status()
                        .and_then(|status| status.identities.first())
                        .map(|identity| identity.device_revision.clone())
                        .unwrap_or_else(|| "—".into()),
                );
                ui.end_row();
                ui.strong("Serial");
                ui.monospace(
                    self.selected_status()
                        .and_then(|status| status.identities.first())
                        .and_then(|identity| identity.serial.clone())
                        .unwrap_or_else(|| "—".into()),
                );
                ui.end_row();
            });

        ui.add_space(24.0);
        ui.heading("Sample rate");
        ui.label("Changing rate briefly rebuilds the PipeWire device graph.");
        ui.add_space(8.0);
        ui.horizontal_wrapped(|ui| {
            let connected = self
                .selected_status()
                .and_then(|status| status.card)
                .is_some();
            let unique = self
                .selected_status()
                .map(|status| status.identities.len() == 1)
                .unwrap_or(false);
            let busy = self.operation.is_some() || self.preset_operation.is_some();
            for rate in octa::control::SUPPORTED_RATES {
                let is_current =
                    self.selected_status().and_then(|status| status.rate) == Some(rate);
                let button = egui::Button::new(format_rate(rate)).selected(is_current);
                if ui
                    .add_enabled(connected && unique && !busy, button)
                    .clicked()
                    && !is_current
                {
                    let (sender, receiver) = mpsc::channel();
                    let kind = self.selected;
                    self.operation = Some(receiver);
                    self.operation_message = None;
                    thread::spawn(move || {
                        let result = octa::control::set_sample_rate(kind, rate)
                            .map(|()| rate)
                            .map_err(|error| error.to_string());
                        let _ = sender.send(result);
                    });
                }
            }
            if busy {
                ui.spinner();
                ui.label("Applying and confirming…");
            }
        });

        if let Some(Err(message)) = &self.operation_message {
            ui.add_space(8.0);
            ui.colored_label(ui.visuals().error_fg_color, message);
        }

        if let Some(error) = self
            .selected_status()
            .and_then(|status| status.error.as_deref())
        {
            ui.add_space(18.0);
            ui.colored_label(ui.visuals().warn_fg_color, error);
        }
    }

    fn start_quad_apply(&mut self) {
        let Some(card) = self.selected_status().and_then(|status| status.card) else {
            return;
        };
        let (Some(old), Some(new)) = (self.quad_hardware.clone(), self.quad_draft.clone()) else {
            return;
        };
        let (sender, receiver) = mpsc::channel();
        self.quad_operation = Some(receiver);
        self.operation_message = None;
        thread::spawn(move || {
            let result = octa::quad::apply(card, &old, &new).map_err(|error| format!("{error:#}"));
            let _ = sender.send(result);
        });
    }

    fn draw_quad_apply_bar(&mut self, ui: &mut egui::Ui) {
        let dirty = self.quad_draft != self.quad_hardware;
        if dirty && self.quad_operation.is_none() && interaction_finished(ui) {
            self.start_quad_apply();
        }
        ui.horizontal(|ui| {
            if ui.button("Reload from hardware").clicked() {
                self.quad_draft = self.quad_hardware.clone();
            }
            if self.quad_operation.is_some() {
                ui.spinner();
                ui.label("Writing and rereading all QUAD controls…");
            }
        });
        if let Some(Err(message)) = &self.operation_message {
            ui.colored_label(ui.visuals().error_fg_color, message);
        }
    }

    fn draw_quad_inputs(&mut self, ui: &mut egui::Ui) {
        ui.heading("QUAD-CAPTURE inputs and dynamics");
        ui.label("Changes are written automatically and confirmed by hardware readback.");
        let Some(mut draft) = self.quad_draft.clone() else {
            ui.add_space(12.0);
            ui.label(
                "Native QUAD controls are unavailable. Install the paired native driver modules.",
            );
            return;
        };
        ui.add_space(12.0);
        for channel in 0..2 {
            egui::CollapsingHeader::new(format!("Input {}", channel + 1))
                .default_open(true)
                .show(ui, |ui| {
                    let p = &mut draft.preamps[channel];
                    ui.horizontal(|ui| {
                        ui.checkbox(&mut p.low_cut, "100 Hz low-cut");
                        ui.checkbox(&mut p.phase_invert, "Invert phase");
                        ui.checkbox(&mut p.compressor_enabled, "Compressor enabled");
                    });
                    ui.add(
                        egui::Slider::new(&mut p.sensitivity_half_db, 0..=108)
                            .text("Sensitivity (0.5 dB steps)"),
                    );
                    ui.label(format!("{:.1} dB", f32::from(p.sensitivity_half_db) / 2.0));
                    ui.columns(2, |columns| {
                        columns[0].add(egui::Slider::new(&mut p.gate, 0..=50).text("Gate"));
                        columns[0].add(egui::Slider::new(&mut p.attack, 0..=124).text("Attack"));
                        columns[0].add(egui::Slider::new(&mut p.release, 0..=124).text("Release"));
                        columns[1]
                            .add(egui::Slider::new(&mut p.threshold, 0..=40).text("Threshold"));
                        columns[1].add(egui::Slider::new(&mut p.ratio, 0..=13).text("Ratio"));
                        columns[1]
                            .add(egui::Slider::new(&mut p.output_gain, 0..=80).text("Output gain"));
                    });
                });
        }
        ui.checkbox(
            &mut draft.compressor_stereo_link,
            "Stereo link compressors 1–2",
        );
        ui.separator();
        ui.heading("Auto-Sens");
        ui.checkbox(&mut draft.auto_sens, "AUTO-SENS enabled");
        ui.checkbox(
            &mut draft.auto_sens_automatic,
            "Finish automatically after silence",
        );
        ui.add(egui::Slider::new(&mut draft.auto_sens_margin_db, -12..=0).text("Margin (dBFS)"));
        self.quad_draft = Some(draft);
        self.draw_quad_apply_bar(ui);
    }

    fn draw_quad_direct_mix(&mut self, ui: &mut egui::Ui) {
        ui.heading("QUAD-CAPTURE direct monitor mixer");
        ui.label("These levels affect monitoring only; recording levels are unchanged.");
        let Some(mut draft) = self.quad_draft.clone() else {
            ui.label("Native QUAD controls unavailable.");
            return;
        };
        for (index, label) in ["Input 1", "Input 2", "Coaxial In 3-4"].iter().enumerate() {
            ui.add(egui::Slider::new(&mut draft.monitor_levels[index], 0..=84).text(*label));
        }
        self.quad_draft = Some(draft);
        self.draw_quad_apply_bar(ui);
    }

    fn draw_quad_outputs(&mut self, ui: &mut egui::Ui) {
        ui.heading("QUAD-CAPTURE digital I/O");
        let Some(mut draft) = self.quad_draft.clone() else {
            ui.label("Native QUAD controls unavailable.");
            return;
        };
        ui.checkbox(&mut draft.digital_input, "Receive COAXIAL IN (AUTO)");
        egui::ComboBox::from_label("COAXIAL OUT source")
            .selected_text(
                ["Direct Mix", "Wave Out 1-2", "Wave Out 3-4"]
                    [usize::from(draft.digital_output.min(2))],
            )
            .show_ui(ui, |ui| {
                ui.selectable_value(&mut draft.digital_output, 0, "Direct Mix");
                ui.selectable_value(&mut draft.digital_output, 1, "Wave Out 1-2");
                ui.selectable_value(&mut draft.digital_output, 2, "Wave Out 3-4");
            });
        if self.selected_status().and_then(|status| status.rate) == Some(192_000) {
            ui.colored_label(
                ui.visuals().warn_fg_color,
                "Coaxial input/output is unavailable at 192 kHz.",
            );
        }
        self.quad_draft = Some(draft);
        self.draw_quad_apply_bar(ui);
    }

    fn draw_inputs(&mut self, ui: &mut egui::Ui) {
        if self.selected == Kind::Quad {
            self.draw_quad_inputs(ui);
            return;
        }
        ui.heading("Inputs and dynamics");
        egui::Frame::group(ui.style()).show(ui, |ui| {
            ui.strong("Live hardware control");
            ui.label("Changes are written automatically and confirmed by hardware readback.");
        });
        ui.add_space(12.0);
        ui.horizontal_wrapped(|ui| {
            for input in 0..PREAMP_CHANNELS {
                ui.selectable_value(
                    &mut self.selected_input,
                    input,
                    format!("Input {}", input + 1),
                );
            }
        });
        ui.separator();

        ui.horizontal_wrapped(|ui| {
            ui.strong("Live input levels");
            for input in 0..PREAMP_CHANNELS {
                let dbfs = self
                    .meter_frame
                    .map(|frame| frame.input_dbfs(input))
                    .unwrap_or(f32::NEG_INFINITY);
                let fraction = if dbfs.is_finite() {
                    ((dbfs + 72.0) / 72.0).clamp(0.0, 1.0)
                } else {
                    0.0
                };
                let text = if dbfs > -72.0 {
                    format!("{}  {:.0} dBFS", input + 1, dbfs)
                } else {
                    format!("{}  −∞", input + 1)
                };
                ui.add(
                    egui::ProgressBar::new(fraction)
                        .desired_width(105.0)
                        .text(text),
                );
            }
        });
        ui.separator();

        let input_number = self.selected_input + 1;
        let channel = self.selected_input;
        let hardware = self
            .hardware_preamps
            .as_ref()
            .map(|preamps| preamps[channel].clone());
        let card = self.selected_status().and_then(|status| status.card);
        let busy = self.preamp_operation.is_some();
        let kernel_sensitivity_backend = self.kernel_sensitivity_backend;
        let compressor_dbfs = self
            .meter_frame
            .map(|frame| frame.compressor_output_dbfs(channel))
            .unwrap_or(f32::NEG_INFINITY);
        let preamp = &mut self.draft.preamps[self.selected_input];
        let mut changed = false;
        ui.columns(2, |columns| {
            columns[0].heading(format!("Preamp {input_number}"));
            let mut half_db = preamp.gain.half_db();
            if columns[0]
                .add(egui::Slider::new(&mut half_db, 0..=100).text("Sensitivity (0.5 dB steps)"))
                .changed()
            {
                preamp.gain = octa::model::InputGain::from_half_db(half_db).unwrap();
                changed = true;
            }
            columns[0].label(format!("{:.1} dB", preamp.gain.db()));
            if kernel_sensitivity_backend {
                columns[0].small("Kernel ALSA backend active; sensitivity and preamp switches use hardware-confirmed ALSA controls.");
            }
            columns[0].add_enabled_ui(true, |ui| {
                changed |= ui
                    .checkbox(&mut preamp.phantom_power, "+48 V phantom power")
                    .changed();
                ui.add_enabled_ui(input_number <= 2, |ui| {
                    changed |= ui
                        .checkbox(&mut preamp.high_impedance, "Hi-Z instrument input")
                        .changed();
                });
                changed |= ui
                    .checkbox(&mut preamp.phase_inverted, "Invert phase")
                    .changed();
                changed |= ui
                    .checkbox(&mut preamp.low_cut_100_hz, "100 Hz low-cut filter")
                    .changed();
            });
            if input_number > 2 {
                preamp.high_impedance = false;
            }
            columns[0].add_space(12.0);
            columns[0].add_enabled_ui(true, |ui| {
                egui::ComboBox::from_label("Auto-Sens duration")
                    .selected_text(auto_sens_label(self.draft.system.auto_sens_duration))
                    .show_ui(ui, |ui| {
                        for duration in [
                            AutoSensDuration::Manual,
                            AutoSensDuration::Seconds30,
                            AutoSensDuration::Minute1,
                            AutoSensDuration::Minutes3,
                            AutoSensDuration::Minutes5,
                        ] {
                            ui.selectable_value(
                                &mut self.draft.system.auto_sens_duration,
                                duration,
                                auto_sens_label(duration),
                            );
                        }
                    });
            });

            columns[1].heading("Compressor / gate");
            columns[1].add_enabled_ui(true, |ui| {
                changed |= ui
                    .checkbox(&mut preamp.compressor.enabled, "Enabled")
                    .changed();
                changed |= ui
                    .checkbox(
                        &mut preamp.compressor.stereo_link,
                        format!(
                            "Stereo link Inputs {}–{}",
                            (channel / 2) * 2 + 1,
                            (channel / 2) * 2 + 2
                        ),
                    )
                    .changed();
            });
            columns[1].add_enabled_ui(true, |ui| {
                changed |= compressor_slider(
                    ui,
                    "Gate",
                    &mut preamp.compressor.gate,
                    octa::compressor::GATE_MAX,
                    octa::compressor::gate_label,
                );
                changed |= compressor_slider(
                    ui,
                    "Attack",
                    &mut preamp.compressor.attack,
                    octa::compressor::ATTACK_MAX,
                    octa::compressor::attack_label,
                );
                changed |= compressor_slider(
                    ui,
                    "Release",
                    &mut preamp.compressor.release,
                    octa::compressor::RELEASE_MAX,
                    octa::compressor::release_label,
                );
                changed |= compressor_slider(
                    ui,
                    "Threshold",
                    &mut preamp.compressor.threshold,
                    octa::compressor::THRESHOLD_MAX,
                    octa::compressor::threshold_label,
                );
                changed |= compressor_slider(
                    ui,
                    "Ratio",
                    &mut preamp.compressor.ratio,
                    octa::compressor::RATIO_MAX,
                    |raw| octa::compressor::ratio_label(raw).to_owned(),
                );
                changed |= compressor_slider(
                    ui,
                    "Output gain",
                    &mut preamp.compressor.output_gain,
                    octa::compressor::OUTPUT_GAIN_MAX,
                    octa::compressor::output_gain_label,
                );
            });
            let compressor_fraction = if compressor_dbfs.is_finite() {
                ((compressor_dbfs + 72.0) / 72.0).clamp(0.0, 1.0)
            } else {
                0.0
            };
            let compressor_text = if compressor_dbfs > -72.0 {
                format!("Compressor output  {compressor_dbfs:.0} dBFS")
            } else {
                "Compressor output  −∞".to_owned()
            };
            columns[1].add(
                egui::ProgressBar::new(compressor_fraction)
                    .desired_width(260.0)
                    .text(compressor_text),
            );
            columns[1].small("Hardware raw values are shown in their documented dB, ratio, and millisecond units.");
        });
        if changed {
            self.preamp_dirty[channel] = true;
            self.phantom_confirmed = false;
        }
        let enabling_phantom = hardware.as_ref().is_some_and(|value| !value.phantom_power)
            && self.draft.preamps[channel].phantom_power;
        if enabling_phantom {
            ui.add_space(12.0);
            ui.colored_label(ui.visuals().warn_fg_color, "Warning: +48 V can damage unsupported, ribbon, or unbalanced equipment. Confirm the connected source supports phantom power.");
            ui.checkbox(
                &mut self.phantom_confirmed,
                "I confirm Input supports +48 V phantom power",
            );
        }
        ui.add_space(12.0);
        ui.horizontal(|ui| {
            if ui
                .add_enabled(
                    hardware.is_some() && !busy,
                    egui::Button::new("Reload from hardware"),
                )
                .clicked()
            {
                self.draft.preamps[channel] = hardware.clone().unwrap();
                self.preamp_dirty[channel] = false;
                self.phantom_confirmed = false;
            }
            let safe = !enabling_phantom || self.phantom_confirmed;
            if card.is_some()
                && hardware.is_some()
                && self.preamp_dirty[channel]
                && safe
                && !busy
                && interaction_finished(ui)
            {
                let current = hardware.clone().unwrap();
                let desired = self.draft.preamps[channel].clone();
                let card = card.unwrap();
                let (sender, receiver) = mpsc::channel();
                self.preamp_operation = Some(receiver);
                self.operation_message = None;
                thread::spawn(move || {
                    let result = octa::mixer::apply_preamp(card, channel, &current, &desired)
                        .map(|confirmed| (channel, confirmed))
                        .map_err(|error| format!("{error:#}"));
                    let _ = sender.send(result);
                });
            }
            if busy {
                ui.spinner();
                ui.label("Writing and verifying…");
            }
        });
        ui.add_space(18.0);
        ui.heading("Auto-Sens");
        ui.label("Select inputs, provide the loudest expected signal, then run. Auto-Sens changes the selected preamp sensitivities.");
        ui.horizontal_wrapped(|ui| {
            for channel in 0..PREAMP_CHANNELS {
                ui.checkbox(
                    &mut self.auto_sens_selected[channel],
                    format!("Input {}", channel + 1),
                );
            }
        });
        ui.checkbox(
            &mut self.auto_sens_confirmed,
            "I understand Auto-Sens will change the selected input sensitivities",
        );
        let auto_busy = self.auto_sens_operation.is_some();
        let selected_any = self.auto_sens_selected.iter().any(|value| *value);
        let card = self.selected_status().and_then(|status| status.card);
        ui.horizontal(|ui| {
            if ui
                .add_enabled(
                    card.is_some()
                        && selected_any
                        && self.auto_sens_confirmed
                        && !self.auto_sens_running
                        && !auto_busy,
                    egui::Button::new("Start Auto-Sens"),
                )
                .clicked()
            {
                let selected = self.auto_sens_selected;
                let duration = self.draft.system.auto_sens_duration;
                self.auto_sens_pending_duration = duration;
                let card = card.unwrap();
                let (sender, receiver) = mpsc::channel();
                self.auto_sens_operation = Some(receiver);
                self.operation_message = None;
                thread::spawn(move || {
                    let result = octa::mixer::auto_sens_start(card, selected)
                        .map(|snapshot| (AutoSensAction::Started, snapshot))
                        .map_err(|error| format!("{error:#}"));
                    let _ = sender.send(result);
                });
            }
            if ui
                .add_enabled(
                    card.is_some() && self.auto_sens_running && !auto_busy,
                    egui::Button::new("Finish and read levels"),
                )
                .clicked()
            {
                let card = card.unwrap();
                let (sender, receiver) = mpsc::channel();
                self.auto_sens_operation = Some(receiver);
                thread::spawn(move || {
                    let result = octa::mixer::auto_sens_finish(card)
                        .map(|snapshot| (AutoSensAction::Finished, snapshot))
                        .map_err(|error| format!("{error:#}"));
                    let _ = sender.send(result);
                });
            }
            if ui
                .add_enabled(
                    card.is_some() && self.auto_sens_running && !auto_busy,
                    egui::Button::new("Cancel Auto-Sens"),
                )
                .clicked()
            {
                let card = card.unwrap();
                let (sender, receiver) = mpsc::channel();
                self.auto_sens_operation = Some(receiver);
                thread::spawn(move || {
                    let result = octa::mixer::auto_sens_cancel(card)
                        .map(|snapshot| (AutoSensAction::Cancelled, snapshot))
                        .map_err(|error| format!("{error:#}"));
                    let _ = sender.send(result);
                });
            }
            if auto_busy {
                ui.spinner();
            }
        });
        ui.add_space(14.0);
        egui::Frame::group(ui.style()).show(ui, |ui| {
            ui.strong("Hardware routing");
            ui.label("The INPUT MIX knob changes the selected Direct Mix input master; use the Direct Mix page for the equivalent readback-verified digital control. Use Patch Bay to choose what feeds each physical output pair.");
        });
    }

    fn draw_direct_mix(&mut self, ui: &mut egui::Ui) {
        if self.selected == Kind::Quad {
            self.draw_quad_direct_mix(ui);
            return;
        }
        ui.heading("Direct Mix A–D");
        egui::Frame::group(ui.style()).show(ui, |ui| {
            ui.strong("Live Direct Mix control");
            ui.label("Changes are written automatically and confirmed by hardware readback.");
        });
        ui.add_space(12.0);
        let rate = self
            .selected_status()
            .and_then(|status| status.rate)
            .unwrap_or(96_000);
        let capabilities = octa::model::Capabilities::at_rate(rate).unwrap();
        ui.horizontal(|ui| {
            for mixer in 0..4 {
                ui.add_enabled_ui(mixer < capabilities.direct_mixers, |ui| {
                    ui.selectable_value(
                        &mut self.selected_mixer,
                        mixer,
                        format!("Mix {}", (b'A' + mixer as u8) as char),
                    );
                });
            }
        });
        if self.selected_mixer >= capabilities.direct_mixers {
            self.selected_mixer = 0;
        }
        ui.separator();

        let selected_mixer = self.selected_mixer;
        let card = self.selected_status().and_then(|status| status.card);
        let busy = self.direct_operation.is_some()
            || self.wave_operation.is_some()
            || self.master_operation.is_some();
        let hardware = self.hardware_direct_mixers.clone();
        let mut apply_channel = None;
        let mut apply_wave_channel = None;
        let mut apply_masters = false;
        let mixer = &mut self.draft.direct_mixers[selected_mixer];
        egui::ScrollArea::vertical().show(ui, |ui| {
            ui.heading("Hardware inputs 1–10");
            egui::Grid::new("input-mixer-grid")
                .striped(true)
                .show(ui, |ui| {
                    ui.strong("Channel");
                    ui.strong("Link");
                    ui.strong("Mute");
                    ui.strong("Solo");
                    ui.strong("Pan");
                    ui.strong("Level");
                    ui.strong("Reverb");
                    ui.strong("Hardware");
                    ui.end_row();
                    for (index, strip) in mixer.inputs.iter_mut().enumerate() {
                        let channel = format!("Input {}", index + 1);
                        let mut changed = false;
                        ui.label((index + 1).to_string());
                        changed |= accessible_checkbox(
                            ui,
                            &mut strip.stereo_link,
                            &format!("{channel} stereo link"),
                        );
                        changed |=
                            accessible_checkbox(ui, &mut strip.muted, &format!("{channel} mute"));
                        changed |=
                            accessible_checkbox(ui, &mut strip.soloed, &format!("{channel} solo"));
                        ui.add_enabled_ui(true, |ui| {
                            changed |= pan_slider(ui, &mut strip.pan, &format!("{channel} pan"));
                        });
                        ui.add_enabled_ui(true, |ui| {
                            changed |= compact_volume_slider(
                                ui,
                                &mut strip.level,
                                &format!("{channel} level"),
                            );
                        });
                        ui.add_enabled_ui(selected_mixer == 0 && capabilities.reverb, |ui| {
                            changed |= compact_volume_slider(
                                ui,
                                &mut strip.reverb_send,
                                &format!("{channel} reverb send"),
                            );
                        });
                        if changed {
                            self.direct_dirty[selected_mixer][index] = true;
                        }
                        if card.is_some()
                            && hardware.is_some()
                            && self.direct_dirty[selected_mixer][index]
                            && !busy
                            && interaction_finished(ui)
                        {
                            apply_channel = Some(index);
                        }
                        ui.end_row();
                    }
                });
            ui.add_space(18.0);
            ui.add_enabled_ui(true, |ui| {
                ui.heading("Computer playback channels");
                egui::Grid::new("output-mixer-grid")
                    .striped(true)
                    .show(ui, |ui| {
                        ui.strong("Channel");
                        ui.strong("Link");
                        ui.strong("Mute");
                        ui.strong("Solo");
                        ui.strong("Pan");
                        ui.strong("Level");
                        ui.strong("Hardware");
                        ui.end_row();
                        for (index, strip) in mixer.wave_outputs.iter_mut().enumerate() {
                            let channel = format!("WAVE OUT {}", index + 1);
                            let mut changed = false;
                            ui.label(&channel);
                            changed |= accessible_checkbox(
                                ui,
                                &mut strip.stereo_link,
                                &format!("{channel} stereo link"),
                            );
                            changed |= accessible_checkbox(
                                ui,
                                &mut strip.muted,
                                &format!("{channel} mute"),
                            );
                            changed |= accessible_checkbox(
                                ui,
                                &mut strip.soloed,
                                &format!("{channel} solo"),
                            );
                            changed |= pan_slider(ui, &mut strip.pan, &format!("{channel} pan"));
                            changed |= compact_volume_slider(
                                ui,
                                &mut strip.level,
                                &format!("{channel} level"),
                            );
                            if changed {
                                self.wave_dirty[selected_mixer][index] = true;
                            }
                            if card.is_some()
                                && hardware.is_some()
                                && self.wave_dirty[selected_mixer][index]
                                && !busy
                                && interaction_finished(ui)
                            {
                                apply_wave_channel = Some(index);
                            }
                            ui.end_row();
                        }
                    });
                ui.add_space(18.0);
                ui.add_enabled_ui(true, |ui| {
                    ui.heading("Master");
                    let mut master_changed = false;
                    master_changed |= ui
                        .checkbox(
                            &mut mixer.link_input_output_masters,
                            "Link input/output masters",
                        )
                        .changed();
                    master_changed |= ui
                        .checkbox(&mut mixer.stereo_link_master, "Input master stereo link")
                        .changed();
                    ui.horizontal(|ui| {
                        ui.label("Input master L");
                        master_changed |=
                            compact_volume_slider(ui, &mut mixer.input_master, "Input master left");
                        ui.label("R");
                        ui.add_enabled_ui(!mixer.stereo_link_master, |ui| {
                            master_changed |= compact_volume_slider(
                                ui,
                                &mut mixer.input_master_right,
                                "Input master right",
                            );
                        });
                    });
                    if mixer.stereo_link_master {
                        mixer.input_master_right = mixer.input_master;
                    }
                    master_changed |= ui
                        .checkbox(
                            &mut mixer.output_stereo_link_master,
                            "Output master stereo link",
                        )
                        .changed();
                    ui.horizontal(|ui| {
                        ui.label("Output master L");
                        master_changed |= compact_volume_slider(
                            ui,
                            &mut mixer.output_master,
                            "Output master left",
                        );
                        ui.label("R");
                        ui.add_enabled_ui(!mixer.output_stereo_link_master, |ui| {
                            master_changed |= compact_volume_slider(
                                ui,
                                &mut mixer.output_master_right,
                                "Output master right",
                            );
                        });
                    });
                    if mixer.output_stereo_link_master {
                        mixer.output_master_right = mixer.output_master;
                    }
                    ui.add_enabled_ui(self.selected_mixer == 0 && capabilities.reverb, |ui| {
                        ui.horizontal(|ui| {
                            ui.label("Reverb return");
                            master_changed |= compact_volume_slider(
                                ui,
                                &mut mixer.reverb_return,
                                "Reverb return",
                            );
                        });
                    });
                    if master_changed {
                        self.master_dirty[selected_mixer] = true;
                    }
                    if card.is_some()
                        && hardware.is_some()
                        && self.master_dirty[selected_mixer]
                        && !busy
                        && interaction_finished(ui)
                    {
                        apply_masters = true;
                    }
                });
            });
        });
        if let Some(channel) = apply_channel {
            let current = hardware.clone().unwrap()[selected_mixer].inputs[channel].clone();
            let desired = self.draft.direct_mixers[selected_mixer].inputs[channel].clone();
            let (sender, receiver) = mpsc::channel();
            self.direct_operation = Some(receiver);
            self.operation_message = None;
            thread::spawn(move || {
                let result = octa::mixer::apply_direct_input(
                    card.unwrap(),
                    selected_mixer,
                    channel,
                    &current,
                    &desired,
                )
                .map(|confirmed| (selected_mixer, channel, confirmed))
                .map_err(|error| format!("{error:#}"));
                let _ = sender.send(result);
            });
        }
        if let Some(channel) = apply_wave_channel {
            let current = hardware.clone().unwrap()[selected_mixer].wave_outputs[channel].clone();
            let desired = self.draft.direct_mixers[selected_mixer].wave_outputs[channel].clone();
            let (sender, receiver) = mpsc::channel();
            self.wave_operation = Some(receiver);
            self.operation_message = None;
            thread::spawn(move || {
                let result = octa::mixer::apply_wave_output(
                    card.unwrap(),
                    selected_mixer,
                    channel,
                    &current,
                    &desired,
                )
                .map(|confirmed| (selected_mixer, channel, confirmed))
                .map_err(|error| format!("{error:#}"));
                let _ = sender.send(result);
            });
        }
        if apply_masters {
            let current = hardware.clone().unwrap()[selected_mixer].clone();
            let desired = self.draft.direct_mixers[selected_mixer].clone();
            let (sender, receiver) = mpsc::channel();
            self.master_operation = Some(receiver);
            self.operation_message = None;
            thread::spawn(move || {
                let result = octa::mixer::apply_direct_masters(
                    card.unwrap(),
                    selected_mixer,
                    &current,
                    &desired,
                )
                .map(|confirmed| (selected_mixer, confirmed))
                .map_err(|error| format!("{error:#}"));
                let _ = sender.send(result);
            });
        }
        if busy {
            ui.horizontal(|ui| {
                ui.spinner();
                ui.label("Writing and verifying Direct Mix…");
            });
        }
    }

    fn draw_patch_bay(&mut self, ui: &mut egui::Ui) {
        if self.selected == Kind::Quad {
            ui.heading("Patch Bay");
            ui.label("QUAD-CAPTURE has a fixed internal signal path rather than the OCTA-CAPTURE patch bay. Choose its coaxial output source on the Outputs page.");
            return;
        }
        ui.heading("Patch Bay");
        egui::Frame::group(ui.style()).show(ui, |ui| {
            ui.strong("Live patch-bay control");
            ui.label("Route changes are written automatically and confirmed by hardware readback.");
        });
        ui.add_space(12.0);
        let rate = self
            .selected_status()
            .and_then(|status| status.rate)
            .unwrap_or(96_000);
        let available = octa::model::Capabilities::at_rate(rate)
            .map(|capabilities| capabilities.patch_bay)
            .unwrap_or(false);
        if !available {
            ui.colored_label(
                ui.visuals().warn_fg_color,
                "Patch bay is unavailable at 192 kHz.",
            );
            return;
        }
        let card = self.selected_status().and_then(|status| status.card);
        for output in 0..OUTPUT_PAIRS {
            ui.horizontal(|ui| {
                ui.strong(format!("OUTPUT {}–{}", output * 2 + 1, output * 2 + 2));
                let response = egui::ComboBox::from_id_salt(("patch", output))
                    .selected_text(patch_source_label(self.draft.patch_bay[output]))
                    .show_ui(ui, |ui| {
                        for pair in 1..=5 {
                            ui.selectable_value(
                                &mut self.draft.patch_bay[output],
                                PatchSource::WaveOut(pair),
                                format!("WAVE OUT {}–{}", pair * 2 - 1, pair * 2),
                            );
                        }
                        for mixer in 1..=4 {
                            ui.selectable_value(
                                &mut self.draft.patch_bay[output],
                                PatchSource::DirectMix(mixer),
                                format!("DIRECT MIX {}", (b'A' + mixer - 1) as char),
                            );
                        }
                    });
                if response.response.changed() {
                    self.patch_dirty[output] = true;
                }
                if card.is_some()
                    && self.hardware_patch_bay.is_some()
                    && self.patch_dirty[output]
                    && self.patch_operation.is_none()
                    && self.patch_profile_operation.is_none()
                    && interaction_finished(ui)
                {
                    let desired = self.draft.patch_bay[output];
                    let (sender, receiver) = mpsc::channel();
                    self.patch_operation = Some(receiver);
                    self.operation_message = None;
                    let card = card.unwrap();
                    thread::spawn(move || {
                        let result = octa::mixer::apply_patch_bay(card, output, desired)
                            .map(|confirmed| (output, confirmed))
                            .map_err(|error| format!("{error:#}"));
                        let _ = sender.send(result);
                    });
                }
            });
        }
        ui.add_space(16.0);
        ui.horizontal(|ui| {
            let ready = card.is_some()
                && self.hardware_patch_bay.is_some()
                && self.patch_operation.is_none()
                && self.patch_profile_operation.is_none()
                && self.preset_operation.is_none();
            if ui
                .add_enabled(ready, egui::Button::new("Initial Setting"))
                .on_hover_text("Main uses Direct Mix A; OUTPUT 3–10 use matching WAVE OUT pairs")
                .clicked()
            {
                let desired = [
                    PatchSource::DirectMix(1),
                    PatchSource::WaveOut(2),
                    PatchSource::WaveOut(3),
                    PatchSource::WaveOut(4),
                    PatchSource::WaveOut(5),
                ];
                let (sender, receiver) = mpsc::channel();
                self.patch_profile_operation = Some(receiver);
                self.operation_message = None;
                let card = card.unwrap();
                thread::spawn(move || {
                    let result = octa::mixer::apply_patch_bay_profile(card, desired)
                        .map_err(|error| format!("{error:#}"));
                    let _ = sender.send(result);
                });
            }
            if ui
                .add_enabled(ready, egui::Button::new("Multi-Monitor"))
                .on_hover_text("Route Direct Mix A–D to OUTPUT 1–8; preserve OUTPUT 9–10")
                .clicked()
            {
                let mut desired = self.hardware_patch_bay.unwrap();
                for (output, route) in desired.iter_mut().take(4).enumerate() {
                    *route = PatchSource::DirectMix(output as u8 + 1);
                }
                let (sender, receiver) = mpsc::channel();
                self.patch_profile_operation = Some(receiver);
                self.operation_message = None;
                let card = card.unwrap();
                thread::spawn(move || {
                    let result = octa::mixer::apply_patch_bay_profile(card, desired)
                        .map_err(|error| format!("{error:#}"));
                    let _ = sender.send(result);
                });
            }
            let rate = self.selected_status().and_then(|status| status.rate);
            let supported = rate.is_some_and(|rate| rate != 192_000);
            ui.checkbox(
                &mut self.direct_output_confirmed,
                "Allow replacing all four Direct Mix input layouts",
            );
            if ui
                .add_enabled(
                    ready && supported && self.direct_output_confirmed,
                    egui::Button::new("Directly Output Inputs"),
                )
                .on_hover_text(if supported {
                    "Match Roland's Windows profile: route Direct Mix A–D to OUTPUT 1–8 and rewrite every hardware-input strip"
                } else {
                    "Unavailable at 192 kHz because Direct Mix B–D and the patch bay are unavailable"
                })
                .clicked()
            {
                let (sender, receiver) = mpsc::channel();
                self.preset_operation = Some(receiver);
                self.operation_message = None;
                self.direct_output_confirmed = false;
                let card = card.unwrap();
                let rate = rate.unwrap();
                thread::spawn(move || {
                    let result = octa::preset_apply::directly_output_inputs(card, rate)
                        .map_err(|error| format!("{error:#}"));
                    let _ = sender.send(result);
                });
            }
        });
    }

    fn draw_outputs(&mut self, ui: &mut egui::Ui) {
        if self.selected == Kind::Quad {
            self.draw_quad_outputs(ui);
            return;
        }
        ui.heading("Outputs and reverb");
        ui.add_space(12.0);
        let card = self.selected_status().and_then(|status| status.card);
        let mut reverb_changed = false;
        ui.columns(2, |columns| {
            columns[0].heading("Reverb");
            let response = egui::ComboBox::from_label("Reverb type")
                .selected_text(reverb_label(self.draft.reverb.kind))
                .show_ui(&mut columns[0], |ui| {
                    for kind in [
                        ReverbType::Off,
                        ReverbType::Echo,
                        ReverbType::Room,
                        ReverbType::SmallHall,
                        ReverbType::LargeHall,
                        ReverbType::Plate,
                    ] {
                        ui.selectable_value(&mut self.draft.reverb.kind, kind, reverb_label(kind));
                    }
                });
            reverb_changed |= response.response.changed();
            columns[0].add_enabled_ui(self.draft.reverb.kind != ReverbType::Off, |ui| {
                reverb_changed |= bounded_unit_slider(
                    ui,
                    "Pre-delay",
                    &mut self.draft.reverb.pre_delay,
                    octa::reverb::PRE_DELAY_MAX,
                    octa::reverb::pre_delay_label,
                );
                reverb_changed |= bounded_unit_slider(
                    ui,
                    "Time",
                    &mut self.draft.reverb.time,
                    octa::reverb::TIME_MAX,
                    octa::reverb::time_label,
                );
            });
            if reverb_changed {
                self.reverb_dirty = true;
            }
            if card.is_some()
                && self.hardware_reverb.is_some()
                && self.reverb_dirty
                && self.reverb_operation.is_none()
                && interaction_finished(&columns[0])
            {
                let current = self.hardware_reverb.clone().unwrap();
                let desired = self.draft.reverb.clone();
                let (sender, receiver) = mpsc::channel();
                self.reverb_operation = Some(receiver);
                self.operation_message = None;
                let card = card.unwrap();
                thread::spawn(move || {
                    let result = octa::mixer::apply_reverb(card, &current, &desired)
                        .map_err(|error| format!("{error:#}"));
                    let _ = sender.send(result);
                });
            }

            columns[1].heading("Mixer shortcuts");
            let can_clear = card.is_some() && self.clear_operation.is_none();
            if columns[1]
                .add_enabled(can_clear, egui::Button::new("Clear all mute / solo"))
                .clicked()
            {
                let (sender, receiver) = mpsc::channel();
                self.clear_operation = Some(receiver);
                self.operation_message = None;
                let card = card.unwrap();
                thread::spawn(move || {
                    let result = octa::mixer::clear_mutes_and_solos(card)
                        .map_err(|error| format!("{error:#}"));
                    let _ = sender.send(result);
                });
            }
        });
    }

    fn draw_quad_presets(&mut self, ui: &mut egui::Ui) {
        ui.heading("QUAD-CAPTURE presets");
        ui.label("Preset files contain every mapped preamp, compressor, mixer, Digital I/O, and Auto-Sens setting. Loading edits the draft; Apply is separate.");
        ui.horizontal(|ui| {
            if ui.button("Open…").clicked() {
                if let Some(path) = rfd::FileDialog::new()
                    .add_filter("QUAD preset", &["json"])
                    .pick_file()
                {
                    match octa::quad::load(&path) {
                        Ok(settings) => {
                            self.quad_draft = Some(settings);
                            self.file_message = Some(Ok(format!("Loaded {}", path.display())));
                        }
                        Err(error) => self.file_message = Some(Err(error.to_string())),
                    }
                }
            }
            if ui.button("Save current snapshot as…").clicked() {
                if let (Some(settings), Some(path)) = (
                    self.quad_draft.as_ref(),
                    rfd::FileDialog::new()
                        .set_file_name("quad-preset.json")
                        .add_filter("QUAD preset", &["json"])
                        .save_file(),
                ) {
                    self.file_message = Some(
                        octa::quad::save(&path, settings)
                            .map(|_| format!("Saved {}", path.display()))
                            .map_err(|error| error.to_string()),
                    );
                }
            }
        });
        if let Some(message) = &self.file_message {
            match message {
                Ok(value) => {
                    ui.colored_label(egui::Color32::from_rgb(65, 180, 105), value);
                }
                Err(value) => {
                    ui.colored_label(ui.visuals().error_fg_color, value);
                }
            }
        }
        ui.separator();
        self.draw_quad_apply_bar(ui);
    }

    fn draw_presets(&mut self, ui: &mut egui::Ui) {
        if self.selected == Kind::Quad {
            self.draw_quad_presets(ui);
            return;
        }
        ui.heading("Presets");
        ui.heading("Local preset file");
        ui.label("Opening a local file only edits the draft. Applying it to hardware is a separate, confirmed transaction.");
        ui.horizontal(|ui| {
            ui.label("Name");
            ui.text_edit_singleline(&mut self.preset_name);
            if self.draft != self.saved_draft {
                ui.colored_label(ui.visuals().warn_fg_color, "● Modified");
            } else {
                ui.weak("Saved");
            }
        });
        ui.horizontal_wrapped(|ui| {
            if ui.button("Open…").clicked() {
                if let Some(path) = rfd::FileDialog::new()
                    .add_filter("OCTA preset", &["json"])
                    .pick_file()
                {
                    match octa::preset::Preset::load(&path, self.selected) {
                        Ok(preset) => {
                            self.preset_name = preset.name;
                            self.draft = preset.settings;
                            self.saved_draft = self.draft.clone();
                            self.file_message = Some(Ok(format!("Loaded {}", path.display())));
                        }
                        Err(error) => self.file_message = Some(Err(error.to_string())),
                    }
                }
            }
            if ui.button("Save as…").clicked() {
                match octa::preset::Preset::new(
                    self.preset_name.clone(),
                    self.selected,
                    self.draft.clone(),
                ) {
                    Ok(preset) => {
                        if let Some(path) = rfd::FileDialog::new()
                            .set_file_name("octa-preset.json")
                            .add_filter("OCTA preset", &["json"])
                            .save_file()
                        {
                            match preset.save(&path, self.selected) {
                                Ok(()) => {
                                    self.saved_draft = self.draft.clone();
                                    self.file_message =
                                        Some(Ok(format!("Saved {}", path.display())));
                                }
                                Err(error) => self.file_message = Some(Err(error.to_string())),
                            }
                        }
                    }
                    Err(error) => self.file_message = Some(Err(error.to_string())),
                }
            }
            if ui
                .add_enabled(
                    self.draft != self.saved_draft,
                    egui::Button::new("Revert draft"),
                )
                .clicked()
            {
                self.draft = self.saved_draft.clone();
                self.file_message = Some(Ok("Reverted unsaved draft changes".into()));
            }
            if ui.button("Duplicate…").clicked() {
                self.preset_name.push_str(" copy");
                self.file_message = Some(Ok(
                    "Renamed draft; choose Save as… to create the copy".into()
                ));
            }
        });
        if let Some(message) = &self.file_message {
            match message {
                Ok(message) => ui.colored_label(egui::Color32::from_rgb(65, 180, 105), message),
                Err(message) => ui.colored_label(ui.visuals().error_fg_color, message),
            };
        }
        ui.add_space(18.0);
        ui.heading("Apply draft to device");
        ui.label("Applies the preset, confirms the device state, and rolls back automatically if anything fails.");
        let phantom_would_enable = self.hardware_preamps.as_ref().is_some_and(|current| {
            (0..PREAMP_CHANNELS).any(|channel| {
                !current[channel].phantom_power && self.draft.preamps[channel].phantom_power
            })
        });
        if phantom_would_enable {
            ui.checkbox(
                &mut self.preset_phantom_confirmed,
                "Allow this transaction to enable +48 V phantom power",
            );
        } else {
            self.preset_phantom_confirmed = false;
        }
        let target = self
            .selected_status()
            .and_then(|status| Some((status.card?, status.rate?, status.identities.len() == 1)));
        let can_apply = self.selected == Kind::Octa
            && target.is_some_and(|(_, _, unique)| unique)
            && !self.write_in_progress()
            && (!phantom_would_enable || self.preset_phantom_confirmed);
        ui.horizontal(|ui| {
            if ui
                .add_enabled(can_apply, egui::Button::new("Apply verified controls…"))
                .clicked()
            {
                let (card, rate, _) = target.unwrap();
                let desired = self.draft.clone();
                let allow_phantom = self.preset_phantom_confirmed;
                let (sender, receiver) = mpsc::channel();
                self.preset_operation = Some(receiver);
                self.operation_message = None;
                thread::spawn(move || {
                    let result = octa::preset_apply::apply(card, rate, &desired, allow_phantom)
                        .map_err(|error| format!("{error:#}"));
                    let _ = sender.send(result);
                });
            }
            if self.preset_operation.is_some() {
                ui.spinner();
                ui.label("Writing, rereading, and retaining rollback snapshot…");
            }
        });
        if let Some(Err(message)) = &self.operation_message {
            ui.colored_label(ui.visuals().error_fg_color, message);
        }
    }

    fn draw_diagnostics(&mut self, ui: &mut egui::Ui) {
        ui.heading("Diagnostics");
        ui.add_space(12.0);
        egui::Grid::new("diagnostic-status")
            .num_columns(2)
            .spacing([32.0, 12.0])
            .show(ui, |ui| {
                ui.strong("Device");
                ui.label(self.selected.label());
                ui.end_row();
                ui.strong("USB ID");
                ui.monospace(self.selected.usbid());
                ui.end_row();
                ui.strong("Matching USB devices");
                ui.label(
                    self.selected_status()
                        .map(|status| status.identities.len().to_string())
                        .unwrap_or_else(|| "0".into()),
                );
                ui.end_row();
                ui.strong("USB device revision");
                ui.label(
                    self.selected_status()
                        .and_then(|status| status.identities.first())
                        .map(|identity| identity.device_revision.clone())
                        .unwrap_or_else(|| "Unavailable".into()),
                );
                ui.end_row();
                ui.strong("Connection");
                ui.label(self.connection_label());
                ui.end_row();
                ui.strong("Hardware clock");
                ui.label(
                    self.selected_status()
                        .and_then(|status| status.rate)
                        .map(format_rate)
                        .unwrap_or_else(|| "Unavailable".into()),
                );
                ui.end_row();
                if let Some(clock) = self.selected_status().and_then(|status| status.clock) {
                    ui.strong("Clock source / sync");
                    ui.label(format_clock_state(clock));
                    ui.end_row();
                }
                ui.strong("Device-global raw bytes");
                ui.monospace(
                    self.selected_status()
                        .and_then(|status| status.device_globals_raw)
                        .map(|globals| format!("{globals:02X?}"))
                        .unwrap_or_else(|| "Unavailable".into()),
                );
                ui.end_row();
            });

        ui.add_space(18.0);
        ui.horizontal(|ui| {
            ui.strong("Application theme");
            egui::ComboBox::from_label("Theme")
                .selected_text(self.theme.label())
                .show_ui(ui, |ui| {
                    for theme in [ThemeChoice::System, ThemeChoice::Light, ThemeChoice::Dark] {
                        if ui
                            .selectable_value(&mut self.theme, theme, theme.label())
                            .changed()
                        {
                            theme.apply(ui.ctx());
                        }
                    }
                });
        });
        ui.small("UI preferences are local and never change hardware state.");
        if let Some(message) = &self.operation_message {
            ui.add_space(18.0);
            ui.heading("Recent activity");
            match message {
                Ok(message) => {
                    ui.colored_label(egui::Color32::from_rgb(65, 180, 105), message);
                }
                Err(message) => {
                    ui.colored_label(ui.visuals().error_fg_color, message);
                }
            }
        }
        ui.add_space(18.0);
        if ui.button("Export sanitized support bundle…").clicked() {
            if let Some(path) = rfd::FileDialog::new()
                .set_file_name("octa-support.json")
                .add_filter("JSON", &["json"])
                .save_file()
            {
                match octa::diagnostics::SupportBundle::collect(self.selected).write_json(&path) {
                    Ok(()) => self.file_message = Some(Ok(format!("Exported {}", path.display()))),
                    Err(error) => self.file_message = Some(Err(error.to_string())),
                }
            }
        }
        ui.small("The bundle excludes serial numbers, usernames, hostnames, paths, and audio.");
        if let Some(message) = &self.file_message {
            match message {
                Ok(message) => ui.colored_label(egui::Color32::from_rgb(65, 180, 105), message),
                Err(message) => ui.colored_label(ui.visuals().error_fg_color, message),
            };
        }

        ui.add_space(24.0);
        ui.heading("Control coverage");
        egui::Grid::new("control-coverage")
            .num_columns(2)
            .striped(true)
            .spacing([32.0, 10.0])
            .show(ui, |ui| {
                for (control, state) in [
                    ("Sample rate", "Read/write verified"),
                    ("Connection and hot-plug", "Live"),
                    ("Preamps and dynamics", "Live read/write with readback"),
                    ("Direct Mix A-D", "Live read/write with readback"),
                    ("Patch bay", "Live read/write with readback"),
                    ("Reverb", "Live read/write with readback"),
                    ("Local preset files", "Validated atomic import/export"),
                ] {
                    ui.label(control);
                    ui.label(state);
                    ui.end_row();
                }
            });

        if let Some(error) = self
            .selected_status()
            .and_then(|status| status.error.as_deref())
        {
            ui.add_space(16.0);
            ui.colored_label(ui.visuals().error_fg_color, error);
        }
    }
}

impl eframe::App for ControlPanel {
    fn save(&mut self, storage: &mut dyn eframe::Storage) {
        let preferences = UiPreferences {
            page: self.page,
            selected: self.selected,
            selected_input: self.selected_input,
            selected_mixer: self.selected_mixer,
            theme: self.theme,
        };
        eframe::set_value(storage, PREFERENCES_KEY, &preferences);
    }

    fn ui(&mut self, ui: &mut egui::Ui, _frame: &mut eframe::Frame) {
        if octa::meter::shutdown_requested() {
            ui.ctx().send_viewport_cmd(egui::ViewportCommand::Close);
            return;
        }
        if let Some(operation) = &self.quad_operation {
            if let Ok(result) = operation.try_recv() {
                self.operation_message = Some(match result {
                    Ok(confirmed) => {
                        self.quad_hardware = Some(confirmed.clone());
                        self.quad_draft = Some(confirmed);
                        Ok("QUAD-CAPTURE settings were written and confirmed by full hardware readback.".to_owned())
                    }
                    Err(error) => Err(error),
                });
                self.quad_operation = None;
            }
        }
        for (index, page) in Page::ALL.into_iter().enumerate() {
            let key = [
                egui::Key::Num1,
                egui::Key::Num2,
                egui::Key::Num3,
                egui::Key::Num4,
                egui::Key::Num5,
                egui::Key::Num6,
                egui::Key::Num7,
            ][index];
            if ui.input_mut(|input| {
                input.consume_shortcut(&egui::KeyboardShortcut::new(egui::Modifiers::CTRL, key))
            }) {
                self.page = page;
            }
        }
        while let Ok(statuses) = self.updates.try_recv() {
            if let Some(quad) = statuses
                .iter()
                .find(|status| status.kind == self.selected)
                .and_then(|status| status.quad.clone())
            {
                self.quad_hardware = Some(quad.clone());
                if self.quad_operation.is_none()
                    && self.quad_draft.as_ref() == self.quad_hardware.as_ref()
                {
                    self.quad_draft = Some(quad);
                } else if self.quad_draft.is_none() {
                    self.quad_draft = Some(quad);
                }
            }
            if let Some(mixer) = statuses
                .iter()
                .find(|status| status.kind == self.selected)
                .and_then(|status| status.mixer.as_ref())
            {
                self.hardware_preamps = Some(mixer.preamps.clone());
                self.hardware_patch_bay = Some(mixer.patch_bay);
                self.hardware_reverb = Some(mixer.reverb.clone());
                for output in 0..OUTPUT_PAIRS {
                    if !self.patch_dirty[output] && self.patch_operation.is_none() {
                        self.draft.patch_bay[output] = mixer.patch_bay[output];
                    }
                }
                if !self.reverb_dirty && self.reverb_operation.is_none() {
                    self.draft.reverb = mixer.reverb.clone();
                }
                for channel in 0..PREAMP_CHANNELS {
                    if !self.preamp_dirty[channel] && self.preamp_operation.is_none() {
                        self.draft.preamps[channel] = mixer.preamps[channel].clone();
                    }
                }
                self.hardware_direct_mixers = Some(mixer.direct_mixers.clone());
                for mix in 0..DIRECT_MIXERS {
                    for channel in 0..INPUT_MIX_CHANNELS {
                        if !self.direct_dirty[mix][channel] && self.direct_operation.is_none() {
                            self.draft.direct_mixers[mix].inputs[channel] =
                                mixer.direct_mixers[mix].inputs[channel].clone();
                        }
                        if !self.wave_dirty[mix][channel] && self.wave_operation.is_none() {
                            self.draft.direct_mixers[mix].wave_outputs[channel] =
                                mixer.direct_mixers[mix].wave_outputs[channel].clone();
                        }
                    }
                    if !self.master_dirty[mix] && self.master_operation.is_none() {
                        self.draft.direct_mixers[mix].input_master =
                            mixer.direct_mixers[mix].input_master;
                        self.draft.direct_mixers[mix].input_master_right =
                            mixer.direct_mixers[mix].input_master_right;
                        self.draft.direct_mixers[mix].output_master =
                            mixer.direct_mixers[mix].output_master;
                        self.draft.direct_mixers[mix].output_master_right =
                            mixer.direct_mixers[mix].output_master_right;
                        self.draft.direct_mixers[mix].stereo_link_master =
                            mixer.direct_mixers[mix].stereo_link_master;
                        self.draft.direct_mixers[mix].output_stereo_link_master =
                            mixer.direct_mixers[mix].output_stereo_link_master;
                        self.draft.direct_mixers[mix].link_input_output_masters =
                            mixer.direct_mixers[mix].link_input_output_masters;
                        self.draft.direct_mixers[mix].reverb_return =
                            mixer.direct_mixers[mix].reverb_return;
                    }
                }
            }
            if let Some(kernel_preamps) = statuses
                .iter()
                .find(|status| status.kind == self.selected)
                .and_then(|status| status.kernel_preamps.clone())
            {
                self.kernel_sensitivity_backend = true;
                self.hardware_preamps = Some(kernel_preamps.clone());
                for channel in 0..PREAMP_CHANNELS {
                    if !self.preamp_dirty[channel] && self.preamp_operation.is_none() {
                        self.draft.preamps[channel] = kernel_preamps[channel].clone();
                    }
                }
            } else {
                self.kernel_sensitivity_backend = false;
            }
            if let Some(kernel_switches) = statuses
                .iter()
                .find(|status| status.kind == self.selected)
                .and_then(|status| status.kernel_direct_input_switches.clone())
            {
                self.kernel_direct_switch_backend = true;
                let mixers = self
                    .hardware_direct_mixers
                    .get_or_insert_with(|| std::array::from_fn(|_| DirectMixer::default()));
                for mix in 0..DIRECT_MIXERS {
                    for channel in 0..INPUT_MIX_CHANNELS {
                        merge_hardware_value(
                            &mut mixers[mix].inputs[channel],
                            &mut self.draft.direct_mixers[mix].inputs[channel],
                            &kernel_switches[mix][channel],
                            self.direct_dirty[mix][channel],
                            self.direct_operation.is_some(),
                        );
                    }
                }
            } else {
                self.kernel_direct_switch_backend = false;
            }
            if let Some(kernel_wave_outputs) = statuses
                .iter()
                .find(|status| status.kind == self.selected)
                .and_then(|status| status.kernel_wave_outputs.clone())
            {
                let mixers = self
                    .hardware_direct_mixers
                    .get_or_insert_with(|| std::array::from_fn(|_| DirectMixer::default()));
                for mix in 0..DIRECT_MIXERS {
                    for channel in 0..INPUT_MIX_CHANNELS {
                        mixers[mix].wave_outputs[channel] =
                            kernel_wave_outputs[mix][channel].clone();
                        if !self.wave_dirty[mix][channel] && self.wave_operation.is_none() {
                            self.draft.direct_mixers[mix].wave_outputs[channel] =
                                kernel_wave_outputs[mix][channel].clone();
                        }
                    }
                }
            }
            if let Some(kernel_masters) = statuses
                .iter()
                .find(|status| status.kind == self.selected)
                .and_then(|status| status.kernel_direct_masters.clone())
            {
                let mixers = self
                    .hardware_direct_mixers
                    .get_or_insert_with(|| std::array::from_fn(|_| DirectMixer::default()));
                for mix in 0..DIRECT_MIXERS {
                    let update = |target: &mut DirectMixer| {
                        target.input_master = kernel_masters[mix].input_master;
                        target.input_master_right = kernel_masters[mix].input_master_right;
                        target.output_master = kernel_masters[mix].output_master;
                        target.output_master_right = kernel_masters[mix].output_master_right;
                        target.stereo_link_master = kernel_masters[mix].stereo_link_master;
                        target.output_stereo_link_master =
                            kernel_masters[mix].output_stereo_link_master;
                        target.link_input_output_masters =
                            kernel_masters[mix].link_input_output_masters;
                        target.reverb_return = kernel_masters[mix].reverb_return;
                    };
                    update(&mut mixers[mix]);
                    if !self.master_dirty[mix] && self.master_operation.is_none() {
                        update(&mut self.draft.direct_mixers[mix]);
                    }
                }
            }
            if let Some(kernel_patch_bay) = statuses
                .iter()
                .find(|status| status.kind == self.selected)
                .and_then(|status| status.kernel_patch_bay)
            {
                self.hardware_patch_bay = Some(kernel_patch_bay);
                for output in 0..OUTPUT_PAIRS {
                    if !self.patch_dirty[output] && self.patch_operation.is_none() {
                        self.draft.patch_bay[output] = kernel_patch_bay[output];
                    }
                }
            }
            if let Some(kernel_reverb) = statuses
                .iter()
                .find(|status| status.kind == self.selected)
                .and_then(|status| status.kernel_reverb.clone())
            {
                self.hardware_reverb = Some(kernel_reverb.clone());
                if !self.reverb_dirty && self.reverb_operation.is_none() {
                    self.draft.reverb = kernel_reverb;
                }
            }
            self.statuses = statuses;
            if self
                .selected_status()
                .and_then(|status| status.card)
                .is_none()
            {
                self.clear_disconnected_hardware_state();
                if let Some(connected) = self.statuses.iter().find(|status| status.card.is_some()) {
                    self.selected = connected.kind;
                }
            }
        }
        let wanted_meter_card = if self.selected == Kind::Octa {
            self.selected_status().and_then(|status| status.card)
        } else {
            None
        };
        if wanted_meter_card != self.meter_card {
            // Dropping the old receiver tells its scoped reader to disable meters and exit.
            self.meter_updates = None;
            self.meter_frame = None;
            self.meter_card = wanted_meter_card;
            if let Some(card) = wanted_meter_card {
                let (sender, receiver) = mpsc::channel();
                self.meter_updates = Some(receiver);
                thread::spawn(move || {
                    let _ = octa::meter::run(card, sender);
                });
            }
        }
        if let Some(updates) = &self.meter_updates {
            while let Ok(frame) = updates.try_recv() {
                self.meter_frame = Some(frame);
            }
        }
        if let Some(operation) = &self.operation {
            if let Ok(result) = operation.try_recv() {
                self.operation_message = Some(match result {
                    Ok(rate) => Ok(format!(
                        "Hardware and PipeWire confirmed at {}.",
                        format_rate(rate)
                    )),
                    Err(error) => Err(error),
                });
                self.operation = None;
            }
        }
        if let Some(operation) = &self.preamp_operation {
            if let Ok(result) = operation.try_recv() {
                self.operation_message = Some(match result {
                    Ok((channel, confirmed)) => {
                        self.draft.preamps[channel] = confirmed.clone();
                        if let Some(preamps) = &mut self.hardware_preamps {
                            preamps[channel] = confirmed;
                        }
                        self.preamp_dirty[channel] = false;
                        self.phantom_confirmed = false;
                        Ok(format!(
                            "Input {} was written and confirmed by hardware readback.",
                            channel + 1
                        ))
                    }
                    Err(error) => Err(error),
                });
                self.preamp_operation = None;
            }
        }
        if let Some(operation) = &self.direct_operation {
            if let Ok(result) = operation.try_recv() {
                self.operation_message = Some(match result {
                    Ok((mix, channel, confirmed)) => {
                        self.draft.direct_mixers[mix].inputs[channel] = confirmed.clone();
                        if let Some(mixers) = &mut self.hardware_direct_mixers {
                            mixers[mix].inputs[channel] = confirmed;
                        }
                        self.direct_dirty[mix][channel] = false;
                        Ok(format!(
                            "Direct Mix {} Input {} was written and confirmed by hardware readback.",
                            (b'A' + mix as u8) as char,
                            channel + 1
                        ))
                    }
                    Err(error) => Err(error),
                });
                self.direct_operation = None;
            }
        }
        if let Some(operation) = &self.wave_operation {
            if let Ok(result) = operation.try_recv() {
                self.operation_message = Some(match result {
                    Ok((mix, channel, confirmed)) => {
                        self.draft.direct_mixers[mix].wave_outputs[channel] = confirmed.clone();
                        if let Some(mixers) = &mut self.hardware_direct_mixers {
                            mixers[mix].wave_outputs[channel] = confirmed;
                        }
                        self.wave_dirty[mix][channel] = false;
                        Ok(format!(
                            "Direct Mix {} WAVE OUT {} was confirmed by hardware readback.",
                            (b'A' + mix as u8) as char,
                            channel + 1
                        ))
                    }
                    Err(error) => Err(error),
                });
                self.wave_operation = None;
            }
        }
        if let Some(operation) = &self.master_operation {
            if let Ok(result) = operation.try_recv() {
                self.operation_message = Some(match result {
                    Ok((mix, confirmed)) => {
                        self.draft.direct_mixers[mix] = confirmed.clone();
                        if let Some(mixers) = &mut self.hardware_direct_mixers {
                            mixers[mix] = confirmed;
                        }
                        self.master_dirty[mix] = false;
                        Ok(format!(
                            "Direct Mix {} masters were confirmed by hardware readback.",
                            (b'A' + mix as u8) as char
                        ))
                    }
                    Err(error) => Err(error),
                });
                self.master_operation = None;
            }
        }
        if let Some(operation) = &self.patch_operation {
            if let Ok(result) = operation.try_recv() {
                self.operation_message = Some(match result {
                    Ok((output, confirmed)) => {
                        self.draft.patch_bay[output] = confirmed;
                        if let Some(patch_bay) = &mut self.hardware_patch_bay {
                            patch_bay[output] = confirmed;
                        }
                        self.patch_dirty[output] = false;
                        Ok(format!(
                            "Patch-bay OUTPUT {}–{} was confirmed by hardware readback.",
                            output * 2 + 1,
                            output * 2 + 2
                        ))
                    }
                    Err(error) => Err(error),
                });
                self.patch_operation = None;
            }
        }
        if let Some(operation) = &self.patch_profile_operation {
            if let Ok(result) = operation.try_recv() {
                self.operation_message = Some(match result {
                    Ok(confirmed) => {
                        self.draft.patch_bay = confirmed;
                        self.hardware_patch_bay = Some(confirmed);
                        self.patch_dirty = [false; OUTPUT_PAIRS];
                        Ok("Patch-bay profile was confirmed by full hardware readback.".to_owned())
                    }
                    Err(error) => Err(error),
                });
                self.patch_profile_operation = None;
            }
        }
        if let Some(operation) = &self.reverb_operation {
            if let Ok(result) = operation.try_recv() {
                self.operation_message = Some(match result {
                    Ok(confirmed) => {
                        self.draft.reverb = confirmed.clone();
                        self.hardware_reverb = Some(confirmed);
                        self.reverb_dirty = false;
                        Ok("Reverb was confirmed by hardware readback.".to_owned())
                    }
                    Err(error) => Err(error),
                });
                self.reverb_operation = None;
            }
        }
        if let Some(operation) = &self.clear_operation {
            if let Ok(result) = operation.try_recv() {
                self.operation_message = Some(match result {
                    Ok(snapshot) => {
                        self.draft.direct_mixers = snapshot.direct_mixers.clone();
                        self.hardware_direct_mixers = Some(snapshot.direct_mixers);
                        self.direct_dirty = [[false; INPUT_MIX_CHANNELS]; DIRECT_MIXERS];
                        self.wave_dirty = [[false; INPUT_MIX_CHANNELS]; DIRECT_MIXERS];
                        Ok("All Direct Mix mute and solo flags were cleared and confirmed by hardware readback.".to_owned())
                    }
                    Err(error) => Err(error),
                });
                self.clear_operation = None;
            }
        }
        if let Some(operation) = &self.auto_sens_operation {
            if let Ok(result) = operation.try_recv() {
                self.operation_message = Some(match result {
                    Ok((action, preamps)) => {
                        self.hardware_preamps = Some(preamps.clone());
                        for channel in 0..PREAMP_CHANNELS {
                            self.draft.preamps[channel] = preamps[channel].clone();
                            self.preamp_dirty[channel] = false;
                        }
                        match action {
                            AutoSensAction::Started => {
                                self.auto_sens_running = true;
                                let seconds = match self.auto_sens_pending_duration {
                                    AutoSensDuration::Manual => None,
                                    AutoSensDuration::Seconds30 => Some(30),
                                    AutoSensDuration::Minute1 => Some(60),
                                    AutoSensDuration::Minutes3 => Some(180),
                                    AutoSensDuration::Minutes5 => Some(300),
                                };
                                self.auto_sens_deadline = seconds
                                    .map(|seconds| Instant::now() + Duration::from_secs(seconds));
                                Ok("Auto-Sens is running. Provide the loudest expected signal."
                                    .to_owned())
                            }
                            AutoSensAction::Finished => {
                                self.auto_sens_running = false;
                                self.auto_sens_deadline = None;
                                self.auto_sens_confirmed = false;
                                Ok("Auto-Sens finished; selected sensitivities were reread from hardware.".to_owned())
                            }
                            AutoSensAction::Cancelled => {
                                self.auto_sens_running = false;
                                self.auto_sens_deadline = None;
                                self.auto_sens_confirmed = false;
                                Ok("Auto-Sens was cancelled and preamp state was reread."
                                    .to_owned())
                            }
                        }
                    }
                    Err(error) => Err(error),
                });
                self.auto_sens_operation = None;
            }
        }
        if let Some(operation) = &self.preset_operation {
            if let Ok(result) = operation.try_recv() {
                self.operation_message = Some(match result {
                    Ok(confirmed) => {
                        self.hardware_preamps = Some(confirmed.preamps.clone());
                        self.hardware_direct_mixers = Some(confirmed.direct_mixers.clone());
                        self.hardware_patch_bay = Some(confirmed.patch_bay);
                        self.hardware_reverb = Some(confirmed.reverb.clone());
                        self.draft.preamps = confirmed.preamps;
                        self.draft.direct_mixers = confirmed.direct_mixers;
                        self.draft.patch_bay = confirmed.patch_bay;
                        self.draft.reverb = confirmed.reverb;
                        self.preamp_dirty = [false; PREAMP_CHANNELS];
                        self.direct_dirty = [[false; INPUT_MIX_CHANNELS]; DIRECT_MIXERS];
                        self.wave_dirty = [[false; INPUT_MIX_CHANNELS]; DIRECT_MIXERS];
                        self.master_dirty = [false; DIRECT_MIXERS];
                        self.patch_dirty = [false; OUTPUT_PAIRS];
                        self.reverb_dirty = false;
                        self.preset_phantom_confirmed = false;
                        Ok("Preset controls were written and confirmed by complete hardware readback.".to_owned())
                    }
                    Err(error) => Err(error),
                });
                self.preset_operation = None;
            }
        }
        if self.auto_sens_running
            && self.auto_sens_operation.is_none()
            && self
                .auto_sens_deadline
                .is_some_and(|deadline| Instant::now() >= deadline)
        {
            if let Some(card) = self.selected_status().and_then(|status| status.card) {
                let (sender, receiver) = mpsc::channel();
                self.auto_sens_operation = Some(receiver);
                self.auto_sens_deadline = None;
                thread::spawn(move || {
                    let result = octa::mixer::auto_sens_finish(card)
                        .map(|snapshot| (AutoSensAction::Finished, snapshot))
                        .map_err(|error| format!("{error:#}"));
                    let _ = sender.send(result);
                });
            }
        }

        egui::Panel::top("header").show(ui, |ui| {
            ui.horizontal(|ui| {
                ui.heading("Roland Capture Control");
                ui.separator();
                egui::ComboBox::from_label("Device")
                    .selected_text(self.selected.label())
                    .show_ui(ui, |ui| {
                        for kind in [Kind::Octa, Kind::Quad] {
                            let connected = self
                                .statuses
                                .iter()
                                .any(|status| status.kind == kind && status.card.is_some());
                            let label = if connected {
                                format!("{} — Connected", kind.label())
                            } else {
                                format!("{} — Offline", kind.label())
                            };
                            ui.selectable_value(&mut self.selected, kind, label);
                        }
                    });
                ui.separator();
                let color = if self.connection_label() == "Connected" {
                    egui::Color32::from_rgb(65, 180, 105)
                } else {
                    ui.visuals().weak_text_color()
                };
                ui.colored_label(color, format!("● {}", self.connection_label()));
                if self.page == Page::Presets && self.draft != self.saved_draft {
                    ui.separator();
                    ui.colored_label(ui.visuals().warn_fg_color, "Draft modified");
                }

                let control_width = 108.0;
                let drag_width = (ui.available_width() - control_width).max(8.0);
                let drag = ui.allocate_response(
                    egui::vec2(drag_width, ui.spacing().interact_size.y),
                    egui::Sense::click_and_drag(),
                );
                if drag.drag_started() {
                    ui.ctx().send_viewport_cmd(egui::ViewportCommand::StartDrag);
                }
                let maximized = ui.input(|input| input.viewport().maximized.unwrap_or(false));
                if drag.double_clicked() {
                    ui.ctx()
                        .send_viewport_cmd(egui::ViewportCommand::Maximized(!maximized));
                }

                if titlebar_button(ui, WindowControl::Minimize, "Minimize").clicked() {
                    ui.ctx()
                        .send_viewport_cmd(egui::ViewportCommand::Minimized(true));
                }
                if titlebar_button(
                    ui,
                    if maximized {
                        WindowControl::Restore
                    } else {
                        WindowControl::Maximize
                    },
                    if maximized { "Restore" } else { "Maximize" },
                )
                .clicked()
                {
                    ui.ctx()
                        .send_viewport_cmd(egui::ViewportCommand::Maximized(!maximized));
                }
                if titlebar_button(ui, WindowControl::Close, "Close").clicked() {
                    ui.ctx().send_viewport_cmd(egui::ViewportCommand::Close);
                }
            });
        });

        egui::Panel::left("navigation")
            .resizable(false)
            .default_size(170.0)
            .show(ui, |ui| {
                ui.add_space(8.0);
                for page in Page::ALL {
                    let shortcut = Page::ALL
                        .iter()
                        .position(|candidate| *candidate == page)
                        .map(|index| format!("Ctrl+{}", index + 1))
                        .unwrap();
                    if ui
                        .selectable_label(self.page == page, page.label())
                        .on_hover_text(shortcut)
                        .clicked()
                    {
                        self.page = page;
                    }
                }
            });

        egui::CentralPanel::default().show(ui, |ui| {
            ui.add_space(16.0);
            let preset_transaction_running = self.preset_operation.is_some();
            ui.add_enabled_ui(!preset_transaction_running, |ui| match self.page {
                Page::Status => self.draw_status(ui),
                Page::Inputs => self.draw_inputs(ui),
                Page::DirectMix => self.draw_direct_mix(ui),
                Page::PatchBay => self.draw_patch_bay(ui),
                Page::Outputs => self.draw_outputs(ui),
                Page::Presets => self.draw_presets(ui),
                Page::Diagnostics => self.draw_diagnostics(ui),
            });
        });
    }
}

#[derive(Clone, Copy)]
enum WindowControl {
    Minimize,
    Maximize,
    Restore,
    Close,
}

fn titlebar_button(ui: &mut egui::Ui, control: WindowControl, tooltip: &str) -> egui::Response {
    let size = egui::vec2(30.0, 26.0);
    let (rect, response) = ui.allocate_exact_size(size, egui::Sense::click());
    if response.hovered() {
        let fill = if matches!(control, WindowControl::Close) {
            egui::Color32::from_rgb(190, 55, 65)
        } else {
            ui.visuals().widgets.hovered.bg_fill
        };
        ui.painter().rect_filled(rect, 5.0, fill);
    }

    let center = rect.center();
    let color = ui.visuals().widgets.inactive.fg_stroke.color;
    let stroke = egui::Stroke::new(1.5, color);
    match control {
        WindowControl::Minimize => {
            ui.painter().line_segment(
                [
                    center + egui::vec2(-5.0, 3.5),
                    center + egui::vec2(5.0, 3.5),
                ],
                stroke,
            );
        }
        WindowControl::Maximize => {
            ui.painter().rect_stroke(
                egui::Rect::from_center_size(center, egui::vec2(10.0, 9.0)),
                1.0,
                stroke,
                egui::StrokeKind::Inside,
            );
        }
        WindowControl::Restore => {
            let back =
                egui::Rect::from_min_size(center + egui::vec2(-3.0, -5.0), egui::vec2(8.0, 7.0));
            let front =
                egui::Rect::from_min_size(center + egui::vec2(-5.0, -2.0), egui::vec2(8.0, 7.0));
            ui.painter()
                .rect_stroke(back, 1.0, stroke, egui::StrokeKind::Inside);
            ui.painter()
                .rect_filled(front, 1.0, ui.visuals().panel_fill);
            ui.painter()
                .rect_stroke(front, 1.0, stroke, egui::StrokeKind::Inside);
        }
        WindowControl::Close => {
            ui.painter().line_segment(
                [
                    center + egui::vec2(-4.5, -4.5),
                    center + egui::vec2(4.5, 4.5),
                ],
                stroke,
            );
            ui.painter().line_segment(
                [
                    center + egui::vec2(-4.5, 4.5),
                    center + egui::vec2(4.5, -4.5),
                ],
                stroke,
            );
        }
    }
    response.on_hover_text(tooltip)
}

fn compressor_slider(
    ui: &mut egui::Ui,
    label: &str,
    value: &mut RawLevel,
    maximum: u8,
    formatter: impl Fn(u8) -> String,
) -> bool {
    let mut raw = value.get().min(maximum);
    let response = ui.add(
        egui::Slider::new(&mut raw, 0..=maximum)
            .text(label)
            .custom_formatter(|value, _| formatter(value.round() as u8)),
    );
    if response.changed() {
        *value = RawLevel::new(raw);
        true
    } else {
        false
    }
}

fn bounded_unit_slider(
    ui: &mut egui::Ui,
    label: &str,
    value: &mut RawLevel,
    maximum: u8,
    formatter: impl Fn(u8) -> String,
) -> bool {
    let mut raw = value.get().min(maximum);
    if ui
        .add(
            egui::Slider::new(&mut raw, 0..=maximum)
                .text(label)
                .custom_formatter(|value, _| formatter(value.round() as u8)),
        )
        .changed()
    {
        *value = RawLevel::new(raw);
        true
    } else {
        false
    }
}

fn compact_volume_slider(ui: &mut egui::Ui, value: &mut RawLevel, label: &str) -> bool {
    let mut raw = value.get();
    let response = ui.add(
        egui::Slider::new(&mut raw, 0..=84).custom_formatter(|value, _| {
            if value < 0.5 {
                "−∞ dB".to_owned()
            } else {
                format!("{:+.0} dB", value - 72.0)
            }
        }),
    );
    response.widget_info(|| egui::WidgetInfo::slider(ui.is_enabled(), f64::from(raw), label));
    if response.on_hover_text(label).changed() {
        *value = RawLevel::new(raw);
        true
    } else {
        false
    }
}

fn pan_slider(ui: &mut egui::Ui, pan: &mut octa::model::Pan, label: &str) -> bool {
    let mut value = pan.get();
    let response = ui.add(egui::Slider::new(&mut value, -100..=100).suffix("%"));
    response.widget_info(|| egui::WidgetInfo::slider(ui.is_enabled(), f64::from(value), label));
    if response.on_hover_text(label).changed() {
        *pan = octa::model::Pan::new(value).unwrap();
        true
    } else {
        false
    }
}

fn accessible_checkbox(ui: &mut egui::Ui, value: &mut bool, label: &str) -> bool {
    let response = ui.checkbox(value, "");
    let changed = response.changed();
    response.widget_info(|| {
        egui::WidgetInfo::selected(egui::WidgetType::Checkbox, ui.is_enabled(), *value, label)
    });
    response.on_hover_text(label);
    changed
}

fn patch_source_label(source: PatchSource) -> String {
    match source {
        PatchSource::WaveOut(pair) => format!("WAVE OUT {}–{}", pair * 2 - 1, pair * 2),
        PatchSource::DirectMix(mixer) => {
            format!("DIRECT MIX {}", (b'A' + mixer - 1) as char)
        }
    }
}

fn reverb_label(kind: ReverbType) -> &'static str {
    match kind {
        ReverbType::Off => "Off",
        ReverbType::Echo => "Echo",
        ReverbType::Room => "Room",
        ReverbType::SmallHall => "Small Hall",
        ReverbType::LargeHall => "Large Hall",
        ReverbType::Plate => "Plate",
    }
}

fn auto_sens_label(duration: AutoSensDuration) -> &'static str {
    match duration {
        AutoSensDuration::Manual => "Auto-Sens: Manual",
        AutoSensDuration::Seconds30 => "Auto-Sens: 30 seconds",
        AutoSensDuration::Minute1 => "Auto-Sens: 1 minute",
        AutoSensDuration::Minutes3 => "Auto-Sens: 3 minutes",
        AutoSensDuration::Minutes5 => "Auto-Sens: 5 minutes",
    }
}

fn format_rate(rate: u32) -> String {
    match rate {
        44_100 => "44.1 kHz".into(),
        value if value % 1_000 == 0 => format!("{} kHz", value / 1_000),
        value => format!("{value} Hz"),
    }
}

/// Defer hardware writes until a mouse/touch drag is released. Keyboard,
/// checkbox, and menu changes apply on the next frame.
fn interaction_finished(ui: &egui::Ui) -> bool {
    !ui.input(|input| input.pointer.any_down())
}

fn format_clock_state(clock: octa::kernel_mixer::ClockState) -> String {
    if !clock.external {
        "Internal".into()
    } else if clock.locked {
        format!("External ({} Hz, locked)", clock.external_hz)
    } else {
        "External (unlocked)".into()
    }
}

fn merge_hardware_value<T: Clone>(
    hardware: &mut T,
    draft: &mut T,
    incoming: &T,
    dirty: bool,
    operation_pending: bool,
) {
    *hardware = incoming.clone();
    if !dirty && !operation_pending {
        *draft = incoming.clone();
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn ui_preferences_round_trip_and_default_safely() {
        let preferences = UiPreferences {
            page: Page::Diagnostics,
            selected: Kind::Quad,
            selected_input: 7,
            selected_mixer: 3,
            theme: ThemeChoice::Dark,
        };
        let encoded = serde_json::to_string(&preferences).unwrap();
        let decoded: UiPreferences = serde_json::from_str(&encoded).unwrap();
        assert_eq!(decoded.page, Page::Diagnostics);
        assert_eq!(decoded.selected, Kind::Quad);
        assert_eq!(decoded.theme, ThemeChoice::Dark);

        let old_data: UiPreferences = serde_json::from_str("{}").unwrap();
        assert_eq!(old_data.page, Page::Status);
        assert_eq!(old_data.theme, ThemeChoice::System);
    }

    #[test]
    fn hardware_refresh_preserves_dirty_draft() {
        let mut hardware = 1;
        let mut draft = 9;
        merge_hardware_value(&mut hardware, &mut draft, &2, true, false);
        assert_eq!(hardware, 2);
        assert_eq!(draft, 9);

        merge_hardware_value(&mut hardware, &mut draft, &3, false, false);
        assert_eq!(hardware, 3);
        assert_eq!(draft, 3);
    }

    #[test]
    fn formats_every_external_clock_state_without_using_internal_lock_bit() {
        use octa::kernel_mixer::ClockState;

        assert_eq!(
            format_clock_state(ClockState {
                external: false,
                locked: false,
                external_hz: 0,
                rate_flag: false,
            }),
            "Internal"
        );
        assert_eq!(
            format_clock_state(ClockState {
                external: false,
                locked: true,
                external_hz: 48_000,
                rate_flag: true,
            }),
            "Internal"
        );
        assert_eq!(
            format_clock_state(ClockState {
                external: true,
                locked: false,
                external_hz: 0,
                rate_flag: false,
            }),
            "External (unlocked)"
        );
        assert_eq!(
            format_clock_state(ClockState {
                external: true,
                locked: true,
                external_hz: 96_000,
                rate_flag: false,
            }),
            "External (96000 Hz, locked)"
        );
    }
}
