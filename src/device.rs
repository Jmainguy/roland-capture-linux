//! Roland Capture device kinds (OCTA-CAPTURE / QUAD-CAPTURE).

use anyhow::{bail, Result};
use clap::ValueEnum;
use serde::{Deserialize, Serialize};
use std::fmt;

#[derive(Clone, Copy, Debug, PartialEq, Eq, ValueEnum, Serialize, Deserialize)]
pub enum Kind {
    Octa,
    Quad,
}

impl Kind {
    pub fn label(self) -> &'static str {
        match self {
            Self::Octa => "OCTA-CAPTURE",
            Self::Quad => "QUAD-CAPTURE",
        }
    }

    pub fn usbid(self) -> &'static str {
        match self {
            Self::Octa => "0582:0120",
            Self::Quad => "0582:012f",
        }
    }

    pub fn usb_pid(self) -> u16 {
        match self {
            Self::Octa => 0x0120,
            Self::Quad => 0x012f,
        }
    }

    /// Substring used in PipeWire / pactl node and card names.
    pub fn pw_match(self) -> &'static str {
        match self {
            Self::Octa => "OCTA-CAPTURE",
            Self::Quad => "QUAD-CAPTURE",
        }
    }

    /// Playback / capture channel counts for the USB altsetting at `hz`.
    pub fn channels(self, hz: u32) -> (u32, u32) {
        match (self, hz) {
            (Self::Octa, 192000) => (4, 4),
            (Self::Octa, _) => (10, 12),
            (Self::Quad, 192000) => (2, 2),
            (Self::Quad, _) => (4, 6),
        }
    }

    pub fn play_position_full(self, hz: u32) -> String {
        let (play, _) = self.channels(hz);
        match (self, play) {
            (Self::Octa, 4) => "[ AUX0, AUX1, AUX2, AUX3 ]".into(),
            (Self::Octa, _) => {
                "[ AUX0, AUX1, AUX2, AUX3, AUX4, AUX5, AUX6, AUX7, AUX8, AUX9 ]".into()
            }
            (Self::Quad, 2) => "[ FL, FR ]".into(),
            (Self::Quad, _) => "[ AUX0, AUX1, AUX2, AUX3 ]".into(),
        }
    }

    pub fn cap_position_full(self, hz: u32) -> String {
        let (_, cap) = self.channels(hz);
        match (self, cap) {
            (Self::Octa, 4) => "[ AUX0, AUX1, AUX2, AUX3 ]".into(),
            (Self::Octa, _) => {
                "[ AUX0, AUX1, AUX2, AUX3, AUX4, AUX5, AUX6, AUX7, AUX8, AUX9, AUX10, AUX11 ]"
                    .into()
            }
            (Self::Quad, 2) => "[ FL, FR ]".into(),
            (Self::Quad, _) => "[ AUX0, AUX1, AUX2, AUX3, AUX4, AUX5 ]".into(),
        }
    }

    /// PipeWire/WirePlumber card profile to enable after a rate change.
    ///
    /// Both devices use `pro-audio` here so rate switches always open the raw
    /// PCM. WirePlumber may flip back to `HiFi` (higher priority) for desktop
    /// independent channel endpoints. At 192 kHz HiFi cannot open the reduced channel
    /// altsettings — stay on Pro Audio.
    pub fn card_profile(self) -> &'static str {
        match self {
            Self::Octa | Self::Quad => "pro-audio",
        }
    }

    pub fn other(self) -> Self {
        match self {
            Self::Octa => Self::Quad,
            Self::Quad => Self::Octa,
        }
    }
}

impl fmt::Display for Kind {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.write_str(self.label())
    }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq, ValueEnum)]
pub enum Select {
    Auto,
    Octa,
    Quad,
}

impl Select {
    pub fn resolve(self) -> Result<Kind> {
        let octa = crate::alsa::card_present(Kind::Octa);
        let quad = crate::alsa::card_present(Kind::Quad);
        match self {
            Self::Octa => {
                if !octa {
                    bail!("OCTA-CAPTURE not found");
                }
                Ok(Kind::Octa)
            }
            Self::Quad => {
                if !quad {
                    bail!("QUAD-CAPTURE not found");
                }
                Ok(Kind::Quad)
            }
            Self::Auto => match (octa, quad) {
                (true, false) => Ok(Kind::Octa),
                (false, true) => Ok(Kind::Quad),
                (true, true) => bail!(
                    "both OCTA-CAPTURE and QUAD-CAPTURE are present — \
                     pass --device octa or --device quad"
                ),
                (false, false) => bail!("no Roland Capture device found (OCTA or QUAD)"),
            },
        }
    }
}
