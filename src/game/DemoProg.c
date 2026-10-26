void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0030DA60(char *);

unsigned char func_0030D8E0(unsigned char p, char *s, int n) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    unsigned char r2;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x5C, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x5C, t);
        if (r != 0) {
            func_0030DA60(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xF, **q);
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
        *(unsigned char *)(ret + 0x4C) = p;
        o = ret;
        *(int *)(o + 0x38) = *(int *)(s + 0);
        *(int *)(o + 0x3C) = *(int *)(s + 4);
        *(int *)(o + 0x40) = *(int *)(s + 8);
        *(int *)(o + 0x44) = *(int *)(s + 0xC);
        *(int *)(ret + 0x48) = n;
    } else {
        return 0;
    }
    return 1;
}

void func_001AD140(char *);

void func_00286040(char *);

void func_00228350(char *);

void func_0030E240(char *p) {
    switch (*(unsigned char *)(p + 0x4C)) {
    case 0: {
        char *o = *(char **)(p + 0x54);
        func_00286040((char *)&o);
        if (o != 0) {
            func_001AD140(o);
            o = 0;
        }
        break;
    }
    case 1:
    case 2: {
        char *o = *(char **)(p + 0x54);
        func_00228350((char *)&o);
        if (o != 0) {
            func_001AD140(o);
            o = 0;
        }
        break;
    }
    case 3:
    case 4:
        break;
    }
}

int func_0030DB50();

int func_0030DF70();

void func_0030DB00(p0) char *p0; {
    int v0;
    int v1;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 4);
    switch (v0) {
    default:
        return;
    case 0:
        tmp0 = func_0030DB50(p0, v0);
        return;
    case 1:
        v1 = func_0030DF70(p0, v0);
        return;
    }
}

void func_0030E230(void) {}

void func_0030E2F0(void) {}
