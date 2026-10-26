void func_0021C380(char *p, unsigned char k) {
    switch (k) {
    case 0:
        *(unsigned char *)(p + 0x29A1) = 0;
        *(unsigned char *)(p + 0x29A0) = 0;
        *(unsigned char *)(p + 0x299F) = 0;
        *(unsigned char *)(p + 0x2909) = 1;
    case 1:
    case 4:
    case 9:
    case 11:
        *(signed char *)(p + 0x2906) = *(signed char *)(*(char **)(p + 0x2830) + 0);
        *(signed char *)(p + 0x2907) = *(signed char *)(*(char **)(p + 0x2830) + 1);
        *(signed char *)(p + 0x2908) = *(signed char *)(*(char **)(p + 0x2830) + 2);
        *(unsigned char *)(p + 0x3C76) = (int)*(float *)(*(char **)(p + 0x283C) + 0x12C);
        *(unsigned char *)(p + 0x3C77) = 1;
        break;
    case 5:
        *(unsigned char *)(p + 0x2909) = 1;
        *(signed char *)(p + 0x2906) = *(signed char *)(*(char **)(p + 0x2830) + 0);
        *(signed char *)(p + 0x2907) = *(signed char *)(*(char **)(p + 0x2830) + 1);
        *(signed char *)(p + 0x2908) = *(signed char *)(*(char **)(p + 0x2830) + 2);
        *(unsigned char *)(p + 0x3C76) = (int)*(float *)(*(char **)(p + 0x283C) + 0x12C);
        *(unsigned char *)(p + 0x3C77) = 1;
        (*(signed char *)(p + 0x2908))--;
        break;
    case 8:
        *(unsigned char *)(p + 0x2909) = 1;
        *(signed char *)(p + 0x2906) = *(signed char *)(*(char **)(p + 0x2830) + 0);
        *(signed char *)(p + 0x2907) = *(signed char *)(*(char **)(p + 0x2830) + 1);
        *(signed char *)(p + 0x2908) = *(signed char *)(*(char **)(p + 0x2830) + 2);
        *(unsigned char *)(p + 0x3C76) = (int)*(float *)(*(char **)(p + 0x283C) + 0x12C);
        *(unsigned char *)(p + 0x3C77) = 1;
        break;
    case 2:
        (*(signed char *)(p + 0x2906))--;
        *(signed char *)(p + 0x2907) = 0;
        break;
    case 3:
        (*(signed char *)(p + 0x2907))--;
        *(signed char *)(p + 0x2906) = 0;
        break;
    case 6:
        (*(signed char *)(p + 0x2908))--;
        break;
    case 7:
    case 10:
    case 12:
        break;
    }
    *(unsigned char *)(p + 0x3C83) = 0;
    *(unsigned char *)(p + 0x29A2) = 0;
    if (*(signed char *)(p + 0x46)) {
        *(signed char *)(p + 0x2908) = 0;
        *(signed char *)(p + 0x2906) = 0;
        *(signed char *)(p + 0x2907) = 0;
    }
}

void func_0021CA00(char *p, unsigned char k) {
    switch (k) {
    case 0:
        if (*(unsigned int *)(p + 0x2898) & 2) {
            float f = *(float *)(*(char **)(p + 0x283C) + 0x2C4);
            if (!((float)(unsigned int)*(unsigned char *)(p + 0x299F) <= f)) {
                *(unsigned char *)(p + 0x299F) = (unsigned int)f;
            }
        }
        break;
    case 1:
        *(unsigned char *)(p + 0x299F) = 0;
        break;
    }
}

char *func_00207480(int, int, float *, int);

int func_002D9EB0(char *);

extern char D_01DFABA0[];

void func_003305E0(char *, int, int, char *, int, int, int);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern char D_00542C80[];

typedef struct { float v[12]; } __attribute__((aligned(16))) T404;

void func_002276B0(char *p) {
    void func_0021B790(char *, int);
    T404 t;
    t = *(T404 *)D_00542C80;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(float *)(p + 0x2870) = 15.0f;
        func_00207480(3, 0x3B5, *(float **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), 8);
        func_003305E0(D_01DFABA0, 8, 0x96, p + 0x50, 0x2D, 0, 0);
        if ((*(unsigned char *)(p + 0x2900) == 1 && *(unsigned char *)(p + 0x2901) == 2) ||
            (*(unsigned char *)(p + 0x2901) == 1 && *(unsigned char *)(p + 0x2900) == 2)) {
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 1:
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) <= 0.0f) {
            QCOPY(p + 0x28F0, &t.v[*(unsigned char *)(p + 0x2900) * 4]);
            *(float *)(p + 0x2870) = 8.0f;
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) <= 0.0f) {
            func_0021B790(p, 0);
        }
        break;
    }
}

