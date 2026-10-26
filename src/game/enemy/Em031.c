/* func_004B8610 with a timestep (+0x10) and the limit at +0x21A4. */
unsigned char func_003B51C0(char *p) {
    unsigned char r = 0;
    float v;
    *(float *)(p + 0x54) += *(float *)(p + 0x64) * *(float *)(p + 0x10);
    v = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    if (v < 0.0f && !(*(float *)(p + 0x64) < 0.0f)) {
        r = 1;
    }
    if (v < 0.0f && v < *(float *)(p + 0x21A4)) {
        v = *(float *)(p + 0x21A4);
    }
    *(float *)(p + 0x64) = v;
    return r;
}

int func_003B5E50(char *);

typedef struct { int v[4]; } T3B3;

extern T3B3 D_00564640;

extern T3B3 D_00564650;

extern T3B3 D_00564660;

extern T3B3 D_00564670;

int func_003B3CF0(char *p) {
    extern unsigned char D_01CAFF3C[];
    void func_003B4B60(char *, short);
    T3B3 z = { 0 };
    T3B3 a __attribute__((aligned(16))) = D_00564640;
    T3B3 b __attribute__((aligned(16))) = D_00564650;
    T3B3 c __attribute__((aligned(16))) = D_00564660;
    T3B3 d __attribute__((aligned(16))) = D_00564670;
    T3B3 *t[5] = { &z, &a, &b, &c, &d };
    T3B3 *e;
    int v;
    e = t[D_01CAFF3C[0]];
    v = e->v[func_003B5E50(p)];
    if (v != 0) {
        func_003B4B60(p, v);
        return 1;
    }
    return 0;
}

int func_003B6B00(char *p, int i) {
    char *func_00279290(char *);
    if (i < *(unsigned short *)(func_00279290(p + 0x700) + 0xAA)) {
        return *(int *)(p + 0x66C);
    }
    return 0;
}

void func_0034BA60(int, char *, signed char, int, int);

void func_003B6AE0(char *p, int k) {
    func_0034BA60(k, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
}

int func_003B4FA0(char *);

int func_003B4F60(char *p) {
    unsigned char b = *(unsigned char *)(p + 0x21CA) == 1;
    if (b != 1) goto call;
    return 0;
call:
    return func_003B4FA0(p);
}

static inline int clampS(int a, short lim) {
    if (a < lim) {
        return (short)a;
    }
    if (lim < -a) {
        return (short)-a;
    }
    return lim;
}

void func_003B5910(char *p, int a, int flag) {
    int d = clampS(a, *(short *)(p + 0x220E));
    if (*(float *)(p + 0x10) != 1.0f) {
        float r = 6.283185f * ((float)d / 65536.0f);
        if (!flag) {
            r *= *(float *)(p + 0x10);
        }
        d = (short)(unsigned short)(short)(int)(0.5f + 65536.0f * r / 6.283185f);
    }
    *(short *)(p + 0x90) = *(short *)(p + 0x90) + d;
}

void func_003B4D80(char *p, int a, int flag) {
    int d = clampS(a, *(short *)(p + 0x2186));
    if (*(float *)(p + 0x10) != 1.0f) {
        float r = 6.283185f * ((float)d / 65536.0f);
        if (!flag) {
            r *= *(float *)(p + 0x10);
        }
        d = (short)(unsigned short)(short)(int)(0.5f + 65536.0f * r / 6.283185f);
    }
    *(short *)(p + 0x90) = *(short *)(p + 0x90) + d;
}

void func_001A1E70(char *, int);

void func_003B66A0(char *p) {
    char *func_00279290(char *);
    int i;
    for (i = 8; i <= 16; i++) {
        func_001A1E70(func_00279290(p + 0x700), i);
    }
}

void func_003B6330(char *p) {
    char *func_00207480(int, int, char *, int);
    char *o = func_00207480(3, 0x7B, p + 0x440, 16);
    if (o != 0) {
        *(char *)(o + 0x3A) = 1;
    }
}

void func_003B62C0(char *p) {
    char *func_00279290(char *);
    void func_004F7680(int, char *, int, short, char *);
    func_004F7680(*(int *)(p + 0x4C0), p, 1, *(short *)(p + 0x90), *(char **)(func_00279290(p + 0x700) + 0x108) + 0x370);
}

void func_003023F0(int);

static inline unsigned char flag0(char *p) {
    return (*(unsigned short *)(p + 0x20CC) & 1) != 0;
}

void func_003B65E0(char *p) {
    int func_0024E780(char *, int, int);
    int r;
    if (flag0(p)) {
        r = func_0024E780(p + 0x1D00, 1, 0);
        if (*(int *)(p + 0x20C0) != 0 && (unsigned char)r != 0) {
            func_003023F0(*(int *)(p + 0x20C0));
        }
    }
}

int func_003B4840(char *p) {
    void func_003B4B60(char *, int);
    short k = *(short *)(p + 0x20CE);
    if (k < 0 || k >= 39) {
        *(short *)(p + 0x20CE) = -1;
        return 0;
    }
    func_003B4B60(p, k);
    *(float *)(p + 0x21D4) = *(float *)(p + 0x21D8);
    *(short *)(p + 0x20CE) = -1;
    return 1;
}

void func_003B6370(char *p) {
    char *func_00207480(int, int, char *, int);
    char *e = func_00207480(3, 0x29, 0, 16);
    if (e != 0) {
        *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x668) + 0x104);
        e[0x9A] = 0;
        e[0x3A] = 1;
        e[0x9C] = 0;
        e[0x9D] = 0;
        e[0x9E] = 0;
        e[0x9B] = 2;
    }
}

