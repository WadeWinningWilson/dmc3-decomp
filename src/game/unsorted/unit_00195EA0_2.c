extern char *D_005BE0D8;

int func_001971B0(int);

static inline void set13C(char *p, unsigned int i, int v) {
    if (i < *(unsigned short *)(p + 0xA8)) *(int *)(*(char **)(p + 0xBC) + i * 0x340 + 0x13C) = v;
}

void func_001A3370(char *p, int a1) {
    int func_001A97E0(int);
    unsigned char m;
    int k;
    int i;
    int j;
    char *t;
    char *s;
    char *e;
    switch (func_001A97E0(*(int *)(p + 0xC0))) {
    case 0x10000000:
        m = 0xA;
        break;
    case 0x20000000:
        m = 0xB;
        break;
    default:
        return;
    }
    *(int *)(p + 0xA0) &= ~0x70;
    *(int *)(p + 0xA0) |= 0x10;
    if (a1 & 1) *(int *)(p + 0xA0) |= 0x20;
    if (a1 & 2) {
        *(int *)(p + 0xA0) |= 0x40;
    } else {
        *(int *)(p + 0x1AC) = 0xFF;
        for (k = 0; k < *(unsigned short *)(p + 0xA8); k++) set13C(p, k, 0xFF0);
    }
    *(int *)(p + 0x194) = 0;
    *(int *)(p + 0x190) = 0;
    for (i = 0; i < (int)*(unsigned short *)(p + 0xA8); i++) {
        t = *(char **)(p + 0xBC) + i * 0x340;
        if (*(unsigned char *)(t + 5) != m) {
            *(unsigned char *)(t + 6) = *(unsigned char *)(t + 5);
            *(unsigned char *)(t + 5) = m;
            for (j = 0; j < (int)*(unsigned char *)(t + 0xC); j++) {
                e = D_005BE0D8;
                s = *(char **)(t + 0x1C) + j * 0x150;
                *(long long *)(s + 0x10) = (long long)*(unsigned short *)(e + 0x48) | (long long)(*(short *)(e + 0x20) / 64) << 14 | 0x100000 |
                    (long long)func_001971B0(*(short *)(D_005BE0D8 + 0x20)) << 26 | (long long)func_001971B0(*(short *)(e + 0x22)) << 30 | (long long)4 << 32;
                *(signed char *)(s + 0x30) = 3;
            }
        }
    }
}

int func_0019DE30(char *, int);

int func_0019DE60(char *, int);

int func_0019DE90(char *, int);

int func_0019DEC0(char *, int);

int func_0019DF30(char *, int);

int func_0019DFF0(char *, int);

int func_0019E0F0(char *, int);

void func_0019DD20(char *p) {
    int k;
    float v;
    if ((*(int *)p & 0x80000000) && !(*(int *)p & 1)) {
        v = *(float *)(*(char **)(p + 92) + 432);
        *(float *)(p + 112) = v;
        if (v > 0.0f) {
            k = *(unsigned char *)(p + 6);
            switch (k) {
            case 0:
                func_0019DE30(p, k);
                break;
            case 1:
                func_0019DE60(p, k);
                break;
            case 2:
                func_0019DE90(p, k);
                break;
            case 3:
                func_0019DEC0(p, k);
                break;
            case 4:
                func_0019DF30(p, k);
                break;
            case 5:
                func_0019DFF0(p, k);
                break;
            case 10:
                func_0019E0F0(p, k);
                break;
            }
        }
    }
}

void func_0019B440(char *, char *);

void func_0019AA80(char *, char *);

void func_00199580(char *, int, int);

void func_001996C0(char *);

char *func_00199ED0(char *p, char *a) {
    int i;
    char *e;
    int j;
    char *s;
    unsigned int t;
    for (i = 0; i < *(unsigned short *)(p + 0xA8); i++) {
        e = *(char **)(p + 0xBC) + i * 0x340;
        *(char **)(e + 0x1C) = a;
        t = *(unsigned int *)(p + 0xA0) & 0xF0000000;
        a += *(unsigned char *)(e + 0xC) * 0x150;
        switch (t) {
        case 0x10000000:
            func_0019AA80(p, e);
            break;
        case 0x20000000:
            func_0019B440(p, e);
            break;
        }
        for (j = 0; j < *(unsigned char *)(e + 0xC); j++) {
            s = *(char **)(e + 0x1C) + j * 0x150;
            *(int *)(e + 8) = *(int *)(e + 8) + *(int *)(s + 4);
            func_00199580(s, *(int *)(p + 0xC8), *(int *)(e + 0x14));
            func_001996C0(s);
            *(int *)(s + 0x13C) = 0;
        }
    }
    return a;
}

char *func_001A5B50(char *);

char *func_00277610(char *, float *, int, int);

void func_001A9CF0(char *, float *, float *);

