//! Publicly documented OCTA compressor raw-value domains and display units.

pub const GATE_MAX: u8 = 50;
pub const ATTACK_MAX: u8 = 124;
pub const RELEASE_MAX: u8 = 124;
pub const THRESHOLD_MAX: u8 = 40;
pub const RATIO_MAX: u8 = 13;
pub const OUTPUT_GAIN_MAX: u8 = 80;

const ATTACK_MS: [f32; 125] = [
    0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8,
    1.9, 2.0, 2.1, 2.2, 2.4, 2.5, 2.7, 2.8, 3.0, 3.2, 3.3, 3.6, 3.8, 4.0, 4.2, 4.5, 4.7, 5.0, 5.3,
    5.6, 6.0, 6.3, 6.7, 7.1, 7.5, 8.0, 8.4, 9.0, 9.4, 10.0, 10.6, 11.2, 12.0, 12.5, 13.3, 14.0,
    15.0, 16.0, 17.0, 18.0, 19.0, 20.0, 21.0, 22.4, 23.7, 25.0, 26.6, 28.0, 30.0, 31.5, 33.5, 35.5,
    37.6, 40.0, 42.2, 45.0, 47.3, 50.0, 53.0, 56.0, 60.0, 63.0, 67.0, 71.0, 75.0, 80.0, 84.0, 90.0,
    94.4, 100.0, 106.0, 112.0, 120.0, 125.0, 133.0, 140.0, 150.0, 160.0, 170.0, 180.0, 190.0,
    200.0, 210.0, 224.0, 237.0, 250.0, 266.0, 280.0, 300.0, 315.0, 335.0, 355.0, 376.0, 400.0,
    422.0, 450.0, 473.0, 500.0, 530.0, 560.0, 600.0, 630.0, 670.0, 710.0, 750.0, 800.0,
];

const RATIOS: [&str; 14] = [
    "1:1", "1:1.12", "1:1.25", "1:1.4", "1:1.6", "1:1.8", "1:2", "1:2.5", "1:3.2", "1:4", "1:5.6",
    "1:8", "1:16", "1:∞",
];

pub fn gate_label(raw: u8) -> String {
    if raw == 0 {
        "−∞ dB".into()
    } else {
        format!("{} dB", i16::from(raw) - 70)
    }
}

pub fn attack_label(raw: u8) -> String {
    format_ms(ATTACK_MS[usize::from(raw.min(ATTACK_MAX))])
}

pub fn release_label(raw: u8) -> String {
    format_ms(ATTACK_MS[usize::from(raw.min(RELEASE_MAX))] * 10.0)
}

pub fn threshold_label(raw: u8) -> String {
    format!("{} dB", i16::from(raw.min(THRESHOLD_MAX)) - 40)
}

pub fn ratio_label(raw: u8) -> &'static str {
    RATIOS[usize::from(raw.min(RATIO_MAX))]
}

pub fn output_gain_label(raw: u8) -> String {
    format!("{:+} dB", i16::from(raw.min(OUTPUT_GAIN_MAX)) - 40)
}

fn format_ms(value: f32) -> String {
    if value < 100.0 {
        format!("{value:.1} ms")
    } else {
        format!("{value:.0} ms")
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn formats_public_compressor_domains() {
        assert_eq!(gate_label(0), "−∞ dB");
        assert_eq!(gate_label(50), "-20 dB");
        assert_eq!(threshold_label(0), "-40 dB");
        assert_eq!(threshold_label(40), "0 dB");
        assert_eq!(output_gain_label(40), "+0 dB");
        assert_eq!(ratio_label(13), "1:∞");
        assert_eq!(attack_label(124), "800 ms");
        assert_eq!(release_label(124), "8000 ms");
    }
}
