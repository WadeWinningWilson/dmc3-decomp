extern char D_01CAFF0C[];

void func_00105578(float *, float *, float);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_004E7C40(char *p) {
    char *func_00207480(int, int, float *, int);
    float func_001324E0(float *);
    void func_00105300(float *, char *);
    void func_001AD140(char *);
    float m[16] __attribute__((aligned(16)));
    char *g;
    char *o;
    char *e;
    char *q;
    float l;
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    if ((*(float *)(p + 0x1E4) -= 10.0f * *(float *)(p + 0x10)) < 500.0f) {
        func_00105300((float *)(p + 0x1F0), p + 0x1B0);
        *(float *)(p + 0x224) = 200.0f;
        if (*(char **)(p + 0x25C) != 0) {
            func_001AD140(*(char **)(p + 0x25C));
        }
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105578(m, m, -1.5707963f);
        *(char **)(p + 0x25C) = func_00207480(3, 0x1BC, m, 0x10);
        if (*(char **)(p + 0x25C) == 0) {
            func_001AD140(p);
            return;
        }
        e = *(char **)(p + 0x25C);
        e[0x3A] = 1;
        g = *(char **)(p + 0x25C);
        *(char **)(g + 0x90) = p + 0x1B0;
        g[0x9A] = 0;
        __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x230), "r"(o + 0x50), "r"(p + 0x1E0) : "memory");
        *(float *)(p + 0x234) = 0.0f;
        l = func_001324E0((float *)(p + 0x230));
        *(float *)(p + 0x230) = *(float *)(p + 0x250) * (*(float *)(p + 0x230) / l);
        *(float *)(p + 0x234) = *(float *)(p + 0x250) * (*(float *)(p + 0x234) / l);
        *(float *)(p + 0x238) = *(float *)(p + 0x250) * (*(float *)(p + 0x238) / l);
        *(int *)(p + 0x338) = 0xCC0;
        func_0028C8E0(p + 0x260, 1);
        *(unsigned char *)(p + 0x263) = 1;
        *(int *)(p + 0x338) = 0x40;
        func_0028C910(p + 0x260);
        if ((q = func_0028C3A0(p + 0x260, 0, -1, p + 0x1B0)) != 0) q[2] = 1;
        *(unsigned char *)(p + 0x263) = 1;
        *(int *)(p + 0x338) = 1;
        if ((q = func_0028C3A0(p + 0x260, 1, -1, p + 0x1B0)) != 0) q[2] = 1;
        *(unsigned char *)(p + 0x263) = 1;
        *(int *)(p + 0x338) = 0x20000;
        if ((q = func_0028C3A0(p + 0x260, 1, -1, p + 0x1F0)) != 0) q[2] = 1;
        *(int *)(p + 0x58C) = 0;
        (*(unsigned char *)(p + 5))++;
    }
}

extern float D_00567D70[];

short func_00131D10(float, float);

void func_004E7E70(char *p) {
    void func_001AD140(char *);
    void func_00105300(char *, char *);
    float func_001324E0(char *);
    char *e;
    float f;
    *(float *)(p + 0x194) = *(float *)(p + 0x194) - *(float *)(p + 0x10);
    *(float *)(p + 0x1E0) = *(float *)(p + 0x1E0) + *(float *)(p + 0x230) * *(float *)(p + 0x10);
    *(float *)(p + 0x1E4) = *(float *)(p + 0x1E4) + *(float *)(p + 0x234) * *(float *)(p + 0x10);
    *(float *)(p + 0x1E8) = *(float *)(p + 0x1E8) + *(float *)(p + 0x238) * *(float *)(p + 0x10);
    func_00105300(p + 0x1F0, p + 0x1B0);
    *(float *)(p + 0x224) = 200.0f;
    e = *(char **)(p + 0x2E4);
    if (e != 0 && (*(int *)(e + 8) & 0x20000)) {
        f = func_001324E0(p + 0x240);
        if (!(f <= 0.0f)) {
            *(float *)(p + 0x240) = *(float *)(p + 0x240) / f;
            *(float *)(p + 0x244) = *(float *)(p + 0x244) / f;
            *(float *)(p + 0x248) = *(float *)(p + 0x248) / f;
            *(float *)(p + 0x244) = 0.0f;
            if (!(func_001324E0(p + 0x240) <= 0.8f)) {
                if (!(*(float *)(p + 0x58C) <= D_00567D70[*(int *)(p + 0x588)])) {
                    func_001AD140(p);
                    return;
                }
                *(float *)(p + 0x58C) = *(float *)(p + 0x58C) + *(float *)(p + 0x10);
            }
        } else {
            *(float *)(p + 0x58C) = 0.0f;
        }
    }
    *(short *)(p + 0x90) = func_00131D10(*(float *)(p + 0x230), *(float *)(p + 0x238));
}

