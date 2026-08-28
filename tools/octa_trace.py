#!/usr/bin/env python3
"""Normalize and compare OCTA/QUAD USB captures without retaining host noise."""

from __future__ import annotations

import argparse
import collections
import csv
import json
import pathlib
import subprocess
import sys


FIELDS = (
    "frame.number",
    "frame.time_relative",
    "usb.bus_id",
    "usb.device_address",
    "usb.idVendor",
    "usb.idProduct",
    "usb.urb_type",
    "usb.transfer_type",
    "usb.endpoint_address",
    "usb.request_in",
    "usb.setup.bRequest",
    "usb.setup.wValue",
    "usb.setup.wIndex",
    "usb.setup.wLength",
    "usb.data_len",
    "usb.capdata",
    "usb.control.Response",
    "usb.data_fragment",
)

KEYS = tuple(field.replace(".", "_") for field in FIELDS)
MANIFEST_FIELDS = (
    "model", "usb_id", "serial_hash", "firmware", "host_os", "panel_version",
    "control", "initial_value", "requested_value", "observed_value",
    "sample_rate", "audio_active", "persistence", "notes",
)


def clean_hex(value: str) -> str | None:
    value = value.strip().lower().replace(":", "")
    return value or None


def normalize_row(row: list[str]) -> dict[str, object]:
    row += [""] * (len(KEYS) - len(row))
    record: dict[str, object] = {
        key: value.strip() or None for key, value in zip(KEYS, row, strict=True)
    }
    for key in ("usb_capdata", "usb_control_Response", "usb_data_fragment"):
        record[key] = clean_hex(str(record[key] or ""))
    return record


def signature(record: dict[str, object]) -> str:
    ignored = {
        "frame_number",
        "frame_time_relative",
        "usb_request_in",
        "request_frame",
        "completion_frame",
        "time_relative",
    }
    stable = {key: value for key, value in record.items() if key not in ignored}
    return json.dumps(stable, sort_keys=True, separators=(",", ":"))


def tshark_rows(capture: pathlib.Path, product: str, bus: int | None, address: int | None):
    if (bus is None) != (address is None):
        raise SystemExit("--bus and --address must be supplied together")
    display_filter = f"usb.idVendor == 0x0582 && usb.idProduct == 0x{product}"
    if bus is not None:
        display_filter = f"usb.bus_id == {bus} && usb.device_address == {address}"
    command = [
        "tshark", "-n", "-r", str(capture),
        "-Y", display_filter,
        "-T", "fields", "-E", "separator=/t", "-E", "quote=d",
        "-E", "occurrence=f",
    ]
    for field in FIELDS:
        command += ["-e", field]
    process = subprocess.Popen(command, stdout=subprocess.PIPE, text=True)
    assert process.stdout is not None
    yield from csv.reader(process.stdout, delimiter="\t", quotechar='"')
    if process.wait() != 0:
        raise SystemExit("tshark failed while decoding capture")


def normalize(args: argparse.Namespace) -> None:
    count = 0
    with args.output.open("w", encoding="utf-8") as output:
        for row in tshark_rows(args.capture, args.product, args.bus, args.address):
            print(json.dumps(normalize_row(row), separators=(",", ":")), file=output)
            count += 1
    if count < 2 and args.bus is None:
        print(
            "warning: fewer than two matching packets; Linux usbmon usually requires "
            "--bus and --address from lsusb",
            file=sys.stderr,
        )


def load_counts(path: pathlib.Path) -> collections.Counter[str]:
    counts: collections.Counter[str] = collections.Counter()
    with path.open(encoding="utf-8") as source:
        for line_number, line in enumerate(source, 1):
            try:
                record = json.loads(line)
            except json.JSONDecodeError as error:
                raise SystemExit(f"{path}:{line_number}: invalid JSON: {error}") from error
            counts[signature(record)] += 1
    return counts