void func_001A9CA0(char *, int);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_001AA080(char *m, char *t, int mode) {
    float v[4];
    float b[4][4];
    float a[4][4];
    char *r;
    char *q;
    if (t == 0) {
        return;
    }
    r = func_001A5B50(m);
    if (r == 0) {
        QCOPY(v, *(char **)(m + 0x108) + *(unsigned short *)(m + 0xBA) * 64 + 0x30);
    } else {
        QCOPY(v, *(char **)(r + 0x108) + (unsigned short)*(unsigned short *)(r + 0xBA) * 64 + 0x30);
    }
    q = func_00277610(t, v, mode | 0xC, 0);
    QCOPY(a[0], q);
    QCOPY(a[1], q + 0x30);
    QCOPY(a[2], q + 0x60);
    QCOPY(a[3], q + 0x90);
    QCOPY(b[0], q + 0x10);
    QCOPY(b[1], q + 0x40);
    QCOPY(b[2], q + 0x70);
    QCOPY(b[3], q + 0xA0);
    func_001A9CF0(m, b[0], a[0]);
    if (mode == 2) {
        func_001A9CA0(m, (int)(t + 0x30));
    } else {
        func_001A9CA0(m, (int)(t + 0x20));
    }
}

extern char D_00654430[];

void func_001980B0(char *, int, int, int, int);

void func_00198140(char *unused, short *s, int a, int b) {
    func_001980B0(D_00654430, 0, *(unsigned short *)s, a, b);
}

void func_00199270(char *);

void func_00199280(char *, int);

char *func_00199100(char *p, char *a) {
    int i;
    *(char **)(p + 0x10C) = a;
    func_00199270(p);
    a = *(char **)(p + 0x10C) + 0x10;
    for (i = 0; i < 2; i++) {
        *(char **)(p + i * 4 + 0xF0) = a;
        func_00199280(p, i);
        a = *(char **)(p + i * 4 + 0xF0) + 0x30;
    }
    return a;
}

void func_001A16B0(char *, unsigned int);

void func_001A1630(char *p, unsigned int i) {
    int func_001A97E0(char *);
    if (i < *(unsigned short *)(p + 0xA8)) {
        switch (func_001A97E0(*(char **)(p + 0xC0))) {
        case 0x10000000:
        case 0x20000000:
            func_001A16B0(p, i);
            break;
        case 0x30000000:
            break;
        }
    }
}

extern char D_006480D0[];

void func_001B1110(char *);

void func_001975A0(char *p) {
    void func_00196C40(char *, char *);
    int i;
    for (i = 0; i < 2; i++) {
        if (*(char **)(p + i * 4) != 0) {
            func_00196C40(D_006480D0, *(char **)(p + i * 4));
        }
        *(char **)(p + i * 4) = 0;
        *(short *)(p + i * 2 + 0xC) = 0;
        *(short *)(p + i * 2 + 8) = 0;
        func_001B1110(p + i * 16 + 0x10);
    }
}

void func_0019F950(char *, int, unsigned int, int);

void func_0019F8B0(char *p, int a, unsigned int i, int b) {
    int func_001A97E0(char *);
    if (i < *(unsigned short *)(p + 0xA8)) {
        switch (func_001A97E0(*(char **)(p + 0xC0))) {
        case 0x10000000:
        case 0x20000000:
            func_0019F950(p, a, i, b);
            break;
        case 0x30000000:
            break;
        }
    }
}

int func_0019FFC0(char *, unsigned int);

int func_0019FF20(char *p, unsigned int i) {
    int func_001A97E0(char *);
    if (!(i < *(unsigned short *)(p + 0xA8))) {
        return 0;
    }
    switch (func_001A97E0(*(char **)(p + 0xC0))) {
    case 0x10000000:
    case 0x20000000:
        return func_0019FFC0(p, i);
    case 0x30000000:
        break;
    }
    return 0;
}

int func_001A03D0(char *, unsigned int);

int func_001A0330(char *p, unsigned int i) {
    int func_001A97E0(char *);
    int r = 0;
    if (!(i < *(unsigned short *)(p + 0xA8))) {
        return -1;
    }
    switch (func_001A97E0(*(char **)(p + 0xC0))) {
    case 0x10000000:
    case 0x20000000:
        r = func_001A03D0(p, i);
        break;
    case 0x30000000:
        break;
    }
    return r;
}

void func_001AA4B0(char *, int, char *, int);

void func_001AA740(char *p, int a, int b) {
    int i;
    char *e;
    if (a != 0) {
        for (i = 0; i < *(unsigned short *)(p + 0xA8); i++) {
            e = *(char **)(p + 0xBC) + i * 0x380;
            func_001AA4B0(e, a, *(char **)(p + 0x108) + *(unsigned char *)(e + 0xE) * 64, b);
        }
    }
}

int func_0019F770(char *, unsigned int, int);

int func_0019F6C0(char *p, unsigned int i, int a) {
    int func_001A97E0(char *);
    int r;
    if (!(i < *(unsigned short *)(p + 0xA8))) {
        return -1;
    }
    r = 0;
    switch (func_001A97E0(*(char **)(p + 0xC0))) {
    case 0x10000000:
    case 0x20000000:
        r = func_0019F770(p, i, a);
        break;
    case 0x30000000:
        break;
    }
    return r;
}

void func_001A0270(char *, unsigned int, int, int, int);

