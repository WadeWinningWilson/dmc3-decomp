// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
extern char D_00591300[];

void func_001446F0();

int func_0014FAA0(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    v0 = (p1 << 1);
    if (p0 == 0) {
        func_001446F0(D_00591300);
        return 0;
    } else {
        v1 = *(short *)((char *)(v0 + p0) + 66);
        return v1;
    }
}
