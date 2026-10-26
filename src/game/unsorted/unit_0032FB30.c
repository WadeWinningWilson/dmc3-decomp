int func_0013D670(char *);

int func_0032FCD0(char *, int);

int func_0032FD00(char *, int);

int func_0032FD90(char *, char *);

void func_001282D0(int, char *, int);

void func_002F9790(char *, int, int);

void func_002F9780(char *, int, int);

void func_002F97B0(char *, int, char *, int, int);

static inline char *ent32F(char *t, int i) {
    if (*(unsigned int *)(t + 4) < i + 1) return 0;
    if (*(int *)(t + 8 + i * 4) == 0) return 0;
    return t + *(int *)(t + 8 + i * 4);
}

static inline char *chk32F(char *h, int i) {
    if (**(unsigned short **)(h + 8) == 0) return ent32F(*(char **)(h + 0xC), i);
    return *(char **)(h + 0xC);
}

static inline int csz32F(char *h, int i) {
    int n;
    char *t;
    char *a;
    char *b;
    int r;
    if (**(unsigned short **)(h + 8) == 0) {
        t = *(char **)(h + 0xC);
        n = *(int *)(t + 4);
        if (i >= n) return 0;
        a = ent32F(t, i);
        if (n - 1 == i) b = *(char **)(h + 0xC) + func_0013D670(h + 0x10);
        else b = ent32F(t, i + 1);
        return b - a;
    }
    return func_0013D670(h + 0x10);
}

void func_0032FDB0(char *a, int b, char *h) {
    int sz;
    char *d;
    int r;
    sz = csz32F(h, 0);
    d = chk32F(h, 0);
    r = func_0032FCD0(a, b);
    func_001282D0(r, d, sz);
    func_002F9790(a, b, r);
    sz = csz32F(h, 1);
    d = chk32F(h, 1);
    r = func_0032FD00(a, b);
    func_001282D0(r, d, sz);
    func_002F9780(a, b, r);
    r = func_0032FD90(a, d);
    func_002F97B0(a, b, chk32F(h, 2), r, 0);
}

int func_003303A0(char *p, int k) {
    int i;
    if (k == -1) {
        return -1;
    }
    for (i = 0; i < 4; i++) {
        if (k == *(signed char *)(p + i + 0x114)) {
            return i + 3;
        }
    }
    return -1;
}

extern char D_01CAFF0C[];

extern int D_0055BF10[];

void func_003303F0(int, int, unsigned int, int, int);

void func_00330C50(int p, unsigned int n, int a, int k) {
    unsigned int v;
    if (n < 20) {
        v = n;
    } else {
        v = n + D_0055BF10[k] - 20;
    }
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 52) != 0 && !(n < 20) && n < 50) {
        v += 30;
    }
    func_003303F0(p, 7, v, 0, k);
}

extern unsigned char D_0055B9A0[];

void func_00330B50(char *, int, char *, int);

void func_00330BD0(char *, int, char *, int, int);

void func_00330E30(char *d, int k, char *pos) {
    void func_003305E0(char *, int, int, char *, int, int, int);
    unsigned int func_00331040(char *, int);
    unsigned char *e = D_0055B9A0 + k * 16;
    unsigned int r = func_00331040(d, 100);
    unsigned int acc = 0;
    unsigned int i;
    int t;
    for (i = 0; i < 4; i++, e += 4) {
        acc += e[0];
        if (r < acc) {
            t = e[1];
            if (t == 0) {
                func_003305E0(d, 0, *(unsigned short *)(e + 2), pos, 0, 0, 0);
                return;
            }
            if (t == 1) {
                func_003305E0(d, 1, *(unsigned short *)(e + 2), pos, 0, 0, 0);
                return;
            }
            if (t == 2) {
                func_003305E0(d, 2, *(unsigned short *)(e + 2), pos, 0, 0, 0);
                return;
            }
            if (t == 3) {
                func_003305E0(d, 8, *(unsigned short *)(e + 2), pos, 0, 0, 0);
                return;
            }
            if (t >= 4 && t < 0x13) {
                func_00330B50(d, *(unsigned short *)(e + 2), pos, t - 4);
                return;
            }
            if (t >= 0x13 && t < 0x37) {
                func_00330BD0(d, *(unsigned short *)(e + 2), pos, t - 0x13, 0);
                return;
            }
        }
    }
}

int func_00352CA0(void);

long long func_00331010(void) {
    return func_00352CA0();
}

void func_00330DA0(char *p, int k, int c, int d) {
    void func_003305E0(char *, int, int, int, int, int, int);
    int n;
    if (c != 0) {
        switch (k) {
        case 0:
            n = 10;
            break;
        case 1:
            n = 11;
            break;
        case 2:
            n = 12;
            break;
        case 3:
            n = 13;
            break;
        default:
            return;
        }
        func_003305E0(p, 8, n, d, c, 0, c);
    }
}

int func_00124EC0(int);

void func_002F9860(char *, int, int, int);

void func_003310C0(char *p) {
    func_002F9860(p, 1, 0, (func_00124EC0(-0x3F80) << 16) / 125);
    func_002F9860(p, 2, 0, (func_00124EC0(-0x3F80) << 16) / 125);
    func_002F9860(p, 7, 0, (func_00124EC0(-0x3F80) << 16) / 125);
    func_002F9860(p, 8, 0, (func_00124EC0(-0x3F80) << 16) / 125);
}

