import struct
import unittest

from blackfin_lzss import decode_bank, decode_stream


class BlackfinLzssTests(unittest.TestCase):
    def test_literal_group(self):
        decoded, consumed = decode_stream(b"\xffABCDEFGH", 8)
        self.assertEqual(decoded, b"ABCDEFGH")
        self.assertEqual(consumed, 9)

    def test_dictionary_reference(self):
        # Four literals, then offset 0xfee with length four.
        decoded, consumed = decode_stream(b"\x0fABCD\xee\xf1", 8)
        self.assertEqual(decoded, b"ABCDABCD")
        self.assertEqual(consumed, 7)

    def test_bank_prefix_is_big_endian_output_size(self):
        image = b"prefix" + struct.pack(">I", 3) + b"\xffABCtrailer"
        decoded, consumed = decode_bank(image, 6)
        self.assertEqual(decoded, b"ABC")
        self.assertEqual(consumed, 8)

    def test_truncated_stream_is_rejected(self):
        with self.assertRaisesRegex(ValueError, "ended"):
            decode_stream(b"\xffA", 2)


if __name__ == "__main__":
    unittest.main()
