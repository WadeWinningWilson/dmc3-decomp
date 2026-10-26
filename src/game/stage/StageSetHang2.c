/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-9. */
extern char D_01DFABA0[];

extern char D_005BE1A8[8];

float func_001324E0(float *);

void func_003305E0(char *, int, int, char *, int, int, int);

void func_0036DF70(char *, int);

void func_004DCF90(char *p, char *a, int u, float *v) {
    void func_00207470(int, int, float *);
    float d[4] __attribute__((aligned(16)));
    float k[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float l;
    switch (*(unsigned char *)(p + 5)) {
    case 1:
    case 2:
        return;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    m[12] = v[0];
    m[13] = v[1];
    m[14] = v[2];
    func_00207470(3, 6, m);
    if (*(signed char *)(a + 2) == 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(v), "r"(p + 0xCE0) : "memory");
        l = func_001324E0(d);
        k[0] = *(float *)(p + 0x10) * (*(float *)(a + 4) * (d[0] / l) / *(float *)(p + 0xDA0));
        k[1] = *(float *)(p + 0x10) * (*(float *)(a + 4) * (d[1] / l) / *(float *)(p + 0xDA0) / 2.0f);
        k[2] = *(float *)(p + 0x10) * (*(float *)(a + 4) * (d[2] / l) / *(float *)(p + 0xDA0));
        k[3] = 0.0f;
        func_003305E0(D_01DFABA0, 8, 0x3D, p + 0xCE0, 0x21, 0, 0);
        func_0036DF70(D_005BE1A8, 8);
        *(unsigned char *)(p + 0xDCD) = 1;
        *(float *)(p + 0xDC4) = 60.0f;
        *(float *)(p + 0xD80) = *(float *)(p + 0xD80) + k[0] * *(float *)(p + 0x10);
        *(float *)(p + 0xD84) = *(float *)(p + 0xD84) + k[1] * *(float *)(p + 0x10);
        *(float *)(p + 0xD88) = *(float *)(p + 0xD88) + k[2] * *(float *)(p + 0x10);
    } else {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        m[12] = v[0];
        m[13] = v[1];
        m[14] = v[2];
        func_00207470(3, 6, m);
        func_003305E0(D_01DFABA0, 8, 0x95, p + 0xCE0, 0x21, 0, 0);
    }
}

float func_00132630(float *, char *);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define QCOPYR(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

#define VADDR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

void func_004DCE00(char *p) {
    float v[4];
    float u[4];
    float d;
    float e;
    QCOPYR(v, p + 0xFA0);
    v[1] = 0.0f;
    v[3] = 0.0f;
    VADDR54(p + 0xCE0, p + 0xCE0, v);
    QCOPY(u, v);
    d = func_001324E0(u);
    if (!(d <= 0.0f)) {
        u[0] = u[0] / d;
        u[2] = u[2] / d;
        e = func_00132630(u, p + 0xD80);
        *(float *)(p + 0xD80) = *(float *)(p + 0xD80) - 1.8f * (u[0] * e);
        *(float *)(p + 0xD88) = *(float *)(p + 0xD88) - 1.8f * (u[2] * e);
    }
}

#define VSUBR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

extern int D_01CAFF14[];

extern char D_0058B3A0[];

void func_00277DA0(char *);

void func_00277DE0(char *, char *, char *, int);

void func_00277E70(char *);

void func_00278060(char *, int);

static inline char *func_004DBD50_g(char *p, int i) {
    char *r;
    if (!(i < *(int *)(p + 0xC30))) {
        r = 0;
    } else {
        r = *(char **)(p + 0xC00) + i * 0x80;
    }
    return r;
}

void func_004DBD50(char *p) {
    void func_004DBF00(char *);
    float d[4] __attribute__((aligned(16)));
    int i;
    char *e;
    char *f;
    float x;
    float y;
    float z;
    *(float *)(p + 0xCA4) = *(float *)(p + 0xCA4) + *(float *)(p + 0xDA8);
    func_004DBF00(p);
    *(float *)(p + 0xDB0) = 100.0f;
    VSUBR54(d, p + 0xCE0, p + 0xCA0);
    d[3] = 1.0f;
    for (i = 0; i < 13; i++) {
        z = *(float *)(p + 0xCA8) + d[2] / 12.0f * (float)i;
        y = *(float *)(p + 0xCA4) + d[1] / 12.0f * (float)i;
        x = *(float *)(p + 0xCA0) + d[0] / 12.0f * (float)i;
        e = func_004DBD50_g(p, i);
        *(float *)(e + 0x20) = x;
        *(float *)(e + 0x24) = y;
        *(float *)(e + 0x28) = z;
        *(float *)(e + 0x2C) = 1.0f;
        QCOPY(e, e + 0x20);
        QCOPY(e + 0x10, e + 0x20);
        f = func_004DBD50_g(p, i);
        *(int *)(f + 0x30) = 0;
        *(int *)(f + 0x34) = 0;
        *(int *)(f + 0x38) = 0;
        *(int *)(f + 0x3C) = 0;
    }
    func_00277DA0(p + 0x11C0);
    func_00277DE0(p + 0x11C0, D_0058B3A0, p + 0xCB0, 1);
    func_00277E70(p + 0x11C0);
    func_00278060(p + 0x11C0, D_01CAFF14[0]);
    *(unsigned char *)(p + 0xDCD) = 0;
}

void func_0028C790(char *, int);

char *func_00279290(char *);

void func_001A2000(char *, int);

extern char D_01CAFF0C[];

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_002E3690(char *, int, int, int);

static inline void setf_4DC(char *g, short k) {
    int s = k;
    if (s < 32) {
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18) |= 1 << (s & 31);
    } else {
        s -= 32;
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x44) |= 1 << (s & 31);
    }
}

