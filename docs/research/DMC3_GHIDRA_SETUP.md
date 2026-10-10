# DMC3 PS2 — Ghidra Setup

## 1. Why DMC3 has its own Ghidra

A stock Ghidra 12.0.4 install has **no R5900 language**. Its `mips.ldefs`
only maps the IDA names `r5900l/r5900r` onto generic MIPS64. That would mis-decode
`lq`/`sq`, MMI (`paddw`, `pextlw`, `pmfhl` …), 128-bit GPRs and VU0 macro-mode COP2.

DMC3 therefore uses its own Ghidra copy:

| | Path |
|---|---|
| Ghidra 12.0.4 (official release zip, hash-verified) | `<ghidra-dmc3>\ghidra_12.0.4_PUBLIC\` |
| Emotion Engine Reloaded **v2.1.38** for 12.0.4 (sha256 `12f159ef…2a99`) | installed into that copy's `Ghidra\Extensions\` |
| JDK 21 | any JDK 21 install (`<jdk21>`) |
| User settings / cache (isolated through `support\launch.properties` VMARGS) | `ghidra-dmc3\settings\`, `ghidra-dmc3\cache\` |
| Projects | `ghidra-dmc3\projects\dmc3_us` (**primary**), `dmc3_jp` |
| Scripts / output | `ghidra-dmc3\scripts\`, `ghidra-dmc3\out\` |

The extension lives in the installation, not in the user-profile Extensions
folder, and the settings dir is redirected, so any other Ghidra install on the same
machine is unaffected.

## 2. Language
`r5900:LE:32:default`, provided by EE Reloaded. Pass it explicitly with
`-processor`. Import succeeded for both ELFs. Auto-analysis took about 260–275 s each.
The only warning is a harmless overlap between the language's `rom0` block and existing memory.

## 3. Usage (headless)

Import and analyze:
```powershell
$env:JAVA_HOME='<jdk21>'
& '<ghidra-dmc3>\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat' `
  '<ghidra-dmc3>\projects' dmc3_us `
  -import '<repo>\orig\SLUS_209.64\SLUS_209.64' -processor 'r5900:LE:32:default'
```

Dump pseudocode for some addresses (read-only):
```powershell
& '...\analyzeHeadless.bat' '<ghidra-dmc3>\projects' dmc3_us `
  -process SLUS_209.64 -noanalysis -readOnly `
  -scriptPath '<ghidra-dmc3>\scripts' `
  -postScript DumpFuncs.java '<ghidra-dmc3>\out\x.c' 0x003B4F30 0x0024E2B0
```
`DumpFuncs.java` decompiles the given addresses, or every function if none are given,
into one `.c` file.

## 4. Rules
- Ghidra pseudocode is **a reading aid only**. It is never pasted into `src/`.
  The compiler and verifier decide what is correct.
- Typical Ghidra artefacts in this binary: `undefined8` for 64-bit-passed args (the
  EE ABI passes 64-bit registers), sign-extended constants (`0xffffffffff000701`),
  and `short` where the code really uses `lhu`. Check against the asm.

## 5. GhidraMCP (optional)
- Package: **13bm/GhidraMCP v0.2.2+ghidra12.0.4** (70 tools, Go bridge). It was copied from
  the 13bm/GhidraMCP release zip, whose sha256 `f10adcc8…e03d`
  **matches the upstream release digest**. It is installed in the DMC3 copy's `Ghidra\Extensions\` only.
- Settings (`ghidra-dmc3\settings\<user>-ghidra\ghidra_12.0.4_PUBLIC\GhidraMCP.properties`):
  **port 8766** (avoiding the default 8765), localhost only, and a random API key.
- Claude Code registration is in the project-scoped `<repo>\.mcp.json` (server `ghidra-dmc3`).
  It is gitignored because it holds the key. The plugin's "Write to Claude Config" button
  was **not** used, so no global or Desktop config was changed.
- One-time GUI steps (user):
  1. Run `tools\ghidra_gui.bat`, open project `dmc3_us` and then `SLUS_209.64`.
  2. Double-click the program to open the **CodeBrowser**, then File → Configure → tick the
     **GhidraMCP** package (it has its own entry, not "Miscellaneous" as the upstream README says).
     Save the tool on exit. The **MCP** menu then appears. The server listens on 8766.
  3. Restart Claude Code in `<repo>` and approve the `ghidra-dmc3` project server.
- MCP rename/annotate tools write into the Ghidra project. Names follow the naming
  policy in DMC3_AI_RECOVERY_PROTOCOL.md: evidence first.

## 6. Not done yet
- Symbol import. Once names are recovered, generate a script that applies
  `config/SLUS_209.64/symbols.txt` to the project, so Ghidra and splat stay in sync.
- Apply known library signatures (SDK 2.8.0, CRI) to separate them from game code.
