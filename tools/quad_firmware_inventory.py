#!/usr/bin/env python3
"""Inventory Roland QUAD-CAPTURE updater SysEx without sending it."""

import argparse
import json
from pathlib import Path


def vlq(data: bytes, pos: int) -> tuple[int, int]:
    value = 0
    while True:
        byte = data[pos]
        pos += 1
        value = (value << 7) | (byte & 0x7F)
        if not byte & 0x80:
            return value, pos


def sysex_events(path: Path) -> list[bytes]:
    data = path.read_bytes()
    if data[:4] != b"MThd":
        raise ValueError(f"{path}: not a Standard MIDI File")
    header_len = int.from_bytes(data[4:8], "big")
    pos = 8 + header_len
    events: list[bytes] = []
    running = None
    while pos < len(data):
        if data[pos:pos + 4] != b"MTrk":
            raise ValueError(f"{path}: missing MTrk at 0x{pos:x}")
        size = int.from_bytes(data[pos + 4:pos + 8], "big")
        pos += 8
        end = pos + size
        while pos < end:
            _, pos = vlq(data, pos)
            status = data[pos]
            if status & 0x80:
                pos += 1
                if status < 0xF0:
                    running = status
            elif running is not None:
                status = running
            else:
                raise ValueError(f"{path}: missing running status at 0x{pos:x}")
            if status in (0xF0, 0xF7):
                length, pos = vlq(data, pos)
                payload = data[pos:pos + length]
                pos += length
                events.append(bytes([status]) + payload)
                running = None
            elif status == 0xFF:
                pos += 1
                length, pos = vlq(data, pos)
                pos += length
                running = None
            elif status in (0xF1, 0xF3):
                pos += 1
                running = None
            elif status == 0xF2:
                pos += 2
                running = None
            elif status >= 0xF0:
                running = None
            else:
                pos += 1 if status & 0xE0 == 0xC0 else 2
        pos = end
    return events


def describe(message: bytes) -> dict:
    result = {"bytes": len(message), "hex_prefix": message[:20].hex(" ")}
    command_index = next(
        (index for index in range(4, min(7, len(message))) if message[index] in (0x11, 0x12)),
        None,
    )
    if command_index is not None and len(message) >= command_index + 7 and message[0] == 0xF0 and message[1] == 0x41:
        address_start = command_index + 1
        result.update(
            manufacturer="Roland",
            device_id=message[2],
            model_id=message[3:command_index].hex(" "),
            command=message[command_index],
            address=message[address_start:address_start + 4].hex(" "),
        )
        body = message[address_start:-2]
        result["checksum_valid"] = ((sum(body) + message[-2]) & 0x7F) == 0
        result["data_bytes"] = max(0, len(message) - address_start - 6)
    return result


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("files", nargs="+", type=Path)
    args = parser.parse_args()
    report = []
    for path in args.files:
        messages = sysex_events(path)
        report.append({
            "file": str(path),
            "sysex_count": len(messages),
            "messages": [describe(message) for message in messages],
        })
    print(json.dumps(report, indent=2))


if __name__ == "__main__":
    main()
