void func_001318E0(float *, float *, float *);

typedef struct { float v[4]; } V209 __attribute__((aligned(16)));

extern V209 D_00541C90;

void func_00209A30(char *d, char *s) {
    void func_00105230(float *, float *, float *);
    void func_00104B80(char *, float *, char *);
    float m[16] __attribute__((aligned(16)));
    V209 r;
    float c[4] __attribute__((aligned(16)));
    r = D_00541C90;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(c), "r"(s) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"(s + 0x10) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"(s + 0x20) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"(s + 0x30) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"(c), "f"(0.25f) : "t0", "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s), "r"(c) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d + 0x10), "r"(s + 0x10), "r"(c) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d + 0x20), "r"(s + 0x20), "r"(c) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d + 0x30), "r"(s + 0x30), "r"(c) : "memory");
    *(float *)(d + 0xC) = *(float *)(d + 0x1C) = *(float *)(d + 0x2C) = *(float *)(d + 0x3C) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_001318E0(m, m, r.v);
    func_00105230(m, m, c);
    func_00104B80(d, m, d);
    func_00104B80(d + 0x10, m, d + 0x10);
    func_00104B80(d + 0x20, m, d + 0x20);
    func_00104B80(d + 0x30, m, d + 0x30);
    *(float *)(d + 0x40) = *(float *)(s + 0x40);
}

int func_002E8890(signed char);

void func_004F9970(int, short, unsigned char);

static inline int bit20F(char *p, short k) {
    int w = *(int *)((char *)(k / 32 * 4) + (int)p + 0x680);
    return (w & (1 << (k & 0x1F))) != 0;
}

void func_0020F700(char *p, int k, int c) {
    extern char *D_01CAFF0C[];
    if (func_002E8890((signed char)k)) {
        func_004F9970(*(int *)(D_01CAFF0C[0] + 0x28), (short)k, (unsigned char)c);
        return;
    }
    if (bit20F(p, (short)k) == 0) {
        func_004F9970(*(int *)(D_01CAFF0C[0] + 0x28), (short)k, (unsigned char)c);
    }
}

extern int D_01CAFF30[];

int func_0020F210(char *p) {
    if (D_01CAFF30[0] == 5 && !(*(int *)(p + 0x18) & 1)) {
        return 1;
    }
    return 0;
}

int func_0020F180(char *p) {
    int v = D_01CAFF30[0];
    if (v >= 15 && v <= 19) {
        return *(unsigned char *)(p + 0x40);
    }
    return 0;
}

extern int D_01CAFF38[];

int func_0020F1C0(char *p) {
    if (D_01CAFF30[0] == 19 && D_01CAFF38[0] == 421 && *(int *)(p + 0x30) == 1) {
        return 1;
    }
    return 0;
}

char *func_002089D0(char *p) {
    char *e;
    while (*(short *)(p + 2) < *(short *)p) {
        e = p + *(short *)(p + 2) * 208 + 16;
        if (!((*(unsigned char *)(e + 1) != 0) ^ 1)) {
            *(short *)(p + 2) += 1;
            return e;
        }
        *(short *)(p + 2) += 1;
    }
    return 0;
}

void func_00313930(int, int, signed char);

void func_00208620(short *tbl, int i, int arg) {
    extern char D_01CAFF0C[];
    char *e;
    if (i < tbl[0]) {
        e = (char *)tbl + i * 0xD0 + 0x10;
        if (*(unsigned char *)(e + 1) != 0 && *(unsigned char *)(e + 0xC9) != 1) {
            *(unsigned char *)(e + 0xC9) = 1;
            if (*(int *)(e + 0xCC) != -1) {
                int s = (short)*(int *)(e + 0xCC);
                char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
                if (s < 32) {
                    *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18) |= 1 << (s & 31);
                } else {
                    s -= 32;
                    *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x44) |= 1 << (s & 31);
                }
            }
            if (*(int *)(e + 0xC4) != 0) {
                func_00313930(*(int *)(e + 0xC4), arg, *(signed char *)(e + 0xC8));
            }
        }
    }
}

void func_00313AE0(int, int);

void func_00208720(short *tbl, int i, int arg) {
    extern char D_01CAFF0C[];
    char *e;
    if (i < tbl[0]) {
        e = (char *)tbl + i * 0xD0 + 0x10;
        if (*(unsigned char *)(e + 1) != 0 && *(unsigned char *)(e + 0xC9) != 0) {
            *(unsigned char *)(e + 0xC9) = 0;
            if (*(int *)(e + 0xCC) != -1) {
                int s = (short)*(int *)(e + 0xCC);
                char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
                if (s < 32) {
                    *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18) &= ~(1 << (s & 31));
                } else {
                    s -= 32;
                    *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x44) &= ~(1 << (s & 31));
                }
            }
            if (*(int *)(e + 0xC4) != 0) {
                func_00313AE0(*(int *)(e + 0xC4), arg);
            }
        }
    }
}