float func_001324B0(char *, float *);

int func_00131D10(float, float);

short func_00221710(char *p) {
    float v[4] __attribute__((aligned(16)));
    char *o;
    short r = 0x4000;
    if (*(unsigned char *)(p + 0x3B9D) == 0) return r;
    o = *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x138C) + 0x104);
    __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(o) : "memory");
    r = func_00131D10(func_001324B0(p + 0x3C40, v), *(float *)(p + 0x3C44) - v[1]);
    return r;
}

void func_002DAB90(char *, int);

void func_00221B40(char *p) {
    int func_002496D0(char *);
    void func_0021B790(char *, int);
    switch (*(unsigned char *)(p + 0x2904)) {
    case 1:
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DAB90(p, 3);
        }
    }
}

void func_0021C100(char *, int, int, float, float);

void func_0021D3F0(char *p, int flag) {
    void func_0021B790(char *, int);
    int func_0023DF80(char *, int, int, float);
    *(int *)(p + 0x24BC) = 0;
    if (*(unsigned char *)(p + 0x28AC) != 1 && (unsigned char)flag != 1) {
        if (func_0023DF80(p, flag, 1, -20.0f) != 0) {
            func_0021B790(p, 0);
        } else {
            func_0021C100(p, 4, 0, 0.0f, -1.5f);
        }
    }
}

void func_002490F0(char *, int, int, int, int, int, float);

void func_002273B0(char *p) {
    int func_002496D0(char *);
    void func_0021B790(char *, int);
    float f;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 6, 0x3B, -1, 2, 5, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        if (!(*(float *)(p + 0x2924) <= *(float *)(p + 0x54) - 5.0f)) {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + 1.0f;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        }
        break;
    }
}

int func_00249E20(char *, int);

void func_00225E60(char *p) {
    int func_002496D0(char *);
    void func_0021B790(char *, int);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        if (*(unsigned char *)(p + 0x28A7) == 0) {
            func_002490F0(p, 0, 0x3A, -1, 0, 0, -1.0f);
        } else {
            func_002490F0(p, 0, 0x32, -1, 0, 0, -1.0f);
        }
        *(unsigned char *)(p + 0x2866) = 0;
        *(unsigned char *)(p + 0x284C) = 1;
        break;
    case 1:
        func_002496D0(p);
        if ((unsigned char)func_00249E20(p, 0) == 4) {
            func_0021B790(p, 10);
        }
        break;
    }
}

void func_0021C7A0(char *, int);

void func_0021BDB0(char *p, int a, int b) {
    void func_00220860(char *, int, int, float);
    void func_00221240(char *);
    *(unsigned char *)(p + 0x24D0) = a;
    *(unsigned char *)(p + 0x299C) = 0;
    *(unsigned char *)(p + 0x2998) = 0;
    *(signed char *)(p + 0x3D49) = *(signed char *)(p + 0x3BA1);
    *(unsigned char *)(p + 0x28A5) = 2;
    *(signed char *)(p + 0x3B9F) = -1;
    if ((unsigned char)b == 1) {
        func_00221240(p);
        func_00220860(p, 1, 0, (float)(unsigned int)*(unsigned char *)(p + 0x24D0));
        func_00220860(p, 0, 0, (float)(unsigned int)*(unsigned char *)(p + 0x24D0));
    }
    func_0021C7A0(p, 10);
}

void func_002DBCE0(char *);

void func_0021CB60(char *, int);

void func_0021CB50(char *, int);

int func_00430DA0(char *p, unsigned char a, unsigned char b);

