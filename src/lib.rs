//! Shared OCTA/QUAD-CAPTURE device support.
//!
//! Both the command-line tool and desktop control panel use these modules. UI
//! code must not duplicate device protocol details.

pub mod alsa;
pub mod compressor;
pub mod control;
pub mod device;
pub mod diagnostics;
pub mod identity;
pub mod kernel_mixer;
pub mod meter;
pub mod mixer;
pub mod model;
pub mod observe;
pub mod pipewire;
pub mod preset;
pub mod preset_apply;
pub mod probe;
pub mod quad;
pub mod reverb;
pub mod seq_midi;
pub mod state;
pub mod sysex;
pub mod usb_rate;
pub mod usb_telemetry;