void func_001A0110(char *p, unsigned int i, int a, int b, int c) {
    int func_001A97E0(char *);
    if (i < *(unsigned short *)(p + 0xA8)) {
        switch (func_001A97E0(*(char **)(p + 0xC0))) {
        case 0x10000000:
        case 0x20000000:
            func_001A0270(p, i, a, b, c);
            break;
        case 0x30000000:
            break;
        }
    }
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00198FE0(char *p, int f) {
    int func_001A97E0(char *);
    char *h = *(char **)(p + 0xC0);
    short z = 0;
    *(short *)(p + 0x18E) = 0;
    *(short *)(p + 0xB8) = 0;
    *(int *)(p + 0xB4) = z;
    *(int *)(p + 0xA4) = *(int *)(h + 0x14);
    *(short *)(p + 0xA8) = *(unsigned char *)(h + 0x10);
    *(short *)(p + 0xAA) = *(unsigned char *)(h + 0x11);
    *(short *)(p + 0xAC) = **(int **)(p + 0xC4);
    *(short *)(p + 0xBA) = *(unsigned char *)(h + 0x13);
    *(int *)(p + 0xA0) = func_001A97E0(*(char **)(p + 0xC0));
    *(int *)(p + 0xA0) |= 1;
    *(int *)(p + 0xA0) |= f;
    UNIT(p + 0x120);
}

int func_00197B30(char *p) {
    int m;
    int n;
    if (*(short *)(p + 0x18) < 0 || *(short *)(p + 0x38) > 0) {
        return 0;
    }
    switch (*(short *)(p + 0x18)) {
    case 0:
    case 1:
        m = 4;
        break;
    case 2:
        m = 2;
        break;
    default:
        return 0;
    }
    switch (*(short *)(p + 4)) {
    case 0x13:
        n = 0x100;
        break;
    case 0x14:
        n = 0x10;
        break;
    default:
        return 0;
    }
    return m * n;
}

int func_001A1D60(char *, unsigned int, int);

int func_001A1CB0(char *p, unsigned int i, int a) {
    int func_001A97E0(char *);
    int r;
    if (!(i < *(unsigned short *)(p + 0xA8))) {
        return 0;
    }
    r = 0;
    switch (func_001A97E0(*(char **)(p + 0xC0))) {
    case 0x10000000:
    case 0x20000000:
        r = func_001A1D60(p, i, a);
        break;
    case 0x30000000:
        break;
    }
    return r;
}

void func_001A01C0(char *, unsigned int, unsigned int, int, int);

void func_001A0050(char *p, unsigned int i, unsigned int j, int a, int b) {
    int func_001A97E0(char *);
    if (i < *(unsigned short *)(p + 0xA8) && j < *(unsigned short *)(p + 0xAA)) {
        switch (func_001A97E0(*(char **)(p + 0xC0))) {
        case 0x10000000:
        case 0x20000000:
            func_001A01C0(p, i, j, a, b);
            break;
        case 0x30000000:
            break;
        }
    }
}

int func_001A5050(char *);

int func_001A5100(char *);

int func_001A53F0(char *);

int func_001A4F90(char *p) {
    int func_001A97E0(char *);
    int v;
    int r = 0;
    int t = func_001A97E0(*(char **)(p + 0xC0));
    r += func_001A5050(p);
    switch (t) {
    case 0x10000000:
    case 0x20000000:
        v = func_001A5100(p);
        if (v < 0) {
            return -1;
        }
        r += v;
        break;
    case 0x30000000:
        v = func_001A53F0(p);
        if (v < 0) {
            return -1;
        }
        r += v;
        break;
    }
    return r;
}

extern int D_006543E4[];

unsigned int func_00196A20(short, short, short);

int func_00197AA0(char *);

int func_00197AC0(char *);

int func_001A5920(char *p, int *q) {
    int r = 0;
    int t = 0;
    int i;
    char *e;
    unsigned int n;
    unsigned int x;
    for (i = 0; i < q[1] * q[2]; i++) {
        n = 0;
        e = (char *)q[0] + i * 0x40;
        if (*(unsigned short *)(p + 0xAE) & 1) {
            x = func_00196A20(*(short *)(e + 0xA), *(short *)(e + 0xC), *(short *)(e + 4));
            n += x / 0x70000;
            if (x % 0x70000 != 0) n++;
            t += func_00197AA0(e);
        }
        if (*(int *)(e + 0x24) != 0) {
            t += func_00197AC0(e);
            n++;
        }
        r += n * 0xA0;
    }
    if (D_006543E4[0] / 32 < t) r = -1;
    return r;
}

extern char D_0065D0B0[];

void func_001A7230(unsigned int addr, unsigned long long *tag, int pri) {
    unsigned long long *ot;
    unsigned long long old;
    if (pri < 0) {
        pri = 30;
    } else if (pri > 30) {
        pri = 30;
    }
    ot = (unsigned long long *)((char *)((pri + 1) * 16) + (int)(D_0065D0B0 + *(signed char *)(D_005BE0D8 + 0xE) * 512));
    old = *ot;
    *ot = ((unsigned long long)addr << 32) | 0x20000000;
    *tag = (((unsigned long long)(old >> 32)) << 32) | 0x20000000;
}

extern char D_0065D4D0[];

void func_001A7450(unsigned int addr, unsigned long long *tag, int pri) {
    unsigned long long *ot;
    unsigned long long old;
    if (pri < 0) {
        pri = 126;
    } else if (pri > 126) {
        pri = 126;
    }
    ot = (unsigned long long *)((char *)((pri + 1) * 16) + (int)(D_0065D4D0 + *(signed char *)(D_005BE0D8 + 0xE) * 2048));
    old = *ot;
    *ot = ((unsigned long long)addr << 32) | 0x20000000;
    *tag = (((unsigned long long)(old >> 32)) << 32) | 0x20000000;
}

extern char D_0065F570[];

extern unsigned int D_0065F5F0[];

void func_001A7B20(unsigned int addr, unsigned long long *tag, int pri) {
    unsigned long long *ot;
    unsigned long long old;
    ot = (unsigned long long *)((char *)((pri + 1) * 16) + (int)(D_0065F570 + *(signed char *)(D_005BE0D8 + 0xE) * 32));
    old = *ot;
    *ot = ((unsigned long long)addr << 32) | 0x20000000;
    *tag = (((unsigned long long)(old >> 32)) << 32) | 0x20000000;
    D_0065F5F0[0] = D_0065F5F0[0] + 1;
}

extern unsigned int D_0065F5F4[];

void func_001A7B90(unsigned int addr, unsigned long long *tag, int pri) {
    unsigned long long *ot;
    unsigned long long old;
    ot = (unsigned long long *)((char *)((pri + 1) * 16) + (int)(D_0065F570 + *(signed char *)(D_005BE0D8 + 0xE) * 32));
    old = ot[8];
    ot[8] = ((unsigned long long)addr << 32) | 0x20000000;
    *tag = (((unsigned long long)(old >> 32)) << 32) | 0x20000000;
    D_0065F5F4[0] = D_0065F5F4[0] + 1;
}

int func_0019E2D0(char *);

int func_0019E6B0(char *p) {
    if (0.0f == *(float *)(p + 0x30) || 0.0f == (float)*(short *)(p + 0x58)) {
        *(short *)(p + 0xC) = 0;
        return 0;
    }
    *(float *)(p + 0x20) = 1.0f / *(float *)(p + 0x30) * *(float *)(p + 0x70);
    return func_0019E2D0(p);
}

extern char D_0065E550[];

void func_001A7840(unsigned int addr, unsigned long long *tag, int pri) {
    unsigned long long *ot;
    unsigned long long old;
    if (pri < 0) {
        pri = 126;
    } else if (pri > 126) {
        pri = 126;
    }
    ot = (unsigned long long *)((char *)((pri + 1) * 16) + (int)(D_0065E550 + *(signed char *)(D_005BE0D8 + 0xE) * 2048));
    old = *ot;
    *ot = ((unsigned long long)addr << 32) | 0x20000000;
    *tag = (((unsigned long long)(old >> 32)) << 32) | 0x20000000;
}

extern char D_0065F620[];

void func_001A7DA0(unsigned int addr, unsigned long long *tag, int pri) {
    unsigned long long *ot;
    unsigned long long old;
    if (pri < 0) {
        pri = 126;
    } else if (pri > 126) {
        pri = 126;
    }
    ot = (unsigned long long *)((char *)((pri + 1) * 16) + (int)(D_0065F620 + *(signed char *)(D_005BE0D8 + 0xE) * 2048));
    old = *ot;
    *ot = ((unsigned long long)addr << 32) | 0x20000000;
    *tag = (((unsigned long long)(old >> 32)) << 32) | 0x20000000;
}

float func_0011D798(float);

extern unsigned int D_01DF8810[];

extern unsigned int D_01DF7E50[];

void func_00207A90(unsigned int *);

static inline float frand19E(void) {
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
    return 2.3283064e-10f * (float)y;
}

int func_0019E7B0(char *p) {
    float t;
    float s;
    if (*(float *)(p + 0x30) == 0.0f || (float)*(short *)(p + 0x58) == 0.0f) {
        *(short *)(p + 0xC) = 0;
        return 0;
    }
    if ((*(float *)(p + 0x40) -= *(float *)(p + 0x70)) <= 0.0f) {
        *(float *)(p + 0x40) = *(float *)(p + 0x50);
        *(float *)(p + 0x10) = *(float *)(p + 0x10) + *(float *)(p + 0x20) * (float)*(short *)(p + 0x58);
        if (*(int *)p & 2) {
            *(float *)(p + 0x10) = *(float *)(p + 0x10) + (float)*(short *)(p + 0x58) * (*(float *)(p + 0x60) + (*(float *)(p + 0x64) - *(float *)(p + 0x60)) * frand19E());
        }
        t = *(float *)(p + 0x10);
        if (t > 1.0f) {
            *(float *)(p + 0x10) -= 1.0f;
        } else if (t < 0.0f) {
            *(float *)(p + 0x10) += 1.0f;
        }
        s = func_0011D798(3.1415925f * (1.0f - *(float *)(p + 0x10)));
        s += 1.0f;
        s *= 0.5f;
        if (*(int *)p & 4) {
            *(float *)(p + 0x14) += *(float *)(p + 0x24) * (float)*(short *)(p + 0x58);
            t = *(float *)(p + 0x14);
            if (t > 1.0f) {
                *(float *)(p + 0x14) -= 1.0f;
            } else if (t < 0.0f) {
                *(float *)(p + 0x14) += 1.0f;
            }
            s = s + *(float *)(p + 0x14);
        }
        *(short *)(p + 0xC) = (unsigned int)(4096.0f * s);
        return 1;
    }
    return 0;
}

static inline float frand19EA(void) {
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
    return 2.3283064e-10f * (float)y;
}

int func_0019EAA0(char *p) {
    float t;
    float s;
    if (*(float *)(p + 0x38) == 0.0f || (float)*(short *)(p + 0x5A) == 0.0f) {
        *(short *)(p + 0xE) = 0;
        return 0;
    }
    if ((*(float *)(p + 0x48) -= *(float *)(p + 0x70)) <= 0.0f) {
        *(float *)(p + 0x48) = *(float *)(p + 0x54);
        *(float *)(p + 0x18) = *(float *)(p + 0x18) + *(float *)(p + 0x28) * (float)*(short *)(p + 0x5A);
        if (*(int *)p & 2) {
            *(float *)(p + 0x18) = *(float *)(p + 0x18) + (float)*(short *)(p + 0x5A) * (*(float *)(p + 0x68) + (*(float *)(p + 0x6C) - *(float *)(p + 0x68)) * frand19EA());
        }
        t = *(float *)(p + 0x18);
        if (t > 1.0f) {
            *(float *)(p + 0x18) -= 1.0f;
        } else if (t < 0.0f) {
            *(float *)(p + 0x18) += 1.0f;
        }
        s = func_0011D798(3.1415925f * (1.0f - *(float *)(p + 0x18)));
        s += 1.0f;
        s *= 0.5f;
        if (*(int *)p & 4) {
            *(float *)(p + 0x1C) += *(float *)(p + 0x2C) * (float)*(short *)(p + 0x5A);
            t = *(float *)(p + 0x1C);
            if (t > 1.0f) {
                *(float *)(p + 0x1C) -= 1.0f;
            } else if (t < 0.0f) {
                *(float *)(p + 0x1C) += 1.0f;
            }
            s = s + *(float *)(p + 0x1C);
        }
        *(short *)(p + 0xE) = (unsigned int)(4096.0f * s);
        return 1;
    }
    return 0;
}

void func_001970E0(char *p, short *q) {
    char *d;
    int n;
    d = p + (q[3] - *(int *)(p + 0xC308)) / 32 + 0x2000;
    n = q[7];
    do { *d++ = 0; } while (--n);
    if (q[0xC] >= 0 && q[0xA] == 0 && q[0x1C] == 0) {
        d = p + (q[0xD] - *(int *)(p + 0xC308)) / 32 + 0x2000;
        n = q[0x11];
        do { *d++ = 0; } while (--n);
    }
}

extern int D_005BE09C;

void func_001A7EC0(char *p, int n);

void func_001A80E0(char *p, int n);

void func_001A8310(char *p, int n);

void func_001A8540(char *p, int n);

void func_001A8770(char *p, int n);

void func_00105E68(int *, int, char *, int);

void func_001A79A0(char *, int);

short func_001A7E20(int);

void func_001A7C90(char *, short);

short func_001A74D0(int);

void func_001A7340(char *, short);

void func_001A7120(char *, short);

short func_001A8900(int);

short func_001A8270(int);

short func_001A86D0(int);

short func_001A84A0(int);

short func_001A8050(int);

short func_001A78C0(int);

void func_001A7730(char *, short);

static inline int c1A5(int f, unsigned short k) {
    if ((f & 2) || k == 0x10) return 1;
    return 0;
}

void func_001A5F70(char *p) {
    int v[4];
    unsigned short k;
    func_00105E68(v, D_005BE09C + 0x140, *(char **)(p + 0x108) + (**(unsigned char **)(p + 8) << 6) + 0x30, 1);
    *(int *)(p + 0x180) = v[2];
    if (*(int *)(p + 0xA0) & 0x10) {
        func_001A79A0(p, 0);
        return;
    }
    k = *(unsigned short *)(p + 0x184);
    if (k == 0x8) {
        if (*(unsigned char *)(p + 0x18A) == 0) *(short *)(p + 0x188) = func_001A7E20(*(int *)(p + 0x180));
        func_001A7C90(p, *(short *)(p + 0x188));
    } else if (k == 0x2) {
        if (*(unsigned char *)(p + 0x18A) == 0) *(short *)(p + 0x188) = func_001A74D0(*(int *)(p + 0x180));
        func_001A7340(p, *(short *)(p + 0x188));
    } else if (k == 0x1) {
        if (*(unsigned char *)(p + 0x18A) == 0) *(short *)(p + 0x188) = 0;
        func_001A7120(p, *(short *)(p + 0x188));
    } else if (k == 0x100) {
        if (*(unsigned char *)(p + 0x18A) == 0) *(short *)(p + 0x188) = func_001A8900(*(int *)(p + 0x180));
        func_001A8770(p, *(short *)(p + 0x188));
    } else if (k == 0x40) {
        if (*(unsigned char *)(p + 0x18A) == 0) *(short *)(p + 0x188) = func_001A8270(*(int *)(p + 0x180));
        func_001A80E0(p, *(short *)(p + 0x188));
    } else if (k == 0x80) {
        if (*(unsigned char *)(p + 0x18A) == 0) *(short *)(p + 0x188) = func_001A86D0(*(int *)(p + 0x180));
        func_001A8540(p, *(short *)(p + 0x188));
    } else if (k == 0x20) {
        if (*(unsigned char *)(p + 0x18A) == 0) *(short *)(p + 0x188) = func_001A84A0(*(int *)(p + 0x180));
        func_001A8310(p, *(short *)(p + 0x188));
    } else if (c1A5(*(int *)(p + 0xA0), k)) {
        if (*(unsigned char *)(p + 0x18A) == 0) *(short *)(p + 0x188) = func_001A8050(*(int *)(p + 0x180));
        func_001A7EC0(p, *(short *)(p + 0x188));
    } else {
        if (*(unsigned char *)(p + 0x18A) == 0) *(short *)(p + 0x188) = func_001A78C0(*(int *)(p + 0x180));
        func_001A7730(p, *(short *)(p + 0x188));
    }
}

char *func_001B0FD0(char *, int, int);

void func_00197000(char *p, char *q);

char *func_00196BF0(char *);

int func_00196CB0(char *, char *, int, int);

int func_001973C0(char *p, int w, int h) {
    void func_00130990(char *, int);
    int i;
    char *e;
    unsigned int sz;
    char **pp;
    short *ps;
    char *pb;
    int hb;
    int wb;
    i = 0;
    pp = (char **)p;
    ps = (short *)p;
    pb = p;
    hb = (h + 31) / 32;
    wb = (w + 7) / 8;
    for (; i < 2; i++, pp++, ps++, pb += 0x10) {
        if ((i ? h : w) > 0) {
            if ((e = func_00196BF0(D_006480D0)) == 0) return 0;
            *(short *)(e + 4) = 0;
            *(short *)(e + 8) = 1;
            sz = (i ? hb : wb) << 5;
            *(short *)(e + 0xA) = 0x40;
            *(short *)(e + 0xC) = sz;
            *(short *)(e + 0x38) = 0;
            *(short *)(e + 0x18) = -1;
            *(short *)(e + 0x14) = 0;
            *(short *)(e + 0x16) = 0;
            if ((unsigned char)func_00196CB0(D_006480D0, e, 0, 0) == 0) return 0;
            func_00197000(D_006480D0, e);
            *pp = e;
            ps[4] = 0;
            ps[6] = i ? h : w;
            sz = func_00196A20(*(short *)(e + 0xA), *(short *)(e + 0xC), *(short *)(e + 4));
            *(char **)(e + 0x10) = func_001B0FD0(pb + 0x10, sz, 1);
            if (*(char **)(e + 0x10) == 0) return 0;
            func_00130990(*(char **)(e + 0x10), sz >> 2);
        }
    }
    return 1;
}

int func_001A5870(char *);

int func_001A5100(char *p) {
    int func_001A97E0(char *);
    char *m = *(char **)(p + 0xC0);
    int fmt = func_001A97E0(m);
    int sz;
    int i;
    int k;
    int j;
    int q;
    int r;
    char *e;
    char *ent;
    sz = 0;
    sz += *(unsigned char *)(m + 0x10) * 0x340;
    for (i = 0; i < *(unsigned char *)(m + 0x10); i++) sz += *(unsigned char *)(m + i * 0x30 + 0x30) * 0x150;
    for (k = 0; k < 2; k++) {
        r = func_001A5870(p);
        if (r < 0) return -1;
        sz += r;
        sz += 0x50;
        sz += *(unsigned char *)(m + 0x11) * 64;
        for (j = 0; j < *(unsigned char *)(m + 0x10); j++) {
            ent = m + j * 0x30 + 0x30;
            sz += 0x40;
            for (q = 0; q < *(unsigned char *)ent; q++) {
                e = *(char **)(ent + 4) + q * 0x30;
                sz += 0x40;
                switch (fmt) {
                case 0x10000000:
                    sz += (*(unsigned short *)e + 0x2F) / 48 * 0x80;
                    break;
                case 0x20000000:
                    sz += (*(unsigned short *)e + 0x2F) / 48 * 0x90;
                    break;
                }
            }
        }
        sz += 0x40;
    }
    return sz;
}

void func_001A8420(unsigned int addr, unsigned long long *tag, int pri) {
    extern char D_00661660[];
    unsigned long long *ot;
    unsigned long long old;
    if (pri < 0) {
        pri = 30;
    } else if (pri > 30) {
        pri = 30;
    }
    ot = (unsigned long long *)((char *)((pri + 1) * 16) + (int)(D_00661660 + *(signed char *)(D_005BE0D8 + 0xE) * 512));
    old = *ot;
    *ot = ((unsigned long long)addr << 32) | 0x20000000;
    *tag = (((unsigned long long)(old >> 32)) << 32) | 0x20000000;
}

void func_001A8650(unsigned int addr, unsigned long long *tag, int pri) {
    extern char D_00661AE0[];
    unsigned long long *ot;
    unsigned long long old;
    if (pri < 0) {
        pri = 30;
    } else if (pri > 30) {
        pri = 30;
    }
    ot = (unsigned long long *)((char *)((pri + 1) * 16) + (int)(D_00661AE0 + *(signed char *)(D_005BE0D8 + 0xE) * 512));
    old = *ot;
    *ot = ((unsigned long long)addr << 32) | 0x20000000;
    *tag = (((unsigned long long)(old >> 32)) << 32) | 0x20000000;
}

void func_001A8880(unsigned int addr, unsigned long long *tag, int pri) {
    extern char D_00661F00[];
    unsigned long long *ot;
    unsigned long long old;
    if (pri < 0) {
        pri = 30;
    } else if (pri > 30) {
        pri = 30;
    }
    ot = (unsigned long long *)((char *)((pri + 1) * 16) + (int)(D_00661F00 + *(signed char *)(D_005BE0D8 + 0xE) * 512));
    old = *ot;
    *ot = ((unsigned long long)addr << 32) | 0x20000000;
    *tag = (((unsigned long long)(old >> 32)) << 32) | 0x20000000;
}

void func_001A81F0(unsigned int addr, unsigned long long *tag, int pri) {
    extern char D_00661A80[];
    unsigned long long *ot;
    unsigned long long old;
    if (pri < 0) {
        pri = 0;
    } else if (pri > 0) {
        pri = 0;
    }
    ot = (unsigned long long *)((char *)((pri + 1) * 16) + (int)(D_00661A80 + *(signed char *)(D_005BE0D8 + 0xE) * 32));
    old = *ot;
    *ot = ((unsigned long long)addr << 32) | 0x20000000;
    *tag = (((unsigned long long)(old >> 32)) << 32) | 0x20000000;
}

int func_0019E730(char *p) {
    int func_0019E4C0(char *);
    if (0.0f == *(float *)(p + 0x38) || 0.0f == (float)*(short *)(p + 0x5A)) {
        *(short *)(p + 0xE) = 0;
        return 0;
    }
    *(float *)(p + 0x28) = 1.0f / *(float *)(p + 0x38) * *(float *)(p + 0x70);
    return func_0019E4C0(p);
}

int func_00196F20(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int v0;
    int v2;
    int v1;
    int tmp0;
    int tmp1;
    tmp0 = 20;
    if (tmp0 != p1) {
        if (p1 != 19) {
            tmp1 = 2;
            if (p1 != tmp1) {
                switch (p1) {
                case 0:
                case 1:
                    p1 = 64;
                    v2 = 32;
                    break;
                }
            } else {
                p1 = 64;
                v2 = p1;
            }
        } else {
            p1 = 128;
            v2 = 64;
        }
    } else {
        p1 = 128;
        v2 = p1;
    }
    v0 = (p2 / p1);
    if ((p2 % p1) != 0) {
        v0 = (v0 + 1);
    }
    v1 = (p3 / v2);
    if ((p3 % v2) != 0) {
        v1 = (v1 + 1);
    }
    v1 = (v1 * v0);
    return v1;
}

int func_001971F0(p0) char *p0; {
    int func_00196C40();
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    char *v5;
    v0 = p0;
    v1 = 0;
    if ((0 < (*(int *)(p0 + 256) * *(int *)(p0 + 260)))) {
        v2 = v0;
        do {
            v3 = func_00196C40(D_006480D0, *(int *)(v2 + 0));
            v1 = (v1 + 1);
            v2 = (v2 + 4);
        } while ((v1 < (*(int *)(v0 + 256) * *(int *)(v0 + 260))));
    }
    v4 = 0;
    v5 = v0;
    do {
        *(int *)(v5 + 0) = 0;
        *(int *)(v5 + 4) = 0;
        v4 = (v4 + 8);
        *(int *)(v5 + 8) = 0;
        *(int *)(v5 + 12) = 0;
        *(int *)(v5 + 16) = 0;
        *(int *)(v5 + 20) = 0;
        *(int *)(v5 + 24) = 0;
        *(int *)(v5 + 28) = 0;
        v5 = (v5 + 32);
    } while ((v4 < 64));
    *(int *)(v0 + 260) = 0;
    *(int *)(v0 + 256) = 0;
    return v3;
}

int func_00199090(p0, p1) char *p0; int p1; {
    char *tmp1;
    tmp1 = *(char **)(*(char **)(p0 + 192) + 28);
    *(char **)(p0 + 4) = (*(char **)(*(char **)(p0 + 192) + 28) + *(int *)(*(char **)(*(char **)(p0 + 192) + 28) + 0));
    *(char **)(p0 + 8) = (tmp1 + *(int *)(tmp1 + 4));
    *(char **)(p0 + 12) = (tmp1 + *(int *)(tmp1 + 8));
    *(char **)(p0 + 16) = (tmp1 + *(int *)(tmp1 + 12));
    *(int *)(p0 + 264) = p1;
    p1 = (p1 + (*(unsigned short *)(p0 + 170) << 6));
    *(int *)(p0 + 0) = p1;
    p1 = (p1 + (*(unsigned short *)(p0 + 170) * 144));
    return p1;
}

int func_0019A090();

int func_0019A040(p0) int p0; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = 0;
    do {
        v2 = func_0019A090(v0, (v1 & 65535));
        v1 = (v1 + 1);
    } while ((v1 < 2));
    return v2;
}

