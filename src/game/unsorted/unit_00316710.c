void func_0041E270(char *, char *, float, float);

 void func_0024BF20(char *);

void func_00317740(char *p, int k) {
    extern char D_01CAFF0C[];
    char *o;
    float d;
    *(float *)(p + 0x20) = 6.283185f * (*(float *)(p + 0x220) / 360.0f);
    func_0041E270(p + 0x70, p + 0x1A0, *(float *)(p + 0x228), *(float *)(p + 0x22C));
    func_0041E270(p + 0x80, p + 0x190, *(float *)(p + 0x230), *(float *)(p + 0x234));
    if (*(unsigned char *)(p + 0x2B6) == 0) {
        if ((unsigned char)k == 0) {
            o = *(char **)(*(char **)D_01CAFF0C + 0xC);
        } else {
            o = *(char **)(*(char **)D_01CAFF0C + 0x10);
        }
        if (*(float *)(p + 0x74) - *(float *)(o + 0x54) < 20.0f) {
            *(float *)(p + 0x74) = 20.0f + *(float *)(o + 0x54);
        }
    }
    *(float *)(p + 0x7C) = 1.0f;
    *(float *)(p + 0x8C) = 1.0f;
    func_0024BF20(p);
}

int func_0024D640(char *);

int func_002D9FA0(char *, char *);

int func_00316FC0(char *p) {
    extern char *D_01CAFF0C[];
    char *e = *(char **)(D_01CAFF0C[0] + 0xC);
    if ((unsigned char)func_0024D640(e)) goto ok;
    return 0;
ok:
    return (unsigned char)func_002D9FA0(e, p + 0xC0) != 0;
}

char *func_00207480(int, int, char *, int);

extern unsigned int D_01DF8810[];

extern unsigned int D_01DF7E50[];

void func_00207A90(unsigned int *);

void func_002490F0(char *, int, int, int, int, int, float);

int func_002496D0(char *);

void func_0021B790(char *, int);

void func_002DAB90(char *, int);

int func_002D9EB0(char *);

void func_00104C00(char *, char *, char *);

void func_00105760(char *, char *, float);

int func_0031B220(char *, short, float);

static inline float frand_31a(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return 2.3283064e-10f * (float)y;
}

void func_0031AAC0(char *p) {
    void func_002DAF70(char *p, short a, unsigned char b, unsigned char c, float f);
    extern char D_01CAFF0C[];
    float m[16] __attribute__((aligned(16)));
    unsigned char st = *(unsigned char *)(p + 0x284C);
    switch (st) {
    case 0:
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x0));
        func_002490F0(p, 0x1F, 0x1E, -1, 0, 0, -1.0f);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            (*(unsigned char *)(p + 0x284C))++;
            *(float *)(p + 0x7DC0) = 60.0f;
            func_00207480(3, 0x338, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), 8);
            *(short *)(p + 0x7DC4) = (int)(65536.0f * (360.0f * frand_31a()) / 360.0f + 0.5f);
        }
        break;
    case 2:
        if ((unsigned char)func_0031B220(p, *(short *)(p + 0x7DC4), 50.0f) == 1) {
            (*(unsigned char *)(p + 0x284C))++;
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
            func_00105760((char *)m, (char *)m, 3.1415925f);
            func_00104C00((char *)m, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), (char *)m);
            func_00207480(3, 0x338, (char *)m, 8);
        }
        break;
    case 3:
        *(unsigned char *)(p + 0x284C) = st + 1;
        func_002490F0(p, 0x1F, 0x1E, -1, 0, 0, -1.0f);
        *(short *)(p + 0x90) = (int)(65536.0f * *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x84) / 6.283185f + 0.5f);
        break;
    case 4:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        func_002DAB90(p, 3);
        break;
    }
}

float func_00131B50(float);

extern int D_01DFAB70[];

void func_0021CBB0(char *, int);

void func_0021CB60(char *, int);

void func_0021CB50(char *, int);

void func_002DB2C0(char *);

void func_002DBAA0(char *, short, float);

float func_001324B0(char *, float *);

short func_00131D10(float, float);

float func_00131C20(short);

float func_00131BA0(short);

void func_002DBD20(char *, float, float);

void func_002DBCC0(char *, int, float, float);

void func_002DBD00(char *);

void func_002F30B0(int, char *, char *);

int func_0023DF80(char *, float);

void func_002DA3A0(char *, short);

