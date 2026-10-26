/* Tries three float pairs (one per case) until func_002F0C10 accepts one. */
int func_002F0C10(char *, int, int, int, float, float);

int func_0023F670(char *p, int x, int y) {
    unsigned int i;
    float a, b;
    int r;
    for (i = 0; i < 3; i++) {
        switch (i) {
        case 0:
            a = *(float *)(*(char **)(p + 0x283C) + 0xC4);
            b = *(float *)(*(char **)(p + 0x283C) + 0xC8);
            break;
        case 1:
            a = *(float *)(*(char **)(p + 0x283C) + 0xCC);
            b = *(float *)(*(char **)(p + 0x283C) + 0xD0);
            break;
        case 2:
            a = *(float *)(*(char **)(p + 0x283C) + 0xD4);
            b = *(float *)(*(char **)(p + 0x283C) + 0xD8);
            break;
        }
        r = func_002F0C10(p + 0x2B58, x, y, *(unsigned char *)(p + 0xD4), a, b);
        if (r) {
            return r;
        }
    }
    return 0;
}

/* Turn angle from degrees, two position updates, keeps 20 units above the target. */
extern char D_01CAFF0C[];

extern char D_00666710[];

void func_0031DAF0(char *, int, int);

void func_0024CC00(char *, int);

void func_00226A00(char *, int);

void func_00226580(char *, int);

int func_00240ED0(char *p) {
    extern unsigned short D_0066671A[];
    unsigned short func_001AE770(char *, int);
    int func_002242C0(char *);
    unsigned int i;
    unsigned char d2;
    unsigned char d1;
    unsigned int j;
    unsigned int n;
    signed char cur;
    signed char v;
    char *o;
    d2 = 0;
    d1 = 0;
    if ((unsigned char)func_002242C0(p) == 1) return 1;
    if (*(unsigned char *)(p + 0x28AA) == 2) return 1;
    if (*(unsigned char *)(p + 0x290D) == 1) return 0;
    if ((*(unsigned short *)(p + 0x49C4) & D_0066671A[func_001AE770(D_00666710, 2)]) && *(float *)(p + 0x3D88) <= 0.0f) {
        *(float *)(p + 0x3D88) = *(float *)(*(char **)(p + 0x283C) + 0x2F4);
        i = *(unsigned char *)(p + 0x3D4A);
        cur = *(signed char *)((char *)i + (int)p + 0x3D4C);
        for (n = 0; n < 2; n++) {
            i++;
            if (i > 1) i = 0;
            v = *(signed char *)(p + i + 0x3D4C);
            if (v != -1) {
                if (cur != v) {
                    o = **(char ***)(*(char **)D_01CAFF0C + 0x2C);
                    if (o) func_0031DAF0(o, 1, i);
                    d1 = 1;
                }
                break;
            }
        }
        if (d1 == 1) {
            *(unsigned char *)(p + 0x3D4A) = i;
            func_0024CC00(p, 4);
            if (*(unsigned char *)(p + 0x28AE) == 1 || *(unsigned char *)(p + 0x28AA) == 1 ||
                (*(unsigned char *)(p + 0x3C79) == 1 && *(unsigned char *)(p + 0x28AA) != 3)) {
                func_00226A00(p, 1);
                func_00226580(p, 1);
            }
        }
    }
    if ((*(unsigned short *)(p + 0x49C4) & D_0066671A[func_001AE770(D_00666710, 1)]) && *(float *)(p + 0x3D8C) <= 0.0f) {
        *(float *)(p + 0x3D8C) = *(float *)(*(char **)(p + 0x283C) + 0x2F4);
        j = *(unsigned char *)(p + 0x3D4B);
        cur = *(signed char *)((char *)j + (int)p + 0x3D4C);
        for (n = 0; n < 3; n++) {
            j++;
            if (j > 3) j = 2;
            v = *(signed char *)(p + j + 0x3D4C);
            if (v != -1) {
                if (cur != v) {
                    o = **(char ***)(*(char **)D_01CAFF0C + 0x2C);
                    if (o) func_0031DAF0(o, 0, j - 2);
                    d2 = 1;
                }
                break;
            }
        }
        if (d2 == 1) {
            *(unsigned char *)(p + 0x3D4B) = j;
            func_0024CC00(p, 7);
            func_0024CC00(p, 9);
        }
    }
    return 1;
}

/* Pushes flagged entries up along their velocity once the player is above them. */
extern char D_01CAFF0C[];

void func_00105668(float *, float *, float);

void func_00105760(float *, float *, float);

void func_00104B80(float *, float *, float *);

unsigned char func_002018A0(char *, float *, float *, float *, char *, int);

int func_00245590(char *p, float *pos, float *dir, char *out, float a, float h) {
    short func_00131D10(float, float);
    float m[16] __attribute__((aligned(16)));
    float v80[4] __attribute__((aligned(16)));
    float v70[4] __attribute__((aligned(16)));
    float v60[4] __attribute__((aligned(16)));
    float z;
    float side;
    short ang;
    unsigned int i;
    z = 80.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105668(m, m, a);
    ang = func_00131D10(dir[0], dir[2]);
    if ((unsigned short)(*(short *)(p + 0x90) - ang) < 0x8000) {
        ang = ang + 0x4000;
        side = -120.0f;
    } else {
        ang = ang - 0x4000;
        side = 120.0f;
    }
    func_00105760(m, m, 6.283185f * ((float)ang / 65536.0f));
    v80[3] = 1.0f;
    v80[0] = 0.0f;
    v80[1] = 0.0f;
    v80[2] = h;
    func_00104B80(v80, m, v80);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v80), "r"(pos) : "memory");
    if (func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v80, pos, v60, out, 0) == 0) {
        for (i = 0; i < 4; i++) {
            v80[3] = 1.0f;
            v80[0] = 0.0f;
            v80[2] = z;
            v80[1] = 0.0f;
            func_00104B80(v80, m, v80);
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v80), "r"(pos) : "memory");
            v70[1] = 0.0f;
            v70[3] = 1.0f;
            v70[0] = side;
            v70[2] = z;
            func_00104B80(v70, m, v70);
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v70), "r"(pos) : "memory");
            if (func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v80, v70, v60, out, 0) == 0) return 0;
            z += h / 4.0f;
        }
    }
    return 1;
}

int func_0023EB30(char *p) {
    float func_00132470(float *, char *);
    float v[4] __attribute__((aligned(16)));
    unsigned int f;
    unsigned int i;
    char *o;
    f = 0;
    for (i = 0; i < 16; i++) {
        o = *(char **)((char *)(i * 4) + (int)p + 0x481C);
        if (o != 0 && (**(unsigned char **)(o + 0x100) & 4) != 0) {
            f |= *(unsigned int *)(o + 8);
        }
    }
    if ((f & 0x4000) != 0 && *(char **)(p + 0x2890) != 0) {
        for (i = 0; i < 3; i++) {
            if (*(unsigned char *)((char *)i + (int)*(char **)(p + 0x2890) + 0x8920) == 1) {
                __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)((char *)(i * 0x14) + (int)*(char **)(p + 0x2890) + 0x1BE0) + 0x104)) : "memory");
                if (func_00132470(v, p + 0x50) < 120.0f) return 1;
            }
        }
    }
    return 0;
}

void func_0023D5B0(char *);

static inline unsigned char ok_23D(char *p) {
    if (*(unsigned char *)(p + 0x28AE) == 1 && *(unsigned char *)(p + 0x28A9) == 1) return 1;
    return 0;
}

void func_0023D480(char *p) {
    extern unsigned short D_0066671A[];
    unsigned short func_001AE770(char *, int);
    int func_002DAD40(char *);
    void func_0021C7A0(char *, int);
    if ((*(unsigned short *)(p + 0x49C4) & D_0066671A[func_001AE770(D_00666710, 0x40)]) != 0
        || (*(unsigned short *)(p + 0x49C4) & D_0066671A[func_001AE770(D_00666710, 0x20)]) != 0
        || (unsigned char)ok_23D(p) == 0) {
        func_0023D5B0(p);
    } else if ((unsigned char)func_002DAD40(p) != 2) {
        if (*(unsigned char *)(p + 0x28A6) == 0) {
            func_0021C7A0(p, 0x23);
        } else {
            func_0021C7A0(p, 0x24);
        }
        return;
    }
}

void func_00247710(char *p, char *src, signed char n) {
    int i;
    if (n > 0) {
        for (i = 0; i < n; i++) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + (i << 4) + 0xF0), "r"(src + (i << 4)) : "memory");
        }
        *(char *)(p + 0x170) = n;
    }
}

extern char D_01CAFF0C[];

float func_00131AB0(float);

void func_00248AF0(char *, float *, float *, float);

