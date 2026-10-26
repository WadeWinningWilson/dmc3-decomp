/* Acts on the state of the sub-object at +0xDF0 (1 or 2). */
int func_0024E780(char *, int, int);

void func_0024E7B0(char *, int, int);

void func_0033A660(char *, int);

void func_0033A580(char *p) {
    if ((unsigned char)func_0024E780(p + 0xDF0, 0, 1) == 1) {
        func_0024E7B0(p + 0xDF0, 0, 1);
        func_0033A660(p, 0);
    } else if ((unsigned char)func_0024E780(p + 0xDF0, 0, 1) == 2) {
        func_0024E7B0(p + 0xDF0, 0, 1);
        func_0033A660(p, 1);
    }
}

void func_00252850(char *, int, int);

void func_0033B0B0(char *p, unsigned char k, int a, int b) {
    if (*(unsigned char *)(p + 333) == 3) {
        return;
    }
    switch (k) {
    case 0:
    case 1:
    case 4:
        break;
    case 2:
    case 3:
        func_00252850(p, a, b);
        break;
    }
}

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0033BB50(char *);

char *func_0033B9F0(char *p, char *s, short h) {
    void func_0013D240(char *, int);
    void func_001AAD30(char *);
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
    **q = func_001B0FD0(a, 0xC00, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xC00, t);
        if (r != 0) {
            func_0033BB50(r);
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
        *(char **)(ret + 0xBC8) = s;
        *(short *)(ret + 0x90) = h;
        *(char **)(ret + 0xBC0) = p;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
    }
    return ret;
}

void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern char D_0055C2C0[];

extern char D_0055C300[];

extern char D_0056F590[];

void func_0024D9F0(char *, char *, int, int, char *, char *, char *, char *, char *);

static inline char *sub24(char *q) {
    if (*(unsigned int *)(q + 4) < 8) {
        return 0;
    }
    if (*(int *)(q + 0x24) == 0) {
        return 0;
    }
    return q + *(int *)(q + 0x24);
}

void func_00333EF0(char *p) {
    char *h;
    char *a;
    func_0028C200(p + 0xED0, D_0055C2C0, D_0055C300, 2, D_0056F590, p, 0);
    h = *(char **)(p + 0x4D0);
    if (**(unsigned short **)(h + 8) == 0) {
        a = sub24(*(char **)(h + 0xC));
    } else {
        a = *(char **)(h + 0xC);
    }
    func_0024D9F0(p + 0xDF0, a, 0, 1, p + 0xEC0, p + 0x744, p + 0x660, p + 0xDE0, p + 0xED0);
}

