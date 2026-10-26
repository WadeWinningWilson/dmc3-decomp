void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

extern char D_01DF7E20[];

char *func_0013D2A0(char *, char *, int);

char *func_001BCFE0(char *p, char *s) {
    void func_001BD150(char *);
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
            func_001BD150(r);
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

extern char D_005A7030[];

extern char D_005A7260[];

int func_001B5210();

int func_001BBD50(p0) int p0; {
    func_001B5210();
    *(char **)((char *)p0 + 0) = D_005A7030;
    *(char **)((char *)p0 + 0) = D_005A7260;
    return p0;
}
