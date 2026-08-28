// Export references to arbitrary addresses and decompile their containing functions.
// @category RolandCapture

import java.io.File;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Set;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;

public class ExportAddressXrefs extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            throw new IllegalArgumentException("usage: OUTPUT_FILE ADDRESS [ADDRESS ...]");
        }
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        Set<String> emitted = new HashSet<>();
        try (PrintWriter out = new PrintWriter(new File(args[0]))) {
            for (int index = 1; index < args.length; index++) {
                Address target = toAddr(args[index]);
                out.printf("TARGET %s%n", target);
                for (Reference reference : getReferencesTo(target)) {
                    Function function = getFunctionContaining(reference.getFromAddress());
                    out.printf("XREF %s %s %s%n", reference.getFromAddress(),
                        reference.getReferenceType(),
                        function == null ? "<no-function>" : function.getName());
                    if (function == null || !emitted.add(function.getEntryPoint().toString())) {
                        continue;
                    }
                    DecompileResults result = decompiler.decompileFunction(function, 120, monitor);
                    out.printf("FUNCTION %s %s success=%s%n", function.getEntryPoint(),
                        function.getName(), result.decompileCompleted());
                    if (result.decompileCompleted()) {
                        out.println(result.getDecompiledFunction().getC());
                    }
                    out.println("END_FUNCTION");
                }
            }
        } finally {
            decompiler.dispose();
        }
    }
}
