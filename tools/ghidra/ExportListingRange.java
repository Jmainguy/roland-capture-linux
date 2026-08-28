// Export disassembly and bytes for an address range.
// @category RolandCapture

import java.io.File;
import java.io.PrintWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Instruction;

public class ExportListingRange extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 3) {
            throw new IllegalArgumentException("usage: OUTPUT_FILE START END");
        }
        Address start = toAddr(args[1]);
        Address end = toAddr(args[2]);
        AddressSet range = new AddressSet(start, end);
        try (PrintWriter out = new PrintWriter(new File(args[0]))) {
            for (Instruction instruction : currentProgram.getListing().getInstructions(range, true)) {
                byte[] bytes = instruction.getBytes();
                StringBuilder hex = new StringBuilder();
                for (byte value : bytes) hex.append(String.format("%02x", value & 0xff));
                out.printf("%s  %-16s  %s%n", instruction.getAddress(), hex, instruction);
            }
        }
    }
}
