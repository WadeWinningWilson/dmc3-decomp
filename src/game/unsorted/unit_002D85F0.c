int func_002D8B10(unsigned char *p) {
    if (p[10419] != 0 && *(float *)(p + 10444) > 0.0f) {
        return 0;
    }
    return 1;
}

float func_002DBD40(int a, int b) {
    extern float D_005459C0[][2];
    if ((unsigned char)b == 2) {
        b = 1;
    }
    return D_005459C0[(unsigned char)a][(unsigned char)b];
}

int func_002DAA00(char *p) {
    short func_002DAA60(char *);
    short d = *(short *)(p + 0x90) - func_002DAA60(p);
    if (d <= 0x3FFF && d > -0x4000) {
        return 1;
    }
    return 0;
}

short func_002DACC0(char *);

float func_002DAAA0(char *, char *);

void func_002DAF70(char *p, short a, unsigned char b, unsigned char c, float f) {
    int func_002DAD40();
    *(short *)(p + 0x29A4) = a;
    *(float *)(p + 0x29D4) = f;
    if (b == 1) {
        if ((unsigned char)func_002DAD40(p, 1) != 2) {
            *(short *)(p + 0x3BA4) = func_002DACC0(p);
        } else {
            *(short *)(p + 0x3BA4) = *(short *)(p + 0x90);
        }
        return;
    } else {
        *(short *)(p + 0x3BA4) = *(short *)(p + 0x3BA2);
        if (*(unsigned char *)(p + 0x3B9D) == 1) {
            if (c == 0 && *(unsigned char *)(p + 0x28A6) == 0 &&
                (unsigned char)func_002DAD40(p, 1) == 2 &&
                func_002DAAA0(p, p + 0x3C40) > *(float *)(*(char **)(p + 0x283C) + 0xDC)) {
                *(short *)(p + 0x3BA4) = *(short *)(p + 0x90);
            }
        } else if (*(unsigned char *)(p + 0x28A6) != 0) {
            *(short *)(p + 0x3BA4) = *(short *)(p + 0x90);
        } else if ((unsigned char)func_002DAD40(p, 1) != 2) {
            *(short *)(p + 0x3BA4) = func_002DACC0(p);
        }
    }
}

int func_002F0A50(char *, char *);

void func_002DB090(char *p, short a, unsigned char c, float f) {
    int func_002DAD40();
    short func_002DAA60(char *, char *);
    *(short *)(p + 0x29A4) = a;
    *(float *)(p + 0x29D4) = f;
    if (*(unsigned char *)(p + 0x28A6) == 0) {
        if ((unsigned char)func_002DAD40(p) == 2) {
            if (func_002F0A50(p + 0x2B58, p + 0x3C40)) {
                *(short *)(p + 0x3BA2) = func_002DAA60(p, p + 0x3C40);
                *(unsigned char *)(p + 0x3B9D) = 1;
            }
            *(short *)(p + 0x3BA4) = *(short *)(p + 0x3BA2);
        } else {
            switch (c) {
            case 0:
                *(short *)(p + 0x3BA4) = *(short *)(p + 0x3BA2);
                break;
            case 1:
            case 2:
                if (func_002F0A50(p + 0x2B58, p + 0x3C40)) {
                    *(short *)(p + 0x3BA2) = func_002DAA60(p, p + 0x3C40);
                    *(unsigned char *)(p + 0x3B9D) = 1;
                }
                *(short *)(p + 0x3BA4) = *(short *)(p + 0x3BA2);
                break;
            }
        }
    } else if (*(unsigned char *)(p + 0x3B9D) == 1) {
        *(short *)(p + 0x3BA4) = *(short *)(p + 0x3BA2);
    } else {
        *(short *)(p + 0x3BA4) = *(short *)(p + 0x90);
    }
}

static inline signed char find_2DA(char *p, signed char k) {
    unsigned int i;
    if (k != -1) {
        for (i = 0; i < 5; i++) {
            signed char c = *(signed char *)(p + i + 0x3D4C);
            if (c == k) return i;
        }
    }
    return -1;
}

signed char func_002DA0B0(char *p, signed char k) {
    signed char idx = find_2DA(p, k);
    if (idx != -1) return *(signed char *)((char *)idx + (int)p + 0x3D68);
    return 4;
}

float func_00131B50(float);

int func_002DAB50(char *p, float y, float lim) {
    return func_00131B50(*(float *)(p + 0x54) - y) <= lim;
}

