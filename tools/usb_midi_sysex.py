#!/usr/bin/env python3
"""Reconstruct USB-MIDI SysEx messages from legacy usbmon pcaps.

Unlike octa_trace.py, this consumes interrupt/bulk USB-MIDI event packets
(four bytes each) and follows messages across URBs. Output is JSONL so captures
can be diffed and reviewed without relying on Wireshark's presentation layer.
"""

import argparse
import json
import subprocess
import sys


def event_bytes(event):
    cin = event[0] & 0x0F
    lengths = {0x4: 3, 0x5: 1, 0x6: 2, 0x7: 3}
    length = lengths.get(cin)
    return None if length is None else event[1 : 1 + length]


def roland_fields(message):
    result = {"sysex": message.hex(" ")}
    if len(message) < 13 or message[0] != 0xF0 or message[-1] != 0xF7:
        return result
    if message[1] != 0x41:
        return result
    model_id = message[3:6].hex(" ")
    model_names = {
        "00 00 4d": "OCTA-CAPTURE",
        "00 00 6b": "STUDIO-CAPTURE",
    }
    result.update(
        {
            "manufacturer": "Roland",
            "device_id": message[2],
            "model_id": model_id,
            "model_name": model_names.get(model_id, "unknown"),
            "command": message[6],
            "address": message[7:11].hex(" "),
            "data": message[11:-2].hex(" "),
            "checksum": message[-2],
            "checksum_valid": ((sum(message[7:-2]) + message[-2]) & 0x7F) == 0,
        }
    )
    return result


def rows(path):
    command = [
        "tshark",
        "-r",
        path,
        "-Y",
        "usb.capdata && (usb.urb_type == 0x53 || usb.urb_type == 0x43)",
        "-T",
        "fields",
        "-E",
        "separator=|",
        "-e",
        "frame.number",
        "-e",
        "frame.time_relative",
        "-e",
        "usb.urb_type",
        "-e",
        "usb.endpoint_address",
        "-e",
        "usb.capdata",
    ]
    completed = subprocess.run(command, check=True, text=True, capture_output=True)
    for line in completed.stdout.splitlines():
        fields = line.split("|", 4)
        if len(fields) != 5 or not fields[4]:
            continue
        yield int(fields[0]), fields[1], fields[2].strip("'"), fields[3], bytes.fromhex(fields[4])


def decode(path):
    streams = {}
    for frame, timestamp, urb_type, endpoint, payload in rows(path):
        direction = "host_to_device" if urb_type == "S" and not endpoint.startswith("0x8") else "device_to_host"
        for offset in range(0, len(payload) - 3, 4):
            event = payload[offset : offset + 4]
            content = event_bytes(event)
            if content is None:
                continue
            cable = event[0] >> 4
            key = (direction, endpoint, cable)
            state = streams.setdefault(key, {"bytes": bytearray(), "first": frame})
            for byte in content:
                if byte == 0xF0:
                    state["bytes"] = bytearray([byte])
                    state["first"] = frame
                elif state["bytes"]:
                    state["bytes"].append(byte)
                if byte == 0xF7 and state["bytes"]:
                    record = {
                        "first_frame": state["first"],
                        "last_frame": frame,
                        "time_relative": timestamp,
                        "direction": direction,
                        "endpoint": endpoint,
                        "cable": cable,
                    }
                    record.update(roland_fields(bytes(state["bytes"])))
                    print(json.dumps(record, separators=(",", ":")))
                    state["bytes"].clear()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("pcap")
    args = parser.parse_args()
    try:
        decode(args.pcap)
    except (OSError, subprocess.CalledProcessError, ValueError) as error:
        print(f"error: {error}", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
