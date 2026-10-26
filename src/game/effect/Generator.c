void func_001AD140(char *);

void func_001AD100(char *);

int func_00207060(char *);

extern signed char D_005BE0B4;

void func_001B2780(char *p) {
    func_001AD100(p);
    if (func_00207060(p) != 0) {
        func_001AD140(p);
    } else if (D_005BE0B4 != 0) {
        func_001AD140(p);
    } else {
        *(volatile unsigned char *)(p + 0x39);
    }
}

extern char D_01DF6260[];

int func_001FEFB0(char *, int);

char *func_001B4320(int, int, int, int, int, float, int);

char *func_001B4260(int a, int b, int id, int c, int d, float f, int e) {
    int h = func_001FEFB0(D_01DF6260, id);
    char *o;
    if (h == 0) {
        return 0;
    }
    o = func_001B4320(a, b, h, c, d, f, e);
    if (o != 0) {
        *(char *)(o + 60) = 0;
        *(short *)(o + 62) = id;
    }
    return o;
}

float func_001B28D0(char *p) {
    char *o = *(char **)(p + 0x114);
    if (*(unsigned char *)(o + 0x30) != 1) {
        return (float)*(int *)(o + 0x20);
    }
    return 1000000.0f;
}

long long func_001B31A0(int a, char *b) {
    return ((long long)(*(short *)(b + 0xA) - 1) << 14) | 0xA | ((long long)(*(short *)(b + 0xC) - 1) << 34);
}

extern char *D_005BE09C;

void func_00105300(char *, char *);

void func_00104E78(char *, char *);

void func_001B3AE0(int unused, char *q) {
    func_00105300(q, D_005BE09C + 0x100);
    *(int *)(q + 0x30) = 0;
    *(int *)(q + 0x34) = 0;
    *(int *)(q + 0x38) = 0;
    func_00104E78(q, q);
}

char *func_0021B0B0(char *p, short k);

extern char D_01DF8A00[];

extern unsigned int D_01DF8810[];

extern unsigned int D_01DF7E50[];

void func_00207A90(unsigned int *);

void func_001F7350(char *, float, char *);

