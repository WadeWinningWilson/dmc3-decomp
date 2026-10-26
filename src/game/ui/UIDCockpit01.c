void func_001AD140(char *);

extern char D_00645A30[];

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0031B750(char *);

int func_0031B9E0(char *);

char *func_0031B860(int p0, char *p1, char p2, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x700, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_0031B750(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x2C, **q);
        (**q)[0x18] = 1;
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
        *(int *)(ret + 0x38) = p0;
        *(char **)(ret + 0x6B0) = p1;
        *(float *)(ret + 0x6B8) = f;
        *(float *)(ret + 0x6BC) = **(float **)(ret + 0x6B0);
        *(char *)(ret + 0x6A5) = p2;
        if (!(unsigned char)func_0031B9E0(ret)) {
            func_001AD140(ret);
            ret = 0;
        }
    }
    return ret;
}

int func_001AD100();

int func_0031BB30();

int func_0031BD20();

int func_0031BAD0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    v1 = func_001AD100();
    v2 = *(unsigned char *)(v0 + 4);
    if (v2 != 1) {
        if (v2 != 0) {
            return v1;
        } else {
            tmp0 = func_0031BB30(v0);
            return tmp0;
        }
    } else {
        v3 = func_0031BD20(v0);
        return v3;
    }
}

void func_0031C760(p0, p1) char *p0; int p1; {
    int v0;
    *(char *)(p0 + 1702) = p1;
    v0 = (p1 & 255);
    switch (v0) {
    case 0:
        *(int *)(p0 + 1704) = 0x40a00000;
        *(int *)(p0 + 1708) = 5;
        break;
    case 1:
        *(int *)(p0 + 1704) = 0x41700000;
        *(int *)(p0 + 1708) = 10;
        break;
    }
}

void func_0031C710(void) {}
