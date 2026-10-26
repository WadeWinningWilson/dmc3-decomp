typedef union { float f[4]; int i[4]; } V4BB __attribute__((aligned(16)));

extern char *D_005BC2E0;

extern int D_005BDD68;

extern char D_00586F60[];

char *func_00207480(int, int, char *, int);

void func_004B9370(char *);

extern char D_01CAFF0C[];

extern int D_01CAFF38[];

void func_00131700(float *, float *, float *);

void func_00104B80(float *, float *, float *);

unsigned char func_00201770(char *, float *, float *, float *, int);

unsigned char func_002D9FA0(char *, float *);

float func_00132D80(float *, float *);

void func_00131650(char *, char *);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

#define VSUB(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

#define tmp tt.f

#define G (*(char **)D_01CAFF0C)

static inline unsigned char on4BB(char *pl) { unsigned char r; if (*(unsigned char *)(pl + 0x28A6) != 0) r = 1; else r = 0; return r; }

#define q qq.f
void func_004B8BE0(char *p) {
    void func_001AD140(char *);
    V4BB qq;
    float r2[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float o[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    V4BB tt;
    float r[4] __attribute__((aligned(16)));
    float s[16] __attribute__((aligned(16)));
    float s2[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float x;
    float dy;
    char *pl;
    {
        char *e = func_00207480(3, 0x25A, 0, 8);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x3B0;
            *(unsigned char *)(e + 0x9A) = 0;
            *(unsigned char *)(e + 0x3A) = 1;
            *(char **)(p + 0x378) = e;
            *(unsigned char *)(p + 0x370) = 1;
        }
    }
    {
        char *e = func_00207480(2, 0x13E, 0, 8);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x3B0;
            *(unsigned char *)(e + 0x9A) = 0;
            *(char **)(p + 0x37C) = e;
            *(unsigned char *)(p + 0x371) = 1;
        }
    }
    {
        char *e = func_00207480(2, 0x1E, 0, 8);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x3B0;
            *(unsigned char *)(e + 0x9A) = 0;
            *(char **)(p + 0x380) = e;
            *(unsigned char *)(p + 0x372) = 1;
        }
    }
    {
        char *e = func_00207480(2, 0x1F, 0, 8);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x3B0;
            *(unsigned char *)(e + 0x9A) = 0;
            *(char **)(p + 0x384) = e;
            *(unsigned char *)(p + 0x373) = 1;
        }
    }
    {
        char *e = func_00207480(2, 0x22, 0, 8);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x3B0;
            *(unsigned char *)(e + 0x9A) = 0;
            *(char **)(p + 0x388) = e;
            *(unsigned char *)(p + 0x374) = 1;
        }
    }
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(*(char **)(p + 0x38C)), "r"(q) : "memory");
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
    q[0] += o[0];
    q[1] += o[1];
    q[2] += o[2];
    q[3] = 1.0f;
    switch (D_01CAFF38[0]) {
    case 0x67:
    case 0x70:
    case 0x71:
    case 0xD8:
    case 0xD4:
        q[1] = *(float *)(*(char **)(G + 0xC) + 0x2924);
        break;
    default:
        tt = qq;
        tmp[1] = tmp[1] + 20.0f;
        if (func_00201770(*(char **)(G + 0x14) + 0x548, tmp, r, s, 2) == 1) {
            q[1] = -10.0f + r[1];
        } else {
            func_001AD140(p);
            return;
        }
        break;
    }
    *(float *)(p + 0x50) = q[0];
    *(float *)(p + 0x54) = q[1];
    *(float *)(p + 0x58) = q[2];
    *(float *)(p + 0x5C) = 1.0f;
    w[0] = 0.0f;
    w[1] = 0.0f;
    w[2] = 600.0f;
    w[3] = 1.0f;
    func_00104B80(o, m, w);
    pl = *(char **)(G + 0xC);
    r2[0] = *(float *)(pl + 0x50) + o[0];
    r2[1] = *(float *)(p + 0x54);
    r2[2] = *(float *)(pl + 0x58) + o[2];
    r2[3] = 1.0f;
    if (on4BB(pl) == 1 && func_002D9FA0(pl, s2) == 1) {
        VSUB(a, r2, p + 0x50);
        a[3] = 1.0f;
        VSUB(b, s2, p + 0x50);
        b[3] = 1.0f;
        x = func_00132D80(a, b);
        if (!(x <= 0.0f) && !(x <= 0.866025f)) {
            r2[0] = s2[0];
            r2[1] = *(float *)(p + 0x54);
            r2[2] = s2[2];
        }
    }
    VSUB(p + 0x3A0, r2, q);
    func_00131650(p + 0x3A0, p + 0x3A0);
    *(float *)(p + 0x390) = 0.4f;
    dy = *(float *)(*(char **)(p + 0x3FC) + 0x54) - *(float *)(p + 0x54);
    dy = dy < 0.0f ? -dy : dy;
    if (!(dy <= 50.0f)) {
        func_001AD140(p);
        return;
    }
    func_004B9370(p);
    func_0028C200(p + 0x150, (char *)&D_005BDD68, D_00586F60, 1, D_005BC2E0 + 0x740, p, 0);
    func_0028C8E0(p + 0x150, 0);
    func_0028C910(p + 0x150);
    *(int *)(p + 0x228) = 0x30F3F;
    func_0028C3A0(p + 0x150, 0, -1, p + 0x3B0);
    func_0028C3A0(p + 0x150, 1, -1, p + 0x3B0);
    *(int *)(p + 0x3F4) = 0;
    *(int *)(p + 0x3F8) = 0;
    *(float *)(p + 0x3F0) = 100.0f;
}
#undef q

