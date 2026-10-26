void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_0013D6A0(char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0028C110(char *);

void func_0013D640(char *, char *);

void func_0024FE00(char *);

extern char D_005B9410[];

extern char D_005B9434[];

extern char D_005B94B4[];

extern char D_005B9548[];

char *func_004D6C20(int p0, int p1, char p2, short p3, float *p4, int p5) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x640, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_0024FE00(t);
            *(char **)t = D_005B9410;
            *(char **)(t + 0x40) = D_005B9434;
            *(char **)(t + 0xA0) = D_005B94B4;
            *(char **)(t + 0xD0) = D_005B9548;
            func_0028C110(t + 0x140);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
        r = *b.pp; r[0x18] = 1;
        goto ok;
    }
    *b.pp = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret == 0) {
        return 0;
    }
    *(int *)(ret + 0x130) = p0;
    *(char *)(ret + 0x50C) = p2;
    *(short *)(ret + 0x90) = p3;
    *(int *)(ret + 0x508) = p1;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p4) : "memory");
    *(float *)(ret + 0x5C) = 1.0f;
    *(int *)(ret + 0x510) = p5;
    return ret;
}

void func_004D7230(char *p) {
    char *func_00207480(int, int, char *, int);
    void func_004D85E0(char *, int);
    char *q;
    *(float *)(p + 0x500) = 3.0f;
    *(char **)(p + 0x138) = func_00207480(3, 0x296, 0, 16);
    q = *(char **)(p + 0x138);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x4B0;
        q[0x9A] = 1;
        *(*(char **)(p + 0x138) + 0x3A) = 1;
    }
    func_004D85E0(p, 0x25);
}

void func_001AD140(char *);

void func_00206730(char *);

void func_004D8560(char *, int);

void func_004D81D0(char *);

void func_004D74E0(char *p) {
    char *func_00207480(int, int, char *, int);
    void func_004D85E0(char *, int);
    char *g;
    func_00206730(p + 0x138);
    g = *(char **)(p + 0x1BC);
    if (g == 0) {
        if (*(char **)(p + 0x138) != 0) {
            func_001AD140(*(char **)(p + 0x138));
        }
        func_001AD140(p);
        return;
    }
    if (*(int *)(g + 8) != 0) {
        func_00207480(3, 0x290, p + 0x4B0, 16);
        func_004D85E0(p, 0x2B);
        if (*(char **)(p + 0x138) != 0) {
            func_001AD140(*(char **)(p + 0x138));
        }
        func_001AD140(p);
        return;
    }
    func_004D8560(p, 0x27);
    func_004D81D0(p);
}

int func_004D8550(char *, float);

int func_004D71A0(p0) char *p0; {
    int func_00207480();
    void func_004D85E0();
    char *v0;
    char *v1;
    int v2;
    int tmp0;
    int tmp2;
    v0 = p0;
    *(int *)(p0 + 1280) = 0x41200000;
    tmp0 = func_00207480(3, 660, 0, 16);
    *(int *)(v0 + 312) = tmp0;
    v1 = *(char **)(v0 + 312);
    if (v1 != 0) {
        *(char **)(v1 + 144) = (v0 + 1200);
        *(char *)(v1 + 154) = 0;
        *(char *)(*(char **)(v0 + 312) + 58) = 1;
    }
    *(char *)(v0 + 1312) = 0;
    v2 = (int)v0;
    if (*(int *)(v0 + 1296) == 0) {
        func_004D85E0(v2, 45);
    }
    tmp2 = func_004D8550(v0, 20.0f);
    return tmp2;
}

int func_004D8510(char *p0, char *p1, float f0, float f1) {
    *(float *)(p1 + 0) -= (f0 * *(float *)(p0 + 16));
    if (*(float *)(p1 + 0) <= f1) {
        *(float *)(p1 + 0) = f1;
        return 1;
    } else {
        return 0;
    }
}

extern void func_004D8600();

void func_004D86B0(char *p) { func_004D8600(p + -64); }

void func_004D86C0(char *p) { func_004D8600(p + -160); }

void func_004D86D0(char *p) { func_004D8600(p + -208); }
