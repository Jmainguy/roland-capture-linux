// Export every function whose entry lies in an address range.
// @category RolandCapture

import java.io.File;
import java.io.PrintWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

public class ExportFunctionRange extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 3) {
            throw new IllegalArgumentException("usage: OUTPUT_FILE START END");
        }
        Address start = toAddr(args[1]);
        Address end = toAddr(args[2]);
        AddressSet range = new AddressSet(start, end);
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try (PrintWriter out = new PrintWriter(new File(args[0]))) {
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(range, true);
            while (functions.hasNext()) {
                Function function = functions.next();
                if (!range.contains(function.getEntryPoint())) continue;
                DecompileResults result = decompiler.decompileFunction(function, 120, monitor);
                out.printf("FUNCTION %s %s success=%s%n", function.getEntryPoint(),
                    function.getName(), result.decompileCompleted());
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
