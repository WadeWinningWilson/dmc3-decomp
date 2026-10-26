char *func_00207480(int, int, float *, int);

extern char D_00666710[];

extern unsigned short D_0066671A[];

int func_002DAD40(char *);

short func_002DACC0(char *);

void func_002490F0(char *, int, int, int, int, int, float);

void func_002DA2A0(char *);

void func_0021CA00(char *, int);

void func_00332AE0(char *, int, float, float);

void func_002DFFA0(char *, float);

void func_00105230(float *, float *, float *);

int func_002496D0(char *);

void func_0021CBB0(char *, int);

unsigned short func_001AE770(char *, int);

int func_0023DF80(char *, float);

void func_0021BFC0(char *);

void func_002DA540(char *);

void func_002DA650(char *);

#define VMOVE224(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

#define VUNIT224(d) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(d) : "memory")

void func_00224FA0(char *p) {
    void func_0021C380(char *, int);
    int func_002D9EB0(char *);
    void func_002DA3A0(char *, int);
    void func_00430EA0(char *, int);
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        if ((unsigned char)func_002DAD40(p) == 2) {
            p[0x2904] = 4;
        } else {
            p[0x2904] = 0;
            *(short *)(p + 0x90) = func_002DACC0(p);
        }
        func_002490F0(p, 0, 0x21, -1, 0, 0, -1.0f);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        p[0x2903] = 6;
        func_002DA2A0(p);
        func_0021C380(p, 4);
        func_0021CA00(p, 1);
        func_00332AE0(p + 0x3D90, 0x14A, *(float *)(*(char **)(p + 0x283C) + 0x58), *(float *)(*(char **)(p + 0x283C) + 0x54));
        func_002DFFA0(p, *(float *)(*(char **)(p + 0x283C) + 0x134));
        VMOVE224(v, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104));
        VUNIT224(m);
        func_00105230(m, m, v);
        func_00207480(3, 0x14D, m, 8);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned char *)(p + 0x2904) == 4) {
                func_002490F0(p, 0, 0x26, -1, 0, 0, -1.0f);
            } else {
                func_002490F0(p, 0, 0x27, -1, 0, 0, -1.0f);
            }
            func_0021CBB0(p, 8);
            if (*(unsigned short *)(p + 0x49C0) & D_0066671A[func_001AE770(D_00666710, 0x40)]) {
                p[0x2903] = 7;
                func_002DA2A0(p);
            }
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021BFC0(p);
            break;
        }
        func_002DA540(p);
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        func_00430EA0(p, 0);
        func_002496D0(p);
        func_002DA650(p);
        break;
    }
}

float func_00249DD0(char *, int);

void func_0021CB50(char *, int);

float func_001324B0(char *, char *);

float func_00131B50(float);

void func_002DBD20(char *, float, float);

void func_002DBCC0(char *, int, float, float);

char *func_002075D0(int, int, int, int, int);

void func_002DBD30(char *);

int func_0024D260(char *);

void func_0021C100(char *, int, int, float, float);

typedef struct { float f[4]; } F4_223;

void func_002238B0(char *p) {
    void func_0021C380(char *, int);
    int func_002D9EB0(char *);
    void func_002DB880(char *, short);
    unsigned char ok;
    char *q;
    float d;
    float h;
    float e;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        if (*(unsigned char *)(p + 0x2866) == 1) {
            func_002490F0(p, 0x17, 0xF, -1, 2, 5, -1.0f);
            func_0021C380(p, 0);
        } else {
            func_002490F0(p, 0x17, 0x10, -1, 2, 5, -1.0f);
        }
        *(unsigned char *)(p + 0x3C77) = 0;
        *(unsigned char *)(p + 0x2868) = *(unsigned char *)(p + 0x3B9D);
        if (*(unsigned char *)(p + 0x2868) == 1) {
            *(F4_223 *)(p + 0x29C0) = *(F4_223 *)(p + 0x3C40);
            *(short *)(p + 0x28DC) = *(short *)(p + 0x3BA2);
        } else {
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        }
        func_0021CA00(p, 0);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        ok = 0;
        if (*(unsigned char *)(p + 0x2866) == 1) {
            if ((unsigned char)func_002496D0(p) == 4) ok = 1;
        } else {
            func_002496D0(p);
            if (!(func_00249DD0(p, 1) < 8.0f)) ok = 1;
        }
        if (ok == 1) {
            *(unsigned char *)(p + 0xD6) = 0;
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x283C) + 0x290);
            func_0021CB50(p, 2);
            if (*(unsigned char *)(p + 0x2868) == 1) {
                q = *(char **)(p + 0x283C);
                d = func_001324B0(p + 0x50, p + 0x29C0) - *(float *)(q + 0x298);
                if (!(d <= *(float *)(q + 0x294))) d = *(float *)(q + 0x294);
                e = *(float *)(*(char **)(p + 0x283C) + 0x29C);
                h = *(float *)(p + 0x29C4) - *(float *)(p + 0x54);
                if (!(func_00131B50(h) <= e)) {
                    if (!(h <= 0.0f)) {
                        h = e;
                    } else {
                        h = -e;
                    }
                }
            } else {
                d = 1.0f;
                h = 0.0f;
            }
            func_002DBD20(p, d / *(float *)(p + 0x2870), 0.0f);
            func_002DBCC0(p, 1, h / *(float *)(p + 0x2870), 0.0f);
            *(short *)(p + 0x90) = *(short *)(p + 0x28DC);
            switch (*(unsigned char *)(p + 0x28B0)) {
            case 0: case 2: case 3: case 4: case 6:
                func_002075D0(3, 0x26A, (*(int *)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104)), 1, 8);
                break;
            case 5:
                if (*(unsigned char *)(p + 0x28A0) == 0) {
                    func_002075D0(3, 0x8F, (*(int *)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104)), 1, 8);
                } else {
                    func_002075D0(3, 0x215, (*(int *)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104)), 1, 8);
                }
                break;
            case 1:
                if (*(unsigned char *)(p + 0x28A0) == 0) {
                    func_002075D0(3, 0x26B, (*(int *)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104)), 1, 8);
                } else {
                    func_002075D0(3, 0x26A, (*(int *)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104)), 1, 8);
                }
                break;
            }
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        func_002DB880(p, *(short *)(p + 0x28DC));
        if (*(unsigned char *)(p + 0x2868) == 1 && func_001324B0(p + 0x50, p + 0x29C0) < *(float *)(*(char **)(p + 0x283C) + 0x298)) {
            func_002DBD30(p);
        }
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) <= 0.0f) {
            switch ((unsigned char)func_0024D260(p)) {
            case 4:
            default:
                func_002490F0(p, 0, 4, -1, 0, 0, 30.0f);
                break;
            case 0:
                func_002490F0(p, 0, 5, -1, 0, 0, 30.0f);
                break;
            case 2:
                func_002490F0(p, 0, 9, -1, 0, 0, 30.0f);
                break;
            }
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 3:
        *(unsigned char *)(p + 0xD6) = 1;
        func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x2A0), 0.0f);
        func_0021C100(p, 7, 0, *(float *)(*(char **)(p + 0x283C) + 0x2A4), *(float *)(*(char **)(p + 0x283C) + 0x2A8));
        break;
    }
}

