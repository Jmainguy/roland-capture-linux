#!/usr/bin/env python3
"""Decode the LZSS application banks used by OCTA-CAPTURE firmware v1.51.

The decoder is reconstructed from the initialized Blackfin L1 routine at
0xffa0811c. Each bank begins with a big-endian uncompressed byte count followed
by a classic 4096-byte LZSS stream whose dictionary cursor starts at 0xfee.
"""

from __future__ import annotations

import argparse
import struct
from pathlib import Path


WINDOW_SIZE = 4096
WINDOW_MASK = WINDOW_SIZE - 1
INITIAL_CURSOR = 0xFEE


def decode_stream(encoded: bytes, output_size: int) -> tuple[bytes, int]:
    if output_size < 0:
        raise ValueError("output size cannot be negative")
    window = bytearray(WINDOW_SIZE)
    cursor = INITIAL_CURSOR
    source = 0
    flags = 0
    output = bytearray()

    def take() -> int:
        nonlocal source
        if source >= len(encoded):
            raise ValueError(
                f"compressed stream ended at {source} with "
                f"{output_size - len(output)} output bytes still required"
            )
        value = encoded[source]
        source += 1
        return value

    while len(output) < output_size:
        flags >>= 1
        if flags & 0x100 == 0:
            flags = take() | 0xFF00
        if flags & 1:
            value = take()
            output.append(value)
            window[cursor] = value
            cursor = (cursor + 1) & WINDOW_MASK
            continue

        low = take()
        packed = take()
        reference = low | ((packed & 0xF0) << 4)
        count = (packed & 0x0F) + 3
        for offset in range(count):
            value = window[(reference + offset) & WINDOW_MASK]
            output.append(value)
            window[cursor] = value
            cursor = (cursor + 1) & WINDOW_MASK
            if len(output) == output_size:
                break

    return bytes(output), source


def decode_bank(image: bytes, bank_payload_offset: int) -> tuple[bytes, int]:
    if bank_payload_offset < 0 or bank_payload_offset + 4 > len(image):
        raise ValueError("bank payload offset is outside the firmware image")
    output_size = struct.unpack_from(">I", image, bank_payload_offset)[0]
    if output_size == 0:
        raise ValueError("bank declares an empty runtime image")
    decoded, consumed = decode_stream(image[bank_payload_offset + 4 :], output_size)
    return decoded, consumed + 4


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("firmware", type=Path)
    parser.add_argument("output", type=Path)
    parser.add_argument(
        "--bank-payload-offset",
        type=lambda value: int(value, 0),
        default=0x20100,
        help="offset of the bank's big-endian runtime-size word",
    )
    args = parser.parse_args()
    decoded, consumed = decode_bank(
        args.firmware.read_bytes(), args.bank_payload_offset
    )
    args.output.write_bytes(decoded)
    print(
        f"decoded {len(decoded)} bytes from {consumed} bank bytes "
        f"at offset 0x{args.bank_payload_offset:x}"
    )


if __name__ == "__main__":
    main()