void func_00247920(char *, char *, float *);

void func_00248580(char *);

#define QCP(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_002477F0(char *p, float a) {
    void func_0024BF20(char *);
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    QCP(v, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
    v[1] = v[1] + *(float *)(p + 0xD0);
    a = func_00131AB0(a);
    func_00248AF0(p, w, v, a);
    w[3] = 1.0f;
    QCP(p + 0x190, v);
    QCP(p + 0x1A0, w);
    func_00247920(p, p + 0x1B0, w);
    func_00248580(p);
    QCP(p + 0x1B0, p + 0x1A0);
    QCP(p + 0x1C0, p + 0x190);
    QCP(p + 0x70, p + 0x1A0);
    QCP(p + 0x80, p + 0x190);
    *(float *)(p + 0x1D0) = a;
    func_0024BF20(p);
    *(unsigned char *)(p + 0x91) = 1;
    QCP(p + 0xA0, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
}

extern int D_005BE09C;

extern char D_01CAF520[];

void func_0020FBD0(char *);

void func_0020FBE0(char *, int);

char *func_00210240(char *);

void func_00210090(char *, float);

void func_001AC630(int, float);

void func_001AC980(int, char *);

void func_002E74D0(char *);

void func_002E7510(char *, unsigned char, unsigned char, unsigned char, float, float, float, float);

int func_00246030(char *p) {
    void func_0024BF20(char *);
    char *s;
    char *r;
    func_0020FBD0(p + 0x30);
    func_0020FBE0(p + 0x30, *(int *)(p + 0x20));
    s = *(char **)(p + 0x20);
    r = func_00210240(p);
    func_00210090(p + 0x30, *(float *)(s + 0x10) + ((*(float *)(r + 0xC) + *(float *)(r + 0x10)) - *(float *)(p + 4)) / *(float *)(p + 0x10));
    func_0024BF20(p + 0x30);
    func_001AC630(D_005BE09C, *(float *)(p + 0x50));
    func_001AC980(D_005BE09C, p + 0x30);
    func_002E74D0(D_01CAF520);
    if (*(unsigned char *)(p + 0x1FB) != 0) {
        D_01CAF520[0] = 1;
        func_002E7510(D_01CAF520, *(unsigned char *)(p + 0x1F8), *(unsigned char *)(p + 0x1F9), *(unsigned char *)(p + 0x1FA),
                      (float)(unsigned int)*(unsigned short *)(p + 0x1F2), (float)(unsigned int)*(unsigned short *)(p + 0x1F0),
                      (float)(unsigned int)*(unsigned short *)(p + 0x1F4), (float)(unsigned int)*(unsigned short *)(p + 0x1F6));
    } else {
        D_01CAF520[0] = 0;
    }
    return 1;
}

unsigned char func_002DA0B0(char *, signed char);

int func_002443D0(char *p, unsigned char mode, signed char c) {
    int k;
    if (c == -1) return 1;
    switch (mode) {
    case 0:
        if (c == *(signed char *)((char *)*(unsigned char *)(p + 0x3D4A) + (int)p + 0x3D4C) && func_002DA0B0(p, c) == 0) return 1;
        break;
    case 1:
        if (c == *(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C) && func_002DA0B0(p, c) == 0) return 1;
        break;
    case 2:
        if ((c == *(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C) || c == *(signed char *)((char *)*(unsigned char *)(p + 0x3D4A) + (int)p + 0x3D4C)) && func_002DA0B0(p, c) == 0) return 1;
        break;
    }
    if (c & 0x80) {
        k = c & 0x7F;
        if (k == *(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C) || k == *(signed char *)((char *)*(unsigned char *)(p + 0x3D4A) + (int)p + 0x3D4C)) {
            if (func_002DA0B0(p, k) == 1 || func_002DA0B0(p, k) == 2 || func_002DA0B0(p, k) == 3) return 1;
        }
    }
    return 0;
}

char *func_00279290(char *);

void func_001A1F90(char *);

char *func_0027A710(char *);

int func_00210810(char *, float);

char *func_00210830(char *, int, float);

void func_00212DA0(char *, char *);

void func_00213010(char *, float);

void func_001A2050(char *);

void func_001A1E10(char *);

void func_001A1ED0(char *);

int func_002462B0(char *p) {
    char *func_00215A30(char *, int, short);
    float t;
    char *g;
    char *o;
    char *r;
    char *e;
    g = func_00210240(p);
    t = *(float *)(g + 0xC) + *(float *)(g + 0x10);
    o = func_00215A30(func_00210240(p), 2, *(short *)(p + 0x58));
    if (func_00210810(o, t) > 0 && (r = func_00210830(o, 0, t)) != 0 && (e = *(char **)(r + 0x18)) != 0) {
        switch (*(unsigned char *)(p + 0x5D)) {
        case 0:
            if (*(char **)(p + 0x20)) {
                func_00212DA0(e + 0x2010, *(char **)(p + 0x20));
                func_00213010(e + 0x2010, *(float *)(*(char **)(p + 0x20) + 0xC) + (t - *(float *)(p + 4)) / *(float *)(p + 0x10));
            }
            break;
        case 1:
            switch (*(signed char *)(e + 0x1000)) {
            case 0:
            case 1:
                func_001A1F90(func_00279290(e + 0x40));
                break;
            case 2:
                func_001A2050(func_0027A710(e + 0x640));
                break;
            }
            break;
        case 2:
            switch (*(signed char *)(e + 0x1000)) {
            case 0:
            case 1:
                func_001A1E10(func_00279290(e + 0x40));
                break;
            case 2:
                func_001A1ED0(func_0027A710(e + 0x640));
                break;
            }
            break;
        }
        if (*(int *)(*(char **)(e + 0x200C) + 0x2C)) {
            switch (*(unsigned char *)(p + 0x5E)) {
            case 1: *(int *)(e + 0x3F9C) = 1; break;
            case 2: *(int *)(e + 0x3F9C) = 0; break;
            case 3: *(int *)(e + 0x3F9C) = 2; break;
            }
        }
    }
    return 1;
}

static inline signed char slot_find(char *p, signed char id) {
    unsigned int i;
    if (id != -1) {
        for (i = 0; i < 5; i++) {
            signed char c = *(signed char *)(p + i + 0x3D4C);
            if (c == id) {
                return i;
            }
        }
    }
    return -1;
}

int func_0023F760(char *p) {
    switch (*(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C)) {
    case 5:
        *(signed char *)(p + 0x3BA1) = 5;
        return 1;
    case 6:
        *(signed char *)(p + 0x3BA1) = 6;
        return 1;
    case 7:
        *(signed char *)(p + 0x3BA1) = 7;
        return 1;
    case 8:
        *(signed char *)(p + 0x3BA1) = 8;
        return 1;
    case 9:
        *(signed char *)(p + 0x3BA1) = 9;
        return 1;
    }
    if (slot_find(p, 5) != -1) {
        *(signed char *)(p + 0x3BA1) = 5;
    }
    return 1;
}

int func_00244DF0(char *p, unsigned int x) {
    if (x != 0) {
        switch (x & 0xFF000000) {
        case 0x80000000:
            if (*(unsigned char *)((char *)(x & 0xFF) + (int)p + 0x24DB) == 2) return 1;
            break;
        case 0x40000000:
            if ((x & 0xFF) == *(unsigned char *)(p + 0x2998)) return 1;
            break;
        }
    }
    return 0;
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_00245810(char *, char *, float *, float);

short func_002DACC0(char *);

int func_00245EF0(char *, float *, short, float *, char *, int, float);

int func_002450D0(char *p, unsigned char a, float lim) {
    int func_00131D10(float, float);
    float v[4] __attribute__((aligned(16)));
    float h;
    float d;
    unsigned int i;
    short ang;
    h = 100000.0f;
    if (*(unsigned char *)(p + 0x290D) == 1) return 0;
    func_00245810(p, p + 0x50, &h, 2000.0f);
    if (!(300.0f + *(float *)(p + 0x54) <= h)) return 0;
    QCOPY(v, p + 0x50);
    v[1] = v[1] + 100.0f;
    if (a == 0) {
        ang = func_002DACC0(p);
    } else {
        ang = *(short *)(p + 0x90);
    }
    i = 0;
    while (i < 4) {
        if ((unsigned char)func_00245EF0(p, v, ang, &d, p + 0x2928, 0x1000, i == 0 ? 60.0f : 100.0f) == 1) {
            if (!(d <= lim)) return 0;
        } else {
            return 0;
        }
        i++;
        v[1] = v[1] + 50.0f;
    }
    *(short *)(p + 0x28DC) = (short)func_00131D10(*(float *)(p + 0x2950), *(float *)(p + 0x2958)) + 0x8000;
    p[0x3C6D] = 2;
    return 1;
}

float func_0011D798(float);

int func_002450D0(char *p, unsigned char a, float lim);

float func_002DAAA0(char *, char *);

int func_002DAB50(char *, float, float);

int func_002DAAB0(char *, char *, short, short);

int func_002452A0(char *, float);

int func_00244A40(char *, char *);

int func_002448D0(char *);

static inline unsigned char both244(char *p) { unsigned char r; if (*(unsigned char *)(p + 0x28AE) == 1 && *(unsigned char *)(p + 0x28A9) == 1) r = 1; else r = 0; return r; }

int func_00244590(char *p, char *a) {
    unsigned char func_002DAD40(char *);
    switch (*(unsigned char *)(a + 0xE)) {
    case 0:
        return 1;
    case 1:
        if (*(unsigned char *)(p + 0x3B9D) != 1) break;
        if (!(func_002DAAA0(p, p + 0x3C40) < 200.0f)) break;
        if ((unsigned char)func_002DAB50(p, *(float *)(p + 0x3C44), 200.0f) != 1) break;
        if ((unsigned char)func_002DAAB0(p, p + 0x3C40, 0x2000, -0x8000) != 1) break;
        return 1;
    case 2:
        if ((unsigned char)func_002DAD40(p) == 2) break;
        if (*(int *)(p + 0x2898) & 2) {
            if (*(signed char *)(p + 0x2908) <= 0) break;
            if ((unsigned char)func_002450D0(p, 0, -func_0011D798(6.283185f * (*(float *)(*(char **)(p + 0x283C) + 0xE8) / 360.0f))) == 1) return 1;
            if ((unsigned char)func_002452A0(p, -func_0011D798(6.283185f * (*(float *)(*(char **)(p + 0x283C) + 0xEC) / 360.0f))) != 1) break;
            return 1;
        }
        if ((unsigned char)func_002450D0(p, 0, -func_0011D798(6.283185f * (*(float *)(*(char **)(p + 0x283C) + 0xE0) / 360.0f))) != 1) break;
        return 1;
    case 3:
        if ((unsigned char)func_00244A40(p, p + 0x29B0) != 1) break;
        return 1;
    case 4:
        if ((unsigned char)func_002448D0(p) != 1) break;
        return 1;
    case 5:
        if (*(float *)(p + 0x54) - *(float *)(p + 0x2924) <= *(float *)(*(char **)(p + 0x2844) + 0x18C)) break;
        return 1;
    case 6:
        if (*(float *)(p + 0x54) - *(float *)(p + 0x2924) <= *(float *)(*(char **)(p + 0x2844) + 0x60)) break;
        return 1;
    case 7:
        if (*(float *)(p + 0x54) - *(float *)(p + 0x2924) <= *(float *)(*(char **)(p + 0x283C) + 0x114)) break;
        return 1;
    case 8:
        if (*(unsigned char *)(a + 2) != 0xC2) goto ret1; return *(unsigned char *)(p + 0x3C74) >= 1; ret1: return 1;
    case 9:
        if ((unsigned char)both244(p) != 1) break;
        return 1;
    }
    return 0;
}

void func_001FF760(char *, int);

void func_00202010(char *, char *, char *, float);

void func_00248660(char *p) {
    func_001FF760(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, 1);
    func_00202010(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, p + 0x1A0, p + 0x190, 50.0f);
    func_001FF760(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, 0);
    *(float *)(p + 0x1AC) = 1.0f;
}

extern char D_01DFABA0[];

extern char D_006011E4[];

extern char D_00631568[];

void func_0046F350(char *);

void func_0046EBE0(char *);

void func_003303F0(char *, int, int, int, int);

void func_0013E040(char *, int, int);

void func_00240520(char *p, int k) {
    *(unsigned char *)(p + 0x3C78) = 0;
    *(unsigned char *)(p + 0x3C6E) = 0;
    if ((unsigned char)k == 0) {
        func_0046F350(p + 0x3CE0);
        *(float *)(p + 0x28D4) = *(float *)(*(char **)(p + 0x283C) + 0x1E8);
        func_003303F0(D_01DFABA0, 2, 12, 64, 4);
    } else {
        func_0046EBE0(p + 0x3CE0);
    }
    func_0013E040(D_006011E4, 5, 0);
    func_0013E040(D_00631568, 5, 0);
}

void func_002D9070(char *, int);

void func_00225F30(char *, int);

void func_002405C0(char *p, unsigned char k) {
    if (k == 0 || (*(unsigned char *)(p + 0x28AA) != 3 && *(signed char *)(p + 0x46) != 1 && *(unsigned char *)(p + 0x3C79) != 0)) {
        *(unsigned char *)(p + 0x3C79) = 0;
        *(unsigned char *)(*(char **)(p + 0x3D44) + 0x3C79) = 0;
        *(unsigned char *)(p + 0x3C6E) = 0;
        *(unsigned char *)(p + 0x3D31) = 0;
        func_002D9070(p, *(signed char *)(p + 0x24F2));
        if (*(char **)(p + 0x3D44) != 0) {
            *(unsigned char *)(*(char **)(p + 0x3D44) + 0xD6) = 0;
        }
        if (*(unsigned char *)(p + 0x28AA) != 1 && *(unsigned char *)(p + 0x28AE) == 0) {
            func_00226A00(p, 0);
            *(float *)(p + 0x28D0) = *(float *)(*(char **)(p + 0x283C) + 0x1F0);
            func_00225F30(p, 2);
            func_00226580(p, 0);
        }
    }
}

int func_00243FC0(char *, int);

int func_002441F0(char *p, unsigned char k) {
    switch (k) {
    case 0:
        if ((unsigned char)func_00243FC0(p, 2) == 1) {
            return 1;
        }
        if ((unsigned char)func_00243FC0(p, 3) == 1) {
            return 2;
        }
        break;
    case 1:
        if ((unsigned char)func_00243FC0(p, 5) == 1) {
            return 1;
        }
        if ((unsigned char)func_00243FC0(p, 6) == 1) {
            return 2;
        }
        break;
    }
    return 0;
}

typedef struct { unsigned char r, g, b, a; } C4;

typedef struct { float x, y, z, w; } F4u;

typedef struct { float x, y, z; } F3u;

void func_0023D330(char *p) {
    int func_0023E960(char *);
    int func_00245C40(char *);
    int func_0023EDD0(char *);
    int func_0023EF80(char *);
    *(C4 *)(p + 0x2928) = *(C4 *)(p + 0x2960);
    *(F4u *)(p + 0x292C) = *(F4u *)(p + 0x2964);
    *(F4u *)(p + 0x293C) = *(F4u *)(p + 0x2974);
    *(float *)(p + 0x294C) = *(float *)(p + 0x2984);
    *(F3u *)(p + 0x2950) = *(F3u *)(p + 0x2988);
    *(float *)(p + 0x295C) = *(float *)(p + 0x2994);
    if (func_0023E960(p) == 0 && func_00245C40(p) == 0 && func_0023EDD0(p) == 0) {
        func_0023EF80(p);
    }
}

extern char D_005A7AB0[];

extern char D_00599B28[];

void func_001282D0(char *, char *, int);

void func_0023B880();

void func_00202ED0();

char *func_0023BB20(char *p) {
    void func_00128488(char *, int, int);
    void func_00100450(char *, void *, void *, int, int);
    int i;
    *(char **)p = D_005A7AB0;
    func_001282D0(p + 0x10, D_00599B28, 4);
    func_00128488(p + 0x14, 0, 14);
    func_00128488(p + 0x30, 0, 0x900);
    func_00100450(p + 0x930, (void *)func_0023B880, (void *)func_00202ED0, 16, 0x30);
    for (i = 0; i < 48; i++) {
        *(char **)(p + i * 16 + 0x93C) = p + i * 0x30 + 0x30;
    }
    return p;
}

int func_00244E60(char *p, unsigned int id) {
    extern char D_0066671A[];
    unsigned short func_001AE770(char *, int);
    unsigned char k;
    if (id != 0) {
        switch (id & 0xFF000000) {
        case 0x80000000:
            k = ((unsigned char *)(p + 0x24DB))[id & 0xFF];
            if (k == 2) {
                return 2;
            }
            if (k != 1) {
                break;
            }
            if (id == 0x80000005 && (*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x40)])) {
                *(unsigned char *)(p + 0x2905) = 1;
                *(float *)(p + 0x2910) = 30.0f;
            }
            return 1;
        case 0x40000000:
            if ((id & 0xFF) == *(unsigned char *)(p + 0x2998)) {
                return 2;
            }
            break;
        }
    }
    return 0;
}

