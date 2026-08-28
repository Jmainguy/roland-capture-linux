import struct
import unittest

from blackfin_init_table import FLASH_BASE, parse_table


class InitTableTests(unittest.TestCase):
    def test_literal_fill_and_compact_descriptors(self):
        image = bytearray(0x100)
        struct.pack_into("<I", image, 0x10, FLASH_BASE + 0x20)
        image[0x20:0x24] = b"\x00\x00\xff\xff"
        struct.pack_into("<I", image, 0x24, 3)
        struct.pack_into("<IIII", image, 0x28, 0xFF800000, 3, 0x02, 0)
        image[0x38:0x3C] = b"abc\x00"
        struct.pack_into("<IIII", image, 0x3C, 0xFF800100, 20, 0x42, 0)
        struct.pack_into("<IIII", image, 0x4C, 0xFF800200, 40, 0xC2, 1)
        image[0x5C:0x60] = b"\xff\x00\x00\x00"

        address, descriptors = parse_table(bytes(image), 0x10)

        self.assertEqual(address, FLASH_BASE + 0x20)
        self.assertEqual([item.mode for item in descriptors], [0, 1, 3])
        self.assertEqual([item.stored_byte_count for item in descriptors], [4, 0, 4])
        self.assertEqual(descriptors[2].source_offset, 0x5C)

    def test_rejects_bad_signature(self):
        image = bytearray(0x40)
        struct.pack_into("<I", image, 0, FLASH_BASE + 0x10)
        with self.assertRaisesRegex(ValueError, "invalid table signature"):
            parse_table(bytes(image), 0)


if __name__ == "__main__":
    unittest.main()
