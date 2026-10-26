extern char D_005BE098[4];

void func_001AD140(char *);

void func_00195E20(char *, char *);

static inline unsigned char is_zero8(char *q) {
    return *(unsigned char *)q == 0;
}

void func_001F87B0(char *, int, char *, float);

void func_001B3600(char *, char *, char *, char *);

void func_001BE070(char *p) {
    char *t = *(char **)(p + 1088);
    char *o;
    float dt = *(float *)(*(char **)(p + 1184) + 16);
    *(float *)(p + 16) = dt;
    *(float *)(p + 188) += dt;
    o = *(char **)(p + 1184);
    if (is_zero8(o + 56) != 1) {
        func_001AD140(p);
    } else if (*(unsigned char *)(o + 57) == 0) {
        func_001F87B0(p + 1092, 3, o, *(float *)(p + 16));
        func_001B3600(p, t + 48, t + 54, t + 60);
        if (*(float *)(*(char **)(p + 1184) + 64) <= 0.0f && *(unsigned char *)(p + 59) == 0) {
            func_00195E20(D_005BE098, p);
        }
    }
}

float func_0011D798(float);

extern char *D_005BE0D8;

float func_0011DA38(float);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_001B43C0(char *, int, int);

void func_001F8910(char *, char *, char *, char *, int, int, float);

void func_001BD790(char *p) {
    char *d;
    int i;
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    func_001B43C0(p, 1, 0x10);
    d = *(char **)(p + 0x440);
    QCOPY(p + 0xD0, d + 0x20);
    QCOPY(p + 0xE0, d + 0x30);
    QCOPY(p + 0xF0, d + 0x40);
    *(float *)(p + 0x460) = (float)*(int *)(d + 0x68);
    *(unsigned char *)(p + 0x454) = 0;
    *(char **)(p + 0x45C) = d + 0x6C;
    *(float *)(p + 0x458) = (float)*(short *)(d + 0x6C);
    *(unsigned char *)(p + 0x455) = 0;
    func_001F8910(p + 0x444, p + 0x444, *(char **)(p + 0x45C), *(char **)(p + 0x45C) + 0x14, 4, 4, 0.0f);
    *(float *)(p + 0x990) = *(float *)(d + 0xD0);
    *(float *)(p + 0x994) = *(float *)(d + 0xD4);
    i = 0;
    d = p + *(signed char *)(D_005BE0D8 + 0xE) * 0x270 + 0x4D0;
    while (i < *(unsigned char *)(p + 0xA1)) {
        ((float *)d)[0] = 0.0f;
        ((float *)d)[1] = 0.0f;
        ((float *)d)[2] = 0.0f;
        ((float *)d)[3] = func_0011D798(0.19634953f * (float)i);
        ((float *)d)[4] = 0.0f;
        ((float *)d)[5] = func_0011DA38(0.19634953f * (float)i);
        ((float *)d)[6] = func_0011D798(0.19634953f * (float)(i + 1));
        ((float *)d)[7] = 0.0f;
        ((float *)d)[8] = func_0011DA38(0.19634953f * (float)(i + 1));
        i++;
        d += 0x24;
    }
    *(int *)(p + 0xBC) = 0;
    *(signed char *)(p + 0xAB0) = *(signed char *)(D_005BE0D8 + 0xE);
}

extern char D_00645A30[];

void func_001AAD30(char *);

char *func_001B0FD0(char *, int, int);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

void func_0013D240(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00207410(char *, char *, char *, char *);

void func_00207460(char *, char *, char *);

extern char D_01DF7E20[];

char *func_0013D2A0(char *, char *, int);

char *func_001BD550(char *a0, char *a1, char *a2, char *a3, char *a4, char *a5, float f) {
    void func_001BD750(char *);
    char *func_001BDE10(char *, char *);
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    int i;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    if (D_01DF7E20 == 0) {
        **q = func_001B0FD0(a, 0xAC0, 1);
    } else {
        **q = func_0013D2A0(a, D_01DF7E20, 0xAC0);
    }
    if ((t = **q) != 0) {
        r = func_001B1610(0xAC0, t);
        if (r != 0) {
            func_001BD750(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xC, **q);
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
        func_00207410(ret, a0, a3, a4);
        func_00207460(ret, a1, a5);
        *(float *)(ret + 0x40) = f;
        *(char **)(ret + 0x440) = a2;
        *(int *)(ret + 0xC0) = *(int *)(a2 + 0x64);
        for (i = 0; i < *(unsigned short *)(a2 + 0xC0); i++) {
            func_001BDE10(((char **)*(char **)(a2 + 0xC4))[i], ret);
        }
    }
    return ret;
}

void func_001B4A50(char *, int, int);

void func_001BDFC0(char *p) {
    char *q;
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    func_001B4A50(p, 1, 0x10);
    q = *(char **)(p + 0x440);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xD0), "r"(q) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(q + 0x10) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xF0), "r"(q + 0x20) : "memory");
    *(unsigned char *)(p + 0x454) = 0;
    *(char **)(p + 0x45C) = q + 0x48;
    *(float *)(p + 0x458) = *(short *)(q + 0x48);
    *(unsigned char *)(p + 0x455) = 0;
    func_001F8910(p + 0x444, p + 0x444, *(char **)(p + 0x45C), *(char **)(p + 0x45C) + 0x14, 4, 4, 0.0f);
}

extern char D_005A6FE0[];

extern char D_005A72B0[];

int func_001B5210();

int func_001BDF80(p0) int p0; {
    func_001B5210();
    *(char **)((char *)p0 + 0) = D_005A6FE0;
    *(char **)((char *)p0 + 0) = D_005A72B0;
    return p0;
}

void *func_001BE2A0(void *p) { return p; }
