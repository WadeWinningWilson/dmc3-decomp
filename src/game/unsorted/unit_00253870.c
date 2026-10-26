extern char D_01DFABA0[];

extern int D_01DFAB7C[];

void func_002490F0(char *, int, int, int, int, int, float);

int func_002496D0(char *);

void func_0021CBB0(char *, int);

float func_00131B50(float);

void func_002F30B0(int, char *, char *);

void func_002DBAA0(char *, short, float);

float func_00132510(char *);

int func_002DB3E0(char *, int);

void func_0021B790(char *, int);

extern int D_01DFAB78[];

extern char D_00666710[];

extern char D_0066671A[];

void func_002DBCC0(char *, int, float, float);

void func_002DBD20(char *, float, float);

void func_00330B50(char *, int, char *, int);

void func_003305E0(char *, int, int, char *, int, int, int);

int func_002D9A10(char *, short, int);

void func_0021C7E0(char *, int, int, int);

static inline void phys_274(char *p) {
    *(float *)(p + 0x54) += *(float *)(p + 0x64) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) += *(float *)(p + 0x74) * *(float *)(p + 0x10);
}

void func_00274140(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    int func_002DB2C0(char *);
    float func_001324B0(char *, char *);
    int func_002242C0(char *);
    int func_002D9EB0(char *);
    unsigned short func_001AE770(char *, int);
    void func_0025DD40(char *);
    float e;
    float d = 10000.0f;
    if (*(unsigned char *)(p + 0x3B9D) == 1 && func_00131B50(*(float *)(p + 0x54) - *(float *)(p + 0x3C44)) < 200.0f) {
        d = func_001324B0(p + 0x50, p + 0x3C40);
    }
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x514));
        func_002490F0(p, 7, 0x1E, -1, 0, 0, -1.0f);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        *(unsigned char *)(p + 0x2866) = 0;
        *(unsigned char *)(p + 0x2867) = 1;
        *(float *)(p + 0x2874) = 0.0f;
        *(short *)(p + 0x2856) = 0;
        func_002DBCC0(p, 1, -7.0f, 0.0f);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 7, 0x1F, -1, 0, 0, -1.0f);
        if (*(unsigned char *)(p + 0x2998) == 0x79) {
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x520);
            func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x524) / *(float *)(p + 0x2870), 0.0f);
        } else {
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x528);
            func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x52C) / *(float *)(p + 0x2870), 0.0f);
        }
            func_00330B50(D_01DFABA0, 0x10, p + 0x50, 4);
            func_003305E0(D_01DFABA0, 1, 0x2A, p + 0x50, 0, 0, 0);
        if ((unsigned char)func_002242C0(p) == 0) {
            func_002F30B0(0x58, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        } else {
            func_002F30B0(0x7F, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        }
            func_002DAF70(p, 0xE39, 0, 0, 0.0f);
            *(float *)(p + 0x2878) = 0.0f;
            *(unsigned char *)(p + 0x284C) = 3;
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1 && (*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
            func_002490F0(p, 7, 0x21, -1, 0, 0, -1.0f);
            *(unsigned char *)(p + 0x284C) = 2;
        }
        if (!(d <= *(float *)(*(char **)(p + 0x2844) + 0x51C))) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
            phys_274(p);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 7, 0x21, -1, 0, 0, 81.0f);
            *(short *)(p + 0x2856) = 1;
        }
        *(float *)(p + 0x2874) = *(float *)(p + 0x2874) + *(float *)(p + 0x10);
        if (!(*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
        if (*(unsigned char *)(p + 0x2998) == 0x79) {
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x520);
            func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x524) / *(float *)(p + 0x2870), 0.0f);
        } else {
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x528);
            func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x52C) / *(float *)(p + 0x2870), 0.0f);
        }
            if (*(short *)(p + 0x2856) == 0) {
                func_00330B50(D_01DFABA0, 0x10, p + 0x50, 4);
                func_003305E0(D_01DFABA0, 1, 0x2A, p + 0x50, 0, 0, 0);
            } else {
                func_00330B50(D_01DFABA0, 0x10, p + 0x50, 4);
                func_00330B50(D_01DFABA0, 0x1A, p + 0x50, 4);
            }
        if ((unsigned char)func_002242C0(p) == 0) {
            func_002F30B0(0x58, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        } else {
            func_002F30B0(0x7F, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        }
            func_002490F0(p, 7, 0x1F, -1, 0, 0, 6.0f);
            *(unsigned char *)(p + 0x2867) = 0;
            if (*(short *)(p + 0x2856) != 0) {
                func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x6A8));
                *(float *)(p + 0x2878) = *(float *)(*(char **)(p + 0x2844) + 0x6A8);
            } else {
                func_002DAF70(p, 0xE39, 0, 0, 0.0f);
                *(float *)(p + 0x2878) = 0.0f;
            }
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
            *(unsigned char *)(p + 0x284C) = 3;
        }
        break;
    case 3:
        *(float *)(p + 0x2878) = *(float *)(p + 0x2878) - *(float *)(p + 0x10);
        if ((unsigned char)func_002DB2C0(p) != 0 || *(float *)(p + 0x2878) <= 0.0f) {
            e = func_00132510(p + 0x4970);
            if (*(unsigned char *)(p + 0x2867) == 1) {
                func_002DB3E0(p, *(short *)(p + 0x90));
                phys_274(p);
            }
            *(unsigned char *)(p + 0x2867) = 1;
            *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2870) < 0.0f || !(e <= *(float *)(*(char **)(p + 0x2844) + 0x518)) ||
                d < *(float *)(*(char **)(p + 0x2844) + 0x51C)) {
                if (*(unsigned char *)(p + 0x2998) == 0x79) {
                    if (*(float *)(p + 0x2874) < *(float *)(*(char **)(p + 0x2844) + 0x50C)) {
                        func_002490F0(p, 7, 0x20, -1, 0, 0, -1.0f);
                    } else if (*(short *)(p + 0x2856) == 0) {
                        func_002490F0(p, 7, 0x35, -1, 0, 0, -1.0f);
                    } else {
                        func_002490F0(p, 7, 0x36, -1, 0, 0, -1.0f);
                    }
                } else {
                    if (*(float *)(p + 0x2874) < *(float *)(*(char **)(p + 0x2844) + 0x50C)) {
                        func_002490F0(p, 7, 0x37, -1, 0, 0, -1.0f);
                    } else if (*(short *)(p + 0x2856) == 0) {
                        func_002490F0(p, 7, 0x38, -1, 0, 0, -1.0f);
                    } else {
                        func_002490F0(p, 7, 0x39, -1, 0, 0, -1.0f);
                    }
                }
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB78[0] = D_01DFAB78[0] | 0x1000000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x80000000;
            }
                (*(unsigned char *)(p + 0x284C))++;
            }
        }
        break;
    case 4:
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        phys_274(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) *(unsigned char *)(p + 0x2866) = 0;
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB78[0] = D_01DFAB78[0] | 0x1000000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x80000000;
            }
            func_0021B790(p, 0xA);
            return;
        }
        break;
    }
    if (*(unsigned char *)(p + 0x24D5) == 2) *(unsigned char *)(p + 0x2866) = 1;
    if (*(unsigned char *)(p + 0x2866) == 1 && (unsigned char)func_002D9A10(p, *(short *)(p + 0x90), 1) == 1) {
        *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
        *(unsigned char *)(p + 0x2998) = 9;
        func_0021C7E0(p, 0x11, -1, -1);
        func_0025DD40(p);
        return;
    }
}

extern int D_01DFAB70[];

void func_0021CB60(char *, int);

void func_0021CB50(char *, int);

short func_00131D10(float, float);

void func_002DBD00(char *);

int func_0023DF80(char *, float);

#define VMOVE260(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

static inline unsigned short ang_260(float d) {
    return (short)(int)(65536.0f * d / 360.0f + 0.5f);
}

static inline void setbit_260(int k) {
    int w = k / 32;
    D_01DFAB70[w] |= 1 << (k - w * 32);
}

void func_00260110(char *p) {
    int func_002242C0(char *);
    void func_002DB090(char *p, short a, unsigned char c, float f);
    int func_002D9EB0(char *);
    void func_002DB2C0(char *);
    float func_001324B0(char *, float *);
    float func_00131C20(short);
    float func_00131BA0(short);
    void func_002DA3A0(char *, short);
    float v[4] __attribute__((aligned(16)));
    short s;
    unsigned short t;
    float f;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002DB090(p, 0xE39, 2, *(float *)(*(char **)(p + 0x2844) + 0xC0));
        func_002490F0(p, 0xD, 4, -1, 0, 0, -1.0f);
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
            if ((unsigned char)func_002242C0(p) == 0) {
                func_002F30B0(0xE, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            } else {
                func_002F30B0(0x64, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            }
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        if (func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021CBB0(p, 1);
            func_0021CB60(p, 2);
            func_0021CB50(p, 1);
            func_002490F0(p, 0xD, 5, -1, 0, 0, -1.0f);
            if ((unsigned char)func_002242C0(p) == 0) {
                setbit_260(0xE);
            } else {
                setbit_260(0x64);
            }
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

void func_00260530(char *p) {
    int func_002242C0(char *);
    void func_002DAF70(char *p, short a, unsigned char b, unsigned char c, float f);
    int func_002D9EB0(char *);
    void func_002DB2C0(char *);
    float func_001324B0(char *, float *);
    float func_00131C20(short);
    float func_00131BA0(short);
    void func_002DA3A0(char *, short);
    float v[4] __attribute__((aligned(16)));
    short s;
    unsigned short t;
    float f;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0xC0));
        func_002490F0(p, 7, 0xC, -1, 0, 0, -1.0f);
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
            if ((unsigned char)func_002242C0(p) == 0) {
                func_002F30B0(0xE, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            } else {
                func_002F30B0(0x64, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            }
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        if (func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021CBB0(p, 1);
            func_0021CB60(p, 2);
            func_0021CB50(p, 1);
            func_002490F0(p, 7, 0xD, -1, 0, 0, -1.0f);
            if ((unsigned char)func_002242C0(p) == 0) {
                setbit_260(0xE);
            } else {
                setbit_260(0x64);
            }
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

void func_002DBD30(char *);

void func_00105230(char *, char *, char *);

int func_0023E110(char *);

void func_0025D460(char *p) {
    void func_002DAF70(char *p, short a, unsigned char b, unsigned char c, float f);
    char *func_00207480(int, int, char *, int);
    int func_002D9EB0(char *);
    void func_002DB2C0(char *);
    void func_002DA3A0(char *, short);
    float m[16] __attribute__((aligned(16)));
    char *g;
    float d;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(short *)(p + 0x28DE) = *(short *)(p + 0x28DC);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x6C));
        d = *(float *)(p + 0x54) - *(float *)(p + 0x2924);
        if (d < *(float *)(*(char **)(p + 0x2844) + 0x70)) {
            func_002490F0(p, 3, 0xA, -1, 0, 0, -1.0f);
            *(short *)(p + 0x2858) = 0;
        } else if (d < *(float *)(*(char **)(p + 0x2844) + 0x74)) {
            func_002490F0(p, 3, 0x28, -1, 0, 0, -1.0f);
            *(short *)(p + 0x2858) = 1;
        } else {
            func_002490F0(p, 3, 0x29, -1, 0, 0, -1.0f);
            *(short *)(p + 0x2858) = 2;
        }
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x64), *(float *)(*(char **)(p + 0x2844) + 0x68));
        func_002DBD30(p);
        func_002DA3A0(p, *(short *)(p + 0x28DE));
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        func_002DA3A0(p, *(short *)(p + 0x28DE));
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            switch (*(short *)(p + 0x2858)) {
            case 0:
                func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x78), *(float *)(*(char **)(p + 0x2844) + 0x7C));
                break;
            case 1:
                func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x80), *(float *)(*(char **)(p + 0x2844) + 0x84));
                break;
            case 2:
                func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x88), *(float *)(*(char **)(p + 0x2844) + 0x8C));
                break;
            }
            func_002DBD30(p);
            *(short *)(p + 0x2856) = 0;
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        if (*(short *)(p + 0x2856) == 0) func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 2) *(short *)(p + 0x2856) = 1;
        if (func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021CB50(p, 1);
            func_0021CB60(p, 2);
            func_0021CBB0(p, 1);
            g = func_00207480(3, 0x8E, 0, 8);
            if (g) {
                *(char **)(g + 0x94) = *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104);
                g[0x99] = 0;
            }
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
            func_00105230((char *)m, (char *)m, p + 0x50);
            m[15] = 1.0f;
            switch (*(unsigned char *)(p + 0x2928)) {
            case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
                func_00207480(0, 0x2C, (char *)m, 8);
                break;
            case 11:
                func_00207480(3, 0xF2, (char *)m, 8);
                break;
            case 12: case 13: case 14: case 15:
                break;
            }
            func_00330B50(D_01DFABA0, 4, p + 0x50, 0);
            (*(unsigned char *)(p + 0x284C))++;
        } else {
            func_002DA3A0(p, *(short *)(p + 0x28DE));
        }
        break;
    case 3:
        if ((unsigned char)func_0023E110(p) == 1 && !(*(float *)(p + 0x54) <= *(float *)(p + 0x2924))) {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64);
            if (*(float *)(p + 0x54) < *(float *)(p + 0x2924)) *(float *)(p + 0x54) = *(float *)(p + 0x2924);
        }
        if ((unsigned char)func_002496D0(p) == 4) func_0021B790(p, 0xA);
        break;
    }
}

char *func_002D9C80(char *, int, int);

void func_00495110(char *, char *, short);

#define QCOPY268E(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define VMOVE268E(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

static inline signed char find_268E(char *p, signed char k) {
    unsigned int i;
    for (i = 0; i < 5; i++) {
        if (*(signed char *)((char *)i + (int)p + 0x3D4C) == k) return i;
    }
    return -1;
}

void func_00268EE0(char *p) {
    void func_002DAF70(char *p, short a, unsigned char b, unsigned char c, float f);
    int func_002D9EB0(char *);
    void func_002DB2C0(char *);
    float func_00131C20(short);
    float func_00131BA0(short);
    unsigned short func_001AE770(char *, int);
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    signed char s;
    switch (*(unsigned char *)(p + 0x2850)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 0x16, 0, -1, 0, 0, -1.0f);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x5A8));
        (*(unsigned char *)(p + 0x2850))++;
        break;
    case 1:
        func_002DB2C0(p);
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5)) {
            VMOVE268E(w, *(char **)(((char **)(p + 0x1390))[func_002D9EB0(p)] + 0x104));
            QCOPY268E(v, p + 0x3C40);
            if (*(unsigned char *)(p + 0x3B9D) == 0) {
                v[0] = w[0] + 1500.0f * func_00131BA0(*(short *)(p + 0x90));
                v[1] = w[1];
                v[2] = w[2] + 1500.0f * func_00131C20(*(short *)(p + 0x90));
                v[3] = 1.0f;
            }
            func_00495110(p, *(char **)(func_002D9C80(p, 9, 1) + 0x104), *(short *)(p + 0x90));
            *(float *)(p + 0x2870) = 30.0f;
            *(float *)(p + 0x2874) = 300.0f;
            s = find_268E(p, 9);
            *(float *)((char *)(s * 4) + (int)p + 0x3D74) = 10.0f + *(float *)(p + 0x2870);
            *(unsigned char *)((char *)s + (int)p + 0x3D68) = 1;
            (*(unsigned char *)(p + 0x2850))++;
        }
        break;
    case 2:
        func_002496D0(p);
        s = find_268E(p, 9);
        *(float *)((char *)(s * 4) + (int)p + 0x3D74) = 10.0f;
        if (*(unsigned char *)((char *)s + (int)p + 0x3D68) == 1) {
            *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2870) <= 0.0f &&
                (*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x20) * 2))) {
                *(unsigned char *)((char *)s + (int)p + 0x3D68) = 2;
                *(float *)(p + 0x2874) = 120.0f;
            }
        }
        *(float *)(p + 0x2874) = *(float *)(p + 0x2874) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2874) <= 0.0f || *(unsigned char *)((char *)s + (int)p + 0x3D68) == 3) {
            func_002490F0(p, 0x16, 1, -1, 0, 0, -1.0f);
            (*(unsigned char *)(p + 0x2850))++;
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

extern float D_01DF5D20[];

extern int D_01DFAB74[];

float func_002D8B50(char *);

void func_00430AD0(char *);

void func_00275DE0(char *p) {
    void func_002DAF70(char *p, short a, unsigned char b, unsigned char c, float f);
    int func_002D9EB0(char *);
    void func_002DB2C0(char *);
    float f;
    char *q;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(unsigned char *)(p + 0x2866) = 1;
        *(float *)(p + 0x2870) = 1.0f;
        f = *(float *)(p + 0x3C88);
        if (0.0f == f) f = 1.0f;
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        switch (*(unsigned char *)(p + 0x2998)) {
        case 0xBE:
            func_002490F0(p, 0x18, 0xF, -1, 0, 0, -1.0f);
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x254) * (*(float *)(q + 0x250) + f * *(float *)(q + 0x24C));
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x218));
            *(unsigned char *)(p + 0x2866) = 0;
            *(unsigned char *)(p + 0x284C) = 1;
            break;
        case 0xBF:
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x11, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x25, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x26, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x27, -1, 0, 0, -1.0f); break;
            }
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x23C) * (*(float *)(q + 0x238) + f * *(float *)(q + 0x234));
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x283C) + 0x2C8);
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        case 0xC0:
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x28, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x29, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x2A, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x2B, -1, 0, 0, -1.0f); break;
            }
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x248) * (*(float *)(q + 0x244) + f * *(float *)(q + 0x240));
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        case 0xC1:
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x10, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x2D, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x2E, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x2F, -1, 0, 0, -1.0f); break;
            }
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x254) * (*(float *)(q + 0x250) + f * *(float *)(q + 0x24C));
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        if (*(float *)(p + 0x2A1C) < 1.0f) *(float *)(p + 0x2A1C) = 1.0f;
        *(unsigned char *)(p + 0x299A) = *(unsigned char *)(p + 0x2998);
        *(float *)(p + 0x2A18) = *(float *)(p + 0x2A1C) * func_002D8B50(p);
        *(float *)(p + 0x3C90) = 0.0f;
        if (*(unsigned char *)(p + 0x2998) != 0xBE) {
            *(float *)(p + 0x3C88) = 0.0f;
            func_00430AD0(p);
        }
        *(unsigned char *)(p + 0x299D) = 0;
        if (*(unsigned char *)(p + 0x3C86)) func_002F30B0(0x3D, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        func_002F30B0(0xF, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        break;
    case 1:
        *(float *)(p + 0x3C90) = *(float *)(p + 0x3C90) + D_01DF5D20[0];
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x10, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x2D, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x2E, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x2F, -1, 0, 0, -1.0f); break;
            }
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        if (*(unsigned char *)(p + 0x2998) == 0xBE && *(unsigned char *)(p + 0x299D)) {
            *(float *)(p + 0x3C88) = 0.0f;
            func_00430AD0(p);
        }
        func_002DBAA0(p, *(short *)(p + 0x90), *(float *)(p + 0x2870));
        break;
    case 2:
        *(float *)(p + 0x3C90) = *(float *)(p + 0x3C90) + D_01DF5D20[0];
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB74[0] = D_01DFAB74[0] | 0x20000000;
            D_01DFAB70[0] = D_01DFAB70[0] | 0x8000;
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x2998) == 0xBE && *(unsigned char *)(p + 0x299D)) {
            *(float *)(p + 0x3C88) = 0.0f;
            func_00430AD0(p);
        }
        func_002DBAA0(p, *(short *)(p + 0x90), *(float *)(p + 0x2870));
        break;
    }
}