int func_0023EC60(char *);

void func_0023CC80(char *p) {
    int func_0023E960(char *);
    int func_00245C40(char *);
    int func_0023EDD0(char *);
    int func_0023EF80(char *);
    int func_0023F290(char *);
    if (*(unsigned char *)(p + 0x2848) == 0x1D) {
        *(C4 *)(p + 0x2928) = *(C4 *)(p + 0x2960);
        *(F4u *)(p + 0x292C) = *(F4u *)(p + 0x2964);
        *(F4u *)(p + 0x293C) = *(F4u *)(p + 0x2974);
        *(float *)(p + 0x294C) = *(float *)(p + 0x2984);
        *(F3u *)(p + 0x2950) = *(F3u *)(p + 0x2988);
        *(float *)(p + 0x295C) = *(float *)(p + 0x2994);
    }
    if (func_0023E960(p) == 0 && func_00245C40(p) == 0 && func_0023EDD0(p) == 0 && func_0023EF80(p) == 0 &&
        func_0023EC60(p) == 0) {
        func_0023F290(p);
    }
}

int func_0023E460(char *p);

int func_0023E330(char *);

int func_00244E60(char *p, unsigned int id);

void func_0023D960(char *p) {
    extern char D_0066671A[];
    unsigned short func_001AE770(char *, int);
    int func_0023F330(char *p);
    int func_0023E960(char *);
    int func_00245C40(char *);
    int func_0023EDD0(char *);
    int func_0023EF80(char *);
    int func_0023E1F0(char *p);
    int func_0023F290(char *);
    int func_0023E500(char *);
    func_00244E60(p, 0x80000005);
    if (!(*(signed char *)(p + 0x46) == 0 && *(unsigned char *)(p + 0x2998) == 0x63 &&
          (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 8)]))) {
        if (func_0023E1F0(p) != 0) {
            return;
        }
        if (func_0023E330(p) != 0) {
            return;
        }
    }
    if (func_0023E460(p) == 0 && func_0023E500(p) == 0 && func_0023E960(p) == 0 && func_00245C40(p) == 0 &&
        func_0023EDD0(p) == 0 && func_0023EF80(p) == 0 && func_0023F290(p) == 0) {
        func_0023F330(p);
    }
}

