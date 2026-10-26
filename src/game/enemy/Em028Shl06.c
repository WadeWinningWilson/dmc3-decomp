int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0012B1A0(char *, int *);

extern int D_005BDA80;

int func_0044C8B0(void);

int func_0044C820(char *p) {
    char buf[0x20] __attribute__((aligned(16)));
    if ((func_0022CBA0(p) != 0) ^ 1) {
        do {
            func_0022CBB0(p, buf);
            if (func_0012B1A0(buf, &D_005BDA80) == 0) {
                return func_0044C8B0();
            }
        } while ((func_0022CBA0(p) != 0) ^ 1);
    }
    return 0;
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

void func_0044C190(char *);

char *func_0044C030(char *p, char *s, float f) {
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
    **q = func_001B0FD0(a, 0x430, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x430, t);
        if (r != 0) {
            func_0044C190(r);
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
    if (ret != 0) {
        *(char **)(ret + 0x420) = p;
        *(char **)(ret + 0x3D0) = s;
        *(float *)(ret + 0x428) = f;
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

extern char D_005AADD0[];

extern char D_005B4B70[];

extern char D_005B4B94[];

extern char D_005B4C14[];

extern char D_005B4CA8[];

void func_0024F750(char *);

void func_0028C110(char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

char *func_0044C9E0(char *p) {
    int i;
    func_0024F750(p);
    *(char **)(p + 0xD0) = D_005AADD0;
    *(int *)(p + 0xD8) = -1;
    *(char **)p = D_005B4B70;
    *(char **)(p + 0x40) = D_005B4B94;
    *(char **)(p + 0xA0) = D_005B4C14;
    *(char **)(p + 0xD0) = D_005B4CA8;
    func_0028C110(p + 0x2C0);
    *(unsigned char *)(p + 0xDE) = 1;
    *(short *)(p + 0xDC) = -1;
    for (i = 0; i < 5; i++) {
        ((unsigned char *)(p + 0xE0))[i] = 0;
        ((unsigned char *)(p + 0xE5))[i] = 0;
        ((unsigned char *)(p + 0xEA))[i] = 0;
        ((unsigned char *)(p + 0xEF))[i] = 0;
        UNIT(p + i * 64 + 0x110);
        ((float *)(p + 0x250))[i] = 0.0f;
        ((float *)(p + 0xFC))[i] = 0.0f;
        ((unsigned char *)(p + 0xF4))[i] = 0;
    }
    *(unsigned char *)(p + 0x264) = 0;
    *(unsigned char *)(p + 0x265) = 0;
    *(int *)(p + 0x268) = 0;
    UNIT(p + 0x270);
    *(float *)(p + 0x2B0) = 0.0f;
    return p;
}

extern char D_00568D20[];

void func_0028C200();

void func_0028C3A0();

void func_0028C8E0();

void func_0028C910();

void func_0044C680(p) char *p; {
    func_0028C200(p + 336, p + 880, p + 896, 3, D_00568D20, p, 0);
    func_0028C8E0(p + 336, 6);
    func_0028C910(p + 336);
    *(char *)(p + 880) = 1;
    *(char *)(p + 881) = 0;
    *(short *)(p + 882) = 0;
    *(char *)(p + 896) = 2;
    *(int *)(p + 912) = 0;
    *(int *)(p + 916) = 1120403456;
    *(int *)(p + 920) = 0;
    *(int *)(p + 924) = 1065353216;
    *(int *)(p + 928) = 1128792064;
    func_0028C3A0(p + 336, 0, -1, p + 992);
    if (*(char **)(p + 460) != 0) {
        *(char *)(*(char **)(p + 460) + 2) = 1;
    }
}

extern char D_01CAFF0C[];

int func_00105230();

int func_0044C260(p0) char *p0; {
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    int v1;
    v0 = p0;
    *(float *)(p0 + 1064) -= *(float *)(p0 + 16);
    if (*(float *)(p0 + 1064) <= 0.0f) {
        *(float *)(v0 + 80) = *(float *)(*(char **)(v0 + 976) + 48);
        *(float *)(v0 + 84) = *(float *)(*(char **)(v0 + 976) + 52);
        *(float *)(v0 + 88) = *(float *)(*(char **)(v0 + 976) + 56);
        *(int *)(v0 + 92) = 0x3f800000;
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((*(int *)(*(char **)D_01CAFF0C + 12) + 80)), "r"(((stk + -32) + 32)) : "memory");
        *(float *)((stk + -32) + 44) = 1.0f;
        *(float *)((stk + -32) + 36) = 100.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((v0 + 992)) : "memory");
        v1 = func_00105230((v0 + 992), (v0 + 992), ((stk + -32) + 32));
        *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
    }
    return v1;
}

extern void func_0028C740();

void func_0044C670(char *p) { func_0028C740(p + 336); }

extern void func_0044C760();

void func_0044C800(char *p) { func_0044C760(p + -64); }

void func_0044C810(char *p) { func_0044C760(p + -160); }

void func_0044C660(void) {}

void func_0044C740(void) {}

void func_0044C750(void) {}
