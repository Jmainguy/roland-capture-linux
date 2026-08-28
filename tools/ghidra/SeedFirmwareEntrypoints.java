// Seed known raw-firmware entry points before recursive analysis.
// @category RolandCapture

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

public class SeedFirmwareEntrypoints extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) {
            throw new IllegalArgumentException("usage: ADDRESS [ADDRESS ...]");
        }
        for (String value : args) {
            Address address = toAddr(value);
            disassemble(address);
            Function function = getFunctionAt(address);
            if (function == null) {
                function = createFunction(address, "firmware_entry_" + value.replace("0x", ""));
            }
            currentProgram.getSymbolTable().addExternalEntryPoint(address);
            if (function != null) {
                function.setName("firmware_entry_" + value.replace("0x", ""), SourceType.USER_DEFINED);
            }
            println("Seeded firmware entry " + address);
        }
    }
}
