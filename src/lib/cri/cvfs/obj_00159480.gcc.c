// cc: ee-gcc2.96 -O2 -G0
extern char D_005933C0[];

void func_00158910();

int func_00159480(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_00158910(p0, D_005933C0);
        v1 = 0;
    } else {
        v1 = *(signed char *)(v0 + 2);
    }
    return v1;
}

int func_001594B8() {
    return 2048;
}

int func_001594C0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int v1;
    char *v0;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_00158910(p0, D_005933C0);
        v1 = 0;
    } else {
        v1 = (*(signed char *)(v0 + 2) != 1) ? 0 : (*(int *)(v0 + 40) << 11);
    }
    return v1;
}
