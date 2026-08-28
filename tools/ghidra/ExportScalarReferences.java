// Export instructions using selected scalar constants and decompile their functions.
// @category RolandCapture

import java.io.File;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Set;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.scalar.Scalar;

public class ExportScalarReferences extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            throw new IllegalArgumentException("usage: OUTPUT_FILE HEX_VALUE [HEX_VALUE ...]");
        }
        Set<Long> wanted = new HashSet<>();
        for (int index = 1; index < args.length; index++) {
            wanted.add(Long.parseUnsignedLong(args[index].replaceFirst("^0[xX]", ""), 16));
        }

        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        Set<String> emitted = new HashSet<>();
        try (PrintWriter out = new PrintWriter(new File(args[0]))) {
            for (Instruction instruction : currentProgram.getListing().getInstructions(true)) {
                boolean matched = false;
                for (int operand = 0; operand < instruction.getNumOperands(); operand++) {
                    for (Object object : instruction.getOpObjects(operand)) {
                        if (object instanceof Scalar scalar && wanted.contains(scalar.getUnsignedValue())) {
                            out.printf("SCALAR 0x%x AT %s INSTRUCTION %s%n",
                                scalar.getUnsignedValue(), instruction.getAddress(), instruction);
                            matched = true;
                        }
                    }
                }
                if (!matched) continue;
                Function function = getFunctionContaining(instruction.getAddress());
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