static inline unsigned char armed(char *p) {
    return *(unsigned char *)(p + 0x21C9) != 0;
}

static inline unsigned char partner_ready(char *g) {
    if (*(unsigned char *)(g + 0x28AE) == 1 && *(unsigned char *)(g + 0x28A9) == 1) {
        return 1;
    }
    return 0;
}

int func_003B5CD0(char *p) {
    extern char D_01CAFF0C[];
    int func_003B5A00(char *, short);
    char *g;
    if (!armed(p)) {
        return 0;
    }
    if ((unsigned char)func_003B5A00(p, *(short *)(p + 0x2210)) == 1) {
        return 0;
    }
    if (*(int *)(p + 0x2210) == *(int *)(p + 0x21FC)) {
        return 0;
    }
    if (*(unsigned char *)(p + 0x2190) == 1) {
        g = *(char **)(*(char **)D_01CAFF0C + 0xC);
        if (g != 0 && partner_ready(g) == 1) {
            *(short *)(p + 0x20CE) = 0x25;
        }
    } else {
        *(short *)(p + 0x20CE) = 0x1F;
    }
    return 1;
}

void func_0024DA80(char *, int, int);

int func_0024E800(char *);

static inline unsigned char both_done(char *p) {
    if ((unsigned char)func_0024E800(p + 0x1D00) == 1 && (unsigned char)func_0024E800(p + 0x1DD0) == 1) {
        return 1;
    }
    return 0;
}

void func_003B0420(char *p) {
    void func_003B4B60(char *, int);
    *(unsigned char *)(p + 0x21CA) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 6;
        func_0024DA80(p + 0x1D00, 0, 6);
        func_0024DA80(p + 0x1DD0, 0, 6);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x21C4) = 1;
        break;
    case 1:
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
        }
        break;
    case 2:
        break;
    }
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00105760(char *, char *, float);

typedef struct { short s[4]; } S8;

extern S8 D_005BCD08;

void func_003B6490(char *p, unsigned char k) {
    char *func_00207480(int, int, char *, int);
    float m[16];
    S8 t;
    char *o;
    float a;
    t = D_005BCD08;
    a = 6.283185f * ((float)t.s[k] / 65536.0f);
    UNIT(m);
    func_00105760((char *)m, (char *)m, a);
    o = func_00207480(3, 0xC0, (char *)m, 0x10);
    if (o != 0) {
        *(char **)(o + 0x90) = *(char **)(*(char **)(p + 0x668) + 0x104);
        *(unsigned char *)(o + 0x9A) = 0;
        *(unsigned char *)(o + 0x3A) = 1;
        *(unsigned char *)(o + 0x9C) = 0;
        *(unsigned char *)(o + 0x9D) = 0;
        *(unsigned char *)(o + 0x9E) = 0;
        *(unsigned char *)(o + 0x9B) = 2;
    }
}

void func_003B5FB0(char *p) {
    void func_004F7680(int, char *, int, short, char *);
    func_004F7680(*(int *)(p + 0x4C0), p, 3, *(short *)(p + 0x90), *(char **)(*(char **)(p + 0x698) + 0x104) + 0x30);
}

void func_003B5DC0(char *, char *, float, float);

