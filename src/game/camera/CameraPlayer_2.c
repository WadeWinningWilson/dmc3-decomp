short func_002DAA60(char *, char *);

void func_0023F8E0(char *p) {
    int func_002F0A50(char *, char *);
    int func_002F0740(char *, int, unsigned char);
    void func_0023F760(char *);
    int func_0023F670(char *, char *, short);
    void func_002F1830(char *, int);
    int r = 0;
    unsigned char ok;
    if (*(unsigned char *)(p + 0x3B9C) == 1) {
        return;
    }
    if (*(unsigned char *)(p + 0x28A6) == 0) {
        ok = func_002F0740(p + 0x2B58, 0, *(unsigned char *)(p + 0xD4));
        *(unsigned char *)(p + 0x3B9C) = 1;
        func_0023F760(p);
        *(unsigned char *)(p + 0x28A6) = 1;
        *(int *)(p + 0x3C60) = 0;
        if (ok == 1) {
            r = func_0023F670(p, p + 0x3C40, *(short *)(p + 0x90));
        }
    } else {
        ok = func_002F0740(p + 0x2B58, 1, *(unsigned char *)(p + 0xD4));
        *(unsigned char *)(p + 0x3B9C) = 1;
        func_0023F760(p);
        if (ok == 1) {
            r = func_002F0A50(p + 0x2B58, p + 0x3C40);
        }
    }
    if (r == 0) {
        *(short *)(p + 0x3BA2) = *(short *)(p + 0x90);
        *(unsigned char *)(p + 0x3B9D) = 0;
    } else {
        *(short *)(p + 0x3BA2) = func_002DAA60(p, p + 0x3C40);
        *(unsigned char *)(p + 0x3B9D) = 1;
        func_002F1830(p + 0x2B58, r);
    }
}

short func_002DACC0(char *);

extern char D_01CAFF0C[];

short func_00131D10(float, float);

float func_00131C20(short);

float func_00131BA0(short);

void func_00245810(char *, char *, float *, float);

unsigned char func_00245EF0(char *, float *, short, float *, char *, int, float);

float func_00132510(float *);

float func_0011DBE0(float, float);

void func_00132540(float *, float *, float);

unsigned char func_002018A0(char *, float *, float *, float *, char *, int);

float func_00132D80(float *, float *);

unsigned char func_00245590(char *, float *, float *, char *, float, float);

