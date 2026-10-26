/* Hand-matched functions that declare D_01CAFF0C as a plain char array (forcing reloads after stores) or whose callee prototypes conflict with misc3-13. */
extern char D_01CAFF0C[];

typedef struct N2F0 { int v; struct N2F0 *next; } N2F0;

typedef struct { N2F0 n[256]; N2F0 *used; N2F0 *free; } P2F0;

int func_002242C0(int);

int func_0024D640(int);

float func_001F9C40(char *, int);

unsigned char func_002EFB60(char *, int);

unsigned char func_002EFFF0(char *);

unsigned char func_002F04A0(char *);

void func_002F0650(char *);

extern char D_01DF5D20[];

typedef struct { char pad[0x818]; P2F0 pl; } B2F0;

static inline void init2F0(B2F0 *b) {
    int i;
    b->pl.used = 0;
    b->pl.free = &b->pl.n[0];
    for (i = 0; i < 255; i++) b->pl.n[i].next = (N2F0 *)((char *)((i + 1) * 8) + (int)b + 0x818);
    b = (B2F0 *)((char *)b);
    b->pl.n[255].next = 0;
}

unsigned char func_002F0740(char *p, unsigned char a, unsigned char b) {
    int o;
    unsigned char r;
    o = ((int *)(*(char **)D_01CAFF0C + 0xC))[b];
    if ((unsigned char)func_0024D640(o) == 1 || a == 1 || (unsigned char)func_002242C0(o) == 1) {
        if (a != 1 || (unsigned char)func_002242C0(o) == 1) {
            if (*(unsigned char *)(p + 0x1034) == 0) {
                *(unsigned char *)(p + 0x1034) = 1;
                *(int *)(p + 0x102C) = 0;
                *(float *)(p + 0x1030) = 0.0f;
            }
            if (*(float *)(p + 0x1030) < 300.0f) {
                r = func_002EFFF0(p);
            } else {
                r = func_002F04A0(p);
            }
        } else {
            r = func_002EFFF0(p);
        }
        if (r == 1) {
            *(float *)(p + 0x1030) += func_001F9C40(D_01DF5D20, 0x87);
        } else {
            init2F0((B2F0 *)p);
            *(int *)(p + 0x1028) = 0;
            *(unsigned char *)(p + 0x1034) = 0;
            *(int *)(p + 0x102C) = 0;
            *(float *)(p + 0x1030) = 0.0f;
            func_002EFB60(p, 1);
        }
    } else {
        *(unsigned char *)(p + 0x1034) = 0;
        *(int *)(p + 0x102C) = 0;
        r = func_002EFB60(p, 1);
    }
    func_002F0650(p);
    return r;
}

void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_002F4600(char *);

char *func_002F44C0(unsigned char p, char *s) {
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
    **q = func_001B0FD0(a, 0x140, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x140, t);
        if (r != 0) {
            func_002F4600(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xE, **q);
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
        *(unsigned char *)(ret + 0xA0) = p;
        *(char **)(ret + 0x80) = s;
    }
    return ret;
}

int func_002F3120(int, int, int, int);

int func_002F3BB0(int, int, int);

int func_002F30C0(int k, int a, int b, int c) {
    int r = 0;
    switch ((unsigned char)k) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 39: case 40: case 64: case 65:
        r = func_002F3120(k, a, b, c);
        break;
    case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 59: case 60: case 61: case 62: case 63: case 66: case 67: case 68: case 69: case 70: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122: case 123: case 124: case 125: case 126: case 127:
        r = func_002F3BB0(k, a, c);
        break;
    case 71:
        break;
    }
    return r;
}

extern char D_01CAFF0C[];

int func_002F1EF0(char *p) {
    int n = 0;
    int i;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) {
        return n;
    }
    for (i = 0; i < 10; i++) {
        if (*(signed char *)(p + i + 0x1037) != -1) {
            n++;
        }
    }
    return n;
}

