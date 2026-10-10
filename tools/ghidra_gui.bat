@echo off
rem Launch the DMC3-only Ghidra (12.0.4 + Emotion Engine Reloaded + GhidraMCP on port 8766).
rem Expects ghidra-dmc3\ and ghidra-env\ (JDK) in a tools\ folder next to the repository.
echo Starting DMC3 Ghidra... the window takes about a minute to appear.
echo Then: File ^> Open Project ^> %~dp0..\..\tools\ghidra-dmc3\projects\dmc3_us.gpr
echo       double-click SLUS_209.64 ^> File ^> Configure ^> tick "GhidraMCP"
set "JAVA_HOME=%~dp0..\..\tools\ghidra-env\jdk-21.0.12.1+1"
call "%~dp0..\..\tools\ghidra-dmc3\ghidra_12.0.4_PUBLIC\ghidraRun.bat"
