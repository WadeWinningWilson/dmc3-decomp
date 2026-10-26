void func_00100580(char *);

void func_0048D900(char *, int);

extern char D_005AB870[];

extern char D_005A7AE0[];

extern char D_005A7910[];

char *func_002FF6B0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AB870;
        if (p + 136 != 0) {
            *(char **)(p + 136) = D_005A7AE0;
        }
        func_0048D900(p + 60, -1);
        if (p != 0) {
            *(char **)p = D_005A7910;
        }
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

void func_002FF910(char *);

void func_002FF9D0(char *);

int func_002FFA10(char *);

void func_001AD140(char *);

char *func_002FF750(short h, char *p, unsigned char c) {
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
    **q = func_001B0FD0(a, 0x6C0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x6C0, t);
        if (r != 0) {
            func_002FF910(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xE, **q);
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
        func_002FF9D0(ret);
        *(char **)(ret + 0x3C) = p;
        *(short *)(ret + 0x3A) = h;
        o = ret;
        *(signed char *)(o + 0x39) = *(signed char *)(*(char **)(o + 0x40) + *(short *)(o + 0x3A) * 0xB0);
        if ((unsigned char)func_002FFA10(ret) == 0) {
            func_001AD140(ret);
            return 0;
        }
        *(unsigned char *)(ret + 0x6A4) = c;
        *(unsigned int *)(ret + 0xC) = *(unsigned int *)(ret + 0xC) | 0x40;
    }
    return ret;
}

extern char D_005BE188;

extern char D_01CAF51F[];

extern char D_01CAFF30[];

extern char D_01DFA310[];

void func_0030E540();

int func_0036FA60();

int func_002FE850(p0) int p0; {
    int tmp1;
    func_0030E540(D_01DFA310);
    tmp1 = func_0036FA60(*(int *)((char *)p0 + 32), D_01CAFF30);
    D_005BE188 = 0;
    *(char *)D_01CAF51F = 0;
    return tmp1;
}

void func_0048D950();

void func_0048D990();

int func_0048DBC0();

void func_002FF5C0(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v1 = *(int *)(p0 + 16);
    switch (v1) {
    case 0:
        *(char *)(*(char **)(v0 + 52) + 31077) = 1;
        func_0048D950((v0 + 60), 1, 8, 0, 0);
        *(int *)(v0 + 16) = (*(int *)(v0 + 16) + 1);
        /* fall through */
    case 1:
        func_0048D990((v0 + 60));
        v2 = func_0048DBC0((v0 + 60));
        v3 = (v2 & 255);
        switch (v3) {
        case 1:
            *(int *)(v0 + 16) = (*(int *)(v0 + 16) + 1);
            break;
        case 2:
            *(int *)(v0 + 16) = (*(int *)(v0 + 16) + 1);
            break;
        case 0:
            break;
        }
        break;
    case 2:
        *(int *)(v0 + 12) = (*(int *)(v0 + 12) + 1);
        *(int *)(v0 + 16) = 0;
        break;
    }
}

void func_002FF6A0(void) {}
