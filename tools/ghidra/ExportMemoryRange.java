// Export initialized memory bytes with little-endian 16/32-bit interpretations.
// @category RolandCapture

import java.io.File;
import java.io.PrintWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;

public class ExportMemoryRange extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 3) {
            throw new IllegalArgumentException("usage: OUTPUT_FILE START END");
        }
        Address start = toAddr(args[1]);
        Address end = toAddr(args[2]);
        Memory memory = currentProgram.getMemory();
        try (PrintWriter out = new PrintWriter(new File(args[0]))) {
            for (Address row = start; row.compareTo(end) <= 0; row = row.add(16)) {
                int count = (int)Math.min(16, end.subtract(row) + 1);
                byte[] bytes = new byte[count];
                memory.getBytes(row, bytes);
                StringBuilder hex = new StringBuilder();
                for (byte value : bytes) hex.append(String.format("%02x ", value & 0xff));
                out.printf("%s  %-48s", row, hex.toString());
                for (int offset = 0; offset + 3 < count; offset += 4) {
                    long word = (bytes[offset] & 0xffL) |
                        ((bytes[offset + 1] & 0xffL) << 8) |
                        ((bytes[offset + 2] & 0xffL) << 16) |
                        ((bytes[offset + 3] & 0xffL) << 24);
                    out.printf("  u32le[%02x]=%08x", offset, word);
                }
                out.println();
            }
        }
    }
}