static inline unsigned char partner_ready(char *g) {
    if (*(unsigned char *)(g + 0x28AE) == 1 && *(unsigned char *)(g + 0x28A9) == 1) {
        return 1;
    }
    return 0;
}

void func_0023D630(char *p) {
    void func_0021B790(char *, int);
    int func_002DAD40(char *);
    extern char D_0066671A[];
    unsigned short func_001AE770(char *, int);
    void func_0021C7A0(char *, int);
    if ((*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x40)]) ||
        (*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x20)]) ||
        (unsigned char)partner_ready(p) == 0) {
        func_0023D5B0(p);
        return;
    }
    if ((unsigned char)func_002DAD40(p) == 2) {
        func_0021B790(p, 10);
        return;
    }
    if (*(unsigned char *)(p + 0x28A6) != 0) {
        func_0021C7A0(p, 0x24);
        return;
    }
}

void func_0023D750(char *p) {
    void func_0021B790(char *, int);
    int func_002DAD40(char *);
    extern char D_0066671A[];
    unsigned short func_001AE770(char *, int);
    void func_0021C7A0(char *, int);
    if ((*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x40)]) ||
        (*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x20)]) ||
        (unsigned char)partner_ready(p) == 0) {
        func_0023D5B0(p);
        return;
    }
    if ((unsigned char)func_002DAD40(p) == 2) {
        func_0021B790(p, 10);
        return;
    }
    if (*(unsigned char *)(p + 0x28A6) == 0) {
        func_0021C7A0(p, 0x23);
        return;
    }
}

float func_001324E0(char *);

void func_00131650(char *, char *);

void func_001316B0(char *, char *, float *, float);

float func_0011DB20(float);

void func_001325D0(char *, char *, float);

void func_002486E0(char *);

void func_00248390(char *p) {
    float func_00132470(char *, float *);
    float v30[4] __attribute__((aligned(16)));
    float t;
    float h;
    float a;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v30), "r"((*(char **)(p + 0xB0) + 0x50)) : "memory");
    v30[1] = v30[1] + (*(float *)(p + (0xD0)));
    v30[3] = 1.0f;
    func_001316B0(p + 0x190, p + 0xC0, v30, 0.5f);
    (*(float *)(p + (0x19C))) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((p + 0x180)), "r"((p + 0x70)), "r"((p + 0x190)) : "memory");
    (*(float *)(p + (0x184))) = 0.0f;
    t = func_0011DB20((*(float *)(p + (0xD4))));
    (*(float *)(p + (0x184))) = t * func_001324E0(p + 0x180);
    func_00131650(p + 0x180, p + 0x180);
    (*(float *)(p + (0x18C))) = 1.0f;
    h = 0.5f * func_00132470(p + 0x190, (float *)(p + 0xC0));
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"((p + 0x1A0)), "r"((p + 0x190)) : "memory");
    func_001325D0(p + 0x1A0, p + 0x180, h + (*(float *)(p + (0xE0))));
    a = func_00132470(p + 0x1A0, v30);
    func_001316B0(p + 0x190, p + 0xC0, v30, a / (a + func_00132470(p + 0x1A0, (float *)(p + 0xC0))));
    (*(float *)(p + (0x19C))) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((p + 0x180)), "r"((p + 0x1A0)), "r"((p + 0x190)) : "memory");
    (*(float *)(p + (0x184))) = 0.0f;
    t = func_0011DB20((*(float *)(p + (0xD4))));
    (*(float *)(p + (0x184))) = t * func_001324E0(p + 0x180);
    func_00131650(p + 0x180, p + 0x180);
    (*(float *)(p + (0x18C))) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"((p + 0x1A0)), "r"((p + 0x190)) : "memory");
    func_001325D0(p + 0x1A0, p + 0x180, h + (*(float *)(p + (0xE0))));
    func_002486E0(p);
}

extern char D_01DF5D20[];

float func_001F9C40(char *, int);

void func_0020FF40(char *, float);

void func_002461E0(char *p) {
    void func_0024BF20(char *p);
    char *func_00215A30(char *, int, int);
    float t;
    char *r;
    t = func_001F9C40(D_01DF5D20, 0x87);
    t /= *(float *)(p + 0x10);
    func_00210240(p);
    r = func_00215A30(func_00210240(p), 1, -1);
    if (!(*(float *)(p + 4) < *(float *)(r + 0x10))) {
        func_0020FF40(p + 0x30, t);
        func_0024BF20(p + 0x30);
        func_001AC630(D_005BE09C, *(float *)(p + 0x50));
        func_001AC980(D_005BE09C, p + 0x30);
    }
}

#define VSUB(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

void func_002482C0(char *p) {
    float s;
    QCOPY(p + 0x190, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
    *(float *)(p + 0x194) = *(float *)(p + 0x194) + *(float *)(p + 0xD0);
    VSUB(p + 0x180, p + 0x70, p + 0x190);
    *(float *)(p + 0x184) = 0.0f;
    s = func_0011DB20(*(float *)(p + 0xD4));
    *(float *)(p + 0x184) = s * func_001324E0(p + 0x180);
    func_00131650(p + 0x180, p + 0x180);
    *(float *)(p + 0x18C) = 1.0f;
    QCOPY(p + 0x1A0, p + 0x190);
    func_001325D0(p + 0x1A0, p + 0x180, *(float *)(p + 0xD8));
}

int func_00241650(char *p, char *e) {
    unsigned int f;
    switch (*(int *)(e + 0x10)) {
    case 1:
        f = *(unsigned int *)(p + 0x2898);
        if (f & 2) return 0;
        if (f & 0x100000) return 0;
        if (f & 1) return 1;
        break;
    case 2:
        f = *(unsigned int *)(p + 0x2898);
        if (f & 0x100000) return 0;
        if (f & 1) return 0;
        if (f & 2) return 1;
        break;
    case 0x100000:
        f = *(unsigned int *)(p + 0x2898);
        if (f & 1) return 0;
        if (f & 0x100000) return 1;
        break;
    case 3:
        f = *(unsigned int *)(p + 0x2898);
        if (f & 0x100000) return 0;
        if (f & 1) return 1;
        if (f & 2) return 1;
        break;
    }
    return 0;
}

int func_00244C60(char *p, char *a, unsigned char *out) {
    unsigned int i;
    unsigned int w;
    unsigned int n = 0;
    unsigned int m = 0;
    unsigned int c = 0;
    unsigned int h = 0;
    unsigned int f;
    unsigned char t;
    for (i = 0; i < 5; i++) {
        switch (i) {
        case 0: w = *(unsigned int *)(a + 0x14); break;
        case 1: w = *(unsigned int *)(a + 0x18); break;
        case 2: w = *(unsigned int *)(a + 0x1C); break;
        case 3: w = *(unsigned int *)(a + 0x20); break;
        case 4: w = *(unsigned int *)(a + 0x24); break;
        }
        if (w == 0) continue;
        switch (w & 0xFF000000) {
        case 0x80000000:
            f = w & 0x800000;
            if (f == 0) n++;
            t = *(unsigned char *)(p + (w & 0xFF) + 0x24DB);
            if (t == 2) {
                m++;
                if (f) m = 99;
            } else if (t == 1) {
                m++;
                if (f) m = 99;
                *out = 1;
            }
            break;
        case 0x40000000:
            c++;
            if ((w & 0xFF) == *(unsigned char *)(p + 0x2998)) h++;
            break;
        }
    }
    if (n <= m && (c == 0 || (c != 0 && h != 0))) return 1;
    return 0;
}

int func_00201770(char *, float *, float *, char *, int);

#define QCOPYR(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

static inline unsigned char gnd_23D(void) {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0) return 0;
    return 1;
}

