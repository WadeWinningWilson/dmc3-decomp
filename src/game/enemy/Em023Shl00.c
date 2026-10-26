void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

char *func_00207480(int, int, char *, int);

void func_0034BA60(int, char *, int, int, int);

extern float D_00567C10[][3];

extern float D_00567C70[][3];

#define QCPY458(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline char *pl458(char *p) {
    return ((char **)(*(char **)(p + 0x214) + 0x69F8))[*(int *)(p + 0x19C)];
}

void func_00458CB0(char *p) {
    void func_001AD140(char *);
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float t;
    float u;
    int v;
    char *q;
    char *e;
    char *o;
    q = *(char **)(p + 0x214);
    v = *(int *)(p + 0x224);
    e = ((char **)(q + 0x69F8))[*(int *)(p + 0x19C)];
    if (v != ((int *)(q + 0x65C8))[*(short *)(e + 0xB92)]) {
        func_001AD140(p);
        return;
    }
    switch (*(int *)(p + 0x1A0)) {
    case 0:
        QCPY458(a, *(char **)(*(char **)(e + 0x9D8) + 0x104) + 0x30);
        QCPY458(b, *(char **)(*(char **)(pl458(p) + 0x9E0) + 0x104) + 0x30);
        break;
    case 1:
        QCPY458(a, *(char **)(*(char **)(pl458(p) + 0x9E4) + 0x104) + 0x30);
        QCPY458(b, *(char **)(*(char **)(pl458(p) + 0x9EC) + 0x104) + 0x30);
        break;
    }
    *(float *)(p + 0x208) += *(float *)(p + 0x10);
    t = *(float *)(p + 0x208) / D_00567C10[*(int *)(p + 0x220)][*(int *)(p + 0x21C)];
    if (!(t <= 1.0f)) t = 1.0f;
    u = 1.0f - t;
    *(float *)(p + 0x1E0) = a[0] * u + b[0] * t;
    *(float *)(p + 0x1E4) = a[1] * u + b[1] * t;
    *(float *)(p + 0x1E8) = a[2] * u + b[2] * t;
    if (!(*(float *)(p + 0x208) < D_00567C10[*(int *)(p + 0x220)][*(int *)(p + 0x21C)] + (float)*(int *)(p + 0x19C) * D_00567C70[*(int *)(p + 0x220)][*(int *)(p + 0x21C)])) {
        func_0034BA60(0x35, p + 0x1E0, 0x29, 0, 1);
        (*(unsigned char *)(p + 5))++;
        *(float *)(p + 0x1F0) = 0.0f;
        *(float *)(p + 0x1F4) = 0.0f;
        *(float *)(p + 0x1F8) = 0.0f;
        *(float *)(p + 0x1FC) = 0.0f;
        if (*(int *)(pl458(p) + 0x144C) == 0) {
            func_00207480(3, 0x33C, p + 0x1B0, 0x10);
            *(float *)(p + 0x208) = 90.0f;
            (*(unsigned char *)(p + 4))++;
            return;
        }
        *(int *)(p + 0x308) = 0xCC0;
        func_0028C8E0(p + 0x230, 0);
        *(int *)(p + 0x308) = 0x20041;
        *(signed char *)(p + 0x233) = 0;
        func_0028C910(p + 0x230);
        o = func_0028C3A0(p + 0x230, 0, -1, p + 0x1B0);
        if (o != 0) *(signed char *)(o + 2) = 1;
        o = func_0028C3A0(p + 0x230, 1, -1, p + 0x1B0);
        if (o != 0) *(signed char *)(o + 2) = 1;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        o = func_00207480(1, 0x5C5, (char *)m, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = p + 0x1B0;
            *(signed char *)(o + 0x9A) = 1;
        }
        *(float *)(p + 0x208) = 0.0f;
    }
}

float func_001324E0(float *);

