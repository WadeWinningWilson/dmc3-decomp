void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_003271B0(char *);

char *func_00327060(unsigned char p, char *s, char *u) {
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
    **q = func_001B0FD0(a, 0xB0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xB0, t);
        if (r != 0) {
            func_003271B0(r);
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
        *(unsigned char *)(ret + 0xA0) = p;
        *(char **)(ret + 0x80) = s;
        *(char **)(ret + 0x90) = u;
    }
    return ret;
}

extern char D_01CB0510[];

void func_00326DF0(void) {
    int i;
    for (i = 0; i < 0x58; i++) {
        *(unsigned int *)(D_01CB0510 + (signed char)i / 32 * 4 + 0x10) |= 1 << ((signed char)i & 0x1F);
    }
}

extern char D_005BE098;

int func_00195E20();

void func_00325C60();

int func_00325F00();

int func_00325BD0(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    if (v0 != 3) {
        tmp0 = 2;
        if (v0 != tmp0) {
            switch (v0) {
            case 0:
                func_00325C60(p0, v0);
                *(char *)(v1 + 4) = 1;
                /* fall through */
            case 1:
                v2 = func_00325F00(v1);
                break;
            }
        } else {
            *(char *)(v1 + 6403) = *(signed char *)(v1 + 6402);
        }
    }
    if (*(unsigned char *)(v1 + 6400) == 1) {
        v2 = func_00195E20(&D_005BE098, v1);
    }
    return v2;
}

void func_00326C20(void) {}

void func_00326C30(char *p0) {
    *(char *)(p0 + 6404) = 0;
    *(char *)(p0 + 6405) = 0;
}
