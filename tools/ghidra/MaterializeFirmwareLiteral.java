// Copy a literal initialization payload from mapped flash into its runtime address.
// @category RolandCapture

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.SourceType;

public class MaterializeFirmwareLiteral extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 4 || args.length > 5) {
            throw new IllegalArgumentException(
                "usage: BLOCK_NAME SOURCE_ADDRESS TARGET_ADDRESS BYTE_COUNT [ENTRY_ADDRESS]");
        }

        String blockName = args[0];
        Address source = toAddr(args[1]);
        Address target = toAddr(args[2]);
        int count = Integer.decode(args[3]);
        if (count <= 0) {
            throw new IllegalArgumentException("BYTE_COUNT must be positive");
        }

        Memory memory = currentProgram.getMemory();
        byte[] bytes = new byte[count];
        int read = memory.getBytes(source, bytes);
        if (read != count) {
            throw new IllegalStateException(
                String.format("read %d of %d bytes at %s", read, count, source));
        }

        MemoryBlock block = memory.getBlock(target);
        if (block == null) {
            block = memory.createInitializedBlock(
                blockName, target, count, (byte) 0, monitor, false);
        } else if (!block.getStart().equals(target) || block.getSize() < count) {
            throw new IllegalStateException(
                String.format("incompatible existing block %s at %s", block.getName(), target));
        }
        memory.setBytes(target, bytes);
        block.setRead(true);
        block.setWrite(true);
        block.setExecute(target.toString().startsWith("ffa0"));
        block.setComment(String.format(
            "Materialized from firmware literal at %s (%d bytes)", source, count));

        if (args.length == 5) {
            Address entry = toAddr(args[4]);
            disassemble(entry);
            Function function = getFunctionAt(entry);
            if (function == null) {
                function = createFunction(entry, "runtime_entry_" + args[4].replace("0x", ""));
            }
            currentProgram.getSymbolTable().addExternalEntryPoint(entry);
            if (function != null) {
                function.setName(
                    "runtime_entry_" + args[4].replace("0x", ""), SourceType.USER_DEFINED);
            }
        }
        println(String.format("Materialized %s: %s -> %s (%d bytes)",
            blockName, source, target, count));
    }
}