void func_002DBCA0(char *, int);

void func_0021CA00(char *, int);

void func_002DB940(char *, short, float);

void func_0021C100(char *, int, int, float, float);

void func_0021BFC0(char *);

void func_00276520(char *p) {
    void func_002DAF70(char *p, short a, unsigned char b, unsigned char c, float f);
    int func_002D9EB0(char *);
    void func_002DB2C0(char *);
    float f;
    char *q;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(unsigned char *)(p + 0x2866) = 1;
        *(float *)(p + 0x2870) = 1.0f;
        f = *(float *)(p + 0x3C88);
        if (0.0f == f) f = 1.0f;
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        switch (*(unsigned char *)(p + 0x2998)) {
        case 0xC2:
            func_002490F0(p, 0x18, 0x12, -1, 0, 0, -1.0f);
            func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x1C8), *(float *)(*(char **)(p + 0x283C) + 0x1CC));
            *(float *)(p + 0x2A1C) = 0.1f * *(float *)(p + 0x3C88);
            *(unsigned char *)(p + 0x2866) = 0;
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x218));
            *(unsigned char *)(p + 0x284C) = 1;
            break;
        case 0xC3:
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x14, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x31, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x32, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x33, -1, 0, 0, -1.0f); break;
            }
            func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x1D0), *(float *)(*(char **)(p + 0x283C) + 0x1D4));
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x23C) * (*(float *)(q + 0x238) + f * *(float *)(q + 0x234));
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x283C) + 0x2C8);
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        case 0xC4:
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x34, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x35, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x36, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x37, -1, 0, 0, -1.0f); break;
            }
            func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x1D8), *(float *)(*(char **)(p + 0x283C) + 0x1DC));
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x248) * (*(float *)(q + 0x244) + f * *(float *)(q + 0x240));
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        case 0xC5:
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x13, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x39, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x3A, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x3B, -1, 0, 0, -1.0f); break;
            }
            func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x1E0), *(float *)(*(char **)(p + 0x283C) + 0x1E4));
            q = *(char **)(p + 0x283C);
            *(float *)(p + 0x2A1C) = *(float *)(q + 0x254) * (*(float *)(q + 0x250) + f * *(float *)(q + 0x24C));
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        if (*(float *)(p + 0x2A1C) < 1.0f) *(float *)(p + 0x2A1C) = 1.0f;
        *(unsigned char *)(p + 0x299A) = *(unsigned char *)(p + 0x2998);
        *(float *)(p + 0x2A18) = *(float *)(p + 0x2A1C) * func_002D8B50(p);
        *(float *)(p + 0x3C90) = 0.0f;
        if (*(unsigned char *)(p + 0x2998) != 0xC2) {
            *(float *)(p + 0x3C88) = 0.0f;
            func_00430AD0(p);
        }
        *(unsigned char *)(p + 0x299D) = 0;
        func_002DBCA0(p, 1);
        func_0021CA00(p, 0);
        if (*(unsigned char *)(p + 0x3C86)) func_002F30B0(0x3D, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        func_002F30B0(0xF, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        break;
    case 1:
        *(float *)(p + 0x3C90) = *(float *)(p + 0x3C90) + D_01DF5D20[0];
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            switch (*(unsigned char *)(p + 0x3C86)) {
            case 0: func_002490F0(p, 0x18, 0x13, -1, 0, 0, -1.0f); break;
            case 1: func_002490F0(p, 0x18, 0x39, -1, 0, 0, -1.0f); break;
            case 2: func_002490F0(p, 0x18, 0x3A, -1, 0, 0, -1.0f); break;
            default: func_002490F0(p, 0x18, 0x3B, -1, 0, 0, -1.0f); break;
            }
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        if (*(unsigned char *)(p + 0x2998) == 0xC2 && *(unsigned char *)(p + 0x299D)) {
            *(float *)(p + 0x3C88) = 0.0f;
            func_00430AD0(p);
        }
        func_002DB940(p, *(short *)(p + 0x90), *(float *)(p + 0x2870));
        break;
    case 2:
        *(float *)(p + 0x3C90) = *(float *)(p + 0x3C90) + D_01DF5D20[0];
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB74[0] = D_01DFAB74[0] | 0x20000000;
            D_01DFAB70[0] = D_01DFAB70[0] | 0x8000;
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), -1.5f);
            break;
        }
        if (*(unsigned char *)(p + 0x2998) == 0xC2 && *(unsigned char *)(p + 0x299D)) {
            *(float *)(p + 0x3C88) = 0.0f;
            func_00430AD0(p);
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) *(float *)(p + 0x74) = -1.5f;
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, 0.0f)) {
            func_0021BFC0(p);
            break;
        }
        func_002DB940(p, *(short *)(p + 0x90), *(float *)(p + 0x2870));
        break;
    }
}

void func_001282D0(char *, char *, int);

typedef struct { float v[4]; } V277;

typedef struct { V277 a; V277 b; float c; } S277 __attribute__((aligned(16)));

void func_002779F0(char *, S277 *, char *, int);

void func_00277BC0(char *, S277 *);

char *func_00277610(char *p, int d, int k, char *src) {
    void func_00128488(char *, int, int);
    S277 t1;
    S277 t2;
    S277 t3;
    char *n;
    char *e;
    unsigned char f;
    unsigned char ok;
    if (src != 0) func_001282D0(p + 0x50, src, 0xC0);
    else func_00128488(p + 0x50, 0, 0xC0);
    if (k & 4) {
        for (n = *(char **)(p + 0xC); n != 0; n = *(char **)(n + 8)) {
            e = *(char **)(n + 0xC);
            f = *(unsigned char *)e;
            ok = 0;
            if ((f & 4) && (k & 0x10)) ok = 1;
            switch ((unsigned char)(f & ~4)) {
            case 0:
                break;
            case 1:
                if (k & 3) ok = 1;
                break;
            case 2:
                if (k & 2) ok = 1;
                break;
            case 3:
                if (k & 1) ok = 1;
                break;
            }
            if (ok) {
                func_002779F0(p, &t1, e, d);
                func_00277BC0(p, &t1);
            }
        }
    }
    if (k & 8) {
        for (n = *(char **)(p + 0x18); n != 0; n = *(char **)(n + 8)) {
            e = *(char **)(n + 0xC);
            f = *(unsigned char *)e & ~8;
            ok = 0;
            if ((f & 4) && (k & 0x10)) ok = 1;
            switch ((unsigned char)(f & ~4)) {
            case 0:
                break;
            case 1:
                if (k & 3) ok = 1;
                break;
            case 2:
                if (k & 2) ok = 1;
                break;
            case 3:
                if (k & 1) ok = 1;
                break;
            }
            if (ok) {
                func_002779F0(p, &t2, e, d);
                func_00277BC0(p, &t2);
            }
        }
    }
    if ((k & 2) && *(char **)(p + 0x40) != 0) {
        func_002779F0(p, &t3, *(char **)(*(char **)(p + 0x40) + 0xC), d);
        *(S277 *)(p + 0xE0) = *(S277 *)(p + 0xB0);
        *(S277 *)(p + 0xB0) = *(S277 *)(p + 0x80);
        *(S277 *)(p + 0x80) = *(S277 *)(p + 0x50);
        ((S277 *)(p + 0x50))->a = t3.a;
        ((S277 *)(p + 0x50))->b = t3.b;
        ((S277 *)(p + 0x50))->c = t3.c;
    }
    return p + 0x50;
}

extern char D_01DFC180[];

void func_004BD3C0(char *, int, short, int, unsigned char, unsigned char);

int func_0026E400(char *p0) {
    int func_001AE770();
    int func_002D9EB0();
    char *v0;
    unsigned char v1;
    int v2;
    char *v3;
    int v4;
    char *v5;
    int tmp5;
    int tmp11;
    v0 = p0;
    v1 = 0;
    if ((*(unsigned char *)(p0 + 32663) < *(unsigned char *)(p0 + 32664))) {
        *(float *)(v0 + 32672) -= *(float *)(v0 + 16);
        if (*(float *)(v0 + 32672) <= 0.0f) {
            *(float *)(v0 + 32672) = *(float *)(v0 + 32668);
            *(char *)(v0 + 32665) = (*(unsigned char *)(v0 + 32665) + 1);
            if (*(unsigned char *)(v0 + 32665) > 10) {
                *(char *)(v0 + 32665) = 0;
            }
            if (*(unsigned char *)(v0 + 10648) == 83) {
                v1 = 1;
            }
            *(char *)(v0 + 32663) = (*(unsigned char *)(v0 + 32663) + 1);
            tmp5 = func_002D9EB0(v0);
            func_004BD3C0(v0, *(int *)(*(char **)((char *)((tmp5 << 2) + (int)v0) + 4996) + 260), *(short *)(v0 + 144), *(signed char *)(v0 + 32663), *(unsigned char *)(v0 + 212), v1);
        }
    }
    if (*(unsigned char *)(v0 + 32662) == 5) {
        v4 = 0;
        v5 = (D_01DFC180 + (*(unsigned char *)(v0 + 212) * 10));
        do {
            *(char *)(v5 + 0) = 1;
            *(char *)(v5 + 1) = 1;
            v4 = (v4 + 5);
            *(char *)(v5 + 2) = 1;
            *(char *)(v5 + 3) = 1;
            *(char *)(v5 + 4) = 1;
            v5 = (v5 + 5);
        } while ((v4 < 10));
        return (*(unsigned char *)(v0 + 32663) < *(unsigned char *)(v0 + 32664));
    } else {
        tmp11 = func_001AE770(D_00666710, 16);
        if ((*(unsigned short *)(v0 + 18880) & *(unsigned short *)((D_0066671A + ((tmp11 & 65535) << 1)) + 0))) {
            return 1;
        } else {
            v2 = 0;
            v3 = (D_01DFC180 + (*(unsigned char *)(v0 + 212) * 10));
            do {
                *(char *)(v3 + 0) = 1;
                *(char *)(v3 + 1) = 1;
                v2 = (v2 + 5);
                *(char *)(v3 + 2) = 1;
                *(char *)(v3 + 3) = 1;
                *(char *)(v3 + 4) = 1;
                v3 = (v3 + 5);
            } while ((v2 < 10));
            return 0;
        }
    }
}

void func_00253BC0(char *d, char *s) {
    unsigned int i;
    for (i = 0; i < 5; i++) {
        d[i] = s[i];
        if (d[i] != -1) {
            d[d[i] + 5] = s[i + 5];
        }
    }
    d[20] = s[10];
    d[21] = s[11];
    d[32] = s[18];
    d[*(unsigned char *)(s + 18) + 33] = s[19];
    ((float *)(d + 40))[*(unsigned char *)(s + 18)] = *(float *)(s + 52);
    d[23] = *(unsigned char *)(s + 17);
    *(float *)(d + 24) = *(float *)(s + 60);
    *(float *)(d + 28) = *(float *)(s + 68);
    *(int *)(d + 64) = *(int *)(s + 20);
    *(int *)(d + 68) = *(int *)(s + 24);
    *(int *)(d + 72) = *(int *)(s + 28);
    *(int *)(d + 76) = *(int *)(s + 32);
    *(int *)(d + 80) = *(int *)(s + 36);
    *(int *)(d + 84) = *(int *)(s + 40);
    *(int *)(d + 88) = *(int *)(s + 44);
    *(int *)(d + 92) = *(int *)(s + 48);
}

void func_0025D060(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, **(float **)(p + 0x2844));
        func_002490F0(p, 3, 5, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026D0B0(char *);

void func_0026CFF0(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 6, 3, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = 1;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0026D0B0(p);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0025F2C0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x1EC));
        func_002490F0(p, 13, 19, -1, 2, 3, -1.0f);
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
    }
}

void func_0026B100(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x334));
        func_002490F0(p, 5, 8, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026B1E0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x338));
        func_002490F0(p, 5, 9, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_002692B0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x1FC));
        func_002490F0(p, 4, 3, -1, 0, 0, -1.0f);
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
    }
}

void func_002693A0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x200));
        func_002490F0(p, 4, 4, -1, 0, 0, -1.0f);
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
    }
}

void func_00269490(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x204));
        func_002490F0(p, 4, 5, -1, 0, 0, -1.0f);
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
    }
}

void func_00269580(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x208));
        func_002490F0(p, 4, 6, -1, 0, 0, -1.0f);
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
    }
}

void func_00269670(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x20C));
        func_002490F0(p, 4, 7, -1, 0, 0, -1.0f);
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
    }
}