int func_002F2930(char *p) {
    switch (*(signed char *)(p + 0x28)) {
    case 0:
        if (*(int *)(p + 0x1C) - *(int *)(p + 0x20) > *(signed char *)(p + 0x29)) {
            break;
        }
        if (!(*(float *)(p + 0x2C) <= 0.0f)) {
            *(signed char *)(p + 0x28) = 1;
            return 0;
        }
        return 1;
    case 1:
        *(float *)(p + 0x2C) = *(float *)(p + 0x2C) - func_001F9C40(D_01DF5D20, 0x41);
        if (*(float *)(p + 0x2C) <= 0.0f) {
            return 1;
        }
        break;
    }
    return 0;
}

void func_002F17E0(char *);

static inline char *nx_2F0A(char *p) {
    char *r = 0;
    char *n = *(char **)(p + 0x1020);
    if (n != 0) {
        r = *(char **)n;
        *(char **)(p + 0x1020) = *(char **)(n + 4);
    }
    return r;
}

char *func_002F0A50(char *p, float *out) {
    int i = 0;
    char *e;
    char *m;
    unsigned short f2;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) return 0;
    *(char **)(p + 0x1020) = *(char **)(p + 0x1018);
    while ((e = nx_2F0A(p)) != 0) {
        if (i++ == *(int *)(p + 0x102C)) {
            if ((*(unsigned short *)(e + 4) & 8) || (*(unsigned short *)(e + 2) & 0x10)) {
                if (*(signed char *)(*(char **)(e + 8) + 0x45) != 6) break;
                f2 = *(unsigned short *)(e + 2);
                if ((f2 & 7) == 0) break;
                if (f2 & 1) {
                    if (*(unsigned short *)(e + 4) & 1) break;
                    func_002F17E0(p);
                } else if (f2 & 2) {
                    if (*(unsigned short *)(e + 4) & 2) break;
                    func_002F17E0(p);
                } else if (f2 & 4) {
                    if (*(unsigned short *)(e + 4) & 4) break;
                    func_002F17E0(p);
                }
            }
        }
    }
    if (e == 0) return 0;
    m = *(char **)(e + 0x10);
    if (m == 0) return 0;
    if (out == 0) return e;
    __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(out), "r"(m) : "memory");
    out[3] = 1.0f;
    return e;
}

static inline char *nx_2F1x(char *p) {
    char *r = 0;
    char *n = *(char **)(p + 0x1020);
    if (((n != 0) ^ 1) == 0) {
        r = *(char **)n;
        *(char **)(p + 0x1020) = *(char **)(n + 4);
    }
    return r;
}

int func_002F1830(char *p, char *t) {
    char *e;
    *(char **)(p + 0x1020) = *(char **)(p + 0x1018);
    while ((e = nx_2F1x(p)) != 0) {
        if (e == t && *(unsigned char *)e == 1) break;
    }
    if (e == 0) return 0;
    *(unsigned char *)(e + 0x34) = 1;
    return 1;
}

static inline char *nx_2F1y(char *p) {
    char *r = 0;
    char *n = *(char **)(p + 0x1020);
    if (((n != 0) ^ 1) == 0) {
        r = *(char **)n;
        *(char **)(p + 0x1020) = *(char **)(n + 4);
    }
    return r;
}

char *func_002F15D0(char *p, int k) {
    int i = 0;
    char *e;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) return 0;
    *(char **)(p + 0x1020) = *(char **)(p + 0x1018);
    while ((e = nx_2F1y(p)) != 0) {
        if (*(signed char *)(*(char **)(e + 8) + 0x45) != 6 && i == k) break;
        i++;
    }
    if (e == 0) return 0;
    return *(char **)(e + 8);
}

extern signed char D_0054A040[][2];

void func_002F2B10(char *);