void func_002DA3A0(char *p, char *a) {
    float func_00131BA0(char *);
    float func_00131C20(char *);
    float t;
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + *(float *)(p + 0x10) * (*(float *)(p + 0x150) * func_00131BA0(a));
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + *(float *)(p + 0x10) * (*(float *)(p + 0x150) * func_00131C20(a));
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
    *(float *)(p + 0x150) = *(float *)(p + 0x150) + *(float *)(p + 0x154) * *(float *)(p + 0x10);
    t = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) = t;
    if (t < -70.0f) {
        *(float *)(p + 0x64) = -70.0f;
    }
}

void func_002DB880(char *p, int a) {
    float func_00131BA0(int);
    float func_00131C20(int);
    float s = func_00131BA0(a);
    float c;
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + *(float *)(p + 0x10) * (*(float *)(p + 0x150) * s);
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
    c = func_00131C20(a);
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + *(float *)(p + 0x10) * (*(float *)(p + 0x150) * c);
    *(float *)(p + 0x150) = *(float *)(p + 0x150) + *(float *)(p + 0x154) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74);
}

void func_002DBC30(char *p, char *o, unsigned char a, unsigned char b) {
    char *t = *(char **)(p + 0x2840);
    float *v = (float *)(t + ((unsigned short *)t)[a + b * 2]);
    *(float *)(o + 0x38) = v[0];
    *(int *)(o + 0x80) = 0;
    *(float *)(o + 0x84) = v[1];
    *(int *)(o + 0x88) = 0;
    *(float *)(o + 0x8C) = 1.0f;
    *(float *)(o + 0x70) = v[2];
    *(float *)(o + 0x74) = v[3];
    *(float *)(o + 0x78) = v[4];
    *(float *)(o + 0x7C) = 1.0f;
}

void func_002D9290(char *p, unsigned char k, float f) {
    char *e;
    switch (k) {
    case 0:
        e = p + *(unsigned char *)(p + 0x28A0) * 96;
        *(float *)(e + 0x25E0) = 10.0f;
        *(int *)(e + 0x25E4) = 0;
        *(float *)(e + 0x25E8) = 10.0f;
        *(int *)(e + 0x25EC) = 0;
        e = p + *(unsigned char *)(p + 0x28A0) * 96;
        *(float *)(e + 0x25F0) = f;
        *(char *)(e + 0x25AC) = 1;
        break;
    }
}

extern char D_01CAFF0C[];

extern char D_006663C0[];

unsigned short func_001AE1E0(char *, int);

int func_002DA950(char *p) {
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) {
        return 0;
    }
    if (*(unsigned char *)(p + 0x28AC) == 1) {
        return 0;
    }
    if ((func_001AE1E0(D_006663C0, 0) & 0x20) && (*(int *)(p + 0x2898) & 1)) {
        return 1;
    }
    return 0;
}

static inline signed char find_2DA1(char *p, signed char k) {
    unsigned int i;
    if (k != -1) {
        for (i = 0; i < 5; i++) {
            signed char c = *(signed char *)(p + i + 0x3D4C);
            if (c == k) return i;
        }
    }
    return -1;
}

void func_002DA130(char *p, signed char k, unsigned char v) {
    signed char idx = find_2DA1(p, k);
    if (idx != -1 && *(unsigned char *)((char *)idx + (int)p + 0x3D68) != 4) {
        *(unsigned char *)((char *)idx + (int)p + 0x3D68) = v;
    }
}

float func_0011D798(float);

static inline float fsqrt(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
}

void func_002D9D30(char *p) {
    float s;
    *(int *)(p + 0x2590) = 0;
    *(int *)(p + 0x2594) = 0;
    *(float *)(p + 0x2598) = 1.0f;
    *(unsigned char *)(*(char **)(p + 0x1394) + 0x1C0) = 2;
    *(unsigned char *)(*(char **)(p + 0x1394) + 0x1C1) = 1;
    *(char **)(*(char **)(p + 0x1394) + 0xFC) = p + 0x2500;
    s = func_0011D798(0.7853981f);
    *(float *)(p + 0x2564) = s;
    *(float *)(p + 0x2568) = fsqrt(1.0f - s * s);
    *(float *)(p + 0x256C) = func_0011D798(3.1415925f);
    *(unsigned char *)(p + 0x2560) = 1;
    *(int *)(p + 0x2580) = 0;
    *(char **)(p + 0x2518) = p + 0x2590;
    *(unsigned char *)(p + 0x2514) = 4;
}