void func_0028C110(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_0022C820(char *);

extern char D_005A77A0[];

extern char D_005B0890[];

void func_0024FE00(char *);

void func_00320540(char *);

void func_0031E400(char *);

void func_00204AD0();

void func_00204A70();

void func_002E8A10(char *);

void func_003C9D90(char *);

void func_00313E20(char *);

void func_0024D930(char *);

void func_00400FF0(char *);

void func_0024D9A0();

void func_002791E0();

void func_002E7BF0(char *);

extern char D_005AC7F0[];

extern char D_005AC814[];

extern char D_005AC894[];

extern char D_005AC928[];

extern char D_005AC9F4[];

extern char D_005ACAAC[];

char *func_003331F0(char *p) {
    void func_001AAD30();
    void func_0013D240();
    int i;
    int j;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E400(p + 0x1D0);
    *(char **)(p + 0x0) = D_005AC7F0;
    *(char **)(p + 0x40) = D_005AC814;
    *(char **)(p + 0xA0) = D_005AC894;
    *(char **)(p + 0xD0) = D_005AC928;
    *(char **)(p + 0x130) = D_005AC9F4;
    *(char **)(p + 0x1D0) = D_005ACAAC;
    func_00100450(p + 0x1D8, func_001AAD30, func_0013D240, 0x10, 0x2B);
    func_00100450(p + 0x4E0, func_00204AD0, func_00204A70, 0xC0, 2);
    func_00100450(p + 0x740, func_002790E0, func_002791E0, 0x600, 1);
    func_00400FF0(p + 0xD40);
    p[0xD60] = 0;
    func_00100450(p + 0xDF0, func_0024D930, func_0024D9A0, 0xD0, 1);
    func_0028C110(p + 0xED0);
    p[0x10F0] = 0;
    p[0x10F1] = 0;
    *(short *)(p + 0x10F2) = 0;
    *(int *)(p + 0x10F8) = 0;
    *(int *)(p + 0x10FC) = 0;
    *(int *)(p + 0x1100) = 0;
    *(int *)(p + 0x1110) = 0;
    *(int *)(p + 0x1114) = 0;
    *(int *)(p + 0x1118) = 0;
    *(float *)(p + 0x111C) = 1.0f;
    *(float *)(p + 0x1120) = 100000.0f;
    p[0x1124] = 0;
    p[0x1125] = 0;
    *(short *)(p + 0x1126) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x1128) = -1;
    func_002E7BF0(p + 0x11A8);
    func_002E8A10(p + 0x11F4);
    func_00313E20(p + 0x120C);
    q = p + 0x1230;
    *(char **)(p + 0x1240) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    for (j = 0; j < 12; j++) *(int *)(p + j * 4 + 0x12B4) = 0;
    *(int *)(p + 0xC8) = 0;
    *(int *)(p + 0x12B0) = 0;
    p[0x1351] = 0;
    *(int *)(p + 0x1378) = 0;
    return p;
}

void func_0024DA80(char *, int, int);

void func_0033A620(char *p, int a, int b) {
    if (a >= 0 && b >= 0) {
        *(int *)(p + 0x12A8) = a;
        *(int *)(p + 0x12AC) = b;
        func_0024DA80(p + 0xDF0, *(int *)(p + 0x12A8), *(int *)(p + 0x12AC));
    }
}

extern char D_01DFABA0[];

char *func_00207480(int, int, char *, int);

void func_003305E0(char *, int, int, int, int, int, int);

void func_0033B200(char *p) {
    char *q;
    *(unsigned char *)(p + 0x1351) = 0;
    *(char **)(p + 0x12C4) = func_00207480(3, 0xE9, 0, 16);
    q = *(char **)(p + 0x12C4);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x668) + 0x104);
        q[0x9A] = 1;
        *(*(char **)(p + 0x12C4) + 0x3A) = 1;
        q = *(char **)(p + 0x12C4);
        q[0x9C] = 0x40;
        q[0x9D] = 0x20;
        *(unsigned char *)(q + 0x9E) = 0x80;
        q[0x9B] = 2;
    }
    func_003305E0(D_01DFABA0, 0, 0x5C, (int)(p + 0x50), 0, 0, 0);
}

void func_0033B140(char *p) {
    char *q;
    *(unsigned char *)(p + 0x1351) = 1;
    *(char **)(p + 0x12C0) = func_00207480(3, 0xDC, 0, 16);
    q = *(char **)(p + 0x12C0);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x668) + 0x104);
        q[0x9A] = 1;
        *(*(char **)(p + 0x12C0) + 0x3A) = 1;
        q = *(char **)(p + 0x12C0);
        q[0x9C] = 0x40;
        q[0x9D] = 0x20;
        *(unsigned char *)(q + 0x9E) = 0x80;
        q[0x9B] = 2;
    }
    func_003305E0(D_01DFABA0, 0, 0x5A, (int)(p + 0x50), 0, 0, 0);
}

extern char D_01CAFF0C[];

int func_0021CAD0(char *);