void func_0020EF90(char *p, char **q) {
    char *e = *q;
    int s = *(int *)(e + 4);
    if (s < 32) {
        if (*(int *)(e + 8) == 1) {
            *(unsigned int *)((char *)(s / 32 * 4) + (int)p + 0x18) |= 1 << (s & 31);
        } else {
            *(unsigned int *)((char *)(s / 32 * 4) + (int)p + 0x18) &= ~(1 << (s & 31));
        }
    } else {
        if (*(int *)(e + 8) == 1) {
            s -= 32;
            *(unsigned int *)((char *)(s / 32 * 4) + (int)p + 0x44) |= 1 << (s & 31);
        } else {
            s -= 32;
            *(unsigned int *)((char *)(s / 32 * 4) + (int)p + 0x44) &= ~(1 << (s & 31));
        }
    }
}

void func_00208620(short *tbl, int i, int arg);

void func_002F2FB0(char *);

char *func_002F3080(char *);

void func_00208720(short *tbl, int i, int arg);

void func_0020EF90(char *p, char **q);

void func_002F22F0(char *);

void func_002F21D0(char *);

void func_00323140(char *, int, int, int, int);

void func_0037CD80(char *);

void func_0037CDC0(char *);

void func_0020EA10(char *, int, int);

void func_0023A400(char *, int);

short *func_0023A470(char *);

void func_0020EA70(char *, char **);

void func_0020EB10(char *, char **);

void func_0020EC10(char *, char **);

void func_0020ED10(char *, char **);

void func_0020ED90(char *, char **);

void func_0020EDF0(char *, char **);

void func_0020EE50(char *, char **);

void func_0020EE70(char *, char **);

void func_0020EE90(char *, char **);

void func_0020EEA0(char *, char **);

void func_0020EEC0(char *, char **);

void func_0020EED0(char *, char **);

void func_0020EF10(char *, char **);

void func_0020EF50(char *, char **);

void func_0020F0A0(char *, char **);

void func_0020F0D0(char *, char **);

void func_0020E0A0(char *p, char **s) {
    char *c;
    char *e;
    char **t;
    char *b;
    for (;;) {
        c = *s;
        switch (*(unsigned char *)c) {
        case 80:
            func_002F22F0(*(char **)(p + 0x6A0));
            func_002F21D0(*(char **)(p + 0x6A0));
            *(unsigned char *)(p + 0x8B) = *(int *)(*s + 4);
            break;
        case 81:
            func_00323140(*(char **)(p + 0x6A4), *(unsigned char *)(c + 4), *(unsigned char *)(c + 8), *(unsigned char *)(c + 0xC), *(unsigned char *)(c + 0x10));
            break;
        case 82:
            func_0020ED10(p, s);
            break;
        case 83:
            switch (*(int *)(c + 4)) {
            case 0:
                func_002F2FB0(*(char **)(p + 0x6A0));
                while ((e = func_002F3080(*(char **)(p + 0x6A0))) != 0) {
                    if (*(signed char *)(e + 0x46) == 0x29) {
                        func_0037CD80(e);
                        break;
                    }
                }
                if (e == 0) func_0020EA10(p, 3, 0);
                break;
            case 1:
                func_002F2FB0(*(char **)(p + 0x6A0));
                while ((e = func_002F3080(*(char **)(p + 0x6A0))) != 0) {
                    if (*(signed char *)(e + 0x46) == 0x29) {
                        func_0037CDC0(e);
                        break;
                    }
                }
                break;
            }
            break;
        case 48: func_0020EA70(p, s); break;
        case 51: func_0020EB10(p, s); break;
        case 52: func_0020EC10(p, s); break;
        case 53: func_0020ED10(p, s); break;
        case 54: func_0020ED90(p, s); break;
        case 55: func_0020EDF0(p, s); break;
        case 56: func_0020EE50(p, s); break;
        case 57: func_0020EE70(p, s); break;
        case 61: func_0020EE90(p, s); break;
        case 62: func_0020EEA0(p, s); break;
        case 63: func_0020EEC0(p, s); break;
        case 67: func_0020EED0(p, s); break;
        case 68: func_0020EF10(p, s); break;
        case 69: func_0020EF50(p, s); break;
        case 98: func_0020EF90(p, s); break;
        case 91: func_0020F0A0(p, s); break;
        case 86:
            func_0023A400(*(char **)(p + 0x69C), *(int *)(c + 4));
            break;
        case 72: func_0020F0D0(p, s); break;
        case 65:
            func_00208620(func_0023A470(*(char **)(p + 0x69C)), *(int *)(c + 4), 0);
            break;
        case 66:
            func_00208720(func_0023A470(*(char **)(p + 0x69C)), *(int *)(c + 4), 0);
            break;
        case 77:
            b = *(char **)p;
            t = (char **)(p + *(int *)(c + 4) * 12 + 0xD8);
            t[0] = b + *(int *)(b + *(int *)(b + 8) + *(int *)(c + 8) * 4);
            t[1] = t[0];
            t[2] = 0;
            func_0020E0A0(p, (char **)(p + *(int *)(*s + 4) * 12 + 0xDC));
            break;
        case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 49: case 50: case 58: case 59: case 60: case 64: case 70: case 71: case 74: case 75: case 76: case 78: case 79: case 84: case 85: case 87: case 88: case 89: case 90: case 92: case 93: case 94: case 95: case 96: case 97: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122: case 123: case 124: case 125: case 126: case 127: case 128: case 129: case 130: case 131: case 132:
        case 133:
            break;
        case 14:
        case 73:
            return;
        }
        *s = *s + (((*(int *)*s >> 8) & 0xFF) + 1) * 4;
    }
}