void func_002D9080(char *p) {
    void func_002D8F40(int, int);
    *(signed char *)(p + 0x24F2) = *(signed char *)(p + 0x24F1);
    *(unsigned char *)(p + 0x24F1) = 0;
    func_002D8F40((int)p, *(unsigned char *)(p + 0x24F1));
}

int func_002DA8B0(char *p, signed char k) {
    switch (k) {
    case 1:
        if (*(signed char *)(p + 0x3D4C) == -1) {
            *(signed char *)(p + 0x3D4C) = k;
            return 1;
        }
        if (*(signed char *)(p + 0x3D4D) == -1) {
            *(signed char *)(p + 0x3D4D) = k;
            return 1;
        }
        break;
    case 6:
        if (*(signed char *)(p + 0x3D4E) == -1) {
            *(signed char *)(p + 0x3D4E) = k;
            return 1;
        }
        if (*(signed char *)(p + 0x3D4F) == -1) {
            *(signed char *)(p + 0x3D4F) = k;
            return 1;
        }
        break;
    }
    return 0;
}

int func_002DAAB0(char *p, char *x, short a, short b) {
    short func_002DAA60(char *, char *);
    short d = func_002DAA60(p, x) - b - *(short *)(p + 0x90);
    if (d < a && (short)-a < d) {
        return 1;
    }
    return 0;
}

short func_00131B60(int);