void func_0033A740(char *p, signed char a1) {
    char *g;
    float f;
    if (*(unsigned char *)(p + 4) == 0) {
        return;
    }
    if (*(unsigned char *)(p + 0x14D) == 3) {
        return;
    }
    if (a1 != 1) {
        return;
    }
    if (*(unsigned char *)(p + 0x138C) != 0) {
        return;
    }
    g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    if (g == 0) {
        return;
    }
    switch ((unsigned char)func_0021CAD0(g)) {
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
        f = 60.0f;
        break;
    case 0x8C:
    case 0x8D:
    case 0x8E:
    case 0x8F:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
        f = 240.0f;
        break;
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9A:
    case 0x9B:
        f = 240.0f;
        break;
    case 0xA0:
    case 0xA1:
    case 0xA2:
        f = 480.0f;
        break;
    case 0xAA:
    case 0xAB:
    case 0xAC:
        f = 480.0f;
        break;
    default:
        f = 0.0f;
        break;
    }
    *(float *)(p + 0x1374) = *(float *)(p + 0x1374) + f;
}

void func_00206730(char *);

void func_00286040(char *);

void func_00228350(char *);

void func_0033B2F0(char *p) {
    int i;
    for (i = 0; i < 12; i++) {
        func_00206730(p + i * 4 + 0x12B4);
    }
    func_00228350(p + 0xC8);
    func_00286040(p + 0x12B0);
}

void func_00131700(char *, char *, char *);

void func_00105230(char *, char *, char *);

void func_001318E0(char *, char *, char *);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define VUNIT(d) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(d) : "memory")

