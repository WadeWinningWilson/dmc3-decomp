// cc: ee-gcc2.96 -O2 -G0
extern char D_00591480[];

void func_001446F0();

int func_0014E148();

int func_0014FE50(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_001446F0(D_00591480);
        return;
    } else {
        v1 = *(int *)(v0 + 8);
        *(short *)(v0 + 62) = p1;
        v2 = v1;
        if (v1 != 0) {
            v1 = func_0014E148(v2, ((p1 << 16) >> 5), (*(short *)(v0 + 60) << 11));
        }
        return v1;
    }
}

int func_0014FEA8(p0) char *p0; {
    return *(short *)(p0 + 62);
}