int func_002452A0(char *p, float lim) {
    float d8C;
    float f88;
    float v70[4] __attribute__((aligned(16)));
    float v60[4] __attribute__((aligned(16)));
    float v50[4] __attribute__((aligned(16)));
    float v40[4] __attribute__((aligned(16)));
    short ang;
    float e;
    short a;
    d8C = 100000.0f;
    if (*(unsigned char *)(p + 0x290D) == 1) return 0;
    func_00245810(p, p + 0x50, &d8C, 300.0f);
    if (!(300.0f + *(float *)(p + 0x54) <= d8C)) return 0;
    ang = func_002DACC0(p);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v70), "r"(p + 0x50) : "memory");
    v70[1] = v70[1] + 100.0f;
    if (func_00245EF0(p, v70, ang, &f88, p + 0x2928, 0x1000, 100.0f) == 1) {
        v60[0] = *(float *)(p + 0x2950);
        v60[1] = *(float *)(p + 0x2954);
        v60[2] = *(float *)(p + 0x2958);
        v60[3] = 1.0f;
        e = func_0011DBE0(v60[1], func_00132510(v60));
        if (e < 0.5235988f) {
            if (!(e <= -0.5235988f)) {
                v60[1] = 0.0f;
                func_00132540(v60, v60, 100.0f);
                v60[0] = v70[0] - v60[0];
                v60[1] = v70[1];
                v60[2] = v70[2] - v60[2];
                if (func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v70, v60, v40, p + 0x2928, 0) == 1) {
                    v60[0] = func_00131BA0(ang);
                    v60[1] = 0.0f;
                    v60[2] = func_00131C20(ang);
                    v60[3] = 1.0f;
                    v50[0] = *(float *)(p + 0x2950);
                    v50[1] = *(float *)(p + 0x2954);
                    v50[2] = *(float *)(p + 0x2958);
                    v50[3] = 1.0f;
                    f88 = func_00132D80(v60, v50);
                    if (f88 < lim) {
                        v50[0] = v50[0] * -1.0f;
                        v50[2] = v50[2] * -1.0f;
                        if (func_00245590(p, v70, v50, p + 0x2928, -0.5235988f, 300.0f) == 1) {
                            a = func_00131D10(v50[0], v50[2]);
                            if ((short)(a - ang) > 0) {
                            *(short *)(p + 0x28DC) = a - 0x4000;
                            *(unsigned char *)(p + 0x3C6D) = 0;
                            } else {
                            *(short *)(p + 0x28DC) = a + 0x4000;
                            *(unsigned char *)(p + 0x3C6D) = 1;
                            }
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

extern char D_00666710[];

unsigned short func_001AE770(char *, int);

void func_0023D480(char *p);

extern unsigned char D_01CAFF3E[];

int func_002D8670(char *);

void func_0023F3E0(char *);

int func_00240820(char *);

void func_00240E10(char *);

void func_00240ED0(char *);

void func_002411B0(char *);

int func_0023F190(char *);

int func_0023DAD0(char *);

int func_00241230(char *);

int func_0023FA10(char *);

int func_0023D880(char *);

void func_0023CB30(char *);

void func_0023CB80(char *);

void func_0023CBD0(char *);

void func_0023CC20(char *);

void func_0023CC60(char *);

void func_0023CC80(char *);

void func_0023CD90(char *);

void func_0023CE00(char *);

void func_0023CE60(char *);

void func_0023CEB0(char *);

void func_0023CF10(char *);

void func_0023CF70(char *);

void func_0023CFC0(char *);

void func_0023D000(char *);

void func_0023D040(char *);

void func_0023D0C0(char *);

void func_0023D1F0(char *);

void func_0023D250(char *);

void func_0023D2B0(char *);

void func_0023D330(char *);

void func_0023D410(char *);

void func_0023D430(char *);

void func_0023D630(char *);

void func_0023D750(char *);

void func_0023D870(char *);

void func_0023D8D0(char *);

void func_0023D8E0(char *);

void func_0023D940(char *);

void func_0023D960(char *);

static inline int is1_23C(char *p) { return *(unsigned char *)(p + 0x3CE1) == 1; }

void func_0023C680(char *p) {
    extern unsigned short D_0066671A[];
    void func_002F0740(char *, int, int);
    if (*(unsigned char *)(p + 0x28AA) == 2) {
        *(int *)(p + 0x2894) = 2;
        if ((unsigned char)func_002D8670(p) == 1) {
            func_002F0740(p + 0x2B58, 0, *(unsigned char *)(p + 0xD4));
            *(unsigned char *)(p + 0x3B9C) = 1;
            return;
        }
    }
    if (*(unsigned char *)(p + 0x2905) == 1 && (*(float *)(p + 0x2910) -= *(float *)(p + 0x10)) < 0.0f) {
        *(float *)(p + 0x2910) = 0.0f;
        *(unsigned char *)(p + 0x2905) = 0;
    }
    if (D_01CAFF3E[0] == 1) {
        if (*(unsigned short *)(p + 0x49C4) & D_0066671A[func_001AE770(D_00666710, 0x80)]) {
            *(unsigned char *)(p + 0x4110) = 0;
        }
        if (*(signed char *)(p + 0x46) == 0 && (*(unsigned short *)(p + 0x49C4) & D_0066671A[func_001AE770(D_00666710, 0x20)]) && *(unsigned char *)(p + 0x2998) == 0x86) {
            *(unsigned char *)(p + 0x4110) = 0;
        }
        *(float *)(p + 0x410C) += *(float *)(p + 0x10);
        if (*(unsigned char *)(p + 0x4118) != 0 && *(unsigned char *)(p + 0x4117) != *(unsigned char *)(p + 0x2998)) {
            *(unsigned char *)(p + 0x4117) = 0xFF;
            *(unsigned char *)(p + 0x4118) = 0;
        }
    }
    func_0023F3E0(p);
    if ((unsigned char)is1_23C(p) == 1) return;
    if (func_00240820(p) != 0) return;
    if (*(unsigned char *)(p + 0x3C79) == 1) func_00240E10(p);
    func_00240ED0(p);
    func_002411B0(p);
    if (func_0023F190(p) != 0) return;
    if (func_0023DAD0(p) != 0) return;
    if (func_00241230(p) != 0) return;
    if (func_0023FA10(p) != 0) return;
    if (func_0023D880(p) != 0) return;
    switch (*(unsigned char *)(p + 0x2848)) {
    case 0x0:
        break;
    case 0x1:
        func_0023CB30(p);
        break;
    case 0x2:
        func_0023CB80(p);
        break;
    case 0x3:
        func_0023CBD0(p);
        break;
    case 0x4:
        func_0023CC20(p);
        break;
    case 0x5:
        func_0023CC60(p);
        break;
    case 0x6:
        func_0023CC80(p);
        break;
    case 0x7:
        func_0023CC80(p);
        break;
    case 0x8:
        func_0023CE00(p);
        break;
    case 0x9:
        func_0023CD90(p);
        break;
    case 0xA:
        func_0023CE60(p);
        break;
    case 0xB:
        func_0023CEB0(p);
        break;
    case 0xC:
        func_0023CF10(p);
        break;
    case 0xD:
        func_0023CF70(p);
        break;
    case 0xE:
        func_0023CFC0(p);
        break;
    case 0xF:
        func_0023CC60(p);
        break;
    case 0x10:
        func_0023D000(p);
        break;
    case 0x11:
        func_0023D960(p);
        break;
    case 0x12:
        func_0023CB30(p);
        break;
    case 0x13:
        func_0023D040(p);
        break;
    case 0x14:
        func_0023D040(p);
        break;
    case 0x15:
        func_0023D040(p);
        break;
    case 0x16:
        func_0023D0C0(p);
        break;
    case 0x17:
        func_0023D1F0(p);
        break;
    case 0x18:
        func_0023D250(p);
        break;
    case 0x19:
        break;
    case 0x1A:
        break;
    case 0x1B:
        func_0023D2B0(p);
        break;
    case 0x1C:
        func_0023D330(p);
        break;
    case 0x1D:
        func_0023CC80(p);
        break;
    case 0x1E:
        func_0023CC80(p);
        break;
    case 0x1F:
        func_0023D410(p);
        break;
    case 0x20:
        func_0023CC80(p);
        break;
    case 0x21:
        func_0023D430(p);
        break;
    case 0x22:
        func_0023D480(p);
        break;
    case 0x23:
        func_0023D630(p);
        break;
    case 0x24:
        func_0023D750(p);
        break;
    case 0x25:
        func_0023D870(p);
        break;
    case 0x26:
        func_0023D8D0(p);
        break;
    case 0x27:
        break;
    case 0x28:
        func_0023CB30(p);
        break;
    case 0x29:
        func_0023D8E0(p);
        break;
    case 0x2A:
        break;
    case 0x2B:
        func_0023D940(p);
        break;
    case 0x2C:
        break;
    }
}

void func_0021C100(char *, int, int, float, float);

void func_0023D5B0(char *p) {
    *(char *)(p + 0x28A9) = 0;
    *(float *)(p + 0x291C) = *(float *)(*(char **)(p + 0x283C) + 0x2F0);
    *(unsigned char *)(p + 0x299F) = (unsigned int)*(float *)(*(char **)(p + 0x283C) + 0x2C4);
    func_0021C100(p, 7, 10, 0.0f, -1.5f);
}

int func_002DAD40(char *);

void func_0021BEA0(char *, int);

int func_0023E460(char *p) {
    int func_0021CBA0(char *);
    int func_0023F760(char *);
    if ((func_0021CBA0(p) & 0x200) && (*(int *)(p + 0x2898) & 1) && (unsigned char)func_002DAD40(p) == 2 &&
        (unsigned char)func_0023F760(p) == 1 && *(unsigned char *)(p + 0x284A) != 10) {
        func_0021BEA0(p, 0);
        return 1;
    }
    return 0;
}

void func_0021C7A0(char *, int);

int func_0023F330(char *p) {
    int func_0021CBA0(char *);
    int func_0023F760(char *);
    extern char D_0066671A[];
    if (*(unsigned char *)(p + 0x28A6) != 0) {
        return 0;
    }
    if ((unsigned char)func_0023F760(p) == 0) {
        return 0;
    }
    if ((func_0021CBA0(p) & 0x20) &&
        !(*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 8)])) {
        func_0021C7A0(p, 11);
        return 1;
    }
    return 0;
}

int func_00244DF0(char *, int);

int func_0023E1F0(char *p) {
    int func_0021CBA0(char *);
    void func_0021BDB0(char *, int, int);
    if (((unsigned char)func_00244DF0(p, 0x8000000F) == 1 || (func_0021CBA0(p) & 2)) && (*(int *)(p + 0x2898) & 1) &&
        (unsigned char)func_002DAD40(p) != 2) {
        if (*(unsigned char *)(p + 0x28A6) == 0) {
            func_0021C7A0(p, 2);
        } else {
            func_0021BDB0(p, 0, 0);
            func_0021C7A0(p, 12);
        }
        return 1;
    }
    return 0;
}

extern int D_01CAFF38[];

int func_002242C0(char *);

extern char D_00544990[];

extern char D_005449B0[];

extern char D_005449F0[];

extern char D_00544A30[];

extern char D_00544A70[];

#define QCOPY244(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

int func_00244A40(char *p, float *out) {
    float func_001324B0(float *, char *);
    char *t;
    unsigned int n;
    unsigned int i;
    char *e;
    unsigned int r;
    float h;
    r = (unsigned char)func_002242C0(p);
    n = 1;
    if (r == 1) return 0;
    switch (D_01CAFF38[0]) {
    case 4:
    case 0x258:
        t = D_00544990;
        n = 1;
        break;
    case 0x7C:
    case 0x82:
        t = D_005449B0;
        n = 2;
        break;
    case 0x88:
        t = D_005449F0;
        n = 2;
        break;
    case 0x12E:
    case 0x1A3:
        t = D_00544A30;
        n = 2;
        break;
    case 0x384:
        t = D_00544A70;
        break;
    default:
        return 0;
    }
    for (i = 0; i < n; i++) {
        e = t + i * 32;
        QCOPY244(out, e);
        if (*(unsigned int *)(p + 0x2898) & 2) {
            if (50.0f + out[1] < *(float *)(p + 0x54) && !(out[1] + *(float *)(e + 0x10) <= *(float *)(p + 0x54)) &&
                func_001324B0(out, p + 0x50) < 150.0f) {
                out[1] = *(float *)(p + 0x54);
                return 1;
            }
        } else {
            h = *(float *)(e + 0x10);
            if (!(out[1] + h - 50.0f <= *(float *)(p + 0x54)) && func_001324B0(out, p + 0x50) < 100.0f) {
                out[1] = *(float *)(p + 0x54);
                return 1;
            }
        }
    }
    return 0;
}

int func_0023E330(char *p) {
    int func_0021CBA0(char *);
    int func_0023F760(char *);
    void func_0021BDB0(char *, int, int);
    if (((unsigned char)func_00244DF0(p, 0x8000000A) == 1 || (func_0021CBA0(p) & 0x40) || (func_0021CBA0(p) & 0x100)) &&
        (*(int *)(p + 0x2898) & 1) && (unsigned char)func_002DAD40(p) != 2 && (unsigned char)func_0023F760(p) == 1) {
        if (func_0021CBA0(p) & 0x40) {
            func_0021BDB0(p, 0, 0);
            func_0021C7A0(p, 0xC);
            return 1;
        }
        if ((func_0021CBA0(p) & 0x100) && *(unsigned char *)(p + 0x284A) != 0xC && *(unsigned char *)(p + 0x284A) != 0xD &&
            *(unsigned char *)(p + 0x284A) != 0xE) {
            func_0021BEA0(p, 0);
            return 1;
        }
    }
    return 0;
}

int func_0023EDD0(char *p) {
    extern char D_0066671A[];
    int func_0021CBA0(char *);
    if (!(*(int *)(p + 0x2898) & 2)) {
        return 0;
    }
    if ((unsigned char)func_00244DF0(p, 0x8000000F) == 1 || (unsigned char)func_00244DF0(p, 0x80000005) == 1 ||
        (func_0021CBA0(p) & 8)) {
        if (*(signed char *)(p + 0x2909) <= 0) {
            return 0;
        }
        if (*(unsigned char *)(p + 0x28AE) == 1 &&
            (*(signed char *)(p + 0x28A8) == 3 ||
             (*(signed char *)(p + 0x28A8) == 5 && ((signed char *)(p + 0x3D4C))[*(unsigned char *)(p + 0x3D4A)] == 3)) &&
            (*(int *)(p + 0x29E4) & 4) && *(unsigned char *)(p + 0x28A9) == 0 && *(float *)(p + 0x291C) <= 0.0f &&
            (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 8)]) &&
            (*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x40)])) {
            *(unsigned char *)(p + 0x28A9) = 1;
            *(signed char *)(p + 0x2909) = 0;
            func_0021C7A0(p, 0x25);
            return 1;
        }
    }
    return 0;
}