static inline void set4_333(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

void func_003338E0(char *p) {
    *(float *)(p + 0xDE0) = 1.0f;
    QCOPY(p + 0x50, p + 0x4A0);
    set4_333((float *)(p + 0x60), 0.0f, 0.0f, 0.0f, 1.0f);
    set4_333((float *)(p + 0x70), 0.0f, 0.0f, 0.0f, 1.0f);
    set4_333((float *)(p + 0x80), 0.0f, 0.0f, 0.0f, 1.0f);
    p[0xD60] = 0;
    set4_333((float *)(p + 0xD70), 0.0f, 0.0f, 0.0f, 1.0f);
    set4_333((float *)(p + 0xD80), 0.0f, 0.0f, 0.0f, 1.0f);
    set4_333((float *)(p + 0xD90), 1.0f, 1.0f, 1.0f, 1.0f);
    VUNIT(p + 0xDA0);
    func_00131700(p + 0xDA0, p + 0xDA0, p + 0xD80);
    func_00105230(p + 0xDA0, p + 0xDA0, p + 0xD70);
    func_001318E0(p + 0xDA0, p + 0xDA0, p + 0xD90);
    QCOPY(p + 0xD70, p + 0x50);
    QCOPY(p + 0xD80, p + 0x80);
    VUNIT(p + 0xDA0);
    func_00131700(p + 0xDA0, p + 0xDA0, p + 0xD80);
    func_00105230(p + 0xDA0, p + 0xDA0, p + 0xD70);
    func_001318E0(p + 0xDA0, p + 0xDA0, p + 0xD90);
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

void func_001003E0();

void func_0024FEA0();

void func_0028C1A0();

void func_002E7C40();

void func_002E8A50();

void func_00313E60();

void func_0031E440();

void func_00320590();

void func_00401030();

char *func_00333410(char *p, short flag) {
    void func_0013D240();
    if (p != 0) {
        *(char * *)(p) = D_005AC7F0;
        *(char * *)(p + 64) = D_005AC814;
        *(char * *)(p + 160) = D_005AC894;
        *(char * *)(p + 208) = D_005AC928;
        *(char * *)(p + 304) = D_005AC9F4;
        *(char * *)(p + 464) = D_005ACAAC;
        if (p + 4656 != 0) {
            *(char * *)(p + 4672) = D_005B0890;
            if (p + 4656 != 0) {
                *(char * *)(p + 4672) = D_005A77A0;
            }
        }
        func_00313E60(p + 4620, -1);
        func_002E8A50(p + 4596, -1);
        func_002E7C40(p + 4520, -1);
        func_0028C1A0(p + 3792, -1);
        func_001003E0(p + 3568, (void *)func_0024D9A0, 208, 1);
        func_00401030(p + 3392, -1);
        func_001003E0(p + 1856, (void *)func_002791E0, 1536, 1);
        func_001003E0(p + 1248, (void *)func_00204A70, 192, 2);
        func_001003E0(p + 472, (void *)func_0013D240, 16, 43);
        func_0031E440(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_001AD140();

int func_00334150();

int func_003338A0(p0) int p0; {
    int v0;
    int v1;
    v1 = func_00334150();
    v0 = p0;
    if ((v1 & 255) == 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

int func_00339EF0();

int func_0033A170();

int func_0033A1C0();

int func_00339E80(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int v0;
    int v1;
    int tmp0;
    v0 = *(unsigned short *)(*(char **)(p0 + 308) + 34);
    tmp0 = 2;
    if (v0 != tmp0) {
        switch (v0) {
        case 0:
            v1 = func_0033A1C0(p0, v0);
            break;
        case 1:
            v1 = func_00339EF0(p0, v0);
            break;
        }
    } else {
        v1 = func_0033A170(p0, v0);
    }
    return v1;
}

void func_0033AAE0(p0, p1) char *p0; char *p1; {
    if (*(unsigned char *)(p0 + 333) != 3) {
        *(char *)(p0 + 364) = *(signed char *)(p1 + 0);
        *(char *)(p0 + 365) = *(signed char *)(p1 + 1);
        *(char *)(p0 + 366) = *(signed char *)(p1 + 2);
        *(float *)(p0 + 368) = *(float *)(p1 + 4);
        *(float *)(p0 + 372) = *(float *)(p1 + 8);
        *(float *)(p0 + 376) = *(float *)(p1 + 12);
        *(float *)(p0 + 380) = *(float *)(p1 + 16);
        *(float *)(p0 + 384) = *(float *)(p1 + 20);
        *(char *)(p0 + 388) = *(signed char *)(p1 + 24);
        *(float *)(p0 + 392) = *(float *)(p1 + 28);
        *(char *)(p0 + 396) = *(signed char *)(p1 + 32);
        *(float *)(p0 + 400) = *(float *)(p1 + 36);
        *(float *)(p0 + 404) = *(float *)(p1 + 40);
        *(float *)(p0 + 408) = *(float *)(p1 + 44);
        *(char *)(p0 + 412) = *(unsigned char *)(p1 + 48);
        *(int *)(p0 + 416) = *(int *)(p1 + 52);
        *(float *)(p0 + 420) = *(float *)(p1 + 56);
        *(char *)(p0 + 424) = *(signed char *)(p1 + 60);
        *(char *)(p0 + 425) = *(signed char *)(p1 + 61);
        *(char *)(p0 + 426) = *(signed char *)(p1 + 62);
        *(int *)(p0 + 4720) = 0x40a00000;
        *(int *)(p0 + 4724) = 0x40a00000;
        *(int *)(p0 + 4728) = 0x40a00000;
        *(int *)(p0 + 4732) = 0;
        *(int *)(p0 + 4736) = 0x40a00000;
        *(char *)(p0 + 4668) = 1;
    }
}

int func_0033B2C0(p0, p1) int p0; int p1; {
    char *v0;
    v0 = 0;
    if ((p1 < 43)) {
        v0 = (char *)(p1 << 2);
        v0 = (v0 + p0);
        v0 = *(char **)(v0 + 1632);
    }
    return (int)v0;
}

int func_001AD100();

void func_00334330();

int func_00334470();

int func_0033A730();

int func_0033B360(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    v2 = func_001AD100();
    v1 = *(unsigned char *)(v0 + 4);
    tmp0 = 2;
    if (v1 != tmp0) {
        switch (v1) {
        case 0:
            func_00334330(v0);
            /* fall through */
        case 1:
            v2 = func_00334470(v0);
            break;
        }
    } else {
        v2 = func_0033A730(v0);
    }
    return v2;
}

void func_0033B3D0(p0) int p0; {
    char stk[0x10] __attribute__((aligned(16)));
    float v0;
    int v1;
    char *v2;
    char *v3;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((p0 + 4256)), "r"(((stk + 0) + 0)) : "memory");
    *(float *)((stk + 0) + 12) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((p0 + 80)), "r"(((stk + 0) + 0)) : "memory");
    v0 = 1.0f;
    v1 = 0;
    v2 = ((stk + 0) + 0);
    while ((v1 < 43)) {
        v3 = *(char **)((char *)((v1 << 2) + p0) + 1632);
        if (v3 != 0) {
            if (*(int *)(v3 + 260) != 0) {
                __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((*(int *)(*(char **)((char *)((v1 << 2) + p0) + 1632) + 260) + 48)), "r"(v2) : "memory");
                *(float *)(*(char **)(*(char **)((char *)((v1 << 2) + p0) + 1632) + 260) + 60) = v0;
            }
        }
        v1 = (v1 + 1);
    }
}

int func_002F2D30();

int func_0033B660(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    char *v5;
    int v6;
    int v7;
    int v8;
    v0 = (char *)p0;
    v1 = *(int *)(*(char **)D_01CAFF0C + 32);
    v2 = (int)v0;
    if (v1 != 0) {
        v7 = func_002F2D30(v1, v2);
    }
    v3 = 0;
    v5 = v0;
    do {
        v4 = *(int *)(v5 + 4788);
        if (v4 != 0) {
            v7 = func_001AD140(v4);
            *(int *)(v5 + 4788) = 0;
        }
        v3 = (v3 + 1);
        v5 = (v5 + 4);
    } while ((v3 < 12));
    v6 = *(int *)(v0 + 4784);
    if (v6 != 0) {
        v7 = func_001AD140(v6);
        *(int *)(v0 + 4784) = 0;
    }
    v8 = *(int *)(v0 + 200);
    if (v8 != 0) {
        v7 = func_001AD140(v8);
        *(int *)(v0 + 200) = 0;
    }
    return v7;
}

extern void func_0033B2E0();

void func_0033B7E0(char *p) { func_0033B2E0(p + -64); }

extern void func_0033B2B0();

void func_0033B7F0(char *p) { func_0033B2B0(p + -64); }

extern void func_0033AF20();

void func_0033B800(char *p) { func_0033AF20(p + -64); }

extern void func_0033ABC0();

void func_0033B820(char *p) { func_0033ABC0(p + -64); }

extern void func_0033ADA0();

void func_0033B830(char *p) { func_0033ADA0(p + -64); }

extern void func_0033A930();

void func_0033B860(char *p) { func_0033A930(p + -64); }

extern void func_00334B80();

void func_0033B8A0(char *p) { func_00334B80(p + -304); }

extern void func_0033B130();

void func_0033B8D0(char *p) { func_0033B130(p + -304); }

void func_0033B8E0(char *p) { func_0033AF20(p + -304); }

void func_0033B900(char *p) { func_0033ABC0(p + -304); }

void func_0033B910(char *p) { func_0033ADA0(p + -304); }

extern void func_00334BA0();

void func_0033B940(char *p) { func_00334BA0(p + -304); }

extern void func_0033A720();

void func_0033B960(char *p) { func_0033A720(p + -464); }

extern void func_0033A710();

void func_0033B970(char *p) { func_0033A710(p + -464); }

extern void func_0033A700();

void func_0033B980(char *p) { func_0033A700(p + -464); }

extern void func_0033A6F0();

void func_0033B990(char *p) { func_0033A6F0(p + -464); }

extern void func_0033A6E0();

void func_0033B9A0(char *p) { func_0033A6E0(p + -464); }

extern void func_0033A6D0();

void func_0033B9B0(char *p) { func_0033A6D0(p + -464); }

extern void func_003360D0();

void func_0033B9C0(char *p) { func_003360D0(p + -464); }

extern void func_003366A0();

void func_0033B9D0(char *p) { func_003366A0(p + -464); }