void func_003B4820(char *p) {
    func_003B5DC0(p, p + 0x21D4, 1.0f, 0.0f);
}

int func_00124EC0(int);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline float fsqrt(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
}

extern char D_00564370[];

#define VSUBR(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

float func_003B57C0(char *p, int i) {
    float v[4];
    QCOPY(v, D_00564370 + i * 16);
    VSUBR(v, v, p + 0x50);
    return (float)func_00124EC0((int)fsqrt(v[0] * v[0] + v[2] * v[2]));
}

void func_002F2D30(char *, char *);

void func_003B5F70(char *);

void func_003B60F0(char *);

void func_003B65A0(char *);

void func_003AEE40(char *p) {
    void func_001AD140(char *);
    extern char D_01CAFF0C[];
    char *func_002F7C10(int, int);
    int i;
    if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
        func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
    }
    for (i = 0; i < 7; i++) {
        char *o = func_002F7C10(i, 0x20);
        if (o != 0) {
            o -= 0xD0;
        }
        if (o != 0) {
            *(int *)(o + 0x2B4) = 0;
        }
    }
    func_003B5F70(p);
    func_003B60F0(p);
    func_003B65A0(p);
    if (*(char **)(p + 0x21E4) != 0) {
        func_001AD140(*(char **)(p + 0x21E4));
    }
}

void func_00104B80(char *, char *, char *);

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

#define VADDIP(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern V4 D_005646A0;

void func_003B61F0(char *p) {
    int func_004F7680(int, char *, int, short, char *);
    float m[16];
    V4 v;
    float a;
    v = D_005646A0;
    a = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    UNIT(m);
    func_00105760((char *)m, (char *)m, a);
    func_00104B80((char *)&v, (char *)m, (char *)&v);
    VADDIP(&v, p + 0x50);
    *(int *)(p + 0x21F8) = func_004F7680(*(int *)(p + 0x4C0), p, 0, *(short *)(p + 0x90), (char *)&v);
}

int func_003B6AB0(char *p) {
    short k = *(short *)(p + 0x20D0);
    if (k != 0x23) goto other;
    return 2;
other:
    return k == 0x24;
}

int func_003B4650(char *p) {
    float func_003B5650(char *, int, int);
    int func_003B5A00(char *, short);
    unsigned char b;
    if (*(unsigned char *)(p + 0x14D) != 3) goto a;
    return 0;
a:
    b = *(unsigned char *)(p + 0x2219) == 1;
    if (b) goto c;
    return 0;
c:
    b = *(unsigned char *)(p + 0x2218) == 1;
    if (b) goto d;
    return 0;
d:
    if ((unsigned char)func_003B5A00(p, *(short *)(p + 0x21FC))) goto e;
    return 0;
e:
    return !(func_003B5650(p, *(int *)(p + 0x21FC), 0) > 400.0f);
}

int func_003B3E30(char *p0) {
    int func_0024E780();
    unsigned char t0;
    int t1;
    t0 = *(unsigned char *)(p0 + 8577);
    *(char *)(p0 + 8576) = *(unsigned char *)(p0 + 8577);
    t1 = func_0024E780((p0 + 7424), 0, 1);
    *(char *)(p0 + 8577) = t1;
    return t1;
}

int func_003B4A30();

int func_003B4A00(char *p0) {
    short t0;
    int t1;
    t0 = *(short *)(p0 + 8582);
    t1 = func_003B4A30(p0, *(short *)(p0 + 8582));
    *(char *)(p0 + 8591) = t1;
    return t1;
}

int func_003B5A20(char *p0) {
    int func_003B5A00();
    short t0;
    int t1;
    t0 = *(short *)(p0 + 8720);
    t1 = func_003B5A00(p0, *(short *)(p0 + 8720));
    return ((unsigned int)0 < (unsigned int)((t1 & 255) ^ 1));
}

void func_001A1E10();

void func_003B6640(int p0) {
    int func_00279290();
    int t0;
    t0 = func_00279290((p0 + 4864));
    func_001A1E10(t0);
}

void func_001A1F90();

void func_003B6670(int p0) {
    int func_00279290();
    int t0;
    t0 = func_00279290((p0 + 4864));
    func_001A1F90(t0);
}