void func_00209D00(char *p, unsigned int k) {
    *(int *)(p + 0xC) = *(int *)(p + 4);
    {
    unsigned int *q;
    unsigned int t;
    q = *(unsigned int **)(p + 0xC);
    t = *q;
    while ((t & 0xFF) != 1) {
        if ((t & 0xFF) == 7 && k == q[1]) {
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + (((int)t >> 8 & 0xFF) + 1) * 4;
            return;
        }
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + (((int)t >> 8 & 0xFF) + 1) * 4;
        q = *(unsigned int **)(p + 0xC);
        t = *q;
    }
    }
    if (*(int *)(p + 8) != 0) {
        *(int *)(p + 0xC) = *(int *)(p + 8);
        {
        unsigned int *q;
        unsigned int t;
        q = *(unsigned int **)(p + 0xC);
        t = *q;
        while ((t & 0xFF) != 1) {
            if ((t & 0xFF) == 7 && k == q[1]) {
                *(int *)(p + 0xC) = *(int *)(p + 0xC) + (((int)t >> 8 & 0xFF) + 1) * 4;
                return;
            }
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + (((int)t >> 8 & 0xFF) + 1) * 4;
            q = *(unsigned int **)(p + 0xC);
            t = *q;
        }
        }
    }
    *(int *)(p + 0xC) = 0;
}

float func_001F9C40(char *, int);

extern char D_01DF5D20[];

int func_0020AC40(char *, char *);

int func_0020CFA0(char *);

void func_0020CE70(char *a, char *s) {
    *(float *)(s + 8) = *(float *)(s + 8) + func_001F9C40(D_01DF5D20, 0x87);
    if (*(int *)s == 0) return;
    while (**(unsigned char **)(s + 4) != 0xE) {
        switch (func_0020AC40(a, s + 4)) {
        case 1: return;
        case 2: return;
        case -1:
            switch (func_0020CFA0(s)) {
            case 1: return;
            case 2: return;
            case -1: break;
            }
            break;
        }
        *(int **)(s + 4) = *(int **)(s + 4) + ((**(int **)(s + 4) >> 8 & 0xFF) + 1);
    }
    *(int *)s = 0;
    *(int *)(s + 4) = *(int *)s;
    *(int *)(s + 8) = 0;
}

typedef struct { char a; char flag; char rest[206]; } E208;

typedef struct { short n; char pad[14]; E208 e[1]; } T208;

void func_00208870(T208 *t, int i) {
    if (i < t->n) {
        t->e[i].flag = 0;
    }
}

void func_00208830(T208 *t, int i) {
    if (i < t->n) {
        t->e[i].flag = 1;
    }
}

typedef struct { char pad[0xB0]; char a; char pad1; short b; char c; char rest[208 - 0xB5]; } E208c;

typedef struct { short n; char pad[14]; E208c e[1]; } T208c;

void func_002088A0(T208c *t, int i, int a, int b, int c) {
    if (i < t->n) {
        t->e[i].a = a;
        t->e[i].b = b;
        t->e[i].c = c;
    }
}

extern signed char D_005BE0BC;

extern signed char D_005BE0E4;

extern signed char D_005BE0B4;

extern signed char D_005BE0E8;

