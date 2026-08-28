// Find materialized parameter descriptors by their four-byte Roland address.
// @category RolandCapture

import java.io.File;
import java.io.PrintWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressRange;
import ghidra.program.model.mem.Memory;

public class FindParameterDescriptors extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 5) {
            throw new IllegalArgumentException("usage: OUTPUT_FILE BYTE0 BYTE1 BYTE2 BYTE3");
        }
        byte[] wanted = new byte[4];
        for (int index = 0; index < 4; index++) {
            wanted[index] = (byte)Integer.parseUnsignedInt(args[index + 1], 16);
        }
        Memory memory = currentProgram.getMemory();
        try (PrintWriter out = new PrintWriter(new File(args[0]))) {
            for (AddressRange range : memory.getAddressRanges()) {
                Address cursor = range.getMinAddress();
                while (cursor != null && cursor.compareTo(range.getMaxAddress()) <= 0) {
                    Address match = memory.findBytes(cursor, range.getMaxAddress(), wanted, null, true, monitor);
                    if (match == null) break;
                    if (match.getOffset() >= 8 && match.add(12).compareTo(range.getMaxAddress()) <= 0) {
                        Address object = match.subtract(8);
                        long type = readU32(memory, object.add(4));
                        long vtable = readU32(memory, object.add(16));
                        out.printf("MATCH %s PREV8 %08x PREV4 %08x NEXT4 %08x NEXT8 %08x%n",
                            match, readU32(memory, object), type,
                            readU32(memory, match.add(4)), readU32(memory, match.add(8)));
                        if (type <= 8 && vtable >= 0x00400000L && vtable < 0x00440000L) {
                            out.printf("OBJECT %s TYPE %d ADDRESS %02x %02x %02x %02x DATA %08x FLAGS %08x VTABLE %08x%n",
                                object, type, wanted[0] & 0xff, wanted[1] & 0xff,
                                wanted[2] & 0xff, wanted[3] & 0xff,
                                readU32(memory, object), readU32(memory, object.add(12)), vtable);
                        }
                    }
                    cursor = match.add(1);
                }
            }
        }
    }

    private long readU32(Memory memory, Address address) throws Exception {
        return (memory.getByte(address) & 0xffL)
            | ((memory.getByte(address.add(1)) & 0xffL) << 8)
            | ((memory.getByte(address.add(2)) & 0xffL) << 16)
            | ((memory.getByte(address.add(3)) & 0xffL) << 24);
    }
}
