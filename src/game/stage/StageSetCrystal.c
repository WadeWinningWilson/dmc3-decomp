extern char D_01DFABA0[];

extern char D_01CAFF0C[];

void func_0040FAD0(char *, int);

void func_0040FAF0(char *, int);

static inline void setf40F(short k) {
    char *g = *(char **)((*(char **)D_01CAFF0C) + 0x18);
    int s = k;
    if (s < 32) {
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18) |= 1 << (s & 31);
    } else {
        s -= 32;
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x44) |= 1 << (s & 31);
    }
}

int func_0040FB80(char *p) {
    void func_003305E0(char *, int, int, float *, int, int, int);
    float v[4] __attribute__((aligned(16)));
    int i;
    int f;
    for (i = 0; i < *(short *)(p + 0xE2); i++) {
        if (*(unsigned char *)*(char **)((char *)(i * 4) + (int)p + 0x108) != 1) continue;
        if (*(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 1) != 1) continue;
        switch (*(unsigned short *)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 2)) {
        case 0:
        case 1:
        default:
            continue;
        case 2:
        case 3:
            break;
        }
        f = 0;
        if (*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 0x51C) != 0) f = *(int *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 0x51C) + 8);
        if (!(f & 1)) continue;
        *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 1) = 0;
        (*(short *)(p + 0xE4))--;
        func_0040FAD0(p, i);
        func_0040FAF0(p, i);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)((char *)(i * 4) + (int)p + 0x108) + 0x450) : "memory");
        if (*(unsigned short *)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 2) == 2) func_003305E0(D_01DFABA0, 8, 0x32, v, 0x24, 0, 0);
        else func_003305E0(D_01DFABA0, 8, 0x35, v, 0x24, 0, 0);
        if (*(int *)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 0x498) != 0 || *(unsigned short *)(*(char **)((char *)(i * 4) + (int)p + 0x108) + 2) == 3) {
            if (*(short *)(p + 0xDE) != -1) setf40F(*(short *)(p + 0xDE));
            return 1;
        }
        return 0;
    }
    return 0;
}

void func_00104C00(char *, char *, float *);

void func_00105230(char *, char *, float *);

void func_00131700(float *, float *, float *);

#define E40F(p, i) (*(char **)((char *)((i) * 4) + (int)(p) + 0x108))

#define ID40F(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

void func_0040FDF0(char *p, unsigned short i) {
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float a;
    a = 45.0f * (float)(unsigned int)*(unsigned short *)(E40F(p, i) + 0x496);
    if (!(a <= 180.0f)) a -= 360.0f;
    if (a < -180.0f) a += 360.0f;
    ID40F(m);
    r[0] = 0.0f;
    r[1] = 6.283185f * (a / 360.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700(m, m, r);
    ID40F(E40F(p, i) + 0x450);
    t[0] = *(float *)(p + 0xFC) + 200.0f * (float)*(unsigned short *)(E40F(p, i) + 0x490);
    t[1] = *(float *)(p + 0x100) + (float)*(unsigned short *)(E40F(p, i) + 0x492);
    t[2] = *(float *)(p + 0x104) + 200.0f * (float)*(unsigned short *)(E40F(p, i) + 0x494);
    t[3] = 1.0f;
    func_00105230(E40F(p, i) + 0x450, E40F(p, i) + 0x450, t);
    func_00104C00(E40F(p, i) + 0x450, E40F(p, i) + 0x450, m);
}

int func_0040F1B0(char *);

static inline void setflag(short k) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    int s = k;
    if (s < 32) {
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18) |= 1 << (s & 31);
    } else {
        s -= 32;
        *(unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x44) |= 1 << (s & 31);
    }
}

void func_0040EA40(char *p) {
    void func_003305E0(char *, int, int, char *, int, int, int);
    void func_0040F220(char *p);
    float v[4] __attribute__((aligned(16)));
    if (*(unsigned char *)(p + 0xE1) == 0) {
        if ((unsigned char)func_0040F1B0(p) == 1) {
            *(unsigned char *)(p + 0xE1) = 1;
            if (*(short *)(p + 0xDC) != -1) setflag(*(short *)(p + 0xDC));
        }
    } else {
        func_0040F220(p);
    }
    *(float *)(p + 0xEC) = *(float *)(p + 0xEC) - *(float *)(p + 0x10);
    if (*(float *)(p + 0xEC) < 0.0f) {
        *(float *)(p + 0xEC) = 20.0f;
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(p + 0x108) + 0x450) : "memory");
        func_003305E0(D_01DFABA0, 8, 0x33, (char *)v, 0x24, 0, 0);
    }
}

char *func_00207480(int, int, char *, int);

char *func_0040FB60(char *p, int i) {
    return func_00207480(3, 0x229, ((char **)(p + 0x108))[i] + 0x450, 0x40);
}

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

void func_0028C790(char *, int);