void func_0025CF70(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x0));
        func_002490F0(p, 3, 4, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026AC50(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x320));
        func_002490F0(p, 5, 3, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026AD40(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x324));
        func_002490F0(p, 5, 4, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026AE30(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x328));
        func_002490F0(p, 5, 5, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026AF20(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x32C));
        func_002490F0(p, 5, 6, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026B010(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x330));
        func_002490F0(p, 5, 7, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_00260950(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    int func_002D9EB0(char *);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0xB4));
        func_002490F0(p, 13, 11, -1, 2, 3, -1.0f);
        func_002F30B0(0x11, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            D_01DFAB70[0] = D_01DFAB70[0] | 0x20000;
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026C380(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    int func_002D9EB0(char *);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x380));
        func_002490F0(p, 15, 0, -1, 0, 0, -1.0f);
        func_002F30B0(0x3F, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB74[0] = D_01DFAB74[0] | 0x80000000;
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0025EE70(char *, int, float, float, float);

int func_0025EE90(char *);

float func_00249DD0(char *, int);

#define ANG25F(x) ((short)(unsigned short)(short)(int)(65536.0f * (x) / 360.0f + 0.5f))

void func_0025FA60(char *p) {
    char *func_00207480(int, int, float *, int);
    int func_002D9EB0(char *);
    char *g;
    short a;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 0xD, 0x12, -1, 0, 0, -1.0f);
        func_0025EE70(p, 4, *(float *)(*(char **)(p + 0x2844) + 0x634), *(float *)(*(char **)(p + 0x2844) + 0x63C), *(float *)(*(char **)(p + 0x2844) + 0x638));
        g = func_00207480(3, 0x90, 0, 8);
        if (g) {
            *(int *)(g + 0x90) = *(int *)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104);
            g[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        *(unsigned char *)(p + 0x2866) = 0;
        *(unsigned char *)(p + 0x2867) = 1;
        *(unsigned char *)(p + 0x2868) = 0;
        *(short *)(p + 0x28DE) = 0;
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) *(unsigned char *)(p + 0x2868) = 1;
        if ((unsigned char)func_0025EE90(p) == 0) *(unsigned char *)(p + 0x2866) = 1;
        *(short *)(p + 0x28DE) = *(short *)(p + 0x28DE) + ANG25F(*(float *)(*(char **)(p + 0x2844) + 0x620) * *(float *)(p + 0x10));
        if (*(unsigned char *)(p + 0x2868) == 1 &&
            *(unsigned short *)(p + 0x28DE) > (unsigned short)(short)(int)(65536.0f * *(float *)(*(char **)(p + 0x2844) + 0x640) / 360.0f + 0.5f)) {
            func_002490F0(p, 0xD, 0x15, -1, 0, 0, 24.0f);
            *(short *)(p + 0x28DE) = 0;
            func_003305E0(D_01DFABA0, 1, 4, p + 0x50, 0, 0, 0);
        }
        if (*(unsigned char *)(p + 0x2867) == 1) {
            if (!(func_00249DD0(p, 1) < 23.0f)) *(unsigned char *)(p + 0x2867) = 0;
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
            break;
        }
        *(short *)(p + 0x90) = *(short *)(p + 0x90) + ANG25F(*(float *)(*(char **)(p + 0x2844) + 0x620) * *(float *)(p + 0x10));
        if (*(unsigned char *)(p + 0x2866) == 1) (*(unsigned char *)(p + 0x284C))++;
        break;
    case 2:
        func_002496D0(p);
        a = *(short *)(p + 0x90);
        *(short *)(p + 0x90) = a + ANG25F(*(float *)(*(char **)(p + 0x2844) + 0x620) * *(float *)(p + 0x10));
        if ((short)(a - *(short *)(p + 0x28DC) + 0x8000) - (short)(*(short *)(p + 0x90) - *(short *)(p + 0x28DC) + 0x8000) < 0) {
            *(short *)(p + 0x90) = *(short *)(p + 0x28DC);
            func_002490F0(p, 0xD, 0x14, -1, 0, 0, -1.0f);
            (*(unsigned char *)(p + 0x284C))++;
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

void func_00247510(char *, char *);

void func_00278060(char *p, char *q) {
    if (**(unsigned char **)(p + 0xEC) != 0) {
        if (**(unsigned char **)(p + 0xEC) & 8) {
            *(char **)(q + 0x40) = p + 0xE0;
        }
        if ((unsigned char)(**(unsigned char **)(p + 0xEC) & ~8)) {
            func_00247510(q + 0x14, p + 0xE0);
        }
    }
}

void func_00105300(char *, char *);

typedef struct { int w[8]; } __attribute__((aligned(16))) M32;

void func_00277DE0(char *p, char *s, char *x, int flag) {
    *(signed char *)(p + 0x10) = *(signed char *)s;
    *(unsigned char *)(p + 0x11) = *(unsigned char *)(s + 1);
    *(float *)(p + 0x14) = *(float *)(s + 4);
    *(unsigned char *)(p + 0x18) = *(unsigned char *)(s + 8);
    *(M32 *)(p + 0x20) = *(M32 *)(s + 0x10);
    *(M32 *)(p + 0x40) = *(M32 *)(s + 0x30);
    if (flag != 0) {
        *(char **)(p + 0xA0) = x;
    } else {
        func_00105300(p + 0x60, x);
        *(char **)(p + 0xA0) = p + 0x60;
    }
}

void func_002DAB90(char *, int);

void func_002788D0(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 3, 3, -1, 2, 1, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_002DBCE0(char *);

void func_00278980(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002DBCE0(p);
        func_002490F0(p, 2, 0, -1, 2, 5, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        *(unsigned char *)(p + 0x3D49) = 9;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

extern char D_01CAFF0C[];

void func_00477CE0(char *, int);

char *func_00203AB0(int, int, int);

void func_002EF4D0(int, int);

void func_00204E40(char *, char *);

void func_002570E0(void) {
    void func_00128488(char *, int, int);
    char *s = *(char **)(*(char **)D_01CAFF0C + 0xC);
    func_00477CE0(s + 0x3D08, 0x3C);
    *(char **)(s + 0x3D44) = func_00203AB0(1, 1, 1);
    *(int *)(*(char **)D_01CAFF0C + 0x10) = *(int *)(s + 0x3D44);
    func_002EF4D0(*(int *)D_01CAFF0C, 1);
    if (*(char **)(s + 0x3D44) != 0) {
        func_00204E40(*(char **)(s + 0x3D44), *(char **)(*(char **)D_01CAFF0C + 4) + 0xFC);
        *(unsigned char *)(s + 0x3C79) = 1;
        *(unsigned char *)(*(char **)(s + 0x3D44) + 0x3C79) = 1;
        *(unsigned char *)(s + 0x3C6E) = 3;
    }
    func_00128488(*(char **)(s + 0x3D1C), 0, *(int *)(s + 0x3D20) * 46);
    *(unsigned char *)(s + 0x3D30) = 0;
}

int func_0021CBA0(char *);

extern int D_01DFAB80[];

extern int D_01DFAB8C[];

void func_00277280(char *p) {
    int func_002242C0(char *);
    if ((func_0021CBA0(p) & 0x1000000) || (*(unsigned char *)(p + 0x2849) == 0x11 && *(unsigned char *)(p + 0x2998) == 0xD)) {
        if ((unsigned char)func_002242C0(p) == 0) {
            D_01DFAB80[0] = D_01DFAB80[0] | 0x80000;
            D_01DFAB80[0] = D_01DFAB80[0] | 0x100000;
        } else {
            D_01DFAB8C[0] = D_01DFAB8C[0] | 0x20;
            D_01DFAB8C[0] = D_01DFAB8C[0] | 0x40;
        }
        *(unsigned char *)(p + 0x7F8B) = 0;
    }
}

char *func_00279290(char *);

void func_001A1E70(char *, int);

void func_001A2000(char *, int);

void func_00259B30(char *p) {
    unsigned char k;
    if (*(unsigned char *)(p + 0x28A0) == 0) {
        k = *(unsigned char *)(p + 0x24EF);
        if (k & 0x40) {
            switch (k & 0x3F) {
            case 0:
                func_001A1E70(func_00279290(p + 0x180), 0);
                func_001A2000(func_00279290(p + 0x180), 1);
                break;
            case 1:
                func_001A2000(func_00279290(p + 0x180), 0);
                func_001A1E70(func_00279290(p + 0x180), 1);
                break;
            }
        } else {
            func_001A1E70(func_00279290(p + 0x180), 0);
            func_001A2000(func_00279290(p + 0x180), 1);
        }
    }
}

void func_002F30C0(int, char *, char *, char *);

void func_00262CA0(char *p, unsigned char a, unsigned char k, char *d) {
    int func_002D9EB0(char *);
    func_00330B50(D_01DFABA0, 0, d, 5);
    switch (k) {
    case 0: case 1: case 2: case 3: case 4: case 6:
        if (a == 1 || (a & 1)) {
            func_002F30C0(0, *(char **)(((char **)(p + 0x13A4))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
        } else {
            func_002F30C0(3, *(char **)(((char **)(p + 0x13B4))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
        }
        break;
    case 5:
        if (a & 1) {
            func_002F30C0(1, *(char **)(((char **)(p + 0x13A4))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
        } else {
            func_002F30C0(4, *(char **)(((char **)(p + 0x13B4))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
        }
        func_00330B50(D_01DFABA0, 0xB, d, 5);
        break;
    case 7: case 8: case 9:
        if (a & 1) {
            func_002F30C0(2, *(char **)(((char **)(p + 0x13A4))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
        } else {
            func_002F30C0(5, *(char **)(((char **)(p + 0x13B4))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
        }
        break;
    }
}

void func_00269850(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x218));
        func_002490F0(p, 4, 0xA, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 4, 0x1A, -1, 0, 0, -1.0f);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0021BDB0(char *, int, int);

char *func_002D9BD0(char *, int);

void func_0023FA00(char *, float);

void func_00267270(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x2850)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x6AC));
        func_002490F0(p, 0x14, 2, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x2851) = 0;
        *(float *)(p + 0x2870) = 2.0f;
        *(unsigned char *)(p + 0x2850) = 1;
        break;
    case 1:
        func_002DB2C0(p);
        switch (*(unsigned char *)(p + 0x2851)) {
        case 0:
            *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2870) < 0.0f) {
                *(unsigned char *)(p + 0x2851) = *(unsigned char *)(p + 0x2851) + 1;
                func_002F30B0(0x53, func_002D9BD0(p, 7), p);
            }
            break;
        case 1:
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0023FA00(p, *(float *)(*(char **)(p + 0x2844) + 0x598));
            D_01DFAB78[0] = D_01DFAB78[0] | 0x80000;
            func_0021BDB0(p, 0xA, 1);
            return;
        }
        break;
    }
}

void func_004BB850(char *, char *, short);

void func_0026A6F0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x3E0));
        func_002490F0(p, 0xE, 2, -1, 2, 5, -1.0f);
        *(short *)(p + 0x2856) = 0;
        *(float *)(p + 0x2878) = 40.0f;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        *(unsigned char *)(p + 0x284D) = 0;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0xA);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            if (!(*(float *)(p + 0x2878) <= 0.0f)) {
                *(float *)(p + 0x2878) = *(float *)(p + 0x2878) - *(float *)(p + 0x10);
                if (*(float *)(p + 0x2878) <= 0.0f) {
                    *(float *)(p + 0x2878) = 0.0f;
                    *(unsigned char *)(p + 0x284D) = *(unsigned char *)(p + 0x284D) + 1;
                    func_004BB850(p, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), *(short *)(p + 0x90));
                }
            }
            break;
        case 1:
            break;
        }
        break;
    }
}

void func_0021C380(char *, int);

void func_0026C200(char *p) {
    void func_002DA3A0(char *, int);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 5, 0x13, -1, 0, 0, -1.0f);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002496D0(p);
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            func_002DBD00(p);
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x358), *(float *)(*(char **)(p + 0x2844) + 0x35C));
            func_002DBD30(p);
            func_0021C380(p, 0);
            func_0021CB50(p, 2);
            func_0021CB60(p, 1);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 2:
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), *(float *)(p + 0x74));
        }
        break;
    }
}

void func_0026F490(char *p) {
    void func_002DB2C0(char *);
    void func_002DB090(char *, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 0x10, 7, -1, 0, 0, -1.0f);
        func_002DB090(p, 0xE39, 2, *(float *)(*(char **)(p + 0x2844) + 0x490));
        func_002DBD30(p);
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x49C), *(float *)(*(char **)(p + 0x2844) + 0x4A0));
        func_002DBD00(p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 0, *(float *)(p + 0x64), -1.5f);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(float *)(p + 0x74) = -1.5f;
        }
        func_002DB940(p, *(short *)(p + 0x90), 1.0f);
        if (*(float *)(p + 0x150) < 2.0f) {
            func_002DBD30(p);
        }
        break;
    }
}

void func_0026F610(char *p) {
    void func_002DB2C0(char *);
    void func_002DB090(char *, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 0x10, 8, -1, 0, 0, -1.0f);
        func_002DB090(p, 0xE39, 2, *(float *)(*(char **)(p + 0x2844) + 0x4A4));
        func_002DBD30(p);
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x4B0), *(float *)(*(char **)(p + 0x2844) + 0x4B4));
        func_002DBD00(p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 0, *(float *)(p + 0x64), -1.5f);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(float *)(p + 0x74) = -1.5f;
        }
        func_002DB940(p, *(short *)(p + 0x90), 1.0f);
        if (*(float *)(p + 0x150) < 2.0f) {
            func_002DBD30(p);
        }
        break;
    }
}

void func_00260A70(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DB2C0(char *);
    void func_002DB090(char *, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 0xD, 7, -1, 0, 0, -1.0f);
        func_002DB090(p, 0xE39, 2, *(float *)(*(char **)(p + 0x2844) + 0xD4));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0xE4), *(float *)(*(char **)(p + 0x2844) + 0xE8));
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0xEC), *(float *)(*(char **)(p + 0x2844) + 0xF0));
        func_002DBD00(p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 0, *(float *)(p + 0x64), -1.5f);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(float *)(p + 0x74) = -1.5f;
        }
        func_002DA3A0(p, *(short *)(p + 0x90));
        if (*(float *)(p + 0x150) < 2.0f) {
            func_002DBD30(p);
        }
        break;
    }
}

void func_00260C00(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DB2C0(char *);
    void func_002DB090(char *, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 0xD, 8, -1, 0, 0, -1.0f);
        func_002DB090(p, 0xE39, 2, *(float *)(*(char **)(p + 0x2844) + 0xD8));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0xF4), *(float *)(*(char **)(p + 0x2844) + 0xF8));
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0xFC), *(float *)(*(char **)(p + 0x2844) + 0x100));
        func_002DBD00(p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), -1.5f);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(float *)(p + 0x74) = -1.5f;
        }
        func_002DA3A0(p, *(short *)(p + 0x90));
        if (*(float *)(p + 0x150) < 2.0f) {
            func_002DBD30(p);
        }
        break;
    }
}

void func_00260D90(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DB2C0(char *);
    void func_002DB090(char *, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 0xD, 9, -1, 0, 0, -1.0f);
        func_002DB090(p, 0xE39, 2, *(float *)(*(char **)(p + 0x2844) + 0xDC));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x104), *(float *)(*(char **)(p + 0x2844) + 0x108));
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x10C), *(float *)(*(char **)(p + 0x2844) + 0x110));
        func_002DBD00(p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), -1.5f);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(float *)(p + 0x74) = -1.5f;
        }
        func_002DA3A0(p, *(short *)(p + 0x90));
        if (*(float *)(p + 0x150) < 2.0f) {
            func_002DBD30(p);
        }
        break;
    }
}

void func_0026C7E0(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DB2C0(char *);
    void func_002DB090(char *, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 0xF, 4, -1, 0, 0, -1.0f);
        func_002DB090(p, 0xE39, 2, *(float *)(*(char **)(p + 0x2844) + 0x38C));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x390), *(float *)(*(char **)(p + 0x2844) + 0x394));
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x398), *(float *)(*(char **)(p + 0x2844) + 0x39C));
        func_002DBD00(p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 0, *(float *)(p + 0x64), -1.5f);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(float *)(p + 0x74) = -1.5f;
        }
        func_002DA3A0(p, *(short *)(p + 0x90));
        if (*(float *)(p + 0x150) < 2.0f) {
            func_002DBD30(p);
        }
        break;
    }
}

void func_0026C970(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DB2C0(char *);
    void func_002DB090(char *, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 0xF, 5, -1, 0, 0, -1.0f);
        func_002DB090(p, 0xE39, 2, *(float *)(*(char **)(p + 0x2844) + 0x3A0));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x3A4), *(float *)(*(char **)(p + 0x2844) + 0x3A8));
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x3AC), *(float *)(*(char **)(p + 0x2844) + 0x3B0));
        func_002DBD00(p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), -1.5f);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(float *)(p + 0x74) = -1.5f;
        }
        func_002DA3A0(p, *(short *)(p + 0x90));
        if (*(float *)(p + 0x150) < 2.0f) {
            func_002DBD30(p);
        }
        break;
    }
}

void func_0026D100(char *p) {
    int func_002242C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        if (((signed char *)(p + 0x3D4C))[*(unsigned char *)(p + 0x3D4A)] != 3) {
            func_0021B790(p, 0xA);
            return;
        }
        func_002490F0(p, 6, 4, -1, 2, 0xA, -1.0f);
        *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x644);
        *(unsigned char *)(p + 0x284C) = 1;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            if (((signed char *)(p + 0x3D4C))[*(unsigned char *)(p + 0x3D4A)] != 3) {
                func_0021B790(p, 0xA);
                return;
            }
            func_002490F0(p, 6, 4, -1, 0, 0, -1.0f);
        }
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) <= 0.0f) {
            func_0021B790(p, 0xA);
            return;
        }
        break;
    }
    if ((unsigned char)func_002242C0(p) == 1 && *(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D31) == 2) {
        func_0021B790(p, 0xA);
        return;
    }
}

void func_00260F20(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DB2C0(char *);
    void func_002DB090(char *, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 0xD, 0xA, -1, 0, 0, -1.0f);
        func_002DB090(p, 0xE39, 2, *(float *)(*(char **)(p + 0x2844) + 0xE0));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x114), *(float *)(*(char **)(p + 0x2844) + 0x118));
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x11C), *(float *)(*(char **)(p + 0x2844) + 0x120));
        func_002DBD00(p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), -1.5f);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(float *)(p + 0x74) = -1.5f;
        }
        func_002DA3A0(p, *(short *)(p + 0x90));
        if (*(float *)(p + 0x150) < 2.0f) {
            func_002DBD20(p, 0.0f, 0.0f);
        }
        break;
    }
}

void func_00269F20(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 4, 0xB, -1, 0, 0, -1.0f);
        *(short *)(p + 0x28DE) = *(short *)(p + 0x28DC);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x21C));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x3D0), *(float *)(*(char **)(p + 0x2844) + 0x3D4));
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x3D8), *(float *)(*(char **)(p + 0x2844) + 0x3DC));
        func_002DBD00(p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 0, *(float *)(p + 0x64), -1.5f);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(float *)(p + 0x74) = -1.5f;
        }
        func_002DA3A0(p, *(short *)(p + 0x28DE));
        if (*(float *)(p + 0x150) < 1.0f) {
            func_002DBD30(p);
        }
        break;
    }
}

void func_0026AAC0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x3E4));
        func_002490F0(p, 0xE, 5, -1, 2, 5, -1.0f);
        func_002F30B0(0x29, *(char **)(((char **)(p + 0x138C))[func_002D9EB0(p)] + 0x104), p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0xE, 6, -1, 2, 5, -1.0f);
            D_01DFAB74[0] = D_01DFAB74[0] | 0x200;
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0xA);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026C650(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x388));
        func_002490F0(p, 0xF, 2, -1, 0, 0, -1.0f);
        func_002F30B0(0x2A, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0xF, 3, -1, 0, 0, -1.0f);
            D_01DFAB74[0] = D_01DFAB74[0] | 0x400;
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_00275930(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DB2C0(char *);
    void func_002DB090(char *, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(short *)(p + 0x28DE) = *(short *)(p + 0x28DC);
        func_002DB090(p, 0xE39, 2, *(float *)(*(char **)(p + 0x2844) + 0x2C0));
        func_002490F0(p, 0x11, 6, -1, 2, 5, -1.0f);
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x2C4), *(float *)(*(char **)(p + 0x2844) + 0x2C8));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x2CC), *(float *)(*(char **)(p + 0x2844) + 0x2D0));
        func_002DA3A0(p, *(short *)(p + 0x28DE));
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), -1.5f);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(float *)(p + 0x74) = -1.5f;
        }
        func_002DA3A0(p, *(short *)(p + 0x28DE));
        if (*(float *)(p + 0x150) < 2.0f) {
            func_002DBD30(p);
        }
        break;
    }
}

void func_0026BE20(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 5, 0x11, -1, 0, 0, -1.0f);
        *(short *)(p + 0x28DE) = *(short *)(p + 0x28DC);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x33C));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x340), *(float *)(*(char **)(p + 0x2844) + 0x344));
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x348), *(float *)(*(char **)(p + 0x2844) + 0x34C));
        func_002DBD00(p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), -1.5f);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(float *)(p + 0x74) = -1.5f;
        }
        func_002DA3A0(p, *(short *)(p + 0x28DE));
        if (*(float *)(p + 0x150) < 2.0f) {
            func_002DBD20(p, 0.0f, 0.0f);
        }
        break;
    }
}

void func_004B8980(char *, char *, short);

void func_0026C4A0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x384));
        func_002490F0(p, 0xF, 1, -1, 0, 0, -1.0f);
        func_002F30B0(0x59, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        *(float *)(p + 0x2878) = 40.0f;
        *(unsigned char *)(p + 0x284D) = 0;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB78[0] = D_01DFAB78[0] | 0x2000000;
            func_0021B790(p, 5);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            if (!(*(float *)(p + 0x2878) <= 0.0f)) {
                *(float *)(p + 0x2878) = *(float *)(p + 0x2878) - *(float *)(p + 0x10);
                if (*(float *)(p + 0x2878) <= 0.0f) {
                    *(float *)(p + 0x2878) = 0.0f;
                    *(unsigned char *)(p + 0x284D) = *(unsigned char *)(p + 0x284D) + 1;
                    func_004B8980(p, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), *(short *)(p + 0x90));
                }
            }
            break;
        case 1:
            break;
        }
        break;
    }
}

int func_00249E20(char *, int);

void func_0026A280(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x3E8));
        func_0025EE70(p, 8, *(float *)(*(char **)(p + 0x2844) + 0x4F4), *(float *)(*(char **)(p + 0x2844) + 0x4F8),
                      *(float *)(*(char **)(p + 0x2844) + 0x4FC));
        func_002490F0(p, 0xE, 0, -1, 2, 3, -1.0f);
        *(unsigned char *)(p + 0x2866) = 0;
        *(unsigned char *)(p + 0x2867) = 1;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_0025EE90(p) == 0) {
            *(unsigned char *)(p + 0x2866) = 1;
        }
        func_002496D0(p);
        if ((unsigned char)func_00249E20(p, 1) == 4) {
            if (*(unsigned char *)(p + 0x2866) == 0) {
                func_002490F0(p, 0xE, 0xA, -1, 0, 0, 19.0f);
            } else {
                func_002490F0(p, 0xE, 1, -1, 0, 0, -1.0f);
                *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
                break;
            }
            *(unsigned char *)(p + 0x2867) = 0;
        }
        if (*(unsigned char *)(p + 0x2867) == 1) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026CB00(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    void func_002DB090(char *, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 0xF, 6, -1, 0, 0, -1.0f);
        func_002DB090(p, 0xE39, 2, *(float *)(*(char **)(p + 0x2844) + 0x3B4));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x3B8), *(float *)(*(char **)(p + 0x2844) + 0x3BC));
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x3C0), *(float *)(*(char **)(p + 0x2844) + 0x3C4));
        func_002DBD00(p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        func_002496D0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021CB50(p, 1);
            func_0021CB60(p, 2);
            func_0021CBB0(p, 1);
            func_002490F0(p, 0xF, 7, -1, 0, 0, -1.0f);
            func_002F30B0(0x4A, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
            break;
        }
        func_002DA3A0(p, *(short *)(p + 0x90));
        if (*(float *)(p + 0x150) < 2.0f) {
            func_002DBD30(p);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB78[0] = D_01DFAB78[0] | 0x400;
            func_0021B790(p, 5);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_0026F280(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x484));
        if (*(unsigned short *)(p + 0x24C6) != 0x604) {
            func_002490F0(p, 0x10, 0, -1, 0, 0, -1.0f);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002490F0(p, 0x10, 1, -1, 0, 0, -1.0f);
            *(unsigned char *)(p + 0x284C) = 2;
        }
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0026D0B0(p);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 2:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0x10, 0x14, -1, 0, 0, 21.0f);
            *(unsigned char *)(p + 0x2866) = 0;
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0026D0B0(p);
            break;
        }
        if (*(unsigned char *)(p + 0x2866) == 1) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        *(unsigned char *)(p + 0x2866) = 1;
        break;
    }
}