def control_transactions(records):
    pending = {}
    for record in records:
        frame = record.get("frame_number")
        if (
            record.get("usb_transfer_type") == "0x02"
            and record.get("usb_urb_type") == "'S'"
            and record.get("usb_setup_bRequest") is not None
        ):
            pending[frame] = record
            continue
        request_frame = record.get("usb_request_in")
        request = pending.pop(request_frame, None)
        if request is None:
            continue
        endpoint = str(request.get("usb_endpoint_address") or "")
        inbound = endpoint.lower() in ("0x80", "0x00:0x80") or (
            int(endpoint, 16) & 0x80 != 0 if endpoint.startswith("0x") else False
        )
        yield {
            "request_frame": request_frame,
            "completion_frame": frame,
            "time_relative": request.get("frame_time_relative"),
            "direction": "in" if inbound else "out",
            "endpoint": request.get("usb_endpoint_address"),
            "request": request.get("usb_setup_bRequest"),
            "value": request.get("usb_setup_wValue"),
            "index": request.get("usb_setup_wIndex"),
            "length": request.get("usb_setup_wLength"),
            "payload": request.get("usb_data_fragment") or request.get("usb_capdata"),
            "response": record.get("usb_control_Response")
            or record.get("usb_data_fragment")
            or record.get("usb_capdata"),
        }


def decode_controls(args: argparse.Namespace) -> None:
    records = []
    with args.trace.open(encoding="utf-8") as source:
        for line_number, line in enumerate(source, 1):
            try:
                records.append(json.loads(line))
            except json.JSONDecodeError as error:
                raise SystemExit(f"{args.trace}:{line_number}: invalid JSON: {error}") from error
    with args.output.open("w", encoding="utf-8") as output:
        for transaction in control_transactions(records):
            print(json.dumps(transaction, separators=(",", ":")), file=output)


def diff(args: argparse.Namespace) -> None:
    before = load_counts(args.before)
    action = load_counts(args.action)
    changes = []
    for item in sorted(before.keys() | action.keys()):
        delta = action[item] - before[item]
        if delta:
            changes.append({"delta": delta, "transaction": json.loads(item)})
    json.dump(changes, sys.stdout, indent=2)
    print()


def validate_manifest(args: argparse.Namespace) -> None:
    try:
        manifest = json.loads(args.manifest.read_text(encoding="utf-8"))
    except (OSError, json.JSONDecodeError) as error:
        raise SystemExit(f"cannot read manifest: {error}") from error
    missing = [field for field in MANIFEST_FIELDS if field not in manifest]
    if missing:
        raise SystemExit("manifest missing fields: " + ", ".join(missing))
    if manifest["model"] not in ("OCTA-CAPTURE", "QUAD-CAPTURE"):
        raise SystemExit("model must be OCTA-CAPTURE or QUAD-CAPTURE")
    expected_id = "0582:0120" if manifest["model"] == "OCTA-CAPTURE" else "0582:012f"
    if manifest["usb_id"].lower() != expected_id:
        raise SystemExit(f"usb_id must be {expected_id} for {manifest['model']}")
    serial_hash = str(manifest["serial_hash"])
    if len(serial_hash) < 12 or any(character not in "0123456789abcdef" for character in serial_hash.lower()):
        raise SystemExit("serial_hash must be at least 12 hexadecimal characters; never store a raw serial")
    if manifest["sample_rate"] not in (44100, 48000, 96000, 192000):
        raise SystemExit("sample_rate is not supported")
    if not isinstance(manifest["audio_active"], bool):
        raise SystemExit("audio_active must be true or false")
    print(f"OK: {args.manifest}")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    commands = parser.add_subparsers(required=True)
    normalizer = commands.add_parser("normalize", help="convert pcap/pcapng to stable JSONL")
    normalizer.add_argument("capture", type=pathlib.Path)
    normalizer.add_argument("output", type=pathlib.Path)
    normalizer.add_argument("--product", choices=("0120", "012f"), default="0120")
    normalizer.add_argument("--bus", type=int, help="USB bus from lsusb (Linux usbmon)")
    normalizer.add_argument("--address", type=int, help="USB device number from lsusb (Linux usbmon)")
    normalizer.set_defaults(function=normalize)
    differ = commands.add_parser("diff", help="compare transaction frequency between JSONL traces")
    differ.add_argument("before", type=pathlib.Path)
    differ.add_argument("action", type=pathlib.Path)
    differ.set_defaults(function=diff)
    controls = commands.add_parser(
        "controls", help="pair normalized USB control submissions and completions"
    )
    controls.add_argument("trace", type=pathlib.Path)
    controls.add_argument("output", type=pathlib.Path)
    controls.set_defaults(function=decode_controls)
    validator = commands.add_parser("validate-manifest", help="validate corpus metadata and privacy fields")
    validator.add_argument("manifest", type=pathlib.Path)
    validator.set_defaults(function=validate_manifest)
    args = parser.parse_args()
    args.function(args)


if __name__ == "__main__":
    main()
