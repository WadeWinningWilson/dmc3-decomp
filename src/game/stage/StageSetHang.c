float func_001324E0(float *);

extern char D_01DFABA0[];

extern char D_005BE1A8[4];

void func_003305E0(char *, int, int, char *, int, int, int);

void func_0036DF70(char *, int);

void func_00207470(int, int, float *);

void func_00387970(char *);

void func_00388370(char *p, char *s, int u, float *pos) {
    float d[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float l;
    switch (*(unsigned char *)(p + 5)) {
    case 1:
    case 2:
        return;
    }
    if (*(signed char *)(s + 2) == 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(pos), "r"(p + 0xCE0) : "memory");
        l = func_001324E0(d);
        w[0] = *(float *)(p + 0x10) * (*(float *)(s + 4) * (d[0] / l) / *(float *)(p + 0xDA0));
        w[1] = *(float *)(p + 0x10) * (*(float *)(s + 4) * (d[1] / l) / *(float *)(p + 0xDA0) / 2.0f);
        w[2] = *(float *)(p + 0x10) * (*(float *)(s + 4) * (d[2] / l) / *(float *)(p + 0xDA0));
        w[3] = 0.0f;
        *(float *)(p + 0xD80) = *(float *)(p + 0xD80) + w[0] * *(float *)(p + 0x10);
        *(float *)(p + 0xD84) = *(float *)(p + 0xD84) + w[1] * *(float *)(p + 0x10);
        *(float *)(p + 0xD88) = *(float *)(p + 0xD88) + w[2] * *(float *)(p + 0x10);
        func_003305E0(D_01DFABA0, 8, 0x3D, p + 0xCE0, 0x21, 0, 0);
        func_0036DF70(D_005BE1A8, 8);
        *(unsigned char *)(p + 0xDCD) = 1;
        *(float *)(p + 0xDC4) = 60.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        m[12] = pos[0];
        m[13] = pos[1];
        m[14] = pos[2];
        func_00207470(3, 0x91, m);
        if ((*(float *)(p + 0xDAC) -= *(float *)(s + 4)) < 0.0f) func_00387970(p);
    } else {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        m[12] = pos[0];
        m[13] = pos[1];
        m[14] = pos[2];
        func_00207470(3, 6, m);
        func_003305E0(D_01DFABA0, 8, 0x95, p + 0xCE0, 0x21, 0, 0);
    }
}

void func_00387550(char *);

void func_00387870(char *p) {
    if (!(*(float *)(p + 0xCA4) <= *(float *)(p + 0xD74))) {
        *(float *)(p + 0xCA4) = *(float *)(p + 0xCA4) - 20.0f * *(float *)(p + 0x10);
    } else {
        if (*(signed char *)(p + 0xDCC) == 0) {
            *(float *)(p + 0xD80) = *(float *)(p + 0xD80) + 3.0f * *(float *)(p + 0x10);
            *(float *)(p + 0xD88) = *(float *)(p + 0xD88) + 3.0f * *(float *)(p + 0x10);
            *(signed char *)(p + 0xDCC) = 1;
            func_003305E0(D_01DFABA0, 8, 0xA3, p + 0xCE0, 0x21, 0, 0);
        }
        *(float *)(p + 0xCA4) = *(float *)(p + 0xD74);
    }
    *(float *)(p + 0xDB0) = *(float *)(p + 0xDB0) - *(float *)(p + 0x10);
    if (*(float *)(p + 0xDB0) < 0.0f) {
        *(signed char *)(p + 0xDCC) = 0;
        func_00387550(p);
        *(unsigned char *)(p + 0xDCD) = 1;
        *(int *)(p + 0xDC4) = 0;
    }
}

void func_001AD140(char *);

void func_00387B20(char *p) {
    float v;
    if (*(float *)(p + 3236) < *(float *)(p + 3444) + *(float *)(p + 3496)) {
        *(float *)(p + 3236) += 10.0f;
    } else {
        func_001AD140(p);
    }
    v = *(float *)(p + 3504);
    if (v > 0.0f) {
        *(float *)(p + 3504) = v - *(float *)(p + 16);
    }
}