void func_00207FE0(void) {
    if (D_005BE0BC != 0) {
        D_005BE0BC--;
    }
    if (D_005BE0E4 != 0) {
        D_005BE0E4--;
    }
    if (D_005BE0B4 != 0) {
        D_005BE0B4--;
    }
    if (D_005BE0E8 != 0) {
        D_005BE0E8--;
    }
}

int func_0020F100(char *p) {
    switch (D_01CAFF30[0]) {
    case 9:
        return 0;
    case 10:
        return (*(int *)(p + 0x18) & 8) != 0;
    case 11:
        return 1;
    case 12:
        return (*(int *)(p + 0x18) & 8) == 0;
    }
    return 0;
}

typedef struct { short id; short a; short b; } Tri16;

extern Tri16 D_00541B60[];

void func_0020E4D0(char *p, short a, short b) {
    int i = 0;
    Tri16 *e;
    if (D_00541B60[0].id != -1) {
        e = D_00541B60;
        do {
            if (D_01CAFF38[0] == e->id) {
                *(short *)(p + 0xF6) = D_00541B60[i].a;
                *(short *)(p + 0xF8) = D_00541B60[i].b;
                break;
            }
            e++;
            i++;
        } while (e->id != -1);
    }
    if (*(short *)(p + 0xF6) == -1) {
        *(short *)(p + 0xF6) = a;
        *(short *)(p + 0xF8) = b;
    }
}

void func_0020D140(char *);

int func_0020AB70(char *p) {
    while (**(unsigned char **)(p + 0xC) != 14) {
        switch (func_0020AC40(p, p + 0xC)) {
        case 1:
            return 0;
        case 2:
            return 1;
        case -1:
            func_0020D140(p);
            break;
        default:
            *(char **)(p + 0xC) = *(char **)(p + 0xC) + (((**(int **)(p + 0xC) >> 8) & 0xFF) + 1) * 4;
            *(unsigned char *)(p + 0x89) = 0;
            break;
        }
    }
    return 1;
}

void func_0023A3E0(char *, unsigned char);

void func_0020EA00(char *p, unsigned char *q) {
    func_0023A3E0(*(char **)(p + 0x69C), *q);
}

extern unsigned int D_0058AFF0[];

int func_002E8780(int);

int func_0020F9B0(char *);

static inline short find20F(char *p, int k, int x) {
    unsigned int c1 = ((unsigned char)k << 24) | x;
    unsigned int c2 = ((unsigned char)k << 24) | (x & 0xFF03FFFF);
    int j;
    for (j = 0; j < 0x40; j++) {
        if (D_0058AFF0[j] == c1 || ((D_0058AFF0[j] & 0xFC0000) == 0 && D_0058AFF0[j] == c2)) {
            unsigned int *w = (unsigned int *)((char *)(j / 32 * 4) + (int)p + 0x618);
            unsigned int m = 1 << (j & 0x1F);
            if (*w & m) return -1;
            return j;
        }
    }
    return -1;
}

int func_0020F3E0(char *p, int k, int x) {
    short i;
    short t;
    int c;
    unsigned int *w;
    unsigned int m;
    switch ((signed char)func_002E8780(k)) {
    case 0:
        i = func_0020F9B0(p);
        t = 0;
        break;
    case 1:
        i = find20F(p, k, x);
        t = 1;
        break;
    case 2:
        c = (signed char)k;
        w = (unsigned int *)((char *)(c / 32 * 4) + (int)p + 0x680);
        m = 1 << (c & 0x1F);
        if (*w & m) {
            i = -1;
        } else {
            i = c;
        }
        t = 2;
        break;
    }
    if (i == -1) return -1;
    return (t << 16) | i;
}

void func_0020A270(char *p) {
    void func_0020E8D0(char *, int, int, int);
    char *e = *(char **)(p + 0xC);
    switch (*(unsigned char *)e) {
    case 3:
        func_0020E8D0(p, 0, *(short *)(e + 4), *(short *)(e + 8));
        break;
    case 2:
        func_0020E8D0(p, 1, *(short *)(e + 4), 0);
        break;
    case 4:
        func_0020E8D0(p, 2, *(short *)(e + 4), 0);
        break;
    case 5:
        func_0020E8D0(p, 3, 0, 0);
        break;
    }
}

void func_0023A710(char *, int);

