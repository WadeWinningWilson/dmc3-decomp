extern char D_005A6F50[];

void func_0013D240(char *, int);

void func_00100580(char *);

void func_0024FD30(char *, int);

extern char D_005A7BB0[];

extern char D_005A7BD4[];

extern char D_005A7C54[];

void func_0024F700(char *, int);

char *func_0024F810(char *p, short flags) {
    if (p) {
        *(char **)p = D_005A7BB0;
        *(char **)(p + 0x40) = D_005A7BD4;
        *(char **)(p + 0xA0) = D_005A7C54;
        func_0024FD30(p + 0xA0, 0);
        func_0024F700(p + 0x40, 0);
        if (p) {
            *(char **)p = D_005A6F50;
            func_0013D240(p + 0x24, -1);
        }
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_0013D6A0();

void func_0024F6B0();

void func_0024FD10();

char * func_0024F750(p) char *p; {
    *(char * *)(p) = D_005A6F50;
    func_0013D6A0(p + 36);
    *(int *)(p + 32) = 0;
    *(int *)(p + 28) = 0;
    *(char *)(p + 7) = 0;
    *(char *)(p + 6) = 0;
    *(char *)(p + 5) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 24) = 0;
    *(int *)(p + 8) = 0;
    *(char *)(p + 52) = -1;
    *(char *)(p + 53) = 0;
    *(char *)(p + 54) = 0;
    *(int *)(p + 12) = 135;
    *(int *)(p + 16) = 1065353216;
    *(int *)(p + 20) = 1065353216;
    func_0024F6B0(p + 64, -1);
    func_0024FD10(p + 160);
    *(char * *)(p) = D_005A7BB0;
    *(char * *)(p + 64) = D_005A7BD4;
    *(char * *)(p + 160) = D_005A7C54;
    *(char *)(p + 196) = 0;
    *(char *)(p + 197) = 0;
    *(int *)(p + 200) = 0;
    return p;
}

float func_0024FB90() {
    return 1.0f;
}

extern void func_0024FBB0();

void func_0024FC30(char *p) { func_0024FBB0(p + -64); }

extern void func_0024FBA0();

void func_0024FC40(char *p) { func_0024FBA0(p + -64); }

extern void func_0024FB80();

void func_0024FC60(char *p) { func_0024FB80(p + -64); }

extern void func_0024FAD0();

void func_0024FC70(char *p) { func_0024FAD0(p + -64); }

extern void func_0024FAC0();

void func_0024FC80(char *p) { func_0024FAC0(p + -64); }

extern void func_0024FAB0();

void func_0024FC90(char *p) { func_0024FAB0(p + -64); }

extern void func_0024FAA0();

void func_0024FCA0(char *p) { func_0024FAA0(p + -64); }

extern void func_0024FA90();

void func_0024FCB0(char *p) { func_0024FA90(p + -64); }

extern void func_0024FA80();

void func_0024FCC0(char *p) { func_0024FA80(p + -64); }

extern void func_0024FA40();

void func_0024FCD0(char *p) { func_0024FA40(p + -64); }

extern void func_0024FA20();

void func_0024FCE0(char *p) { func_0024FA20(p + -64); }

void func_0024FA30(void) {}

void func_0024FA50(void) {}

void func_0024FA60(void) {}

void func_0024FA70(void) {}

void func_0024FAE0(void) {}

void func_0024FAF0(void) {}

void func_0024FB00(void) {}

void func_0024FB10(void) {}

int func_0024FB20(void) { return 0; }

int func_0024FB30(void) { return 0; }

void func_0024FB40(void) {}

int func_0024FB50(void) { return 0; }

int func_0024FB60(void) { return 0; }

void func_0024FB70(void) {}

void func_0024FBE0(void) {}

void func_0024FBF0(void) {}

void func_0024FC00(void) {}

void func_0024FC10(void) {}

void func_0024FC20(void) {}

void func_0024FBC0(int p0, char *p1) {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p1), "r"((p0 + 80)) : "memory");
}

void func_0024FBD0(int p0, char *p1) {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((p0 + 80)), "r"(p1) : "memory");
}