int func_002F2B60(char *p, signed char *buf, int n, int x) {
    int func_002F2AA0(char *, int);
    int i;
    int v;
    signed char c;
    int k;
    unsigned char flag;
    if (*(int *)(p + 4) == 0) return 0;
    if ((unsigned char)func_002F2AA0(p, x) == 0) return 0;
    for (i = 0; i < n; i++) {
        if (buf[i] == 0x1B) {
            buf[i] = 0;
            break;
        }
    }
    flag = 0;
    for (v = *(int *)(p + 0x10); v != 0; v = *(int *)(p + 0x10)) {
        switch (v) {
        case 1:
        case 2:
            k = *(int *)(*(char **)(p + 8) + 4);
            c = D_0054A040[(signed char)k][1];
            if ((unsigned int)(k - 0x14) <= 2 || k == 0x17) flag = 1;
            for (i = 0; i < n; i++) {
                if (c == buf[i]) break;
            }
            if (i == n) {
                buf[n] = c;
                n++;
            }
            break;
        }
        func_002F2B10(p);
    }
    if (flag) {
        for (i = 0; i < n; i++) {
            if (buf[i] == 0) {
                buf[i] = 0x1B;
                break;
            }
        }
    }
    return n;
}

static inline char *nx_2F1(char *p) {
    char *r = 0;
    char *n = *(char **)(p + 0x1020);
    if (((n != 0) ^ 1) == 0) {
        r = *(char **)n;
        *(char **)(p + 0x1020) = *(char **)(n + 4);
    }
    return r;
}

char *func_002F1670(char *p) {
    int i = 0;
    char *e;
    char *o;
    unsigned short f4;
    unsigned short f2;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) return 0;
    *(char **)(p + 0x1020) = *(char **)(p + 0x1018);
    while ((e = nx_2F1(p)) != 0) {
        if (i++ == *(int *)(p + 0x102C)) {
            o = *(char **)(e + 8);
            if (o == 0) return 0;
            f4 = *(unsigned short *)(e + 4);
            if ((f4 & 8) || (*(unsigned short *)(e + 2) & 0x10)) {
                if (*(signed char *)(o + 0x45) != 6) break;
                f2 = *(unsigned short *)(e + 2);
                if ((f2 & 7) == 0) break;
                if (f2 & 1) {
                    if (f4 & 1) break;
                    func_002F17E0(p);
                } else if (f2 & 2) {
                    if (f4 & 2) break;
                    func_002F17E0(p);
                } else if (f2 & 4) {
                    if (f4 & 4) break;
                    func_002F17E0(p);
                }
            }
        }
    }
    if (e == 0) return 0;
    return e;
}

static inline char *nx_2F0(char *p) {
    char *r = 0;
    char *n = *(char **)(p + 0x1020);
    if (n != 0) {
        r = *(char **)n;
        *(char **)(p + 0x1020) = *(char **)(n + 4);
    }
    return r;
}

char *func_002F0F40(char *p, float *out) {
    char *e;
    char *m;
    unsigned short f2;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) return 0;
    *(char **)(p + 0x1020) = *(char **)(p + 0x1018);
    while ((e = nx_2F0(p)) != 0) {
        if (*(unsigned char *)(e + 0x34) == 1) continue;
        if (*(unsigned char *)e != 1) continue;
        if (!(*(unsigned short *)(e + 4) & 8) && !(*(unsigned short *)(e + 2) & 0x10)) continue;
        if (*(signed char *)(*(char **)(e + 8) + 0x45) != 6) break;
        f2 = *(unsigned short *)(e + 2);
        if ((f2 & 7) == 0) break;
        if (f2 & 1) {
            if (*(unsigned short *)(e + 4) & 1) break;
            continue;
        } else if (f2 & 2) {
            if (*(unsigned short *)(e + 4) & 2) break;
            continue;
        } else if (f2 & 4) {
            if (*(unsigned short *)(e + 4) & 4) break;
        }
    }
    if (e == 0) return 0;
    m = *(char **)(e + 0x10);
    if (m == 0) return 0;
    if (out == 0) return e;
    __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(out), "r"(m) : "memory");
    out[3] = 1.0f;
    return e;
}

