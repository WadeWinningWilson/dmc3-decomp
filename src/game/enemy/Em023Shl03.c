extern char D_01CAFF0C[];

void func_0028C8E0(char *, int);

char *func_0028C3A0(char *, int, int, char *);

void func_0034BA60(int, char *, int, int, int);

void func_00133890(char *, float *, float *);

#define VUNIT506(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

#define VCOPY506(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_00506210(char *p) {
    void func_001AD140(char *);
    float m[16] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    char *o;
    char *e;
    o = *(char **)((*(char **)D_01CAFF0C) + 0xC);
    if (*(int *)(p + 0x598) != *(int *)(*(char **)(p + 0x218) + 0x65CC)) {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x20C) = *(float *)(p + 0x20C) + *(float *)(p + 0x10);
    if (!(*(float *)(p + 0x20C) < *(float *)(p + 0x204))) {
        (*(unsigned char *)(p + 5))++;
        VCOPY506(p + 0x1F0, *(char **)(p + 0x218) + 0x700);
        *(float *)(p + 0x1F0) = *(float *)(p + 0x1F0) + *(float *)(*(char **)(p + 0x218) + 0x6E0) * *(float *)(p + 0x208);
        *(float *)(p + 0x1F4) = *(float *)(p + 0x1F4) + *(float *)(*(char **)(p + 0x218) + 0x6E4) * *(float *)(p + 0x208);
        *(float *)(p + 0x1F8) = *(float *)(p + 0x1F8) + *(float *)(*(char **)(p + 0x218) + 0x6E8) * *(float *)(p + 0x208);
        *(int *)(p + 0x2F8) = 0xCC0;
        func_0028C8E0(p + 0x220, 0);
        *(int *)(p + 0x2F8) = 0x20041;
        *(unsigned char *)(p + 0x223) = 0;
        if ((e = func_0028C3A0(p + 0x220, 0, -1, p + 0x1B0)) != 0) e[2] = 1;
        func_0028C3A0(p + 0x220, 1, -1, p + 0x1B0);
        func_0034BA60(0x28, p + 0x1E0, 0x29, 0, 1);
        return;
    }
    VUNIT506(m);
    VUNIT506(p + 0x1B0);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(*(char **)(p + 0x218) + 0x78B0), "r"(o + 0x50) : "memory");
    d[1] = 0.0f;
    r[0] = 0.0f;
    r[1] = 1.0f;
    r[2] = 0.0f;
    r[3] = 0.0f;
    func_00133890(p + 0x1B0, d, r);
    VCOPY506(p + 0x1E0, *(char **)(p + 0x218) + 0x78B0);
    *(float *)(p + 0x1E0) = *(float *)(p + 0x1E0) + 230.0f * *(float *)(*(char **)(p + 0x218) + 0x78A0) * *(float *)(p + 0x10);
    *(float *)(p + 0x1E4) = *(float *)(p + 0x1E4) + 230.0f * *(float *)(*(char **)(p + 0x218) + 0x78A4) * *(float *)(p + 0x10);
    *(float *)(p + 0x1E8) = *(float *)(p + 0x1E8) + 230.0f * *(float *)(*(char **)(p + 0x218) + 0x78A8) * *(float *)(p + 0x10);
}

char *func_00207480(int, int, float *, int);

void func_00105300(float *, char *);

void func_0028C910(char *);

short func_00131D10(float, float);

void func_00133450(float *, char *, float *);

void func_005050C0(char *, int, int, int, char *, float *, int, int, float, float);

void func_00506480(char *p) {
    void func_001AD140(char *);
    void func_0028C740(char *);
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    int i;
    char *o;
    *(float *)(p + 0x1F4) -= *(float *)(p + 0x200) * *(float *)(p + 0x10);
    *(float *)(p + 0x1E0) += *(float *)(p + 0x1F0) * *(float *)(p + 0x10);
    *(float *)(p + 0x1E4) += *(float *)(p + 0x1F4) * *(float *)(p + 0x10);
    *(float *)(p + 0x1E8) += *(float *)(p + 0x1F8) * *(float *)(p + 0x10);
    *(short *)(p + 0x90) = func_00131D10(*(float *)(p + 0x1F0), *(float *)(p + 0x1F8));
    if (*(float *)(p + 0x1E4) < 50.0f) {
        *(float *)(p + 0x1E4) = 50.0f;
        *(float *)(p + 0x20C) = 90.0f;
        (*(unsigned char *)(p + 4))++;
        func_00105300(m, p + 0x1B0);
        for (i = -2; i <= 2; i++) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(p + 0x1D0) : "memory");
            v[0] += *(float *)(p + 0x1B0) * (0.15f * i);
            v[2] += *(float *)(p + 0x1B8) * (0.15f * i);
            func_00133450(m, p + 0x1C0, v);
            func_005050C0(*(char **)(p + 0x218) + 0x710, *(int *)(p + 0x190), i, 0, *(char **)(p + 0x218), m, *(int *)(p + 0x590), *(int *)(p + 0x594), 2.0f, 50.0f);
        }
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        m[0] = 5.0f;
        m[5] = 5.0f;
        m[10] = 5.0f;
        o = func_00207480(1, 0x5C5, m, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = p + 0x1B0;
            *(signed char *)(o + 0x9A) = 1;
        }
        if (*(char **)(p + 0x21C) != 0) func_001AD140(*(char **)(p + 0x21C));
        func_0034BA60(0x2E, p + 0x1E0, 0x29, 0, 1);
        func_0028C740(p + 0x220);
        *(int *)(p + 0x2F8) = 0xCC0;
        func_0028C8E0(p + 0x220, 6);
        *(int *)(p + 0x2F8) = 0x40;
        *(signed char *)(p + 0x223) = 0;
        func_0028C910(p + 0x220);
        o = func_0028C3A0(p + 0x220, 2, 5, p + 0x1B0);
        if (o != 0) *(signed char *)(o + 2) = 1;
        return;
    }
    *(float *)(p + 0x194) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x194) < 0.0f) {
        *(float *)(p + 0x20C) = 90.0f;
        (*(unsigned char *)(p + 4))++;
        if (*(char **)(p + 0x21C) != 0) func_001AD140(*(char **)(p + 0x21C));
        return;
    }
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

