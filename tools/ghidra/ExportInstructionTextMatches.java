// Export functions containing instructions whose rendered text has a requested token.
// @category RolandCapture

import java.io.File;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Locale;
import java.util.Set;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;

public class ExportInstructionTextMatches extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            throw new IllegalArgumentException("usage: OUTPUT_FILE TOKEN [TOKEN ...]");
        }
        Set<String> wanted = new HashSet<>();
        for (int index = 1; index < args.length; index++) {
            wanted.add(args[index].toLowerCase(Locale.ROOT));
        }
        Set<String> emitted = new HashSet<>();
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        try (PrintWriter out = new PrintWriter(new File(args[0]))) {
            for (Instruction instruction : currentProgram.getListing().getInstructions(true)) {
                String rendered = instruction.toString().toLowerCase(Locale.ROOT);
                boolean match = wanted.stream().anyMatch(rendered::contains);
                if (!match) continue;
                Function function = getFunctionContaining(instruction.getAddress());
                out.printf("MATCH %s %s FUNCTION %s%n", instruction.getAddress(), instruction,
                    function == null ? "<none>" : function.getName());
                if (function == null || !emitted.add(function.getEntryPoint().toString())) continue;
                DecompileResults result = decompiler.decompileFunction(function, 120, monitor);
                out.printf("FUNCTION %s %s success=%s%n", function.getEntryPoint(),
                    function.getName(), result.decompileCompleted());
                if (result.decompileCompleted()) out.println(result.getDecompiledFunction().getC());
                out.println("END_FUNCTION");
            }
        } finally {
            decompiler.dispose();
        }
    }
}