int func_0023DF80(char *p, float dy) {
    float func_00132470(char *, char *);
    float v[4] __attribute__((aligned(16)));
    float h[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    if (gnd_23D()) {
        QCOPY(v, p + 0x50);
        v[1] = v[1] + 130.0f;
        v[3] = 1.0f;
        if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, h, p + 0x2928, 0x40) == 1) {
            *(float *)(p + 0x2924) = h[1];
            if (*(float *)(p + 0x54) + dy <= 10.0f + h[1]) {
                *(float *)(p + 0x54) = h[1];
                *(signed char *)(p + 0x290B) = 0;
                return 1;
            }
            QCOPYR(w, p + 0x4970);
            if (!(w[1] <= 0.0f) && func_00132470(p + 0x50, p + 0xF0) < 1.0f) {
                if (++*(signed char *)(p + 0x290B) > 3) {
                    *(float *)(p + 0x2920) = 60.0f;
                    return 1;
                }
            }
        } else {
            *(float *)(p + 0x2924) = *(float *)(p + 0x54) - 1000.0f;
        }
    }
    return 0;
}

void func_002475C0(char *p) {
    char *n;
    char *e = *(char **)(p + 4);
    while (e != 0) {
        n = *(char **)(e + 8);
        *(char **)(e + 8) = 0;
        *(char **)(e + 4) = 0;
        e = n;
    }
    *(int *)(p + 8) = 0;
    *(int *)(p + 4) = 0;
}

static inline unsigned char nz_23E(int x) {
    if (x == 0) return 0;
    return 1;
}

int func_0023E110(char *p) {
    float v[4] __attribute__((aligned(16)));
    float h[4] __attribute__((aligned(16)));
    if (nz_23E(*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C))) {
        QCOPY(v, p + 0x50);
        v[1] = v[1] + 130.0f;
        v[3] = 1.0f;
        if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, h, p + 0x2928, 0x40) == 1) {
            *(float *)(p + 0x2924) = h[1];
            return 1;
        }
        *(float *)(p + 0x2924) = *(float *)(p + 0x54) - 1000.0f;
    }
    return 0;
}

int func_0023C490(char *p, int a, int b) {
    if (b == -1) return -1;
    switch (a) {
    case 5:
        switch (b) {
        case 0: return 0;
        case 1: return 1;
        case 2: *(int *)(p + 0x1C) = 5; break;
        case 3: *(int *)(p + 0x1C) = 6; break;
        case 4: *(int *)(p + 0x1C) = 7; break;
        case 5: *(int *)(p + 0x1C) = 8; break;
        case 8: return 3;
        case 6: return 4;
        case 7: return 5;
        }
        break;
    case 6:
        switch (b) {
        case 0: return 0;
        case 1: *(int *)(p + 0x1C) = 5; break;
        case 2: *(int *)(p + 0x1C) = 6; break;
        case 3: *(int *)(p + 0x1C) = 7; break;
        case 4: *(int *)(p + 0x1C) = 8; break;
        case 5: return 3;
        }
        break;
    case 7:
        switch (b) {
        case 0: return 0;
        case 1: *(int *)(p + 0x1C) = 5; break;
        case 2: *(int *)(p + 0x1C) = 6; break;
        case 3: *(int *)(p + 0x1C) = 7; break;
        case 4: *(int *)(p + 0x1C) = 8; break;
        }
        break;
    case 8:
        switch (b) {
        case 0: return 0;
        case 1: return 2;
        case 2: return 3;
        case 3: return 1;
        }
        break;
    }
    return 0;
}

int func_0024D640(char *);

int func_002EFB40(char *);

int func_002D9FA0(char *, char *);

static inline unsigned char busy2_248(char *o) {
    if (*(int **)(o + 8) && **(int **)(o + 8)) return 1;
    if (*(int *)(o + 0x1C) - *(int *)(o + 0x20)) return 1;
    return 0;
}

static inline unsigned char busy_248(char *g) {
    char *o = *(char **)(g + 0x20);
    if (o) return busy2_248(o);
    return 0;
}

void func_00248060(char *p) {
    float func_00132470(char *, char *);
    int prev;
    char *c;
    int r;
    prev = *(signed char *)(p + 0x90);
    c = *(char **)(*(char **)D_01CAFF0C + 0xC);
    r = func_002EFB40(*(char **)D_01CAFF0C);
    if ((unsigned char)func_0024D640(*(char **)(*(char **)D_01CAFF0C + 0xC)) == 0) r = 0;
    if (r && (unsigned char)func_002D9FA0(c, p + 0xC0) == 0) r = 0;
    if (r == 0) {
        *(signed char *)(p + 0x90) = 0;
    } else {
        *(signed char *)(p + 0x90) = 1;
        *(signed char *)(p + 0x1EC) = 0;
    }
    if (prev == 1 && *(signed char *)(p + 0x90) == 0) {
        *(signed char *)(p + 0x1EC) = 10;
        *(unsigned char *)(p + 0x1ED) = 0;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x1F0), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
    }
    if (*(signed char *)(p + 0x1EC) > 0) {
        *(signed char *)(p + 0x90) = 2;
        if (*(unsigned char *)(p + 0x1ED) == 0) {
            if (!(func_00132470(p + 0x1F0, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) <= 100.0f))
                *(unsigned char *)(p + 0x1ED) = 1;
        }
        if (busy_248(*(char **)D_01CAFF0C) == 0) {
            (*(signed char *)(p + 0x1EC))--;
        } else if (*(unsigned char *)(p + 0x1ED) == 1) {
            if (!(func_00132470(p + 0x1F0, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) <= 3.0f))
                (*(signed char *)(p + 0x1EC))--;
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x1F0), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
        }
    }
    if (prev == 2 && *(signed char *)(p + 0x90) == 0) {
        *(float *)(p + 0x1E4) = 15.0f;
        *(float *)(p + 0x1E8) = 15.0f;
    }
}

char *func_0023BE00(char *p0) {
    void func_00128488();
    *(int *)(p0 + 2532) = 0;
    func_00128488((p0 + 2520), 0, 4);
    func_00128488((p0 + 2524), 0, 4);
    *(char *)(p0 + 2528) = 0;
    return p0;
}

void func_0013D6A0();

int func_0023BEE0(int p0) {
    func_0013D6A0((p0 + 16));
    return p0;
}

extern char D_005A7930[];

extern char D_005A7AC0[];

char *func_0023C1F0(char *p0) {
    *(char **)(p0 + 0) = D_005A7930;
    func_0013D6A0((p0 + 12));
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 28) = -1;
    *(char **)(p0 + 0) = D_005A7AC0;
    return p0;
}

char * func_0023B8B0(p) char *p; {
    func_0013D6A0(p + 20);
    *(int *)(p) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 5) = 0;
    *(int *)(p + 36) = 0;
    *(int *)(p + 16) = 0;
    *(int *)(p + 12) = -1;
    return p;
}

extern char D_005AC0E0[];

void func_0023ACD0();

void func_0023BA10();

void func_0024BE00();

int func_0023B9A0(p0) int p0; {
    void func_00100450();
    func_0024BE00();
    *(char **)((char *)p0 + 0) = D_005AC0E0;
    func_00100450((p0 + 160), (char *)func_0023BA10, (char *)func_0023ACD0, 2128, 2);
    *(int *)((char *)p0 + 144) = 0;
    *(int *)((char *)p0 + 148) = 0;
    *(int *)((char *)p0 + 152) = 0;
    *(char *)((char *)p0 + 4436) = 0;
    return p0;
}

extern char D_005A7B60[];

extern char D_005AC0F0[];