#define VMOVE260(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

static inline unsigned short ang_260(float d) {
    return (short)(int)(65536.0f * d / 360.0f + 0.5f);
}

static inline void setbit_260(int k) {
    int w = k / 32;
    D_01DFAB70[w] |= 1 << (k - w * 32);
}

void func_0031A720(char *p) {
    void func_002DAF70(char *p, short a, unsigned char b, unsigned char c, float f);
    float v[4] __attribute__((aligned(16)));
    short s;
    unsigned short t;
    float f;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0xC0));
        func_002490F0(p, 0x1F, 0x2C, -1, 0, 0, -1.0f);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            s = (unsigned short)(short)(int)(65536.0f * *(float *)(*(char **)(p + 0x2844) + 0x55C) / 360.0f + 0.5f);
            if (*(unsigned char *)(p + 0x3B9D) == 1) {
                VMOVE260(v, *(char **)(((char **)(p + 0x1388))[func_002D9EB0(p)] + 0x104));
                f = func_001324B0(p + 0x3C40, v);
                s = func_00131D10(func_00131B50(*(float *)(p + 0x3C44) - v[1]), f);
                t = ang_260(*(float *)(*(char **)(p + 0x2844) + 0x564));
                if (s < t) {
                    s = t;
                } else {
                    t = ang_260(*(float *)(*(char **)(p + 0x2844) + 0x568));
                    if (t < s) s = t;
                }
            }
            f = *(float *)(*(char **)(p + 0x2844) + 0x560);
            func_002DBD20(p, f * func_00131C20(s), 0.0f);
            func_002DBCC0(p, 1, -f * func_00131BA0(s), 0.0f);
            func_002DBD00(p);
            *(short *)(p + 0x28DE) = *(short *)(p + 0x90);
            func_002F30B0(0x4D, *(char **)(((char **)(p + 0x1380))[func_002D9EB0(p)] + 0x104), p);
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        if (func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021CBB0(p, 1);
            func_0021CB60(p, 2);
            func_0021CB50(p, 1);
            func_002490F0(p, 0x1F, 0x2D, -1, 0, 0, -1.0f);
            setbit_260(0x4D);
            (*(unsigned char *)(p + 0x284C))++;
        } else {
            func_002DA3A0(p, *(short *)(p + 0x28DE));
            func_002496D0(p);
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

int func_00317A30(char *p);

extern int D_01CAFF38[];

extern signed char D_005BE11C;

extern char D_005BE124;

extern int D_005BE190;

extern int D_005BE194;

short func_0034B940(char *, char *);

void func_00316D80(char *);

void func_00228300(int *);

void func_00317850(char *);

void func_004E8500(char *);

void func_004E8980(char *);

void func_00317B50(char *);

void func_005080A0(char *);

void func_005090D0(char *);

void func_00507A90(char *);

void func_004F56C0(char *);

void func_004FE000(char *);

void func_004E8120(char *);

void func_00506900(char *);

void func_00509600(char *);

void func_005086C0(char *);

void func_00316A00(char *p) {
    extern char D_01CAFF0C[];
    unsigned char v;
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x2898) & 2) v = 1;
    else v = 0;
    *(unsigned char *)(p + 0x2B6) = v;
    *(int *)(p + 0x2B0) = *(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x284A);
    *(short *)(p + 0x2B4) = func_0034B940(p + 0x80, p + 0x70);
    switch (*(unsigned char *)(p + 0x2B7)) {
    case 0:
        func_00316D80(p);
        *(unsigned char *)(p + 0x2B7) = 1;
        break;
    case 1:
        if (D_01CAFF38[0] != 0x191) {
            func_00228300(&D_005BE190);
            func_00228300(&D_005BE194);
            if (D_005BE190 == 0 && D_005BE194 == 0) {
                *(unsigned char *)(p + 0x2B7) = 2;
                return;
            }
        }
        *(float *)(p + 0x228) = 0.95f;
        *(float *)(p + 0x22C) = 0.95f;
        *(float *)(p + 0x230) = 0.95f;
        *(float *)(p + 0x234) = 0.95f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x1B0), "r"(p + 0x70) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x1C0), "r"(p + 0x80) : "memory");
        switch (D_005BE11C) {
        case 0:
            break;
        case 1:
            func_004E8500(p);
            break;
        case 2:
            func_004E8980(p);
            break;
        case 8:
            func_00317B50(p);
            break;
        case 11:
            func_005080A0(p);
            break;
        case 6:
            func_005090D0(p);
            break;
        case 7:
            func_00507A90(p);
            break;
        case 5:
            func_004F56C0(p);
            break;
        case 4:
            func_004FE000(p);
            break;
        case 3:
            *(float *)(p + 0x230) = 0.95f;
            func_004E8120(p);
            break;
        case 12:
            func_00506900(p);
            break;
        case 10:
            func_00509600(p);
            break;
        case 9:
            func_005086C0(p);
            break;
        case 13:
            func_00317A30(p);
            break;
        }
        break;
    case 2:
        func_00317850(p);
        D_005BE11C = -0x80;
        break;
    }
    D_005BE124 = 0;
}