void func_0021BFC0(char *p) {
    func_002DBCE0(p);
    *(unsigned char *)(p + 0x299C) = 0;
    *(unsigned char *)(p + 0x29A1) = 0;
    *(unsigned char *)(p + 0x29A0) = 0;
    *(unsigned char *)(p + 0x299F) = 0;
    *(unsigned char *)(p + 0x2998) = 0;
    *(int *)(p + 0x291C) = 0;
    *(unsigned char *)(p + 0x28A9) = 0;
    if (*(unsigned char *)(p + 0x3C6E) == 1 && !(*(int *)(p + 0x2898) & 0x40000)) {
        func_0021CB60(p, 2);
        func_0021CB50(p, 1);
        func_00430DA0(p, 0, 0);
        return;
    }
    if (*(int *)(p + 0x2898) & 0x20000) {
        func_002490F0(p, 0, 0x22, -1, 0, 0, -1.0f);
    } else if (*(unsigned char *)(p + 0x2904) == 4) {
        func_002490F0(p, 0, 0x1F, -1, 0, 0, -1.0f);
    } else {
        func_002490F0(p, 0, 0x20, -1, 0, 0, -1.0f);
    }
    func_0021C7A0(p, 8);
}

void func_002DBCA0(char *, int);

void func_002DBD20(char *, float, float);

short func_002DACC0(char *);

static inline char *func_002217A0_e(char *p) {
    return (char *)((*(unsigned char *)(p + 0x28A7) != 0) * 0x18) + *(int *)(p + 0x2830);
}

void func_002217A0(char *p) {
    void func_00220860(char *, int, int, float);
    void func_002498D0(char *p);
    void func_00221240(char *);
    void func_00249990(char *);
    void func_002DAD80(char *, int, float);
    void func_002DAE30(char *, short *, short *, int);
    void func_002DB880(char *, int);
    func_002498D0(p);
    func_00249990(p);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002DBCA0(p, 1);
        func_002DBD20(p, *(float *)(func_002217A0_e(p) + 4), 0.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
    case 1:
        func_002DAD80(p, 0, 1.0f);
        func_002DAE30(p, (short *)(p + 0x90), (short *)(p + 0x28E2), (short)(unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(*(char **)(p + 0x283C) + 0xC0) / 360.0f));
        *(signed char *)(p + 0x3BA0) = *(signed char *)(p + 0x3B9F);
        func_00221240(p);
        if (*(signed char *)(p + 0x3BA0) != *(signed char *)(p + 0x3B9F)) {
            func_00220860(p, 0, 0, 10.0f);
        }
        *(short *)(p + 0x28E2) = func_002DACC0(p) - *(short *)(p + 0x28DC);
        func_002DAE30(p, (short *)(p + 0x28DC), (short *)(p + 0x28E2), 0x800);
        func_002DB880(p, *(short *)(p + 0x28DC));
        break;
    }
}

extern int D_005455D0[];

void func_00227230(char *p) {
    int func_002496D0(char *);
    void func_00221240(char *);
    void func_002DAE30(char *, char *, char *, int);
    void func_002DB880(char *, short);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002DBD20(p, 8.0f, 0.0f);
        *(unsigned char *)(p + 0x28A5) = 0;
        func_00221240(p);
        func_002490F0(p, 6, D_005455D0[*(signed char *)(p + 0x3B9F)], -1, 2, 0x14, -1.0f);
        *(short *)(p + 0x28DC) = func_002DACC0(p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
    case 1:
        *(short *)(p + 0x28E2) = func_002DACC0(p) - *(short *)(p + 0x28DC);
        func_002DAE30(p, p + 0x28DC, p + 0x28E2, 0x800);
        *(short *)(p + 0x90) = *(short *)(p + 0x3BA2);
        func_00221240(p);
        if (*(unsigned short *)(p + 0x24C4) != D_005455D0[*(signed char *)(p + 0x3B9F)]) {
            func_002490F0(p, 6, D_005455D0[*(signed char *)(p + 0x3B9F)], -1, 2, 0x14, -1.0f);
        }
        if (!(*(float *)(p + 0x2924) <= *(float *)(p + 0x54) - 5.0f)) {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + 1.0f;
        }
        func_002496D0(p);
        func_002DB880(p, *(short *)(p + 0x28DC));
    }
}

extern char D_00553750[];

void func_00240520(char *, int);

void func_002D9300(char *, int);

void func_002405C0(char *, int);

void func_00226A00(char *, int);

void func_00225F30(char *, int);

void func_00226580(char *, int);

void func_002DFC90(char *, char *, int);

void func_002DA050(char *, int);

void func_002D9F30(char *, int);