int func_00199710();

int func_0019C480(p0, p1) int p0; char *p1; {
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    int tmp4;
    int tmp5;
    int tmp6;
    int tmp7;
    v0 = p1;
    v1 = *(char **)(*(char **)(p1 + 24) + 4);
    v2 = 0;
    if ((0 < *(unsigned char *)(p1 + 12))) {
        v4 = 0;
        do {
            tmp0 = (*(int *)(v0 + 28) + v4);
            *(char **)((char *)(*(int *)(v0 + 28) + v4) + 12) = v1;
            *(int *)((char *)tmp0 + 4) = *(unsigned short *)(v1 + 0);
            *(int *)((char *)tmp0 + 8) = *(unsigned short *)(v1 + 2);
            tmp4 = *(int *)(v1 + 12);
            *(int *)((char *)tmp0 + 260) = *(int *)(v1 + 12);
            *(int *)((char *)tmp0 + 256) = tmp4;
            *(int *)((char *)tmp0 + 312) = tmp4;
            tmp5 = *(int *)(v1 + 16);
            *(int *)((char *)tmp0 + 268) = *(int *)(v1 + 16);
            *(int *)((char *)tmp0 + 264) = tmp5;
            tmp6 = *(int *)(v1 + 20);
            *(int *)((char *)tmp0 + 276) = *(int *)(v1 + 20);
            *(int *)((char *)tmp0 + 272) = tmp6;
            tmp7 = *(int *)(v1 + 32);
            *(int *)((char *)tmp0 + 300) = *(int *)(v1 + 32);
            *(int *)((char *)tmp0 + 296) = tmp7;
            v3 = func_00199710(tmp0);
            v2 = (v2 + 1);
            v4 = (v4 + 336);
            v1 = (v1 + *(int *)(v1 + 24));
        } while ((v2 < *(unsigned char *)(v0 + 12)));
    }
    return v3;
}

