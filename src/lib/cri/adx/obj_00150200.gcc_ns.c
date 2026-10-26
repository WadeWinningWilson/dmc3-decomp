// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
extern char D_005915D8[];

void func_001446F0();

void func_00150248(p0) char *p0; {
    if (p0 == 0) {
        func_001446F0(D_005915D8);
        return;
    } else {
        *(short *)(p0 + 106) = 0;
        *(short *)(p0 + 96) = 0;
        *(int *)(p0 + 100) = 0;
        *(short *)(p0 + 104) = 0;
        return;
    }
}