void func_0025E210(char *p) {
    void func_002DA3A0(char *, int);
    int func_002D9EB0(char *);
    int func_002242C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 3, 0xD, -1, 0, 0, -1.0f);
        if ((unsigned char)func_002242C0(p) == 0) {
            func_002F30C0(0xD, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
        } else {
            func_002F30C0(0x63, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
        }
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002496D0(p);
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            func_002DBD00(p);
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x44), *(float *)(*(char **)(p + 0x2844) + 0x48));
            func_002DBD30(p);
            func_0021C380(p, 0);
            func_0021CB50(p, 2);
            func_0021CB60(p, 1);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 2:
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB70[0] = D_01DFAB70[0] | 0x2000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 8;
            }
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), *(float *)(p + 0x74));
        }
        break;
    }
}

void func_0026C200(char *p);

void func_0026BFC0(char *p) {
    unsigned short func_001AE770(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    int func_002242C0(char *);
    float func_001324B0(char *, char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 5, 0x12, -1, 0, 0, -1.0f);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x350));
        if ((unsigned char)func_002242C0(p) == 0) {
            func_002F30B0(0x49, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        } else {
            func_002F30B0(0x7C, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        }
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB78[0] = D_01DFAB78[0] | 0x200;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x10000000;
            }
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1 &&
            (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x10)])) {
            *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
            *(unsigned char *)(p + 0x2998) = 0x3F;
            func_0021C7E0(p, 0x11, 0, -1);
            func_0026C200(p);
            break;
        }
        if (*(unsigned char *)(p + 0x3B9D) == 0 ||
            (*(unsigned char *)(p + 0x3B9D) == 1 && !(func_001324B0(p + 0x50, p + 0x3C40) <= *(float *)(*(char **)(p + 0x2844) + 0x354)))) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

static inline signed char free_slot(char *p) {
    unsigned int i;
    for (i = 0; i < 5; i++) {
        if (*(signed char *)(p + i + 0x3D4C) == 0) {
            return (signed char)i;
        }
    }
    return -1;
}

static inline char *slot_obj(char *p) {
    signed char k = free_slot(p);
    return k != -1 ? ((char **)(p + 0x3D54))[k] : 0;
}

void func_0025FEC0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    char *e;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x1EC));
        func_002490F0(p, 0xD, 0xC, -1, 2, 3, -1.0f);
        func_0025EE70(p, 3, *(float *)(*(char **)(p + 0x2844) + 0x1F0), *(float *)(*(char **)(p + 0x2844) + 0x1F4),
                      *(float *)(*(char **)(p + 0x2844) + 0x1F8));
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        *(unsigned char *)(p + 0x284D) = 0;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_0025EE90(p) == 0) {
            func_002490F0(p, 0xD, 0xD, -1, 2, 3, -1.0f);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
            break;
        }
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            if (*(unsigned char *)(p + 0x24D5) == 1) {
                *(float *)(p + 0x2880) = 0.0f;
                *(unsigned char *)(p + 0x284D) = *(unsigned char *)(p + 0x284D) + 1;
            }
            break;
        case 1:
            e = slot_obj(p);
            if (e != 0) {
                e[0xD0] = 1;
                *(float *)(p + 0x2880) = *(float *)(p + 0x2880) - 0.6981317f * *(float *)(p + 0x10);
                *(float *)(e + 0x80) = 0.0f;
                *(float *)(e + 0x88) = 0.0f;
                *(float *)(e + 0x84) = *(float *)(p + 0x2880);
            } else {
                func_0021B790(p, 5);
            }
            break;
        }
        if ((unsigned char)func_002496D0(p) != 4) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        }
        break;
    }
}

void func_0025F810(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 3, 0x34, -1, 0, 0, -1.0f);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x9C));
        *(float *)(p + 0x2870) = 10.0f;
        *(unsigned char *)(p + 0x2866) = 1;
        *(short *)(p + 0x2856) = 2;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if (!(*(float *)(p + 0x2870) <= 0.0f)) {
            *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2870) <= 0.0f) {
                func_002F30B0(0xA, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            }
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            if (--*(short *)(p + 0x2856) <= 0) {
                func_002490F0(p, 3, 0x35, -1, 0, 0, -1.0f);
                D_01DFAB70[0] = D_01DFAB70[0] | 0x400;
                *(float *)(p + 0x29D4) = *(float *)(*(char **)(p + 0x2844) + 0xA0);
                *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
            } else {
                func_002490F0(p, 3, 0x34, -1, 0, 0, 104.0f);
                *(unsigned char *)(p + 0x2866) = 0;
            }
        }
        if (*(unsigned char *)(p + 0x2866) == 1) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB70[0] = D_01DFAB70[0] | 0x400;
            func_0021B790(p, 0xA);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0025F200(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 0xD, 0xF, -1, 2, 5, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0xA);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0025CE80(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0));
        func_002490F0(p, 3, 3, -1, 2, 5, -1.0f);
        *(unsigned char *)(p + 0x2866) = 1;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0xA);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_002699B0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x220));
        func_002490F0(p, 4, 0x1B, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 4, 0x1D, -1, 0, 0, -1.0f);
            func_0025EE70(p, 6, *(float *)(*(char **)(p + 0x2844) + 0x66C), *(float *)(*(char **)(p + 0x2844) + 0x670),
                          *(float *)(*(char **)(p + 0x2844) + 0x674));
            *(unsigned char *)(p + 0x2867) = 0;
            *(unsigned char *)(p + 0x2866) = 0;
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        if ((unsigned char)func_0025EE90(p) == 0) {
            *(unsigned char *)(p + 0x2867) = 1;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned char *)(p + 0x2867) == 1) {
                func_002490F0(p, 4, 0x1A, -1, 0, 0, -1.0f);
                *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
            } else {
                func_002490F0(p, 4, 0x1F, -1, 0, 0, -1.0f);
                *(unsigned char *)(p + 0x2866) = 0;
            }
        } else {
            if (*(unsigned char *)(p + 0x2866) == 1) {
                func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
            }
            *(unsigned char *)(p + 0x2866) = 1;
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0xA);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0026A480(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DB2C0(char *);
    void func_002DB090(char *, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 0xE, 7, -1, 0, 0, -1.0f);
        *(short *)(p + 0x28DE) = *(short *)(p + 0x28DC);
        func_0025EE70(p, 9, *(float *)(*(char **)(p + 0x2844) + 0x500), *(float *)(*(char **)(p + 0x2844) + 0x504),
                      *(float *)(*(char **)(p + 0x2844) + 0x508));
        func_002DB090(p, 0xE39, 2, *(float *)(*(char **)(p + 0x2844) + 0x3EC));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x3F0), *(float *)(*(char **)(p + 0x2844) + 0x3F4));
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x3F8), *(float *)(*(char **)(p + 0x2844) + 0x3FC));
        func_002DBD00(p);
        *(unsigned char *)(p + 0x2866) = 0;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_0025EE90(p) == 0) {
            *(unsigned char *)(p + 0x2866) = 1;
        }
        func_002496D0(p);
        if ((unsigned char)func_00249E20(p, 1) == 4) {
            if (*(unsigned char *)(p + 0x2866) == 0) {
                func_002490F0(p, 0xE, 0xB, -1, 0, 0, 19.0f);
            } else {
                func_002490F0(p, 0xE, 8, -1, 0, 0, -1.0f);
                *(float *)(p + 0x74) = -1.5f;
                *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
            }
        } else {
            func_002DA3A0(p, *(short *)(p + 0x28DE));
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), -1.5f);
            return;
        }
        func_002DA3A0(p, *(short *)(p + 0x28DE));
        break;
    }
    if (*(float *)(p + 0x150) < 2.0f) {
        func_002DBD30(p);
    }
    if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
        func_0021BFC0(p);
    }
}

extern unsigned char D_01CAFF3E[];

void func_0025E210(char *p);

void func_0025DF60(char *p) {
    unsigned short func_001AE770(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    int func_002242C0(char *);
    float func_001324B0(char *, char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 3, 0xB, -1, 2, 3, -1.0f);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x4C));
        if ((unsigned char)func_002242C0(p) == 0) {
            func_002F30C0(0xC, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
        } else {
            func_002F30C0(0x62, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
        }
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB70[0] = D_01DFAB70[0] | 0x1000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 4;
            }
            func_0021B790(p, 0xA);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1 &&
            ((*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x10)]) ||
             (D_01CAFF3E[0] == 1 && *(unsigned char *)(p + 0x4118) == 1))) {
            *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
            *(unsigned char *)(p + 0x2998) = 0xB;
            func_0021C7E0(p, 0x11, 0, -1);
            func_0025E210(p);
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB70[0] = D_01DFAB70[0] | 0x1000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 4;
            }
            return;
        }
        if (*(unsigned char *)(p + 0x3B9D) == 0 ||
            (*(unsigned char *)(p + 0x3B9D) == 1 && !(func_001324B0(p + 0x50, p + 0x3C40) <= *(float *)(*(char **)(p + 0x2844) + 0x50)))) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_00275390(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x29C));
        func_002490F0(p, 0x11, 2, -1, 0, 0, -1.0f);
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x2A0), *(float *)(*(char **)(p + 0x2844) + 0x2A4));
        func_002DBD30(p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x2A8), *(float *)(*(char **)(p + 0x2844) + 0x2AC));
            func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x2B0), 0.0f);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 2:
        func_002496D0(p);
        if (func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_002490F0(p, 0x11, 1, -1, 0, 0, 29.0f);
            func_0021CB60(p, 2);
            func_0021CB50(p, 1);
            func_0021CBB0(p, 1);
            *(unsigned char *)(p + 0x284D) = 0;
            *(float *)(p + 0x2878) = 6.0f;
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DA3A0(p, *(short *)(p + 0x28DC));
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            D_01DFAB70[0] = D_01DFAB70[0] | 0x40000;
            D_01DFAB74[0] = D_01DFAB74[0] | 0x1000000;
            break;
        }
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            *(float *)(p + 0x2878) = *(float *)(p + 0x2878) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2878) < 0.0f) {
                *(unsigned char *)(p + 0x24F0) = ++*(unsigned char *)(p + 0x24F0) % 2;
                func_00105300(p + *(unsigned char *)(p + 0x24F0) * 64 + 0x27B0, *(char **)(((char **)(p + 0x13B4))[func_002D9EB0(p)] + 0x104));
                func_002F30C0(0x12, p + *(unsigned char *)(p + 0x24F0) * 64 + 0x27B0, p + 0x26C0, p);
                *(unsigned char *)(p + 0x284D) = *(unsigned char *)(p + 0x284D) + 1;
            }
            break;
        case 1:
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

void func_00273E10(char *);

void func_00273B00(char *p) {
    void func_002DA3A0(char *, int);
    int func_002D9EB0(char *);
    int func_002242C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 7, 0xF, -1, 0, 0, -1.0f);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        if ((unsigned char)func_002242C0(p) == 0) {
            func_002F30B0(0x30, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        } else {
            func_002F30B0(0x74, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        }
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002496D0(p);
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        if ((*(unsigned char *)(p + 0x24D5) == 2 && *(unsigned char *)(p + 0x299B) != 0) ||
            (D_01CAFF3E[0] == 1 && *(unsigned char *)(p + 0x4118) == 2)) {
            *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
            *(unsigned char *)(p + 0x2998) = 0x78;
            func_0021C7E0(p, 0x11, 0, -1);
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x10000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x100000;
            }
            func_0021CB50(p, 2);
            func_0021CB60(p, 1);
            func_0021C380(p, 0);
            func_00273E10(p);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            func_002DBD00(p);
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x284), *(float *)(*(char **)(p + 0x2844) + 0x288));
            func_002DBD30(p);
            func_0021CB50(p, 2);
            func_0021CB60(p, 1);
            func_0021C380(p, 0);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 2:
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x10000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x100000;
            }
            func_0021C100(p, 8, 0xA, *(float *)(p + 0x64), *(float *)(p + 0x74));
        }
        break;
    }
}

void func_0021CBC0(char *, int);

void func_00269C10(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x224));
        func_002490F0(p, 4, 0x13, -1, 0, 0, -1.0f);
        if (*(unsigned char *)(p + 0x2998) == 0x26) {
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x648);
        } else {
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x64C);
        }
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x554), *(float *)(*(char **)(p + 0x2844) + 0x558));
            func_002DBD00(p);
            func_0021CB60(p, 1);
            func_0021CB50(p, 2);
            func_0021CBC0(p, 1);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), *(float *)(p + 0x2870));
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned char *)(p + 0x2998) == 0x26) {
                func_002490F0(p, 4, 0x1E, -1, 0, 0, -1.0f);
                *(float *)(p + 0x2438) = *(float *)(*(char **)(p + 0x2844) + 0x400);
                *(unsigned short *)(p + 0x24CC) = *(unsigned short *)(p + 0x24C6);
            } else {
                func_002490F0(p, 4, 0x19, -1, 0, 0, -1.0f);
            }
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DB940(p, *(short *)(p + 0x90), *(float *)(p + 0x2870));
        }
        break;
    case 3:
        func_002496D0(p);
        if ((unsigned char)func_00249E20(p, 1) == 4 && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_002490F0(p, 4, 0x18, -1, 0, 0, 61.0f);
            func_0021CB60(p, 2);
            func_0021CB50(p, 1);
            func_0021CBB0(p, 1);
            *(unsigned char *)(p + 0x2866) = 0;
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DA3A0(p, *(short *)(p + 0x90));
        }
        break;
    case 4:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x2866) == 1) {
            func_002DBAA0(p, *(short *)(p + 0x90), *(float *)(p + 0x2870));
        }
        *(unsigned char *)(p + 0x2866) = 1;
        break;
    }
}

void func_00273E10(char *p) {
    void func_002DA3A0(char *, int);
    int func_002D9EB0(char *);
    int func_002242C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        if (*(unsigned char *)(p + 0x299B) == 1) {
            func_002490F0(p, 7, 0x10, -1, 0, 0, -1.0f);
            *(short *)(p + 0x2856) = 0;
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x53C), *(float *)(*(char **)(p + 0x2844) + 0x540));
        } else {
            func_002490F0(p, 7, 0x3A, -1, 0, 0, -1.0f);
            *(short *)(p + 0x2856) = 3;
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x54C), *(float *)(*(char **)(p + 0x2844) + 0x550));
        }
        func_002DBD00(p);
        func_002DBD30(p);
        if ((unsigned char)func_002242C0(p) == 0) {
            func_002F30B0(0x3C, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        } else {
            func_002F30B0(0x7B, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        }
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002496D0(p);
        if (!(*(float *)(p + 0x64) <= 0.0f)) {
            func_002DA3A0(p, *(short *)(p + 0x90));
        }
        if ((unsigned char)func_00249E20(p, 1) == 4) {
            if (--*(short *)(p + 0x2856) < 0) {
                func_002490F0(p, 7, 0x11, -1, 0, 0, -1.0f);
                if ((unsigned char)func_002242C0(p) == 0) {
                    D_01DFAB74[0] = D_01DFAB74[0] | 0x10000000;
                } else {
                    D_01DFAB7C[0] = D_01DFAB7C[0] | 0x8000000;
                }
                *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
            } else if (*(unsigned char *)(p + 0x299B) == 1) {
                func_002490F0(p, 7, 0x3B, -1, 0, 0, 45.0f);
            } else {
                func_002490F0(p, 7, 0x3C, -1, 0, 0, 45.0f);
            }
        }
        break;
    case 2:
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        func_002DA3A0(p, *(short *)(p + 0x90));
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), *(float *)(p + 0x74));
            return;
        }
        break;
    }
}

void func_00275AC0(char *p) {
    void func_002DA3A0(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x2B4));
        func_002490F0(p, 0x11, 3, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x299D) = 0;
        *(unsigned char *)(p + 0x2866) = 0;
        func_002F30B0(0x2B, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB74[0] = D_01DFAB74[0] | 0x800;
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x2866) == 0 && 80.0f <= func_00249DD0(p, 1)) {
            func_002490F0(p, 0x11, 3, -1, 0, 0, 80.0f);
            *(unsigned char *)(p + 0x2866) = 1;
        }
        if (*(unsigned char *)(p + 0x24D5) != 0 && *(unsigned char *)(p + 0x299D) != 0) {
            func_002490F0(p, 0x11, 7, -1, 0, 0, -1.0f);
            func_002DBD00(p);
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x2B8), *(float *)(*(char **)(p + 0x2844) + 0x2BC));
            func_002DBD30(p);
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x4C4));
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
            func_0021CBC0(p, 1);
            func_0021CB50(p, 2);
            func_0021CB60(p, 1);
            func_0021C380(p, 0);
            D_01DFAB74[0] = D_01DFAB74[0] | 0x800;
            func_002F30B0(0x2C, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        func_002DB2C0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB74[0] = D_01DFAB74[0] | 0x1000;
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), *(float *)(p + 0x74));
        }
        break;
    }
}

void func_002DB880(char *, short);

void func_0023D5B0(char *);

static inline unsigned char both_on(char *p) {
    if (*(unsigned char *)(p + 0x28AE) == 1 && *(unsigned char *)(p + 0x28A9) == 1) {
        return 1;
    }
    return 0;
}