extern char D_01CAFF0C[];

void func_00387830(char *);

void func_00387700(char *p) {
    int s;
    int f;
    *(float *)(p + 0xD80) = *(float *)(p + 0xD80) * 0.95f;
    *(float *)(p + 0xD84) = *(float *)(p + 0xD84) - 1.0f;
    *(float *)(p + 0xD88) = *(float *)(p + 0xD88) * 0.95f;
    *(float *)(p + 0xCE0) = *(float *)(p + 0xCE0) * 0.95f + *(float *)(p + 0xCA0) * 0.05f;
    *(float *)(p + 0xCE8) = *(float *)(p + 0xCE8) * 0.95f + *(float *)(p + 0xCA8) * 0.05f;
    s = *(short *)(p + 0x1340);
    if (s != -1) {
        char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
        if (s < 32) {
            unsigned int *w = (unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18);
            f = (*w & (1 << (s & 31))) != 0;
        } else {
            int t = s - 32;
            unsigned int *w = (unsigned int *)((char *)(t / 32 * 4) + (int)g + 0x44);
            f = (*w & (1 << (t & 31))) != 0;
        }
        if (f) func_00387830(p);
    }
}

float func_00132630(float *, char *);

void func_00388220(char *p) {
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float l;
    float d;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 0xFA0), "r"(v) : "memory");
    v[1] = 0.0f;
    v[3] = 0.0f;
    if ((unsigned char)*(unsigned char *)(p + 5) != 3 || *(float *)(p + 0xCA4) <= *(float *)(p + 0xD74)) {
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0xCE0), "r"(p + 0xCE0), "r"(v) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(w), "r"(v) : "memory");
        l = func_001324E0(w);
        if (!(l <= 0.0f)) {
            w[0] = w[0] / l;
            w[1] = w[1] / l;
            w[2] = w[2] / l;
            d = func_00132630(w, p + 0xD80);
            *(float *)(p + 0xD80) = *(float *)(p + 0xD80) - 1.8f * (w[0] * d);
            *(float *)(p + 0xD88) = *(float *)(p + 0xD88) - 1.8f * (w[2] * d);
        }
    }
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern int D_01CAFF14[];

void func_00277DA0(char *);

void func_00277DE0(char *, char *, char *, int);

void func_00277E70(char *);

void func_00278060(char *, int);

#define VSUBR(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

#define VUNIT(d) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(d) : "memory")

static inline char *node_387(char *p, int i) {
    if (i >= *(int *)(p + 0xC30)) return 0;
    return *(char **)(p + 0xC00) + i * 0x80;
}

void func_00387390(char *p) {
    float v[4] __attribute__((aligned(16)));
    int i;
    float x;
    float y;
    float z;
    char *e;
    char *f;
    *(float *)(p + 0xCA4) = *(float *)(p + 0xCA4) + *(float *)(p + 0xDA8);
    func_00387550(p);
    *(float *)(p + 0xDB0) = 100.0f;
    VSUBR(v, p + 0xCE0, p + 0xCA0);
    v[3] = 1.0f;
    i = 0;
    while (i < 13) {
        z = *(float *)(p + 0xCA8) + v[2] / 12.0f * (float)i;
        y = *(float *)(p + 0xCA4) + v[1] / 12.0f * (float)i;
        x = *(float *)(p + 0xCA0) + v[0] / 12.0f * (float)i;
        e = node_387(p, i);
        *(float *)(e + 0x20) = x;
        *(float *)(e + 0x24) = y;
        *(float *)(e + 0x28) = z;
        *(float *)(e + 0x2C) = 1.0f;
        QCOPY(e, e + 0x20);
        QCOPY(e + 0x10, e + 0x20);
        f = node_387(p, i);
        *(int *)(f + 0x30) = 0;
        *(int *)(f + 0x34) = 0;
        *(int *)(f + 0x38) = 0;
        *(int *)(f + 0x3C) = 0;
        i++;
    }
    func_00277DA0(p + 0x1200);
    func_00277DE0(p + 0x1200, p + 0x12F0, p + 0xCB0, 1);
    func_00277E70(p + 0x1200);
    func_00278060(p + 0x1200, D_01CAFF14[0]);
    VUNIT(p + 0x11C0);
    p[0xDCD] = 0;
}

