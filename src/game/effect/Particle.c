extern char D_00645A30[];

void func_001AAD30(char *);

char *func_001B0FD0(char *, int, int);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

void func_0013D240(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_001B51D0(char *);

void func_00207410(char *, char *, char *, char *);

void func_00207460(char *, char *, char *);

extern char D_01DF7E20[];

char *func_0013D2A0(char *, char *, int);

char *func_001B5E00(char *, char *);

char *func_001B4FD0(char *a0, char *a1, char *a2, char *a3, char *a4, char *a5, float f) {
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
        **q = func_001B0FD0(a, 0xAC0, 1);
    } else {
        **q = func_0013D2A0(a, D_01DF7E20, 0xAC0);
    }
    if ((t = **q) != 0) {
        r = func_001B1610(0xAC0, t);
        if (r != 0) {
            func_001B51D0(r);
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
            func_001B5E00(((char **)*(char **)(a2 + 0xC4))[i], ret);
        }
    }
    return ret;
}

extern char D_005A6FB0[];

extern char D_005A7080[];

void func_001B1570();

void func_001B1590();

int func_001B5210(p0) int p0; {
    func_001B1590();
    *(char **)((char *)p0 + 0) = D_005A6FB0;
    *(char *)((char *)p0 + 56) = 0;
    *(char *)((char *)p0 + 57) = 0;
    *(char *)((char *)p0 + 58) = 0;
    *(char *)((char *)p0 + 152) = 0;
    *(int *)((char *)p0 + 68) = 0;
    *(int *)((char *)p0 + 64) = 0;
    *(char *)((char *)p0 + 59) = 0;
    func_001B1570((p0 + 80));
    *(int *)((char *)p0 + 144) = 0;
    *(char *)((char *)p0 + 154) = 0;
    *(int *)((char *)p0 + 148) = 0;
    *(char *)((char *)p0 + 153) = 0;
    *(char *)((char *)p0 + 155) = 0;
    *(char *)((char *)p0 + 159) = 0;
    *(char *)((char *)p0 + 158) = 0;
    *(char *)((char *)p0 + 157) = 0;
    *(char *)((char *)p0 + 156) = 0;
    *(char *)((char *)p0 + 60) = 0;
    *(short *)((char *)p0 + 62) = -1;
    *(char **)((char *)p0 + 0) = D_005A7080;
    return p0;
}
