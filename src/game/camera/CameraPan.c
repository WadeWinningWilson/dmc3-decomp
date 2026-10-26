void func_00100580(char *);

void func_001003E0(char *, void *, int, int);

void func_0024BE40(char *, int);

extern char D_005A9980[];

void func_0023ACD0(void);

char *func_002A7E80(char *p, short flag) {
    extern char D_005A9A10[];
    if (p != 0) {
        *(char **)p = D_005A9980;
        func_001003E0(p + 176, (void *)func_0023ACD0, 2128, 4);
        if (p != 0) {
            *(char **)p = D_005A9A10;
            func_0024BE40(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern char D_005A99B0[];

char *func_002A7F30(char *p, short flag) {
    extern char D_005A9A10[];
    if (p != 0) {
        *(char **)p = D_005A99B0;
        func_001003E0(p + 176, (void *)func_0023ACD0, 2128, 2);
        if (p != 0) {
            *(char **)p = D_005A9A10;
            func_0024BE40(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

float func_002A6DE0(char *p) {
    float v = *(float *)(*(char **)(p + 0xA0) + 4);
    return 0.0f == v ? 1.0f : v;
}

char *func_002A7DF0(char *p, short flag) {
    extern char D_005A9950[];
    extern char D_005A9A10[];
    if (p != 0) {
        *(char **)p = D_005A9950;
        if (p != 0) {
            *(char **)p = D_005A9A10;
            func_0024BE40(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_002A7FD0(char *p, short flag) {
    extern char D_005A99E0[];
    extern char D_005A9A10[];
    if (p != 0) {
        *(char **)p = D_005A99E0;
        if (p != 0) {
            *(char **)p = D_005A9A10;
            func_0024BE40(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

float func_002A6FB0(char *p) {
    float v = *(float *)(*(char **)(p + 0xA0) + 4);
    return 0.0f == v ? 1.0f : v;
}

int func_00131D10(float, float);

float func_001324B0();

void func_002A6C10(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f2, float f3) {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp2;
    float tmp3;
    int tmp6;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%2)" : : "r"(p1), "r"(p2), "r"(((stk + -64) + 64)) : "memory");
    tmp2 = func_00131D10(*(float *)((stk + -64) + 64), *(float *)((stk + -64) + 72));
    *(short *)((char *)p0 + 148) = tmp2;
    tmp3 = func_001324B0(p2, p1);
    tmp6 = func_00131D10(-*(float *)((stk + -64) + 68), tmp3);
    *(short *)((char *)p0 + 146) = tmp6;
    *(short *)((char *)p0 + 152) = 0;
    *(short *)((char *)p0 + 150) = 0;
}

float func_002A7B60(p0) char *p0; {
    return *(float *)(*(char **)(p0 + 160) + 96);
}

float func_002A7BB0() {
    return 0.9599310159683228f;
}

float func_002A7BD0(p0) char *p0; {
    return *(float *)(*(char **)(p0 + 160) + 96);
}

float func_002A7BE0(p0) char *p0; {
    return *(float *)(*(char **)(p0 + 160) + 100);
}

float func_002A7C40(p0) char *p0; {
    return *(float *)(*(char **)(p0 + 160) + 100);
}

float func_002A7DD0() {
    return 1.0f;
}

float func_002A7DE0() {
    return 1.0f;
}

float func_002A7E70() {
    return 1.0f;
}

float func_002A7F20() {
    return 1.0f;
}

void func_002A79F0(void) {}

int func_002A7E60(void) { return 0; }

int func_002A7F10(void) { return 0; }

float func_002A7C30(void) {
    return 0.0f;
}

signed char func_002A7FC0(char *p0) {
    return *(signed char *)(*(char **)(p0 + 160) + 2);
}

signed char func_002A8040(char *p0) {
    return *(signed char *)(*(char **)(p0 + 160) + 2);
}
