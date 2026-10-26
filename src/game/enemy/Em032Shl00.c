int func_002077F0(char *);

void func_002075D0(int, int, char *, int, int);

void func_0034BA60(int, float *, int, int, int);

float func_001324E0(float *);

void func_004D6AC0(char *);

void func_004D6A10(char *);

void func_004D6810(char *p) {
    void func_001AD140(char *);
    void func_00206730(char *);
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    func_00206730(p + 0x190);
    if (*(char **)(p + 0x190) != 0) {
        if ((unsigned char)func_002077F0(*(char **)(p + 0x190)) == 1) {
            *(int *)(p + 0x190) = 0;
            func_001AD140(p);
            return;
        }
    } else {
        func_001AD140(p);
        return;
    }
    if ((*(float *)(p + 0x194) -= *(float *)(p + 0x10)) < 0.0f) {
        func_001AD140(p);
        return;
    }
    if (*(float *)(p + 0x54) < -50.0f) {
        func_002075D0(3, 0x146, p + 0x150, 1, 0x10);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(p + 0x150) : "memory");
        func_0034BA60(0x2E, v, 0x35, 0, 1);
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + *(float *)(p + 0x1B0) * *(float *)(p + 0x10);
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x1B4) * *(float *)(p + 0x10);
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + *(float *)(p + 0x1B8) * *(float *)(p + 0x10);
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x19C) * *(float *)(p + 0x10);
    *(float *)(p + 0x19C) = *(float *)(p + 0x19C) - 0.8f * *(float *)(p + 0x10);
    w[0] = *(float *)(p + 0x1B0);
    w[1] = *(float *)(p + 0x1B4);
    w[2] = *(float *)(p + 0x1B8);
    w[3] = 1.0f;
    *(float *)(p + 0x198) = func_001324E0(w);
    if ((*(float *)(p + 0x198) -= 0.09f * *(float *)(p + 0x10)) < 0.0f) {
        *(float *)(p + 0x198) = 0.0f;
    }
    func_004D6AC0(p);
    func_004D6A10(p);
}

char *func_00207480(int, int, int, int);

extern unsigned int D_01DF8810[];

extern unsigned int D_01DF7E50[];

void func_00207A90(unsigned int *);

static inline unsigned int mt_4D6(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return y;
}

void func_004D6450(char *p) {
    void func_001AD140(char *);
    char *g;
    *(char **)(p + 0x190) = func_00207480(1, 0x1D8, 0, 0x10);
    g = *(char **)(p + 0x190);
    if (g == 0) {
        func_001AD140(p);
        return;
    }
    *(char **)(g + 0x90) = p + 0x150;
    g[0x9A] = 0;
    *(unsigned char *)(*(char **)(p + 0x190) + 0x3A) = 1;
    *(int *)(p + 0x1A0) = 0;
    *(float *)(p + 0x1A4) = (float)(mt_4D6() % 360) - 180.0f;
    *(float *)(p + 0x1A8) = 60.0f + (float)(mt_4D6() % 30);
    *(float *)(p + 0x1AC) = 1.0f;
    if (!(*(float *)(p + 0x1A4) <= 180.0f)) *(float *)(p + 0x1A4) = *(float *)(p + 0x1A4) - 360.0f;
    if (*(float *)(p + 0x1A4) < -180.0f) *(float *)(p + 0x1A4) = *(float *)(p + 0x1A4) + 360.0f;
    if (!(*(float *)(p + 0x1A8) <= 180.0f)) *(float *)(p + 0x1A8) = *(float *)(p + 0x1A8) - 360.0f;
    if (*(float *)(p + 0x1A8) < -180.0f) *(float *)(p + 0x1A8) = *(float *)(p + 0x1A8) + 360.0f;
    *(float *)(p + 0x198) = (float)(mt_4D6() % 5 + 30);
    func_004D6A10(p);
    func_004D6AC0(p);
    *(float *)(p + 0x194) = 360.0f;
    (*(unsigned char *)(p + 4))++;
}

void func_004D6340(p0, p1) char *p0; char *p1; {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p1), "r"((p0 + 80)) : "memory");
    *(float *)(p0 + 92) = 1.0f;
}

extern char D_005B92D0[];

extern char D_005B92F4[];

extern char D_005B9374[];

int func_00252FA0();

int func_004D6360(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B92D0;
    *(char **)((char *)p0 + 64) = D_005B92F4;
    *(char **)((char *)p0 + 160) = D_005B9374;
    *(int *)((char *)p0 + 400) = 0;
    *(int *)((char *)p0 + 404) = 0;
    *(int *)((char *)p0 + 408) = 0;
    *(int *)((char *)p0 + 412) = 0;
    *(int *)((char *)p0 + 416) = 0;
    *(int *)((char *)p0 + 420) = 0;
    *(int *)((char *)p0 + 424) = 0;
    *(int *)((char *)p0 + 428) = 0x3f800000;
    *(int *)((char *)p0 + 432) = 0;
    *(int *)((char *)p0 + 436) = 0;
    *(int *)((char *)p0 + 440) = 0;
    *(int *)((char *)p0 + 444) = 0x3f800000;
    return p0;
}

int func_004D6B00(p0) int p0; {
    int func_001AD140();
    int func_00206730();
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v2 = func_00206730((v0 + 400));
    v1 = *(int *)(v0 + 400);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 400) = 0;
    }
    return v2;
}

extern void func_004D6B60();

void func_004D6C00(char *p) { func_004D6B60(p + -64); }

void func_004D6C10(char *p) { func_004D6B60(p + -160); }

void func_004D6AF0(void) {}

void func_004D6B40(void) {}

void func_004D6B50(void) {}
