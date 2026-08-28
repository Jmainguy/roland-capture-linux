// Export strings containing selected keywords and every reference to them.
// @category RolandCapture

import java.io.File;
import java.io.PrintWriter;
import java.util.Locale;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Data;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class ExportKeywordXrefs extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            throw new IllegalArgumentException("usage: OUTPUT_FILE KEYWORD [KEYWORD ...]");
        }
        try (PrintWriter out = new PrintWriter(new File(args[0]))) {
            for (Data data : currentProgram.getListing().getDefinedData(true)) {
                if (!data.hasStringValue()) continue;
                String value = data.getDefaultValueRepresentation();
                String folded = value.toLowerCase(Locale.ROOT);
                boolean match = false;
                for (int i = 1; i < args.length; i++) {
                    if (folded.contains(args[i].toLowerCase(Locale.ROOT))) {
                        match = true;
                        break;
                    }
                }
                if (!match) continue;
                out.printf("STRING %s %s%n", data.getAddress(), value);
                ReferenceIterator refs = currentProgram.getReferenceManager()
                    .getReferencesTo(data.getAddress());
                while (refs.hasNext()) {
                    Reference ref = refs.next();
                    out.printf("  XREF %s %s%n", ref.getFromAddress(), ref.getReferenceType());
                }
            }
        }
    }
}
