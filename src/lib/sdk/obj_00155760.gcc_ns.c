// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
extern char D_00529B60[];

extern char D_00529B64[];

int func_00155AD8(p0) int p0; {
    *(int *)(D_00529B60 + 0) = *(int *)(D_00529B64 + 0);
    *(int *)(D_00529B64 + 0) = p0;
    return (int)D_00529B60;
}
