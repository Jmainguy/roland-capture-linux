// Export functions containing specified hexadecimal addresses.
// @category RolandCapture

import java.io.File;
import java.io.PrintWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

public class ExportAddressFunctions extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            throw new IllegalArgumentException("usage: OUTPUT_FILE ADDRESS [ADDRESS ...]");
        }
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try (PrintWriter out = new PrintWriter(new File(args[0]))) {
            for (int index = 1; index < args.length; index++) {
                Address address = currentProgram.getAddressFactory().getDefaultAddressSpace()
                    .getAddress(args[index]);
                Function function = getFunctionContaining(address);
                if (function == null) {
                    out.printf("ADDRESS %s <no-function>%n", address);
                    continue;
                }
                DecompileResults result = decompiler.decompileFunction(function, 120, monitor);
                out.printf("FUNCTION %s %s contains=%s success=%s%n", function.getEntryPoint(),
                    function.getName(), address, result.decompileCompleted());
                if (result.decompileCompleted()) {
                    out.println(result.getDecompiledFunction().getC());
                }
                out.println("END_FUNCTION");
            }
        } finally {
            decompiler.dispose();
        }
    }
}