extern char D_00645A30[];

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_004E71D0(char *);

char *func_004E72C0(int u0, int u1, int p2, int p3, char *p4, int p5, int p6, float f0, float f1) {
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
            func_004E71D0(t);
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
        *(char **)(ret + 0x258) = p4;
        *(int *)(ret + 0x19C) = p2;
        *(int *)(ret + 0x1A0) = p3;
        *(int *)(ret + 0x25C) = 0;
        *(float *)(ret + 0x250) = f0;
        *(float *)(ret + 0x194) = f1;
        *(int *)(ret + 0x584) = p5;
        *(int *)(ret + 0x588) = p6;
        *(char *)(ret + 0x45) = 4;
        *(int *)(ret + 0x590) = ((int *)(p4 + 0x65C8))[*(short *)(((char **)(p4 + 0x69F8))[p2] + 0xB92)];
    }
    return ret;
}

void func_0034BA60(int, char *, int, int, int);

extern float D_00567D90[][3];

extern float D_00567DF0[][3];

#define QCPY79(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline char *pl79(char *p) {
    return ((char **)(*(char **)(p + 0x258) + 0x69F8))[*(int *)(p + 0x19C)];
}

void func_004E79B0(char *p) {
    void func_001AD140(char *);
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float t;
    float u;
    int v;
    char *q;
    char *e;
    q = *(char **)(p + 0x258);
    v = *(int *)(p + 0x590);
    e = ((char **)(q + 0x69F8))[*(int *)(p + 0x19C)];
    if (v != ((int *)(q + 0x65C8))[*(short *)(e + 0xB92)]) {
        func_001AD140(p);
        return;
    }
    switch (*(int *)(p + 0x1A0)) {
    case 0:
        QCPY79(a, *(char **)(*(char **)(e + 0x9D8) + 0x104) + 0x30);
        QCPY79(b, *(char **)(*(char **)(pl79(p) + 0x9E0) + 0x104) + 0x30);
        break;
    case 1:
        QCPY79(a, *(char **)(*(char **)(pl79(p) + 0x9E4) + 0x104) + 0x30);
        QCPY79(b, *(char **)(*(char **)(pl79(p) + 0x9EC) + 0x104) + 0x30);
        break;
    }
    *(float *)(p + 0x254) += *(float *)(p + 0x10);
    t = *(float *)(p + 0x254) / D_00567D90[*(int *)(p + 0x588)][*(int *)(p + 0x584)];
    if (!(t <= 1.0f)) t = 1.0f;
    u = 1.0f - t;
    *(float *)(p + 0x1E0) = a[0] * u + b[0] * t;
    *(float *)(p + 0x1E4) = a[1] * u + b[1] * t;
    *(float *)(p + 0x1E8) = a[2] * u + b[2] * t;
    if (!(*(float *)(p + 0x254) < D_00567D90[*(int *)(p + 0x588)][*(int *)(p + 0x584)] + (float)*(int *)(p + 0x19C) * D_00567DF0[*(int *)(p + 0x588)][*(int *)(p + 0x584)])) {
        (*(unsigned char *)(p + 5))++;
        if (*(int *)(pl79(p) + 0x144C) == 0) {
            func_001AD140(p);
            func_0034BA60(0x2E, p + 0x50, 0x29, 0, 1);
            return;
        }
    }
}

void func_0028C740();

void func_004E8070(p) char *p; {
    void func_001AD140();
    void func_00207480();
    if (*(char **)(p + 604) != 0) {
        func_001AD140(*(char **)(p + 604));
    }
    func_00207480(3, 828, p + 432, 16);
    func_0028C740(p + 608);
}

extern char D_00567610[];

extern char D_00567D50[];

int func_0028C200();

void func_00382A50();

