//! Versioned, validated local preset files. These never imply a hardware write.

use crate::{device::Kind, model::CaptureSettings};
use anyhow::{bail, Context, Result};
use serde::{Deserialize, Serialize};
use std::fs;
use std::fs::OpenOptions;
use std::io::Write;
use std::path::Path;
use std::time::{SystemTime, UNIX_EPOCH};

pub const PRESET_SCHEMA: u32 = 1;

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct Preset {
    pub schema: u32,
    pub name: String,
    pub model: String,
    pub settings: CaptureSettings,
}

impl Preset {
    pub fn new(name: impl Into<String>, kind: Kind, settings: CaptureSettings) -> Result<Self> {
        let preset = Self {
            schema: PRESET_SCHEMA,
            name: name.into().trim().to_owned(),
            model: kind.label().to_owned(),
            settings,
        };
        preset.validate_for(kind)?;
        Ok(preset)
    }

    pub fn validate_for(&self, kind: Kind) -> Result<()> {
        if self.schema != PRESET_SCHEMA {
            bail!("unsupported preset schema {}", self.schema);
        }
        if self.name.is_empty() || self.name.chars().count() > 80 {
            bail!("preset name must contain 1..=80 characters");
        }
        if self.model != kind.label() {
            bail!(
                "preset targets {}, selected device is {}",
                self.model,
                kind.label()
            );
        }
        self.settings.validate()
    }

    pub fn load(path: &Path, kind: Kind) -> Result<Self> {
        let bytes = fs::read(path).with_context(|| format!("read preset {}", path.display()))?;
        if bytes.len() > 2 * 1024 * 1024 {
            bail!("preset exceeds the 2 MiB safety limit");
        }
        let preset: Self = serde_json::from_slice(&bytes).context("decode preset JSON")?;
        preset.validate_for(kind)?;
        Ok(preset)
    }

    pub fn save(&self, path: &Path, kind: Kind) -> Result<()> {
        self.validate_for(kind)?;
        let bytes = serde_json::to_vec_pretty(self).context("encode preset JSON")?;
        let parent = path.parent().unwrap_or_else(|| Path::new("."));
        let nonce = SystemTime::now()
            .duration_since(UNIX_EPOCH)
            .unwrap_or_default()
            .as_nanos();
        let temporary = parent.join(format!(".octa-preset-{}-{nonce}.tmp", std::process::id()));
        let result = (|| -> Result<()> {
            let mut file = OpenOptions::new()
                .create_new(true)
                .write(true)
                .open(&temporary)
                .with_context(|| format!("create temporary preset {}", temporary.display()))?;
            file.write_all(&bytes).context("write temporary preset")?;
            file.sync_all().context("flush temporary preset")?;
            fs::rename(&temporary, path)
                .with_context(|| format!("replace preset {}", path.display()))?;
            Ok(())
        })();
        if result.is_err() {
            let _ = fs::remove_file(&temporary);
        }
        result
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::time::{SystemTime, UNIX_EPOCH};

    fn path(label: &str) -> std::path::PathBuf {
        std::env::temp_dir().join(format!(
            "octa-preset-{label}-{}-{}.json",
            std::process::id(),
            SystemTime::now()
                .duration_since(UNIX_EPOCH)
                .unwrap()
                .as_nanos()
        ))
    }

    #[test]
    fn round_trips_validated_preset() {
        let path = path("roundtrip");
        let expected = Preset::new("Studio", Kind::Octa, CaptureSettings::default()).unwrap();
        expected.save(&path, Kind::Octa).unwrap();
        let actual = Preset::load(&path, Kind::Octa).unwrap();
        let _ = std::fs::remove_file(path);
        assert_eq!(actual, expected);
    }

    #[test]
    fn rejects_wrong_model_and_schema() {
        let mut preset = Preset::new("Studio", Kind::Octa, CaptureSettings::default()).unwrap();
        assert!(preset.validate_for(Kind::Quad).is_err());
        preset.schema = 99;
        assert!(preset.validate_for(Kind::Octa).is_err());
    }

    #[test]
    fn rejects_invalid_embedded_state() {
        let mut settings = CaptureSettings::default();
        settings.system.lcd_contrast = 20;
        assert!(Preset::new("Bad", Kind::Octa, settings).is_err());
    }

    #[test]
    fn older_schema_one_system_objects_receive_new_defaults() {
        let preset = Preset::new("Legacy", Kind::Octa, CaptureSettings::default()).unwrap();
        let mut value = serde_json::to_value(preset).unwrap();
        let system = value["settings"]["system"].as_object_mut().unwrap();
        for field in [
            "clock_sync",
            "stereo_link_mode",
            "solo_dim",
            "auto_sens_automatic",
            "auto_sens_margin_db",
        ] {
            system.remove(field);
        }
        let decoded: Preset = serde_json::from_value(value).unwrap();
        decoded.validate_for(Kind::Octa).unwrap();
        assert_eq!(
            decoded.settings.system,
            crate::model::SystemSettings::default()
        );
    }
}
