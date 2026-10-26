void func_0034BA60(int, char *, int, int, int);

short func_00131D10(float, float);

void func_00132DF0(char *, float *, float *);

extern float D_00567EB0[];

#define QCPY4F2(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline char *pl4F2(char *p) {
    return ((char **)(*(char **)(p + 0x288) + 0x69F8))[*(int *)(p + 0x19C)];
}

void func_004F2D30(char *p) {
    void func_001AD140(char *);
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    int v;
    char *q;
    char *e;
    *(float *)(p + 0x194) = D_00567EB0[*(int *)(p + 0x5C0)];
    q = *(char **)(p + 0x288);
    v = *(int *)(p + 0x5C4);
    e = ((char **)(q + 0x69F8))[*(int *)(p + 0x19C)];
    if (v != ((int *)(q + 0x65C8))[*(short *)(e + 0xB92)]) {
        func_001AD140(p);
        return;
    }
    QCPY4F2(a, *(char **)(*(char **)(e + 0x9D8) + 0x104) + 0x30);
    QCPY4F2(b, *(char **)(*(char **)(pl4F2(p) + 0x9E0) + 0x104) + 0x30);
    *(float *)(p + 0x260) = a[0] + 2.3f * (b[0] - a[0]);
    *(float *)(p + 0x264) = a[1] + 2.3f * (b[1] - a[1]);
    *(float *)(p + 0x268) = a[2] + 2.3f * (b[2] - a[2]);
    QCPY4F2(a, *(char **)(*(char **)(pl4F2(p) + 0x9E4) + 0x104) + 0x30);
    QCPY4F2(b, *(char **)(*(char **)(pl4F2(p) + 0x9EC) + 0x104) + 0x30);
    *(float *)(p + 0x220) = a[0] + 2.3f * (b[0] - a[0]);
    *(float *)(p + 0x224) = a[1] + 2.3f * (b[1] - a[1]);
    *(float *)(p + 0x228) = a[2] + 2.3f * (b[2] - a[2]);
    u[0] = 0.0f;
    u[1] = 1.0f;
    u[2] = 0.0f;
    u[3] = 0.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x220), "r"(p + 0x260) : "memory");
    func_00132DF0(p + 0x230, d, u);
    *(short *)(p + 0x90) = func_00131D10(*(float *)(p + 0x250), *(float *)(p + 0x250));
    *(float *)(p + 0x284) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x284) < 0.0f) {
        (*(unsigned char *)(p + 5))++;
        *(float *)(p + 0x194) = D_00567EB0[*(int *)(p + 0x5C0)];
    }
    *(float *)(p + 0x5CC) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x5CC) < 0.0f) {
        *(float *)(p + 0x5CC) = *(float *)(p + 0x5C8);
        func_0034BA60(0x2D, p + 0x50, 0x29, 0, 1);
    }
}

extern char D_01CAFF0C[];

extern float D_00567FF0[];

float func_00132630(float *, char *);

void func_004F3020(char *p) {
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    char *c;
    char *g = *(char **)D_01CAFF0C;
    c = *(char **)(g + 0xC);
    QCPY4F2(a, *(char **)(*(char **)(pl4F2(p) + 0x9D8) + 0x104) + 0x30);
    QCPY4F2(b, *(char **)(*(char **)(pl4F2(p) + 0x9E0) + 0x104) + 0x30);
    *(float *)(p + 0x260) = a[0] + 2.3f * (b[0] - a[0]);
    *(float *)(p + 0x268) = a[2] + 2.3f * (b[2] - a[2]);
    QCPY4F2(a, *(char **)(*(char **)(pl4F2(p) + 0x9E4) + 0x104) + 0x30);
    QCPY4F2(b, *(char **)(*(char **)(pl4F2(p) + 0x9EC) + 0x104) + 0x30);
    *(float *)(p + 0x220) = a[0] + 2.3f * (b[0] - a[0]);
    *(float *)(p + 0x228) = a[2] + 2.3f * (b[2] - a[2]);
    u[0] = 0.0f;
    u[1] = 1.0f;
    u[2] = 0.0f;
    u[3] = 0.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x220), "r"(p + 0x260) : "memory");
    func_00132DF0(p + 0x230, d, u);
    *(short *)(p + 0x90) = func_00131D10(*(float *)(p + 0x250), *(float *)(p + 0x250));
    if (!(*(float *)(p + 0x264) <= 50.0f))
        *(float *)(p + 0x264) = *(float *)(p + 0x264) - *(float *)(p + 0x10) * D_00567FF0[*(int *)(p + 0x5C0)];
    else
        *(float *)(p + 0x264) = 50.0f;
    if (!(*(float *)(p + 0x224) <= 50.0f))
        *(float *)(p + 0x224) = *(float *)(p + 0x224) - *(float *)(p + 0x10) * D_00567FF0[*(int *)(p + 0x5C0)];
    else
        *(float *)(p + 0x224) = 50.0f;
    if (*(float *)(p + 0x264) <= 50.0f && *(float *)(p + 0x224) <= 50.0f) {
        (*(unsigned char *)(p + 5))++;
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(c + 0x50), "r"(p + 0x260) : "memory");
        d[3] = 0.0f;
        if (!(func_00132630(d, p + 0x250) <= 0.0f))
            *(float *)(p + 0x5D0) = 1.0f;
        else
            *(float *)(p + 0x5D0) = -1.0f;
    }
    *(float *)(p + 0x5CC) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x5CC) < 0.0f) {
        *(float *)(p + 0x5CC) = *(float *)(p + 0x5C8);
        func_0034BA60(0x2D, p + 0x50, 0x29, 0, 1);
    }
}

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_00382A50(char *);