void func_0020E8E0(char *p, short a, unsigned char b, unsigned char c, int d) {
    void func_0023A3C0(char *, signed char);
    if (*(unsigned char *)(p + 0x9A) != 0) {
        func_0023A710(*(char **)(p + 0x69C), 1);
        *(unsigned char *)(p + 0x9A) = 0;
    }
    if ((short)a >= 0) {
        *(short *)(p + 0xFA) = D_01CAFF38[0];
        *(short *)(p + 0xFC) = a;
        *(unsigned char *)(p + 0xFE) = b;
        *(unsigned char *)(p + 0xFF) = c;
    }
    if (D_01CAFF38[0] >= 600 && D_01CAFF38[0] < 700) {
        d = 4;
    }
    func_0023A3C0(*(char **)(p + 0x69C), (signed char)d);
}

void func_0020E580(char *p) {
    extern char D_01CAFF0C[];
    signed char k = *(signed char *)(p + 0xD4);
    if (k != -1) {
        char *o = *(char **)(*(char **)D_01CAFF0C + 4);
        if (o != 0) {
            if (k == 0) {
                *(int *)(o + 0x1C) = 0;
            } else {
                *(unsigned char *)((char *)k + (int)o + 0x20) = 0;
            }
        }
        k = *(signed char *)(p + 0xD4);
        *(unsigned int *)((char *)(k / 32 * 4) + (int)p + 0x680) &= ~(1 << (k & 31));
    }
    k = *(signed char *)(p + 0xD5);
    if (k != -1) {
        char *o = *(char **)(*(char **)D_01CAFF0C + 4);
        if (o != 0) {
            if (k == 0) {
                *(int *)(o + 0x1C) = 1;
            } else {
                *(unsigned char *)((char *)k + (int)o + 0x20) = 1;
            }
        }
    }
    *(signed char *)(p + 0xFF) = -1;
    *(signed char *)(p + 0xFE) = -1;
    *(short *)(p + 0xFC) = -1;
    *(short *)(p + 0xFA) = -1;
}

typedef struct { int w[16]; } S40;