void func_003311E0(char *p) {
    func_002F9860(p, 1, 0x7F, (func_00124EC0(-0x3F80) << 16) / 125);
    func_002F9860(p, 2, 0x7F, (func_00124EC0(-0x3F80) << 16) / 125);
    func_002F9860(p, 7, 0x7F, (func_00124EC0(-0x3F80) << 16) / 125);
    func_002F9860(p, 8, 0x7F, (func_00124EC0(-0x3F80) << 16) / 125);
}

extern char D_01DFABA0[];

void func_002F9680(int *);

char *func_001B0EE0(int);

void func_002F96C0(char *, void (*)(void));

void func_0032F910(void);

long long func_00117930(void);

void func_00331000(char *, int);

void func_002F9830(char *, int, int);

void func_0032FB30(char *p) {
    extern int D_005BE14C;
    extern int D_0059DA30[];
    extern int D_0059DA70[];
    unsigned int i;
    func_002F9680(&D_005BE14C);
    {
    float z[4] __attribute__((aligned(16))) = { 0 };
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x10), "r"(z) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x20), "r"(z) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x30), "r"(z) : "memory");
    *(char **)(p + 0x90) = func_001B0EE0(0x800);
    for (i = 0; i < 16; i++) {
        if (D_0059DA30[i] != 0) ((char **)(p + 0x94))[i] = func_001B0EE0(D_0059DA30[i]);
        if (D_0059DA70[i] != 0) ((char **)(p + 0xD4))[i] = func_001B0EE0(D_0059DA70[i]);
    }
    func_002F96C0(D_01DFABA0, func_0032F910);
    func_00331000(p, (int)func_00117930());
    func_002F9830(p, 0, 0xFC0);
    func_002F9830(p, 1, 0xFCF);
    }
}

void func_00331350(char *p) {
    func_002F9860(p, 1, 0, (func_00124EC0(-0x3F80) << 16) / 250);
    func_002F9860(p, 2, 0, (func_00124EC0(-0x3F80) << 16) / 250);
    func_002F9860(p, 7, 0, (func_00124EC0(-0x3F80) << 16) / 250);
    func_002F9860(p, 8, 0, (func_00124EC0(-0x3F80) << 16) / 250);
    func_002F9860(p, 8, 0, (func_00124EC0(-0x3F80) << 16) / 250);
}

void func_00131650(char *, char *);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

extern V4 D_0055C280;

void func_00330140(char *o, char *a, char *b, char *c) {
    V4 t;
    t = D_0055C280;
    func_00131650(b, b);
    func_00131650(c, c);
    QCOPY(o + 0x10, a);
    QCOPY(o + 0x20, b);
    QCOPY(o + 0x40, c);
    QCOPY(o + 0x30, &t);
}

void func_00330CC0(char *p, unsigned int k, int a, int b) {
    void func_003305E0(char *, int, int, int, int, int, int);
    int func_00331040(char *, int);
    int v;
    if (*(unsigned char *)(p + 0x118) == 0 && a != 0) {
        switch (k) {
        case 0: v = func_00331040(p, 2); break;
        case 1: v = func_00331040(p, 2) + 2; break;
        case 2: v = func_00331040(p, 2) + 4; break;
        case 3: v = func_00331040(p, 2) + 6; break;
        case 4: v = 8; break;
        case 5: v = 9; break;
        default: return;
        }
        func_003305E0(p, 8, v, b, a, 0, 0);
    }
}

void func_002FAB20();

void func_00331080(void) {
    func_002FAB20(1);
    func_002FAB20(2);
    func_002FAB20(7);
    func_002FAB20(8);
}

void func_002F9870();

void func_00331300(int p0) {
    func_002F9870(p0, 1);
    func_002F9870(p0, 2);
    func_002F9870(p0, 7);
    func_002F9870(p0, 8);
}

void func_003314B0(int p0) {
    func_002FAB20(1);
    func_002FAB20(2);
    func_002FAB20(7);
    func_002FAB20(8);
    func_002F9870(p0, 1);
    func_002F9870(p0, 2);
    func_002F9870(p0, 7);
    func_002F9870(p0, 8);
}

int func_0032FD30(p0, p1) int p0; int p1; {
    extern char D_0059DA30[];
    int v0;
    if ((unsigned int)p1 >= (unsigned int)16) {
        return 0;
    } else {
        v0 = *(int *)((D_0059DA30 + (p1 << 2)) + 0);
        return v0;
    }
}

int func_0032FD60(p0, p1) int p0; int p1; {
    extern char D_0059DA70[];
    int v0;
    if ((unsigned int)p1 >= (unsigned int)16) {
        return 0;
    } else {
        v0 = *(int *)((D_0059DA70 + (p1 << 2)) + 0);
        return v0;
    }
}

void func_002F9850();

void func_0032FDA0() {
    extern char D_005BE14C;
    func_002F9850(&D_005BE14C);
}

void func_002F9810();

void func_00330FE0(p0, p1) int p0; char *p1; {
    func_002F9810(p0, *(unsigned char *)(p1 + 0), *(unsigned char *)(p1 + 1), *(short *)(p1 + 2), 0, 0);
}

/* AUTO-GENERATED by tools/gen_trivial.py from the original asm, then
 * verified byte-for-byte; only matching functions are kept. Types are
 * placeholders (offset-based); move functions to their real TUs as they
 * are identified. */
extern void func_00105300();

void func_003301F0(char *p) { func_00105300(p + 80); }

int func_0032FCC0(char *p) { return *(int *)(p + 144); }

void func_00331530(char *p) { *(char *)(p + 280) = 0; }

void func_00331520(char *p0) {
    *(char *)(p0 + 280) = 1;
}
