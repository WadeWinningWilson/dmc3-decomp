void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_004E1D40(char *);

char *func_004E1BE0(char *p, char *s, unsigned char c) {
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
    **q = func_001B0FD0(a, 0x750, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x750, t);
        if (r != 0) {
            func_004E1D40(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
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
        *(char **)(ret + 0x744) = p;
        *(char **)(ret + 0x740) = s;
        *(unsigned char *)(ret + 0x641) = c;
        *(signed char *)(ret + 0x44) = -1;
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

extern char D_005B9CA0[];

extern char D_005B9CC4[];

extern char D_005B9D44[];

void func_00252FA0(char *);

void func_002E7840(char *);

void func_0028C110(char *);

char *func_004E0880(char *p) {
    int i;
    func_00252FA0(p);
    *(char **)p = D_005B9CA0;
    *(char **)(p + 0x40) = D_005B9CC4;
    *(char **)(p + 0xA0) = D_005B9D44;
    *(unsigned char *)(p + 0x240) = 0;
    *(unsigned char *)(p + 0x241) = 0;
    *(short *)(p + 0x242) = 0;
    *(int *)(p + 0x248) = 0;
    *(int *)(p + 0x24C) = 0;
    *(int *)(p + 0x250) = 0;
    *(int *)(p + 0x260) = 0;
    *(int *)(p + 0x264) = 0;
    *(int *)(p + 0x268) = 0;
    *(float *)(p + 0x26C) = 1.0f;
    *(float *)(p + 0x270) = 100000.0f;
    *(unsigned char *)(p + 0x274) = 0;
    *(unsigned char *)(p + 0x275) = 0;
    *(short *)(p + 0x276) = 0;
    for (i = 0; i < 10; i++) {
        *(short *)(p + i * 2 + 0x278) = -1;
    }
    func_002E7840(p + 0x2A0);
    func_0028C110(p + 0x340);
    return p;
}

extern char D_01CAFF0C[];

int func_0024E800(char *);

int func_0021D320(char *, int, int, int, int);

void func_004E1990(char *p) {
    void func_001AD140(char *);
    void func_00206730(char *);
    char *g;
    char *e;
    unsigned char c;
    g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    if (g == 0) return;
    *(float *)(g + 0x54) = *(float *)(g + 0x54) + *(float *)(p + 0x238);
    *(float *)(p + 0x238) = *(float *)(p + 0x238) - 0.2f;
    if (*(float *)(p + 0x238) < -20.0f) *(float *)(p + 0x238) = -20.0f;
    e = g + *(unsigned char *)(g + 0x28A0) * 0x1A0 + 0x41F0;
    c = func_0021D320(g, 0, *(unsigned char *)(p + 0x22C), 0, 5);
    if (func_0024E800(e) != 0) {
        func_0021D320(g, 0, *(unsigned char *)(p + 0x22C), 1, 5);
        func_00206730(p + 0x560);
        if (*(char **)(p + 0x560) != 0) func_001AD140(*(char **)(p + 0x560));
        func_001AD140(p);
    } else {
        if (c == 0) {
            func_001AD140(p);
            return;
        }
    }
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern int D_00573310[];

void func_004E1520(char *p) {
    void func_001AD140(char *);
    float m[16] __attribute__((aligned(16)));
    char *g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    char *e;
    unsigned char r;
    if (g == 0) return;
    e = g + *(unsigned char *)(g + 0x28A0) * 0x1A0 + 0x41F0;
    *(float *)(g + 0x54) = *(float *)(g + 0x54) + *(float *)(p + 0x238);
    *(float *)(p + 0x238) = *(float *)(p + 0x238) - 10.0f;
    if (*(float *)(p + 0x238) < -30.0f) {
        *(float *)(p + 0x238) = -30.0f;
    }
    *(float *)(p + 0x224) = *(float *)(p + 0x224) - *(float *)(p + 0x10);
    r = func_0021D320(g, 0, *(unsigned char *)(p + 0x22C), 0, 0);
    if (*(char **)(p + 0x220) != 0) {
        *(unsigned char *)(*(char **)(p + 0x220) + 0x36E1) = 1;
    }
    UNIT(m);
    if (func_0024E800(e) != 0) {
        *(short *)(p + 0x230) = D_00573310[*(signed char *)(p + 0x22D)];
        *(float *)(p + 0x228) = 10.0f;
        *(int *)(p + 0x234) = 1;
        (*(unsigned char *)(p + 4))++;
    }
    if (r == 0 || *(float *)(p + 0x224) < 0.0f) {
        func_001AD140(p);
    }
}

void func_003F3A90();

void func_004E1B60(int p0) {
    void func_00206730();
    func_003F3A90((p0 + 544));
    func_00206730((p0 + 1380));
    func_00206730((p0 + 1376));
}

int func_004E1B10(p0) int p0; {
    int func_001AD140();
    int func_00206730();
    int v0;
    int v1;
    v1 = func_00206730((p0 + 1376));
    v0 = *(int *)((char *)p0 + 1376);
    if (v0 != 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

void func_004E1AD0(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_004E0C90();

void func_004E1BA0(char *p) { func_004E0C90(p + -64); }

extern void func_004E1B50();

void func_004E1BB0(char *p) { func_004E1B50(p + -64); }

extern void func_004E0950();

void func_004E1BC0(char *p) { func_004E0950(p + -64); }

void func_004E1BD0(char *p) { func_004E0950(p + -160); }

void func_004E1AE0(void) {}

void func_004E1AF0(void) {}

void func_004E1B00(void) {}

void func_004E1AC0(char *p0) {
    unsigned char t0;
    t0 = (*(unsigned char *)(p0 + 4) + 1);
    *(char *)(p0 + 4) = (*(unsigned char *)(p0 + 4) + 1);
}
