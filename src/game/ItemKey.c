extern char *D_01CAFF0C[];

void func_002E8510(char *);

void func_00418280(char *p) {
    char *s;
    int t;
    t = *(signed char *)(p + 0x38);
    s = *(char **)(D_01CAFF0C[0] + 4);
    if (s != 0) {
        signed char k = t;
        if (k == 0) {
            *(int *)(s + 0x1C) = *(int *)(s + 0x1C) + 1;
            *(int *)(s + 0x90) = *(int *)(s + 0x90) + 1;
        } else {
            (*(unsigned char *)(k + (int)s + 0x20))++;
        }
    }
    func_002E8510(p);
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

void func_00417FA0(char *);

void func_002E84C0(char *, char *);

typedef struct { float f[3]; } SF3;

char *func_00417E20(char *p, char *s) {
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
            func_00417FA0(r);
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
    }
    return ret;
}

extern signed char D_005BD070;

void func_00417C70(char *);

void func_00418040(char *);

void func_00417DA0(char *p) {
    if (D_005BD070 == -1 || D_005BD070 != *(unsigned char *)(p + 0x38)) {
        switch (*(unsigned char *)(p + 4)) {
        case 0:
            func_00417C70(p);
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
            break;
        case 1:
            func_00418040(p);
            break;
        }
    }
}

void func_00131700(char *, char *, char *);

void func_00105230(char *, char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00104C00(char *, char *, char *);

void func_00417CE0(char *p) {
    float b[4];
    float a[4];
    b[0] = *(float *)(p + 0x3C);
    b[1] = *(float *)(p + 0x40);
    b[2] = *(float *)(p + 0x44);
    b[3] = 1.0f;
    a[0] = 0.0f;
    a[1] = 6.283185f * (*(float *)(p + 0x48) / 360.0f);
    a[2] = 0.0f;
    a[3] = 1.0f;
    UNIT(p + 0x90);
    func_00131700(p + 0x90, p + 0x90, (char *)a);
    func_00105230(p + 0x90, p + 0x90, (char *)b);
    func_00104C00(p + 0x90, p + 0x50, p + 0x90);
}

int func_001AD140();

int func_00206730();

int func_00418240(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v2 = func_00206730((v0 + 208));
    v1 = *(int *)(v0 + 208);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 208) = 0;
    }
    return v2;
}

void func_00418370(void) {}

void func_00418380(void) {}

void func_00417C60(char *p0) {
    *(char *)(p0 + 4) = 0;
    *(int *)(p0 + 208) = 0;
}