void func_00410080(char *p, unsigned short k) {
    char **pp = (char **)((char *)(k * 4) + (int)p + 0x108);
    char *o;
    func_0028C790(*pp + 0x4A0, 0);
    func_0028C200(*pp + 0x4A0, *pp + 0x6C0, *pp + 0x6D0, 4, 0, p, 0);
    func_0028C8E0(*pp + 0x4A0, 0);
    func_0028C910(*pp + 0x4A0);
    (*pp)[0x4A3] = 0xD;
    (*pp)[0x6C0] = 6;
    (*pp)[0x6C1] = 0;
    *(short *)(*pp + 0x6C2) = 0;
    switch (*(unsigned short *)(*pp + 2)) {
    case 3:
        (*pp)[0x6D0] = 3;
        *(float *)(*pp + 0x6E0) = 0.0f;
        *(float *)(*pp + 0x6E4) = 0.0f;
        *(float *)(*pp + 0x6E8) = 0.0f;
        *(float *)(*pp + 0x6F8) = 150.0f;
        *(float *)(*pp + 0x6FC) = 400.0f;
        *(float *)(*pp + 0x700) = 100.0f;
        *(float *)(*pp + 0x6EC) = 0.0f;
        *(float *)(*pp + 0x6F0) = 0.0f;
        *(float *)(*pp + 0x6F4) = 0.0f;
        break;
    case 0:
    case 1:
        (*pp)[0x6D0] = 4;
        *(float *)(*pp + 0x6E0) = 0.0f;
        *(float *)(*pp + 0x6E4) = 80.0f;
        *(float *)(*pp + 0x6E8) = -40.0f;
        *(float *)(*pp + 0x6EC) = 1.0f;
        *(float *)(*pp + 0x6F0) = 0.0f;
        *(float *)(*pp + 0x6F4) = -70.0f;
        *(float *)(*pp + 0x6F8) = -40.0f;
        *(float *)(*pp + 0x6FC) = 1.0f;
        *(float *)(*pp + 0x700) = 80.0f;
        break;
    default:
        (*pp)[0x6D0] = 2;
        *(float *)(*pp + 0x6E0) = 0.0f;
        *(float *)(*pp + 0x6E4) = 0.0f;
        *(float *)(*pp + 0x6E8) = 0.0f;
        *(float *)(*pp + 0x6EC) = 1.0f;
        *(float *)(*pp + 0x6F0) = 70.0f;
        break;
    }
    func_0028C3A0(*pp + 0x4A0, 0, -1, *pp + 0x450);
    o = *(char **)(*pp + 0x51C);
    if (o) {
        o[2] = 1;
        o[0xC4] = 0;
        o[0xC5] = 0;
        o[0xC6] = 0;
        o[0xC7] = 0x18;
    }
}

extern unsigned int D_01DF8810[];

extern unsigned int D_01DF7E50[];

void func_00207A90(unsigned int *);

void func_0040EB90(char *);

static inline unsigned int mt_40E(void) {
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

static inline int ft40E(int k) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    unsigned int *w;
    unsigned int m;
    if (k < 32) {
        w = (unsigned int *)((char *)(k / 32 * 4) + (int)g + 0x18);
        m = 1 << (k & 31);
        return (*w & m) != 0;
    } else {
        int t = k - 32;
        w = (unsigned int *)((char *)(t / 32 * 4) + (int)g + 0x44);
        m = 1 << (t & 31);
        return (*w & m) != 0;
    }
}

void func_0040E890(char *p) {
    void func_0040F220(char *);
    void func_0040F320(char *);
    int k;
    *(unsigned char *)(p + 0x45) = 6;
    k = *(short *)(p + 0xDC);
    if (k != -1 && ft40E(k)) {
        *(unsigned char *)(p + 0xE0) = 0;
        return;
    }
    if (*(short *)(p + 0xF8) == 2) {
        *(short *)(p + 0xF8) = mt_40E() % 6 + 2;
        if (*(short *)(p + 0xF8) > 7) *(short *)(p + 0xF8) = 2;
    }
    func_0040EB90(p);
    func_0040F220(p);
    func_0040F320(p);
    *(int *)(p + 0xC) |= 0x40;
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005AADD0[];

extern char D_005B2FA0[];

extern char D_005B2FC4[];

extern char D_005B3044[];

extern char D_005B30D8[];

void func_001003E0();

void func_0013D240();

void func_0024F810();

char *func_004103E0(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005B2FA0;
        *(char * *)(p + 64) = D_005B2FC4;
        *(char * *)(p + 160) = D_005B3044;
        *(char * *)(p + 208) = D_005B30D8;
        func_001003E0(p + 780, (void *)func_0013D240, 16, 24);
        if (p + 208 != 0) {
            *(char * *)(p + 208) = D_005AADD0;
        }
        func_0024F810(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_0040F110();

int func_004102A0(p0) char *p0; {
    int func_0040F320();
    int v0;
    int v1;
    v0 = (int)p0;
    if (*(unsigned char *)(p0 + 225) == 0) {
        func_0040F110();
        v1 = func_0040F320(v0);
    }
    return v1;
}

void func_004103B0(p0, p1) char *p0; int p1; {
    if (*(short *)(p0 + 220) == -1) {
        *(short *)(p0 + 220) = p1;
    } else {
        *(short *)(p0 + 222) = p1;
    }
}

extern void func_00410390();

void func_004104E0(char *p) { func_00410390(p + -208); }

extern void func_00410380();

void func_004104F0(char *p) { func_00410380(p + -208); }

void func_004103A0(void) {}
