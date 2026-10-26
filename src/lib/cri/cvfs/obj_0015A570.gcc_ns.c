// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
extern char D_00593678[];

void func_0015AD30();

int func_0015A708(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_0015AD30(D_00593678);
        return;
    } else {
        v0 = *(signed char *)(p0 + 1);
        if (v0 == 0) {
            *(int *)(p0 + 36) = 0;
            *(int *)(p0 + 28) = 0;
            *(int *)(p0 + 32) = 0;
        }
        return v0;
    }
}

void func_0014DA10();

int func_0015A708();

int func_0015A7B0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_0015AD30(D_00593678);
        return;
    } else {
        v2 = *(signed char *)(v0 + 1);
        if (v2 != 0) {
            v1 = *(int *)(v0 + 40);
            *(char *)(v0 + 1) = 0;
            if (v1 != 0) {
                if (*(signed char *)(v0 + 2) == 1) {
                    func_0014DA10(v1);
                    *(char *)(v0 + 2) = 0;
                }
            }
            *(int *)(v0 + 44) = 0;
            v2 = func_0015A708(v0);
            *(int *)(v0 + 52) = 0;
        }
        return v2;
    }
}