void func_002701B0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    int func_002242C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(signed char *)(p + 0x3D49) = ((signed char *)(p + 0x3D4C))[*(unsigned char *)(p + 0x3D4A)];
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x420));
        func_002490F0(p, 6, 0x19, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 6, 0x1A, -1, 0, 0, -1.0f);
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x428), 0.0f);
            func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x42C), 0.0f);
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x424);
            if ((unsigned char)func_002242C0(p) == 0) {
                func_002F30B0(0x31, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            } else {
                func_002F30B0(0x75, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            }
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DAB90(p, 3);
        }
        break;
    case 2:
        func_002496D0(p);
        func_002DB880(p, *(short *)(p + 0x28DC));
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if ((unsigned char)func_00249E20(p, 1) == 4) {
            if (*(float *)(p + 0x2870) < 0.0f) {
                func_002490F0(p, 6, 0x1B, -1, 0, 0, -1.0f);
                *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
            } else {
                func_002490F0(p, 6, 0x1A, -1, 0, 0, -1.0f);
            }
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x20000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x200000;
            }
            if ((unsigned char)func_0023DF80(p, 0.0f) == 1) {
                *(float *)(p + 0x54) = 5.0f + *(float *)(p + 0x2924);
            }
            if (both_on(p) == 0) {
                func_0023D5B0(p);
            } else {
                func_0021B790(p, 0xA);
            }
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_00272280(char *p) {
    unsigned short func_001AE770(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x244));
        func_002490F0(p, 7, 5, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x2867) = 0;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1 && (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x10)])) {
            func_002490F0(p, 7, 0x22, -1, 2, 3, -1.0f);
            *(unsigned char *)(p + 0x2866) = 0;
            *(float *)(p + 0x2874) = 0.0f;
            *(short *)(p + 0x2856) = 0;
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 2:
        *(float *)(p + 0x2874) = *(float *)(p + 0x2874) + *(float *)(p + 0x10);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 7, 0x22, -1, 0, 0, 144.0f);
            *(short *)(p + 0x2856) = 1;
        }
        if (*(unsigned char *)(p + 0x2867) == 0 && 100.0f <= func_00249DD0(p, 1)) {
            func_002490F0(p, 7, 0x22, -1, 0, 0, 100.0f);
            *(unsigned char *)(p + 0x2867) = 1;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(unsigned char *)(p + 0x2866) = 1;
        }
        if (*(unsigned char *)(p + 0x2866) == 1 && !(*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x10)])) {
            if (*(float *)(p + 0x2874) < *(float *)(*(char **)(p + 0x2844) + 0x50C)) {
                func_002490F0(p, 7, 5, -1, 0, 0, 64.0f);
            } else if (*(short *)(p + 0x2856) == 0) {
                func_002490F0(p, 7, 0x2D, -1, 0, 0, 64.0f);
            } else {
                func_002490F0(p, 7, 0x2E, -1, 0, 0, 64.0f);
            }
            *(unsigned char *)(p + 0x2866) = 0;
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x25C));
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 3:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x2866) == 1) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        *(unsigned char *)(p + 0x2866) = 1;
        break;
    }
}

void func_00272C70(char *p) {
    unsigned short func_001AE770(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x250));
        func_002490F0(p, 7, 9, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x2867) = 0;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1 && (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x10)])) {
            func_002490F0(p, 7, 0x1C, -1, 2, 3, -1.0f);
            *(unsigned char *)(p + 0x2866) = 0;
            *(float *)(p + 0x2874) = 0.0f;
            *(short *)(p + 0x2856) = 0;
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 2:
        func_002DB2C0(p);
        *(float *)(p + 0x2874) = *(float *)(p + 0x2874) + *(float *)(p + 0x10);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 7, 0x1C, -1, 0, 0, 253.0f);
            *(short *)(p + 0x2856) = 1;
        }
        if (*(unsigned char *)(p + 0x2867) == 0 && 180.0f <= func_00249DD0(p, 1)) {
            func_002490F0(p, 7, 0x1C, -1, 0, 0, 180.0f);
            *(unsigned char *)(p + 0x2867) = 1;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(unsigned char *)(p + 0x2866) = 1;
        }
        if (*(unsigned char *)(p + 0x2866) == 1 && !(*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x10)])) {
            if (*(float *)(p + 0x2874) < *(float *)(*(char **)(p + 0x2844) + 0x50C)) {
                func_002490F0(p, 7, 9, -1, 0, 0, 154.0f);
            } else if (*(short *)(p + 0x2856) == 0) {
                func_002490F0(p, 7, 0x31, -1, 0, 0, 154.0f);
            } else {
                func_002490F0(p, 7, 0x32, -1, 0, 0, 154.0f);
            }
            *(unsigned char *)(p + 0x2866) = 0;
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x268));
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 3:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x2866) == 1) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        *(unsigned char *)(p + 0x2866) = 1;
        break;
    }
}

void func_004BAD60(char *, char *, short, int);

void func_00274B60(char *p) {
    unsigned short func_001AE770(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x294));
        func_002490F0(p, 0x11, 0, -1, 2, 3, -1.0f);
        func_002F30B0(0x32, *(char **)(((char **)(p + 0x13B4))[func_002D9EB0(p)] + 0x104), p);
        *(short *)(p + 0x2856) = 0;
        *(float *)(p + 0x2874) = 0.0f;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB74[0] = D_01DFAB74[0] | 0x40000;
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1 && (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x20)])) {
            func_002490F0(p, 0x11, 8, -1, 2, 3, -1.0f);
            *(unsigned char *)(p + 0x2866) = 0;
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 2) {
            func_004BAD60(p, *(char **)(((char **)(p + 0x13B4))[func_002D9EB0(p)] + 0x104), *(short *)(p + 0x90), 0);
            D_01DFAB74[0] = D_01DFAB74[0] | 0x40000;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0x11, 8, -1, 0, 0, 96.0f);
            *(short *)(p + 0x2856) = 2;
        }
        *(float *)(p + 0x2874) = *(float *)(p + 0x2874) + *(float *)(p + 0x10);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(unsigned char *)(p + 0x2866) = 1;
        }
        if (*(unsigned char *)(p + 0x2866) == 1 && !(*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x20)])) {
            func_002490F0(p, 0x11, 0, -1, 2, 5, 25.0f);
            if (!(*(float *)(p + 0x2874) <= *(float *)(*(char **)(p + 0x2844) + 0x50C)) && *(short *)(p + 0x2856) == 0) {
                *(short *)(p + 0x2856) = 1;
            }
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB74[0] = D_01DFAB74[0] | 0x40000;
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 2) {
            func_004BAD60(p, *(char **)(((char **)(p + 0x13B4))[func_002D9EB0(p)] + 0x104), *(short *)(p + 0x90), *(signed char *)(p + 0x2856));
            D_01DFAB74[0] = D_01DFAB74[0] | 0x40000;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

void func_00274F20(char *p) {
    unsigned short func_001AE770(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x298));
        func_002490F0(p, 0x11, 1, -1, 2, 3, -1.0f);
        *(float *)(p + 0x2874) = 0.0f;
        *(short *)(p + 0x2856) = 0;
        *(unsigned char *)(p + 0x284D) = 0;
        *(float *)(p + 0x2878) = 35.0f;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            *(float *)(p + 0x2878) = *(float *)(p + 0x2878) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2878) < 0.0f) {
                func_002F30C0(0x12, *(char **)(((char **)(p + 0x13B4))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
                *(unsigned char *)(p + 0x284D) = *(unsigned char *)(p + 0x284D) + 1;
            }
            break;
        case 1:
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB70[0] = D_01DFAB70[0] | 0x40000;
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1 && (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x20)])) {
            func_002490F0(p, 0x11, 9, -1, 2, 3, -1.0f);
            *(unsigned char *)(p + 0x2866) = 0;
            *(unsigned char *)(p + 0x284C) = 2;
            D_01DFAB70[0] = D_01DFAB70[0] | 0x40000;
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 2:
        *(float *)(p + 0x2874) = *(float *)(p + 0x2874) + *(float *)(p + 0x10);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0x11, 9, -1, 0, 0, 108.0f);
            *(short *)(p + 0x2856) = 2;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(unsigned char *)(p + 0x2866) = 1;
        }
        if (*(unsigned char *)(p + 0x2866) == 1 && !(*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x20)])) {
            if (*(float *)(p + 0x2874) < *(float *)(*(char **)(p + 0x2844) + 0x50C)) {
                func_002490F0(p, 0x11, 1, -1, 0, 0, 28.0f);
            } else if (*(short *)(p + 0x2856) == 0) {
                func_002490F0(p, 0x11, 0xA, -1, 0, 0, 28.0f);
            } else {
                func_002490F0(p, 0x11, 0xB, -1, 0, 0, 28.0f);
            }
            *(unsigned char *)(p + 0x284D) = 0;
            *(float *)(p + 0x2878) = 7.0f;
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            D_01DFAB70[0] = D_01DFAB70[0] | 0x40000;
            break;
        }
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            *(float *)(p + 0x2878) = *(float *)(p + 0x2878) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2878) < 0.0f) {
                func_002F30C0(0x12, *(char **)(((char **)(p + 0x13B4))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
                *(unsigned char *)(p + 0x284D) = *(unsigned char *)(p + 0x284D) + 1;
            }
            break;
        case 1:
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

void func_00272630(char *p) {
    unsigned short func_001AE770(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    int func_002242C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x24C));
        func_002490F0(p, 7, 7, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x2867) = 0;
        *(unsigned char *)(p + 0x2868) = 0;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 7, 8, -1, 0, 0, -1.0f);
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x80000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x400000;
            }
            *(unsigned char *)(p + 0x284C) = 4;
            break;
        }
        if (*(unsigned char *)(p + 0x2868) == 0 && 76.0f <= func_00249DD0(p, 1)) {
            if ((unsigned char)func_002242C0(p) == 0) {
                func_002F30B0(0x33, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            } else {
                func_002F30B0(0x76, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            }
            *(unsigned char *)(p + 0x2868) = 1;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1 && (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x10)])) {
            func_002490F0(p, 7, 0x1B, -1, 2, 3, -1.0f);
            *(unsigned char *)(p + 0x2866) = 0;
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x80000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x400000;
            }
            *(float *)(p + 0x2874) = 0.0f;
            *(short *)(p + 0x2856) = 0;
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 2:
        func_002DB2C0(p);
        *(float *)(p + 0x2874) = *(float *)(p + 0x2874) + *(float *)(p + 0x10);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 7, 0x1B, -1, 0, 0, 158.0f);
            *(short *)(p + 0x2856) = 1;
        }
        if (*(unsigned char *)(p + 0x2867) == 0 && 110.0f <= func_00249DD0(p, 1)) {
            func_002490F0(p, 7, 0x1B, -1, 0, 0, 110.0f);
            *(unsigned char *)(p + 0x2867) = 1;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(unsigned char *)(p + 0x2866) = 1;
        }
        if (*(unsigned char *)(p + 0x2866) == 1 && !(*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x10)])) {
            if (*(float *)(p + 0x2874) < *(float *)(*(char **)(p + 0x2844) + 0x50C)) {
                func_002490F0(p, 7, 7, -1, 0, 0, 84.0f);
            } else if (*(short *)(p + 0x2856) == 0) {
                func_002490F0(p, 7, 0x2F, -1, 0, 0, 84.0f);
            } else {
                func_002490F0(p, 7, 0x30, -1, 0, 0, 84.0f);
            }
            *(unsigned char *)(p + 0x2866) = 0;
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x264));
            if ((unsigned char)func_002242C0(p) == 0) {
                func_002F30B0(0x33, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            } else {
                func_002F30B0(0x76, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            }
            *(unsigned char *)(p + 0x284C) = 3;
        }
        break;
    case 3:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 7, 8, -1, 0, 0, -1.0f);
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x80000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x400000;
            }
            *(unsigned char *)(p + 0x284C) = 4;
            break;
        }
        if (*(unsigned char *)(p + 0x2866) == 1) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        *(unsigned char *)(p + 0x2866) = 1;
        break;
    case 4:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

void func_00273B00(char *p);

void func_002733B0(char *p) {
    unsigned short func_001AE770(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    int func_002242C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x27C));
        func_002490F0(p, 7, 0xE, -1, 2, 3, -1.0f);
        *(unsigned char *)(p + 0x2866) = 1;
        *(float *)(p + 0x2870) = 23.0f;
        *(unsigned char *)(p + 0x299B) = 0;
        *(unsigned char *)(p + 0x284D) = 0;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2870) < 0.0f) {
                if ((unsigned char)func_002242C0(p) == 0) {
                    func_002F30B0(0x2F, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
                } else {
                    func_002F30B0(0x73, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
                }
                *(unsigned char *)(p + 0x284D) = *(unsigned char *)(p + 0x284D) + 1;
            }
            break;
        case 1:
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x8000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x80000;
            }
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1 && (D_01CAFF3E[0] != 1 || *(unsigned char *)(p + 0x4118) == 0) &&
            (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x10)])) {
            func_002490F0(p, 7, 0x1D, -1, 2, 3, -1.0f);
            *(unsigned char *)(p + 0x2866) = 0;
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x8000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x80000;
            }
            *(float *)(p + 0x2874) = 0.0f;
            *(unsigned char *)(p + 0x2868) = 0;
            *(unsigned char *)(p + 0x2867) = 0;
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        if (*(unsigned char *)(p + 0x2998) == 0x76 && *(unsigned char *)(p + 0x24D5) == 2 &&
            ((*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x10)]) ||
             (D_01CAFF3E[0] == 1 && *(unsigned char *)(p + 0x4118) != 0))) {
            *(unsigned char *)(p + 0x4117) = 0x77;
            *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
            *(unsigned char *)(p + 0x2998) = 0x77;
            func_0021C7E0(p, 0x11, 0, -1);
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x8000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x80000;
            }
            func_00273B00(p);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 2:
        func_002DB2C0(p);
        *(float *)(p + 0x2874) = *(float *)(p + 0x2874) + *(float *)(p + 0x10);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 7, 0x1D, -1, 0, 0, 99.0f);
            *(unsigned char *)(p + 0x2868) = 1;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(unsigned char *)(p + 0x2867) = 1;
        }
        if (*(unsigned char *)(p + 0x2867) == 1 && !(*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x10)])) {
            if (*(float *)(p + 0x2874) < *(float *)(*(char **)(p + 0x2844) + 0x50C)) {
                func_002490F0(p, 7, 0xE, -1, 0, 0, 23.0f);
            } else if (*(unsigned char *)(p + 0x2868) == 0) {
                func_002490F0(p, 7, 0x33, -1, 0, 0, 23.0f);
                *(unsigned char *)(p + 0x299B) = 1;
            } else {
                func_002490F0(p, 7, 0x34, -1, 0, 0, 23.0f);
                *(unsigned char *)(p + 0x299B) = 2;
            }
            *(unsigned char *)(p + 0x2866) = 0;
            if ((unsigned char)func_002242C0(p) == 0) {
                func_002F30B0(0x2F, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            } else {
                func_002F30B0(0x73, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            }
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x280));
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 3:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x8000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x80000;
            }
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x2998) == 0x76 && *(unsigned char *)(p + 0x24D5) == 2 &&
            (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x10)])) {
            *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
            *(unsigned char *)(p + 0x2998) = 0x77;
            func_0021C7E0(p, 0x11, 0, -1);
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x8000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x80000;
            }
            func_00273B00(p);
            break;
        }
        if (*(unsigned char *)(p + 0x2866) == 1) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        *(unsigned char *)(p + 0x2866) = 1;
        break;
    }
}

void func_004D86E0(char *, float *, float *);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define VMOVE30(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_00270800(char *p, int sel) {
    int func_002D9EB0(char *);
    float func_00131BA0(int);
    float func_00131C20(int);
    float a[4];
    float b[4];
    char *s;
    if (sel != 0) {
        s = *(char **)(((char **)(p + 0x13A4))[func_002D9EB0(p)] + 0x104);
        VMOVE30(a, s);
    } else {
        s = *(char **)(((char **)(p + 0x13B4))[func_002D9EB0(p)] + 0x104);
        VMOVE30(a, s);
    }
    a[3] = 1.0f;
    if (*(unsigned char *)(p + 0x3B9D) == 1) {
        QCOPY(b, p + 0x3C40);
        b[3] = 1.0f;
    } else {
        b[0] = a[0] + 2000.0f * func_00131BA0(*(short *)(p + 0x90));
        b[1] = a[1] - 2000.0f * func_00131BA0(0x2AAB);
        b[2] = a[2] + 2000.0f * func_00131C20(*(short *)(p + 0x90));
        b[3] = 1.0f;
    }
    func_004D86E0(p, a, b);
}

int func_00277EF0(char *, float);

int func_00277ED0(char *p) {
    return func_00277EF0(p, 1.0f);
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00131DF0();

extern int D_00545A20[];

extern float D_00545A40[][4];

extern float D_00545A90[][4];

extern float D_00545AE0[];

void func_00278640(char *p) {
    float m[4][4] __attribute__((aligned(16)));
    float c[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    int i;
    char *e;
    UNIT(m);
    c[0] = 128.0f;
    c[1] = 128.0f;
    c[2] = 128.0f;
    c[3] = 80.0f;
    for (i = 0; i < 5; i++) {
        func_00131DF0(a, *(int *)(*(char **)((char *)(D_00545A20[i] * 4) + (int)p + 0x1380) + 0x104), D_00545A40[i]);
        func_00131DF0(b, *(int *)(*(char **)((char *)(D_00545A20[i] * 4) + (int)p + 0x1380) + 0x104), D_00545A90[i]);
        e = (char *)(i * 0x30) + (int)p;
        *(float *)(e + 0x51C0) = a[0];
        *(float *)(e + 0x51C4) = a[1];
        *(float *)(e + 0x51C8) = a[2];
        *(float *)(e + 0x51D0) = b[0];
        *(float *)(e + 0x51D4) = b[1];
        *(float *)(e + 0x51D8) = b[2];
        *(float *)(e + 0x51E0) = D_00545AE0[i];
    }
}

void func_0026B2C0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    char *func_00207480(int, int, int, int);
    char *e;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x37C));
        func_002490F0(p, 5, 0xA, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 5, 0x19, -1, 0, 0, -1.0f);
            e = func_00207480(3, 0x288, 0, 8);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
                *(unsigned char *)(e + 0x99) = 0;
            }
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0xA);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0025F600(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        switch (*(unsigned char *)(p + 0x2998)) {
        case 0xC9: func_002490F0(p, 3, 0x2E, -1, 0, 0, -1.0f); break;
        case 0xCA: func_002490F0(p, 3, 0x2F, -1, 0, 0, -1.0f); break;
        case 0xCB: func_002490F0(p, 3, 0x30, -1, 0, 0, -1.0f); break;
        case 0xCC: func_002490F0(p, 3, 0x31, -1, 0, 0, -1.0f); break;
        case 0xCD: func_002490F0(p, 3, 0x32, -1, 0, 0, -1.0f); break;
        case 0xCE: func_002490F0(p, 3, 0x33, -1, 0, 0, -1.0f); break;
        }
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x570));
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

