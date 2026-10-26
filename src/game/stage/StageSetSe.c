extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

typedef struct { float f[4]; } SF4;

void func_003E05E0(char *);

char *func_003E03E0(char *sc) {
    void func_0013D240(char *, int);
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
    **q = func_001B0FD0(a, 0xC0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xC0, t);
        if (r != 0) {
            func_003E05E0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x3, **q);
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
        return 0;
    }
    *(unsigned char *)(o + 0x50) = *(unsigned char *)sc;
    *(unsigned char *)(o + 0x51) = *(unsigned char *)(sc + 1);
    *(int *)(o + 0x54) = *(int *)(sc + 4);
    *(SF4 *)(o + 0x58) = *(SF4 *)(sc + 8);
    *(SF4 *)(o + 0x68) = *(SF4 *)(sc + 0x18);
    *(SF4 *)(o + 0x78) = *(SF4 *)(sc + 0x28);
    *(SF4 *)(o + 0x88) = *(SF4 *)(sc + 0x38);
    *(SF4 *)(o + 0xA0) = *(SF4 *)(sc + 0x50);
    *(int *)(o + 0xB0) = *(int *)(sc + 0x60);
    *(int *)(o + 0xB4) = *(int *)(sc + 0x64);
    *(int *)(o + 0xB8) = *(int *)(sc + 0x68);
    return ret;
}

int func_001AD100();

void func_003E0720();

int func_003E0740();

int func_003E06B0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v2 = func_001AD100();
    if (*(unsigned char *)(v0 + 68) != 0) {
        v1 = *(unsigned char *)(v0 + 4);
        switch (v1) {
        case 0:
            func_003E0720(v0);
            *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
        case 1:
            /* fall through */
            v2 = func_003E0740(v0);
            break;
        }
    }
    return v2;
}

extern char D_005A6F50[];

extern char D_005AADD0[];

extern char D_005B1870[];

extern char D_005B1894[];

void func_00100580();

int func_003E0A40(p0, p1) int p0; int p1; {
    void func_0013D240();
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = p1;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005B1870;
        *(char **)(v0 + 56) = D_005B1894;
        if ((v0 + 56) != 0) {
            *(char **)(v0 + 56) = D_005AADD0;
        }
        if (v0 != 0) {
            *(char **)(v0 + 0) = D_005A6F50;
            func_0013D240((v0 + 36), -1);
        }
        v3 = (int)v0;
        if ((short)v1 > 0) {
            func_00100580(v3);
        }
    }
    return (int)v0;
}

extern void func_003E0A20();

void func_003E0AE0(char *p) { func_003E0A20(p + -56); }

extern void func_003E0A10();

void func_003E0AF0(char *p) { func_003E0A10(p + -56); }

void func_003E06A0(void) {}

void func_003E0A00(void) {}

void func_003E0A30(void) {}
