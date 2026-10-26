void func_001AD140(char *);

extern int D_005BE098;

void func_001F87B0(char *, int, float);

void func_001B3600(char *, char *, char *, char *);

int func_001EBCB0(char *, float);

void func_001B31E0(char *, unsigned char);

void func_00195E20(char *, char *);

static inline unsigned char z_1BD(unsigned char v) {
    return v == 0;
}

void func_001BD2F0(char *p) {
    char *s = *(char **)(p + 0x440);
    float d = *(float *)(*(char **)(p + 0x4A0) + 0x10);
    char *t;
    *(float *)(p + 0x10) = d;
    *(float *)(p + 0xBC) = *(float *)(p + 0xBC) + d;
    t = *(char **)(p + 0x4A0);
    if (z_1BD(*(unsigned char *)(t + 0x38)) != 1) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(t + 0x39) != 0) return;
    func_001F87B0(p + 0x444, 4, *(float *)(p + 0x10));
    func_001B3600(p, s + 0x30, s + 0x36, s + 0x3C);
    if (*(unsigned char *)(*(char **)(*(char **)(p + 0x4A0) + 0x440) + 0x118) == 0) {
        func_001EBCB0(p + 0x134, *(float *)(p + 0x10));
        func_001B31E0(p, 0);
    }
    if (*(float *)(*(char **)(p + 0x4A0) + 0x40) <= 0.0f && *(unsigned char *)(p + 0x3B) == 0) {
        func_00195E20((char *)&D_005BE098, p);
    }
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

char *func_001BBB50(char *a0, char *a1, char *a2, char *a3, char *a4, char *a5, float f) {
    void func_001BBD50(char *);
    char *func_001BCFE0(char *, char *);
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
        **q = func_001B0FD0(a, 0xB10, 1);
    } else {
        **q = func_0013D2A0(a, D_01DF7E20, 0xB10);
    }
    if ((t = **q) != 0) {
        r = func_001B1610(0xB10, t);
        if (r != 0) {
            func_001BBD50(r);
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
            func_001BCFE0(((char **)*(char **)(a2 + 0xC4))[i], ret);
        }
    }
    return ret;
}

extern char D_005A6FE0[];

extern char D_005A7210[];

int func_001B5210();

int func_001BD150(p0) int p0; {
    func_001B5210();
    *(char **)((char *)p0 + 0) = D_005A6FE0;
    *(char **)((char *)p0 + 0) = D_005A7210;
    return p0;
}

short func_001BC7C0(char *p0) {
    return *(short *)(*(char **)(p0 + 1088) + 208);
}

short func_001BD2E0(char *p0) {
    return *(short *)(*(char **)(*(char **)(p0 + 1184) + 1088) + 208);
}