void func_002DAD80(char *p, short a, float f) {
    if (*(unsigned char *)(p + 0x3B9D) == 0) {
        *(short *)(p + 0x28E0) = 0;
        *(short *)(p + 0x28E2) = 0;
        return;
    }
    if (f == 0.0f) {
        f = 1.0f;
    }
    if (a == 0) {
        *(short *)(p + 0x28E0) = func_00131B60((int)((float)(*(short *)(p + 0x90) - *(short *)(p + 0x3BA2)) / f));
    } else {
        *(short *)(p + 0x28E0) = a;
    }
    *(short *)(p + 0x28E2) = *(short *)(p + 0x3BA2) - *(short *)(p + 0x90);
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_001323E0(float *);

#define VMOVXYZ30(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define VSUBIP(x, y) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(x), "r"(y) : "memory")

void func_002D9DF0(char *p) {
    float b[4];
    float a[4];
    if (*(unsigned char *)(p + 0x3B9D) == 0 || *(unsigned char *)(p + 0x28A6) == 0) {
        *(float *)(p + 0x2580) = 0.0f;
        return;
    }
    *(float *)(p + 0x2580) = 0.5f;
    VMOVXYZ30(a, *(char **)(*(char **)(p + 0x1394) + 0x104));
    QCOPY(b, p + 0x3C40);
    if (b[1] < a[1]) {
        b[1] = a[1];
    }
    VSUBIP(b, a);
    func_001323E0(b);
    QCOPY(p + 0x2590, b);
}

void func_0038C2F0(char *, int, int, int, int, int);

void func_002D8BA0(char *p) {
    int func_002D9EB0(char *);
    char *a = (char *)(func_002D9EB0(p) * 4) + (int)p;
    char *b = (char *)(func_002D9EB0(p) * 4) + (int)p;
    char *c = (char *)(func_002D9EB0(p) * 4) + (int)p;
    func_0038C2F0(p + 0x23B0, *(int *)(a + 0x13CC), *(int *)(b + 0x13D0), *(int *)(c + 0x13D4), 4, 2);
    a = (char *)(func_002D9EB0(p) * 4) + (int)p;
    b = (char *)(func_002D9EB0(p) * 4) + (int)p;
    c = (char *)(func_002D9EB0(p) * 4) + (int)p;
    func_0038C2F0(p + 0x23F0, *(int *)(a + 0x13BC), *(int *)(b + 0x13C0), *(int *)(c + 0x13C4), 4, 2);
}

void func_0021CFD0(char *, int);

int func_002D8670(char *p) {
    signed char c = *(signed char *)(p + 0x2902);
    *(signed char *)(p + 0x2902) = -1;
    if (c == -1) return 0;
    switch (*(unsigned char *)(p + 0x2900)) {
    case 0:
        switch (c) {
        case 1:
        case 4:
        case 9:
            func_0021CFD0(p, 2);
            break;
        case 6:
            func_0021CFD0(p, 1);
            break;
        default:
            return 0;
        }
        break;
    case 1:
        switch (c) {
        case 8:
            func_0021CFD0(p, 2);
            break;
        case 11:
            func_0021CFD0(p, 0);
            break;
        default:
            return 0;
        }
        break;
    case 2:
        switch (c) {
        case 0:
        case 5:
        case 10:
            func_0021CFD0(p, 0);
            break;
        case 7:
            func_0021CFD0(p, 1);
            break;
        default:
            return 0;
        }
        break;
    }
    return 1;
}

typedef struct { float f[9]; } E2DA;

typedef struct { E2DA e[5]; } R2DA;

void func_002DA2A0(char *p) {
    *(float *)(p + 0x150) = (*(R2DA **)(p + 0x2830))[*(unsigned char *)(p + 0x2903)].e[*(unsigned char *)(p + 0x2904)].f[13];
    *(float *)(p + 0x154) = (*(R2DA **)(p + 0x2830))[*(unsigned char *)(p + 0x2903)].e[*(unsigned char *)(p + 0x2904)].f[15];
    *(float *)(p + 0x64) = (*(R2DA **)(p + 0x2830))[*(unsigned char *)(p + 0x2903)].e[*(unsigned char *)(p + 0x2904)].f[16];
    *(float *)(p + 0x74) = (*(R2DA **)(p + 0x2830))[*(unsigned char *)(p + 0x2903)].e[*(unsigned char *)(p + 0x2904)].f[19];
}

void func_002DA540(char *p) {
    int func_002DAD40(char *);
    float func_00131BA0(int);
    float func_00131C20(int);
    short a;
    if ((unsigned char)func_002DAD40(p) != 2) {
        a = func_002DACC0(p);
        *(float *)(p + 0x50) = *(float *)(p + 0x50) + *(float *)(p + 0x10) * ((*(R2DA **)(p + 0x2830))[*(unsigned char *)(p + 0x2903)].e[*(unsigned char *)(p + 0x2904)].f[21] * func_00131BA0(a));
        *(float *)(p + 0x58) = *(float *)(p + 0x58) + *(float *)(p + 0x10) * ((*(R2DA **)(p + 0x2830))[*(unsigned char *)(p + 0x2903)].e[*(unsigned char *)(p + 0x2904)].f[21] * func_00131C20(a));
    }
}

extern char D_00666710[];

extern char D_0066671A[];

void func_002490F0(char *, int, int, int, int, int, float);

unsigned short func_001AE770(char *, int);

void func_002DAE30(char *, char *, char *, int);

short func_002DACE0(char *);

void func_002DA540(char *);

void func_002DA650(char *p) {
    int func_002DAD40(char *);
    signed char k;
    char *q;
    short s;
    float w;
    float m;
    float v;
    if (!(*(float *)(p + 0x2920) <= 0.0f)) return;
    if (!(*(float *)(p + 0x64) <= 0.0f) || *(unsigned char *)(p + 0x28AE) == 0) return;
    k = *(signed char *)(p + 0x28A8);
    if (k != 0 && (k != 5 || *(signed char *)((char *)*(unsigned char *)(p + 0x3D4A) + (int)p + 0x3D4C) != 0)) return;
    if (!(*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 8) * 2)) ||
        !(*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x40) * 2))) {
        return;
    }
    if (*(unsigned short *)(p + 0x24C6) != 0x320) {
        if (*(unsigned char *)(p + 0x3C83) == 0) {
            func_002490F0(p, 3, 0x20, -1, 0, 0, -1.0f);
        } else if (*(unsigned char *)(p + 0x3C83) == 4) {
            func_002490F0(p, 3, 0x20, -1, 2, 5, -1.0f);
        }
    }
    if (!(*(float *)(p + 0x74) <= -1.5f)) *(float *)(p + 0x74) = -1.5f;
    if (!(*(float *)(p + 0x150) <= *(float *)(*(char **)(p + 0x283C) + 0x2E0))) {
        *(float *)(p + 0x150) = *(float *)(*(char **)(p + 0x283C) + 0x2E0);
        *(float *)(p + 0x154) = 0.0f;
    }
    if (*(unsigned char *)(p + 0x2848) == 9 && *(float *)(p + 0x150) < 1.0f) func_002DA540(p);
    q = *(char **)(p + 0x283C);
    v = *(float *)(p + 0x64);
    m = *(float *)(q + 0x2B8);
    if (v < m) {
        w = v + *(float *)(q + 0x2BC);
        *(float *)(p + 0x64) = w;
        if (!(w <= m)) *(float *)(p + 0x64) = m;
    }
    if ((unsigned char)func_002DAD40(p) == 1) {
        s = func_002DACE0(p);
        func_002DAE30(p, p + 0x90, (char *)&s, 0x38E);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
    }
}

