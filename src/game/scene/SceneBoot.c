void func_0013D240(char *, int);

extern char D_005A79B0[];

extern char D_005A6F50[];

void func_002791E0(char *, int);

char *func_0022E800(char *p, short flag) {
    void func_00100580(char *);
    if (p != 0) {
        *(char **)p = D_005A79B0;
        func_002791E0(p + 64, -1);
        if (p != 0) {
            *(char **)p = D_005A6F50;
            func_0013D240(p + 36, -1);
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

void func_0022E470(char *);

char *func_0022E360(void) {
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
            func_0022E470(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x2C, **q);
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
    return ret;
}

extern char D_005A7910[];

extern char D_005A79E0[];

int func_0022E890(p0, p1) int p0; int p1; {
    void func_00100580();
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A79E0;
        if (v0 != 0) {
            *(char **)(v0 + 0) = D_005A7910;
        }
        v2 = (int)v0;
        if ((short)p1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}

void func_0022D940(void) {}

void func_0022D950(void) {}

void func_0022E880(void) {}
