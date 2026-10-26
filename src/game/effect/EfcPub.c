void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0032D5A0(char *);

void func_0032D6E0(char *, char *, float);

char *func_0032D410(unsigned char p, char *s, char *tt, char *u, float f1, float f2) {
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
    **q = func_001B0FD0(a, 0xE0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xE0, t);
        if (r != 0) {
            func_0032D5A0(r);
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
        *(float *)(ret + 0xC8) = f1;
        *(char **)(ret + 0x90) = s;
        *(char **)(ret + 0xC0) = tt;
        func_0032D6E0(ret, u, f2);
    }
    return ret;
}

void func_0032D3E0(int, int, int, float, float);

void func_0032D3D0(int a, int b, float x) {
    func_0032D3E0(a, b, 0, x, 0.0f);
}

int func_00228300();

int func_00327310();

int func_00329230();

int func_003272A0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    v1 = func_00228300((v0 + 144));
    v2 = *(unsigned char *)(v0 + 4);
    if (v2 != 1) {
        if (v2 != 0) {
            return v1;
        } else {
            tmp0 = func_00327310(v0);
            *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
            return tmp0;
        }
    } else {
        v3 = func_00329230(v0);
        return v3;
    }
}

int func_0021CAD0();

int func_0032D2B0(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    int tmp1;
    v0 = p2;
    tmp0 = func_0021CAD0(p1);
    v1 = p1;
    if (tmp0 != 0) {
        tmp1 = func_0021CAD0(v1);
        v2 = ((v0 & 255) == (tmp1 & 255));
    } else {
        v2 = 0;
    }
    return v2;
}

void func_0032D3B0(void) {}

void func_0032D3C0(void) {}

void func_0032D1A0();

void func_0032D190(int p0) {
    func_0032D1A0(p0, -1, 1);
}
