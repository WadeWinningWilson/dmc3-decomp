extern char D_01CAFF0C[];

extern float D_00568110[][6];

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

float func_001324E0(float *);

short func_00131D10(float, float);

void func_0034BA60(int, char *, int, int, int);

void func_005055F0(char *p) {
    char *func_00207480(int, int, char *, int);
    float d[4] __attribute__((aligned(16)));
    char *o;
    char *q;
    float l;
    float k;
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    *(float *)(p + 0x218) = *(float *)(p + 0x218) - *(float *)(p + 0x10);
    if (*(unsigned char *)(p + 0x500) == 0 && *(float *)(p + 0x218) < 0.0f) {
        *(int *)(p + 0x308) = 0xCC0;
        func_0028C8E0(p + 0x230, 3);
        *(int *)(p + 0x308) = 0x20040;
        *(unsigned char *)(p + 0x233) = 0;
        func_0028C910(p + 0x230);
        if ((q = func_0028C3A0(p + 0x230, 0, -1, p + 0x1B0)) != 0) q[2] = 1;
        *(unsigned char *)(p + 0x500) = 1;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(o + 0x50), "r"(p + 0x1E0) : "memory");
    l = func_001324E0(d);
    if (!(l <= 0.0f)) {
        d[0] = d[0] / l;
        d[1] = d[1] / l;
        d[2] = d[2] / l;
    }
    k = D_00568110[*(int *)(p + 0x4F8)][*(int *)(p + 0x4FC)];
    *(float *)(p + 0x1E0) = *(float *)(p + 0x1E0) + *(float *)(p + 0x10) * (*(float *)(p + 0x1D0) * k);
    *(float *)(p + 0x1E4) = *(float *)(p + 0x1E4) - k * *(float *)(p + 0x10);
    *(float *)(p + 0x1E8) = *(float *)(p + 0x1E8) + *(float *)(p + 0x10) * (*(float *)(p + 0x1D8) * k);
    *(short *)(p + 0x90) = func_00131D10(*(float *)(p + 0x1D0), *(float *)(p + 0x1D8));
    if (*(float *)(p + 0x1E4) < 0.0f) *(float *)(p + 0x1E4) = 0.0f;
    if ((*(float *)(p + 0x194) -= *(float *)(p + 0x10)) < 0.0f) {
        func_00207480(3, 0x33C, p + 0x1B0, 0x10);
        *(float *)(p + 0x470) = 100.0f;
        *(float *)(p + 0x218) = 90.0f;
        (*(unsigned char *)(p + 4))++;
    } else if (*(int *)(p + 0x19C) == 0 && (*(float *)(p + 0x21C) -= *(float *)(p + 0x10)) < 0.0f) {
        *(float *)(p + 0x21C) = *(float *)(p + 0x220);
        func_0034BA60(0x29, p + 0x1E0, 0x29, 0, 1);
    }
}

void func_00505570(char *p) {
    float s;
    *(unsigned char *)(p + 5) += 1;
    s = D_00568110[*(int *)(p + 1272)][*(int *)(p + 1276)];
    *(float *)(p + 496) = *(float *)(p + 464) * s;
    *(float *)(p + 500) = *(float *)(p + 468) * s;
    *(float *)(p + 504) = *(float *)(p + 472) * s;
    *(float *)(p + 508) = 0.0f;
    *(float *)(p + 536) = 10.0f;
    *(float *)(p + 540) = 0.0f;
    *(float *)(p + 544) = 10.0f;
    *(char *)(p + 1280) = 0;
}

extern char D_00645A30[];

void func_00105300(char *, char *);

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00504FD0(char *);

