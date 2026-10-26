char *func_00279290(char *);

void func_001A2000(char *, int);

void func_001A1E70(char *, int);

void func_001A3BD0(char *, int, float, float);

extern signed char D_00666717[];

typedef struct { float a; float b; } F2;

extern F2 D_005A0020[];

void func_003B7720(char *p) {
    int i;
    unsigned int n;
    F2 *e;
    for (i = 0; i < 2; i++) {
        n = D_00666717[0] < 0 ? -D_00666717[0] : D_00666717[0];
        e = &D_005A0020[n / 10];
        func_001A3BD0(func_00279290(p + 0x640), 1, e->a, e->b);
        e = &D_005A0020[n % 10];
        func_001A3BD0(func_00279290(p + 0x640), 2, e->a, e->b);
        if (D_00666717[0] < 0) func_001A1E70(func_00279290(p + 0x640), 3);
        else func_001A2000(func_00279290(p + 0x640), 3);
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

char *func_003B79B0(char *p) {
    void func_003B7AD0(char *);
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
    **q = func_001B0FD0(a, 0xD40, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xD40, t);
        if (r != 0) {
            func_003B7AD0(r);
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
    if (ret != 0) {
        *(char **)(ret + 0x38) = p;
    }
    return ret;
}

extern char D_005BE098;

int func_00195E20();

void func_003B7170();

int func_003B7490();

int func_003B70E0(p0) char *p0; {
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
                func_003B7170(p0, v0);
                /* fall through */
            case 1:
                v2 = func_003B7490(v1);
                break;
            }
        } else {
            *(char *)(v1 + 4866) = *(signed char *)(v1 + 4864);
        }
    }
    if (*(unsigned char *)(v1 + 4865) == 1) {
        v2 = func_00195E20(&D_005BE098, v1);
    }
    return v2;
}

void func_003B7910(void) {}