void func_0026EAB0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    int func_002242C0(char *);
    float func_001324B0(char *, char *);
    void func_0025DD40(char *p);
    float e;
    float d = 10000.0f;
    if (*(unsigned char *)(p + 0x3B9D) == 1 && func_00131B50(*(float *)(p + 0x54) - *(float *)(p + 0x3C44)) < 200.0f) {
        d = func_001324B0(p + 0x50, p + 0x3C40);
    }
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x40C));
        func_002490F0(p, 6, 0x15, -1, 2, 5, -1.0f);
        *(unsigned char *)(p + 0x2866) = 0;
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned char *)(p + 0x2998) == 0x56) {
                *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x410);
                *(float *)(p + 0x150) = *(float *)(*(char **)(p + 0x2844) + 0x414) / *(float *)(p + 0x2870);
                func_002490F0(p, 6, 0x23, -1, 0, 0, -1.0f);
            } else {
                *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x4BC);
                *(float *)(p + 0x150) = *(float *)(*(char **)(p + 0x2844) + 0x4C0) / *(float *)(p + 0x2870);
                func_002490F0(p, 6, 0x13, -1, 0, 0, -1.0f);
            }
            *(int *)(p + 0x154) = 0;
            if ((unsigned char)func_002242C0(p) == 0) {
                func_002F30B0(0x35, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            } else {
                func_002F30B0(0x78, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            }
            (*(unsigned char *)(p + 0x284C))++;
        } else {
            if (!(d <= *(float *)(*(char **)(p + 0x2844) + 0x41C))) func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
            if (*(unsigned char *)(p + 0x24D5) == 1) *(unsigned char *)(p + 0x2866) = 1;
        }
        break;
    case 2:
        func_002DB2C0(p);
        func_002496D0(p);
        e = func_00132510(p + 0x4970);
        func_002DB3E0(p, *(short *)(p + 0x90));
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) < 0.0f || !(e <= *(float *)(*(char **)(p + 0x2844) + 0x418)) ||
            d < *(float *)(*(char **)(p + 0x2844) + 0x41C)) {
            func_002490F0(p, 6, 0x14, -1, 0, 0, -1.0f);
            if (*(unsigned char *)(p + 0x2998) == 0x57) {
                *(unsigned char *)(p + 0x7F95) = 1;
                *(unsigned char *)(p + 0x7F96) = 5;
            }
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 3:
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        if (*(unsigned char *)(p + 0x24D5) == 1) *(unsigned char *)(p + 0x2866) = 0;
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x200000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x1000000;
            }
            func_0026D0B0(p);
            return;
        }
        break;
    }
    if (*(unsigned char *)(p + 0x2866) == 1 && (unsigned char)func_002D9A10(p, *(short *)(p + 0x90), 0) == 1) {
        *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
        *(unsigned char *)(p + 0x2998) = 9;
        func_0021C7E0(p, 0x11, -1, -1);
        func_0025DD40(p);
        return;
    }
}

void func_0025D8A0(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    int func_002242C0(char *);
    float func_001324B0(char *, char *);
    void func_0025DD40(char *p);
    float e;
    float d = 10000.0f;
    if (*(unsigned char *)(p + 0x3B9D) == 1 && func_00131B50(*(float *)(p + 0x54) - *(float *)(p + 0x3C44)) < 200.0f) {
        d = func_001324B0(p + 0x50, p + 0x3C40);
    }
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x18));
        func_002490F0(p, 3, 0xE, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x2866) = 0;
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 3, 0xF, -1, 0, 0, -1.0f);
            if (*(unsigned char *)(p + 0x2998) == 7) {
                *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x1C);
                *(float *)(p + 0x150) = *(float *)(*(char **)(p + 0x2844) + 0x20) / *(float *)(p + 0x2870);
            } else {
                *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x28);
                *(float *)(p + 0x150) = *(float *)(*(char **)(p + 0x2844) + 0x2C) / *(float *)(p + 0x2870);
            }
            *(int *)(p + 0x154) = 0;
            if ((unsigned char)func_002242C0(p) == 0) {
                func_002F30C0(0xB, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
            } else {
                func_002F30C0(0x61, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p + 0x26C0, p);
            }
            (*(unsigned char *)(p + 0x284C))++;
        } else {
            if (!(d <= *(float *)(*(char **)(p + 0x2844) + 0x34))) func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
            if (*(unsigned char *)(p + 0x24D5) == 1) *(unsigned char *)(p + 0x2866) = 1;
        }
        break;
    case 2:
        func_002DB2C0(p);
        func_002496D0(p);
        e = func_00132510(p + 0x4970);
        func_002DB3E0(p, *(short *)(p + 0x90));
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) < 0.0f || !(e <= *(float *)(*(char **)(p + 0x2844) + 0x24)) ||
            d < *(float *)(*(char **)(p + 0x2844) + 0x34)) {
            if (*(unsigned char *)(p + 0x2998) == 7) {
                func_002490F0(p, 3, 0x10, -1, 0, 0, -1.0f);
            } else {
                func_002490F0(p, 3, 0x2A, -1, 0, 0, -1.0f);
            }
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB70[0] = D_01DFAB70[0] | 0x800;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 2;
            }
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 3:
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        if (*(unsigned char *)(p + 0x24D5) == 1) *(unsigned char *)(p + 0x2866) = 0;
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB70[0] = D_01DFAB70[0] | 0x800;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 2;
            }
            func_0021B790(p, 0xA);
            return;
        }
        break;
    }
    if (*(unsigned char *)(p + 0x2866) == 1 && (unsigned char)func_002D9A10(p, *(short *)(p + 0x90), 0) == 1) {
        *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
        *(unsigned char *)(p + 0x2998) = 9;
        func_0021C7E0(p, 0x11, -1, -1);
        func_0025DD40(p);
        return;
    }
}

void func_0026B7A0(char *p) {
    unsigned short func_001AE770(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    char *func_00207480(int, int, int, int);
    float func_001324B0(char *, char *);
    void func_0025DD40(char *p);
    float e;
    float d = 10000.0f;
    char *g;
    if (*(unsigned char *)(p + 0x3B9D) == 1 && func_00131B50(*(float *)(p + 0x54) - *(float *)(p + 0x3C44)) < 200.0f) {
        d = func_001324B0(p + 0x50, p + 0x3C40);
    }
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x360));
        func_002490F0(p, 5, 0x14, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x2866) = 0;
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            *(unsigned char *)(p + 0x2866) = 1;
            *(unsigned char *)(p + 0x299D) = 0;
            (*(unsigned char *)(p + 0x284C))++;
            break;
        }
        if (!(d <= *(float *)(*(char **)(p + 0x2844) + 0x36C))) func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 2:
        func_002DB2C0(p);
        e = func_00132510(p + 0x4970);
        if ((unsigned char)func_002496D0(p) == 4 || !(e <= *(float *)(*(char **)(p + 0x2844) + 0x368)) ||
            d < *(float *)(*(char **)(p + 0x2844) + 0x36C)) {
            func_002490F0(p, 5, 0x15, -1, 0, 0, -1.0f);
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
            *(unsigned char *)(p + 0x2866) = 0;
            *(unsigned char *)(p + 0x2867) = 0;
            *(unsigned char *)(p + 0x2868) = 1;
            *(unsigned char *)(p + 0x299D) = 0;
            (*(unsigned char *)(p + 0x284C))++;
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 3:
        if (*(unsigned char *)(p + 0x299D)) {
            *(unsigned char *)(p + 0x299D) = 0;
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x360));
        }
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            return;
        }
        if (*(unsigned char *)(p + 0x2998) == 0x3B || *(unsigned char *)(p + 0x2998) == 0x3C) {
            if (*(unsigned char *)(p + 0x24D5) == 1) *(unsigned char *)(p + 0x2867) = 1;
            if (*(unsigned char *)(p + 0x2867) == 1 &&
                !(*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
                *(unsigned char *)(p + 0x2868) = 0;
            }
            if (*(unsigned char *)(p + 0x24D5) == 2 &&
                (*(unsigned char *)(p + 0x2868) == 1 || (D_01CAFF3E[0] == 1 && *(unsigned char *)(p + 0x411A) == 1))) {
                func_002490F0(p, 5, 0x16, -1, 0, 0, -1.0f);
                *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
                *(unsigned char *)(p + 0x2867) = 0;
                *(unsigned char *)(p + 0x2868) = 1;
                (*(unsigned char *)(p + 0x284C))++;
                break;
            }
        }
        if (!(d <= *(float *)(*(char **)(p + 0x2844) + 0x36C))) func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 4:
        if (*(unsigned char *)(p + 0x299D)) {
            *(unsigned char *)(p + 0x299D) = 0;
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x360));
        }
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            return;
        }
        if (*(unsigned char *)(p + 0x2998) == 0x3C) {
            if (*(unsigned char *)(p + 0x24D5) == 1) *(unsigned char *)(p + 0x2867) = 1;
            if (*(unsigned char *)(p + 0x2867) == 1 &&
                !(*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
                *(unsigned char *)(p + 0x2868) = 0;
            }
            if (*(unsigned char *)(p + 0x24D5) == 2 &&
                (*(unsigned char *)(p + 0x2868) == 1 || (D_01CAFF3E[0] == 1 && *(unsigned char *)(p + 0x411A) == 1))) {
                func_002490F0(p, 5, 0x17, -1, 0, 0, -1.0f);
                g = func_00207480(3, 0x285, 0, 8);
                if (g) {
                    *(int *)(g + 0x94) = *(int *)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104);
                    g[0x99] = 0;
                }
                *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
                (*(unsigned char *)(p + 0x284C))++;
                break;
            }
        }
        if (!(d <= *(float *)(*(char **)(p + 0x2844) + 0x36C))) func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 5:
        if (*(unsigned char *)(p + 0x299D)) {
            *(unsigned char *)(p + 0x299D) = 0;
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x360));
        }
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            return;
        }
        if (!(d <= *(float *)(*(char **)(p + 0x2844) + 0x36C))) func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
    if (*(unsigned char *)(p + 0x2866) == 1 && (unsigned char)func_002D9A10(p, *(short *)(p + 0x90), 0) == 1) {
        *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
        *(unsigned char *)(p + 0x2998) = 9;
        func_0021C7E0(p, 0x11, -1, -1);
        func_0025DD40(p);
        return;
    }
}

void func_00271910(char *p) {
    unsigned short func_001AE770(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x23C));
        func_002490F0(p, 7, 3, -1, 2, 3, -1.0f);
        *(unsigned char *)(p + 0x2866) = 0;
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1 &&
            (*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
            func_002490F0(p, 7, 0x18, -1, 2, 3, -1.0f);
            *(float *)(p + 0x2874) = 0.0f;
            *(short *)(p + 0x2856) = 0;
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 2:
        func_002DB2C0(p);
        *(float *)(p + 0x2874) = *(float *)(p + 0x2874) + *(float *)(p + 0x10);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 7, 0x18, -1, 0, 0, 94.0f);
            *(short *)(p + 0x2856) = 1;
        }
        if (*(unsigned char *)(p + 0x2866) == 0 && 50.0f <= func_00249DD0(p, 1)) {
            func_002490F0(p, 7, 0x18, -1, 0, 0, 50.0f);
            *(unsigned char *)(p + 0x2866) = 1;
        }
        if (!(*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
            *(float *)(p + 0x2870) = 5.0f;
            if (*(float *)(p + 0x2874) < *(float *)(*(char **)(p + 0x2844) + 0x50C)) {
                func_002490F0(p, 7, 3, -1, 2, (unsigned int)*(float *)(p + 0x2870), 8.0f);
            } else if (*(short *)(p + 0x2856) == 0) {
                func_002490F0(p, 7, 0x29, -1, 2, (unsigned int)*(float *)(p + 0x2870), 8.0f);
            } else {
                func_002490F0(p, 7, 0x2A, -1, 2, (unsigned int)*(float *)(p + 0x2870), 8.0f);
            }
            func_002DBD20(p, 6.5475f, 0.0f);
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x254));
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 3:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) <= 0.0f) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
            break;
        }
        func_002DB880(p, *(short *)(p + 0x90));
        break;
    }
}

void func_00271DC0(char *p) {
    unsigned short func_001AE770(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x240));
        func_002490F0(p, 7, 4, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x2867) = 0;
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1 &&
            (*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
            func_002490F0(p, 7, 0x19, -1, 2, 3, -1.0f);
            *(unsigned char *)(p + 0x2866) = 0;
            *(float *)(p + 0x2874) = 0.0f;
            *(short *)(p + 0x2856) = 0;
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 2:
        func_002DB2C0(p);
        *(float *)(p + 0x2874) = *(float *)(p + 0x2874) + *(float *)(p + 0x10);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 7, 0x19, -1, 0, 0, 115.0f);
            *(short *)(p + 0x2856) = 1;
        }
        if (*(unsigned char *)(p + 0x2867) == 0 && 70.0f <= func_00249DD0(p, 1)) {
            func_002490F0(p, 7, 0x19, -1, 0, 0, 70.0f);
            *(unsigned char *)(p + 0x2867) = 1;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) *(unsigned char *)(p + 0x2866) = 1;
        if (*(unsigned char *)(p + 0x2866) == 1 && !(*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
            *(float *)(p + 0x2870) = 5.0f;
            if (*(float *)(p + 0x2874) < *(float *)(*(char **)(p + 0x2844) + 0x50C)) {
                func_002490F0(p, 7, 4, -1, 2, (unsigned int)*(float *)(p + 0x2870), 29.0f);
            } else if (*(short *)(p + 0x2856) == 0) {
                func_002490F0(p, 7, 0x2B, -1, 2, (unsigned int)*(float *)(p + 0x2870), 29.0f);
            } else {
                func_002490F0(p, 7, 0x2C, -1, 2, (unsigned int)*(float *)(p + 0x2870), 29.0f);
            }
            func_002DBD20(p, 9.3941f, 0.0f);
            func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x258));
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 3:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) <= 0.0f) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
            break;
        }
        func_002DB880(p, *(short *)(p + 0x90));
        break;
    }
}

void func_0026E5E0(char *p) {
    unsigned short func_001AE770(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    int func_002242C0(char *);
    float func_001324B0(char *, char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 6, 0x10, -1, 2, 5, -1.0f);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x404));
        *(unsigned char *)(p + 0x2867) = 1;
        if ((unsigned char)func_002242C0(p) == 0) {
            func_002F30B0(0x36, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        } else {
            func_002F30B0(0x79, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        }
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x400000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x2000000;
            }
            func_0026D0B0(p);
            return;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1 && (*(unsigned int *)(p + 0x29E0) & 0x200000) &&
            (*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
            func_002490F0(p, 6, 0x11, -1, 0, 0, -1.0f);
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB74[0] = D_01DFAB74[0] | 0x400000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x2000000;
            }
            if ((unsigned char)func_002242C0(p) == 0) {
                func_002F30B0(0x37, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            } else {
                func_002F30B0(0x7A, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
            }
            *(unsigned char *)(p + 0x2866) = 1;
            *(unsigned char *)(p + 0x7F95) = 1;
            *(unsigned char *)(p + 0x7F96) = 2;
            *(short *)(p + 0x2856) = (int)*(float *)(*(char **)(p + 0x2844) + 0x5C0);
            *(short *)(p + 0x2858) = (int)*(float *)(*(char **)(p + 0x2844) + 0x5C4);
            *(unsigned char *)(p + 0x284C) = 2;
        }
        break;
    case 2:
        if (!(*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
            *(unsigned char *)(p + 0x2866) = 0;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            (*(short *)(p + 0x2856))--;
            (*(short *)(p + 0x2858))--;
            if (*(short *)(p + 0x2858) <= 0 && (*(short *)(p + 0x2856) <= 0 || *(unsigned char *)(p + 0x2866) == 0)) {
                func_002490F0(p, 6, 0x24, -1, 0, 0, -1.0f);
                *(unsigned char *)(p + 0x7F95) = 3;
                *(unsigned char *)(p + 0x284C) = 3;
            } else {
                func_002490F0(p, 6, 0x2B, -1, 0, 0, 56.0f);
                if ((unsigned char)func_002242C0(p) == 0) {
                    D_01DFAB74[0] = D_01DFAB74[0] | 0x800000;
                } else {
                    D_01DFAB7C[0] = D_01DFAB7C[0] | 0x4000000;
                }
                *(unsigned char *)(p + 0x2867) = 0;
            }
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0026D0B0(p);
            return;
        }
        break;
    }
    if (*(unsigned char *)(p + 0x2867) == 1) {
        if (*(unsigned char *)(p + 0x3B9D) == 0 ||
            (*(unsigned char *)(p + 0x3B9D) == 1 && !(func_001324B0(p + 0x50, p + 0x3C40) <= *(float *)(*(char **)(p + 0x2844) + 0x408)))) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
    }
}

void func_002F7F10(char *, char *, short, unsigned char);

static inline signed char fs_25E(char *p) {
    unsigned int i;
    for (i = 0; i < 5; i++) {
        if (*(signed char *)(p + i + 0x3D4C) == 0) {
            return (signed char)i;
        }
    }
    return -1;
}

static inline char *so_25E(char *p) {
    signed char k = fs_25E(p);
    return k != -1 ? ((char **)(p + 0x3D54))[k] : 0;
}

void func_0025E440(char *p) {
    unsigned short func_001AE770(char *, int);
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    int func_002D9EB0(char *);
    char *o;
    int f;
    char *b;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 3, 0x11, -1, 0, 0, -1.0f);
        func_002DAF70(p, 0xE39, 0, 1, *(float *)(*(char **)(p + 0x2844) + 0x5C));
        func_0021CBB0(p, 1);
        (*(unsigned char *)(p + 0x284C))++;
        *(unsigned char *)(p + 0x284D) = 0;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 3, 0x12, -1, 0, 0, -1.0f);
            o = so_25E(p);
            if (o) {
                o[0xD0] = 1;
                *(float *)(o + 0x84) = -3.66519117f;
            }
            *(float *)(p + 0x2870) = 0.0f;
            *(float *)(p + 0x2874) = 3600.0f;
            (*(unsigned char *)(p + 0x284C))++;
            *(unsigned char *)(p + 0x284D) = 0;
            break;
        }
        func_002DB2C0(p);
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            if (*(unsigned char *)(p + 0x24D5) == 1) {
                *(float *)(p + 0x2874) = 13.0f;
                *(float *)(p + 0x2870) = 13.0f;
                (*(unsigned char *)(p + 0x284D))++;
            }
            break;
        case 1:
            o = so_25E(p);
            if (o) {
                o[0xD0] = 1;
                *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
                *(float *)(o + 0x80) = 0.0f;
                *(float *)(o + 0x88) = 0.0f;
                *(float *)(o + 0x84) = -3.66519117f * (1.0f - *(float *)(p + 0x2870) / *(float *)(p + 0x2874));
                if (*(float *)(p + 0x2870) <= 0.0f) {
                    *(float *)(o + 0x84) = -3.66519117f;
                    (*(unsigned char *)(p + 0x284D))++;
                }
            } else {
                func_0021B790(p, 5);
            }
            break;
        case 2:
            o = so_25E(p);
            if (o) {
                o[0xD0] = 1;
                *(float *)(o + 0x84) = -3.66519117f;
            }
            break;
        }
        break;
    case 2:
        func_002496D0(p);
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) + *(float *)(p + 0x10);
        *(float *)(p + 0x2874) = *(float *)(p + 0x2874) - *(float *)(p + 0x10);
        if (!(*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2)) ||
            *(unsigned char *)(p + 0x2998) == 0xD ||
            (*(unsigned char *)(p + 0x284F) != 0 && *(float *)(p + 0x2870) <= 0.0f)) {
            func_002490F0(p, 3, 0x13, -1, 0, 0, -1.0f);
            *(float *)(p + 0x2878) = 20.0f;
            (*(unsigned char *)(p + 0x284C))++;
            *(unsigned char *)(p + 0x284D) = 0;
        }
        o = so_25E(p);
        if (o) {
            o[0xD0] = 1;
            *(float *)(o + 0x84) = -3.66519117f;
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0xA);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            if (!(*(float *)(p + 0x2878) <= 0.0f)) {
                *(float *)(p + 0x2878) = *(float *)(p + 0x2878) - *(float *)(p + 0x10);
                if (*(float *)(p + 0x2878) <= 0.0f) {
                    *(float *)(p + 0x2878) = 0.0f;
                    f = *(unsigned char *)(p + 0x2998) != 0x19;
                    b = *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104);
                    func_002F7F10(p, b, *(short *)(p + 0x90), f);
                }
            }
            o = so_25E(p);
            if (o) {
                o[0xD0] = 1;
                *(float *)(o + 0x84) = -3.66519117f;
            }
            if (*(unsigned char *)(p + 0x24D5) == 2) {
                *(float *)(p + 0x2874) = 20.0f;
                *(float *)(p + 0x2870) = 20.0f;
                (*(unsigned char *)(p + 0x284D))++;
            }
            break;
        case 1:
            o = so_25E(p);
            if (o) {
                o[0xD0] = 1;
                *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
                *(float *)(o + 0x84) = -3.66519117f * (*(float *)(p + 0x2870) / *(float *)(p + 0x2874));
                if (*(float *)(p + 0x2870) <= 0.0f) (*(unsigned char *)(p + 0x284D))++;
            }
            break;
        case 2:
            break;
        }
        break;
    }
}