int func_0023BA30(p0) int p0; {
    func_0024BE00();
    *(char **)((char *)p0 + 0) = D_005A7B60;
    *(int *)((char *)p0 + 176) = 0;
    *(int *)((char *)p0 + 464) = 0;
    *(char *)((char *)p0 + 145) = 1;
    *(char **)((char *)p0 + 0) = D_005AC0F0;
    return p0;
}

int func_0023BA80(p0) int p0; {
    func_0024BE00();
    *(char **)((char *)p0 + 0) = D_005A7B60;
    *(int *)((char *)p0 + 176) = 0;
    *(int *)((char *)p0 + 464) = 0;
    *(char *)((char *)p0 + 145) = 1;
    return p0;
}

extern char D_005A9EC0[];

int func_0023BAD0(p0) int p0; {
    func_0024BE00();
    *(char **)((char *)p0 + 0) = D_005A9EC0;
    *(int *)((char *)p0 + 664) = 0;
    *(int *)((char *)p0 + 668) = 0;
    *(int *)((char *)p0 + 672) = 0;
    *(int *)((char *)p0 + 660) = 0;
    *(int *)((char *)p0 + 9424) = 0;
    *(char *)((char *)p0 + 9376) = 1;
    return p0;
}

extern char D_005A7990[];

extern char D_005A79A0[];

int func_0022D750();

void func_0023BF90();

int func_0023BF10(p0) char *p0; {
    void func_00100450();
    *(char **)(p0 + 0) = D_005A79A0;
    func_00100450((p0 + 4), (char *)func_0023BF90, (char *)func_0022D750, 28, 32);
    *(char **)(p0 + 900) = D_005A7990;
    *(int *)(p0 + 908) = 0;
    *(int *)(p0 + 904) = 0;
    *(char **)(p0 + 912) = D_005A7990;
    *(int *)(p0 + 920) = 0;
    *(int *)(p0 + 916) = 0;
    *(char *)(p0 + 924) = 0;
    *(char *)(p0 + 925) = 0;
    *(char *)(p0 + 926) = 0;
    *(int *)(p0 + 928) = 0;
    return (int)p0;
}

extern char D_005A7980[];

void func_0020E7C0();

void func_0023C140();

void func_0023C150();

void func_0023C160();

void func_0023C170();

int func_0023BFD0(p0) char *p0; {
    void func_00128488();
    char *v0;
    char *v2;
    int v1;
    *(int *)(p0 + 12) = 0;
    v0 = p0;
    *(char **)(p0 + 20) = D_005A7980;
    v1 = (int)(v0 + 240);
    v2 = (v0 + 216);
    do {
        *(int *)(v2 + 4) = 0;
        v2 = (v2 + 12);
    } while ((int)v2 != v1);
    func_00128488((v0 + 24), 0, 4);
    func_00128488((v0 + 28), 0, 16);
    func_00128488((v0 + 44), 0, 4);
    func_00128488((v0 + 48), 0, 20);
    func_00128488((v0 + 68), 0, 4);
    func_00128488((v0 + 72), 0, 4);
    func_00128488((v0 + 76), 0, 16);
    *(char *)(v0 + 92) = 0;
    *(char *)(v0 + 212) = -1;
    *(char *)(v0 + 213) = -1;
    *(char *)(v0 + 138) = 0;
    *(char *)(v0 + 137) = 0;
    *(char *)(v0 + 136) = 0;
    *(char *)(v0 + 139) = -1;
    *(char *)(v0 + 154) = 0;
    *(char *)(v0 + 155) = 0;
    *(char *)(v0 + 156) = 0;
    func_00128488((v0 + 180), 0, 20);
    *(int *)(v0 + 0) = 0;
    *(int *)(v0 + 4) = 0;
    *(int *)(v0 + 8) = 0;
    *(int *)(v0 + 124) = 0;
    *(char *)(v0 + 101) = -1;
    func_0023C170(v0);
    func_0023C160(v0);
    func_0023C150(v0);
    func_0023C140(v0);
    func_0020E7C0(v0);
    *(short *)(v0 + 248) = -1;
    *(short *)(v0 + 246) = -1;
    *(char *)(v0 + 255) = -1;
    *(char *)(v0 + 254) = -1;
    *(short *)(v0 + 252) = -1;
    *(short *)(v0 + 250) = -1;
    *(int *)(v0 + 256) = 0;
    *(int *)(v0 + 260) = 0;
    *(int *)(v0 + 148) = 0;
    *(char *)(v0 + 152) = 0;
    return (int)v0;
}

int func_0023C2F0(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    if (p2 == -1) {
        return -1;
    } else {
        switch (p1) {
        case 0:
            if (p2 != 0) {
                *(int *)(p0 + 28) = 1;
            }
            break;
        case 1:
            if (p2 != 0) {
                *(int *)(p0 + 28) = 2;
            }
            break;
        case 2:
            switch (p2) {
            case 1:
                *(int *)(p0 + 28) = 4;
                break;
            case 4:
                *(int *)(p0 + 28) = 3;
                break;
            case 2:
                *(int *)(p0 + 28) = 3;
                break;
            case 3:
                *(int *)(p0 + 28) = 1;
                break;
            }
            break;
        case 3:
            switch (p2) {
            case 1:
                *(int *)(p0 + 28) = 4;
                break;
            case 2:
                *(int *)(p0 + 28) = 2;
                break;
            case 3:
                *(int *)(p0 + 28) = 3;
                break;
            }
            break;
        case 4:
            switch (p2) {
            case 1:
                *(int *)(p0 + 28) = 4;
                break;
            case 2:
                *(int *)(p0 + 28) = 3;
                break;
            case 3:
                *(int *)(p0 + 28) = 1;
                break;
            case 4:
                *(int *)(p0 + 28) = 2;
                break;
            case 5:
                *(int *)(p0 + 28) = 9;
                break;
            case 6:
                *(int *)(p0 + 28) = 4;
                break;
            }
            break;
        case 9:
            if (p2 != 0) {
                *(int *)(p0 + 28) = 1;
            }
            break;
        }
        return 0;
    }
}

int func_0023CB30(p0) int p0; {
    int func_0023E1F0();
    int func_0023E500();
    int func_0023F290();
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v2 = func_0023E1F0();
    v1 = v0;
    if (v2 == 0) {
        v2 = func_0023E500(v1);
        v3 = v0;
        if (v2 == 0) {
            v2 = func_0023F290(v3);
        }
    }
    return v2;
}

int func_0023DA80();

int func_0023CB80(p0) int p0; {
    int func_0023E500();
    int func_0023F290();
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v2 = func_0023DA80();
    v1 = v0;
    if (v2 == 0) {
        v2 = func_0023E500(v1);
        v3 = v0;
        if (v2 == 0) {
            v2 = func_0023F290(v3);
        }
    }
    return v2;
}

int func_0023E2C0();

int func_0023CBD0(p0) int p0; {
    int func_0023E500();
    int func_0023F290();
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v2 = func_0023E500();
    v1 = v0;
    if (v2 == 0) {
        v2 = func_0023E2C0(v1);
        v3 = v0;
        if (v2 == 0) {
            v2 = func_0023F290(v3);
        }
    }
    return v2;
}

int func_0023CC20(p0) int p0; {
    int func_0023E500();
    int func_0023F290();
    int v0;
    int v1;
    v1 = func_0023E500();
    v0 = p0;
    if (v1 == 0) {
        v1 = func_0023F290(v0);
    }
    return v1;
}

int func_0023CD90(p0) int p0; {
    int func_0023E960();
    int func_0023EDD0();
    int func_0023EF80();
    int func_0023F290();
    int func_00245C40();
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = p0;
    v2 = func_0023E960();
    v1 = v0;
    if (v2 == 0) {
        v2 = func_00245C40(v1);
        v3 = v0;
        if (v2 == 0) {
            v2 = func_0023EDD0(v3);
            v4 = v0;
            if (v2 == 0) {
                v2 = func_0023EF80(v4);
                v5 = v0;
                if (v2 == 0) {
                    v2 = func_0023F290(v5);
                }
            }
        }
    }
    return v2;
}

int func_0023CE60(p0) int p0; {
    int func_0023E1F0();
    int func_0023E500();
    int func_0023F330();
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v2 = func_0023E500();
    v1 = v0;
    if (v2 == 0) {
        v2 = func_0023E1F0(v1);
        v3 = v0;
        if (v2 == 0) {
            v2 = func_0023F330(v3);
        }
    }
    return v2;
}

int func_0023CEB0(p0) int p0; {
    int func_0023E1F0();
    int func_0023E500();
    int func_0023F290();
    int func_0023F330();
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    v4 = func_0023E500();
    v1 = v0;
    if (v4 == 0) {
        v4 = func_0023E1F0(v1);
        v2 = v0;
        if (v4 == 0) {
            v4 = func_0023F290(v2);
            v3 = v0;
            if (v4 == 0) {
                v4 = func_0023F330(v3);
            }
        }
    }
    return v4;
}