extern char D_00645A30[];

void func_0028C110(char *);

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00252FA0(char *);

typedef struct { float f[4]; } SF4;

extern char D_005B8800[];

extern char D_005B8824[];

extern char D_005B88A4[];

char *func_004B9710(char *p0, int p1, int p2, int p3, int p4, int p5) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x520, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B8800;
            *(char **)(t + 0x40) = D_005B8824;
            *(char **)(t + 0xA0) = D_005B88A4;
            func_0028C110(t + 0x1A0);
            *(char *)(t + 0x420) = 0;
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
    o = ret;
    if (o != 0) {
        *(signed char *)(o + 0x150) = *(signed char *)p0;
        *(SF4 *)(o + 0x160) = *(SF4 *)(p0 + 0x10);
        *(short *)(o + 0x170) = *(short *)(p0 + 0x20);
        *(unsigned short *)(o + 0x172) = *(unsigned short *)(p0 + 0x22);
        *(unsigned short *)(o + 0x174) = *(unsigned short *)(p0 + 0x24);
        *(SF4 *)(o + 0x178) = *(SF4 *)(p0 + 0x28);
        *(int *)(ret + 0x190) = p1;
        *(int *)(ret + 0xD0) = p2;
        *(int *)(ret + 0x4F0) = p3;
        *(int *)(ret + 0x4FC) = p4;
        *(int *)(ret + 0x500) = p5;
    }
    return ret;
}

void func_00100580(char *);

void func_0028C1A0(char *, int);

void func_00253000(char *, int);

char *func_004B9630(char *p, short flag) {
    extern char D_005B86C0[];
    extern char D_005B86E4[];
    extern char D_005B8764[];
    if (p != 0) {
        *(char **)p = D_005B86C0;
        *(char **)(p + 64) = D_005B86E4;
        *(char **)(p + 160) = D_005B8764;
        func_0028C1A0(p + 336, -1);
        func_00253000(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_00206730();

int func_002077F0();

void func_004B9440(p0) int p0; {
    int v0;
    int v1;
    int v2;
    int v3;
    int v7;
    char *v5;
    char *v6;
    int v4;
    v0 = p0;
    v2 = 0;
    v3 = v0;
    do {
        v1 = func_00206730((v3 + 888));
        v2 = (v2 + 1);
        v3 = (v3 + 4);
    } while ((v2 < 5));
    v4 = 0;
    v5 = (char *)v0;
    do {
        v6 = (char *)((v0 + v4) + 880);
        if (*(unsigned char *)((char *)(v0 + v4) + 880) == 1) {
            v7 = *(int *)(v5 + 888);
            if (v7 != 0) {
                v1 = func_002077F0(v7);
                if ((v1 & 255) == 1) {
                    *(char *)(v6 + 0) = 0;
                    *(int *)(v5 + 888) = 0;
                }
            } else {
                *(char *)(v6 + 0) = 0;
            }
        }
        v4 = (v4 + 1);
        v5 = (v5 + 4);
    } while ((v4 < 5));
}

void func_004B9510(p0) int p0; {
    int func_001AD140();
    int v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    char *v5;
    int v6;
    int v7;
    char *tmp1;
    v0 = p0;
    v2 = 0;
    v3 = v0;
    do {
        v1 = func_00206730((v3 + 888));
        v2 = (v2 + 1);
        v3 = (v3 + 4);
    } while ((v2 < 5));
    v7 = 0;
    v4 = (char *)v0;
    do {
        v5 = (char *)((v0 + v7) + 880);
        if (*(unsigned char *)((char *)(v0 + v7) + 880) == 1) {
            v6 = *(int *)(v4 + 888);
            if (v6 != 0) {
                v1 = func_002077F0(v6);
                if ((v1 & 255) == 0) {
                    v1 = func_001AD140(*(int *)(v4 + 888));
                    tmp1 = *(char **)(v4 + 888);
                    *(int *)(*(char **)(v4 + 888) + 144) = 0;
                    *(char *)(tmp1 + 154) = 0;
                    *(char *)(v5 + 0) = 0;
                    *(int *)(v4 + 888) = 0;
                }
            } else {
                *(char *)(v5 + 0) = 0;
            }
        }
        v7 = (v7 + 1);
        v4 = (v4 + 4);
    } while ((v7 < 5));
}

extern void func_004B95F0();

void func_004B96D0(char *p) { func_004B95F0(p + -64); }

extern void func_004B9610();

void func_004B96E0(char *p) { func_004B9610(p + -64); }

void func_004B9340(void) {}

void func_004B9350(void) {}