extern unsigned int D_01DF8810[];

extern unsigned int D_01DF7E50[];

void func_00207A90(unsigned int *);

int func_003330C0(char *, int);

void func_00262050(char *, int, int, int, int);

int func_00263810(char *, short);

float func_002636A0(char *, int, unsigned int);

static inline unsigned int mt_263(void) {
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
    return y;
}

void func_00263910(char *p) {
    unsigned short func_001AE770(char *, int);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(unsigned char *)(p + 0x28A6) = 1;
        *(unsigned char *)(p + 0x3B9F) = 0;
        func_0021CBB0(p, 1);
        if (*(signed char *)(p + 0x7D32) == 0) {
            if ((unsigned char)func_003330C0(p + 0x3D90, 0x1F8) == 1) {
                *(unsigned char *)(p + 0x7D34) = 0;
            } else {
                *(unsigned char *)(p + 0x7D34) = 1;
            }
        }
        if (*(unsigned char *)(p + 0x299F) == 1) {
            func_00263810(p, *(short *)(p + 0x3BA2));
            if (*(unsigned char *)(p + 0x2849) >= 10 && *(unsigned char *)(p + 0x2849) < 15) {
                *(float *)(p + 0x2870) = 3.0f;
            } else {
                *(float *)(p + 0x2870) = 10.0f;
                *(float *)(p + 0x3C60) = *(float *)(*(char **)(p + 0x2844) + 0x590);
            }
            *(short *)(p + 0x29A4) = 0xE39;
            *(float *)(p + 0x29D4) = *(float *)(p + 0x2870);
            *(unsigned char *)(p + 0x3C6D) = mt_263() & 1;
            if (*(unsigned char *)(p + 0x3C6D) == 0) *(unsigned char *)(p + 0x299F) = 2;
            func_002636A0(p, *(unsigned char *)(p + 0x299F), (unsigned int)*(float *)(p + 0x2870));
            *(unsigned char *)(p + 0x7D32) = 0;
            *(unsigned char *)(p + 0x284C) = 1;
            *(unsigned char *)(p + 0x284D) = 0;
            *(short *)(p + 0x2856) = 0;
            *(short *)(p + 0x2858) = 0;
        } else {
            if (*(unsigned char *)(p + 0x3C6D) == 2) {
                *(unsigned char *)(p + 0x3C6D) = mt_263() & 1;
                if (*(unsigned char *)(p + 0x3C6D) == 0) *(unsigned char *)(p + 0x299F) = 2;
            }
            if ((unsigned char)func_00263810(p, *(short *)(p + 0x3BA2)) == 1) {
                *(float *)(p + 0x2870) = 10.0f;
                *(float *)(p + 0x2874) = func_002636A0(p, *(unsigned char *)(p + 0x299F), (unsigned int)*(float *)(p + 0x2870));
                *(short *)(p + 0x29A4) = 0xE39;
                *(float *)(p + 0x29D4) = *(float *)(p + 0x2870);
                *(unsigned char *)(p + 0x284C) = 1;
                *(unsigned char *)(p + 0x284D) = 0;
                *(short *)(p + 0x2856) = 0;
                *(short *)(p + 0x2858) = 0;
            } else {
                *(float *)(p + 0x2870) = 0.0f;
                *(float *)(p + 0x2874) = func_002636A0(p, *(unsigned char *)(p + 0x299F), (unsigned int)*(float *)(p + 0x2870));
                func_00262050(p, *(unsigned char *)(p + 0x299F), 4, 0, 0);
                *(unsigned char *)(p + 0x284C) = 1;
                *(unsigned char *)(p + 0x284D) = 1;
                *(short *)(p + 0x2856) = 0;
                *(short *)(p + 0x2858) = 0;
                func_0021CBB0(p, 8);
            }
        }
        *(float *)(p + 0x410C) = 0.0f;
        if (*(unsigned char *)(p + 0x2999) != 0x86) {
            *(unsigned char *)(p + 0x4110) = 1;
        } else {
            (*(unsigned char *)(p + 0x4110))++;
        }
        break;
    case 1:
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            func_002496D0(p);
            *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2870) <= 0.0f) {
                *(float *)(p + 0x2874) = func_002636A0(p, *(unsigned char *)(p + 0x299F), 0);
                func_00262050(p, *(unsigned char *)(p + 0x299F), 4, 0, 0);
                func_0021CBB0(p, 8);
                (*(unsigned char *)(p + 0x284D))++;
            }
            break;
        case 1:
            func_002496D0(p);
            if (!(func_00249DD0(p, 1) < 13.0f + *(float *)(p + 0x2874) - *(float *)(p + 0x10))) {
                func_0021BDB0(p, 5, 1);
                return;
            }
            if (!(func_00249DD0(p, 1) < 7.0f + *(float *)(p + 0x2874))) *(short *)(p + 0x2856) = 1;
            break;
        case 2:
            func_002496D0(p);
            if (!(func_00249DD0(p, 1) < 13.0f + *(float *)(p + 0x2874) - *(float *)(p + 0x10))) {
                func_0021BDB0(p, 5, 1);
                return;
            }
            break;
        }
        if (D_01CAFF3E[0] == 1 && !(*(float *)(p + 0x410C) < 10.0f) && *(unsigned char *)(p + 0x4110) < 3) {
            *(short *)(p + 0x2858) = 1;
        }
        if (*(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C) == 5) {
            if (*(short *)(p + 0x2856) != 0 &&
                (*(unsigned short *)(p + 0x49C4) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x80) * 2))) {
                *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
                *(unsigned char *)(p + 0x2998) = 0x82;
                func_0021C7E0(p, 0x11, 1, 1);
                return;
            }
            if (*(unsigned char *)(p + 0x3C6C) == 1 && *(unsigned char *)(p + 0x28AA) != 3 && *(unsigned char *)(p + 0x290D) == 0 &&
                ((*(unsigned short *)(p + 0x49C4) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x20) * 2)) ||
                 *(short *)(p + 0x2858) != 0)) {
                if (*(short *)(p + 0x2856) != 0) {
                    *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
                    *(unsigned char *)(p + 0x2998) = 0x86;
                    func_0021C7E0(p, 0x11, 1, -1);
                    return;
                }
                *(short *)(p + 0x2858) = 1;
            }
        }
        break;
    }
}

int func_002DAD40(char *);

int func_0024D030(char *, short);

void func_0026DD00(char *);

void func_0026DA00(char *);

int func_00244F50(char *, int);

static inline unsigned int mt_26D(void) {
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
    return y;
}

void func_0026D290(char *p) {
    unsigned short func_001AE770(char *, int);
    int func_002D9EB0(char *);
    char *func_00207480(int, int, int, int);
    unsigned char k = 1;
    char *g;
    if ((unsigned char)func_002DAD40(p) != 2) {
        if ((unsigned char)func_0024D030(p, *(short *)(p + 0x90)) == 1) k = 2;
        if ((unsigned char)func_0024D030(p, *(short *)(p + 0x90)) == 3) k = 3;
    }
    if (D_01CAFF3E[0] == 1 && *(unsigned char *)(p + 0x4119) != 1) {
        switch (*(unsigned char *)(p + 0x4119)) {
        case 1: case 2: k = 1; break;
        case 3: k = 2; break;
        case 4: k = 3; break;
        }
    }
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
        *(unsigned char *)(p + 0x2998) = 0x51;
        switch (k) {
        case 1:
            func_0026DD00(p);
            *(unsigned char *)(p + 0x284C) = 1;
            break;
        case 2:
            func_002490F0(p, 6, 0x1E, -1, 0, 0, -1.0f);
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        case 3:
            if (*(unsigned short *)(p + 0x24C6) == 0x60E || *(unsigned short *)(p + 0x24C6) == 0x628) {
                func_002490F0(p, 6, 0x28, -1, 0, 0, 20.0f);
            } else {
                func_002490F0(p, 6, 0xE, -1, 0, 0, -1.0f);
            }
            *(unsigned char *)(p + 0x2868) = 0;
            *(unsigned char *)(p + 0x284C) = 3;
            break;
        }
        *(unsigned char *)(p + 0x2867) = 0;
        *(unsigned char *)(p + 0x284D) = 0;
        break;
    case 1:
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            *(unsigned char *)(p + 0x2866) = 1;
            *(unsigned char *)(p + 0x7F95) = 1;
            *(unsigned char *)(p + 0x7F96) = 0;
            *(short *)(p + 0x2856) = (int)*(float *)(*(char **)(p + 0x2844) + 0x5B0);
            *(short *)(p + 0x2858) = (int)*(float *)(*(char **)(p + 0x2844) + 0x5B4);
            (*(unsigned char *)(p + 0x284D))++;
        case 1:
            if (!(*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
                *(unsigned char *)(p + 0x2866) = 0;
            }
            if ((unsigned char)func_002496D0(p) == 4) {
                (*(short *)(p + 0x2856))--;
                (*(short *)(p + 0x2858))--;
                if (*(short *)(p + 0x2858) <= 0 && (*(unsigned char *)(p + 0x2866) == 0 || *(short *)(p + 0x2856) <= 0)) {
                    if (mt_26D() & 1) {
                        func_002490F0(p, 6, 9, -1, 2, 0xA, -1.0f);
                    } else {
                        func_002490F0(p, 6, 0xA, -1, 2, 0xA, -1.0f);
                    }
                    *(unsigned char *)(p + 0x7F95) = 3;
                    *(unsigned char *)(p + 0x2868) = 0;
                    *(unsigned char *)(p + 0x284C) = 4;
                } else {
                    func_002490F0(p, 6, *(unsigned char *)(p + 0x24C6), -1, 2, 0xA, -1.0f);
                }
            }
            break;
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0026D0B0(p);
            break;
        }
        if (*(unsigned char *)(p + 0x2868) == 0 && (*(unsigned char *)(p + 0x24D1) & 1)) {
            g = func_00207480(3, 0x2C1, 0, 8);
            if (g) {
                *(int *)(g + 0x94) = *(int *)(((char **)(p + 0x1388))[func_002D9EB0(p)] + 0x104);
                g[0x99] = 0;
            }
            *(unsigned char *)(p + 0x2868) = 1;
        }
        break;
    case 2:
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            *(unsigned char *)(p + 0x2866) = 1;
            *(unsigned char *)(p + 0x7F95) = 1;
            *(unsigned char *)(p + 0x7F96) = 1;
            *(short *)(p + 0x2856) = (int)*(float *)(*(char **)(p + 0x2844) + 0x5B8);
            *(short *)(p + 0x2858) = (int)*(float *)(*(char **)(p + 0x2844) + 0x5BC);
            (*(unsigned char *)(p + 0x284D))++;
        case 1:
            if (!(*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
                *(unsigned char *)(p + 0x2866) = 0;
            }
            if ((unsigned char)func_002496D0(p) == 4) {
                (*(short *)(p + 0x2856))--;
                (*(short *)(p + 0x2858))--;
                if (*(unsigned char *)(p + 0x2867) == 1) {
                    *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
                    *(unsigned char *)(p + 0x2998) = 0x53;
                    func_0021C7E0(p, 0x11, 0, -1);
                    func_0026DA00(p);
                    return;
                }
                if (*(short *)(p + 0x2858) <= 0 && (*(unsigned char *)(p + 0x2866) == 0 || *(short *)(p + 0x2856) <= 0)) {
                    func_002490F0(p, 6, 0x21, -1, 2, 0xA, -1.0f);
                    *(unsigned char *)(p + 0x7F95) = 3;
                    *(unsigned char *)(p + 0x2868) = 0;
                    *(unsigned char *)(p + 0x284C) = 4;
                } else {
                    func_002490F0(p, 6, 0x1E, -1, 0, 0, -1.0f);
                }
            }
            if ((unsigned char)func_00244F50(p, 0xF) == 1) *(unsigned char *)(p + 0x2867) = 1;
            break;
        }
        break;
    case 4:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0026D0B0(p);
            break;
        }
        if (*(unsigned char *)(p + 0x2868) == 0 && (*(unsigned char *)(p + 0x24D1) & 1)) {
            g = func_00207480(3, 0x38E, 0, 8);
            if (g) {
                *(int *)(g + 0x94) = *(int *)(((char **)(p + 0x1388))[func_002D9EB0(p)] + 0x104);
                g[0x99] = 0;
            }
            *(unsigned char *)(p + 0x2868) = 1;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

void func_0021BEA0(char *, int);

void func_00220860(char *, int, int, float);

void func_0023F860(char *);

void func_00264A30(char *, int, float);

void func_00264E20(char *, int, int);

int func_002497E0(char *);

void func_00249860(char *);

void func_00264590(char *p) {
    switch (*(unsigned char *)(p + 0x2850)) {
    case 0:
        switch (*(unsigned char *)(p + 0x2851)) {
        case 0:
            func_0021CBB0(p, 0x301);
            if (*(unsigned char *)(p + 0x7F93) > 0) {
                *(short *)(p + 0x2856) = 3;
            } else {
                switch (*(unsigned char *)(p + 0x2998)) {
                case 0x8C:
                    if (*(unsigned char *)(p + 0x3C6C) == 1) {
                        *(short *)(p + 0x2856) = 1;
                    } else {
                        *(short *)(p + 0x2856) = 0;
                    }
                    break;
                case 0x8D:
                default:
                    *(short *)(p + 0x2856) = 3;
                    switch (*(unsigned char *)(p + 0x3C74)) {
                    case 0:
                        *(unsigned char *)(p + 0x7F93) = (unsigned int)*(float *)(*(char **)(p + 0x2844) + 0x684);
                        break;
                    case 1:
                        *(unsigned char *)(p + 0x7F93) = (unsigned int)*(float *)(*(char **)(p + 0x2844) + 0x688);
                        break;
                    case 2:
                    default:
                        *(unsigned char *)(p + 0x7F93) = (unsigned int)*(float *)(*(char **)(p + 0x2844) + 0x68C);
                        break;
                    }
                    break;
                }
            }
            if (*(unsigned char *)(p + 0x7F93) > 0) (*(unsigned char *)(p + 0x7F93))--;
            if (*(signed char *)(p + 0x7D35) == 0) {
                if ((unsigned char)func_003330C0(p + 0x3D90, 0x258) == 1) {
                    *(unsigned char *)(p + 0x7D37) = 0;
                } else {
                    *(unsigned char *)(p + 0x7D37) = 1;
                }
            }
            if (*(unsigned char *)(p + 0x299F) == 1) {
                *(float *)(p + 0x2880) = func_00131B50(360.0f * (float)(*(short *)(p + 0x3BA2) - *(short *)(p + 0x90)) / 65536.0f) /
                                         *(float *)(*(char **)(p + 0x283C) + 0xC0);
                if (*(unsigned char *)(p + 0x2849) < 10 || *(unsigned char *)(p + 0x2849) > 14) {
                    if (*(float *)(p + 0x2880) < 9.0f) *(float *)(p + 0x2880) = 9.0f;
                    func_0023F860(p);
                }
                *(float *)(p + 0x3C60) = 5.0f;
                *(float *)(p + 0x2884) = *(float *)(*(char **)(p + 0x2844) + 0x594);
                if (*(unsigned int *)(p + 0x289C) & 0x10000) {
                    func_002490F0(p, 9, 0, -1, 0, 0, -1.0f);
                    *(unsigned char *)(p + 0x2851) = 1;
                    break;
                }
                func_00264A30(p, 0, *(float *)(p + 0x2880));
                *(unsigned char *)(p + 0x2850) = 1;
                *(unsigned char *)(p + 0x2851) = 0;
                break;
            }
            func_00264A30(p, 1, 0.0f);
            func_00264E20(p, *(unsigned char *)(p + 0x2856), 0);
            *(unsigned char *)(p + 0x2850) = 1;
            *(unsigned char *)(p + 0x2851) = 1;
            break;
        case 1:
            func_00264A30(p, 1, *(float *)(p + 0x2880));
            func_00220860(p, 0, 0, *(float *)(p + 0x2880));
            *(unsigned char *)(p + 0x2850) = 1;
            *(unsigned char *)(p + 0x2851) = 0;
            break;
        }
        break;
    case 1:
        *(float *)(p + 0x2884) = *(float *)(p + 0x2884) - *(float *)(p + 0x10);
        if (!(*(float *)(p + 0x2884) <= 0.0f)) *(float *)(p + 0x3C60) = 2.0f * *(float *)(p + 0x10);
        switch (*(unsigned char *)(p + 0x2851)) {
        case 0:
            func_002497E0(p);
            func_00249860(p);
            *(float *)(p + 0x2880) = *(float *)(p + 0x2880) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2880) <= 0.0f) {
                func_00264A30(p, 1, 0.0f);
                func_00264E20(p, *(unsigned char *)(p + 0x2856), 0);
                (*(unsigned char *)(p + 0x2851))++;
            }
            break;
        case 1:
            if ((unsigned char)func_002497E0(p) == 4) {
                func_0021BEA0(p, 1);
                if (*(unsigned char *)(p + 0x284A) == 0xA) func_0021BEA0(p, 0);
                break;
            }
            func_00249860(p);
            break;
        }
        break;
    }
}