int func_002F18A0(char *p, char *t) {
    char *e;
    *(char **)(p + 0x1020) = *(char **)(p + 0x1018);
    while ((e = nx_2F1x(p)) != 0) {
        if (e == t) break;
    }
    if (e == 0) return 0;
    return 1;
}

char *func_002F14E0(char *p) {
    char *e;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) return 0;
    *(char **)(p + 0x1020) = *(char **)(p + 0x1018);
    while ((e = nx_2F1x(p)) != 0) {
        if (*(unsigned char *)(e + 0x34) == 1) break;
    }
    return e;
}

char *func_002F1550(char *p, int k) {
    int i = 0;
    char *e;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) return 0;
    *(char **)(p + 0x1020) = *(char **)(p + 0x1018);
    while ((e = nx_2F1y(p)) != 0) {
        if (*(signed char *)(*(char **)(e + 8) + 0x45) != 6 && i == k) break;
        i++;
    }
    return e;
}

char *func_002F1450(char *p) {
    char *e;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) return 0;
    *(char **)(p + 0x1020) = *(char **)(p + 0x1018);
    while ((e = nx_2F1y(p)) != 0) {
        if (*(unsigned char *)(e + 0x34) == 1) break;
    }
    if (e == 0) return 0;
    return *(char **)(e + 8);
}

static inline char *nx_2F2(char *p) {
    char *r = 0;
    char *n = *(char **)(p + 0x83C);
    if (((n != 0) ^ 1) == 0) {
        r = *(char **)n;
        *(char **)(p + 0x83C) = *(char **)(n + 4);
    }
    return r;
}

int func_002F2FC0(char *p, unsigned int mask) {
    int n = 0;
    char *e;
    *(char **)(p + 0x83C) = *(char **)(p + 0x834);
    while ((e = nx_2F2(p)) != 0) {
        if (*(unsigned int *)(e + 0x110) & mask) n++;
    }
    return n;
}

void func_001AD140(char *);

static inline char *nx_2F22(char *p) {
    char *r = 0;
    char *n = *(char **)(p + 0x83C);
    if (((n != 0) ^ 1) == 0) {
        r = *(char **)n;
        *(char **)(p + 0x83C) = *(char **)(n + 4);
    }
    return r;
}

void func_002F22F0(char *p) {
    char *e;
    *(char **)(p + 0x83C) = *(char **)(p + 0x834);
    while ((e = nx_2F22(p)) != 0) {
        func_001AD140(e);
    }
}

void func_002F2A00(char *p, int k) {
    void func_002F2AA0(char *, int);
    int go;
    func_002F2AA0(p, *(int *)(p + 0xC));
    go = 1;
    do {
        switch (*(int *)(p + 0x10)) {
        case 0:
            return;
        case 11:
            if (k == *(int *)(*(char **)(p + 8) + 4)) go = 0;
            func_002F2B10(p);
            break;
        default:
            func_002F2B10(p);
            break;
        }
    } while (go);
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline char *nx_2F1F(char *p) {
    char *r = 0;
    char *n = *(char **)(p + 0x1020);
    if (n != 0) {
        r = *(char **)n;
        *(char **)(p + 0x1020) = *(char **)(n + 4);
    }
    return r;
}

char *func_002F1F90(char *p, int k, float *out) {
    char *e;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) return 0;
    *(char **)(p + 0x1020) = *(char **)(p + 0x1018);
    while ((e = nx_2F1F(p)) != 0) {
        if (*(unsigned char *)(e + 0x35) == 1 && *(short *)((char *)(k * 2) + (int)e + 0x38) != -1) break;
    }
    if (e == 0) return 0;
    if (*(int *)(e + 0x10) == 0) return 0;
    if (out == 0) return e;
    QCOPY(out, e + 0x20);
    out[3] = 1.0f;
    return e;
}

int func_002F1F50(char *, char *);

