#!/usr/bin/env python3

import importlib.util
import pathlib
import unittest


MODULE_PATH = pathlib.Path(__file__).with_name("usb_midi_sysex.py")
SPEC = importlib.util.spec_from_file_location("usb_midi_sysex", MODULE_PATH)
MODULE = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(MODULE)


class UsbMidiSysexTests(unittest.TestCase):
    def test_decodes_usb_midi_sysex_cins(self):
        self.assertEqual(MODULE.event_bytes(bytes.fromhex("14 f0 41 10")), bytes.fromhex("f0 41 10"))
        self.assertEqual(MODULE.event_bytes(bytes.fromhex("15 f7 00 00")), bytes.fromhex("f7"))
        self.assertEqual(MODULE.event_bytes(bytes.fromhex("16 01 f7 00")), bytes.fromhex("01 f7"))
        self.assertEqual(MODULE.event_bytes(bytes.fromhex("17 01 02 f7")), bytes.fromhex("01 02 f7"))

    def test_parses_checksum_valid_roland_dt1(self):
        message = bytes.fromhex("f0 41 10 00 00 4d 12 00 02 00 05 01 78 f7")
        fields = MODULE.roland_fields(message)
        self.assertEqual(fields["model_name"], "OCTA-CAPTURE")
        self.assertEqual(fields["address"], "00 02 00 05")
        self.assertEqual(fields["data"], "01")
        self.assertTrue(fields["checksum_valid"])

    def test_distinguishes_studio_capture_model(self):
        message = bytes.fromhex("f0 41 10 00 00 6b 12 00 02 00 05 01 78 f7")
        fields = MODULE.roland_fields(message)
        self.assertEqual(fields["model_id"], "00 00 6b")
        self.assertEqual(fields["model_name"], "STUDIO-CAPTURE")


if __name__ == "__main__":
    unittest.main()
