// cc: ee-gcc2.96 -O2 -G0
extern char D_00590B30[];

void func_001446F0();

int func_00146550(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_001446F0(D_00590B30);
        v0 = -3;
    } else {
        v0 = *(int *)(p0 + 32);
    }
    return v0;
}

extern char D_00590B60[];

int func_00146580(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_001446F0(D_00590B60);
        v0 = -3;
    } else {
        v0 = *(signed char *)(p0 + 1);
    }
    return v0;
}

extern char D_0051AEA0[];

void func_001467C0(p0) int p0; {
    *(int *)D_0051AEA0 = p0;
}
