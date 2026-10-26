void func_001AD100(char *);

void func_002E9A50(char *);

void func_002EA330(char *);

void func_002E9EC0(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(float *)(p + 152) -= *(float *)(p + 16);
        if (*(float *)(p + 152) <= 0.0f) {
            *(float *)(p + 152) = 0.0f;
            func_002E9A50(p);
            *(unsigned char *)(p + 4) += 1;
        }
        break;
    case 1:
        func_002EA330(p);
        break;
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

typedef struct { unsigned char b[3]; } S3;

void func_002E84C0(char *, char *);

typedef struct { float f[3]; } SF3;

void func_002EA110(char *);

char *func_002E9F70(char *p, char *s, unsigned char c, float f) {
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
    **q = func_001B0FD0(a, 0x110, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x110, t);
        if (r != 0) {
            func_002EA110(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x4, **q);
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
        func_002E84C0(ret, p);
        o = ret;
        *(unsigned char *)(o + 0x38) = *(unsigned char *)s;
        *(S3 *)(o + 0x39) = *(S3 *)(s + 1);
        *(SF3 *)(o + 0x3C) = *(SF3 *)(s + 4);
        *(float *)(o + 0x48) = *(float *)(s + 0x10);
        *(unsigned char *)(ret + 0x92) = c;
        *(float *)(ret + 0x98) = f;
    }
    return ret;
}

void func_002EB8A0(int, int, int, int, float, float, float);

void func_002EB890(int a, int b, int c, float x, float y) {
    func_002EB8A0(a, b, c, 0, x, y, 0.0f);
}

void func_002EB890(int a, int b, int c, float x, float y);

void func_002EB870(int a, int b, int c, float x) {
    func_002EB890(a, b, c, x, x / 4.0f);
}

void func_002EC070(int, int, int, float, float);

void func_002EC050(int a, int b, int c, float x) {
    func_002EC070(a, b, c, x, x / 4.0f);
}

void func_002EB840(int a, int b, float x) {
    func_002EB890(a, b, 0, x, x / 4.0f);
}

void func_00131700(char *, char *, char *);

void func_00105230(char *, char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00104C00(char *, char *, char *);

void func_002E9E00(char *p) {
    float b[4];
    float a[4];
    b[0] = *(float *)(p + 0xB0);
    b[1] = *(float *)(p + 0xB4);
    b[2] = *(float *)(p + 0xB8);
    b[3] = 1.0f;
    a[0] = 0.0f;
    a[1] = 6.283185f * (*(float *)(p + 0x48) / 360.0f);
    a[2] = 0.0f;
    a[3] = 1.0f;
    UNIT(p + 0xD0);
    func_00131700(p + 0xD0, p + 0xD0, (char *)a);
    func_00105230(p + 0xD0, p + 0xD0, (char *)b);
    func_00104C00(p + 0xD0, p + 0x50, p + 0xD0);
}

int func_002EA230(p0, p1) int p0; char *p1; {
    int func_002E9F60();
    char stk[0x60] __attribute__((aligned(16)));
    int tmp3;
    *(char *)((stk + -16) + 80) = p0;
    *(float *)((stk + -16) + 84) = *(float *)(p1 + 0);
    *(float *)((stk + -16) + 88) = *(float *)(p1 + 4);
    *(float *)((stk + -16) + 92) = *(float *)(p1 + 8);
    *(int *)((stk + -16) + 96) = 0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -16) + 16)) : "memory");
    tmp3 = func_002E9F60(((stk + -16) + 16), ((stk + -16) + 80));
    return tmp3;
}

int func_001AD140();

int func_002EAAA0(p0) int p0; {
    int func_00206730();
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v2 = func_00206730((v0 + 192));
    v1 = *(int *)(v0 + 192);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 192) = 0;
    }
    return v2;
}

void func_002EAA90(char *p) {
    extern void func_00206730(); func_00206730(p + 192); }

void func_002EC440(void) {}

void func_002EC450(void) {}

void func_002E99E0(char *p0) {
    *(char *)(p0 + 5) = 0;
    *(char *)(p0 + 4) = 0;
    *(char *)(p0 + 144) = 0;
    *(char *)(p0 + 145) = 0;
    *(char *)(p0 + 146) = 0;
    *(char *)(p0 + 147) = 0;
    *(char *)(p0 + 148) = 0;
    *(char *)(p0 + 149) = 0;
    *(char *)(p0 + 150) = 0;
    *(int *)(p0 + 152) = 0;
    *(int *)(p0 + 156) = 0;
    *(int *)(p0 + 160) = 0;
    *(int *)(p0 + 164) = 0;
    *(int *)(p0 + 168) = 0;
    *(int *)(p0 + 172) = 0;
    *(int *)(p0 + 176) = 0;
    *(int *)(p0 + 180) = 0;
    *(int *)(p0 + 184) = 0;
    *(int *)(p0 + 188) = 0x3f800000;
    *(int *)(p0 + 192) = 0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 208)) : "memory");
}

void func_002EC3A0(char *p0, float f0) {
    *(char *)(p0 + 147) = 1;
    *(float *)(p0 + 164) = f0;
}

void func_002E9F50(int p0, int p1) {
    void func_002E9F60();
    func_002E9F60(p0, p1, 0);
}
