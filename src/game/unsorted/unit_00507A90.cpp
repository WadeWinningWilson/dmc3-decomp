extern "C" char D_01CAFF0C[];

extern "C" void func_001316B0(float, char *, float *, float *);

extern "C" float func_001324B0(void *, void *);

extern "C" int func_002018A0(char *, char *, char *, char *, char *, int);

extern "C" void func_002019D0(char *, float *, char *);

extern "C" void func_00316F30(char *, float *, int);

extern "C" void func_003176C0(char *, char *, char *);

extern "C" void func_0034B8C0(char *, short *, short);

extern "C" short func_0034B940(void *, void *);

extern "C" float D_0058C290[];

extern "C" char *D_005BE190[];

typedef struct { float v[4]; float r; } V508;

extern "C" void func_00508AB0(char *p) {
    short d;
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    char c[0x40];
    V508 w __attribute__((aligned(16)));
    short k;
    unsigned char f;
    float l;
    char *g = D_005BE190[0];
    f = 0;
    *(float *)(p + 0x210) = 0.08726646f;
    func_00316F30(p, a, 0);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b), "r"(g + 0x50) : "memory");
    b[1] += 100.0f;
    b[3] = 1.0f;
    func_001316B0(0.4f, p + 0x190, b, a);
    *(float *)(p + 0x19C) = 1.0f;
    l = func_001324B0(a, p + 0x190) / 0.4142129f;
    *(float *)(p + 0x238) = l;
    if (l < 450.0f) *(float *)(p + 0x238) = 450.0f;
    func_003176C0(p, p + 0x1A0, p + 0x190);
    if ((unsigned char)func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, p + 0x190, p + 0x1A0, p + 0x1A0, c, 8) == 1) {
        f = 1;
    } else if (func_001324B0(p + 0x190, p + 0x1A0) < 200.0f) {
        f = 1;
    } else if (!(*(float *)(p + 0x238) <= 800.0f)) {
        f = 1;
    }
    if (f == 1) {
        if (!(func_001324B0(a, D_0058C290) <= 800.0f)) {
            d = func_0034B940(a, D_0058C290);
        } else {
            d = *(short *)(p + 0x24A);
        }
        d = d - *(short *)(p + 0x24A);
        k = d;
        if (k < 0) k = -k;
        if (k > 0xB6) k = 0xB6;
        func_0034B8C0(p + 0x24A, &d, k);
        *(float *)(p + 0x214) = 6.283185f * ((float)*(short *)(p + 0x24A) / 65536.0f);
        func_003176C0(p, p + 0x1A0, p + 0x190);
        w.r = 100.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(w.v), "r"(p + 0x1A0) : "memory");
        func_002019D0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, w.v, p + 0x1B0);
        *(float *)(p + 0x1A0) = w.v[0];
        *(float *)(p + 0x1A8) = w.v[2];
        *(float *)(p + 0x1AC) = 1.0f;
    }
}