void func_004594B0(char *p) {
    float d[4] __attribute__((aligned(16)));
    float l;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(((char **)(*(char **)(p + 0x214) + 0x69F8))[*(int *)(p + 0x19C)] + 0x1270), "r"(p + 0x1E0) : "memory");
    l = func_001324E0(d);
    if (!(l <= 0.0f)) {
        d[0] /= l;
        d[1] /= l;
        d[2] /= l;
    }
    *(float *)(p + 0x208) += *(float *)(p + 0x10);
    if (*(float *)(p + 0x208) < 60.0f) {
        *(float *)(p + 0x1F0) *= 0.99f;
        *(float *)(p + 0x1F4) *= 0.99f;
        *(float *)(p + 0x1F8) *= 0.99f;
        *(float *)(p + 0x1F0) += d[0] * (*(float *)(p + 0x200) * *(float *)(p + 0x10));
        *(float *)(p + 0x1F4) += d[1] * (*(float *)(p + 0x200) * *(float *)(p + 0x10));
        *(float *)(p + 0x1F8) += d[2] * (*(float *)(p + 0x200) * *(float *)(p + 0x10));
    }
    l = func_001324E0((float *)(p + 0x1F0));
    if (!(l <= *(float *)(p + 0x204))) {
        *(float *)(p + 0x1F0) = *(float *)(p + 0x204) * (*(float *)(p + 0x1F0) / l);
        *(float *)(p + 0x1F4) = *(float *)(p + 0x204) * (*(float *)(p + 0x1F4) / l);
        *(float *)(p + 0x1F8) = *(float *)(p + 0x204) * (*(float *)(p + 0x1F8) / l);
    }
    *(float *)(p + 0x1E0) += *(float *)(p + 0x1F0) * *(float *)(p + 0x10);
    *(float *)(p + 0x1E4) += *(float *)(p + 0x1F4) * *(float *)(p + 0x10);
    *(float *)(p + 0x1E8) += *(float *)(p + 0x1F8) * *(float *)(p + 0x10);
    if (*(float *)(p + 0x1E4) < 50.0f) *(float *)(p + 0x1E4) = 50.0f;
    if (*(char **)(p + 0x2AC) != 0 && (*(int *)(*(char **)(p + 0x2AC) + 8) & 0x20000)) {
        func_00207480(3, 0x33B, p + 0x1B0, 0x10);
        *(float *)(p + 0x470) = 100.0f;
        *(float *)(p + 0x208) = 90.0f;
        (*(unsigned char *)(p + 4))++;
        func_0034BA60(0x2E, p + 0x50, 0x29, 0, 1);
        return;
    }
    *(float *)(p + 0x194) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x194) < 0.0f) {
        func_00207480(3, 0x33C, p + 0x1B0, 0x10);
        *(float *)(p + 0x470) = 100.0f;
        *(float *)(p + 0x208) = 90.0f;
        (*(unsigned char *)(p + 4))++;
        func_0034BA60(0x2E, p + 0x50, 0x29, 0, 1);
        return;
    }
}

void func_0028C740(char *);

void func_00459820(char *p) {
    void func_001AD140(char *);
    if (*(char **)(p + 0x218) != 0) {
        func_001AD140(*(char **)(p + 0x218));
    }
    func_0028C740(p + 0x230);
}

void func_00105300(char *, char *);

void func_00458BF0(char *p) {
    *(int *)(p + 0x208) = 0;
    switch (*(int *)(p + 0x1A0)) {
    case 0:
        func_00105300(p + 0x1B0, *(char **)(*(char **)(((char **)(*(char **)(p + 0x214) + 0x69F8))[*(int *)(p + 0x19C)] + 0x9D8) + 0x104));
        break;
    case 1:
        func_00105300(p + 0x1B0, *(char **)(*(char **)(((char **)(*(char **)(p + 0x214) + 0x69F8))[*(int *)(p + 0x19C)] + 0x9E4) + 0x104));
        break;
    }
    *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    func_0034BA60(0x36, p + 0x1E0, 0x29, 0, 1);
}

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_00382A50(char *);

extern char D_00567610[];

extern float D_00567B30[];