void func_003B6D30(char **h) {
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

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

char *func_003B6EE0(char *p) {
    void func_0013D240(char *, int);
    void func_003B7000(char *);
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
    **q = func_001B0FD0(a, 0x1340, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x1340, t);
        if (r != 0) {
            func_003B7000(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x2C, **q);
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
        *(char **)(ret + 0x38) = p;
    }
    return ret;
}

void func_003B66F0(char *p) {
    char *func_00279290(char *);
    void func_001A2000(char *, int);
    int i;
    for (i = 8; i <= 16; i++) {
        func_001A2000(func_00279290(p + 0x700), i);
    }
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005A77A0[];

extern char D_005A78F8[];

extern char D_005AFA70[];

extern char D_005AFA94[];

extern char D_005AFB14[];

extern char D_005AFBA8[];

extern char D_005AFC74[];

extern char D_005AFD2C[];

extern char D_005B0890[];

void func_001003E0();

void func_00204C70();

void func_0024D9A0();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_002E83B0();

void func_002E8A50();

void func_00313E60();

void func_0031DF20();

void func_0031E4E0();

void func_00320590();

char *func_003B6B70(char *p, short flag) {
    void func_0013D240();
    if (p != 0) {
        *(char * *)(p) = D_005AFA70;
        *(char * *)(p + 64) = D_005AFA94;
        *(char * *)(p + 160) = D_005AFB14;
        *(char * *)(p + 208) = D_005AFBA8;
        *(char * *)(p + 304) = D_005AFC74;
        *(char * *)(p + 464) = D_005AFD2C;
        func_0028C1A0(p + 7840, -1);
        func_001003E0(p + 7424, (void *)func_0024D9A0, 208, 2);
        if (p + 7232 != 0) {
            *(char * *)(p + 7248) = D_005A78F8;
            if (p + 7232 != 0) {
                *(char * *)(p + 7248) = D_005A77A0;
            }
        }
        func_001003E0(p + 6752, (void *)func_00204C70, 160, 3);
        func_001003E0(p + 6400, (void *)func_0031DF20, 32, 11);
        func_002791E0(p + 4864, -1);
        func_002791E0(p + 3328, -1);
        func_002791E0(p + 1792, -1);
        if (p + 1536 != 0) {
            *(char * *)(p + 1552) = D_005B0890;
            if (p + 1536 != 0) {
                *(char * *)(p + 1552) = D_005A77A0;
            }
        }
        func_00313E60(p + 1504, -1);
        func_002E8A50(p + 1480, -1);
        func_002E83B0(p + 1412, -1);
        func_001003E0(p + 532, (void *)func_0013D240, 16, 34);
        func_0031E4E0(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_003AF100(p0) char *p0; {
    int v0;
    v0 = 0x40400000;
    if (*(unsigned char *)(p0 + 333) != 3) {
        *(int *)(p0 + 1600) = v0;
        *(int *)(p0 + 1604) = 0;
        *(int *)(p0 + 1608) = v0;
        *(int *)(p0 + 1612) = 0;
        *(int *)(p0 + 1616) = 0x40a00000;
        *(char *)(p0 + 1548) = 1;
    }
}

void func_003AF240(p0, p1, p2) char *p0; int p1; char *p2; {
    int v0;
    int tmp0;
    tmp0 = *(signed char *)(p2 + 5);
    v0 = 1;
    if (tmp0 == 0) {
        *(char *)(p0 + 8727) = v0;
    }
}

int func_003B3480();

int func_003B3370(p0) int p0; {
    int func_003B4B60();
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v3 = func_003B3480(p0, 0);
    if ((v3 & 255) == 1) {
        v1 = (int)v0;
        if (*(float *)(v0 + 8712) <= 150.0f) {
            v3 = func_003B4B60(v1, 18);
        } else {
            v2 = (int)v0;
            if ((*(unsigned char *)(v0 + 8716) & 1) != 0) {
                v3 = func_003B4B60(v2, 17);
            } else {
                v3 = func_003B4B60(v0, 16);
            }
        }
    }
    return v3;
}

int func_003B3410(p0) int p0; {
    int func_003B4B60();
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v1 = func_003B3480(p0, 1);
    if ((v1 & 255) == 1) {
        *(char *)(v0 + 8726) = 0;
        v2 = (int)v0;
        if ((*(unsigned char *)(v0 + 8716) & 1) != 0) {
            v1 = func_003B4B60(v2, 14);
        } else {
            v1 = func_003B4B60(v0, 13);
        }
    }
    return v1;
}

extern char D_00564480[];

void func_003B47F0(p0) char *p0; {
    extern char D_01CAFF3C[];
    *(float *)(p0 + 8656) = *(float *)((D_00564480 + (*(unsigned char *)D_01CAFF3C << 2)) + 0);
}

void func_003B4950(p0) char *p0; {
    float v0;
    int v1;
    int v2;
    int v3;
    v0 = *(float *)(p0 + 356);
    if (v0 <= 150.0f) {
        *(char *)(p0 + 8590) = 0;
    } else {
        v1 = 1;
        if (v0 <= 250.0f) {
            *(char *)(p0 + 8590) = v1;
        } else {
            v2 = 2;
            if (v0 <= 450.0f) {
                *(char *)(p0 + 8590) = v2;
            } else {
                v3 = 3;
                if (v0 <= 800.0f) {
                    *(char *)(p0 + 8590) = v3;
                } else {
                    *(char *)(p0 + 8590) = 4;
                }
            }
        }
    }
}

void func_003B4B00(p0) char *p0; {
    float v0;
    int v1;
    int v2;
    v0 = (*(float *)(p0 + 340) - *(float *)(p0 + 84));
    v1 = 1;
    if (v0 > 300.0f) {
        *(char *)(p0 + 8592) = v1;
    } else {
        v2 = 2;
        if (v0 < -200.0f) {
            *(char *)(p0 + 8592) = v2;
        } else {
            *(char *)(p0 + 8592) = 0;
        }
    }
}

int func_003B4C90(char *p0, float f0) {
    float v0;
    float v1;
    *(float *)(p0 + 8416) = (*(float *)(p0 + 8416) + f0);
    *(float *)(p0 + 8420) = (*(float *)(p0 + 8420) + f0);
    *(float *)(p0 + 8424) = (*(float *)(p0 + 8424) + f0);
    if (f0 > 0.0f) {
        v0 = *(float *)(p0 + 8488);
        if (*(float *)(p0 + 8416) > v0) {
            *(float *)(p0 + 8424) = v0;
            *(float *)(p0 + 8420) = v0;
            *(float *)(p0 + 8416) = v0;
        }
    } else {
        v1 = *(float *)(p0 + 8488);
        if (*(float *)(p0 + 8416) < v1) {
            *(float *)(p0 + 8424) = v1;
            *(float *)(p0 + 8420) = v1;
            *(float *)(p0 + 8416) = v1;
        }
    }
}

void func_003B4D10(p0) char *p0; {
    char *v0;
    int v1;
    char *v2;
    v1 = 0;
    v2 = p0;
    *(float *)(*(char **)(p0 + 1636) + 388) = *(float *)(p0 + 8416);
    *(float *)(*(char **)(p0 + 1636) + 408) = *(float *)(p0 + 8420);
    *(float *)(*(char **)(p0 + 1636) + 428) = *(float *)(p0 + 8424);
    *(float *)(p0 + 8068) = *(float *)(p0 + 8416);
    do {
        v0 = *(char **)(v2 + 7964);
        if (v0 != 0) {
            *(float *)(v0 + 20) = *(float *)(p0 + 8416);
        }
        v1 = (v1 + 1);
        v2 = (v2 + 4);
    } while ((v1 < 16));
}

void func_003B4E70(p0, p1, p2) char *p0; int p1; int p2; {
    float v0;
    float v1;
    if (p1 != 0) {
        v0 = *(float *)(p0 + 16);
        if (1.0f != v0) {
            v1 = (6.283185005187988f * ((float)p1 / 65536.0f));
            if (p2 == 0) {
                v1 = (v1 * v0);
            }
            p1 = ((short)(int)(0.5f + ((65536.0f * v1) / 6.283185005187988f)) & 65535);
        }
        p1 = (short)p1;
        *(short *)(p0 + 144) = (*(short *)(p0 + 144) + p1);
    }
}

int func_003B55B0(p0, p1) int p0; int p1; {
    float func_003B5650();
    int v0;
    int v1;
    int v2;
    float v3;
    int v4;
    int tmp0;
    float tmp1;
    v0 = p0;
    v1 = p1;
    v2 = 6;
    do {
        v3 = 600.0f;
        tmp0 = 6;
        if (v2 == tmp0) {
            v3 = 550.0f;
        }
        tmp1 = func_003B5650(v0, v2, v1);
        v4 = v2;
        if (tmp1 <= v3) {
            return v4;
        }
        v2 = (v2 + -1);
    } while (v2 >= 0);
    return -1;
}

int func_003B5700();

int func_003B5780(p0) int p0; {
    int tmp0;
    int tmp1;
    tmp0 = func_003B5700();
    tmp1 = func_003B4A30(p0, (short)tmp0);
    return tmp1;
}

int func_003B5850();

int func_003B58D0(p0) int p0; {
    int tmp0;
    int tmp1;
    tmp0 = func_003B5850();
    tmp1 = func_003B4A30(p0, (short)tmp0);
    return tmp1;
}

extern char D_005643F0[];

int func_003B5A50(p0) char *p0; {
    int func_003B5A00();
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int tmp0;
    v1 = (int)p0;
    v5 = 0;
    v0 = (D_005643F0 + (((*(int *)(p0 + 8700) * 6) + 6) << 1));
    do {
        v2 = *(short *)(v0 + 0);
        v3 = v1;
        if (v2 >= 0) {
            tmp0 = func_003B5A00(v3, v2);
            if ((tmp0 & 255) == 0) {
                v4 = *(short *)(v0 + 0);
                return v4;
            }
        }
        v5 = (v5 + 1);
        v0 = (v0 + -2);
    } while ((v5 < 6));
    v4 = -1;
    return v4;
}

int func_003B4C90(char *p0, float f0);

int func_003B5AF0(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int func_003B5A00();
    char *v0;
    int v1;
    int tmp1;
    int tmp2;
    v0 = p0;
    tmp1 = func_003B5A00(p0, *(short *)(p0 + 8700));
    if ((tmp1 & 255) == 1) {
        *(int *)(v0 + 8488) = 0x3f800000;
    } else {
        *(int *)(v0 + 8488) = 0x3fc00000;
    }
    if (*(float *)(v0 + 8416) >= *(float *)(v0 + 8488)) {
        tmp2 = func_003B4C90(v0, -0.02500000037252903f);
        return tmp2;
    } else {
        v1 = func_003B4C90(v0, 0.03999999910593033f);
        return v1;
    }
}

void func_003B5B90(p0, p1) int p0; int p1; {
    int func_002F7C10();
    int v0;
    char *v1;
    v0 = func_002F7C10((short)p1, 32);
    v1 = (char *)v0;
    if (v1 != 0) {
        v1 = (v1 + -208);
    }
    if (v1 != 0) {
        *(char *)(v1 + 700) = 0;
    }
}

int func_003B5780();

int func_003B5A50();

int func_003B5BE0(p0) char *p0; {
    float func_003B5650();
    int func_003B5A00();
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int tmp1;
    float tmp3;
    int tmp5;
    int tmp7;
    int tmp8;
    int tmp9;
    v0 = p0;
    tmp1 = func_003B5A00(p0, *(short *)(p0 + 8700));
    if ((tmp1 & 255) == 0) {
        v4 = 0;
    } else {
        v2 = func_003B5A50(v0);
        if (v2 < 0) {
            v4 = 0;
        } else {
            *(int *)(v0 + 8704) = v2;
            tmp3 = func_003B5650(v0, *(int *)(v0 + 8704), 0);
            *(float *)(v0 + 8712) = tmp3;
            tmp5 = func_003B5780(v0, *(int *)(v0 + 8704));
            *(char *)(v0 + 8716) = tmp5;
            tmp7 = func_003B5700(v0, *(int *)(v0 + 8704));
            *(short *)(v0 + 8718) = tmp7;
            v3 = *(unsigned char *)(v0 + 8716);
            v4 = 1;
            v5 = 32;
            if (v3 == v4) {
                *(short *)(v0 + 8398) = v5;
            } else {
                v6 = 30;
                if (v3 == 0) {
                    *(short *)(v0 + 8398) = v6;
                } else {
                    tmp8 = (v3 & 2);
                    v7 = 33;
                    if (tmp8 != 0) {
                        *(short *)(v0 + 8398) = v7;
                    } else {
                        tmp9 = (v3 & 4);
                        v1 = 34;
                        if (tmp9 != 0) {
                            *(short *)(v0 + 8398) = v1;
                        } else {
                            v4 = 0;
                        }
                    }
                }
            }
        }
    }
    return v4;
}

void func_003B5E00(p0) char *p0; {
    float v0;
    float v1;
    v0 = *(float *)(p0 + 1356);
    v1 = *(float *)(p0 + 1400);
    if (v0 > 0.0f) {
        *(float *)(p0 + 8668) = (v1 / v0);
    } else {
        *(int *)(p0 + 8668) = 0x3f800000;
    }
}

void func_003B5EC0(p0) int p0; {
    int func_00207480();
    char *v0;
    int v1;
    char *v2;
    v0 = (char *)p0;
    v1 = func_00207480(2, 131, 0, 16);
    *(int *)(v0 + 8492) = v1;
    v2 = *(char **)(v0 + 8492);
    if (v2 != 0) {
        *(int *)(v2 + 144) = *(int *)(*(char **)(v0 + 1692) + 260);
        *(char *)(v2 + 154) = 1;
        *(char *)(*(char **)(v0 + 8492) + 58) = 1;
        *(char *)(*(char **)(v0 + 8492) + 59) = 0;
    }
}

void func_003B5F30(p0) char *p0; {
    char *v0;
    v0 = *(char **)(p0 + 8492);
    if (v0 != 0) {
        *(char *)(v0 + 59) = 0;
    }
}

void func_003B5F50(p0) char *p0; {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 8492);
    v1 = 1;
    if (v0 != 0) {
        *(char *)(v0 + 59) = v1;
    }
}

int func_003B5FD0(p0) char *p0; {
    int func_00207480();
    char *v0;
    int v1;
    char *v2;
    char *tmp3;
    v0 = p0;
    if (*(int *)(p0 + 8680) == 0) {
        v1 = func_00207480(3, 895, 0, 16);
        *(int *)(v0 + 8680) = v1;
        v2 = *(char **)(v0 + 8680);
        if (v2 != 0) {
            *(int *)(v2 + 144) = *(int *)(*(char **)(v0 + 1656) + 260);
            *(char *)(v2 + 154) = 0;
            *(char *)(*(char **)(v0 + 8680) + 58) = 1;
            *(char *)(*(char **)(v0 + 8680) + 59) = 1;
            tmp3 = *(char **)(v0 + 8680);
            *(unsigned char *)(*(char **)(v0 + 8680) + 156) = 255;
            *(char *)(tmp3 + 157) = 0;
            *(char *)(tmp3 + 158) = 0;
            *(char *)(tmp3 + 155) = 2;
        }
    }
    return v1;
}

void func_003B6060(p0) char *p0; {
    char *v0;
    char *v1;
    int v2;
    v0 = *(char **)(p0 + 8680);
    if (v0 != 0) {
        *(char *)(v0 + 59) = 0;
    }
    v1 = *(char **)(p0 + 8684);
    v2 = 1;
    if (v1 != 0) {
        *(char *)(v1 + 59) = v2;
    }
}

void func_003B6090(p0) char *p0; {
    char *v0;
    int v1;
    char *v2;
    v0 = *(char **)(p0 + 8680);
    v1 = 1;
    if (v0 != 0) {
        *(char *)(v0 + 59) = v1;
    }
    v2 = *(char **)(p0 + 8684);
    if (v2 != 0) {
        *(char *)(v2 + 59) = 0;
    }
}

void func_003B6140(p0) char *p0; {
    int func_00207480();
    char *v0;
    int v1;
    char *v2;
    v0 = p0;
    if (*(int *)(p0 + 8688) == 0) {
        v1 = func_00207480(3, 864, 0, 16);
        *(int *)(v0 + 8688) = v1;
        v2 = *(char **)(v0 + 8688);
        if (v2 != 0) {
            *(int *)(v2 + 144) = *(int *)(*(char **)(v0 + 1688) + 260);
            *(char *)(v2 + 154) = 0;
            *(char *)(*(char **)(v0 + 8688) + 58) = 1;
        }
    }
}

int func_003B61B0(p0) char *p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(int *)(p0 + 8688);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 8688) = 0;
    }
    return v2;
}

void func_003B63E0(p0) char *p0; {
    int func_00207480();
    char *v0;
    int v1;
    char *v2;
    v0 = p0;
    if (*(int *)(p0 + 8692) == 0) {
        v1 = func_00207480(2, 95, 0, 16);
        *(int *)(v0 + 8692) = v1;
        v2 = *(char **)(v0 + 8692);
        if (v2 != 0) {
            *(int *)(v2 + 144) = *(int *)(*(char **)(v0 + 1636) + 260);
            *(char *)(v2 + 154) = 0;
            *(char *)(*(char **)(v0 + 8692) + 58) = 1;
        }
    }
}

int func_003B6450(p0) char *p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(int *)(p0 + 8692);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 8692) = 0;
    }
    return v2;
}