#define MT2F1(p, e, k, a) {     unsigned short b = *(unsigned short *)(e + 2);     if ((b & 7) != 0) {         if (b & 1) {             if (a & 1) return st2F1(p, e, k);         } else if (b & 2) {             if (a & 2) return st2F1(p, e, k);         } else if ((b & 4) && (a & 4)) {             return st2F1(p, e, k);         }     } else {         return st2F1(p, e, k);     } }

static inline void ad2F1(char *p, char *e, int k) {
    *(unsigned char *)((char *)k + (int)p + 0x1037) = *(unsigned char *)(p + 0x1036);
    *(unsigned short *)((char *)(k * 2) + (int)e + 0x38) = (*(unsigned char *)(p + 0x1036))++;
}

static inline int st2F1(char *p, char *e, int k) {
    ad2F1(p, e, k);
    *(short *)(e + 0x36) = 1;
    e[0x35] = 1;
    return 1;
}

int func_002F1B20(char *p, char *e, unsigned char c, int x) {
    int k;
    unsigned short a;
    k = func_002F1F50(p, e);
    if (k == -1) return 0;
    if (c == 0) {
        a = *(unsigned short *)(e + 4);
        if ((a & 8) || (*(unsigned short *)(e + 2) & 0x10)) {
            if (*(signed char *)(*(char **)(e + 8) + 0x45) != 6) {
                if (x != 0) {
                    if (*(unsigned char *)(e + 0x35) == 1) {
                        ad2F1(p, e, k);
                        (*(short *)(e + 0x36))++;
                        return 1;
                    }
                } else if (*(unsigned char *)(e + 0x35) == 0) {
                    MT2F1(p, e, k, a)
                }
            }
        }
    } else if (x != 0) {
        if (*(unsigned char *)(e + 0x35) == 1) {
            ad2F1(p, e, k);
            (*(short *)(e + 0x36))++;
            return 1;
        }
    } else if (*(unsigned char *)(e + 0x35) == 0) {
        a = *(unsigned short *)(e + 4);
        if ((a & 8) || (*(unsigned short *)(e + 2) & 0x10)) {
            MT2F1(p, e, k, a)
        }
    }
    return 0;
}

float func_00104D00(float *, float *);

static inline char *next2F2(char *p) {
    char *n = *(char **)(p + 0x83C);
    char *e = 0;
    if (n != 0) {
        e = *(char **)n;
        *(char **)(p + 0x83C) = *(char **)(n + 4);
    }
    return e;
}

char *func_002F2EF0(char *p, float *pos, float r) {
    float d[4] __attribute__((aligned(16)));
    char *e;
    char *res = 0;
    float best;
    r = r * r;
    best = r;
    *(char **)(p + 0x83C) = *(char **)(p + 0x834);
    while ((e = next2F2(p)) != 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(pos), "r"(e + 0x50) : "memory");
        {
            float l = func_00104D00(d, d);
            if (l < best) {
                best = l;
                res = e;
            }
        }
    }
    return res;
}

void func_002F10C0();

void func_002F10B0(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    func_002F10C0(p0, p1, p2, 0, p3);
}

int func_002F3080(p0) char *p0; {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 2108);
    v1 = 0;
    if (v0 != 0) {
        v1 = *(int *)(v0 + 0);
        *(int *)(p0 + 2108) = *(int *)(v0 + 4);
    }
    return v1;
}

int func_002F42A0(p0) int p0; {
    return *(signed char *)((char *)p0 + 45344);
}

void func_00133450();

int func_00207480();