static inline unsigned int mt1B1(void) {
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

void func_001B16B0(char *p) {
    char *d;
    float f;
    int n;
    int m;
    p[0x39] = 0;
    *(float *)(p + 0xC0) = (float)*(int *)(*(char **)(p + 0x114) + 0x20);
    *(float *)(p + 0xBC) = (float)*(int *)(*(char **)(p + 0x114) + 0x18);
    d = *(char **)(p + 0x114);
    switch (*(unsigned char *)(d + 1)) {
    case 0:
        *(float *)(p + 0xB0) = *(float *)(d + 4);
        *(float *)(p + 0xA0) = 0.0f;
        *(float *)(p + 0xA4) = 0.0f;
        *(float *)(p + 0xA8) = 0.0f;
        *(float *)(p + 0xAC) = 1.0f;
        break;
    case 1:
        *(char **)(p + 0x110) = func_0021B0B0(D_01DF8A00, *(short *)(d + 2));
        if (*(char **)(p + 0x110) == 0) {
            func_001AD140(p);
            return;
        }
        *(float *)(p + 0xB0) = 0.0f;
        func_001F7350(*(char **)(p + 0x110), *(float *)(p + 0xB0), p + 0xA0);
        break;
    case 2:
        *(float *)(p + 0xB0) = 0.0f;
        *(float *)(p + 0xA0) = 0.0f;
        *(float *)(p + 0xA4) = 0.0f;
        *(float *)(p + 0xA8) = 0.0f;
        *(float *)(p + 0xAC) = 1.0f;
        break;
    }
    *(float *)(p + 0xB4) = 0.0f;
    d = *(char **)(p + 0x114);
    if (*(unsigned short *)(d + 0x40) > 0) {
        f = *(float *)(d + 0x54) - *(float *)(d + 0x50);
        n = (int)f;
        if (n != 0) {
            if (n > 0) {
                m = (int)(10.0f * f);
                m = m < 0 ? -m : m;
                *(float *)(p + 0xB8) = 0.1f * (float)(mt1B1() % (unsigned int)m);
            } else {
                m = (int)(10.0f * f);
                m = m < 0 ? -m : m;
                *(float *)(p + 0xB8) = -0.1f * (float)(mt1B1() % (unsigned int)m);
            }
        } else {
            *(float *)(p + 0xB8) = 1.0f;
        }
    } else {
        *(float *)(p + 0xB8) = 1.0f;
    }
}

short func_001EBDE0(char *);

int func_001EBDD0(char *);

void func_001EBE00(char *, char *, int);

void func_001B32F0(char *, char *);

static inline unsigned int mt_next(void) {
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

void func_001B31E0(char *p, unsigned char a) {
    char buf[16];
    if (a == 1) {
        unsigned int r = mt_next();
        func_001EBE00(p + 0x134, buf, (short)(r % func_001EBDE0(p + 0x134)));
    } else {
        func_001EBE00(p + 0x134, buf, func_001EBDD0(p + 0x134));
    }
    func_001B32F0(p, buf);
}

extern char D_01C60F80[];

void func_001B2A80(unsigned int a, unsigned long long *out, unsigned int b, unsigned int k) {
    extern char *D_005BE0D8;
    unsigned long long *e;
    unsigned long long old;
    if (!(k + 1 < 0x40)) {
        k = 0x3E;
    }
    e = (unsigned long long *)((k + 1) * 16 + (D_01C60F80 + (*(signed char *)(D_005BE0D8 + 0xE) << 10)));
    old = *e;
    *e = ((unsigned long long)a << 32) | 0x20000000;
    *out = (unsigned int)(b | 0x20000000) | ((unsigned long long)(old >> 32) << 32);
}

int func_001B3B30(char *, char *, int, int, unsigned int *);

void func_001B41B0(char *a, char *o, unsigned int k) {
    extern char *D_005BE0D8;
    unsigned long long *e;
    unsigned int t;
    unsigned long long hi;
    if (!(k + 1 < 0x40)) {
        k = 0x3E;
    }
    e = (unsigned long long *)((k + 1) * 16 + (D_01C60F80 + (*(signed char *)(D_005BE0D8 + 0xE) << 10)));
    hi = *e >> 32;
    if (func_001B3B30(a, o, *(short *)(o + 0x18) < 0 ? 0 : 2, (int)hi, &t)) {
        *e = ((unsigned long long)t << 32) | 0x20000000;
    }
}

void func_00134DE0();

void func_001B3390();

void func_001B34C0();

void func_001B35B0(void) {
    extern char * D_005BE0D8;
    char *t0;
    char *t1;
    int t2;
    func_001B3390();
    func_001B34C0();
    t0 = ((D_01C60F80 + (*(signed char *)(D_005BE0D8 + 14) << 10)) + 1008);
    t1 = (D_01C60F80 + (*(signed char *)(D_005BE0D8 + 14) << 10));
    t2 = (*(signed char *)(D_005BE0D8 + 14) << 10);
    func_00134DE0(((D_01C60F80 + (*(signed char *)(D_005BE0D8 + 14) << 10)) + 1008), (D_01C60F80 + (*(signed char *)(D_005BE0D8 + 14) << 10)), 14);
}

int func_00104B80();

void func_00131700();

int func_001B27F0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2) {
    char stk[0x60] __attribute__((aligned(16)));
    int tmp0;
    *(int *)((stk + -32) + 124) = 0x3f800000;
    *(int *)((stk + -32) + 108) = 0x3f800000;
    *(int *)((stk + -32) + 116) = 0;
    *(int *)((stk + -32) + 120) = 0;
    *(int *)((stk + -32) + 96) = 0;
    *(float *)((stk + -32) + 112) = f0;
    *(float *)((stk + -32) + 100) = (6.283185005187988f * (f1 / 360.0f));
    *(float *)((stk + -32) + 104) = (6.283185005187988f * (f2 / 360.0f));
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -32) + 32)) : "memory");
    func_00131700(((stk + -32) + 32), ((stk + -32) + 32), ((stk + -32) + 96));
    tmp0 = func_00104B80(p1, ((stk + -32) + 32), ((stk + -32) + 112));
    return tmp0;
}

void func_001B28A0(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = *(unsigned char *)(p0 + 58);
    v0 = 2;
    if (tmp0 == 0) {
        *(char *)(p0 + 56) = v0;
    } else {
        *(char *)(p0 + 56) = 3;
    }
}

extern int D_005BE0B8;

void func_001B2A50(p0) char *p0; {
    if (*(unsigned char *)(p0 + 24) == 4) {
        D_005BE0B8 = (D_005BE0B8 + -1);
    }
}

extern char D_01DF7A30[];

int func_00206C20();

int func_001B3090(p0, p1) int p0; int p1; {
    char stk[0x40] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    v1 = func_00206C20(D_01DF7A30, ((stk + -32) + 32), p1);
    tmp0 = (v1 & 255);
    v2 = 64;
    if (tmp0 == 0) {
        *(short *)(v0 + 272) = v2;
        *(short *)(v0 + 274) = v2;
    } else {
        *(short *)(v0 + 272) = *(short *)((stk + -32) + 44);
        *(short *)(v0 + 274) = *(short *)((stk + -32) + 46);
    }
    return v1;
}

void func_001B2890(void) {}

void func_001B2990(void) {}

int func_001B29B0(void) { return 1; }

int func_001B3080(void) { return -1; }

extern char D_005BE0BC;

int func_001B29A0(void) {
    D_005BE0BC = 0;
    return 1;
}
