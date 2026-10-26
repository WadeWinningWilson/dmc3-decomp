// cc: ee-gcc2.96 -O2 -G0
extern char D_0052C270[];

void func_0015A220(p0) int p0; {
    int v0;
    int v1;
    v0 = 1;
    if (p0 != 0) {
        if (p0 == v0) {
            *(int *)D_0052C270 = p0;
            return;
        } else {
            *(int *)D_0052C270 = 0x8001;
            return;
        }
    } else {
        *(int *)D_0052C270 = 0x8001;
        return;
    }
}

extern char D_0052C278[];

int func_0015A2D0() {
    return (int)D_0052C278;
}
