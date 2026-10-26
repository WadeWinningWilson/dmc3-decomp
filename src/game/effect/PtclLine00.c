extern char D_005BE098[4];

void func_001AD140(char *);

void func_00195E20(char *, char *);

static inline unsigned char is_zero8(char *q) {
    return *(unsigned char *)q == 0;
}

void func_001F87B0(char *, int, char *, float);

void func_001B3600(char *, char *, char *, char *);

void func_001B6060(char *p) {
    char *t = *(char **)(p + 1088);
    char *o;
    float dt = *(float *)(*(char **)(p + 1184) + 16);
    *(float *)(p + 16) = dt;
    *(float *)(p + 188) += dt;
    o = *(char **)(p + 1184);
    if (is_zero8(o + 56) != 1) {
        func_001AD140(p);
    } else if (*(unsigned char *)(o + 57) == 0) {
        func_001F87B0(p + 1092, 2, o, *(float *)(p + 16));
        func_001B3600(p, t + 48, t + 54, t + 60);
        if (*(float *)(*(char **)(p + 1184) + 64) <= 0.0f && *(unsigned char *)(p + 59) == 0) {
            func_00195E20(D_005BE098, p);
        }
    }
}

void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_001B5F70(char *);

extern char D_01DF7E20[];

char *func_0013D2A0(char *, char *, int);

char *func_001B5E00(char *p, char *s) {
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
    if (D_01DF7E20 == 0) {
        **q = func_001B0FD0(a, 0x4B0, 1);
    } else {
        **q = func_0013D2A0(a, D_01DF7E20, 0x4B0);
    }
    if ((t = **q) != 0) {
        r = func_001B1610(0x4B0, t);
        if (r != 0) {
            func_001B5F70(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xD, **q);
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
        *(char **)(ret + 0x440) = p;
        *(char **)(ret + 0x4A0) = s;
        *(int *)(ret + 0xC0) = *(int *)(p + 0x44);
    }
    return ret;
}

void func_001B4A50(char *, int, int);

void func_001F8910(char *, char *, char *, char *, int, int, float);

void func_001B5FB0(char *p) {
    char *q;
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    func_001B4A50(p, 0, 0x18);
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

void func_001B6290(p0, p1, p2) int p0; char *p1; int p2; {
    *(int *)(p1 + 0) = 0x10000000;
    *(int *)(p1 + 4) = 0x44022;
    *(char *)(p1 + 16) = p2;
    *(int *)(p1 + 4) = (*(int *)(p1 + 4) | (((unsigned int)((p2 * 3) + 9) >> 1) << 20));
}

void func_001B62D0(p0, p1, p2) int p0; char *p1; int p2; {
    *(int *)(p1 + 0) = 0x10000000;
    *(int *)(p1 + 4) = 0x48001;
    *(char *)(p1 + 16) = p2;
    *(int *)(p1 + 4) = (*(int *)(p1 + 4) | ((p2 + 3) << 20));
}

void func_001B6300(p0, p1, p2) int p0; char *p1; int p2; {
    *(int *)(p1 + 0) = 0x10000000;
    *(int *)(p1 + 4) = 0x4c023;
    *(char *)(p1 + 16) = p2;
    *(int *)(p1 + 4) = (*(int *)(p1 + 4) | (((unsigned int)((p2 * 3) + 9) >> 1) << 20));
}

void func_001B6370(p0, p1, p2) int p0; char *p1; int p2; {
    *(int *)(p1 + 0) = 0x10000000;
    *(int *)(p1 + 4) = 0x10001;
    *(int *)(p1 + 4) = (*(int *)(p1 + 4) | ((p2 + 3) << 20));
}

void func_001B6340(int p0, char *p1, int p2) {
    int t0;
    *(int *)(p1 + 0) = 0x10000000;
    *(int *)(p1 + 4) = 0x50000;
    *(char *)(p1 + 16) = p2;
    t0 = (*(int *)(p1 + 4) | ((p2 + 3) << 20));
    *(int *)(p1 + 4) = (*(int *)(p1 + 4) | ((p2 + 3) << 20));
}
