extern char *D_005BC2E0;

extern int D_005BDD70;

extern char D_005870A0[];

extern char D_01CAFF0C[];

void func_00131700(float *, float *, float *);

void func_00104B80(float *, float *, float *);

unsigned char func_002D9FA0(char *, float *);

float func_00132D80(float *, float *);

void func_00131650(char *, char *);

void func_004BB660(char *);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define VSUB(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

#define G (*(char **)D_01CAFF0C)

static inline unsigned char on4BA(char *pl) { unsigned char r; if (*(unsigned char *)(pl + 0x28A6) != 0) r = 1; else r = 0; return r; }

void func_004BAF80(char *p) {
    char *func_00207480(int, int, int, int);
    float q[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float o[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float s[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float t;
    float x;
    char *e;
    char *pl;
    int k;
    e = func_00207480(3, 0x25D, 0, 8);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x380;
        e[0x9A] = 0;
        e[0x3A] = 1;
        *(char **)(p + 0x370) = e;
    }
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(*(char **)(p + 0x378)), "r"(q) : "memory");
    UNIT(m);
    v[0] = 0.0f;
    v[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    v[2] = 0.0f;
    v[3] = 1.0f;
    func_00131700(m, m, v);
    w[0] = 0.0f;
    w[1] = 0.0f;
    w[2] = 50.0f;
    w[3] = 1.0f;
    func_00104B80(o, m, w);
    *(float *)(p + 0x50) = q[0] + o[0];
    *(float *)(p + 0x54) = q[1] + o[1];
    *(float *)(p + 0x58) = q[2] + o[2];
    *(float *)(p + 0x5C) = 1.0f;
    VCOPY(p + 0x3C0, p + 0x50);
    *(float *)(p + 0x3CC) = 1.0f;
    w[0] = 0.0f;
    w[1] = 0.0f;
    w[2] = 600.0f;
    w[3] = 1.0f;
    func_00104B80(o, m, w);
    pl = *(char **)(G + 0xC);
    r[0] = *(float *)(pl + 0x50) + o[0];
    r[1] = *(float *)(p + 0x54);
    r[2] = *(float *)(pl + 0x58) + o[2];
    r[3] = 1.0f;
    if (on4BA(pl) == 1 && func_002D9FA0(pl, s) == 1) {
        VSUB(a, r, p + 0x50);
        a[3] = 1.0f;
        VSUB(b, s, p + 0x50);
        b[3] = 1.0f;
        x = func_00132D80(a, b);
        if (!(x <= 0.0f) && !(x <= 0.866025f)) {
            r[0] = s[0];
            r[1] = s[1];
            r[2] = s[2];
        }
    }
    VSUB(p + 0x3D0, r, q);
    func_00131650(p + 0x3D0, p + 0x3D0);
    *(float *)(p + 0x3E0) = 1.0f;
    func_004BB660(p);
    func_0028C200(p + 0x150, (char *)&D_005BDD70, D_005870A0, 1, D_005BC2E0, p, 0);
    switch (*(signed char *)(p + 0x374)) {
    case 0:
        k = 0x20;
        break;
    case 1:
        k = 0x21;
        break;
    case 2:
        k = 0x22;
        break;
    }
    func_0028C8E0(p + 0x150, k);
    func_0028C910(p + 0x150);
    *(int *)(p + 0x228) = 0x30F3F;
    func_0028C3A0(p + 0x150, 0, -1, p + 0x380);
    func_0028C3A0(p + 0x150, 1, -1, p + 0x380);
    *(float *)(p + 0x3E4) = 600.0f;
}

extern char D_01DFABA0[];

void func_00330B50(char *, int, char *, int);

void func_004BB530(char *p) {
    void func_001AD140(char *);
    char *func_00207480(int, int, char *, int);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00207480(3, 0x25E, p + 0x380, 8);
        *(float *)(p + 0x3E4) = 3.0f;
        func_00330B50(D_01DFABA0, 12, p + 0x3B0, 4);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 1:
        *(float *)(p + 0x3E4) = *(float *)(p + 0x3E4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x3E4) < 0.0f) {
            func_001AD140(p);
            return;
        }
        break;
    }
}

void func_00100580(char *);

void func_0028C1A0(char *, int);

void func_00253000(char *, int);

char *func_004BB770(char *p, short flag) {
    extern char D_005B8940[];
    extern char D_005B8964[];
    extern char D_005B89E4[];
    if (p != 0) {
        *(char **)p = D_005B8940;
        *(char **)(p + 64) = D_005B8964;
        *(char **)(p + 160) = D_005B89E4;
        func_0028C1A0(p + 336, -1);
        func_00253000(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

char *func_004BB850(char *p, char *s, short h) {
    void func_004BB9B0(char *);
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x3F0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x3F0, t);
        if (r != 0) {
            func_004BB9B0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x8, **q);
        func_001B1430(**q, 1);
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
        *(char **)(ret + 0x370) = s;
        *(short *)(ret + 0x90) = h;
        *(char **)(ret + 0x3E0) = p;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
    }
    return ret;
}

int func_00206730();

int func_004BB610(p0) int p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    char *tmp0;
    v0 = (char *)p0;
    v2 = func_00206730((v0 + 880));
    v1 = *(int *)(v0 + 880);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        tmp0 = *(char **)(v0 + 880);
        *(int *)(*(char **)(v0 + 880) + 144) = 0;
        *(char *)(tmp0 + 154) = 0;
        *(int *)(v0 + 880) = 0;
    }
    return v2;
}

extern void func_004BB730();

void func_004BB810(char *p) { func_004BB730(p + -64); }

extern void func_004BB750();

void func_004BB820(char *p) { func_004BB750(p + -64); }

void func_004BB5F0(void) {}

void func_004BB600(void) {}
