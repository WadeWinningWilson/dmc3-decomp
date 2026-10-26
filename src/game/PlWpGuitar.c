extern char D_005A8DD0[];

extern char D_005A8DF4[];

extern char D_005A8E74[];

extern char D_005AB8F0[];

extern char D_005AB914[];

extern char D_005AB994[];

void func_001003E0();

void func_00100580();

void func_0024F810();

void func_002791E0();

void func_0031DD00();

char *func_00303740(char *p, short flag) {
    void func_0013D240();
    if (p != 0) {
        *(char **)p = D_005AB8F0;
        *(char **)(p + 64) = D_005AB914;
        *(char **)(p + 160) = D_005AB994;
        func_0031DD00((p + 1920), -1);
        func_002791E0((p + 384), -1);
        func_001003E0((p + 284), (void *)func_0013D240, 16, 6);
        if (p != 0) {
            *(char **)p = D_005A8DD0;
            *(char **)(p + 64) = D_005A8DF4;
            *(char **)(p + 160) = D_005A8E74;
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00303430(char *);

char *func_003032F0(char *p, char *s) {
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
    **q = func_001B0FD0(a, 0x48, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x48, t);
        if (r != 0) {
            func_00303430(r);
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
        *(char **)(ret + 0x38) = p;
        *(char **)(ret + 0x3C) = s;
    }
    return ret;
}

void func_00303820(char *);

void func_00303590(char *p) {
    void func_001AD140(char *);
    void func_00206730(char *);
    char *q;
    func_00303820(p + 0x3C);
    if (*(int *)(p + 0x3C) == 0) {
        func_001AD140(p);
        return;
    }
    func_00206730(p + 0x44);
    q = *(char **)(p + 0x44);
    if (q == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(p + 0x40) == 1) {
        if (q != 0) {
            unsigned char *f = (unsigned char *)(q + 0x3B);
            if (*f == 1) {
                *f = 0;
            }
        }
    } else {
        if (q != 0) {
            *(unsigned char *)(q + 0x3B) = 1;
        }
    }
    *(unsigned char *)(p + 0x40) = 0;
}

void func_00286040();

void func_00303870();

void func_00302B20(int p0) {
    void func_00206730();
    func_00286040((p0 + 2196));
    func_00303870((p0 + 2204));
    func_00206730((p0 + 2200));
}

int func_003032E0(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 << 2) + p0) + 256);
}

int func_00207480();

int func_00303520(p0) int p0; {
    char *v0;
    int v1;
    char *v2;
    v0 = (char *)p0;
    v1 = func_00207480(3, 668, 0, 8);
    *(int *)(v0 + 68) = v1;
    v2 = *(char **)(v0 + 68);
    if (v2 != 0) {
        *(int *)(v2 + 144) = *(int *)(v0 + 56);
        *(char *)(v2 + 154) = 0;
        *(char *)(*(char **)(v0 + 68) + 58) = 1;
    }
    *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
    return v1;
}

int func_00303650(p0) int p0; {
    int func_001AD140();
    int func_00206730();
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v2 = func_00206730((v0 + 68));
    v1 = *(int *)(v0 + 68);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 68) = 0;
    }
    return v2;
}

void func_00303710(void) {}

void func_00303720(void) {}

void func_00303730(void) {}