int func_0023CF10(p0) int p0; {
    int func_0023E500();
    int func_0023F330();
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    v4 = func_0023DA80();
    v1 = v0;
    if (v4 == 0) {
        v4 = func_0023E500(v1);
        v2 = v0;
        if (v4 == 0) {
            v4 = func_0023E2C0(v2);
            v3 = v0;
            if (v4 == 0) {
                v4 = func_0023F330(v3);
            }
        }
    }
    return v4;
}

int func_0023CF70(p0) int p0; {
    int func_0023E500();
    int func_0023F330();
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v2 = func_0023E500();
    v1 = v0;
    if (v2 == 0) {
        v2 = func_0023E2C0(v1);
        v3 = v0;
        if (v2 == 0) {
            v2 = func_0023F330(v3);
        }
    }
    return v2;
}

int func_0023CFC0(p0) int p0; {
    int func_0023E1F0();
    int func_0023E500();
    int v0;
    int v1;
    v1 = func_0023E500();
    v0 = p0;
    if (v1 == 0) {
        v1 = func_0023E1F0(v0);
    }
    return v1;
}

int func_0023D000(p0) int p0; {
    int func_0023E1F0();
    int func_0023E500();
    int v0;
    int v1;
    v1 = func_0023E500();
    v0 = p0;
    if (v1 == 0) {
        v1 = func_0023E1F0(v0);
    }
    return v1;
}

int func_0023D040(p0) int p0; {
    int func_0023E1F0();
    int func_0023E500();
    int func_0023E960();
    int func_0023EDD0();
    int func_0023EF80();
    int func_00245C40();
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    v0 = p0;
    v2 = func_0023E1F0();
    v1 = v0;
    if (v2 == 0) {
        v2 = func_0023E500(v1);
        v3 = v0;
        if (v2 == 0) {
            v2 = func_0023E960(v3);
            v4 = v0;
            if (v2 == 0) {
                v2 = func_00245C40(v4);
                v5 = v0;
                if (v2 == 0) {
                    v2 = func_0023EDD0(v5);
                    v6 = v0;
                    if (v2 == 0) {
                        v2 = func_0023EF80(v6);
                    }
                }
            }
        }
    }
    return v2;
}

int func_0023D1F0(p0) int p0; {
    int func_0023E960();
    int func_0023EDD0();
    int func_0023EF80();
    int func_00245C40();
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    v4 = func_0023E960();
    v1 = v0;
    if (v4 == 0) {
        v4 = func_00245C40(v1);
        v2 = v0;
        if (v4 == 0) {
            v4 = func_0023EDD0(v2);
            v3 = v0;
            if (v4 == 0) {
                v4 = func_0023EF80(v3);
            }
        }
    }
    return v4;
}

int func_0023D250(p0) int p0; {
    int func_0023E960();
    int func_0023EDD0();
    int func_0023EF80();
    int func_00245C40();
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    v4 = func_0023E960();
    v1 = v0;
    if (v4 == 0) {
        v4 = func_00245C40(v1);
        v2 = v0;
        if (v4 == 0) {
            v4 = func_0023EDD0(v2);
            v3 = v0;
            if (v4 == 0) {
                v4 = func_0023EF80(v3);
            }
        }
    }
    return v4;
}

int func_0023D2B0(p0) int p0; {
    int func_0023E1F0();
    int func_0023E500();
    int func_0023E960();
    int func_0023EDD0();
    int func_0023EF80();
    int func_00245C40();
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    v0 = p0;
    v2 = func_0023E1F0();
    v1 = v0;
    if (v2 == 0) {
        v2 = func_0023E500(v1);
        v3 = v0;
        if (v2 == 0) {
            v2 = func_0023E960(v3);
            v4 = v0;
            if (v2 == 0) {
                v2 = func_00245C40(v4);
                v5 = v0;
                if (v2 == 0) {
                    v2 = func_0023EDD0(v5);
                    v6 = v0;
                    if (v2 == 0) {
                        v2 = func_0023EF80(v6);
                    }
                }
            }
        }
    }
    return v2;
}

int func_0023D430(p0) int p0; {
    int func_0023E1F0();
    int func_0023E500();
    int func_0023F290();
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v2 = func_0023E1F0();
    v1 = v0;
    if (v2 == 0) {
        v2 = func_0023E500(v1);
        v3 = v0;
        if (v2 == 0) {
            v2 = func_0023F290(v3);
        }
    }
    return v2;
}

int func_0023D880(p0) char *p0; {
    void func_0021C7A0();
    int v0;
    if (*(unsigned char *)(p0 + 10418) == 1) {
        *(char *)(p0 + 10418) = 0;
        func_0021C7A0(p0, 38);
        v0 = 1;
    } else {
        v0 = 0;
    }
    return v0;
}

int func_0023DA80(p0) int p0; {
    void func_0021B790();
    int func_002DAD40();
    int v0;
    int v1;
    int tmp0;
    tmp0 = func_002DAD40();
    v0 = p0;
    if ((tmp0 & 255) == 2) {
        func_0021B790(v0, 0);
        v1 = 1;
    } else {
        v1 = 0;
    }
    return v1;
}

int func_0011DBE0(float, float);

float func_00132510();

int func_0023DF20(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char stk[0x10] __attribute__((aligned(16)));
    float tmp3;
    int tmp5;
    *(float *)((stk + -32) + 32) = *(float *)(p0 + 10576);
    *(float *)(((stk + -32) + 36) + 0) = *(float *)(p0 + 10580);
    *(float *)((stk + -32) + 40) = *(float *)(p0 + 10584);
    *(int *)((stk + -32) + 44) = 0x3f800000;
    tmp3 = func_00132510(((stk + -32) + 32));
    tmp5 = func_0011DBE0(*(float *)(((stk + -32) + 36) + 0), tmp3);
    return tmp5;
}

int func_0023E2C0(p0) int p0; {
    void func_0021C7A0();
    int func_002DAD40();
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_002DAD40();
    if ((tmp0 & 255) == 2) {
        v1 = (int)v0;
        if (*(unsigned char *)(v0 + 10406) == 0) {
            func_0021C7A0(v1, 4);
            v2 = 1;
        } else {
            func_0021C7A0(v0, 14);
            v2 = 1;
        }
    } else {
        v2 = 0;
    }
    return v2;
}

int func_00240E10(p0) char *p0; {
    extern char D_0066671A[];
    int func_001AE770();
    int func_002242C0();
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    v0 = p0;
    if (*(unsigned char *)(p0 + 15481) == 0) {
        v3 = 0;
    } else {
        tmp0 = func_002242C0();
        if ((tmp0 & 255) == 1) {
            v3 = 0;
        } else {
            tmp1 = func_001AE770(D_00666710, 4);
            if ((*(unsigned short *)(v0 + 18884) & *(unsigned short *)((D_0066671A + ((tmp1 & 65535) << 1)) + 0))) {
                v1 = *(unsigned char *)(v0 + 15664);
                if ((v1 < 2)) {
                    v2 = ((v1 + 1) & 255);
                } else {
                    v2 = 0;
                }
                *(char *)(v0 + 15664) = v2;
                v3 = 1;
            } else {
                v3 = 0;
            }
        }
    }
    return v3;
}

int func_002F17E0();

int func_002411B0(p0) char *p0; {
    extern char D_0066671A[];
    int func_001AE770();
    char *v0;
    int tmp0;
    v0 = p0;
    if (*(unsigned char *)(p0 + 15262) == 1) {
        tmp0 = func_001AE770(D_00666710, 512);
        if ((*(unsigned short *)(v0 + 18884) & *(unsigned short *)((D_0066671A + ((tmp0 & 65535) << 1)) + 0))) {
            func_002F17E0((v0 + 11096));
        }
    }
    *(char *)(v0 + 15262) = 1;
    return 1;
}

void func_00247510(p0, p1) char *p0; char *p1; {
    if (*(int *)(p0 + 4) == 0) {
        *(char **)(p0 + 8) = p1;
        *(char **)(p0 + 4) = p1;
        *(int *)(p1 + 8) = 0;
        *(int *)(p1 + 4) = 0;
    } else {
        *(char **)(*(char **)(p0 + 8) + 8) = p1;
        *(int *)(p1 + 4) = *(int *)(p0 + 8);
        *(int *)(p1 + 8) = 0;
        *(char **)(p0 + 8) = p1;
    }
}

