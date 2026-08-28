// Export named functions from an analyzed program.
// @category RolandCapture

import java.io.File;
import java.io.PrintWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolType;

public class ExportFunctions extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            throw new IllegalArgumentException("usage: OUTPUT_FILE FUNCTION [FUNCTION ...]");
        }
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try (PrintWriter out = new PrintWriter(new File(args[0]))) {
            for (int index = 1; index < args.length; index++) {
                for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(args[index])) {
                    if (symbol.getSymbolType() != SymbolType.FUNCTION) {
                        continue;
                    }
                    Function function = getFunctionAt(symbol.getAddress());
                    DecompileResults result = decompiler.decompileFunction(function, 90, monitor);
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
