void func_00131650(char *, char *);

float func_00132630(char *, float *);

short func_00131CB0(float);

void func_00131EA0(float *, float *, short);

void func_00132600(char *, float *, char *);

static inline float clamp253(float x, float lo, float hi) {
    if (x > hi) return hi;
    if (x < lo) return lo;
    return x;
}

void func_00253310(char *p, float *t, float f) {
    float func_001324E0(float *);
    float v90[4] __attribute__((aligned(16)));
    float m50[16] __attribute__((aligned(16)));
    float v40[4] __attribute__((aligned(16)));
    float len;
    float c;
    short a;
    unsigned char r;
    func_00131650(p + 0xF0, p + 0xF0);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v90), "r"(t), "r"(p + 0x50) : "memory");
    if ((len = func_001324E0(v90)) <= 0.0f) return;
    a = func_00131CB0(clamp253(func_00132630(p + 0xF0, v90) / len, -1.0f, 1.0f));
    if (*(short *)(p + 0x138) < a) a = *(short *)(p + 0x138);
    a = a * f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tlqc2 $vf6, 0x0(%0)\n\tvopmula.xyz $ACC, $vf4, $vf5\n\tvopmsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%2)" : : "r"(p + 0xF0), "r"(v90), "r"(v90) : "memory");
    __asm__ volatile("lqc2 $vf10, 0x0(%1)\n\tvabs.xyz $vf10, $vf10\n\tvaddy.x $vf10, $vf10, $vf10y\n\tvaddz.x $vf10, $vf10, $vf10z\n\tsqc2 $vf10, 0x0(%0)" : : "r"(v40), "r"(v90) : "memory");
    r = v40[0] > 0.0f;
    if (r) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m50) : "memory");
        func_00131EA0(m50, v90, a);
        func_00132600(p + 0xF0, m50, p + 0xF0);
    }
}

void func_002534D0(char *p, float *t, float f) {
    float func_001324E0(float *);
    float m60[16] __attribute__((aligned(16)));
    float v50[4] __attribute__((aligned(16)));
    float v40[4] __attribute__((aligned(16)));
    float len;
    float sv;
    short a;
    unsigned char r;
    sv = *(float *)(p + 0xF4);
    *(float *)(p + 0xF4) = 0.0f;
    len = func_001324E0((float *)(p + 0xF0));
    if (len <= 0.0f) {
        *(float *)(p + 0xF4) = sv;
        return;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v50), "r"(t), "r"(p + 0x50) : "memory");
    v50[1] = 0.0f;
    func_00131650((char *)v50, (char *)v50);
    a = func_00131CB0(clamp253(func_00132630(p + 0xF0, v50) / len, -1.0f, 1.0f));
    if (*(short *)(p + 0x138) < a) a = *(short *)(p + 0x138);
    a = a * f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tlqc2 $vf6, 0x0(%0)\n\tvopmula.xyz $ACC, $vf4, $vf5\n\tvopmsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%2)" : : "r"(p + 0xF0), "r"(v50), "r"(v50) : "memory");
    __asm__ volatile("lqc2 $vf10, 0x0(%1)\n\tvabs.xyz $vf10, $vf10\n\tvaddy.x $vf10, $vf10, $vf10y\n\tvaddz.x $vf10, $vf10, $vf10z\n\tsqc2 $vf10, 0x0(%0)" : : "r"(v40), "r"(v50) : "memory");
    r = v40[0] > 0.0f;
    if (r) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m60) : "memory");
        func_00131EA0(m60, v50, a);
        func_00132600(p + 0xF0, m60, p + 0xF0);
        *(float *)(p + 0xF4) = sv;
    }
}

float func_00253740(char *p, char *v) {
    float func_001324E0(char *);
    char stk[0x10] __attribute__((aligned(16)));
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%1)" : : "r"(v), "r"(stk), "r"(p + 0x50) : "memory");
    return func_001324E0(stk);
}

extern char D_005A8000[];

extern char D_005A8024[];

extern char D_005A80A4[];

void func_0024F750();

int func_00252FA0(p0) int p0; {
    func_0024F750();
    *(char **)((char *)p0 + 0) = D_005A8000;
    *(char **)((char *)p0 + 64) = D_005A8024;
    *(char **)((char *)p0 + 160) = D_005A80A4;
    *(char *)((char *)p0 + 328) = 1;
    return p0;
}

void func_002530C0(p0, p1) char *p0; char *p1; {
    float tmp4;
    *(float *)(p0 + 272) = *(float *)(p1 + 0);
    *(float *)(p0 + 288) = *(float *)(p1 + 4);
    *(float *)(p0 + 292) = *(float *)(p1 + 8);
    *(float *)(p0 + 300) = *(float *)(p1 + 12);
    tmp4 = *(float *)(p1 + 16);
    *(float *)(p0 + 304) = *(float *)(p1 + 16);
    *(float *)(p0 + 308) = tmp4;
    *(short *)(p0 + 312) = *(short *)(p1 + 20);
    *(float *)(p0 + 316) = *(float *)(p1 + 24);
    *(float *)(p0 + 324) = *(float *)(p1 + 28);
}

extern void func_00253000();

void func_00253850(char *p) { func_00253000(p + -64); }

void func_00253860(char *p) { func_00253000(p + -160); }

void func_00253080(void) {}

void func_00253090(void) {}

void func_002530A0(void) {}

void func_002530B0(void) {}