char *func_00279290(char *);

void func_001A29A0(char *);

void func_002D9450(char *, int, int, float);

void func_002D98D0(char *p) {
    unsigned int i;
    switch (*(unsigned char *)(p + 0x24F3)) {
    case 0: case 1: case 2:
        if (*(unsigned char *)(p + 0x2848) != 0x29) func_002D9450(p, 5, 0, 0.0f);
        break;
    case 3:
        *(float *)(p + 0x24F4) = *(float *)(p + 0x24F4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x24F4) <= 0.0f) func_002D9450(p, 5, 0, 0.0f);
        break;
    case 4:
        if (*(unsigned char *)(p + 0x2848) != 0x2B) func_002D9450(p, 5, 0, 0.0f);
        break;
    case 5:
        *(float *)(p + 0x24F4) = *(float *)(p + 0x24F4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x24F4) <= 0.0f) func_002D9450(p, 7, 0, 0.0f);
        break;
    case 7:
        return;
    case 6: case 8: case 9:
        break;
    }
    for (i = 0; i < 3; i++, p += 0x600) func_001A29A0(func_00279290(p + 0x180));
}

typedef struct { signed char a[5]; } T5_2D8;

extern T5_2D8 D_005BC270;

signed char func_002D8600(char *p) {
    T5_2D8 t = D_005BC270;
    signed char k = *(signed char *)(*(unsigned char *)(p + 0x28A0) + (int)p + 0x28A2);
    if (k == -1) return *(signed char *)(*(unsigned char *)(p + 0x3D4A) + (int)p + 0x3D4C);
    if (k == 5) return -1;
    return t.a[k];
}

int func_002D85F0(p0) char *p0; {
    return *(signed char *)((char *)(*(unsigned char *)(p0 + 10400) + (int)p0) + 10402);
}

void func_002D8850();

int func_002F30B0();

int func_002D87D0(p0) char *p0; {
    int func_002D9EB0();
    char *v0;
    int v1;
    int tmp2;
    if (*(unsigned char *)(p0 + 10419) != 0) {
        v0 = p0;
        *(float *)(v0 + 10444) -= *(float *)(v0 + 16);
        if (*(float *)(v0 + 10444) <= 0.0f) {
            func_002D8850();
            tmp2 = func_002D9EB0(v0);
            v1 = func_002F30B0(82, *(int *)(*(char **)((char *)((tmp2 << 2) + (int)v0) + 4996) + 260), v0);
            *(char *)(v0 + 10419) = 0;
            *(int *)(v0 + 10444) = 0;
        }
    }
    return v1;
}

extern char D_00545980[];

float func_002D8B50(p0) char *p0; {
    if (*(unsigned char *)(p0 + 10414) == 1) {
        *(float *)(p0 + 10776) = *(float *)((D_00545980 + (*(signed char *)(p0 + 10408) << 2)) + 0);
    } else {
        *(int *)(p0 + 10776) = 0x3f800000;
    }
    return *(float *)(p0 + 10776);
}

float func_002D9250(p0) char *p0; {
    extern char D_005459C0[];
    int v0;
    v0 = *(signed char *)(p0 + 15476);
    if ((v0 & 255) == 2) {
        v0 = 1;
    }
    return *(float *)((char *)(((v0 & 255) << 2) + (int)(D_005459C0 + (*(unsigned char *)(p0 + 15468) << 3))) + 0);
}

extern char D_0059B4F8[];

int func_002D9ED0(p0) char *p0; {
    return *(int *)((char *)((*(int *)((D_0059B4F8 + (*(unsigned char *)(p0 + 10400) << 2)) + 0) << 2) + (int)p0) + 4992);
}

int func_002D9F00(p0, p1) char *p0; int p1; {
    return *(int *)(*(char **)((char (*)[4])((char *)(int)p0 + 4992))[(p1 + *(int *)((char (*)[4])((char *)D_0059B4F8 + 0))[*(unsigned char *)(p0 + 10400)])] + 260);
}

void func_002D9F30(p0, p1) char *p0; int p1; {
    int v0;
    char *v1;
    v0 = 0;
    do {
        v1 = *(char **)(p0 + 18460);
        if (v1 != 0) {
            if ((*(unsigned char *)(*(char **)(v1 + 256) + 0) & 4) != 0) {
                *(char *)(v1 + 5) = p1;
            }
        }
        v0 = (v0 + 1);
        p0 = (p0 + 4);
    } while ((v0 < 16));
}

