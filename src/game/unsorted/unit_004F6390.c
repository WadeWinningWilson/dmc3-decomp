#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00252FA0(char *);

void func_0028C110(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_0013D240();

void func_0022C820(char *);

void func_0022B5A0(char *);

extern char D_005BA850[];

extern char D_005BA874[];

extern char D_005BA8F4[];

extern char D_005A77A0[];

extern char D_005A78F8[];

static inline void func_004F6850_v(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

static inline void func_004F6850_w(float *v, float x, float y) {
    v[0] = x;
    v[1] = y;
}

char *func_004F6850(char *p) {
    func_00252FA0(p);
    *(char **)p = D_005BA850;
    *(char **)(p + 0x40) = D_005BA874;
    *(char **)(p + 0xA0) = D_005BA8F4;
    func_00100450(p + 0x154, (void *)func_001AAD30, (void *)func_0013D240, 16, 7);
    func_002790E0(p + 0x200);
    {
        char *q = p + 0x820;
        *(char **)(p + 0x830) = D_005A77A0;
        func_0022C820(q);
        *(char **)(q + 0x10) = D_005A78F8;
        func_0022B5A0(q);
    }
    func_0028C110(p + 0x920);
    UNIT(p + 0x8E0);
    *(int *)(p + 0xBA0) = 0;
    *(int *)(p + 0xBA4) = 0;
    *(int *)(p + 0xBA8) = 0;
    func_004F6850_w((float *)(p + 0xBAC), 0.0f, 0.0f);
    *(short *)(p + 0x90) = 0;
    func_004F6850_v((float *)(p + 0xBC0), 0.0f, 0.0f, 0.0f, 1.0f);
    func_004F6850_v((float *)(p + 0xBD0), 0.0f, 0.0f, 0.0f, 1.0f);
    func_004F6850_v((float *)(p + 0xBE0), 0.0f, 0.0f, 0.0f, 1.0f);
    *(unsigned char *)(p + 0xBF0) = 1;
    return p;
}