int func_002FF740();

void func_003B6560(p0) int p0; {
    char *func_00279290();
    char *tmp0;
    int tmp2;
    tmp0 = func_00279290((p0 + 4864));
    tmp2 = func_002FF740(23, *(int *)(tmp0 + 264));
    *(int *)((char *)p0 + 8384) = tmp2;
}

void func_003B6740(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = *(short *)(p0 + 8738);
    v0 = 1;
    if (tmp0 == 0) {
        *(short *)(p0 + 8738) = v0;
    }
}

void func_003B0510(void *p) {
    extern void func_003B4B60(); func_003B4B60(p, 2); }

void func_003B0530(void *p) {
    extern void func_003B0540(); func_003B0540(p, 1); }

extern void func_003AE0E0();

void func_003B6D80(char *p) { func_003AE0E0(p + -64); }

extern void func_003B6B50();

void func_003B6D90(char *p) { func_003B6B50(p + -64); }

extern void func_003B6B60();

void func_003B6DA0(char *p) { func_003B6B60(p + -64); }

extern void func_003AF140();

void func_003B6DD0(char *p) { func_003AF140(p + -64); }

extern void func_003AF090();

void func_003B6DE0(char *p) { func_003AF090(p + -64); }

extern void func_003AF080();

void func_003B6DF0(char *p) { func_003AF080(p + -64); }

