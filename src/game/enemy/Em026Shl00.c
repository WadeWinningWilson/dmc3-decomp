/* Integrates a velocity into a position and clamps it; reports the sign change. */
unsigned char func_004B8610(char *p) {
    unsigned char r = 0;
    float v;
    *(float *)(p + 0x54) += *(float *)(p + 0x64);
    v = *(float *)(p + 0x64) + *(float *)(p + 0x74);
    if (v < 0.0f && !(*(float *)(p + 0x64) < 0.0f)) {
        r = 1;
    }
    if (v < 0.0f && v < *(float *)(p + 0xA44)) {
        v = *(float *)(p + 0xA44);
    }
    *(float *)(p + 0x64) = v;
    return r;
}

/* func_004D8120 for a second object type; an object setup; 4 attachment slots; per-entry draw. */
void func_00131760(char *, char *, char *);

void func_004B7D90(char *p) {
    *(float *)(p + 0x80) = 6.283185f * (*(short *)(p + 0xAD4) / 65536.0f);
    *(float *)(p + 0x84) = 6.283185f * (*(short *)(p + 0x90) / 65536.0f);
    *(float *)(p + 0x88) = 6.283185f * (*(short *)(p + 0xAD6) / 65536.0f);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x170) : "memory");
    func_00131760(p + 0x170, p + 0x170, p + 0x80);
    __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(p + 0x170), "r"(p + 0x50) : "memory");
}

void func_00100580(char *);

void func_001003E0(char *, void *, int, int);

void func_0013D240(char *, int);

void func_002791E0(char *, int);

void func_0028C1A0(char *, int);

void func_0024FEA0(char *, int);

extern char D_005B84B0[];

extern char D_005B84D4[];

extern char D_005B8554[];

extern char D_005B85E8[];

void func_002E83B0(char *, int);

char *func_004B8870(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B84B0;
        *(char **)(p + 64) = D_005B84D4;
        *(char **)(p + 160) = D_005B8554;
        *(char **)(p + 208) = D_005B85E8;
        func_002E83B0(p + 2544, -1);
        func_0028C1A0(p + 2000, -1);
        func_002791E0(p + 448, -1);
        func_001003E0(p + 308, (void *)func_0013D240, 16, 3);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_004B8850(char *p, int k) {
    void func_0034BA60(int, char *, signed char, int, int);
    func_0034BA60(k, p + 0x50, *(signed char *)(*(char **)(p + 0xAC0) + 0x46), 0, 1);
}

void func_004B7F80(char *, int);

void func_004B7E60(char *p) {
    short s = *(short *)(p + 0xA58);
    char *q = *(char **)(p + 0xAC0);
    switch (s) {
    case 0:
        if (*(unsigned char *)(q + 0x2F3C) == 2 || *(unsigned char *)(q + 0x2F3C) == *(unsigned char *)(p + 0xA34)) {
            if (*(short *)(q + 0xAC0) == 0x24 && *(short *)(q + 0x2F3E) == 0) {
                func_004B7F80(p, 1);
            } else if (*(short *)(q + 0xAC0) == 0x27 && *(short *)(q + 0x2F3E) == 10) {
                func_004B7F80(p, 3);
            }
        }
        break;
    case 1:
        if (*(short *)(q + 0x2F3E) == 0x14) {
            func_004B7F80(p, 4);
        } else if (*(short *)(q + 0x2F3E) == 1) {
            func_004B7F80(p, 2);
        }
        break;
    case 3:
        if (*(short *)(q + 0x2F3E) == 0x14) {
            func_004B7F80(p, 4);
        }
        break;
    case 4:
        break;
    }
}

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_004B8AE0(char *);

char *func_004B8980(char *p, char *s, short h) {
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
    **q = func_001B0FD0(a, 0x400, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x400, t);
        if (r != 0) {
            func_004B8AE0(r);
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
        *(char **)(ret + 0x38C) = s;
        *(short *)(ret + 0x90) = h;
        *(char **)(ret + 0x3FC) = p;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
    }
    return ret;
}

char *func_00279290(char *);

void func_001A1F90(char *);

void func_004B74E0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_001A1F90(func_00279290(p + 0x1C0));
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 1:
        break;
    }
}

int func_004B8780(char *p0, char *p1, float f0, float f1) {
    *(float *)(p1 + 0) -= (f0 * *(float *)(p0 + 16));
    if (*(float *)(p1 + 0) <= f1) {
        *(float *)(p1 + 0) = f1;
        return 1;
    } else {
        return 0;
    }
}

int func_004B8780(char *p0, char *p1, float f0, float f1);

int func_004B87D0(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f2, float f3) {
    int func_0034BA60();
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    v0 = p0;
    v1 = p1;
    v2 = *(char **)(p0 + 2752);
    v3 = func_004B8780(p0, (v0 + 2768), 1.0f, 0.0f);
    v4 = 1;
    if ((v3 & 255) == v4) {
        v3 = func_0034BA60(v1, (v0 + 80), *(signed char *)(v2 + 70), 0, v4);
        *(float *)(v0 + 2768) = *(float *)(v0 + 2764);
    }
    return v3;
}

void func_004B77B0(void *p) {
    extern void func_004B7FB0(); func_004B7FB0(p, 1); }

extern void func_004B6E40();

void func_004B8940(char *p) { func_004B6E40(p + -64); }

void func_004B74D0(void) {}

void func_004B87C0(char *p0, float f0) {
    *(float *)(p0 + 2764) = f0;
    *(int *)(p0 + 2768) = 0;
}

void func_004B7540(int p0) {
    void func_004B7FB0();
    func_004B7FB0(p0, 0);
}
