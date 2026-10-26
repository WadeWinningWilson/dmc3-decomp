void func_00100580(char *);

void func_00320590(char *, int);

extern char D_005B5A80[];

extern char D_005B5AA4[];

extern char D_005B5B24[];

extern char D_005B5BB8[];

extern char D_005B5C84[];

extern char D_005B5D3C[];

void func_0031E4E0(char *, int);

void func_0024FEA0(char *, int);

char *func_0046FC30(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B5A80;
        *(char **)(p + 64) = D_005B5AA4;
        *(char **)(p + 160) = D_005B5B24;
        *(char **)(p + 208) = D_005B5BB8;
        *(char **)(p + 304) = D_005B5C84;
        *(char **)(p + 464) = D_005B5D3C;
        func_0031E4E0(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
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

void func_0046F580(char *);

typedef struct { float f[4]; } SF4;

char *func_0046F3A0(char *sc, char *p, unsigned char c) {
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
    **q = func_001B0FD0(a, 0x290, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x290, t);
        if (r != 0) {
            func_0046F580(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x6, **q);
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
    o = ret;
    if (o == 0) {
        return o;
    }
    *(signed char *)(o + 0x210) = *(signed char *)sc;
    *(SF4 *)(o + 0x220) = *(SF4 *)(sc + 0x10);
    *(short *)(o + 0x230) = *(short *)(sc + 0x20);
    *(unsigned short *)(o + 0x232) = *(unsigned short *)(sc + 0x22);
    *(unsigned short *)(o + 0x234) = *(unsigned short *)(sc + 0x24);
    *(SF4 *)(o + 0x238) = *(SF4 *)(sc + 0x28);
    *(char **)(ret + 0x250) = p;
    *(unsigned char *)(ret + 0x254) = c;
    *(int *)(ret + 0x270) = 0;
    *(int *)(ret + 0x26C) = 0;
    *(int *)(ret + 0x268) = 0;
    *(int *)(ret + 0x264) = 0;
    return ret;
}

extern char *D_0057B060[];

extern unsigned char D_01CAFF3C[];

void func_0046F9A0(char *);

int func_0046F8E0(char *p) {
    unsigned char k = *(unsigned char *)(p + 0x254);
    if (k == 0 && *(short *)(p + 0x276) == 1 && *(short *)(p + 0x276) != *(short *)(p + 0x278)) {
        *(short *)(p + 0x27A) = 9;
    } else {
        short *t = *(short **)(D_0057B060[k] + D_01CAFF3C[0] * 4);
        short n = t[0];
        *(unsigned char *)(p + 0x256) = *(unsigned char *)(p + 0x256) + 1;
        if (!(*(unsigned char *)(p + 0x256) < n)) {
            *(unsigned char *)(p + 0x256) = 0;
        }
        *(short *)(p + 0x27A) = t[*(unsigned char *)(p + 0x256) + 1];
    }
    func_0046F9A0(p);
    return 1;
}

int func_0046F7B0(char *p) {
    int i;
    int j;
    *(short *)(p + 0x278) = *(short *)(p + 0x276);
    *(short *)(p + 0x276) = 0;
    for (i = 0; i < *(short *)(p + 0x274); i++) {
        if (*(char **)(p + i * 4 + 0x264) != 0 && !(*(unsigned char *)(*(char **)(p + i * 4 + 0x264) + 0x2F3D) > 1)) {
            *(short *)(p + 0x276) = *(short *)(p + 0x276) + 1;
        }
    }
    if (*(short *)(p + 0x276) != *(short *)(p + 0x278)) {
        *(float *)(p + 0x25C) = 0.0f;
    }
    for (j = 0; j < *(short *)(p + 0x274); j++) {
        if (*(char **)(p + j * 4 + 0x264) != 0 && *(unsigned char *)(*(char **)(p + j * 4 + 0x264) + 0x2F3D) >= 4) {
            *(char **)(p + j * 4 + 0x264) = 0;
        }
    }
    if (*(short *)(p + 0x276) < 2 && *(short *)(p + 0x276) == *(short *)(p + 0x278)) {
        return 0;
    }
    *(float *)(p + 0x25C) = *(float *)(p + 0x25C) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x25C) <= 0.0f) {
        return 1;
    }
    return 0;
}

void func_0046FCF0(char **h) {
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

void func_0046F660(p0) char *p0; {
    *(unsigned char *)(p0 + 598) = 255;
    *(int *)(p0 + 604) = 0;
    *(short *)(p0 + 634) = 0;
    *(short *)(p0 + 600) = -1;
    *(short *)(p0 + 632) = -1;
    *(char *)(p0 + 644) = 0;
    *(char *)(p0 + 4) = (*(unsigned char *)(p0 + 4) + 1);
}

int func_001AD140();

int func_0046F770(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    v0 = 3;
    v1 = *(unsigned char *)(p0 + 333);
    if (v1 != v0) {
        *(char *)(p0 + 333) = v0;
        v2 = func_001AD140(p0, v1);
    }
    return v2;
}

extern void func_0046F7A0();

void func_0046FD90(char *p) { func_0046F7A0(p + -304); }

void func_0046F740(void) {}

void func_0046F750(void) {}

void func_0046F760(void) {}