int func_0019F220();

int func_0019F0A0(p0, p1, p2) int p0; char *p1; int p2; {
    char *v0;
    int v1;
    v0 = (char *)((p2 << 1) + (int)p1);
    v0 = (char *)*(short *)(v0 + 4);
    if (((int)v0 < *(short *)(*(char **)(p1 + 32) + 2))) {
        v1 = func_0019F220(p0, p1, p2, v0);
    }
    return v1;
}

int func_001A26C0();

int func_001A2670(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A26C0((*(int *)(p0 + 188) + (p1 * 832)), p2);
    }
    return v0;
}

void func_001A2970(p0) char *p0; {
    int v0;
    int v1;
    int tmp0;
    v0 = *(int *)(p0 + 160);
    tmp0 = (v0 & 0x10000);
    v1 = 0xfffe0000;
    if (tmp0 != 0) {
        *(int *)(p0 + 160) = (v0 & (v1 | 65535));
        *(char *)(p0 + 113) = 0;
        *(char *)(p0 + 112) = 0;
    }
}

int func_001A3030();

int func_001A2F20(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A3030((*(int *)(p0 + 188) + (p1 * 832)), p2);
    }
    return v0;
}

int func_001A2FE0(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A3030((*(int *)(p0 + 188) + (p1 * 896)), p2);
    }
    return v0;
}