void func_0021C380(char *, int);

short func_002DACE0(char *);

int func_0023EF80(char *p) {
    extern char D_0066671A[];
    int func_0021CBA0(char *);
    if (!(*(int *)(p + 0x2898) & 2)) {
        return 0;
    }
    if ((unsigned char)func_00244DF0(p, 0x8000000F) == 1 || (unsigned char)func_00244DF0(p, 0x80000005) == 1 ||
        (func_0021CBA0(p) & 8)) {
        if (!(*(float *)(p + 0x2914) <= 0.0f)) {
            return 0;
        }
        if (*(signed char *)(p + 0x2906) <= 0) {
            return 0;
        }
        if ((*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x40)]) ||
            (*(unsigned char *)(p + 0x2848) == 0x11 && *(unsigned char *)(p + 0x2905) == 1)) {
            if (*(signed char *)(p + 0x46) == 0) {
                switch (((signed char *)(p + 0x3D4C))[*(unsigned char *)(p + 0x3D4A)]) {
                case 0:
                    if (!(*(int *)(p + 0x29F0) & 0x40000)) {
                        return 0;
                    }
                    break;
                case 2:
                    if (!(*(int *)(p + 0x29F0) & 0x80000)) {
                        return 0;
                    }
                    break;
                case 4:
                    if (!(*(int *)(p + 0x29F0) & 0x100000)) {
                        return 0;
                    }
                    break;
                default:
                    return 0;
                }
            }
            func_0021C380(p, 2);
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
            *(short *)(p + 0x28E2) = func_002DACE0(p);
            *(unsigned char *)(p + 0x2903) = 2;
            func_0021C7A0(p, 7);
            return 1;
        }
    }
    return 0;
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_002477F0(char *, float);

