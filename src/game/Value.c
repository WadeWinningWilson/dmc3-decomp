void func_00206730(char *h) {
    char *o = *(char **)h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *(char **)h = 0;
            break;
        }
    }
}

void func_001AD140(char *);

int func_00206190(char *, int);

void func_00206590(char *p) {
    short n;
    int i;
    if (*(unsigned char *)(p + 0x3A) == 0) {
        *(unsigned char *)(p + 0x38) = 2;
        return;
    }
    *(unsigned char *)(p + 0x38) = 3;
    n = 0;
    for (i = 0; i < 8; i++) {
        if (*(unsigned char *)(p + i + 0xC4) == 1) {
            n++;
        }
    }
    for (i = 0; i < n; i++) {
        if (*(unsigned char *)(p + i + 0xCC) == 0) {
            if ((unsigned char)func_00206190(p, i) == 0) {
                *(unsigned char *)(p + i + 0xCC) = 1;
            } else {
                func_001AD140(*(char **)(p + i * 4 + 0xA4));
                *(unsigned char *)(p + i + 0xCC) = 1;
            }
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

void func_00207410(char *, char *, char *, char *);

void func_00207460(char *, char *, char *);

extern char D_01DF7E20[];

char *func_0013D2A0(char *, char *, int);

void func_00205D40(char *);

void func_00205DE0(char *, char *);

char *func_00205AC0(char *a0, char *a1, char *a2, char *a3, char *a4, char *a5, float f) {
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
        **q = func_001B0FD0(a, 0xE0, 1);
    } else {
        **q = func_0013D2A0(a, D_01DF7E20, 0xE0);
    }
    if ((t = **q) != 0) {
        r = func_001B1610(0xE0, t);
        if (r != 0) {
            func_00205D40(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xB, **q);
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
        func_00205DE0(ret, a2);
        for (i = 0; i < 8; i++) {
            *(unsigned char *)(ret + i + 0xC4) = 0;
            *(int *)(ret + i * 4 + 0xA4) = 0;
            *(unsigned char *)(ret + i + 0xCC) = 0;
        }
    }
    return ret;
}

typedef struct { short k; short pad; int v; } KEnt;

typedef struct { short n; short pad; KEnt e[272]; } KTab;

int func_00206850(KTab *t, int v, int k) {
    int func_00206800(KTab *, int);
    if (func_00206800(t, k) != 0) {
        return 1;
    }
    if (t->n >= 256) {
        return 0;
    }
    t->e[t->n].k = k;
    t->e[t->n].v = v;
    t->n += 1;
    return 1;
}

typedef struct { short k; short pad; int v; } KEnt128;

typedef struct { short n; short pad; KEnt128 e[128]; } KTab128;

int func_00206800(KTab128 *t, short k) {
    int i;
    for (i = 0; i < 256; i++) {
        if (t->e[i].k == k) {
            return t->e[i].v;
        }
    }
    return 0;
}

void func_001AD100(char *);

int func_00207060(char *);

void func_00206120(char *p) {
    extern signed char D_005BE0E8;
    func_001AD100(p);
    if (func_00207060(p) != 0) {
        func_001AD140(p);
    } else if (D_005BE0E8 != 0) {
        func_001AD140(p);
    } else {
        *(volatile unsigned char *)(p + 0x39);
    }
}

int func_00206780(p0) char *p0; {
    int v0;
    int v1;
    *(short *)(p0 + 0) = 0;
    v1 = 0;
    v0 = -1;
    do {
        *(short *)(p0 + 4) = v0;
        *(int *)(p0 + 8) = 0;
        v1 = (v1 + 8);
        *(short *)(p0 + 12) = v0;
        *(int *)(p0 + 16) = 0;
        *(short *)(p0 + 20) = v0;
        *(int *)(p0 + 24) = 0;
        *(short *)(p0 + 28) = v0;
        *(int *)(p0 + 32) = 0;
        *(short *)(p0 + 36) = v0;
        *(int *)(p0 + 40) = 0;
        *(short *)(p0 + 44) = v0;
        *(int *)(p0 + 48) = 0;
        *(short *)(p0 + 52) = v0;
        *(int *)(p0 + 56) = 0;
        *(short *)(p0 + 60) = v0;
        *(int *)(p0 + 64) = 0;
        p0 = (p0 + 64);
    } while ((v1 < 256));
    return 1;
}

void func_00206580(void) {}

void func_00206720(void) {}

void func_002067F0(void) {}

void func_00205E70(char *p0) {
    *(char *)(p0 + 57) = 0;
    *(int *)(p0 + 160) = 0;
}
