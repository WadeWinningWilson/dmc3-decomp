char *func_00207480(int, int, float *, int);

int func_004F7310(char *p) {
    char *q;
    *(char **)(p + 0xBA0) = func_00207480(2, 0x76, 0, 16);
    q = *(char **)(p + 0xBA0);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x8E0;
        *(char *)(q + 0x9A) = 0;
        return 1;
    }
    return 0;
}

void func_00100580(char *);

void func_001003E0(char *, void *, int, int);

void func_0013D240(char *, int);

void func_002791E0(char *, int);

void func_0028C1A0(char *, int);

void func_00253000(char *, int);

extern char D_005BA850[];

extern char D_005BA874[];

extern char D_005BA8F4[];

extern char D_005A78F8[];

extern char D_005A77A0[];

char *func_004F7580(char *p, short flag) {
    char *m;
    if (p != 0) {
        *(char **)p = D_005BA850;
        *(char **)(p + 64) = D_005BA874;
        *(char **)(p + 160) = D_005BA8F4;
        func_0028C1A0(p + 2336, -1);
        m = p + 2080;
        if (m != 0) {
            *(char **)(p + 2096) = D_005A78F8;
            if (m != 0) {
                *(char **)(p + 2096) = D_005A77A0;
            }
        }
        func_002791E0(p + 512, -1);
        func_001003E0(p + 340, (void *)func_0013D240, 16, 7);
        func_00253000(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_0013D6A0(char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0028C110(char *);

void func_0013D640(char *, char *);

extern char D_005BA990[];

extern char D_005BA9B4[];

extern char D_005BAA34[];

extern char D_005BAAC8[];

void func_0024FE00(char *);

char *func_004F7680(int p0, int p1, char p2, short p3, float *p4) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x620, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_0024FE00(t);
            *(char **)t = D_005BA990;
            *(char **)(t + 0x40) = D_005BA9B4;
            *(char **)(t + 0xA0) = D_005BAA34;
            *(char **)(t + 0xD0) = D_005BAAC8;
            func_0028C110(t + 0x140);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
        r = *b.pp; r[0x18] = 1;
        goto ok;
    }
    *b.pp = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret == 0) {
        return 0;
    }
    *(int *)(ret + 0x130) = p0;
    *(char *)(ret + 0x60C) = p2;
    *(short *)(ret + 0x90) = p3;
    *(int *)(ret + 0x608) = p1;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p4) : "memory");
    *(float *)(ret + 0x5C) = 1.0f;
    *(int *)(ret + 0x610) = 0;
    return ret;
}

void func_00131650(char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00131D70(char *, char *);

extern float D_0058BBA0[];

#define VSUBR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

void func_004F73C0(char *p, unsigned char k) {
    void func_00104B80(char *, float *, float *);
    void func_00131700(float *, float *, float *);
    float m[16];
    float r[4];
    if (k == 0) {
        UNIT(m);
        r[0] = 0.0f;
        r[1] = 0.0f;
        r[2] = 0.0f;
        r[3] = 1.0f;
        func_00131700(m, m, r);
        func_00104B80(p + 0xBE0, m, D_0058BBA0 + *(int *)(p + 0xBA8) * 4);
        *(float *)(p + 0xF0) = *(float *)(p + 0xBE0);
        *(float *)(p + 0xF4) = *(float *)(p + 0xBE4);
        *(float *)(p + 0xF8) = *(float *)(p + 0xBE8);
        *(float *)(p + 0xFC) = 1.0f;
    } else {
        VSUBR54(p + 0xF0, p + 0xBD0, p + 0x50);
        func_00131650(p + 0xF0, p + 0xF0);
    }
    func_00131D70(p + 0x80, p + 0xF0);
}

char *func_004F7840(int p0, int p1, char p2, int p3) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x620, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_0024FE00(t);
            *(char **)t = D_005BA990;
            *(char **)(t + 0x40) = D_005BA9B4;
            *(char **)(t + 0xA0) = D_005BAA34;
            *(char **)(t + 0xD0) = D_005BAAC8;
            func_0028C110(t + 0x140);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x9, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret == 0) {
        return 0;
    }
    *(int *)(ret + 0x130) = p0;
    *(char *)(ret + 0x60C) = p2;
    *(int *)(ret + 0x608) = p1;
    *(short *)(ret + 0x90) = 0;
    *(int *)(ret + 0x610) = p3;
    return ret;
}

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