#define VSUBR(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

void func_00247770(char *p, char *t) {
    float v[4];
    float d[4];
    QCOPY(v, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
    v[1] = v[1] + *(float *)(p + 0xD0);
    VSUBR(d, t, v);
    func_002477F0(p, func_0011DBE0(d[0], d[2]));
}

float func_0011D798(float);

float func_0011DA38(float);

void func_00248AF0(char *p, float *out, float *base, float a) {
    float r = *(float *)(p + 0xD8) * func_0011D798(*(float *)(p + 0xD4));
    out[1] = base[1] + *(float *)(p + 0xD8) * func_0011DA38(*(float *)(p + 0xD4));
    out[0] = base[0] + r * func_0011DA38(a);
    out[2] = base[2] + r * func_0011D798(a);
    out[3] = 1.0f;
}

void func_0021C7E0(char *, int, int, int);

int func_00242260(char *p, char *m) {
    int func_0023F760(char *);
    char *func_0023F670(char *, char *, short);
    char *func_002F0A50(char *, char *);
    void func_002F1830(char *, char *);
    unsigned char chg;
    char *o;
    signed char c;
    *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
    *(unsigned char *)(p + 0x2998) = *(unsigned char *)(m + 2);
    c = *(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C);
    chg = 0;
    if (c != *(signed char *)(p + 0x3D49)) chg = 1;
    *(signed char *)(p + 0x3D49) = c;
    if (*(unsigned int *)(p + 0x2898) & 2) {
        func_0021C7E0(p, 0x11, 1, -1);
        o = func_002F0A50(p + 0x2B58, p + 0x3C40);
        if (o) {
            *(short *)(p + 0x3BA2) = func_002DAA60(p, p + 0x3C40);
            func_002F1830(p + 0x2B58, o);
            *(unsigned char *)(p + 0x3B9D) = 1;
        } else {
            *(short *)(p + 0x3BA2) = *(short *)(p + 0x90);
            *(unsigned char *)(p + 0x3B9D) = 0;
        }
        return 1;
    }
    if ((unsigned char)func_0023F760(p) == 0) return 0;
    if (*(signed char *)(p + 0x46) == 0 && *(unsigned char *)(m + 2) == 0x88) {
        func_0021C7E0(p, 0x11, 1, -1);
        return 1;
    }
    func_0021C7E0(p, 0x11, 1, 1);
    if (*(unsigned char *)(p + 0x284A) < 10 || *(unsigned char *)(p + 0x284A) > 14 || chg == 1) {
        if (*(unsigned char *)(p + 0x28A6) == 0) {
            if ((unsigned char)func_002DAD40(p) == 2 || *(unsigned char *)(p + 0x2849) == 0x11) {
                o = func_002F0A50(p + 0x2B58, p + 0x3C40);
            } else {
                o = func_0023F670(p, p + 0x3C40, func_002DACC0(p));
            }
            if (o) {
                *(short *)(p + 0x3BA2) = func_002DAA60(p, p + 0x3C40);
                func_002F1830(p + 0x2B58, o);
                *(unsigned char *)(p + 0x3B9D) = 1;
                *(float *)(p + 0x3C60) = 50.0f;
            } else {
                *(short *)(p + 0x3BA2) = *(short *)(p + 0x90);
                *(unsigned char *)(p + 0x3B9D) = 0;
            }
        }
        func_0021BEA0(p, 0);
    }
    return 1;
}

unsigned int func_002F0A40(char *);

int func_0034B800(char *, char *, short, int, float);

int func_00243FC0(char *p, unsigned char k) {
    float func_001324B0(char *, char *);
    switch (k) {
    case 0:
        if (func_002F0A40(p + 0x2B58) < 3) break;
        return 1;
    case 1:
        if (*(unsigned char *)(p + 0x3B9D) != 1) break;
        if ((unsigned char)func_0034B800(p + 0x3C40, p + 0x50, *(short *)(p + 0x90), 0x4000, 10000.0f) != 1) break;
        return 1;
    case 2:
        if (*(unsigned char *)(p + 0x3B9D) != 1) break;
        if ((unsigned char)func_0034B800(p + 0x3C40, p + 0x50, *(short *)(p + 0x90), 0x4000, 10000.0f) != 1) break;
        if ((unsigned char)func_0034B800(p + 0x3C40, p + 0x50, *(short *)(p + 0x90), 0x4000, 300.0f)) break;
        return 1;
    case 3:
        if (*(unsigned char *)(p + 0x3B9D) != 1) break;
        if ((unsigned char)func_0034B800(p + 0x3C40, p + 0x50, *(short *)(p + 0x90), 0x4000, 300.0f) != 1) break;
        return 1;
    case 4:
        if (*(unsigned char *)(p + 0x3B9D) != 1) break;
        if ((unsigned char)func_0034B800(p + 0x3C40, p + 0x50, *(short *)(p + 0x90), 0x4000, 300.0f) != 1) break;
        return 1;
    case 5:
        if (*(unsigned char *)(p + 0x3B9D) != 1) break;
        if (func_001324B0(p + 0x3C40, p + 0x50) < 300.0f) break;
        return 1;
    case 6:
        if (*(unsigned char *)(p + 0x3B9D) != 1) break;
        if (!(func_001324B0(p + 0x3C40, p + 0x50) < 300.0f)) break;
        return 1;
    }
    return 0;
}

int func_0023F290(p0) char *p0; {
    void func_0021BDB0();
    int func_0021CBA0();
    int func_0023F760();
    char *v0;
    int v1;
    int tmp0;
    int tmp1;
    v0 = p0;
    if (*(unsigned char *)(p0 + 10406) != 1) {
        v1 = 0;
    } else {
        tmp0 = func_0023F760();
        if ((tmp0 & 255) == 0) {
            v1 = 0;
        } else {
            tmp1 = func_0021CBA0(v0);
            if ((tmp1 & 16) != 0) {
                *(char *)(v0 + 10655) = 0;
                *(char *)(v0 + 15469) = 2;
                func_0021BDB0(v0, 5, 0);
                v1 = 1;
            } else {
                v1 = 0;
            }
        }
    }
    return v1;
}

float func_00132470();

void func_00247920(p0, p1, p2) int p0; int p1; int p2; {
    char *v0;
    char *v1;
    int v2;
    int v3;
    float v4;
    int v5;
    float v6;
    int v7;
    float tmp0;
    v0 = (char *)p0;
    v1 = (char *)p1;
    v2 = p2;
    v7 = 0;
    tmp0 = func_00132470(v2, (v0 + 240));
    v6 = tmp0;
    v3 = 1;
    while ((v3 < *(signed char *)(v0 + 368))) {
        v4 = func_00132470(v2, ((v0 + (v3 << 4)) + 240));
        if (v4 < v6) {
            v6 = v4;
            v7 = v3;
        }
        v3 = (v3 + 1);
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(((v0 + (v7 << 4)) + 240)), "r"(v1) : "memory");
}

extern char D_005A7780[];

extern char D_005A7790[];

char *func_0023B880(char *p0) {
    *(char **)(p0 + 0) = D_005A7790;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 4) = 0;
    *(char **)(p0 + 0) = D_005A7780;
    return p0;
}

extern char D_005A7A90[];

char *func_0023BA10(char *p0) {
    *(char **)(p0 + 0) = D_005A7A90;
    return p0;
}

extern char D_005A7960[];

char *func_0023BF90(char *p0) {
    *(char **)(p0 + 0) = D_005A7790;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 4) = 0;
    *(char **)(p0 + 0) = D_005A7960;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 24) = 0;
    *(char *)(p0 + 16) = 0;
    return p0;
}

int func_0023C170(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    int func_00128488();
    int tmp0;
    tmp0 = func_00128488((p0 + 264), 0, 1288);
    *(short *)((char *)p0 + 1556) = -1;
    *(short *)((char *)p0 + 1552) = 0;
    *(short *)((char *)p0 + 1554) = 0;
    return tmp0;
}

void func_0023C140(int p0) {
    void func_00128488();
    func_00128488((p0 + 1672), 0, 8);
}

void func_0023C150(int p0) {
    void func_00128488();
    func_00128488((p0 + 1664), 0, 8);
}

void func_0023C160(int p0) {
    void func_00128488();
    func_00128488((p0 + 1560), 0, 8);
}