void func_004587D0(char *p) {
    void func_001AD140(char *);
    float m[16] __attribute__((aligned(16)));
    char *o;
    char *e;
    func_00382A50(p + 0x214);
    if (*(int *)(p + 0x214) == 0) {
        func_001AD140(p);
        return;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    switch (*(int *)(p + 0x1A0)) {
    case 0:
        func_00105300(p + 0x1B0, *(char **)(*(char **)(((char **)(*(char **)(p + 0x214) + 0x69F8))[*(int *)(p + 0x19C)] + 0x9D8) + 0x104));
        break;
    case 1:
        func_00105300(p + 0x1B0, *(char **)(*(char **)(((char **)(*(char **)(p + 0x214) + 0x69F8))[*(int *)(p + 0x19C)] + 0x9E4) + 0x104));
        break;
    }
    *(char **)(p + 0x218) = 0;
    *(char **)(p + 0x218) = func_00207480(3, 0x1BD, (char *)m, 0x10);
    if ((o = *(char **)(p + 0x218)) == 0) {
        func_001AD140(p);
        return;
    }
    o[0x3A] = 1;
    e = *(char **)(p + 0x218);
    *(char **)(e + 0x90) = p + 0x1B0;
    e[0x9A] = 1;
    *(float *)(p + 0x194) = D_00567B30[*(int *)(p + 0x220)];
    *(unsigned char *)(p + 0x450) = 2;
    *(float *)(p + 0x460) = 0.0f;
    *(float *)(p + 0x464) = 0.0f;
    *(float *)(p + 0x468) = 0.0f;
    *(float *)(p + 0x46C) = 1.0f;
    *(float *)(p + 0x470) = 50.0f;
    *(unsigned char *)(p + 0x4F0) = 5;
    *(unsigned char *)(p + 0x4F1) = 0;
    *(short *)(p + 0x4F2) = 0;
    *(unsigned char *)(p + 0x4A0) = 2;
    *(float *)(p + 0x4B0) = 0.0f;
    *(float *)(p + 0x4B4) = 0.0f;
    *(float *)(p + 0x4B8) = 0.0f;
    *(float *)(p + 0x4BC) = 1.0f;
    *(float *)(p + 0x4C0) = 150.0f;
    *(unsigned char *)(p + 0x4F4) = 2;
    *(unsigned char *)(p + 0x4F5) = 0;
    *(short *)(p + 0x4F6) = 1;
    func_0028C200(p + 0x230, p + 0x4F0, p + 0x450, 3, D_00567610, p, 0);
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 0x198) = 0;
    *(unsigned char *)(p + 0x199) = 0;
    *(int *)(p + 0x20C) = 0;
    *(float *)(p + 0x210) = 20.0f;
}

extern char D_01CAFF0C[];

extern char D_00567850[];

extern float D_00567874[];

extern float D_00567878[];

void func_00332AE0(char *, char *, float, float);

void func_00459860(char *p) {
    *(unsigned char *)(p + 0x199) = 1;
    func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_00567850, D_00567878[0], D_00567874[0]);
}

extern char D_00645A30[];

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00458470(char *);

char *func_00458560(int u0, int u1, int p2, int p3, char *p4, int p5, int p6, float f0, float f1, float f2) {
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
    **q = func_001B0FD0(a, 0x500, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00458470(t);
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
    if (ret != 0) {
        *(char **)(ret + 0x214) = p4;
        *(int *)(ret + 0x19C) = p2;
        *(int *)(ret + 0x1A0) = p3;
        *(int *)(ret + 0x218) = 0;
        *(float *)(ret + 0x200) = f0;
        *(float *)(ret + 0x194) = f2;
        *(float *)(ret + 0x204) = f1;
        *(int *)(ret + 0x21C) = p5;
        *(int *)(ret + 0x220) = p6;
        *(char *)(ret + 0x45) = 4;
        *(int *)(ret + 0x224) = ((int *)(p4 + 0x65C8))[*(short *)(((char **)(p4 + 0x69F8))[p2] + 0xB92)];
    }
    return ret;
}

void func_004597A0(p0) char *p0; {
    int func_001AD140();
    float v0;
    int tmp2;
    v0 = 0.0f;
    *(float *)(p0 + 520) -= *(float *)(p0 + 16);
    if (*(float *)(p0 + 520) < v0) {
        tmp2 = func_001AD140();
    }
}

void func_004597E0(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_004584D0();

void func_004598C0(char *p) { func_004584D0(p + -64); }

void func_004598D0(char *p) { func_004584D0(p + -160); }

void func_004597F0(void) {}

void func_00459800(void) {}

void func_00459810(void) {}
