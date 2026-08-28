#!/usr/bin/env python3
"""Describe Roland's Blackfin second-stage initialization table.

This is an offline evidence tool.  It reads a firmware image and emits only
addresses, lengths, flags, and source offsets; it neither extracts nor writes
proprietary payload bytes.
"""

from __future__ import annotations

import argparse
import json
import struct
from dataclasses import asdict, dataclass
from pathlib import Path


FLASH_BASE = 0x20000000


@dataclass(frozen=True)
class Descriptor:
    index: int
    descriptor_offset: int
    target_address: int
    byte_count: int
    flags: int
    argument: int
    mode: int
    source_offset: int
    stored_byte_count: int


def _u32(image: bytes, offset: int) -> int:
    if offset < 0 or offset + 4 > len(image):
        raise ValueError(f"32-bit read outside image at 0x{offset:x}")
    return struct.unpack_from("<I", image, offset)[0]


def parse_table(
    image: bytes, pointer_offset: int, flash_base: int = FLASH_BASE
) -> tuple[int, list[Descriptor]]:
    table_address = _u32(image, pointer_offset)
    table_offset = table_address - flash_base
    if table_offset < 0 or table_offset + 8 > len(image):
        raise ValueError(f"table pointer 0x{table_address:08x} is outside flash image")
    if image[table_offset] != 0 or image[table_offset + 2 : table_offset + 4] != b"\xff\xff":
        raise ValueError(f"invalid table signature at 0x{table_offset:x}")

    count = _u32(image, table_offset + 4)
    if count > 4096:
        raise ValueError(f"implausible descriptor count {count}")
    cursor = table_offset + 8
    descriptors: list[Descriptor] = []
    for index in range(count):
        if cursor + 16 > len(image):
            raise ValueError(f"descriptor {index} is truncated")
        target, byte_count, flags, argument = struct.unpack_from("<IIII", image, cursor)
        if flags & 0x3F != 0x02:
            raise ValueError(f"descriptor {index} has unsupported flags 0x{flags:x}")
        mode = (flags & 0x1C0) >> 6
        source_offset = cursor + 16
        if mode == 0:  # literal bytes follow the descriptor
            stored_byte_count = (byte_count + 3) & ~3
        elif mode == 1:  # zero/fill block; no stored payload follows
            stored_byte_count = 0
        elif mode == 3:  # compact fill value follows; argument is its byte count
            stored_byte_count = (argument + 3) & ~3
        else:
            raise ValueError(f"descriptor {index} uses unsupported mode {mode}")
        if source_offset + stored_byte_count > len(image):
            raise ValueError(f"descriptor {index} payload is truncated")
        descriptors.append(
            Descriptor(
                index=index,
                descriptor_offset=cursor,
                target_address=target,
                byte_count=byte_count,
                flags=flags,
                argument=argument,
                mode=mode,
                source_offset=source_offset,
                stored_byte_count=stored_byte_count,
            )
        )
        cursor = source_offset + stored_byte_count
    return table_address, descriptors


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("firmware", type=Path)
    parser.add_argument("--pointer-offset", type=lambda value: int(value, 0), default=0x23A0)
    parser.add_argument("--flash-base", type=lambda value: int(value, 0), default=FLASH_BASE)
    args = parser.parse_args()
    image = args.firmware.read_bytes()
    table_address, descriptors = parse_table(image, args.pointer_offset, args.flash_base)
    print(
        json.dumps(
            {
                "firmware_size": len(image),
                "pointer_offset": args.pointer_offset,
                "table_address": table_address,
                "descriptor_count": len(descriptors),
                "descriptors": [asdict(item) for item in descriptors],
            },
            indent=2,
            sort_keys=True,
        )
    )


if __name__ == "__main__":
    main()