short func_00221710(void);

int func_002242C0(char *);

unsigned short func_00221600(char *p) {
    int func_00131B60(int);
    short a = func_00221710();
    unsigned short r;
    float f;
    if (a < 0x4000) {
        r = 0;
        if (a < 0x2000) {
            a = 0x2000;
        }
    } else {
        r = 2;
        if (a > 0x6000) {
            a = 0x6000;
        }
    }
    f = func_00131B50((short)func_00131B60(a - 0x4000) / 8192.0f);
    if (f > 1.0f) {
        f = 1.0f;
    }
    *(float *)(p + 0x2430) = f;
    if ((unsigned char)func_002242C0(p) == 1 && *(float *)(p + 0x2430) < 0.5f) {
        r = 1;
    }
    return r;
}

extern char D_01CAFF0C[];

void func_002DBCE0(char *);

void func_00430DA0(char *, int, int);

void func_0021BDB0(char *, int, int);

int func_002DA0B0(char *, int);

static inline unsigned char both_21B(char *p) {
    if (*(unsigned char *)(p + 0x28AE) == 1 && *(unsigned char *)(p + 0x28A9) == 1) return 1;
    return 0;
}

static inline signed char fs_21B(char *p) {
    unsigned int i;
    for (i = 0; i < 5; i++) {
        if (*(signed char *)(p + i + 0x3D4C) == 0) {
            return (signed char)i;
        }
    }
    return -1;
}

static inline unsigned char busy2_21B(char *o) {
    if (*(int **)(o + 8) && **(int **)(o + 8)) return 1;
    if (*(int *)(o + 0x1C) - *(int *)(o + 0x20)) return 1;
    if (*(unsigned char *)(o + 0x1A) == 1) return 1;
    return 0;
}

static inline unsigned char busyo_21B(char *o) {
    if (o) return busy2_21B(o);
    return 0;
}