void func_00227B10(char *p) {
    int func_0023DF80(char *, float);
    int func_002496D0(char *);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_00240520(p, 1);
        func_002D9300(p, 1);
        func_002405C0(p, 1);
        if (*(unsigned char *)(p + 0x28AA) != 1 && *(unsigned char *)(p + 0x28AE) == 1) {
            *(unsigned char *)(p + 0x28AE) = 0;
            func_00226A00(p, 0);
            func_00225F30(p, 2);
            func_00226580(p, 0);
        }
        if (*(unsigned char *)(p + 0x2854) == 0) {
            if (*(unsigned char *)(p + 0x2849) != 0x2A && 10.0f + *(float *)(p + 0x2924) < *(float *)(p + 0x54)) {
                func_0021CB50(p, 2);
                func_002DFC90(p, D_00553750, 0);
                break;
            }
            func_002DBCE0(p);
            func_002490F0(p, 1, 0xB, -1, 0, 0, -1.0f);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        } else {
            if (*(unsigned char *)(p + 0x2AE3) == 0) {
                func_002490F0(p, 1, 0x1E, -1, 0, 0, 81.0f);
            } else {
                func_002490F0(p, 1, 0x1F, -1, 0, 0, 104.0f);
            }
            func_002DA050(p, 0);
            *(unsigned char *)(p + 0x284C) = 2;
        }
        *(unsigned char *)(p + 0x2866) = 0;
        *(float *)(p + 0x2870) = 600.0f;
        func_002D9F30(p, 0xC);
        break;
    case 1:
        if ((unsigned char)func_0023DF80(p, 0.0f) == 1) {
            if (!(*(float *)(p + 0x2924) <= *(float *)(p + 0x54) - 10.0f)) {
                *(float *)(p + 0x54) = *(float *)(p + 0x2924);
                *(unsigned char *)(p + 0x2866) = 1;
            }
        } else {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) - 10.0f;
            *(unsigned char *)(p + 0x2866) = 0;
        }
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (((unsigned char)func_002496D0(p) == 4 && *(unsigned char *)(p + 0x2866) == 1) || *(float *)(p + 0x2870) < 0.0f) {
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
            func_002DA050(p, 0);
            break;
        }
        func_002DAB90(p, 3);
        break;
    case 2:
        break;
    }
}

extern char D_00666710[];

extern char D_0066671A[];

unsigned short func_001AE770(char *, int);

void func_0021CBB0(char *, int);

void func_00105300(char *, char *);

void func_002F30B0(int, char *, char *);

int func_002242C0(char *);

extern int D_01DFAB70[];

extern int D_01DFAB7C[];

void func_00221BC0(char *p) {
    int func_002496D0(char *);
    void func_0021B790(char *, int);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_0021CB60(p, 0x10000);
        switch (*(unsigned char *)(p + 0x3C82)) {
        case 0:
            if (*(unsigned char *)(p + 0x2854) == 0) {
                func_002490F0(p, 0x18, 0, -1, 0, 0, -1.0f);
            } else {
                func_002490F0(p, 0x18, 0x1E, -1, 0, 0, -1.0f);
            }
            *(unsigned char *)(p + 0x284C) = 1;
            break;
        case 1:
            if (*(unsigned char *)(p + 0x2854) == 0) {
                func_00105300(p + 0x3CA0, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104));
                if ((unsigned char)func_002242C0(p) == 0) {
                    func_002F30B0(0x1F, p + 0x3CA0, p);
                } else {
                    func_002F30B0(0x71, p + 0x3CA0, p);
                }
                func_002490F0(p, 0x18, 0xA, -1, 0, 0, -1.0f);
                *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x283C) + 0x2D0);
                *(float *)(p + 0x3C90) = 0.0f;
                *(unsigned char *)(p + 0x3C6E) = 0;
            } else {
                func_002490F0(p, 0x18, 0xA, -1, 2, 5, 20.0f);
                *(float *)(p + 0x2870) = 0.0f;
                *(unsigned char *)(p + 0x3C6E) = 1;
            }
            *(unsigned char *)(p + 0x284C) = 3;
            break;
        }
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            switch (*(unsigned char *)(p + 0x3C82)) {
            case 0:
                func_002490F0(p, 0x18, 0x1E, -1, 0, 0, -1.0f);
                break;
            case 1:
                func_002490F0(p, 0x18, 0xA, -1, 2, 5, 20.0f);
                break;
            }
        }
        if (!(*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x20)])) {
            func_0021CB60(p, 0x40000);
            if (*(unsigned char *)(p + 0x3C80) != 6) {
                func_002490F0(p, 0x18, 1, -1, 0, 0, -1.0f);
            } else {
                func_002490F0(p, 0x18, 0x1F, -1, 0, 0, -1.0f);
            }
            *(unsigned char *)(p + 0x284C) = 2;
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0xA);
            return;
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0x18, 0xA, -1, 0, 0, 20.0f);
        }
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        *(float *)(p + 0x3C90) = *(float *)(p + 0x3C90) + *(float *)(p + 0x10);
        if (!(*(float *)(p + 0x3C90) < *(float *)(*(char **)(p + 0x283C) + 0x2D8))) {
            *(unsigned char *)(p + 0x3C6E) = 1;
        }
        if (*(float *)(p + 0x2870) <= 0.0f &&
            (!(*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x20)]) ||
             !(*(float *)(p + 0x3C90) < *(float *)(*(char **)(p + 0x283C) + 0x2D4)))) {
            func_002490F0(p, 0x18, 0xB, -1, 0, 0, -1.0f);
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB70[0] = D_01DFAB70[0] | 0x80000000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x20000;
            }
            *(unsigned char *)(p + 0x284C) = 4;
        }
        break;
    case 4:
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB70[0] = D_01DFAB70[0] | 0x80000000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x20000;
            }
            func_0021B790(p, 0xA);
            return;
        }
        break;
    }
    if (*(unsigned char *)(p + 0x3C82) == 1) {
        func_00105300(p + 0x3CA0, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104));
    }
}