void func_00316F30(p0, p1, p2) int p0; char *p1; int p2; {
    extern char D_01CAFF0C[];
    char stk[0x10] __attribute__((aligned(16)));
    float tmp2;
    if ((p2 & 255) == 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((*(int *)(*(char **)D_01CAFF0C + 12) + 80)), "r"(((stk + 0) + 0)) : "memory");
    } else {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((*(int *)(*(char **)D_01CAFF0C + 16) + 80)), "r"(((stk + 0) + 0)) : "memory");
    }
    *(float *)((stk + 0) + 4) = *(float *)((stk + 0) + 4) + 150.0f;
    *(float *)((stk + 0) + 12) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(((stk + 0) + 0)), "r"(p1) : "memory");
}

void func_00319B90(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, **(float **)(p + 0x2844));
        func_002490F0(p, 0x1F, 3, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_00319C70(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, **(float **)(p + 0x2844));
        func_002490F0(p, 0x1F, 4, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_0031AE00(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x23C));
        func_002490F0(p, 7, 3, -1, 2, 3, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0031AF50(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x240));
        func_002490F0(p, 7, 4, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

extern int D_01DFAB78[];

char *func_002D9C80(char *, int, int);

void func_00319D50(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0));
        func_002490F0(p, 0x1F, 5, -1, 0, 0, -1.0f);
        func_002F30B0(0x4E, *(char **)(((char **)(p + 0x1380))[func_002D9EB0(p)] + 0x104), p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0x1F, 8, -1, 0, 0, -1.0f);
            D_01DFAB78[0] = D_01DFAB78[0] | 0x4000;
            func_002F30B0(0x4B, *(char **)(func_002D9C80(p, 0xE, 1) + 0x104), p);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DAB90(p, 3);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB78[0] = D_01DFAB78[0] | 0x800;
            func_0021B790(p, 0);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_00319F10(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0));
        func_002490F0(p, 0x1F, 6, -1, 0, 0, -1.0f);
        func_002F30B0(0x4F, *(char **)(((char **)(p + 0x1380))[func_002D9EB0(p)] + 0x104), p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0x1F, 8, -1, 0, 0, -1.0f);
            D_01DFAB78[0] = D_01DFAB78[0] | 0x8000;
            func_002F30B0(0x4B, *(char **)(func_002D9C80(p, 0xE, 1) + 0x104), p);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DAB90(p, 3);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB78[0] = D_01DFAB78[0] | 0x800;
            func_0021B790(p, 0);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_0031A0D0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0));
        func_002490F0(p, 0x1F, 7, -1, 0, 0, -1.0f);
        func_002F30B0(0x50, *(char **)(((char **)(p + 0x1380))[func_002D9EB0(p)] + 0x104), p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0x1F, 8, -1, 0, 0, -1.0f);
            D_01DFAB78[0] = D_01DFAB78[0] | 0x10000;
            func_002F30B0(0x4B, *(char **)(func_002D9C80(p, 0xE, 1) + 0x104), p);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DAB90(p, 3);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB78[0] = D_01DFAB78[0] | 0x800;
            func_0021B790(p, 0);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_0031A290(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0));
        func_002490F0(p, 0x1F, 0x13, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0x1F, 0x14, -1, 0, 0, -1.0f);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DAB90(p, 3);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0x1F, 0x15, -1, 0, 0, -1.0f);
            func_002F30B0(0x51, *(char **)(((char **)(p + 0x1380))[func_002D9EB0(p)] + 0x104), p);
            func_002F30B0(0x4C, *(char **)(func_002D9C80(p, 0xE, 1) + 0x104), p);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DAB90(p, 3);
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB78[0] = D_01DFAB78[0] | 0x20000;
            D_01DFAB78[0] = D_01DFAB78[0] | 0x1000;
            func_0021B790(p, 0);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_0031A4C0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0));
        func_002490F0(p, 0x1F, 6, -1, 0, 0, -1.0f);
        func_002F30B0(0x4F, *(char **)(((char **)(p + 0x1380))[func_002D9EB0(p)] + 0x104), p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            func_002490F0(p, 0x1F, 7, -1, 0, 0, -1.0f);
            D_01DFAB78[0] = D_01DFAB78[0] | 0x8000;
            func_002F30B0(0x50, *(char **)(((char **)(p + 0x1380))[func_002D9EB0(p)] + 0x104), p);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DAB90(p, 3);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0x1F, 8, -1, 0, 0, -1.0f);
            D_01DFAB78[0] = D_01DFAB78[0] | 0x10000;
            func_002F30B0(0x4B, *(char **)(func_002D9C80(p, 0xE, 1) + 0x104), p);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DAB90(p, 3);
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB78[0] = D_01DFAB78[0] | 0x800;
            func_0021B790(p, 0);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_00316C60(char *p) {
    unsigned int i;
    D_005BE190 = 0;
    D_005BE194 = 0;
    *(float *)(p + 0x200) = 0.0f;
    *(float *)(p + 0x204) = 0.0f;
    *(float *)(p + 0x208) = 0.0f;
    *(float *)(p + 0x20C) = 1.0f;
    *(float *)(p + 0x210) = 0.0f;
    *(float *)(p + 0x214) = 0.0f;
    *(float *)(p + 0x218) = 0.0f;
    *(float *)(p + 0x21C) = 1.0f;
    *(float *)(p + 0x220) = 50.0f;
    *(float *)(p + 0x224) = 0.0f;
    *(float *)(p + 0x228) = 0.95f;
    *(float *)(p + 0x22C) = 0.95f;
    *(float *)(p + 0x230) = 0.95f;
    *(float *)(p + 0x234) = 0.95f;
    *(float *)(p + 0x238) = 500.0f;
    *(int *)(p + 0x23C) = 0;
    *(int *)(p + 0x240) = 0;
    *(unsigned char *)(p + 0x244) = 0;
    *(unsigned char *)(p + 0x245) = 0;
    *(unsigned char *)(p + 0x246) = 0;
    *(unsigned char *)(p + 0x247) = 0;
    *(short *)(p + 0x248) = 0;
    *(short *)(p + 0x24A) = 0;
    *(unsigned char *)(p + 0x24C) = 0;
    *(unsigned char *)(p + 0x24D) = 0;
    *(unsigned char *)(p + 0x24E) = 0;
    *(unsigned char *)(p + 0x24F) = 0;
    *(int *)(p + 0x250) = 0;
    *(int *)(p + 0x254) = 0;
    *(unsigned char *)(p + 0x258) = 0;
    *(unsigned char *)(p + 0x259) = 0;
    *(unsigned char *)(p + 0x25A) = 0;
    *(unsigned char *)(p + 0x25B) = 0;
    *(int *)(p + 0x25C) = 0;
    *(int *)(p + 0x260) = 0;
    for (i = 0; i < 16; i++) {
        *(float *)(p + i * 4 + 0x264) = 0.0f;
    }
    *(float *)(p + 0x2A4) = 0.5f;
    *(float *)(p + 0x2A8) = 0.0f;
    *(int *)(p + 0x2AC) = 0;
    *(unsigned char *)(p + 0x2B6) = 1;
    *(unsigned char *)(p + 0x2B7) = 0;
    *(unsigned char *)(p + 0x2B8) = 0;
    *(unsigned char *)(p + 0x2B9) = 0xFF;
}