int func_002D9FA0(p0, p1) char *p0; char *p1; {
    int v0;
    if (*(unsigned char *)(p0 + 15261) == 1) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((p0 + 15424)), "r"(p1) : "memory");
        v0 = 1;
    } else {
        v0 = 0;
    }
    return v0;
}

extern char D_00545C90[];

extern char D_00545C91[];

extern char D_00545C92[];

extern char D_005BE1A8;

int func_0036DF10();

int func_002D9FE0(p0, p1) char *p0; int p1; {
    int v0;
    if (*(unsigned char *)(p0 + 212) == 0) {
        v0 = func_0036DF10(&D_005BE1A8, 0, *(unsigned char *)((D_00545C90 + ((p1 & 255) * 3)) + 0), *(unsigned char *)((D_00545C91 + ((p1 & 255) * 3)) + 0), *(unsigned char *)((D_00545C92 + ((p1 & 255) * 3)) + 0), 0);
    }
    return v0;
}

int func_002DA050(p0) char *p0; {
    int v0;
    if (*(unsigned char *)(p0 + 212) == 0) {
        v0 = func_0036DF10(&D_005BE1A8, 0, 0, 0, 0, 0);
    }
    return v0;
}

extern char D_005455B8[];

int func_002DA090(p0) int p0; {
    return *(signed char *)((D_005455B8 + (signed char)p0) + 0);
}

void func_002DB1C0(p0, p1) char *p0; int p1; {
    float v0;
    int v1;
    int v2;
    int v3;
    float v4;
    v0 = 0.0f;
    *(float *)(p0 + 10708) -= *(float *)(p0 + 16);
    if (*(float *)(p0 + 10708) < v0) {
        *(float *)(p0 + 10708) = v0;
        return;
    } else {
        v1 = (short)((short)p1 - *(short *)(p0 + 144));
        if (v1 > 0) {
            v2 = *(short *)(p0 + 10660);
            if ((v2 < v1)) {
                v1 = v2;
            }
        } else {
            v3 = *(short *)(p0 + 10660);
            if ((v3 < -v1)) {
                v1 = (short)-v3;
            }
        }
        *(short *)(p0 + 144) += (short)((short)(int)(0.5f + ((65536.0f * (((360.0f * (float)v1) / 65536.0f) * *(float *)(p0 + 16))) / 360.0f)) & 65535);
        return;
    }
}

void func_002DBCA0(p0, p1) int p0; int p1; {
    *(int *)((char *)(((p1 & 255) << 2) + p0) + 112) = 0;
    *(int *)((char *)(((p1 & 255) << 2) + p0) + 96) = 0;
}

void func_002DBCC0(int p0, int p1, float f0, float f1) {
    *(float *)((char *)(((p1 & 255) << 2) + p0) + 96) = f0;
    *(float *)((char *)(((p1 & 255) << 2) + p0) + 112) = f1;
}

extern void func_002F1EF0();

void func_002D9F80(char *p) { func_002F1EF0(p + 11096); }

extern void func_002F1F90();

void func_002D9F90(char *p) { func_002F1F90(p + 11096); }

float func_002D8B90(char *p) { return *(float *)(p + 10776); }

void func_002D9440(void) {}

void func_002D98C0(void) {}

void func_002DBC20(void) {}

void func_002DA9F0(char *p0) {
    *(char *)(p0 + 10509) = 1;
}

void func_002DBCE0(char *p0) {
    *(int *)(p0 + 112) = 0;
    *(int *)(p0 + 96) = 0;
    *(int *)(p0 + 116) = 0;
    *(int *)(p0 + 100) = 0;
    *(int *)(p0 + 120) = 0;
    *(int *)(p0 + 104) = 0;
}

void func_002DBD00(char *p0) {
    *(int *)(p0 + 112) = 0;
    *(int *)(p0 + 96) = 0;
    *(int *)(p0 + 120) = 0;
    *(int *)(p0 + 104) = 0;
}

void func_002DBD20(char *p0, float f0, float f1) {
    *(float *)(p0 + 336) = f0;
    *(float *)(p0 + 340) = f1;
}

void func_002DBD30(char *p0) {
    *(int *)(p0 + 340) = 0;
    *(int *)(p0 + 336) = 0;
}

void func_002D9070(char *p0, int p1) {
    void func_002D8F40();
    *(char *)(p0 + 9457) = p1;
    func_002D8F40(p0, *(unsigned char *)(p0 + 9457));
}