void func_00254450(char *p) {
    if ((*(unsigned int *)(p + (0x29D8))) & 0x100) (*(unsigned int *)(p + (0x29D8))) &= ~0x80;
    if ((*(unsigned int *)(p + (0x29DC))) & 0x80) (*(unsigned int *)(p + (0x29DC))) &= ~0x40;
    if ((*(unsigned int *)(p + (0x29DC))) & 0x10000000) {
        (*(unsigned int *)(p + (0x29DC))) &= ~0x4000000;
        (*(unsigned int *)(p + (0x29DC))) &= ~0x8000000;
    }
    if ((*(unsigned int *)(p + (0x29DC))) & 0x8000000) (*(unsigned int *)(p + (0x29DC))) &= ~0x4000000;
    if ((*(unsigned int *)(p + (0x29E0))) & 0x800000) (*(unsigned int *)(p + (0x29E0))) &= ~0x400000;
    if ((*(unsigned int *)(p + (0x29E4))) & 0x400000) (*(unsigned int *)(p + (0x29E4))) &= ~0x200000;
    if ((*(unsigned int *)(p + (0x29E4))) & 0x4000000) (*(unsigned int *)(p + (0x29E4))) &= ~0x2000000;
    switch (*(unsigned char *)(p + 0x3C6C)) {
    case 0:
        switch (*(unsigned char *)(p + 0x3C74)) {
        case 2:
            (*(unsigned int *)(p + (0x29F0))) |= 0x100;
            (*(unsigned int *)(p + (0x29DC))) |= 0x4000;
            (*(unsigned int *)(p + (0x29E0))) |= 8;
            (*(unsigned int *)(p + (0x29E8))) |= 1;
            (*(unsigned int *)(p + (0x29E0))) |= 0x40000000;
        case 1:
            (*(unsigned int *)(p + (0x29D8))) |= 0x8000;
            (*(unsigned int *)(p + (0x29DC))) |= 0x1000;
            (*(unsigned int *)(p + (0x29E0))) |= 4;
            (*(unsigned int *)(p + (0x29E4))) |= 0x10000000;
            (*(unsigned int *)(p + (0x29E4))) |= 0x20000000;
            (*(unsigned int *)(p + (0x29E0))) |= 0x10000000;
            break;
        case 0:
            break;
        }
        break;
    case 1:
        switch (*(unsigned char *)(p + 0x3C74)) {
        case 2:
            (*(unsigned int *)(p + (0x29E8))) |= 0x40000;
            (*(unsigned int *)(p + (0x29EC))) |= 2;
        case 1:
            (*(unsigned int *)(p + (0x29E8))) |= 0x4000000;
            (*(unsigned int *)(p + (0x29EC))) |= 0x1000;
            break;
        case 0:
            break;
        }
        break;
    case 2: case 3: case 4: case 5:
        break;
    }
}

void func_0022C6A0(char *, char *, char *, char *, int);

void func_00257720(char *p) {
    int func_002D9EB0(char *);
    switch (*(unsigned char *)(p + 0x28B0)) {
    default:
    case 0:
    case 2:
    case 3:
    case 5:
    case 6:
        func_0022C6A0(p + 0x6D30, p + 0x4A00, *(char **)(((char **)(p + 0x138C))[func_002D9EB0(p)] + 0x104), p + 0x7F20, 1);
        break;
    case 1:
    case 4:
        func_0022C6A0(p + 0x6D30, p + 0x4A00, *(char **)(((char **)(p + 0x138C))[func_002D9EB0(p)] + 0x104), p + 0x7F20, 1);
        break;
    }
    if (*(signed char *)(p + 0x7D12) != -1) {
        func_0022C6A0(p + *(signed char *)(p + 0x7D14) * 0xC0 + 0x6F10, p + *(signed char *)(p + 0x7D12) * 0x600 + 0x4A00, *(char **)(((char **)(p + 0x13B8))[*(signed char *)(p + 0x7D11)] + 0x104), p + *(signed char *)(p + 0x7D14) * 0x40 + 0x7210, 1);
    }
    if (*(signed char *)(p + 0x7D15) != -1) {
        func_0022C6A0(p + *(signed char *)(p + 0x7D17) * 0xC0 + 0x6F10, p + *(signed char *)(p + 0x7D15) * 0x600 + 0x4A00, *(char **)(((char **)(p + 0x138C))[*(signed char *)(p + 0x7D11)] + 0x104), p + *(signed char *)(p + 0x7D17) * 0x40 + 0x7210, 1);
    }
    if (*(signed char *)(p + 0x7D1A) != -1) {
        func_0022C6A0(p + *(signed char *)(p + 0x7D1C) * 0xC0 + 0x6F10, p + *(signed char *)(p + 0x7D1A) * 0x600 + 0x4A00, *(char **)(((char **)(p + 0x1388))[*(signed char *)(p + 0x7D19)] + 0x104), p + *(signed char *)(p + 0x7D1C) * 0x40 + 0x7210, 1);
    }
    if (*(signed char *)(p + 0x7D21) != -1) {
        func_0022C6A0(p + *(signed char *)(p + 0x7D23) * 0xC0 + 0x6F10, p + *(signed char *)(p + 0x7D21) * 0x600 + 0x4A00, *(char **)(((char **)(p + 0x13B8))[*(signed char *)(p + 0x7D20)] + 0x104), p + *(signed char *)(p + 0x7D23) * 0x40 + 0x7210, 1);
    }
    if (*(signed char *)(p + 0x7D24) != -1) {
        func_0022C6A0(p + *(signed char *)(p + 0x7D26) * 0xC0 + 0x6F10, p + *(signed char *)(p + 0x7D24) * 0x600 + 0x4A00, *(char **)(((char **)(p + 0x138C))[*(signed char *)(p + 0x7D20)] + 0x104), p + *(signed char *)(p + 0x7D26) * 0x40 + 0x7210, 1);
    }
    if (*(signed char *)(p + 0x7D29) != -1) {
        func_0022C6A0(p + *(signed char *)(p + 0x7D2B) * 0xC0 + 0x6F10, p + *(signed char *)(p + 0x7D29) * 0x600 + 0x4A00, *(char **)(((char **)(p + 0x1388))[*(signed char *)(p + 0x7D28)] + 0x104), p + *(signed char *)(p + 0x7D2B) * 0x40 + 0x7210, 1);
    }
    if (*(signed char *)(p + 0x7D2E) != -1) {
        func_0022C6A0(p + *(signed char *)(p + 0x7D30) * 0xC0 + 0x6F10, p + *(signed char *)(p + 0x7D2E) * 0x600 + 0x4A00, *(char **)(((char **)(p + 0x1388))[*(signed char *)(p + 0x7D2D)] + 0x104), p + *(signed char *)(p + 0x7D30) * 0x40 + 0x7210, 1);
    }
}

int func_002771E0(void) {
    int func_002242C0();
    int t0;
    t0 = func_002242C0();
    return (((t0 & 255) ^ 0) == 0);
}

void func_00277D30(char *p0) {
    void func_00128488();
    *(int *)(p0 + 0) = 0;
    func_00128488((p0 + 16), 0, 80);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 96)) : "memory");
    *(int *)(p0 + 160) = 0;
    func_00128488((p0 + 176), 0, 48);
    *(char **)(p0 + 236) = (p0 + 176);
}

void func_0025D140(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, **(float **)(p + 0x2844));
        func_002490F0(p, 3, 6, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0025D220(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, **(float **)(p + 0x2844));
        func_002490F0(p, 3, 7, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_00269760(char *p) {
    void func_002DAF70(char *, int, int, int, float);
    void func_002DB2C0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x210));
        func_002490F0(p, 4, 8, -1, 0, 0, -1.0f);
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
    }
}

void func_00277E70();

void func_00277DA0(p) char *p; {
    void func_00128488();
    func_00128488(p + 176, 0, 48);
    *(char * *)(p + 236) = p + 176;
    func_00277E70(p);
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

char *func_00202CD0(char *, short);

extern char D_005A75D0[];

extern char D_005A75F4[];

extern char D_005A7674[];

extern char D_005A7708[];

extern char D_005A8140[];

extern char D_005A8164[];

extern char D_005A81E4[];

extern char D_005A8278[];

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

char *func_00277350(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005A8140;
        *(char * *)(p + 64) = D_005A8164;
        *(char * *)(p + 160) = D_005A81E4;
        *(char * *)(p + 208) = D_005A8278;
        func_001003E0(p + 29456, (void *)func_00204C70, 160, 16);
        func_001003E0(p + 28432, (void *)func_00204A70, 192, 4);
        func_001003E0(p + 27952, (void *)func_00204A70, 192, 1);
        func_001003E0(p + 27072, (void *)func_0031DD00, 144, 5);
        func_001003E0(p + 26640, (void *)func_0031DD00, 144, 3);
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

extern char D_005A82D0[];

extern char D_005A82F4[];

extern char D_005A8374[];

extern char D_005A8408[];

char *func_00278A40(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005A82D0;
        *(char * *)(p + 64) = D_005A82F4;
        *(char * *)(p + 160) = D_005A8374;
        *(char * *)(p + 208) = D_005A8408;
        func_001003E0(p + 20736, (void *)func_00204A70, 192, 1);
        func_0031DD00(p + 20480, -1);
        func_001003E0(p + 18944, (void *)func_002791E0, 1536, 1);
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

void func_002541B0();

void func_00253870(p0) char *p0; {
    int v0;
    char *tmp0;
    *(char *)(p0 + 0) = 0;
    *(char *)(p0 + 1) = -1;
    *(char *)(p0 + 2) = 5;
    v0 = 0;
    *(char *)(p0 + 3) = -1;
    *(char *)(p0 + 4) = -1;
    do {
        *(char *)((p0 + v0) + 5) = 0;
        tmp0 = (p0 + v0);
        v0 = (v0 + 5);
        *(char *)(tmp0 + 6) = 0;
        *(char *)(tmp0 + 7) = 0;
        *(char *)(tmp0 + 8) = 0;
        *(char *)(tmp0 + 9) = 0;
    } while (((unsigned int)v0 < (unsigned int)15));
    *(char *)(p0 + 20) = 0;
    *(char *)(p0 + 21) = 2;
    *(char *)(p0 + 22) = 0;
    *(char *)(p0 + 23) = 0;
    *(int *)(p0 + 24) = 0x45bb8000;
    *(int *)(p0 + 28) = 0;
    *(char *)(p0 + 32) = 2;
    *(char *)(p0 + 33) = 0;
    *(int *)(p0 + 40) = 0;
    *(char *)(p0 + 34) = 0;
    *(int *)(p0 + 44) = 0;
    *(char *)(p0 + 35) = 0;
    *(int *)(p0 + 48) = 0;
    *(char *)(p0 + 36) = 0;
    *(int *)(p0 + 52) = 0;
    *(char *)(p0 + 37) = 0;
    *(int *)(p0 + 56) = 0;
    *(char *)(p0 + 38) = 0;
    *(int *)(p0 + 60) = 0;
    func_002541B0((p0 + 64), v0);
}

void func_00253920(p0) char *p0; {
    int v0;
    float v1;
    float v2;
    int tmp1;
    *(char *)(p0 + 10407) = 0;
    *(char *)(p0 + 10414) = 0;
    if (*(unsigned char *)(p0 + 10410) == 3) {
        *(char *)(p0 + 10410) = 0;
    }
    if (*(unsigned char *)(p0 + 10410) == 2) {
        *(char *)(p0 + 10410) = 0;
    }
    *(char *)(p0 + 15690) = 0;
    *(char *)(p0 + 15691) = 2;
    *(char *)(p0 + 15689) = *(signed char *)((char *)(*(unsigned char *)(p0 + 15690) + (int)p0) + 15692);
    *(int *)(p0 + 15496) = 0;
    v1 = *(float *)(p0 + 10920);
    *(float *)(p0 + 10964) = v1;
    tmp1 = *(unsigned char *)(p0 + 10415);
    v0 = 0x453b0000;
    if (tmp1 != 0) {
        *(int *)(p0 + 10436) = (v0 | 32768);
        v2 = *(float *)(p0 + 10440);
        v1 = *(float *)(p0 + 10436);
        if (v1 > v2) {
            *(float *)(p0 + 10436) = v2;
        }
    }
}

void func_00254030(p0, p1) char *p0; char *p1; {
    int v0;
    v0 = 1;
    *(char *)(p1 + 0) = *(signed char *)(p0 + 15692);
    *(char *)(p1 + 5) = *(signed char *)(p0 + 15725);
    *(char *)(p1 + 1) = *(signed char *)(p0 + 15693);
    *(char *)(p1 + 6) = *(signed char *)(p0 + 15726);
    *(char *)(p1 + 2) = *(signed char *)(p0 + 15694);
    *(char *)(p1 + 7) = *(signed char *)(p0 + 15727);
    *(char *)(p1 + 3) = *(signed char *)(p0 + 15695);
    *(char *)(p1 + 8) = *(signed char *)(p0 + 15728);
    *(char *)(p1 + 4) = *(signed char *)(p0 + 15696);
    *(char *)(p1 + 9) = *(signed char *)(p0 + 15729);
    *(char *)(p1 + 10) = *(signed char *)(p0 + 15690);
    *(char *)(p1 + 11) = *(signed char *)(p0 + 15691);
    *(char *)(p1 + 12) = *(signed char *)(p0 + 15689);
    *(char *)(p1 + 13) = *(signed char *)(p0 + 10407);
    *(char *)(p1 + 14) = *(unsigned char *)(p0 + 10414);
    if (*(unsigned char *)(p0 + 15481) == v0) {
        if (*(unsigned char *)(p0 + 10414) == 0) {
            if (*(unsigned char *)(p0 + 10410) != v0) {
                *(char *)(p1 + 13) = 0;
                *(char *)(p1 + 14) = 0;
            }
        }
    }
    *(char *)(p1 + 15) = *(signed char *)(p0 + 10410);
    if (*(unsigned char *)(p0 + 10410) == 3) {
        *(char *)(p1 + 15) = 0;
    }
    if (*(unsigned char *)(p0 + 10410) == 2) {
        *(char *)(p1 + 15) = 0;
    }
    *(float *)(p1 + 56) = *(float *)(p0 + 10964);
    *(float *)(p1 + 60) = *(float *)(p0 + 10920);
    *(char *)(p1 + 17) = *(unsigned char *)(p0 + 10415);
    *(float *)(p1 + 64) = *(float *)(p0 + 10436);
    *(float *)(p1 + 68) = *(float *)(p0 + 10440);
    *(char *)(p1 + 18) = *(signed char *)(p0 + 15468);
    *(char *)(p1 + 19) = *(signed char *)(p0 + 15476);
    *(float *)(p1 + 52) = *(float *)(p0 + 15484);
    *(int *)(p1 + 20) = *(int *)(p0 + 10744);
    *(int *)(p1 + 24) = *(int *)(p0 + 10748);
    *(int *)(p1 + 28) = *(int *)(p0 + 10752);
    *(int *)(p1 + 32) = *(int *)(p0 + 10756);
    *(int *)(p1 + 36) = *(int *)(p0 + 10760);
    *(int *)(p1 + 40) = *(int *)(p0 + 10764);
    *(int *)(p1 + 44) = *(int *)(p0 + 10768);
    *(int *)(p1 + 48) = *(int *)(p0 + 10772);
    *(float *)(p1 + 72) = *(float *)(p0 + 16016);
    *(float *)(p1 + 76) = *(float *)(p0 + 16020);
    *(float *)(p1 + 80) = *(float *)(p0 + 15496);
}

void func_002541B0(p0) char *p0; {
    *(int *)(p0 + 0) = -1;
    *(int *)(p0 + 4) = -1;
    *(int *)(p0 + 8) = -1;
    *(int *)(p0 + 12) = -1;
    *(int *)(p0 + 16) = -1;
    *(int *)(p0 + 20) = -1;
    *(int *)(p0 + 24) = -1;
    *(int *)(p0 + 28) = -1;
    *(int *)(p0 + 0) = (*(int *)(p0 + 0) & -129);
    *(int *)(p0 + 0) = (*(int *)(p0 + 0) & -257);
    *(int *)(p0 + 0) = (*(int *)(p0 + 0) & -8193);
    *(int *)(p0 + 24) = (*(int *)(p0 + 24) & 0xfffbffff);
    *(int *)(p0 + 0) = (*(int *)(p0 + 0) & 0xffff7fff);
    *(int *)(p0 + 24) = (*(int *)(p0 + 24) & -257);
    *(int *)(p0 + 4) = (*(int *)(p0 + 4) & -129);
    *(int *)(p0 + 4) = (*(int *)(p0 + 4) & -33);
    *(int *)(p0 + 4) = (*(int *)(p0 + 4) & -4097);
    *(int *)(p0 + 4) = (*(int *)(p0 + 4) & -16385);
    *(int *)(p0 + 4) = (*(int *)(p0 + 4) & 0xf7ffffff);
    *(int *)(p0 + 4) = (*(int *)(p0 + 4) & 0xefffffff);
    *(int *)(p0 + 4) = (*(int *)(p0 + 4) & 0xbfffffff);
    *(int *)(p0 + 24) = (*(int *)(p0 + 24) & 0xfff7ffff);
    *(int *)(p0 + 8) = (*(int *)(p0 + 8) & -5);
    *(int *)(p0 + 8) = (*(int *)(p0 + 8) & -9);
    *(int *)(p0 + 8) = (*(int *)(p0 + 8) & 0xffdfffff);
    *(int *)(p0 + 8) = (*(int *)(p0 + 8) & 0xffbfffff);
    *(int *)(p0 + 8) = (*(int *)(p0 + 8) & 0xff7fffff);
    *(int *)(p0 + 8) = (*(int *)(p0 + 8) & 0xefffffff);
    *(int *)(p0 + 8) = (*(int *)(p0 + 8) & 0xbfffffff);
    *(int *)(p0 + 12) = (*(int *)(p0 + 12) & -3);
    *(int *)(p0 + 12) = (*(int *)(p0 + 12) & -5);
    *(int *)(p0 + 12) = (*(int *)(p0 + 12) & 0xffdfffff);
    *(int *)(p0 + 12) = (*(int *)(p0 + 12) & 0xffbfffff);
    *(int *)(p0 + 12) = (*(int *)(p0 + 12) & 0xfbffffff);
    *(int *)(p0 + 12) = (*(int *)(p0 + 12) & 0xefffffff);
    *(int *)(p0 + 12) = (*(int *)(p0 + 12) & 0xdfffffff);
    *(int *)(p0 + 16) = (*(int *)(p0 + 16) & -2);
    *(int *)(p0 + 24) = (*(int *)(p0 + 24) & 0xffefffff);
    *(int *)(p0 + 16) = (*(int *)(p0 + 16) & 0xfffbffff);
    *(int *)(p0 + 20) = (*(int *)(p0 + 20) & -3);
    *(int *)(p0 + 16) = (*(int *)(p0 + 16) & 0xfbffffff);
    *(int *)(p0 + 20) = (*(int *)(p0 + 20) & -4097);
}

int func_001AD140();

int func_0025AE60(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(int *)(p0 + 200);
    if (v0 != 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

int func_00277210(p0) char *p0; {
    int func_002242C0();
    char *v0;
    int v1;
    int tmp0;
    v0 = p0;
    if (*(unsigned char *)(p0 + 15468) != 5) {
        v1 = 1;
    } else {
        tmp0 = func_002242C0();
        if ((tmp0 & 255) == 1) {
            v1 = 0;
        } else {
            v1 = (*(unsigned char *)(v0 + 15470) == 0);
        }
    }
    return v1;
}

extern void func_0021C7A0();

void func_0025AE90(void *p) { func_0021C7A0(p, 27); }

void func_002571B0(char *p, char v) { *(char *)(p + 10410) = v; }

unsigned char func_00259800(char *p) { return *(unsigned char *)(p + 10); }

void func_00278620(void) {}

void func_00278630(void) {}

void func_00278860(void) {}
