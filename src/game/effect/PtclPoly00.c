extern char D_005BE098[4];

void func_001AD140(char *);

void func_00195E20(char *, char *);

static inline unsigned char is_zero8(char *q) {
    return *(unsigned char *)q == 0;
}

void func_001F87B0(char *, int, char *, float);

void func_001B3600(char *, char *, char *, char *);

void func_001BB920(char *p) {
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

void func_001B4A50(char *, int, int);

void func_001F8910(char *, char *, char *, char *, int, int, float);

void func_001BB870(char *p) {
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

char *func_001B9E40(char *a0, char *a1, char *a2, char *a3, char *a4, char *a5, float f) {
    void func_001BA040(char *);
    char *func_001BB6C0(char *, char *);
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
        **q = func_001B0FD0(a, 0xAD0, 1);
    } else {
        **q = func_0013D2A0(a, D_01DF7E20, 0xAD0);
    }
    if ((t = **q) != 0) {
        r = func_001B1610(0xAD0, t);
        if (r != 0) {
            func_001BA040(r);
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
            func_001BB6C0(((char **)*(char **)(a2 + 0xC4))[i], ret);
        }
    }
    return ret;
}

extern char D_005A6FE0[];

extern char D_005A7170[];

int func_001B5210();

int func_001BB830(p0) int p0; {
    func_001B5210();
    *(char **)((char *)p0 + 0) = D_005A6FE0;
    *(char **)((char *)p0 + 0) = D_005A7170;
    return p0;
}
