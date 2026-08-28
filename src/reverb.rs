//! OCTA-CAPTURE reverb parameter display domains.

pub const PRE_DELAY_MAX: u8 = 12;
pub const TIME_MAX: u8 = 49;

const PRE_DELAY_MS: [f32; 13] = [
    0.0, 0.1, 0.2, 0.4, 0.8, 1.6, 3.2, 6.4, 10.0, 20.0, 40.0, 80.0, 160.0,
];

pub fn pre_delay_label(raw: u8) -> String {
    let value = PRE_DELAY_MS[usize::from(raw.min(PRE_DELAY_MAX))];
    if value < 10.0 {
        format!("{value:.1} ms")
    } else {
        format!("{value:.0} ms")
    }
}

pub fn time_label(raw: u8) -> String {
    format!("{:.1} s", (f32::from(raw.min(TIME_MAX)) + 1.0) / 10.0)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn formats_public_reverb_domains() {
        assert_eq!(pre_delay_label(0), "0.0 ms");
        assert_eq!(pre_delay_label(12), "160 ms");
        assert_eq!(time_label(0), "0.1 s");
        assert_eq!(time_label(49), "5.0 s");
    }
}
