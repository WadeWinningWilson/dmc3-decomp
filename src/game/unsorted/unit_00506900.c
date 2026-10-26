extern signed char D_005BE120;

extern signed char D_005BE124;

void func_005069A0(char *, int);

void func_00506D90(char *);

void func_00506900(char *p) {
    switch (D_005BE120) {
    case 0:
        func_005069A0(p, 0);
        break;
    case 2:
        func_005069A0(p, 1);
        if (D_005BE124 == 1) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x70), "r"(p + 0x1A0) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x80), "r"(p + 0x190) : "memory");
        }
        break;
    case 3:
        func_00506D90(p);
        break;
    }
}