void func_00247550(p0, p1) char *p0; char *p1; {
    char *v0;
    char *v1;
    if (*(int *)(p0 + 4) == (int)p1) {
        *(int *)(p0 + 4) = *(int *)(p1 + 8);
    }
    if (*(int *)(p0 + 8) == (int)p1) {
        *(int *)(p0 + 8) = *(int *)(p1 + 4);
    }
    v0 = *(char **)(p1 + 4);
    if (v0 != 0) {
        *(int *)(v0 + 8) = *(int *)(p1 + 8);
    }
    v1 = *(char **)(p1 + 8);
    if (v1 != 0) {
        *(int *)(v1 + 4) = *(int *)(p1 + 4);
    }
    *(int *)(p1 + 8) = 0;
    *(int *)(p1 + 4) = 0;
}

int func_0024BE90();

int func_00247600(p0) int p0; {
    int tmp0;
    tmp0 = func_0024BE90();
    *(char *)((char *)p0 + 144) = 0;
    *(int *)((char *)p0 + 176) = *(int *)(*(char **)D_01CAFF0C + 12);
    *(int *)((char *)p0 + 208) = 0x430c0000;
    *(int *)((char *)p0 + 212) = 0x3e8192c0;
    *(int *)((char *)p0 + 216) = 0x43e60000;
    *(int *)((char *)p0 + 220) = 0x3f75be0a;
    *(int *)((char *)p0 + 224) = 0x43c80000;
    *(int *)((char *)p0 + 228) = 0x3f75be0a;
    *(int *)((char *)p0 + 240) = 0x451c4000;
    *(int *)((char *)p0 + 244) = 0x43480000;
    *(int *)((char *)p0 + 248) = 0x451c4000;
    *(int *)((char *)p0 + 252) = 0x3f800000;
    *(char *)((char *)p0 + 368) = 1;
    *(int *)((char *)p0 + 480) = 0x447a0000;
    *(int *)((char *)p0 + 484) = 0xbf800000;
    *(int *)((char *)p0 + 488) = 0xbf800000;
    *(char *)((char *)p0 + 492) = 0;
    *(char *)((char *)p0 + 493) = 0;
    *(int *)((char *)p0 + 468) = 0;
    *(char *)((char *)p0 + 472) = 0;
    *(char *)((char *)p0 + 473) = 0;
    *(int *)((char *)p0 + 464) = 0;
    return tmp0;
}

void func_002476C0(char *p0, float f0, float f1, float f2) {
    if (f0 >= 0.0f) {
        *(float *)(p0 + 212) = f0;
    }
    if (f1 >= 0.0f) {
        *(float *)(p0 + 216) = f1;
    }
    if (f2 >= 0.0f) {
        *(float *)(p0 + 224) = f2;
    }
}

void func_0023D870(void) {}

void func_0023D8D0(void) {}

void func_00246290(void) {}

float func_002462A0(char *p) { return *(float *)(p + 36); }

void func_002474F0(void) {}

float func_00247500(char *p) { return *(float *)(p + 80); }

void func_00248BA0(char *p, float v) { *(float *)(p + 32) = v; }

void func_0023B900(char *p0, int p1) {
    *(char *)(p0 + 24) = p1;
    *(char *)(p0 + 25) = 0;
}

char *func_0023BE50(char *p0) {
    *(int *)(p0 + 0) = 0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 20) = 0;
    *(int *)(p0 + 24) = 0;
    *(int *)(p0 + 28) = 0;
    *(int *)(p0 + 32) = 0;
    *(int *)(p0 + 36) = 0;
    *(int *)(p0 + 40) = 0;
    *(char *)(p0 + 8) = 0;
    *(char *)(p0 + 9) = 0;
    *(char *)(p0 + 52) = 0;
    *(int *)(p0 + 44) = 0;
    *(int *)(p0 + 48) = 0;
    return p0;
}

extern char D_005A7AA0[];

char *func_0023BEA0(char *p0) {
    *(char **)(p0 + 0) = D_005A7AA0;
    *(char **)(p0 + 8) = D_005A7990;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 12) = 0;
    *(char **)(p0 + 20) = D_005A7990;
    *(int *)(p0 + 28) = 0;
    *(int *)(p0 + 24) = 0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 64) = 0;
    return p0;
}

extern char D_005A7970[];

char *func_0023C1B0(char *p0) {
    *(char **)(p0 + 0) = D_005A7970;
    *(int *)(p0 + 140) = 0;
    *(int *)(p0 + 136) = 0;
    *(int *)(p0 + 144) = 0;
    *(int *)(p0 + 148) = 0;
    *(char *)(p0 + 152) = 0;
    *(char *)(p0 + 153) = 0;
    *(int *)(p0 + 24) = 0;
    *(char *)(p0 + 112) = 0;
    return p0;
}

void func_0023C250(char *p0) {
    *(int *)(p0 + 20) = 0;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 24) = 0;
    *(int *)(p0 + 28) = 0;
    *(int *)(p0 + 32) = 0;
    *(int *)(p0 + 36) = 0;
    *(int *)(p0 + 40) = 0;
    *(int *)(p0 + 44) = 0;
    *(int *)(p0 + 48) = 0;
}

char *func_0023C280(char *p0) {
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 0) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 20) = 0;
    *(int *)(p0 + 24) = 0;
    *(int *)(p0 + 28) = 0;
    *(int *)(p0 + 52) = 0;
    *(int *)(p0 + 32) = 0;
    *(int *)(p0 + 36) = 0;
    *(int *)(p0 + 40) = 0;
    *(int *)(p0 + 44) = 0;
    *(int *)(p0 + 48) = 0;
    *(char *)(p0 + 56) = 0;
    *(char *)(p0 + 57) = 0;
    *(char *)(p0 + 58) = 0;
    *(char *)(p0 + 59) = 0;
    return p0;
}

extern char D_005A7910[];

char *func_0023C2D0(char *p0) {
    *(char **)(p0 + 0) = D_005A7910;
    *(char *)(p0 + 8) = 0;
    return p0;
}

void func_0023FA00(char *p0, float f0) {
    *(float *)(p0 + 15456) = f0;
    *(char *)(p0 + 10406) = 1;
}

int func_002DAA60();

int func_002F0A50();

void func_002F1830();

int func_0023F860(int p0, int p1, int p2, int p3) {
    char *v0;
    int v1;
    int tmp0;
    int tmp2;
    v0 = (char *)p0;
    tmp0 = func_002F0A50((v0 + 11096), (v0 + 15424));
    v1 = tmp0;
    if (v1 == 0) {
        *(short *)(v0 + 15266) = *(short *)(v0 + 144);
        *(char *)(v0 + 15261) = 0;
    } else {
        tmp2 = func_002DAA60(v0, (v0 + 15424));
        *(short *)(v0 + 15266) = tmp2;
        *(char *)(v0 + 15261) = 1;
        func_002F1830((v0 + 11096), v1);
    }
    return *(unsigned char *)(v0 + 15261);
}

int func_002D9EB0();

void func_002F30B0();

int func_003305E0();

int func_00240690(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int tmp0;
    int tmp3;
    int tmp8;
    int tmp11;
    v0 = (char *)p0;
    if ((p1 & 255) == 0) {
        tmp0 = func_002D9EB0();
        func_002F30B0(92, *(int *)(*(char **)((char *)((tmp0 << 2) + (int)v0) + 4996) + 260), v0);
        v1 = func_003305E0(D_01DFABA0, 2, 30, (v0 + 80), 5, 0, 0);
        v2 = *(int *)(v0 + 15684);
        v3 = v2;
        if (v2 != 0) {
            tmp3 = func_002D9EB0(v3);
            func_002F30B0(94, *(int *)(*(char **)((char *)((tmp3 << 2) + *(int *)(v0 + 15684)) + 4996) + 260), v2);
            v1 = func_003305E0(D_01DFABA0, 2, 32, (*(int *)(v0 + 15684) + 80), 5, 0, 0);
        }
    } else {
        tmp8 = func_002D9EB0();
        func_002F30B0(93, *(int *)(*(char **)((char *)((tmp8 << 2) + (int)v0) + 4996) + 260), v0);
        v1 = func_003305E0(D_01DFABA0, 2, 31, (v0 + 80), 5, 0, 0);
        v4 = *(int *)(v0 + 15684);
        v5 = v4;
        if (v4 != 0) {
            tmp11 = func_002D9EB0(v5);
            func_002F30B0(95, *(int *)(*(char **)((char *)((tmp11 << 2) + *(int *)(v0 + 15684)) + 4996) + 260), v4);
            v1 = func_003305E0(D_01DFABA0, 2, 33, (*(int *)(v0 + 15684) + 80), 5, 0, 0);
        }
    }
    return v1;
}

void func_00247770();

void func_00247760(int p0) {
    func_00247770(p0, (p0 + 112));
}
