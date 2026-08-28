// Materialize every block described by a Blackfin runtime initialization table.
// @category RolandCapture

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class MaterializeFirmwareInitTable extends GhidraScript {
    private long unsignedInt(Memory memory, Address address) throws Exception {
        return Integer.toUnsignedLong(memory.getInt(address));
    }

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 2) {
            throw new IllegalArgumentException("usage: TABLE_POINTER_ADDRESS BLOCK_PREFIX");
        }
        Memory memory = currentProgram.getMemory();
        Address pointerAddress = toAddr(args[0]);
        Address table = toAddr(unsignedInt(memory, pointerAddress));
        if (memory.getByte(table) != 0 || memory.getByte(table.add(2)) != (byte) 0xff ||
                memory.getByte(table.add(3)) != (byte) 0xff) {
            throw new IllegalArgumentException("invalid initialization-table signature at " + table);
        }
        long descriptorCount = unsignedInt(memory, table.add(4));
        if (descriptorCount > 4096) {
            throw new IllegalArgumentException("implausible descriptor count " + descriptorCount);
        }

        Address cursor = table.add(8);
        for (int index = 0; index < descriptorCount; index++) {
            Address target = toAddr(unsignedInt(memory, cursor));
            long byteCountLong = unsignedInt(memory, cursor.add(4));
            long flags = unsignedInt(memory, cursor.add(8));
            long argumentLong = unsignedInt(memory, cursor.add(12));
            if ((flags & 0x3f) != 2 || byteCountLong > Integer.MAX_VALUE ||
                    argumentLong > Integer.MAX_VALUE) {
                throw new IllegalArgumentException("unsupported descriptor " + index);
            }
            int byteCount = (int) byteCountLong;
            int argument = (int) argumentLong;
            int mode = (int) ((flags & 0x1c0) >> 6);
            Address source = cursor.add(16);
            byte[] output = new byte[byteCount];
            int stored;
            if (mode == 0) {
                memory.getBytes(source, output);
                stored = (byteCount + 3) & ~3;
            } else if (mode == 1) {
                stored = 0;
            } else if (mode == 3 && argument > 0 && argument <= 16) {
                byte[] pattern = new byte[argument];
                memory.getBytes(source, pattern);
                for (int offset = 0; offset < output.length; offset++) {
                    output[offset] = pattern[offset % pattern.length];
                }
                stored = (argument + 3) & ~3;
            } else {
                throw new IllegalArgumentException(
                    "unsupported mode " + mode + " in descriptor " + index);
            }

            if (byteCount > 0) {
                MemoryBlock block = memory.getBlock(target);
                if (block == null) {
                    block = memory.createInitializedBlock(
                        args[1] + String.format("-%04d", index), target, byteCount,
                        (byte) 0, monitor, false);
                } else if (target.compareTo(block.getStart()) < 0 ||
                        target.add(byteCount - 1).compareTo(block.getEnd()) > 0) {
                    throw new IllegalStateException(
                        "descriptor " + index + " conflicts with " + block.getName());
                }
                if (!block.isInitialized()) {
                    memory.convertToInitialized(block, (byte) 0);
                    block = memory.getBlock(target);
                }
                memory.setBytes(target, output);
                block.setRead(true);
                block.setWrite(true);
                long rawTarget = target.getOffset();
                block.setExecute((rawTarget >= 0x00400000L && rawTarget < 0x00410000L) ||
                    (rawTarget >= 0xffa00000L && rawTarget < 0xffa14000L));
            }
            cursor = source.add(stored);
        }
        println(String.format("Materialized %d descriptors from %s", descriptorCount, table));
    }
}
