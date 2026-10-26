// cc: ee-gcc2.96 -O2 -G0
extern char D_00596158[];

void func_001744C0();

void func_001798E8();

int func_00189AB8();

int func_00174920(p0) char *p0; {
    int v0;
    int v1;
    v0 = func_00189AB8(*(int *)(p0 + 64));
    v1 = -311;
    if (v0 != 0) {
        func_001744C0(v1);
        func_001798E8(D_00596158);
        v0 = -311;
    }
    return v0;
}