char *func_005050C0(int u0, int u1, int p2, int p3, int p4, char *p5, int p6, int p7, float f0, float f1) {
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
    **q = func_001B0FD0(a, 0x510, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00504FD0(t);
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
        *(int *)(ret + 0x224) = p4;
        *(int *)(ret + 0x19C) = p2;
        *(int *)(ret + 0x1A0) = p3;
        *(int *)(ret + 0x228) = 0;
        *(float *)(ret + 0x210) = f0;
        *(float *)(ret + 0x214) = f1;
        *(int *)(ret + 0x4F8) = p6;
        *(int *)(ret + 0x4FC) = p7;
        func_00105300(ret + 0x1B0, p5);
        *(char *)(ret + 0x45) = 4;
    }
    return ret;
}

void func_0028C740(char *);

void func_005058F0(char *p) {
    void func_001AD140(char *);
    if (*(char **)(p + 0x228) != 0) {
        func_001AD140(*(char **)(p + 0x228));
    }
    func_0028C740(p + 0x230);
}

extern char D_00567610[];

int func_0028C200();

void func_00382A50();

int func_00505320(p0) int p0; {
    int func_001AD140();
    int func_00207480();
    char stk[0x40] __attribute__((aligned(16)));
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int tmp0;
    char *tmp1;
    v0 = (char *)p0;
    func_00382A50((v0 + 548));
    v1 = (int)v0;
    if (*(int *)(v0 + 548) == 0) {
        v4 = func_001AD140(v1);
    } else {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -32) + 32)) : "memory");
        *(int *)(v0 + 552) = 0;
        tmp0 = func_00207480(3, 908, ((stk + -32) + 32), 16);
        *(int *)(v0 + 552) = tmp0;
        v2 = *(char **)(v0 + 552);
        v3 = (int)v0;
        if (v2 == 0) {
            v4 = func_001AD140(v3);
        } else {
            *(char *)(v2 + 58) = 1;
            tmp1 = *(char **)(v0 + 552);
            *(char **)(*(char **)(v0 + 552) + 144) = (v0 + 432);
            *(char *)(tmp1 + 154) = 0;
            *(int *)(v0 + 404) = 0x43960000;
            *(char *)(v0 + 1104) = 2;
            *(int *)(v0 + 1120) = 0;
            *(int *)(v0 + 1124) = 0;
            *(int *)(v0 + 1128) = 0;
            *(int *)(v0 + 1132) = 0x3f800000;
            *(int *)(v0 + 1136) = 0x43480000;
            *(char *)(v0 + 1264) = 5;
            *(char *)(v0 + 1265) = 0;
            *(short *)(v0 + 1266) = 0;
            v4 = func_0028C200((v0 + 560), (v0 + 1264), (v0 + 1104), 3, D_00567610, v0, 0, 0x3f800000);
            *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
            *(char *)(v0 + 5) = 0;
            *(char *)(v0 + 408) = 0;
        }
    }
    return v4;
}

void func_00505840(p0) char *p0; {
    int func_001AD140();
    float v0;
    int tmp2;
    v0 = 0.0f;
    *(float *)(p0 + 536) -= *(float *)(p0 + 16);
    if (*(float *)(p0 + 536) < v0) {
        tmp2 = func_001AD140();
    }
}

void func_005058A0(p0) char *p0; {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((p0 + 1024)), "r"((p0 + 512)) : "memory");
    *(float *)(p0 + 480) = (*(float *)(p0 + 480) + *(float *)(p0 + 512));
    *(float *)(p0 + 488) = (*(float *)(p0 + 488) + *(float *)(p0 + 520));
}

void func_00505880(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_00505930();

void func_00505950(char *p) { func_00505930(p + -64); }

extern void func_00505030();

void func_00505960(char *p) { func_00505030(p + -64); }

void func_00505970(char *p) { func_00505030(p + -160); }

void func_00505890(void) {}

void func_005058E0(void) {}

void func_00505550(char *p0) {
    unsigned char t0;
    *(int *)(p0 + 536) = 0;
    t0 = (*(unsigned char *)(p0 + 5) + 1);
    *(char *)(p0 + 5) = (*(unsigned char *)(p0 + 5) + 1);
}