void func_002C31A0(char *, char *, int);

void func_00316730(char *p, int k) {
    if (k < 0 || !(k < *(unsigned short *)(*(char **)(p + 0x90) + 6))) {
        return;
    }
    *(char **)(p + 0x98) = *(char **)(p + 0x94) + k * 0x410;
    func_002C31A0(p + 0xA0, *(char **)(p + 0x98), *(unsigned char *)(*(char **)(p + 0x98) + 0x400));
    func_002C31A0(p + 0x8F0, *(char **)(p + 0x98) + 0x180, *(unsigned char *)(*(char **)(p + 0x98) + 0x400));
    *(float *)(p + 0x1148) = (float)(*(int *)(*(char **)(p + 0x98) + 0x404) - 1);
    *(int *)(p + 0x114C) = 0;
    *(int *)(p + 0x1150) = k;
    *(unsigned char *)(p + 0x1154) = 0;
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

char *func_00202CD0(char *, short);

extern char D_005A75D0[];

extern char D_005A75F4[];

extern char D_005A7674[];

extern char D_005A7708[];

extern char D_005A7780[];

extern char D_005A7790[];

extern char D_005AC100[];

extern char D_005AC124[];

extern char D_005AC1A4[];

extern char D_005AC238[];

void func_001003E0();

void func_0013D240();

void func_001FBC10();

void func_00202A00();

void func_00202D40();

void func_00202D90();

void func_00202E60();

void func_00202F80();

void func_00202FE0();

void func_00203090();

void func_00204A70();

void func_00204C70();

void func_0024D9A0();

void func_0024F810();

void func_002791E0();

void func_0028C1A0();

void func_002E78A0();

void func_002E8A50();

void func_0031DD00();

void func_00332670();

void func_00414E60();

char *func_0031B470(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005AC100;
        *(char * *)(p + 64) = D_005AC124;
        *(char * *)(p + 160) = D_005AC1A4;
        *(char * *)(p + 208) = D_005AC238;
        if (p + 31408 != 0) {
            if (p + 31632 != 0) {
                *(char * *)(p + 31632) = D_005A7780;
                if (p + 31632 != 0) {
                    *(char * *)(p + 31632) = D_005A7790;
                }
            }
        }
        func_001003E0(p + 29424, (void *)func_00204C70, 160, 12);
        func_001003E0(p + 28656, (void *)func_00204A70, 192, 3);
        func_001003E0(p + 27968, (void *)func_00204A70, 192, 2);
        func_001003E0(p + 27088, (void *)func_0031DD00, 144, 5);
        func_001003E0(p + 26656, (void *)func_0031DD00, 144, 3);
        func_001003E0(p + 18944, (void *)func_002791E0, 1536, 5);
        if (p != 0) {
            *(char * *)(p) = D_005A75D0;
            *(char * *)(p + 64) = D_005A75F4;
            *(char * *)(p + 160) = D_005A7674;
            *(char * *)(p + 208) = D_005A7708;
            func_0028C1A0(p + 18336, -1);
            func_001003E0(p + 17920, (void *)func_0024D9A0, 208, 2);
            func_001003E0(p + 16672, (void *)func_0024D9A0, 208, 6);
            func_00332670(p + 15760, -1);
            func_0013D240(p + 15668, -1);
            func_00202CD0(p + 15624, -1);
            func_00202D40(p + 15584, -1);
            func_00202F80(p + 15280, -1);
            func_00202D90(p + 11096, -1);
            func_00414E60(p + 11008, -1);
            func_002E8A50(p + 10852, -1);
            func_002E78A0(p + 10784, -1);
            func_00202E60(p + 9920, -1);
            func_001003E0(p + 9632, (void *)func_00202FE0, 96, 3);
            func_00202F80(p + 9472, -1);
            func_001003E0(p + 9136, (void *)func_00203090, 64, 2);
            func_001FBC10(p + 8724, -1);
            func_001003E0(p + 5380, (void *)func_0013D240, 16, 209);
            func_001003E0(p + 384, (void *)func_002791E0, 1536, 3);
            func_00202A00(p + 208, 0);
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_00316990(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = *(int *)(p0 + 152);
    if (tmp0 == 0) {
        return 1;
    } else {
        v0 = 1;
        if (*(float *)(p0 + 4428) < *(float *)(p0 + 4424)) {
            v0 = 0;
        }
        return v0;
    }
}

void func_00317830(char *p0, char *p1, float f0) {
    if (*(unsigned char *)(p0 + 694) == 0) {
        *(float *)(p1 + 0) = f0;
    }
}

void func_00318040(p0, p1) char *p0; char *p1; {
    *(char *)(p1 + 13) = *(signed char *)(p0 + 10407);
    *(char *)(p1 + 14) = *(unsigned char *)(p0 + 10414);
    *(char *)(p1 + 15) = *(signed char *)(p0 + 10410);
    *(float *)(p1 + 56) = *(float *)(p0 + 10964);
    *(float *)(p1 + 60) = *(float *)(p0 + 10920);
    *(float *)(p1 + 64) = *(float *)(p0 + 10436);
    *(float *)(p1 + 68) = *(float *)(p0 + 10440);
    *(char *)(p1 + 17) = *(unsigned char *)(p0 + 10415);
    *(char *)(p1 + 10) = *(signed char *)(p0 + 15690);
    *(char *)(p1 + 11) = *(signed char *)(p0 + 15691);
    *(char *)(p1 + 12) = *(signed char *)(p0 + 15689);
    *(char *)(p1 + 18) = *(signed char *)(p0 + 15468);
    *(char *)(p1 + 19) = *(signed char *)(p0 + 15476);
    *(float *)(p1 + 52) = *(float *)(p0 + 15484);
    *(int *)(p1 + 20) = *(int *)(p0 + 10712);
    *(int *)(p1 + 24) = *(int *)(p0 + 10716);
    *(int *)(p1 + 28) = *(int *)(p0 + 10720);
    *(int *)(p1 + 32) = *(int *)(p0 + 10724);
    *(int *)(p1 + 36) = *(int *)(p0 + 10728);
    *(int *)(p1 + 40) = *(int *)(p0 + 10732);
    *(int *)(p1 + 44) = *(int *)(p0 + 10736);
    *(int *)(p1 + 48) = *(int *)(p0 + 10740);
    *(float *)(p1 + 72) = *(float *)(p0 + 16016);
    *(float *)(p1 + 76) = *(float *)(p0 + 16020);
    *(float *)(p1 + 80) = *(float *)(p0 + 15496);
}

int func_0022C6A0();

int func_00319190(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    v2 = func_0022C6A0((v0 + 27968), (v0 + 18944), *(int *)(*(char **)(p0 + 5004) + 260), (v0 + 32128), 1);
    v1 = *(int *)(v0 + 31352);
    if (v1 != -1) {
        v2 = func_0022C6A0(((v0 + (*(int *)(v0 + 31360) * 192)) + 28656), ((v0 + (v1 * 1536)) + 18944), *(int *)(*(char **)((char *)((*(int *)(v0 + 31348) << 2) + (int)v0) + 5000) + 260), ((v0 + (*(int *)(v0 + 31360) << 6)) + 29232), 1);
    }
    v3 = *(int *)(v0 + 31364);
    if (v3 != -1) {
        v2 = func_0022C6A0(((v0 + (*(int *)(v0 + 31372) * 192)) + 28656), ((v0 + (v3 * 1536)) + 18944), *(int *)(*(char **)((char *)((*(int *)(v0 + 31348) << 2) + (int)v0) + 5000) + 260), ((v0 + (*(int *)(v0 + 31372) << 6)) + 29232), 1);
    }
    v4 = *(int *)(v0 + 31392);
    if (v4 != -1) {
        v2 = func_0022C6A0(((v0 + (*(int *)(v0 + 31400) * 192)) + 28656), ((v0 + (v4 * 1536)) + 18944), *(int *)(*(char **)((char *)((*(int *)(v0 + 31388) << 2) + (int)v0) + 5000) + 260), ((v0 + (*(int *)(v0 + 31400) << 6)) + 29232), 1);
    }
    return v2;
}

int func_001AD140();

int func_003198B0(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(int *)(p0 + 200);
    if (v0 != 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

extern void func_0021C7A0();

void func_003198E0(void *p) { func_0021C7A0(p, 27); }

void func_00319300(void) {}

void func_00316710(char *p0, int p1) {
    *(int *)(p0 + 144) = p1;
    *(int *)(p0 + 148) = (p1 + 16);
    *(int *)(p0 + 152) = 0;
    *(char *)(p0 + 4436) = 0;
}

int func_0041E1F0(char *, char *, float, float);

void func_003176C0(p0, p1, p2) char *p0; int p1; int p2; {
    char stk[0x10] __attribute__((aligned(16)));
    float tmp0;
    int tmp3;
    *(int *)((stk + -48) + 48) = 0;
    *(int *)((stk + -48) + 52) = 0;
    tmp0 = -*(float *)(p0 + 568);
    *(int *)((stk + -48) + 60) = 0x3f800000;
    *(float *)((stk + -48) + 56) = tmp0;
    tmp3 = func_0041E1F0(((stk + -48) + 48), ((stk + -48) + 48), *(float *)(p0 + 528), *(float *)(p0 + 532));
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%2)" : : "r"(((stk + -48) + 48)), "r"(p2), "r"(p1) : "memory");
}
