extern char D_01DFABA0[];

void func_001AD140(char *);

void func_00330B50(char *, int, char *, int);

void func_0028C5C0(char *, int, float);

float func_0034C160(float, float, float);

extern char D_01CAFF0C[];

extern int D_01CAFF38[];

void func_002F8A70(char *p);

void func_002F8F10(char *);

void func_002F8AD0(char *);

void func_002F8DA0(char *);

static inline float fab2F8(float x) { return x < 0.0f ? -x : x; }

void func_002F8860(char *p) {
    void func_002F8FE0(char *);
    float tmp[4] __attribute__((aligned(16)));
    float t;
    float s;
    float *dst;
    float *src;
    char *e;
    int f;
    float d;
    float a;
    func_002F8F10(p);
    if ((*(float *)(p + 0x450) -= *(float *)(p + 0x10)) < 0.0f) {
        func_002F8FE0(p);
        func_001AD140(p);
        return;
    }
    f = 0;
    e = *(char **)(p + 0x1CC);
    if (e != 0) {
        f = *(int *)(e + 8);
    }
    if ((f & 0x100) && *(unsigned char *)(p + 0x45A) != 0) {
        func_002F8A70(p);
        return;
    }
    if (f & 0x30000) {
        func_002F8AD0(p);
        return;
    }
    t = func_0034C160(*(float *)(p + 0x3F8), 50.0f, *(float *)(p + 0x10));
    *(float *)(p + 0x3F8) = t;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x400), "f"(t * t) : "t0", "memory");
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + tmp[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + tmp[2] * *(float *)(p + 0x10);
    switch (D_01CAFF38[0]) {
    case 0x67:
    case 0x70:
    case 0x71:
    case 0xD8:
    case 0xD4:
        d = *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x2924);
        a = fab2F8(d - *(float *)(p + 0x54));
        if (a < 100.0f) *(float *)(p + 0x54) = d;
        break;
    }
    if (!((*(float *)(p + 0x454) += *(float *)(p + 0x10)) <= 5.0f)) {
        func_00330B50(D_01DFABA0, 4, p + 0x50, 0);
        *(float *)(p + 0x454) = 0.0f;
    }
    func_002F8DA0(p);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_002F8C80(char *p) {
    void func_002F8FE0(char *);
    float tmp[4] __attribute__((aligned(16)));
    float t;
    func_002F8F10(p);
    if ((*(float *)(p + 0x450) -= *(float *)(p + 0x10)) < 0.0f) {
        func_002F8FE0(p);
        func_001AD140(p);
        return;
    }
    t = func_0034C160(*(float *)(p + 0x3F8), 10.0f, *(float *)(p + 0x10));
    *(float *)(p + 0x3F8) = t;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x400), "f"(t) : "t0", "memory");
    *(float *)(p + 0x50) += tmp[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x54) += tmp[1] * *(float *)(p + 0x10);
    *(float *)(p + 0x58) += tmp[2] * *(float *)(p + 0x10);
    func_002F8DA0(p);
}

void func_002F8D90(void) {
    extern void func_002F8FE0(); func_002F8FE0(); }

extern void func_002F9100();

void func_002F91C0(char *p) { func_002F9100(p + -64); }

void func_002F91D0(char *p) { func_002F9100(p + -160); }