extern void func_003AF260();

void func_003B6E00(char *p) { func_003AF260(p + -64); }

extern void func_003AEF00();

void func_003B6E10(char *p) { func_003AEF00(p + -64); }

extern void func_003AF2C0();

void func_003B6E50(char *p) { func_003AF2C0(p + -304); }

extern void func_003AF2B0();

void func_003B6E60(char *p) { func_003AF2B0(p + -304); }

void func_003B6E90(char *p) { func_003AF140(p + -304); }

void func_003B6EA0(char *p) { func_003AF090(p + -304); }

void func_003B6EB0(char *p) { func_003AF080(p + -304); }

void func_003B4C60(char *p, float v) { *(float *)(p + 8488) = v; }

void func_003B49F0(char *p0) {
    *(char *)(p0 + 8593) = 1;
}

void func_003B4C70(char *p0, float f0) {
    *(float *)(p0 + 8416) = f0;
    *(float *)(p0 + 8420) = f0;
    *(float *)(p0 + 8424) = f0;
    *(int *)(p0 + 8428) = 0x3f800000;
}

void func_003B6760(char *p0) {
    *(short *)(p0 + 8738) = 4;
}

void func_003B0520(int p0) {
    void func_003B0540();
    func_003B0540(p0, 0);
}

void func_004F7840();