int func_001A4140();

int func_001A4050(p0, p1, p2, p3) char *p0; int p1; int p2; int p3; {
    int v2;
    int v0;
    int v1;
    char *v3;
    v0 = *(unsigned char *)(p0 + 12);
    v2 = 0;
    if ((0 < v0)) {
        v3 = *(char **)(p0 + 28);
        do {
            if (*(int *)(v3 + 8) == p1) {
                v1 = func_001A4140(v3, p2, p3);
                break;
            }
            v2 = (v2 + 1);
            v3 = (v3 + 336);
        } while ((v2 < v0));
    }
    return v1;
}

int func_001A4A30();

int func_001A49D0(p0, p1, p2, p3) char *p0; int p1; int p2; int p3; {
    int v2;
    int v0;
    int v1;
    char *v3;
    v0 = *(unsigned char *)(p0 + 12);
    v2 = 0;
    if ((0 < v0)) {
        v3 = *(char **)(p0 + 28);
        do {
            if (*(int *)(v3 + 8) == p1) {
                v1 = func_001A4A30(v3, p2, p3);
                break;
            }
            v2 = (v2 + 1);
            v3 = (v3 + 336);
        } while ((v2 < v0));
    }
    return v1;
}

int func_001AA220();

int func_001AA600(p0, p1, p2) char *p0; int p1; int p2; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = p0;
    v1 = p1;
    v2 = p2;
    v3 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        v5 = 0;
        do {
            v4 = func_001AA220((*(int *)(v0 + 188) + v5), v1, v2);
            v3 = (v3 + 1);
            v5 = (v5 + 896);
        } while ((v3 < *(unsigned short *)(v0 + 168)));
    }
    return v4;
}