void func_004DC4E0(char *p) {
    void func_001AD140(char *);
    char *func_00207470(int, int, char *);
    float m[16] __attribute__((aligned(16)));
    char *o;
    int i;
    *(unsigned char *)(p + 5) = 4;
    func_002E3690(p + 0xC00, 0xB, 0xC, 0);
    func_001A2000(func_00279290(p + 0x600), 8);
    func_001A2000(func_00279290(p + 0x600), 9);
    func_0028C790(p + 0xDD0, 0);
    func_0028C790(p + 0xDD0, 1);
    func_0028C790(p + 0xDD0, 2);
    UNIT(m);
    o = func_00207470(3, 0x1AF, (char *)m);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0xCB0;
        *(unsigned char *)(o + 0x9A) = 0;
    }
    for (i = 0; i < *(int *)(p + 0x11B8); i++) {
        if (*(char **)((char *)(i * 4) + (int)p + 0x1190) != 0) {
            func_001AD140(*(char **)((char *)(i * 4) + (int)p + 0x1190));
        }
    }
    if (*(int *)(p + 0x12B8) == 0 && *(short *)(p + 0x12B4) != -1) {
        setf_4DC(*(char **)(*(char **)D_01CAFF0C + 0x18), *(short *)(p + 0x12B4));
    }
    *(float *)(p + 0xDB0) = 10.0f;
    *(float *)(p + 0xCA4) = *(float *)(p + 0xD74) + *(float *)(p + 0xDA8);
}

void func_004DC3A0(char *);

static inline void chk4DC(char *p, int k) {
    char *g;
    unsigned int *w;
    unsigned int m;
    int r;
    if (k == -1) return;
    g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    if (k < 32) {
        w = (unsigned int *)((char *)(k / 32 * 4) + (int)g + 0x18);
        m = 1 << (k & 31);
        r = (*w & m) != 0;
    } else {
        int t = k - 32;
        w = (unsigned int *)((char *)(t / 32 * 4) + (int)g + 0x44);
        m = 1 << (t & 31);
        r = (*w & m) != 0;
    }
    if (r) func_004DC3A0(p);
}

void func_004DC1B0(char *p) {
    *(float *)(p + 0xD80) *= 0.95f;
    *(float *)(p + 0xD84) -= 1.0f;
    *(float *)(p + 0xD88) *= 0.95f;
    *(float *)(p + 0xCE0) = 0.95f * *(float *)(p + 0xCE0) + 0.05f * *(float *)(p + 0xCA0);
    *(float *)(p + 0xCE8) = 0.95f * *(float *)(p + 0xCE8) + 0.05f * *(float *)(p + 0xCA8);
    switch (*(int *)(p + 0x12B8)) {
    case 0:
        chk4DC(p, *(short *)(p + 0x12B0));
        break;
    case 1:
        chk4DC(p, *(short *)(*(char **)(p + 0x12BC) + 0x12B2));
        break;
    }
}

extern char D_01DFABA0[];

void func_004DC3E0(char *p) {
    void func_004DBF00(char *);
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
        func_004DBF00(p);
        *(unsigned char *)(p + 0xDCD) = 1;
        *(int *)(p + 0xDC4) = 0;
    }
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005A7780[];

extern char D_005A7790[];

extern char D_005AADD0[];

extern char D_005B9910[];

extern char D_005B9934[];

extern char D_005B99B4[];

extern char D_005B9A48[];

void func_001003E0();

void func_0013D240();

void func_0024F810();

void func_002791E0();

void func_0028C1A0();

char *func_004DD220(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005B9910;
        *(char * *)(p + 64) = D_005B9934;
        *(char * *)(p + 160) = D_005B99B4;
        *(char * *)(p + 208) = D_005B9A48;
        if (p + 4544 != 0) {
            if (p + 4768 != 0) {
                *(char * *)(p + 4768) = D_005A7780;
                if (p + 4768 != 0) {
                    *(char * *)(p + 4768) = D_005A7790;
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

int func_004DB7C0(p0) char *p0; {
    int func_001AD140();
    int v0;
    int v1;
    v0 = *(int *)(p0 + 4800);
    if (v0 != 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

void func_004DC6A0(p0) char *p0; {
    float v0;
    v0 = *(float *)(p0 + 3504);
    if (v0 > 0.0f) {
        *(float *)(p0 + 3504) = (v0 - *(float *)(p0 + 16));
    }
}

void func_004DD1E0(p0, p1) char *p0; int p1; {
    int v0;
    v0 = -1;
    if (*(short *)(p0 + 4784) == v0) {
        *(short *)(p0 + 4784) = p1;
    } else {
        if (*(short *)(p0 + 4786) == v0) {
            *(short *)(p0 + 4786) = p1;
        } else {
            *(short *)(p0 + 4788) = p1;
        }
    }
}

extern void func_004DD1D0();

void func_004DD380(char *p) { func_004DD1D0(p + -208); }

extern void func_004DD1C0();

void func_004DD390(char *p) { func_004DD1C0(p + -208); }
