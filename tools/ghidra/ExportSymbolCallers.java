// Export every direct caller of named symbols and its decompiled body.
// @category RolandCapture

import java.io.File;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Set;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;
import ghidra.util.task.TaskMonitor;

public class ExportSymbolCallers extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            throw new IllegalArgumentException("usage: OUTPUT_FILE SYMBOL [SYMBOL ...]");
        }
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        Set<String> emitted = new HashSet<>();
        try (PrintWriter out = new PrintWriter(new File(args[0]))) {
            for (int index = 1; index < args.length; index++) {
                String wanted = args[index];
                out.printf("SYMBOL_QUERY %s%n", wanted);
                for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(wanted)) {
                    out.printf("SYMBOL %s %s %s%n", symbol.getAddress(), symbol.getName(),
                        symbol.getSymbolType());
                    for (Reference reference : getReferencesTo(symbol.getAddress())) {
                        Function function = getFunctionContaining(reference.getFromAddress());
                        out.printf("XREF %s %s%n", reference.getFromAddress(),
                            function == null ? "<no-function>" : function.getName());
                        emitFunction(out, decompiler, function, emitted);
                    }
                }
            }
        } finally {
            decompiler.dispose();
        }
    }

    private void emitFunction(PrintWriter out, DecompInterface decompiler, Function function,
            Set<String> emitted) {
        if (function == null || !emitted.add(function.getEntryPoint().toString())) {
            return;
        }
        DecompileResults result = decompiler.decompileFunction(function, 90, TaskMonitor.DUMMY);
        out.printf("FUNCTION %s %s success=%s%n", function.getEntryPoint(), function.getName(),
            result.decompileCompleted());
        if (result.decompileCompleted()) {
            out.println(result.getDecompiledFunction().getC());
        }
        out.println("END_FUNCTION");
    }
}