extern char D_00567610[];

void func_004F23D0(char *p) {
    void func_001AD140(char *);
    char *func_00207480(int, int, char *, int);
    void func_00105300(char *, char *);
    float m[16] __attribute__((aligned(16)));
    char *t;
    char *u;
    func_00382A50(p + 0x288);
    if (*(char **)(p + 0x288) == 0) {
        func_001AD140(p);
        return;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105300(p + 0x230, *(char **)(*(char **)(((char **)(*(char **)(p + 0x288) + 0x69F8))[*(int *)(p + 0x19C)] + 0x9D8) + 0x104));
    func_00105300(p + 0x1F0, *(char **)(*(char **)(((char **)(*(char **)(p + 0x288) + 0x69F8))[*(int *)(p + 0x19C)] + 0x9E4) + 0x104));
    *(int *)(p + 0x28C) = 0;
    *(char **)(p + 0x28C) = func_00207480(3, 0x3C0, (char *)m, 0x10);
    if (*(char **)(p + 0x28C) == 0) {
        func_001AD140(p);
        return;
    }
    *(unsigned char *)(*(char **)(p + 0x28C) + 0x3A) = 1;
    t = *(char **)(p + 0x28C);
    *(char **)(t + 0x90) = p + 0x230;
    *(unsigned char *)(t + 0x9A) = 0;
    *(int *)(p + 0x290) = 0;
    *(char **)(p + 0x290) = func_00207480(3, 0x3C0, (char *)m, 0x10);
    if (*(char **)(p + 0x290) == 0) {
        func_001AD140(p);
        return;
    }
    *(unsigned char *)(*(char **)(p + 0x290) + 0x3A) = 1;
    u = *(char **)(p + 0x290);
    *(char **)(u + 0x90) = p + 0x1F0;
    *(unsigned char *)(u + 0x9A) = 1;
    *(unsigned char *)(p + 0x4C0) = 4;
    *(float *)(p + 0x4D0) = 0.0f;
    *(float *)(p + 0x4D4) = 0.0f;
    *(float *)(p + 0x4D8) = 0.0f;
    *(float *)(p + 0x4DC) = 1.0f;
    *(float *)(p + 0x4E0) = 700.0f;
    *(float *)(p + 0x4E4) = 0.0f;
    *(float *)(p + 0x4E8) = 0.0f;
    *(float *)(p + 0x4EC) = 1.0f;
    *(float *)(p + 0x4F0) = 50.0f;
    *(unsigned char *)(p + 0x5B0) = 1;
    *(unsigned char *)(p + 0x5B1) = 0;
    *(short *)(p + 0x5B2) = 0;
    *(unsigned char *)(p + 0x510) = 2;
    *(float *)(p + 0x520) = 0.0f;
    *(float *)(p + 0x524) = 0.0f;
    *(float *)(p + 0x528) = 0.0f;
    *(float *)(p + 0x52C) = 1.0f;
    *(float *)(p + 0x530) = 150.0f;
    *(unsigned char *)(p + 0x5B4) = 2;
    *(unsigned char *)(p + 0x5B5) = 0;
    *(short *)(p + 0x5B6) = 1;
    func_0028C200(p + 0x2A0, p + 0x5B0, p + 0x4C0, 3, D_00567610, p, 0);
    *(float *)(p + 0x194) = D_00567EB0[*(int *)(p + 0x5C0)];
    (*(unsigned char *)(p + 4))++;
    *(unsigned char *)(p + 5) = 0;
    *(int *)(p + 0x5CC) = 0;
    *(float *)(p + 0x5C8) = 10.0f;
}

extern float D_00567E50[][3];

void func_004F3380(char *p) {
    float t;
    *(float *)(p + 0x194) = *(float *)(p + 0x194) - *(float *)(p + 0x10);
    t = D_00567E50[*(int *)(p + 0x5C0)][*(int *)(p + 0x5BC)];
    *(float *)(p + 0x260) = *(float *)(p + 0x260) + *(float *)(p + 0x5D0) * (t * (*(float *)(p + 0x250) * *(float *)(p + 0x10)));
    *(float *)(p + 0x264) = *(float *)(p + 0x264) + *(float *)(p + 0x5D0) * (t * (*(float *)(p + 0x254) * *(float *)(p + 0x10)));
    *(float *)(p + 0x268) = *(float *)(p + 0x268) + *(float *)(p + 0x5D0) * (t * (*(float *)(p + 0x258) * *(float *)(p + 0x10)));
    *(float *)(p + 0x220) = *(float *)(p + 0x220) + *(float *)(p + 0x5D0) * (t * (*(float *)(p + 0x250) * *(float *)(p + 0x10)));
    *(float *)(p + 0x224) = *(float *)(p + 0x224) + *(float *)(p + 0x5D0) * (t * (*(float *)(p + 0x254) * *(float *)(p + 0x10)));
    *(float *)(p + 0x228) = *(float *)(p + 0x228) + *(float *)(p + 0x5D0) * (t * (*(float *)(p + 0x258) * *(float *)(p + 0x10)));
    *(short *)(p + 0x90) = func_00131D10(*(float *)(p + 0x250), *(float *)(p + 0x258) * *(float *)(p + 0x5D0));
    *(float *)(p + 0x5CC) = *(float *)(p + 0x5CC) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x5CC) < 0.0f) {
        *(float *)(p + 0x5CC) = *(float *)(p + 0x5C8);
        func_0034BA60(0x2D, p + 0x50, 0x29, 0, 1);
    }
}