void func_004E7520(p0) int p0; {
    int func_001AD140();
    int func_00207480();
    char stk[0x40] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    char *v3;
    float v4;
    int tmp0;
    int tmp5;
    int tmp6;
    char *tmp7;
    int tmp11;
    v0 = (char *)p0;
    func_00382A50((v0 + 600));
    v1 = (int)v0;
    if (*(int *)(v0 + 600) == 0) {
        tmp0 = func_001AD140(v1);
        return;
    } else {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -32) + 32)) : "memory");
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((v0 + 432)) : "memory");
        v2 = *(int *)(v0 + 416);
        switch (v2) {
        case 0:
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((*(int *)(*(char **)(*(char **)((char (*)[4])((char *)*(int *)(v0 + 600) + 27128))[*(int *)(v0 + 412)] + 2520) + 260) + 48)), "r"((v0 + 480)) : "memory");
            break;
        case 1:
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((*(int *)(*(char **)(*(char **)((char (*)[4])((char *)*(int *)(v0 + 600) + 27128))[*(int *)(v0 + 412)] + 2532) + 260) + 48)), "r"((v0 + 480)) : "memory");
            break;
        }
        *(int *)(v0 + 604) = 0;
        tmp5 = func_00207480(3, 960, ((stk + -32) + 32), 16);
        *(int *)(v0 + 604) = tmp5;
        v3 = *(char **)(v0 + 604);
        if (v3 == 0) {
            tmp6 = func_001AD140(v0);
            return;
        } else {
            *(char *)(v3 + 58) = 1;
            tmp7 = *(char **)(v0 + 604);
            *(char **)(*(char **)(v0 + 604) + 144) = (v0 + 432);
            *(char *)(tmp7 + 154) = 1;
            *(float *)(v0 + 404) = *(float *)((char (*)[4])((char *)D_00567D50 + 0))[*(int *)(v0 + 1416)];
            *(char *)(v0 + 1152) = 4;
            *(int *)(v0 + 1168) = 0;
            *(int *)(v0 + 1172) = 0;
            *(int *)(v0 + 1176) = 0;
            *(int *)(v0 + 1180) = 0x3f800000;
            *(int *)(v0 + 1184) = 0;
            *(int *)(v0 + 1188) = 0xc47a0000;
            *(int *)(v0 + 1192) = 0;
            *(int *)(v0 + 1196) = 0x3f800000;
            *(int *)(v0 + 1200) = 0x42480000;
            *(char *)(v0 + 1392) = 1;
            *(char *)(v0 + 1393) = 0;
            *(short *)(v0 + 1394) = 0;
            *(char *)(v0 + 1232) = 2;
            *(int *)(v0 + 1248) = 0;
            *(int *)(v0 + 1252) = 0;
            *(int *)(v0 + 1256) = 0;
            *(int *)(v0 + 1260) = 0x3f800000;
            *(int *)(v0 + 1264) = 0x42480000;
            *(char *)(v0 + 1396) = 6;
            *(char *)(v0 + 1397) = 0;
            *(short *)(v0 + 1398) = 1;
            tmp11 = func_0028C200((v0 + 608), (v0 + 1392), (v0 + 1152), 3, D_00567610, v0, 0, 0x42480000);
            *(int *)(v0 + 576) = 0;
            *(int *)(v0 + 580) = 0;
            *(int *)(v0 + 584) = 0;
            *(int *)(v0 + 588) = 0;
            *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
            *(char *)(v0 + 5) = 0;
            *(int *)(v0 + 1408) = 0;
            *(int *)(v0 + 1404) = 0x41200000;
            return;
        }
    }
}

void func_004E7910(p0) char *p0; {
    int v0;
    *(int *)(p0 + 596) = 0;
    v0 = *(int *)(p0 + 416);
    switch (v0) {
    case 0:
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((*(int *)(*(char **)(*(char **)((char (*)[4])((char *)*(int *)(p0 + 600) + 27128))[*(int *)(p0 + 412)] + 2520) + 260) + 48)), "r"((p0 + 480)) : "memory");
        break;
    case 1:
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((*(int *)(*(char **)(*(char **)((char (*)[4])((char *)*(int *)(p0 + 600) + 27128))[*(int *)(p0 + 412)] + 2532) + 260) + 48)), "r"((p0 + 480)) : "memory");
        break;
    }
    *(char *)(p0 + 5) = (*(unsigned char *)(p0 + 5) + 1);
}

void func_004E8020(p0) char *p0; {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((p0 + 1072)), "r"((p0 + 576)) : "memory");
    *(float *)(p0 + 480) = (*(float *)(p0 + 480) + *(float *)(p0 + 576));
    *(float *)(p0 + 488) = (*(float *)(p0 + 488) + *(float *)(p0 + 584));
}

void func_004E8000(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_004E80D0();

void func_004E80F0(char *p) { func_004E80D0(p + -64); }

extern void func_004E7230();

void func_004E8100(char *p) { func_004E7230(p + -64); }

void func_004E8110(char *p) { func_004E7230(p + -160); }

void func_004E8010(void) {}

void func_004E8060(void) {}

void func_004E7FF0(char *p0) {
    unsigned char t0;
    t0 = (*(unsigned char *)(p0 + 4) + 1);
    *(char *)(p0 + 4) = (*(unsigned char *)(p0 + 4) + 1);
}