void func_00195F50(void *p) {
    extern void func_00130990(); func_00130990(p, 12492); }

extern void func_00199740();

void func_00199720(void) { func_00199740(); }

extern void func_00199840();

void func_00199730(void) { func_00199840(); }

void func_001A1F80(char *p0) {
    int t0;
    t0 = (*(int *)(p0 + 0) | 1);
    *(int *)(p0 + 0) = (*(int *)(p0 + 0) | 1);
}

void func_001A2100(char *p0) {
    int t0;
    int t1;
    t0 = *(int *)(p0 + 0);
    t1 = (*(int *)(p0 + 0) & -2);
    *(int *)(p0 + 0) = (*(int *)(p0 + 0) & -2);
}

int func_001A2170(char *p0) {
    return ((unsigned int)0 < (unsigned int)(*(int *)(p0 + 0) & 1));
}

void func_001A2E80(char *p0, int p1) {
    *(int *)(p0 + 304) = (p1 & 255);
    *(int *)(p0 + 308) = (((unsigned int)p1 >> 8) & 255);
    *(int *)(p0 + 312) = (((unsigned int)p1 >> 16) & 255);
}

void func_001A31F0(char *p0) {
    int t0;
    int t1;
    int t2;
    t0 = (*(int *)(p0 + 0) | 512);
    *(int *)(p0 + 0) = (*(int *)(p0 + 0) | 512);
    t1 = *(int *)(p0 + 20);
    t2 = (*(int *)(p0 + 20) | 0x20000);
    *(int *)(p0 + 20) = (*(int *)(p0 + 20) | 0x20000);
}

void func_001A3360(char *p0) {
    int t0;
    t0 = (*(int *)(p0 + 0) | 18);
    *(int *)(p0 + 0) = (*(int *)(p0 + 0) | 18);
}