extern char D_00645A30[];

void func_0013D6A0(char *);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_004F20A0(char *);

char *func_004F2190(int u0, int u1, int p2, int p3, char *p4, int p5, int p6) {
    void func_0013D240(char *, int);
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
    **q = func_001B0FD0(a, 0x5E0, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_004F20A0(t);
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
        *(char **)(ret + 0x288) = p4;
        *(int *)(ret + 0x19C) = p2;
        *(int *)(ret + 0x1A0) = p3;
        *(int *)(ret + 0x28C) = 0;
        *(int *)(ret + 0x290) = 0;
        *(int *)(ret + 0x5BC) = p5;
        *(int *)(ret + 0x5C0) = p6;
        *(char *)(ret + 0x45) = 4;
        *(int *)(ret + 0x5C4) = ((int *)(p4 + 0x65C8))[*(short *)(((char **)(p4 + 0x69F8))[p2] + 0xB92)];
    }
    return ret;
}

void func_0028C740();

void func_004F3560(p) char *p; {
    void func_001AD140();
    void func_00207480();
    if (*(char **)(p + 652) != 0) {
        func_001AD140(*(char **)(p + 652));
    }
    if (*(char **)(p + 656) != 0) {
        func_001AD140(*(char **)(p + 656));
    }
    func_00207480(3, 828, p + 560, 16);
    func_00207480(3, 828, p + 496, 16);
    func_0028C740(p + 672);
}

int func_004F27F0(p0) char *p0; {
    int func_00105300();
    int tmp6;
    *(int *)(p0 + 644) = 0;
    func_00105300((p0 + 560), *(int *)(*(char **)(*(char **)((char (*)[4])((char *)*(int *)(p0 + 648) + 27128))[*(int *)(p0 + 412)] + 2520) + 260));
    tmp6 = func_00105300((p0 + 496), *(int *)(*(char **)(*(char **)((char (*)[4])((char *)*(int *)(p0 + 648) + 27128))[*(int *)(p0 + 412)] + 2532) + 260));
    *(char *)(p0 + 5) = (*(unsigned char *)(p0 + 5) + 1);
    return tmp6;
}

extern char D_005BA5D0[];

extern char D_005BA5F4[];

extern char D_005BA674[];

void func_00100450();

void func_001AAD30();

int func_00252FA0();

void func_002790E0();

int func_0028C110();

int func_002E7840();

int func_002E8A10();

void func_0031DCB0();

int func_004F3980(p0) int p0; {
    void func_0013D240();
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005BA5D0;
    *(char **)((char *)p0 + 64) = D_005BA5F4;
    *(char **)((char *)p0 + 160) = D_005BA674;
    func_00100450((p0 + 340), (char *)func_001AAD30, (char *)func_0013D240, 16, 1);
    func_0028C110((p0 + 432));
    func_002790E0((p0 + 1216));
    func_0031DCB0((p0 + 2752));
    func_002E7840((p0 + 2916));
    func_002E8A10((p0 + 2984));
    *(int *)((char *)p0 + 1152) = 0;
    return p0;
}

void func_004F3520(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_004F35E0();

void func_004F3600(char *p) { func_004F35E0(p + -64); }

extern void func_004F2100();

void func_004F3610(char *p) { func_004F2100(p + -64); }

void func_004F3620(char *p) { func_004F2100(p + -160); }

void func_004F3530(void) {}

void func_004F3540(void) {}

void func_004F3550(void) {}

void func_004F3510(char *p0) {
    unsigned char t0;
    t0 = (*(unsigned char *)(p0 + 4) + 1);
    *(char *)(p0 + 4) = (*(unsigned char *)(p0 + 4) + 1);
}
