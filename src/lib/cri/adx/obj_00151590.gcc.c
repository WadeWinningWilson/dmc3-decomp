// cc: ee-gcc2.96 -O2 -G0
extern char D_00529710[];

int func_00151998(p0) int p0; {
    int tmp0;
    tmp0 = *(int *)(D_00529710 + 0);
    *(int *)(D_00529710 + 0) = p0;
    return tmp0;
}