#define QCOPYR(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

#define VSUBR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

void func_00506080(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    char *d;
    char *e;
    d = *(char **)(*(char **)D_01CAFF0C + 0xC);
    *(int *)(p + 0x20C) = 0;
    *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    func_0028C910(p + 0x220);
    func_0028C8E0(p + 0x220, 7);
    e = func_0028C3A0(p + 0x220, 3, -1, p + 0x1B0);
    if (e != 0) {
        *(unsigned char *)(e + 2) = 1;
    }
    UNIT(m);
    UNIT(p + 0x1B0);
    VSUBR54(v, d + 0x50, *(char **)(p + 0x218) + 0x78B0);
    v[1] = 0.0f;
    u[0] = 0.0f;
    u[1] = 1.0f;
    u[2] = 0.0f;
    u[3] = 0.0f;
    func_00133890(p + 0x1B0, v, u);
    QCOPYR(p + 0x1E0, *(char **)(p + 0x218) + 0x78B0);
    *(float *)(p + 0x1E0) = *(float *)(p + 0x1E0) + 230.0f * *(float *)(*(char **)(p + 0x218) + 0x78A0) * *(float *)(p + 0x10);
    *(float *)(p + 0x1E4) = *(float *)(p + 0x1E4) + 230.0f * *(float *)(*(char **)(p + 0x218) + 0x78A4) * *(float *)(p + 0x10);
    *(float *)(p + 0x1E8) = *(float *)(p + 0x1E8) + 230.0f * *(float *)(*(char **)(p + 0x218) + 0x78A8) * *(float *)(p + 0x10);
}

void func_0028C5C0(char *, int, float);

void func_00382A50(char *);

void func_00506760(char *p) {
    void func_001AD140(char *);
    void func_00206730(char *);
    func_00382A50(p + 0x218);
    func_00206730(p + 0x21C);
    if (*(char **)(p + 0x218) == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(*(char **)(p + 0x218) + 0x77C8) != 0) {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x20C) = *(float *)(p + 0x20C) - *(float *)(p + 0x10);
    func_0028C5C0(p + 0x220, 0, 1.0f);
    if (*(float *)(p + 0x20C) < 0.0f) {
        func_001AD140(p);
    }
}

extern char D_00645A30[];

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00505980(char *);

char *func_00505A70(int u0, int u1, int p2, int p3, char *p4, int p5, int p6, float f0, float f1, float f2) {
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
    **q = func_001B0FD0(a, 0x5A0, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00505980(t);
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
        *(char **)(ret + 0x218) = p4;
        *(int *)(ret + 0x19C) = p2;
        *(int *)(ret + 0x1A0) = p3;
        *(int *)(ret + 0x21C) = 0;
        *(float *)(ret + 0x200) = f2;
        *(float *)(ret + 0x208) = f1;
        *(float *)(ret + 0x204) = f0;
        *(int *)(ret + 0x590) = p5;
        *(int *)(ret + 0x594) = p6;
        *(char *)(ret + 0x45) = 4;
        *(int *)(ret + 0x598) = *(int *)(p4 + 0x65CC);
    }
    return ret;
}

void func_00506860(p) char *p; {
    void func_001AD140();
    void func_00206730();
    void func_0028C740();
    func_00206730(p + 540);
    if (*(char **)(p + 540) != 0) {
        func_001AD140(*(char **)(p + 540));
    }
    func_0028C740(p + 544);
}

void func_00506820(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_00505CD0();

void func_005068C0(char *p) { func_00505CD0(p + -64); }

extern void func_005068B0();

void func_005068D0(char *p) { func_005068B0(p + -64); }

extern void func_005059E0();

void func_005068E0(char *p) { func_005059E0(p + -64); }

void func_005068F0(char *p) { func_005059E0(p + -160); }

void func_00506830(void) {}

void func_00506840(void) {}

void func_00506850(void) {}