void func_00133890(char *, char *, V4 *);

void func_004F71E0(char *p) {
    extern V4 D_0058BD60;
    V4 t;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x8E0) : "memory");
    t = D_0058BD60;
    func_00133890(p + 0x8E0, p + 0xF0, &t);
    *(float *)(p + 0x910) = *(float *)(p + 0x50);
    *(float *)(p + 0x914) = *(float *)(p + 0x54);
    *(float *)(p + 0x918) = *(float *)(p + 0x58);
    *(float *)(p + 0x91C) = 1.0f;
}

void func_00253110(char *, char *, int, float);

int func_002536B0(char *, char *);

void func_004F7060(char *p) {
    void func_001AD140(char *);
    *(float *)(p + 0x144) = *(float *)(p + 0x144) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x144) < 0.0f) {
        func_001AD140(p);
        return;
    }
    func_00253110(p, p + 0xBD0, 3, *(float *)(p + 0x10));
    switch (func_002536B0(p, p + 0xBD0)) {
    case 0:
        break;
    case 1:
        break;
    case -1:
        func_001AD140(p);
        return;
    }
}

extern char D_0056E620[];

void func_0028C200();

void func_0028C3A0();

void func_0028C8E0();

void func_0028C910();

void func_004F7260(p) char *p; {
    *(char *)(p + 2880) = 1;
    *(char *)(p + 2881) = 0;
    *(short *)(p + 2882) = 0;
    *(char *)(p + 2896) = 2;
    *(int *)(p + 2912) = 0;
    *(int *)(p + 2916) = 0;
    *(int *)(p + 2920) = 0;
    *(int *)(p + 2924) = 1065353216;
    *(int *)(p + 2928) = 1101004800;
    func_0028C200(p + 2336, p + 2880, p + 2896, 3, D_0056E620, p, 0);
    func_0028C8E0(p + 2336, 0);
    func_0028C910(p + 2336);
    *(int *)(p + 2552) = 197697;
    func_0028C3A0(p + 2336, 0, -1, p + 2272);
}

void func_002075D0();

void func_004F7370(p) char *p; {
    func_002075D0(3, 49, p + 2272, 1, 16);
    func_002075D0(3, 448, p + 2272, 1, 16);
}

int func_00206730();

int func_004F7180(p0) int p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v2 = func_00206730((v0 + 2976));
    v1 = *(int *)(v0 + 2976);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 2976) = 0;
    }
    return v2;
}

extern char D_0058BC50[];

void func_004F74B0(p0) int p0; {
    int func_00104B80();
    void func_00131700();
    char stk[0x50] __attribute__((aligned(16)));
    int tmp2;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -32) + 48)) : "memory");
    *(float *)((stk + -32) + 32) = 0.0f;
    *(float *)((stk + -32) + 36) = 0.0f;
    *(float *)((stk + -32) + 40) = 0.0f;
    *(float *)((stk + -32) + 44) = 1.0f;
    func_00131700(((stk + -32) + 48), ((stk + -32) + 48), ((stk + -32) + 32));
    tmp2 = func_00104B80((p0 + 3008), ((stk + -32) + 48), (D_0058BC50 + (*(int *)((char *)p0 + 2984) << 4)));
    *(float *)((char *)p0 + 3008) = (*(float *)((char *)p0 + 3008) + *(float *)((char *)p0 + 80));
    *(float *)((char *)p0 + 3012) = (*(float *)((char *)p0 + 3012) + *(float *)((char *)p0 + 84));
    *(float *)((char *)p0 + 3016) = (*(float *)((char *)p0 + 3016) + *(float *)((char *)p0 + 88));
    *(int *)((char *)p0 + 3020) = 0x3f800000;
}

extern void func_004F6A20();

void func_004F7650(char *p) { func_004F6A20(p + -64); }

void func_004F7570(void) {}
