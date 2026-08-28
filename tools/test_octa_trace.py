import importlib.util
import json
import pathlib
import tempfile
import unittest
from argparse import Namespace
from contextlib import redirect_stdout
from io import StringIO


PATH = pathlib.Path(__file__).with_name("octa_trace.py")
SPEC = importlib.util.spec_from_file_location("octa_trace", PATH)
TRACE = importlib.util.module_from_spec(SPEC)
assert SPEC.loader is not None
SPEC.loader.exec_module(TRACE)


class TraceTests(unittest.TestCase):
    def test_normalizes_payload_hex(self):
        row = [""] * len(TRACE.KEYS)
        row[0:2] = ["12", "0.5"]
        row[-1] = "40:00:77"
        record = TRACE.normalize_row(row)
        self.assertEqual(record["usb_data_fragment"], "400077")

    def test_signature_ignores_capture_specific_fields(self):
        one = {"frame_number": "1", "frame_time_relative": "0.1", "usb_request_in": None, "x": "a"}
        two = {"frame_number": "9", "frame_time_relative": "7.2", "usb_request_in": "8", "x": "a"}
        self.assertEqual(TRACE.signature(one), TRACE.signature(two))

        paired_one = {
            "request_frame": "12", "completion_frame": "13",
            "time_relative": "0.2", "request": "3",
        }
        paired_two = {
            "request_frame": "80", "completion_frame": "81",
            "time_relative": "4.9", "request": "3",
        }
        self.assertEqual(TRACE.signature(paired_one), TRACE.signature(paired_two))

    def test_signature_retains_protocol_fields(self):
        one = {"frame_number": "1", "usb_setup_wValue": "0x1"}
        two = {"frame_number": "1", "usb_setup_wValue": "0x2"}
        self.assertNotEqual(TRACE.signature(one), TRACE.signature(two))

    def test_validates_complete_private_manifest(self):
        manifest = {field: "unknown" for field in TRACE.MANIFEST_FIELDS}
        manifest.update({
            "model": "OCTA-CAPTURE", "usb_id": "0582:0120",
            "serial_hash": "0123456789abcdef", "sample_rate": 96000,
            "audio_active": False,
        })
        with tempfile.TemporaryDirectory() as directory:
            path = pathlib.Path(directory, "manifest.json")
            path.write_text(json.dumps(manifest), encoding="utf-8")
            with redirect_stdout(StringIO()):
                TRACE.validate_manifest(Namespace(manifest=path))

    def test_rejects_raw_serial_in_manifest(self):
        manifest = {field: "unknown" for field in TRACE.MANIFEST_FIELDS}
        manifest.update({
            "model": "OCTA-CAPTURE", "usb_id": "0582:0120",
            "serial_hash": "ISRLD2D7DA9A", "sample_rate": 96000,
            "audio_active": False,
        })
        with tempfile.TemporaryDirectory() as directory:
            path = pathlib.Path(directory, "manifest.json")
            path.write_text(json.dumps(manifest), encoding="utf-8")
            with self.assertRaises(SystemExit):
                TRACE.validate_manifest(Namespace(manifest=path))

    def test_pairs_control_write_and_read(self):
        write_submit = {
            "frame_number": "10", "frame_time_relative": "1.0",
            "usb_transfer_type": "0x02", "usb_urb_type": "'S'",
            "usb_endpoint_address": "0x00", "usb_setup_bRequest": "3",
            "usb_setup_wValue": "0x0008", "usb_setup_wIndex": "0",
            "usb_setup_wLength": "4", "usb_data_fragment": "40007701",
        }
        write_complete = {
            "frame_number": "11", "usb_request_in": "10",
            "usb_transfer_type": "0x02", "usb_urb_type": "'C'",
        }
        read_submit = {
            "frame_number": "12", "frame_time_relative": "1.1",
            "usb_transfer_type": "0x02", "usb_urb_type": "'S'",
            "usb_endpoint_address": "0x80", "usb_setup_bRequest": "3",
            "usb_setup_wValue": "0x0001", "usb_setup_wIndex": "0",
            "usb_setup_wLength": "4", "usb_data_fragment": None,
        }
        read_complete = {
            "frame_number": "13", "usb_request_in": "12",
            "usb_transfer_type": "0x02", "usb_urb_type": "'C'",
            "usb_control_Response": "00770101",
        }
        transactions = list(TRACE.control_transactions([
            write_submit, write_complete, read_submit, read_complete,
        ]))
        self.assertEqual(transactions[0]["direction"], "out")
        self.assertEqual(transactions[0]["payload"], "40007701")
        self.assertEqual(transactions[1]["direction"], "in")
        self.assertEqual(transactions[1]["response"], "00770101")


if __name__ == "__main__":
    unittest.main()