void func_002F42B0(p0, p1) int p0; int p1; {
    char stk[0x60] __attribute__((aligned(16)));
    float tmp7;
    float tmp8;
    int tmp9;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -48) + 48)) : "memory");
    *(float *)((stk + -48) + 128) = 100.0f;
    *(float *)((stk + -48) + 132) = 100.0f;
    *(float *)((stk + -48) + 136) = 100.0f;
    *(float *)((stk + -48) + 112) = *(float *)((char *)p1 + 40);
    *(float *)((stk + -48) + 116) = *(float *)((char *)p1 + 44);
    *(float *)((stk + -48) + 120) = *(float *)((char *)p1 + 48);
    *(float *)((stk + -48) + 124) = 0.0f;
    func_00133450(((stk + -48) + 48), ((stk + -48) + 112), ((stk + -48) + 128));
    *(float *)((stk + -48) + 96) = (*(float *)((char *)p0 + 80) + (5.0f * *(float *)((char *)p1 + 40)));
    *(float *)((stk + -48) + 100) = (*(float *)((char *)p0 + 84) + (5.0f * *(float *)((char *)p1 + 44)));
    tmp7 = (5.0f * *(float *)((char *)p1 + 48));
    tmp8 = *(float *)((char *)p0 + 88);
    *(int *)((stk + -48) + 108) = 0x3f800000;
    *(float *)((stk + -48) + 104) = (tmp8 + tmp7);
    tmp9 = func_00207480(3, 235, ((stk + -48) + 48), 8);
}

void func_002F43B0(p0, p1) int p0; char *p1; {
    int v0;
    int tmp0;
    int tmp1;
    v0 = (p0 & 255);
    tmp0 = 14;
    if (v0 != tmp0) {
        if (v0 != 4) {
            tmp1 = 3;
            if (v0 != tmp1) {
                switch (v0) {
                case 0:
                    *(unsigned char *)(p1 + 0) = 128;
                    *(char *)(p1 + 1) = 0;
                    *(char *)(p1 + 2) = 0;
                    break;
                case 1:
                    *(char *)(p1 + 0) = 96;
                    *(unsigned char *)(p1 + 1) = 128;
                    *(unsigned char *)(p1 + 2) = 144;
                    break;
                case 2:
                    *(unsigned char *)(p1 + 0) = 160;
                    *(char *)(p1 + 1) = 64;
                    *(char *)(p1 + 2) = 16;
                    break;
                }
            } else {
                *(char *)(p1 + 0) = 112;
                *(char *)(p1 + 1) = 64;
                *(unsigned char *)(p1 + 2) = 160;
            }
        } else {
            *(unsigned char *)(p1 + 0) = 128;
            *(unsigned char *)(p1 + 1) = 128;
            *(unsigned char *)(p1 + 2) = 128;
        }
    } else {
        *(char *)(p1 + 0) = 32;
        *(char *)(p1 + 1) = 64;
        *(unsigned char *)(p1 + 2) = 128;
    }
}

signed char func_002EFB50(char *p) { return *(signed char *)(p + 52); }

int func_002F0A40(char *p) { return *(int *)(p + 4136); }

void func_002F21D0(char *p) { *(int *)(p + 8) = 0; }

void func_002F2250(char *p) { *(char *)(p + 24) = 0; }

char *func_002EFB20(char *p0) {
    return *(char **)(*(char **)(p0 + 12) + 15232);
}

void func_002F2B30(char *p0) {
    unsigned char t0;
    int t1;
    t0 = *(unsigned char *)(*(char **)(p0 + 8) + 0);
    *(int *)(p0 + 16) = *(unsigned char *)(*(char **)(p0 + 8) + 0);
    t1 = ((((int)*(char **)(*(char **)(p0 + 8) + 0) >> 8) & 255) + 1);
    *(int *)(p0 + 20) = ((((int)*(char **)(*(char **)(p0 + 8) + 0) >> 8) & 255) + 1);
}

void func_002F2FB0(char *p0) {
    int t0;
    t0 = *(int *)(p0 + 2100);
    *(int *)(p0 + 2108) = *(int *)(p0 + 2100);
}

int func_002F30A0(char *p0) {
    return ((unsigned int)0 < (unsigned int)*(int *)(p0 + 128));
}

void func_002F44B0(char *p0) {
    *(char *)(p0 + 4) = 0;
    *(int *)(p0 + 308) = 0;
    *(char *)(p0 + 161) = 0;
}
