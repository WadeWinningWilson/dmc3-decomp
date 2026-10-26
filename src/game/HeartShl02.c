void func_004E9680(char *, int);

int func_004E98A0(char *);

int func_004E9840(char *p) {
    int r;
    unsigned char k = *(unsigned char *)(p + 4);
    switch (k) {
    case 0:
        func_004E9680(p, k);
        *(unsigned char *)(p + 4) += 1;
    case 1:
        r = func_004E98A0(p);
    }
    return r;
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

void func_004E9590(char *);

char *func_004E9430(float *v, int n) {
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
    **q = func_001B0FD0(a, 0xF0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xF0, t);
        if (r != 0) {
            func_004E9590(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
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
    if (o != 0) {
        *(float *)(o + 0x50) = v[0];
        *(float *)(o + 0x54) = v[1];
        *(float *)(o + 0x58) = v[2];
        *(float *)(o + 0x5C) = 1.0f;
        *(int *)(ret + 0x60) = n;
    }
    return ret;
}

int func_001AD140();

int func_00206730();

int func_004E9AA0(p0) int p0; {
    char *v0;
    char *v1;
    int v2;
    v0 = (char *)p0;
    v2 = func_00206730((v0 + 100));
    v1 = *(char **)(v0 + 100);
    if (v1 != 0) {
        *(char *)(v1 + 58) = 1;
        v2 = func_001AD140(*(int *)(v0 + 100));
        *(int *)(v0 + 100) = 0;
    }
    return v2;
}

void func_004E9B70(void) {}

void func_004E9B80(void) {}

void func_004E9620(char *p0) {
    *(char *)(p0 + 5) = 0;
    *(char *)(p0 + 4) = 0;
    *(int *)(p0 + 56) = 0;
    *(int *)(p0 + 60) = 0;
    *(int *)(p0 + 64) = 0x40000000;
    *(int *)(p0 + 80) = 0;
    *(int *)(p0 + 84) = 0;
    *(int *)(p0 + 88) = 0;
    *(int *)(p0 + 92) = 0x3f800000;
    *(int *)(p0 + 100) = 0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 112)) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 176)) : "memory");
}