signed char func_002088E0(char *l, char *a, char *b, short c, unsigned char d, unsigned char e, unsigned char f) {
    char *t7;
    char *t6 = l + *(short *)l * 0xD0;
    *(int *)(t6 + 0xDC) = -1;
    t7 = t6 + 0x10;
    *(unsigned char *)(t6 + 0xD9) = 0;
    *(signed char *)(t6 + 0x10) = *(short *)l;
    *(unsigned char *)(t6 + 0x11) = 1;
    *(unsigned char *)(t6 + 0x16) = 1;
    *(unsigned char *)(t6 + 0x17) = 1;
    *(S40 *)(t7 + 0x10) = *(S40 *)a;
    *(float *)(t7 + 0x50) = *(float *)(a + 0x40);
    *(S40 *)(t7 + 0x60) = *(S40 *)b;
    *(float *)(t7 + 0xA0) = *(float *)(b + 0x40);
    *(unsigned char *)(t7 + 0xB0) = 0;
    *(short *)(t7 + 0xB2) = c;
    *(unsigned char *)(t7 + 0xB4) = d;
    *(unsigned char *)(t7 + 2) = e;
    *(unsigned char *)(t7 + 3) = f;
    *(short *)l = *(short *)l + 1;
    return *(signed char *)t7;
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00105760(char *, char *, float);

void func_002097E0(float *o, char *s) {
    void func_00104B80(char *, char *, char *);
    void func_00105230(char *, char *, char *);
    float func_0022CD90(char *);
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float a;
    float h;
    float c;
    float r;
    v[0] = func_0022CD90(s);
    v[1] = func_0022CD90(s);
    v[2] = func_0022CD90(s);
    v[3] = 1.0f;
    a = func_0022CD90(s);
    h = func_0022CD90(s);
    c = func_0022CD90(s);
    r = func_0022CD90(s);
    UNIT(m);
    func_00105760((char *)m, (char *)m, 6.283185f * (r / 360.0f));
    func_00105230((char *)m, (char *)m, (char *)v);
    o[0] = a;
    o[1] = 0.0f;
    o[2] = c;
    o[3] = 1.0f;
    o[4] = a;
    o[5] = 0.0f;
    o[6] = -c;
    o[7] = 1.0f;
    o[8] = -a;
    o[9] = 0.0f;
    o[10] = -c;
    o[11] = 1.0f;
    o[12] = -a;
    o[13] = 0.0f;
    o[14] = c;
    o[15] = 1.0f;
    func_00104B80((char *)o, (char *)m, (char *)o);
    func_00104B80((char *)(o + 4), (char *)m, (char *)(o + 4));
    func_00104B80((char *)(o + 8), (char *)m, (char *)(o + 8));
    func_00104B80((char *)(o + 12), (char *)m, (char *)(o + 12));
    o[16] = h;
}

void func_00208A60(char *p, int k, unsigned char on) {
    if (k < 32) {
        if (on == 1) {
            *(unsigned int *)((char *)(k / 32 * 4) + (int)p + 0x9DC) &= ~(1 << (k & 31));
        } else {
            unsigned int m = 1 << (k & 31);
            *(unsigned int *)((char *)(k / 32 * 4) + (int)p + 0x9DC) |= m;
            *(unsigned int *)((char *)(k / 32 * 4) + (int)p + 0x9D8) &= ~m;
        }
    }
}

void func_0020D090(char *p, unsigned char f) {
    signed char d = *(signed char *)(p + 0x65);
    for (;;) {
        *(int **)(p + 0xC) += ((**(int **)(p + 0xC) >> 8) & 0xFF) + 1;
        *(unsigned char *)(p + 0x89) = 0;
        switch (**(unsigned char **)(p + 0xC)) {
        case 0xF: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x15: case 0x16: case 0x17: case 0x18: case 0x19: case 0x1A: case 0x1B: case 0x1C: case 0x1D: case 0x1E: case 0x1F: case 0x20: case 0x21: case 0x22: case 0x23: case 0x24: case 0x25: case 0x26: case 0x27: case 0x28:
            (*(signed char *)(p + 0x65))++;
            break;
        case 0x29: case 0x2A: case 0x2B: case 0x2C: case 0x2D:
            if (f == 0 && *(signed char *)(p + 0x65) == d) return;
            break;
        case 0x2E:
            if (*(signed char *)(p + 0x65) == d) return;
            (*(signed char *)(p + 0x65))--;
            break;
        }
    }
}

int func_0020F360(char *p) {
    if (D_01CAFF30[0] == 3) goto a;
    return 0;
a:
    return *(int *)(p + 0x34) == 1;
}

int func_0020F3A0(char *p) {
    if (D_01CAFF30[0] == 9) goto a;
    return 0;
a:
    return (*(int *)(p + 0x18) & 2) != 0;
}

void func_002080D0(char *, char *, int);

static inline char *g208(char *p, unsigned int i) {
    if (*(unsigned int *)(p + 4) <= i) return 0;
    if (((int *)(p + 8))[i] == 0) return 0;
    return p + ((int *)(p + 8))[i];
}

void func_00208050(char *p, int a) {
    func_002080D0(g208(p, 0), g208(p, 1), a);
}

extern char D_01DF7A30[];

void func_002069D0();

int func_00208440(void) {
    func_002069D0(D_01DF7A30);
    return 1;
}

void func_00208AF0();

void func_002090E0();

void func_002084E0(int p0) {
    func_002090E0();
    func_00208AF0(p0);
}

void func_0020FA50(char **h) {
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

extern char D_01CB05E0[];

extern char D_01CB0A00[];

extern char D_01DF5E40[];

extern char D_01DF6260[];

extern char D_01DF7210[];

extern char D_01DF8A00[];

extern char D_01DF8B30[];

void func_001B1190();

void func_001B29A0();

int func_001EDCA0();

void func_001EDE60();

int func_001F39D0();

int func_001FECF0();

int func_001FEF10();

void func_002059E0();

int func_00206780();

int func_00206FC0();

int func_0021B060();

int func_00287CF0();

int func_00207E90() {
    int v0;
    int tmp0;
    func_00206FC0(224);
    func_00206780(D_01DF7210);
    func_002059E0();
    func_001FECF0(D_01DF5E40);
    func_001B1190();
    func_001F39D0(D_01CB0A00);
    func_001EDE60();
    tmp0 = func_001FEF10(D_01DF6260);
    if ((tmp0 & 255) == 0) {
        v0 = 0;
    } else {
        func_001B29A0();
        func_0021B060(D_01DF8A00);
        func_001EDCA0(D_01CB05E0);
        func_00287CF0(D_01DF8B30);
        v0 = 1;
    }
    return v0;
}

extern char D_01DF7DBC[];

extern char D_01DF7E00[];

int func_0013D5D0();

void func_001975A0();

void func_001B11A0();

void func_001B29B0();

void func_001EDD10();

void func_001EDE70();

void func_001F3A40();

void func_001FED60();

void func_001FEFA0();

void func_002059F0();

void func_002067F0();

void func_0021B0A0();

void func_00287D80();

int func_00207F40() {
    int tmp0;
    func_001975A0(D_01DF7DBC);
    func_001B11A0();
    func_001FED60(D_01DF5E40);
    func_002059F0();
    func_002067F0(D_01DF7210);
    func_001EDE70();
    func_001F3A40(D_01CB0A00);
    func_001B29B0();
    func_001FEFA0(D_01DF6260);
    func_001EDD10(D_01CB05E0);
    func_00287D80(D_01DF8B30);
    func_0021B0A0(D_01DF8A00);
    tmp0 = func_0013D5D0(D_01DF7E00);
    return tmp0;
}

void func_00209960(p0, p1) int p0; int p1; {
    float func_0022CD90();
    float tmp0;
    float tmp1;
    float tmp2;
    float tmp3;
    float tmp4;
    float tmp5;
    float tmp6;
    float tmp7;
    float tmp8;
    float tmp9;
    tmp0 = func_0022CD90(p1);
    *(float *)((char *)p0 + 0) = tmp0;
    tmp1 = func_0022CD90(p1);
    *(float *)((char *)p0 + 8) = tmp1;
    tmp2 = func_0022CD90(p1);
    *(float *)((char *)p0 + 16) = tmp2;
    tmp3 = func_0022CD90(p1);
    *(float *)((char *)p0 + 24) = tmp3;
    tmp4 = func_0022CD90(p1);
    *(float *)((char *)p0 + 32) = tmp4;
    tmp5 = func_0022CD90(p1);
    *(float *)((char *)p0 + 40) = tmp5;
    tmp6 = func_0022CD90(p1);
    *(float *)((char *)p0 + 48) = tmp6;
    tmp7 = func_0022CD90(p1);
    *(float *)((char *)p0 + 56) = tmp7;
    tmp8 = func_0022CD90(p1);
    *(float *)((char *)p0 + 52) = tmp8;
    *(float *)((char *)p0 + 36) = tmp8;
    *(float *)((char *)p0 + 20) = tmp8;
    *(float *)((char *)p0 + 4) = tmp8;
    tmp9 = func_0022CD90(p1);
    *(float *)((char *)p0 + 64) = tmp9;
    *(int *)((char *)p0 + 60) = 0x3f800000;
    *(int *)((char *)p0 + 44) = 0x3f800000;
    *(int *)((char *)p0 + 28) = 0x3f800000;
    *(int *)((char *)p0 + 12) = 0x3f800000;
}

extern char D_005A77E8[];

void func_00100580();

int func_0020A1E0(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A77E8;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}

int func_0020E7E0();

int func_00286FD0();

int func_0020A320(p0) char *p0; {
    int v0;
    int v1;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 240);
    tmp0 = 3;
    if (v0 != tmp0) {
        switch (v0) {
        case 0:
            v1 = func_0020E7E0(p0, *(short *)(p0 + 242), *(short *)(p0 + 244));
            break;
        case 1:
            v1 = func_00286FD0(*(int *)(p0 + 16), *(short *)(p0 + 242));
            break;
        case 2:
            break;
        }
    }
    return v1;
}

int func_0020E650();

int func_0020A550(p0) int p0; {
    void func_00128488();
    int tmp0;
    func_00128488((p0 + 68), 0, 4);
    func_00128488((p0 + 72), 0, 4);
    func_00128488((p0 + 76), 0, 16);
    *(char *)((char *)p0 + 92) = 0;
    *(char *)((char *)p0 + 212) = -1;
    *(char *)((char *)p0 + 213) = -1;
    *(int *)((char *)p0 + 144) = 0;
    tmp0 = func_0020E650(p0);
    return tmp0;
}

void func_0020D000(p0) char *p0; {
    int v0;
    v0 = *(signed char *)(p0 + 101);
    if (v0 >= 0) {
        *(int *)((char *)((v0 << 2) + (int)p0) + 104) = *(int *)(p0 + 96);
        *(char *)((char *)(*(signed char *)(p0 + 101) + (int)p0) + 120) = *(unsigned char *)(p0 + 100);
    }
    *(char *)(p0 + 101) = (*(signed char *)(p0 + 101) + 1);
    *(char *)(p0 + 100) = 0;
}

void func_0020D050(p0) char *p0; {
    int v0;
    *(char *)(p0 + 101) = (*(signed char *)(p0 + 101) + -1);
    v0 = *(signed char *)(p0 + 101);
    if (v0 >= 0) {
        *(int *)(p0 + 96) = *(int *)((char *)((v0 << 2) + (int)p0) + 104);
        *(char *)(p0 + 100) = *(unsigned char *)((char *)(*(signed char *)(p0 + 101) + (int)p0) + 120);
    }
}

void func_0020E670(p0, p1) int p0; int p1; {
    int v0;
    char *v1;
    v0 = 0;
    v1 = (char *)p0;
    do {
        if (*(int *)(v1 + 180) == 0) {
            *(int *)((char *)((v0 << 2) + p0) + 180) = p1;
            break;
        }
        v0 = (v0 + 1);
        v1 = (v1 + 4);
    } while ((v0 < 5));
}

int func_00206730();

int func_0020E6C0(p0) int p0; {
    int v1;
    int v3;
    char *v0;
    int v2;
    v3 = 0;
    v0 = (char *)p0;
    do {
        v1 = (int)(v0 + 180);
        if (*(int *)(v0 + 180) != 0) {
            v2 = func_00206730(v1);
        }
        v3 = (v3 + 1);
        v0 = (v0 + 4);
    } while ((v3 < 5));
    return v2;
}

int func_001AD140();

int func_0020E720(p0) int p0; {
    int v3;
    char *v2;
    int v1;
    char *v0;
    v3 = 0;
    v0 = (char *)p0;
    do {
        v1 = func_00206730((v0 + 180));
        v2 = *(char **)(v0 + 180);
        if (v2 != 0) {
            *(char *)(v2 + 58) = 1;
            v1 = func_001AD140(*(int *)(v0 + 180));
            *(int *)(v0 + 180) = 0;
        }
        v0 = (v0 + 4);
        v3 = (v3 + 1);
    } while ((v3 < 5));
    return v1;
}

int func_00286F20();

int func_0020E7E0(p0, p1, p2) int p0; int p1; int p2; {
    void func_0020E8D0();
    int tmp2;
    func_0020E8D0(p0, 0, p1, p2);
    tmp2 = func_00286F20(*(int *)((char *)p0 + 16), *(short *)((char *)p0 + 242));
    return tmp2;
}

int func_0020E820(p0, p1) int p0; int p1; {
    void func_0020E8D0();
    int tmp2;
    func_0020E8D0(p0, 1, p1, 0);
    tmp2 = func_00286FD0(*(int *)((char *)p0 + 16), *(short *)((char *)p0 + 242));
    return tmp2;
}

int func_0020E860(p0, p1) int p0; int p1; {
    void func_0020E8D0();
    int func_0023A3C0();
    int tmp1;
    func_0020E8D0(p0, 2, (short)p1, 0);
    *(char *)((char *)p0 + 140) = p1;
    *(char *)((char *)p0 + 141) = -1;
    *(int *)((char *)p0 + 144) = 0;
    tmp1 = func_0023A3C0(*(int *)((char *)p0 + 1692), 4);
    return tmp1;
}

extern char D_01DFA340[];

int func_0023A860();

void func_0030EA90();

int func_0020EA20(p0) int p0; {
    int tmp1;
    func_0030EA90(D_01DFA340);
    tmp1 = func_0023A860(*(int *)((char *)p0 + 1692));
    return tmp1;
}

void func_002089C0(char *p) { *(short *)(p + 2) = 0; }

void func_0020CE50(void) {}

int func_0020CE60(void) { return 0; }

void func_0020E7A0(char *p, int v) { *(int *)(p + 1704) = v; }

void func_0020E7B0(char *p, int v) { *(int *)(p + 1708) = v; }

void func_0020ED80(void) {}

void func_0020EDE0(void) {}

void func_0020EE40(void) {}

void func_0020E790(char *p0, int p1, int p2, int p3) {
    *(int *)(p0 + 1692) = p1;
    *(int *)(p0 + 1696) = p2;
    *(int *)(p0 + 1700) = p3;
}

void func_0020E7C0(char *p0) {
    *(int *)(p0 + 1692) = 0;
    *(int *)(p0 + 1696) = 0;
    *(int *)(p0 + 1700) = 0;
    *(int *)(p0 + 1704) = 0;
    *(int *)(p0 + 1708) = 0;
}

extern char D_01CAF520[];

void func_0020E9F0(void) {
    *(char *)D_01CAF520 = 0;
}

void func_002093D0();

int func_00208490(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    int func_00128488();
    int tmp0;
    func_002093D0();
    *(int *)((char *)p0 + 2512) = p2;
    *(int *)((char *)p0 + 2516) = (p2 + 16);
    tmp0 = func_00128488((p0 + 2524), 0, 4);
    return tmp0;
}

void func_00206AB0();

void func_00208470(void) {
    func_00206AB0(D_01DF7A30);
}

void func_00206AA0();

void func_00208480(void) {
    func_00206AA0(D_01DF7A30);
}

void func_0020E8C0(int p0) {
    void func_0020E8D0();
    func_0020E8D0(p0, 2, -1, 0);
}

void func_0023A840();

void func_0020EA60(char *p0) {
    func_0023A840(*(char **)(p0 + 1692), 0);
}