int func_002DAD40(char *);

void func_0021C580(char *, int);

void func_0021C770(char *, int);

void func_0021BEA0(char *p, int k) {
    void func_00221240(char *);
    void func_00220860(char *, int, int, float);
    if ((signed char)k == 1) {
        if ((unsigned char)func_002DAD40(p) == 2) {
            *(unsigned char *)(p + 0x28A5) = 2;
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
            func_0021C580(p, 10);
        } else {
            *(unsigned char *)(p + 0x28A5) = 0;
            *(short *)(p + 0x28DC) = func_002DACC0(p);
            func_0021C580(p, 0xD);
        }
    } else {
        *(unsigned char *)(p + 0x28A6) = 1;
        if ((unsigned char)func_002DAD40(p) == 2) {
            *(unsigned char *)(p + 0x28A5) = 2;
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
            func_0021C770(p, 10);
        } else {
            *(unsigned char *)(p + 0x28A5) = 0;
            *(short *)(p + 0x28DC) = func_002DACC0(p);
            func_0021C770(p, 0xD);
        }
    }
    func_00221240(p);
    *(signed char *)(p + 0x3D49) = *(signed char *)(p + 0x3BA1);
    func_00220860(p, k, 0, 8.0f);
}

void func_00131700(char *, char *, char *);

void func_00105230(char *, char *, char *);

void func_001318E0(char *, char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_001320E0(float *, short);

void func_001321F0(float *, short);

void func_00131E20(char *, float *, char *);

#define VGET3_30(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define VPUT3_30(d, s) __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(d), "r"(s) : "memory")

void func_0021EED0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    if (*(unsigned char *)(p + 0x28A0) == 0) {
        *(float *)(p + 0x100) = 1.0f;
        *(float *)(p + 0x104) = 1.0f;
        *(float *)(p + 0x108) = 1.0f;
        *(float *)(p + 0x10C) = 1.0f;
    } else {
        *(float *)(p + 0x100) = 1.0f;
        *(float *)(p + 0x104) = 1.0f;
        *(float *)(p + 0x108) = 1.0f;
        *(float *)(p + 0x10C) = 1.0f;
    }
    UNIT(p + 0x110);
    func_00131700(p + 0x110, p + 0x110, p + 0x80);
    func_001318E0(p + 0x110, p + 0x110, p + 0x100);
    func_00105230(p + 0x110, p + 0x110, p + 0x50);
    if (*(unsigned char *)(p + 0x28AA) == 2) {
        VGET3_30(v, p + 0x110);
        UNIT(m);
        func_001320E0(m, (short)(unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(p + 0x28F0) / 360.0f));
        func_001321F0(m, (short)(unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(p + 0x28F8) / 360.0f));
        func_00131E20(p + 0x110, m, p + 0x110);
        VPUT3_30(p + 0x110, v);
    }
}