void func_003B6310(char *p0) {
    func_004F7840(*(char **)(p0 + 1216), p0, 2, *(int *)(p0 + 8708));
}

/*
 * The nine PoC functions that match, at their USA (SLUS_209.64) addresses.
 * These are not yet assigned to their original translation units; move each
 * one to its real TU once TU boundaries are known (DMC3_DECOMP_ROADMAP.md).
 * Struct layouts are offset-only placeholders: unkXXX = field at offset XXX.
 */
typedef unsigned char u8;

/* JP 0x003B6090: flag two optional children */
typedef struct { u8 pad[0x3B]; u8 unk3B; } Child3B;

typedef struct { u8 pad[0x21E8]; Child3B *unk21E8; Child3B *unk21EC; } Obj3B60C0;

void func_003B60C0(Obj3B60C0 *p) {
    if (p->unk21E8) p->unk21E8->unk3B = 1;
    if (p->unk21EC) p->unk21EC->unk3B = 1;
}

typedef unsigned short u16;

typedef short s16;

/* JP 0x003B4F00 (global is JP D_01CAF60C) */
typedef struct { u8 pad[0x90]; u16 unk90; } Obj90;

typedef struct { u8 pad[0xC]; Obj90 *unkC; } GlobalCAF60C;

typedef struct { u8 pad[0x90]; u16 unk90; u8 pad2[0x2188 - 0x92]; s16 unk2188; } Obj3B4F30;

void func_003B4F30(Obj3B4F30 *p) {
    extern GlobalCAF60C *D_01CAFF0C[];
    p->unk2188 = D_01CAFF0C[0]->unkC->unk90 - p->unk90 - 0x4000;
}