void func_0021B790(char *p, int k) {
    void func_0021C7A0(char *, int);
    char *o;
    func_002DBCE0(p);
    *(unsigned char *)(p + 0x24D0) = k;
    *(unsigned char *)(p + 0x299C) = 0;
    *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
    *(unsigned char *)(p + 0x2998) = 0;
    if (both_21B(p) == 1) {
        func_002490F0(p, 6, 0x34, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
        func_0021C7A0(p, 0x22);
        return;
    }
    *(unsigned char *)(p + 0x28A9) = 0;
    if (*(unsigned char *)(p + 0x3C6E) == 1 && !(*(unsigned int *)(p + 0x2898) & 2)) {
        func_00430DA0(p, 0, 0);
        return;
    }
    if (*(unsigned char *)(p + 0x28A6) == 0) {
    *(float *)(p + 0x2870) = 2.0f;
    *(float *)(p + 0x2874) = 600.0f;
    *(unsigned char *)(p + 0x28A5) = 2;
    *(unsigned char *)(p + 0x29A1) = 0;
    *(unsigned char *)(p + 0x29A0) = 0;
    *(unsigned char *)(p + 0x299F) = 0;
    *(unsigned char *)(p + 0x3C6D) = 2;
    if (*(signed char *)(p + 0x46) == 1) {
        func_002490F0(p, 0, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
        func_0021C7A0(p, 1);
        return;
    }
    if (*(unsigned char *)(p + 0x3C6C) == 0 && fs_21B(p) != -1 && *(signed char *)(p + 0x3D49) == 0 &&
        (unsigned char)func_002DA0B0(p, 0)) {
        *(float *)(p + 0x2870) = 1000000.0f;
        func_002490F0(p, 0xD, 6, -1, 2, *(unsigned char *)(p + 0x24D0), 10.0f);
    } else {
        o = *(char **)(*(char **)D_01CAFF0C + 0x20);
        if ((busyo_21B(o) == 1 && *(unsigned char *)(p + 0x284B) == 0x11) || busyo_21B(o) == 1) {
            switch (*(signed char *)(p + 0x3D49)) {
            case 0:
                if ((unsigned char)func_002DA0B0(p, 0) && *(unsigned char *)(p + 0x3C6C) == 0) {
                    func_002490F0(p, 0xD, 6, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                } else {
                    func_002490F0(p, 3, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                }
                break;
            case 1:
                func_002490F0(p, 4, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 2:
                func_002490F0(p, 5, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 3:
                func_002490F0(p, 0, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 4:
                func_002490F0(p, 7, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 5:
                func_002490F0(p, 8, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 6:
                func_002490F0(p, 9, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 7:
                func_002490F0(p, 0xA, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 8:
                func_002490F0(p, 0xB, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 9:
                func_002490F0(p, 0xC, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            case 10:
            case 11:
            case 12:
            case 13:
                func_002490F0(p, 0, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
                break;
            }
        } else {
            func_002490F0(p, 0, 0, -1, 2, *(unsigned char *)(p + 0x24D0), -1.0f);
        }
    }
    func_0021C7A0(p, 1);
    return;
    }
    func_0021BDB0(p, k, 1);
}

void func_00249860(char *);

void func_00221920(char *p) {
    int func_00220860(char *, int, int, float);
    void func_002497E0(void);
    int cur;
    func_002497E0();
    func_00249860(p);
    cur = *(unsigned short *)(p + 9414);
    if (cur != (unsigned short)func_00220860(p, 1, 1, 0.0f)) {
        func_00220860(p, 1, 0, 6.0f);
    }
    if (*(unsigned char *)(p + 10423) == 1) {
        func_00220860(p, 1, 0, 0.0f);
    }
}

void func_002207C0(char *p) {
    int func_00220860(char *, int, int, float);
    void func_002497E0(void);
    int cur;
    *(short *)(p + 10460) = *(short *)(p + 144);
    func_002497E0();
    func_00249860(p);
    cur = *(unsigned short *)(p + 9414);
    if (cur != (unsigned short)func_00220860(p, 1, 1, 0.0f)) {
        func_00220860(p, 1, 0, 5.0f);
    }
    if (*(unsigned char *)(p + 10423) == 1) {
        func_00220860(p, 1, 0, 0.0f);
    }
}

int func_0021D320(char *p, unsigned char a, unsigned char b, int c, int d) {
    unsigned char func_0021D1D0(char *);
    if (func_0021D1D0(p) == 0) {
        return 0;
    }
    if (*(unsigned char *)(p + 10312) != 43) {
        return 0;
    }
    if (*(unsigned char *)(p + 11001) != a) {
        return 0;
    }
    if (*(unsigned char *)(p + 11002) != b) {
        return 0;
    }
    *(char *)(p + 11004) = *(unsigned char *)(p + 11003);
    *(char *)(p + 11003) = d;
    *(char *)(p + 11005) = c;
    *(char *)(p + 11000) = 1;
    return 1;
}

void func_00249290(char *, int, int, int, int, int, float);

void func_00226820(char *, int, int, int);

void func_0021EED0(char *);

void func_00249E70(char *, char *);

unsigned char func_00226580(char *p, unsigned char f) {
    void func_0021C7A0(char *, int);
    unsigned char r = 0;
    int t = *(unsigned char *)(p + 0x2848);
    if (t == 1 || t == 0xA || t == 3 || t == 0xD || t == 0x22 || t == 0x23 || t == 0x24) {
        func_00226820(p, 0, 0, 0);
        t = *(unsigned char *)(p + 0x2848);
        if (t == 3 || t == 0x22 || t == 0x23 || t == 0x24) {
            func_002490F0(p, (unsigned char)(*(unsigned short *)(p + 0x24C6) >> 8), (unsigned char)*(unsigned short *)(p + 0x24C6), -1, 0, 0, -1.0f);
            r = 1;
        }
        if (*(unsigned char *)(p + 0x2848) == 0xD) {
            func_002490F0(p, (unsigned char)(*(unsigned short *)(p + 0x24C6) >> 8), (unsigned char)*(unsigned short *)(p + 0x24C6), -1, 0, 0, -1.0f);
            func_00249290(p, (unsigned char)(*(unsigned short *)(p + 0x24C6) >> 8), (unsigned char)*(unsigned short *)(p + 0x24C6), -1, 0, 0, -1.0f);
            r = 1;
        }
        if (r == 1) {
            func_0021EED0(p);
            func_00249E70(p, p + 0x110);
            return 1;
        }
        if (f == 0) {
            if (*(unsigned int *)(p + 0x2898) & 1) func_0021C7A0(p, 0x21);
        } else {
            if (*(unsigned char *)(p + 0x2848) == 1) {
                func_002490F0(p, (unsigned char)(*(unsigned short *)(p + 0x24C6) >> 8), (unsigned char)*(unsigned short *)(p + 0x24C6), -1, 0, 0, -1.0f);
                r = 1;
            } else if (*(unsigned char *)(p + 0x2848) == 0xA) {
                func_002490F0(p, (unsigned char)(*(unsigned short *)(p + 0x24C6) >> 8), (unsigned char)*(unsigned short *)(p + 0x24C6), -1, 0, 0, -1.0f);
                func_00249290(p, (unsigned char)(*(unsigned short *)(p + 0x24C6) >> 8), (unsigned char)*(unsigned short *)(p + 0x24C6), -1, 0, 0, -1.0f);
                r = 1;
            }
            if (r == 1) {
                func_0021EED0(p);
                func_00249E70(p, p + 0x110);
            }
        }
    }
    return r;
}

void func_002DBCA0(char *, int);

typedef struct { float a; float b; float c; short d; short pad; float e; float f; } E226F;

unsigned char func_00226F20(char *p, int fi) {
    void func_002DAE30(char *, char *, char *, int);
    void func_002DB880(char *, short);
    unsigned char r = 0;
    short s;
    float v;
    float t;
    float c;
    unsigned char f;
    if ((unsigned char)func_002DAD40(p) == 2) return 0;
    f = fi;
    if (f == 0) *(unsigned char *)(p + 0x28A5) = 0;
    *(short *)(p + 0x28DC) = func_002DACC0(p);
    *(short *)(p + 0x28E2) = *(short *)(p + 0x28DC) - *(short *)(p + 0x90);
    func_002DBCA0(p, 1);
    if (!(*(float *)(p + 0x2924) <= *(float *)(p + 0x54) - 5.0f)) *(float *)(p + 0x54) = *(float *)(p + 0x54) + 1.0f;
    s = *(short *)(p + 0x28E2);
    if (s < 0xB6 && s > -0xB6) *(short *)(p + 0x28E2) = 0;
    if (*(unsigned char *)(p + 0x28A6) == 0) {
        func_002DAE30(p, p + 0x90, p + 0x28E2, (*(E226F **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].d);
    }
    if (*(unsigned char *)(p + 0x28A5) == 0) {
        func_002DBD20(p, (*(E226F **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].b, 0.0f);
    } else {
        v = (*(E226F **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].c;
        t = *(float *)(p + 0x150) - v;
        if (0.0f != t && -0.0f != t) {
            c = func_00131B50(*(float *)(p + 0x154));
            if (!(c <= func_00131B50(t))) func_002DBD20(p, v, 0.0f);
        }
    }
    if (f) {
        if (*(unsigned char *)(p + 0x28A5) == 0) {
            if ((unsigned char)func_002DAD40(p) == 1) {
                *(float *)(p + 0x2918) = *(float *)(p + 0x2918) - *(float *)(p + 0x10);
                if (*(float *)(p + 0x2918) <= 0.0f) {
                    *(unsigned char *)(p + 0x28A5) = 1;
                    r = 1;
                    *(float *)(p + 0x154) = ((*(E226F **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].c - *(float *)(p + 0x150)) /
                                            (*(E226F **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].f;
                }
            } else {
                *(float *)(p + 0x2918) = (*(E226F **)(p + 0x2830))[(*(unsigned char *)(p + 0x28A7) != 0) + 1].a;
            }
        } else if ((unsigned char)func_002DAD40(p) == 0) {
            *(unsigned char *)(p + 0x28A5) = 0;
            func_002DBD20(p, (*(E226F **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].b, 0.0f);
            r = 2;
        }
    }
    func_002DB880(p, *(short *)(p + 0x28DC));
    return r;
}

extern int D_01DFAB74[];

extern int D_01DFAB78[];

extern int D_01DFAB84[];

extern int D_01DFAB88[];

#define F(id, o) func_002F30B0(id, *(int *)(((char **)(p + (o)))[func_002D9EB0(p)] + 0x104), p)

void func_00225F30(char *p, unsigned char k) {
    int func_002D9EB0();
    switch (k) {
    case 1:
        switch (*(signed char *)(p + 0x46)) {
        case 0:
            switch (*(signed char *)(p + 0x28A8)) {
            case 0:
            case 5:
                F(0x20, 0x1384);
                break;
            case 1:
                F(0x21, 0x1384);
                break;
            case 2:
                F(0x22, 0x1384);
                break;
            case 3:
                F(0x23, 0x1384);
                break;
            case 4:
                F(0x24, 0x1384);
                break;
            }
            break;
        case 1:
            switch (*(signed char *)(p + 0x28A8)) {
            case 4:
                F(0x26, 0x13B8);
                break;
            case 0:
                F(0x26, 0x13B8);
                break;
            }
            break;
        }
        break;
    case 2:
    default:
        switch (*(signed char *)(p + 0x46)) {
        case 0:
            D_01DFAB74[0] |= 0x1;
            D_01DFAB78[0] |= 0x4;
            D_01DFAB74[0] |= 0x2;
            D_01DFAB78[0] |= 0x8;
            D_01DFAB74[0] |= 0x4;
            D_01DFAB78[0] |= 0x10;
            D_01DFAB74[0] |= 0x8;
            D_01DFAB78[0] |= 0x20;
            D_01DFAB74[0] |= 0x10;
            D_01DFAB78[0] |= 0x40;
            break;
        case 1:
            D_01DFAB74[0] |= 0x40;
            D_01DFAB78[0] |= 0x100;
            D_01DFAB74[0] |= 0x40;
            D_01DFAB78[0] |= 0x100;
            break;
        }
        break;
    case 3:
        switch (*(signed char *)(p + 0x46)) {
        case 0:
            switch (*(signed char *)(p + 0x28A8)) {
            case 0:
            case 5:
                F(0x42, 0x1384);
                break;
            case 1:
                F(0x43, 0x1384);
                break;
            case 2:
                F(0x44, 0x1384);
                break;
            case 3:
                F(0x45, 0x1384);
                break;
            case 4:
                F(0x46, 0x1384);
                break;
            }
            break;
        case 1:
            switch (*(signed char *)(p + 0x28A8)) {
            case 4:
                F(0x48, 0x13B8);
                break;
            case 0:
                F(0x48, 0x13B8);
                break;
            }
            break;
        }
        break;
    case 4:
        switch (*(signed char *)(p + 0x46)) {
        case 0:
            D_01DFAB84[0] |= 0x1;
            D_01DFAB88[0] |= 0x4;
            D_01DFAB84[0] |= 0x2;
            D_01DFAB88[0] |= 0x8;
            D_01DFAB84[0] |= 0x4;
            D_01DFAB88[0] |= 0x10;
            D_01DFAB84[0] |= 0x8;
            D_01DFAB88[0] |= 0x20;
            D_01DFAB84[0] |= 0x10;
            D_01DFAB88[0] |= 0x40;
            break;
        case 1:
            D_01DFAB84[0] |= 0x40;
            D_01DFAB88[0] |= 0x100;
            D_01DFAB84[0] |= 0x40;
            D_01DFAB88[0] |= 0x100;
            break;
        }
        break;
    }
}

void func_00253CA0(char *);

void func_002D9F30(char *, int);

void func_0021D000(char *p, int k) {
    void func_0021C7A0(char *, int);
    switch ((unsigned char)k) {
    case 0:
        if (*(unsigned char *)(p + 0x2848) == 0x2A) {
            break;
        }
        *(unsigned char *)(p + 0x28A9) = 0;
        *(unsigned char *)(p + 0x28B3) = 1;
        *(float *)(p + 0x28CC) = 40.0f;
        *(float *)(p + 0x2AF0) = *(float *)(*(char **)(p + 0x283C) + 0x16C);
        if (*(unsigned char *)(p + 0x2848) == 0x29 || *(unsigned char *)(p + 0x2848) == 0x2C) {
            break;
        }
        if (*(unsigned char *)(p + 0x28AA) == 2) {
            break;
        }
        if (func_0023DF80(p, -20.0f) != 0) {
            func_0021C7A0(p, 0x28);
            break;
        }
        func_0021C100(p, 4, 0, 0.0f, -1.5f);
        break;
    case 1:
        func_00253CA0(p);
        *(float *)(p + 0x2AF0) = *(float *)(*(char **)(p + 0x283C) + 0x2C0);
        func_002D9F30(p, 5);
        func_0021C7A0(p, 0x28);
        *(unsigned char *)(p + 0x284C) = 1;
        break;
    }
}

void func_002DBD00(char *);

void func_00225D40(char *p) {
    void func_0021C380(char *, int);
    void func_002DA3A0(char *, short);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
        *(unsigned char *)(p + 0x2903) = 1;
        *(unsigned char *)(p + 0x2904) = 2;
        *(float *)(p + 0x150) = *(float *)(*(char **)(p + 0x2830) + 0x8A4);
        *(float *)(p + 0x154) = *(float *)(*(char **)(p + 0x2830) + 0x8AC);
        *(float *)(p + 0x64) = *(float *)(*(char **)(p + 0x2830) + 0x8B0);
        *(float *)(p + 0x74) = *(float *)(*(char **)(p + 0x2830) + 0x8BC);
        func_002DBD00(p);
        func_0021C380(p, 0);
        func_002490F0(p, 0, 9, -1, 0, 0, 7.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
        } else {
            func_002DA3A0(p, *(short *)(p + 0x28DC));
            func_002496D0(p);
        }
        break;
    }
}

void func_00228140(char *p) {
    void func_002DA3A0(char *, short);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002496D0(p);
        break;
    case 0x65:
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            func_002490F0(p, 0, 5, -1, 0, 10, -1.0f);
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
            *(float *)(p + 0x150) = 15.0f;
            *(float *)(p + 0x154) = 0.0f;
            *(float *)(p + 0x64) = 5.0f;
            *(float *)(p + 0x74) = -0.8f;
            func_002DBD00(p);
            *(unsigned char *)(p + 0x284D) = *(unsigned char *)(p + 0x284D) + 1;
            break;
        case 1:
            if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
                func_0021BFC0(p);
            } else {
                func_002496D0(p);
                func_002DA3A0(p, *(short *)(p + 0x28DC));
            }
            break;
        }
        break;
    }
}

static inline void func_00221240_h(char *p, short d, signed char v) {
    if (!(d < -0x2000 || d > 0x2000)) {
        *(signed char *)(p + 0x3B9F) = 0;
    } else if (d < -0x5FFF) {
        *(signed char *)(p + 0x3B9F) = 2;
    } else if (d >= 0x6000) {
        *(signed char *)(p + 0x3B9F) = v;
    } else if (0 > d) {
        *(signed char *)(p + 0x3B9F) = 1;
    } else {
        *(signed char *)(p + 0x3B9F) = 4;
    }
}

signed char func_00221240(char *p) {
    short d = *(short *)(p + 0x3BA2) - *(short *)(p + 0x28DC);
    if (*(unsigned char *)(p + 0x28A5) == 2) {
        return *(signed char *)(p + 0x3B9F) = 5;
    }
    if (*(signed char *)(p + 0x3D49) == 5 || *(unsigned char *)(p + 0x28A7) != 0) {
        func_00221240_h(p, d, 3);
    } else {
        func_00221240_h(p, d, 2);
    }
    return *(signed char *)(p + 0x3B9F);
}

signed char func_00221240(char *p);

void func_002498D0(char *);

void func_00249990(char *);

void func_002DAD80(char *, int, float);

void func_0021C770(char *, int);

void func_0021C580(char *, int);

typedef struct { float a; float b; int pad[4]; } E220;

static inline unsigned short ang_220(float d) {
    int i = 65536.0f * d / 360.0f + 0.5f;
    return (short)i;
}

static inline unsigned char st_220(char *p) {
    return *(unsigned char *)(p + 0x284C);
}

void func_00220FF0(char *p) {
    void func_002DB880(char *p, int a);
    void func_00220860(char *, int, int, float);
    unsigned short func_002DAE30(char *, char *, char *, short);
    short s;
    switch (st_220(p)) {
    case 0:
        func_002DBCA0(p, 1);
        p[0x28A5] = 0;
        func_002DBD20(p, (*(E220 **)(p + 0x2830))[*(unsigned char *)(p + 0x28A7) != 0].b, 0.0f);
        p[0x3BA0] = p[0x3B9F];
        func_00221240(p);
        func_00220860(p, 0, 0, 0.0f);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002498D0(p);
        func_00249990(p);
        break;
    }
    {
        func_002DAD80(p, 0, 1.0f);
        s = func_002DAE30(p, p + 0x90, p + 0x28E2, ang_220(*(float *)(*(char **)(p + 0x283C) + 0xC0)));
        *(short *)(p + 0x28DC) = func_002DACC0(p);
        func_002DB880(p, *(short *)(p + 0x28DC));
        if (func_00131B50(360.0f * (float)s / 65536.0f) < 0.5f * (*(float *)(*(char **)(p + 0x283C) + 0xC0) * *(float *)(p + 0x10))) {
            func_0021C770(p, 0xD);
            if (*(unsigned char *)(p + 0x284B) == 0xC) func_0021C580(p, 0xD);
        }
    }
}

int func_0021CB80(char *p) {
    return *(int *)(p + 0x2894) = *(int *)(*(char **)(p + 0x2834) + (*(unsigned char *)(p + 0x2848) << 3));
}

float func_0021CBE0(char *p, unsigned char k, float d) {
    if (k == 0) {
        if (*(unsigned char *)(p + 0x28AC) == 1) {
            return *(float *)(p + 0x28C4);
        }
        if (*(unsigned char *)(p + 0x28AE) == 1 || *(unsigned char *)(p + 0x3C79) == 1 || *(unsigned char *)(p + 0x3C78) == 1) {
            return *(float *)(p + 0x28C4);
        }
    }
    *(float *)(p + 0x28C4) += d;
    if (!(*(float *)(p + 0x28C4) <= *(float *)(p + 0x28C8))) {
        *(float *)(p + 0x28C4) = *(float *)(p + 0x28C8);
    }
    return *(float *)(p + 0x28C4);
}

void func_00226C80(char *p) {
    func_002496D0(p);
    if (!(*(float *)(p + 0x2924) <= *(float *)(p + 0x54) - 5.0f)) {
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + 5.0f;
    }
}

void func_002211D0(char *p) {
    void func_00220860(char *, int, int, float);
    void func_002497E0(char *);
    switch (*(unsigned char *)(p + 0x2850)) {
    case 0:
        func_00220860(p, 1, 0, 5.0f);
        *(unsigned char *)(p + 0x2850) = *(unsigned char *)(p + 0x2850) + 1;
        break;
    case 1:
        func_002497E0(p);
        func_00249860(p);
        break;
    }
}

void func_002205A0(char *p) {
    int func_00430EA0(char *, int);
    void func_002DA3A0(char *, int);
    if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
        func_0021BFC0(p);
        return;
    }
    func_00430EA0(p, 0);
    func_002DA650(p);
    func_002DA3A0(p, *(short *)(p + 0x28DC));
    if (*(unsigned char *)(p + 0x2904) != 6) {
        func_002496D0(p);
        *(float *)(p + 0x150) = *(float *)(p + 0x150) * 0.98f;
        return;
    }
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002496D0(p);
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) <= 0.0f) {
            func_002490F0(p, 0, 0x29, -1, 2, 0x32, -1.0f);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 1:
        func_002496D0(p);
        break;
    }
}

void func_0021FD40(char *p) {
    void func_0021C7A0(char *, int);
    void func_002DAE30(char *, char *, char *, int);
    void func_0021C380(char *, int);
    short func_00131B60(int);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        switch (*(unsigned char *)(p + 0x2904)) {
        case 2:
            func_002490F0(p, 0, 9, -1, 0, 0, -1.0f);
            *(short *)(p + 0x28DC) = func_002DACC0(p);
            *(short *)(p + 0x90) = *(short *)(p + 0x28DC) + 0x8000;
            break;
        case 0:
        case 1:
        case 3:
            func_002490F0(p, 0, 5, -1, 0, 0, -1.0f);
            *(short *)(p + 0x28DC) = func_002DACC0(p);
            *(short *)(p + 0x28E0) = func_00131B60((*(short *)(p + 0x90) - *(short *)(p + 0x28DC)) / 5);
            *(short *)(p + 0x28E2) = *(short *)(p + 0x28DC) - *(short *)(p + 0x90);
            break;
        case 4:
            func_002490F0(p, 0, 4, -1, 0, 0, -1.0f);
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
            break;
        }
        func_002DA2A0(p);
        *(float *)(p + 0x2870) = 9.0f;
        func_002DBD00(p);
        func_0021C380(p, 0);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        if (*(unsigned char *)(p + 0x2904) == 0) {
            func_002DAE30(p, p + 0x90, p + 0x28E2, *(short *)(p + 0x28E0));
        }
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) != 0) {
            func_0021C7A0(p, 6);
        }
        break;
    }
}

void func_00226A00(char *, int);

void func_00226C00(char *p, int a, unsigned char c) {
    func_00226A00(p, a);
    func_00226820(p, 0, 0, 0);
    if (c == 0) {
        func_002490F0(p, 0, 0x32, -1, 0, 0, -1.0f);
    }
}

int func_002DB3E0(char *, int);

static inline char *func_0021F6D0_e(char *p) {
    return (char *)((*(unsigned char *)(p + 0x28A7) != 0) * 0x18) + *(int *)(p + 0x2830);
}

void func_0021F6D0(char *p) {
    void func_0021C7A0(char *, int);
    void func_002DAE30(char *, char *, char *, int);
    short func_00131B60(int);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002DBCA0(p, 1);
        *(unsigned char *)(p + 0x28A5) = 0;
        func_002DBD20(p, *(float *)(func_0021F6D0_e(p) + 4), 0.0f);
        *(short *)(p + 0x28DC) = func_002DACC0(p);
        *(float *)(p + 0x2870) = *(float *)(func_0021F6D0_e(p) + 0x10);
        *(short *)(p + 0x28E0) = func_00131B60((int)((float)(*(short *)(p + 0x90) - *(short *)(p + 0x28DC)) / *(float *)(p + 0x2870)));
        *(short *)(p + 0x28E2) = *(short *)(p + 0x28DC) - *(short *)(p + 0x90);
        func_002490F0(p, 0, 1, -1, 2, 3, -1.0f);
        *(int *)(p + 0x28EC) = 0;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DAE30(p, p + 0x90, p + 0x28E2, *(short *)(p + 0x28E0));
        func_002496D0(p);
        break;
    }
    func_002DB3E0(p, *(short *)(p + 0x28DC));
    *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x2870) <= 0.0f) {
        func_0021C7A0(p, 3);
    }
}

int func_0021CF60(char *p) {
    unsigned char k;
    if (*(unsigned char *)(p + 0x28B2) == 1) return 0;
    if (*(unsigned char *)(p + 0x2848) == 0x26) return 0;
    k = *(unsigned char *)(p + 0x2848);
    if ((unsigned int)(k - 1) <= 3 || (k >= 10 && k < 15)) {
        *(unsigned char *)(p + 0x28B2) = 1;
        return 1;
    }
    return 0;
}

void func_00226A00(char *p, int a) {
    signed char k;
    p[0x28AB] = 1;
    if ((unsigned char)a) {
        if (*(unsigned char *)(p + 0x28AE) == 1 || *(unsigned char *)(p + 0x3C79) == 1 || *(unsigned char *)(p + 0x28AA) == 1) {
            if ((unsigned char)func_002242C0(p) == 1) {
                p[0x28A7] = 1;
                k = 0;
                p[0x28A1] = 1;
            } else if (*(unsigned char *)(p + 0x28B1) == 1) {
                p[0x28A7] = 1;
                p[0x28A1] = 1;
            } else {
                if (*(unsigned char *)(p + 0x3D4A) == 0) {
                    p[0x28A7] = 1;
                    p[0x28A1] = 1;
                } else {
                    p[0x28A7] = 2;
                    p[0x28A1] = 2;
                }
                k = *(signed char *)(p + 0x3D4A);
            }
            p[0x28A9] = 0;
            switch (*(signed char *)(p + 0x46)) {
            case 0:
                if (*(unsigned char *)(p + 0x28B1) == 1) {
                    p[0x28A8] = 5;
                    break;
                }
                switch (*(signed char *)((char *)(unsigned char)k + (int)p + 0x3D4C)) {
                case 0: p[0x28A8] = 0; break;
                case 1: p[0x28A8] = 1; break;
                case 2: p[0x28A8] = 2; break;
                case 3: p[0x28A8] = 3; break;
                case 4: p[0x28A8] = 4; break;
                }
                break;
            case 1:
                switch (*(signed char *)((char *)(unsigned char)k + (int)p + 0x3D4C)) {
                case 0xE: p[0x28A8] = 0; break;
                case 4: p[0x28A8] = 4; break;
                }
                break;
            }
        }
    } else if ((*(unsigned char *)(p + 0x28AE) == 0 && *(unsigned char *)(p + 0x3C79) == 0) || *(unsigned char *)(p + 0x28AA) == 1) {
        p[0x28A7] = 0;
        p[0x28A1] = 0;
        p[0x28A9] = 0;
    }
}

typedef struct { float a; float b; float c; short d; short pad; float e; float f; } E21F;

void func_0021F850(char *p) {
    void func_002DAE30(char *, char *, char *, int);
    short func_00131B60(int);
    float f;
    short s;
    float c;
    float v;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(float *)(p + 0x2870) = (*(E21F **)(p + 0x2830))[(*(unsigned char *)(p + 0x28A7) != 0) + 1].a;
        (*(unsigned char *)(p + 0x284C))++;
        *(float *)(p + 0x28EC) = 0.0f;
    case 1:
        *(short *)(p + 0x28DC) = func_002DACC0(p);
        *(short *)(p + 0x28E2) = *(short *)(p + 0x28DC) - *(short *)(p + 0x90);
        s = *(short *)(p + 0x28E2);
        if (s < 0xB6 && s > -0xB6) *(short *)(p + 0x28E2) = 0;
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
        func_002DAE30(p, p + 0x90, p + 0x28E2, (*(E21F **)(p + 0x2830))[(*(unsigned char *)(p + 0x28A7) != 0)].d);
        if (*(unsigned char *)(p + 0x28A5) == 0) {
            v = (*(E21F **)(p + 0x2830))[(*(unsigned char *)(p + 0x28A7) != 0)].b;
        } else {
            v = (*(E21F **)(p + 0x2830))[(*(unsigned char *)(p + 0x28A7) != 0)].c;
        }
        f = *(float *)(p + 0x150) - v;
        if (0.0f != f && -0.0f != f) {
            c = func_00131B50(*(float *)(p + 0x154));
            if (!(c <= func_00131B50(f))) func_002DBD20(p, v, 0.0f);
        }
        if (*(unsigned char *)(p + 0x28A5) == 0) {
            if ((unsigned char)func_002DAD40(p) == 1) {
                *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
                if (*(float *)(p + 0x2870) <= 0.0f) {
                    *(unsigned char *)(p + 0x28A5) = 1;
                    *(float *)(p + 0x154) = ((*(E21F **)(p + 0x2830))[(*(unsigned char *)(p + 0x28A7) != 0)].c - *(float *)(p + 0x150)) / (*(E21F **)(p + 0x2830))[(*(unsigned char *)(p + 0x28A7) != 0)].f;
                    if (*(unsigned char *)(p + 0x28A0) == 0) {
                        func_002490F0(p, 0, 2, -1, 2, 5, -1.0f);
                    } else {
                        func_002490F0(p, 0, 0x33, -1, 2, 5, -1.0f);
                    }
                }
            } else {
                *(float *)(p + 0x2870) = (*(E21F **)(p + 0x2830))[(*(unsigned char *)(p + 0x28A7) != 0) + 1].a;
            }
        } else if ((unsigned char)func_002DAD40(p) == 0) {
            *(unsigned char *)(p + 0x28A5) = 0;
            func_002DBD20(p, (*(E21F **)(p + 0x2830))[(*(unsigned char *)(p + 0x28A7) != 0)].b, 0.0f);
            func_002490F0(p, 0, 1, -1, 2, 5, -1.0f);
        } else {
            *(unsigned char *)(p + 0x28A5) = 1;
            func_002DBD20(p, (*(E21F **)(p + 0x2830))[(*(unsigned char *)(p + 0x28A7) != 0)].c, 0.0f);
            if (*(unsigned char *)(p + 0x28A0) == 0) {
                if (*(unsigned short *)(p + 0x24C6) != 2) func_002490F0(p, 0, 2, -1, 0, 0, -1.0f);
            } else {
                if (*(unsigned short *)(p + 0x24C6) != 0x33) func_002490F0(p, 0, 0x33, -1, 0, 0, -1.0f);
            }
        }
        func_002DB3E0(p, *(short *)(p + 0x28DC));
        func_002496D0(p);
        break;
    }
}

char *func_002283A0(char *s, char *out) {
    int n = 0;
    while (*s == ' ' || *s == '\r' || (unsigned int)(*s - 9) <= 1 || *s == 0) {
        if (*s == 0) {
            *out = 0;
            return 0;
        }
        s++;
    }
    while (*s != ' ' && *s != '\r' && *s != '\n' && *s != '\t' && *s != 0) {
        out[n] = *s;
        n++;
        s++;
    }
    out[n] = 0;
    return s;
}

extern unsigned char D_005455B8[];

int func_002DA090(int);

void func_0024C010(char *, int);

void func_0021C7E0(char *p, int a, int b, int c) {
    void func_0021CB60(char *, int);
    signed char cc = c;
    if (cc != 1) func_0021C770(p, a);
    func_0021C580(p, a);
    switch ((unsigned char)func_002DA090(*(signed char *)(p + 0x3D49))) {
    case 0:
        if (++*(unsigned char *)(p + 0x29A0) > 100) *(unsigned char *)(p + 0x29A0) -= 2;
        func_0021CA00(p, 0);
        break;
    case 1:
        if (++*(unsigned char *)(p + 0x299F) > 100) *(unsigned char *)(p + 0x299F) -= 2;
        if ((*(unsigned int *)(p + 0x2898) & 2) &&
            *(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C) != 5) {
            func_0021CA00(p, 0);
        }
        break;
    }
    if (D_005455B8[*(signed char *)(p + 0x3D49)] == 0) {
        *(signed char *)(p + 0x3D72) = *(signed char *)((char *)*(unsigned char *)(p + 0x3D4A) + (int)p + 0x3D4C);
    } else {
        *(signed char *)(p + 0x3D73) = *(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C);
    }
    (*(signed char *)(p + 0x29A2))++;
    func_0021CB50(p, 0x10000);
    func_0021CB60(p, 0x40000);
    *(unsigned char *)(p + 0x411A) = 0;
    if (cc) {
        switch ((signed char)b) {
        case 0:
            func_0024C010(*(char **)D_01CAFF0C, b);
            break;
        case 1:
            *(unsigned char *)(p + 0x4112) = 0;
            *(unsigned char *)(p + 0x4115) = 0;
            *(unsigned char *)(p + 0x4116) = 0x63;
            func_0024C010(*(char **)D_01CAFF0C, b);
            break;
        case -1:
            *(unsigned char *)(p + 0x4112) = 0;
            *(unsigned char *)(p + 0x4115) = 0;
            *(unsigned char *)(p + 0x4116) = 0x63;
            break;
        }
    }
}

void func_002282B0();

void func_00228300();

void func_00228350();

void func_0021DD00(int p0) {
    func_00228350((p0 + 200));
    func_00228300((p0 + 10704));
    func_002282B0((p0 + 10384));
}

void func_00228260(char **h) {
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

int func_0021CAD0(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = 17;
    if (*(unsigned char *)(p0 + 10312) == tmp0) {
        return *(unsigned char *)(p0 + 10648);
    }
    return 0;
}

int func_0021CAF0(p0) char *p0; {
    int func_0021CB60();
    int v0;
    char *v1;
    *(int *)(p0 + 10396) = *(int *)(p0 + 10392);
    v0 = *(int *)((char (*)[8])((char *)*(int *)(p0 + 10292) + 4))[*(unsigned char *)(p0 + 10312)];
    v1 = p0;
    if (v0 != 0) {
        *(int *)(v1 + 10392) = v0;
    } else {
        func_0021CB60(p0, 0x40000);
    }
    return *(int *)(v1 + 10392);
}

int func_0021CBC0(p0, p1) char *p0; int p1; {
    int tmp0;
    tmp0 = (*(int *)(p0 + 10388) & ~p1);
    *(int *)(p0 + 10388) = (*(int *)(p0 + 10388) & ~p1);
    return tmp0;
}

float func_0021CC70(char *p0, float f0) {
    float v0;
    float v1;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) {
        return *(float *)(p0 + 10436);
    } else {
        if (*(unsigned char *)(p0 + 10412) == 1) {
            return *(float *)(p0 + 10436);
        } else {
            if (*(unsigned char *)(p0 + 10416) == 6) {
                return *(float *)(p0 + 10436);
            } else {
                v0 = 0.0f;
                *(float *)(p0 + 10436) -= f0;
                if (*(float *)(p0 + 10436) <= v0) {
                    *(float *)(p0 + 10436) = v0;
                }
                v1 = *(float *)(p0 + 10436);
                return v1;
            }
        }
    }
}

float func_0021CCF0(char *p0, float f0) {
    float v0;
    float v1;
    if (*(unsigned char *)(p0 + 10412) == 1) {
        return *(float *)(p0 + 10964);
    } else {
        v0 = 0.0f;
        *(float *)(p0 + 10964) -= f0;
        if (*(float *)(p0 + 10964) < v0) {
            *(float *)(p0 + 10964) = v0;
        }
        v1 = *(float *)(p0 + 10964);
        return v1;
    }
}

extern char D_00545960[];

extern char D_01DF5D20[];

void func_0021CD40(p0) char *p0; {
    int v0;
    float v1;
    v0 = 1;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) != v0) {
        if (*(unsigned char *)(p0 + 10412) != v0) {
            if (*(unsigned char *)(p0 + 10416) != 6) {
                *(float *)(p0 + 10964) = (*(float *)(p0 + 10964) + (*(float *)((D_00545960 + (*(signed char *)(p0 + 10408) << 2)) + 0) * *(float *)D_01DF5D20));
                v1 = *(float *)(p0 + 10920);
                if (*(float *)(p0 + 10964) > v1) {
                    *(float *)(p0 + 10964) = v1;
                }
            }
        }
    }
}

void func_0021CFD0(p0, p1) char *p0; int p1; {
    void func_0021C7A0();
    *(char *)(p0 + 10497) = *(signed char *)(p0 + 10496);
    *(char *)(p0 + 10496) = p1;
    *(char *)(p0 + 10410) = 2;
    func_0021C7A0(p0, 39);
}

int func_0021D260(p0, p1, p2) int p0; int p1; int p2; {
    void func_0021C7A0();
    int func_0021CB60();
    int func_0021D1D0();
    int v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    v0 = p1;
    v1 = p2;
    v2 = (char *)p0;
    tmp0 = func_0021D1D0();
    if ((tmp0 & 255) == 0) {
        return 0;
    } else {
        tmp1 = 43;
        if (*(unsigned char *)(v2 + 10312) == tmp1) {
            return 0;
        } else {
            *(char *)(v2 + 11001) = v0;
            *(char *)(v2 + 11003) = 99;
            *(char *)(v2 + 11005) = 0;
            *(int *)(v2 + 9404) = v1;
            *(char *)(v2 + 11002) = (*(unsigned char *)(v2 + 11002) + 1);
            v3 = *(unsigned char *)(v2 + 11002);
            if (v3 == 0) {
                *(char *)(v2 + 11002) = (v3 + 1);
            }
            func_0021C7A0(v2, 43);
            func_0021CB60(v2, 0x40000);
            v4 = *(unsigned char *)(v2 + 11002);
            return v4;
        }
    }
}

int func_0021CBA0(char *p) { return *(int *)(p + 10388); }

void func_0021CF50(char *p, int v) { *(int *)(p + 9408) = v; }

void func_0021CFF0(char *p, char v) { *(char *)(p + 10498) = v; }

void func_0021F080(void) {}

void func_0021F070(char *p0) {
    *(char *)(p0 + 4) = 3;
}

int func_0021C520(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    void func_0021C380();
    int func_0021C7A0();
    int v0;
    int tmp0;
    *(char *)(p0 + 15469) = p1;
    v0 = (int)p0;
    if ((p2 & 1) != 0) {
        func_0021C380(p0, 5);
    } else {
        func_0021C380(p0, 6);
    }
    tmp0 = func_0021C7A0(v0, 28);
    return tmp0;
}