int func_0021D1D0(char *p) {
    if (*(float *)(p + 0x2AD4) <= 0.0f) return 0;
    if (*(unsigned char *)(p + 0x28A7) != 0 || *(unsigned char *)(p + 0x2848) == 0x21) return 0;
    if (*(unsigned char *)(p + 0x3C79) == 1 && *(unsigned char *)(p + 0x28AA) != 3) return 0;
    if (*(unsigned char *)(p + 0x3C78) == 1) return 0;
    return 1;
}

short func_00131B60(int);

float func_00131B50(float);

int func_00226F20(char *, int);

typedef struct { float a; float b; int pad[4]; } E226;

void func_00226CD0(char *p) {
    int func_002496D0(char *);
    float f;
    short s;
    float c;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        p[0x28A5] = 0;
        func_002DBD20(p, (*(E226 **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].b, 0.0f);
        *(float *)(p + 0x2918) = (*(E226 **)(p + 0x2830))[(*(unsigned char *)(p + 0x28A7) != 0) + 1].a;
        *(float *)(p + 0x28EC) = 0.0f;
        func_002490F0(p, 6, 0x35, -1, 2, 0xA, -1.0f);
        (*(unsigned char *)(p + 0x284C))++;
    case 1:
        s = func_00131B60(*(short *)(p + 0x28E2));
        if (s > 0x38E) s = 0x38E;
        f = 0.17453292f * (s / 910.0f);
        if (*(short *)(p + 0x28E2) == 0) {
            f = 0.0f;
        } else if (!((float)*(short *)(p + 0x28E2) <= 0.0f)) {
            f = f * -1.0f;
        }
        c = 0.0043633231f;
        if (func_00131B50(*(float *)(p + 0x28EC) - f) < c) {
            *(float *)(p + 0x28EC) = f;
        } else if (*(float *)(p + 0x28EC) < f) {
            *(float *)(p + 0x28EC) = *(float *)(p + 0x28EC) + c * *(float *)(p + 0x10);
        } else {
            *(float *)(p + 0x28EC) = *(float *)(p + 0x28EC) - c * *(float *)(p + 0x10);
        }
        switch ((unsigned char)func_00226F20(p, 2)) {
        case 1:
            func_002490F0(p, 6, 0x39, -1, 2, 0xA, -1.0f);
            break;
        case 2:
            func_002490F0(p, 6, 0x35, -1, 2, 0xA, -1.0f);
            break;
        }
        func_002496D0(p);
        break;
    }
}

void func_002282B0(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

void func_00228300(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

void func_00228350(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

int func_002206D0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f1, float f2, float f3) {
    int func_00220860(char *, int, int, float);
    void func_00221240();
    void func_002498D0();
    int func_00249990();
    void func_002DAD80(int, int, float);
    void func_002DAE30();
    char *v0;
    int v1;
    v0 = (char *)p0;
    func_002DAD80(p0, 0, 1.0f);
    func_002DAE30(v0, (v0 + 144), (v0 + 10466), (short)((short)(int)(0.5f + ((65536.0f * *(float *)(*(char **)(v0 + 10300) + 192)) / 360.0f)) & 65535));
    *(char *)(v0 + 15264) = *(signed char *)(v0 + 15263);
    func_00221240(v0);
    func_002498D0(v0);
    v1 = func_00249990(v0);
    if (*(unsigned char *)(v0 + 10315) != 17) {
        if (*(signed char *)(v0 + 15264) != *(signed char *)(v0 + 15263)) {
            v1 = func_00220860(v0, 0, 0, 5.0f);
        }
    }
    return v1;
}

void func_002219C0(p0) char *p0; {
    void func_0021B790();
    *(char *)(p0 + 10405) = 2;
    func_0021B790(p0, 5);
}

void func_0021FD30(void *p) {
    extern void func_0021B790(); func_0021B790(p, 5); }

void func_00220FE0(void *p) {
    extern void func_0021B790(); func_0021B790(p, 5); }

int func_00220560(int p0, int p1, int p2, int p3) {
    int func_0021B790();
    int func_002496D0();
    int v0;
    int v1;
    int tmp0;
    v0 = func_002496D0();
    tmp0 = (v0 & 255);
    v1 = p0;
    if (tmp0 == 4) {
        v0 = func_0021B790(v1, 5);
    }
    return v0;
}