extern float D_00562C98[];

static inline void func_00387590_c(unsigned int *a, int b) {
    a[b / 32] &= ~(1 << (b & 0x1F));
}

void func_00387590(char *p) {
    float m = *(float *)(p + 0xD74) + *(float *)(p + 0xDA8);
    short k;
    int i;
    char *q;
    if (*(float *)(p + 0xCA4) < m) {
        *(float *)(p + 0xCA4) = *(float *)(p + 0xCA4) + 10.0f * *(float *)(p + 0x10);
        return;
    }
    *(float *)(p + 0xCA4) = m;
    *(unsigned char *)(p + 5) = 2;
    k = *(short *)(p + 0x1340);
    if (k == -1) return;
    {
        char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
        if (k < 32) {
            func_00387590_c((unsigned int *)(g + 0x18), k);
        } else {
            func_00387590_c((unsigned int *)(g + 0x44), k - 32);
        }
    }
    for (i = 0; i < *(int *)(p + 0x11B8); i++) {
        if (*(char **)(p + i * 4 + 0x1190) != 0) {
            func_001AD140(*(char **)(p + i * 4 + 0x1190));
        }
    }
    *(int *)(p + 0x11B8) = 0;
    *(float *)(p + 0xDAC) = D_00562C98[0];
    *(unsigned char *)(p + 0xDCA) = 0;
    *(unsigned char *)(p + 0xDC9) = 0;
}

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

char *func_003887C0(char *p) {
    void func_0013D240(char *, int);
    void func_003888E0(char *);
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
    **q = func_001B0FD0(a, 0x1940, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x1940, t);
        if (r != 0) {
            func_003888E0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x2C, **q);
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
        *(char **)(ret + 0x38) = p;
    }
    return ret;
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005A7780[];

extern char D_005A7790[];

extern char D_005AADD0[];

extern char D_005AEB90[];

extern char D_005AEBB4[];

extern char D_005AEC34[];

extern char D_005AECC8[];

void func_001003E0();

void func_0024F810();

void func_002791E0();

void func_0028C1A0();

char *func_00388630(char *p, short flag) {
    void func_0013D240();
    if (p != 0) {
        *(char * *)(p) = D_005AEB90;
        *(char * *)(p + 64) = D_005AEBB4;
        *(char * *)(p + 160) = D_005AEC34;
        *(char * *)(p + 208) = D_005AECC8;
        if (p + 4608 != 0) {
            if (p + 4832 != 0) {
                *(char * *)(p + 4832) = D_005A7780;
                if (p + 4832 != 0) {
                    *(char * *)(p + 4832) = D_005A7790;
                }
            }
        }
        func_0028C1A0(p + 3536, -1);
        if (p + 3072 != 0) {
            func_0013D240(p + 3124, -1);
        }
        func_002791E0(p + 1536, -1);
        func_001003E0(p + 480, (void *)func_0013D240, 16, 64);
        if (p + 208 != 0) {
            *(char * *)(p + 208) = D_005AADD0;
        }
        func_0024F810(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_003885F0(p0, p1) char *p0; int p1; {
    if (*(short *)(p0 + 4928) == -1) {
        *(short *)(p0 + 4928) = p1;
    } else {
        *(short *)(p0 + 4930) = p1;
    }
}

extern void func_003885E0();

void func_00388790(char *p) { func_003885E0(p + -208); }

extern void func_003885D0();

void func_003887A0(char *p) { func_003885D0(p + -208); }

void func_00388620(void) {}
