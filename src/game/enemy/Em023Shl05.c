void func_00206730(char *);

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

extern char D_005BE098[4];

void func_00195E20(char *, char *);

void func_00382A50(char *);

void func_00507550(char *);

void func_00507570(char *);

void func_005075E0(char *);

void func_00507450(char *p) {
    void func_001AD140(char *);
    func_00382A50(p + 0x214);
    func_00206730(p + 0x218);
    if (*(char **)(p + 0x214) == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(*(char **)(p + 0x214) + 0x77C8) != 0) {
        func_001AD140(p);
        return;
    }
    func_001AD100(p);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00507550(p);
        break;
    case 1:
        func_00507570(p);
        break;
    case 2:
        func_005075E0(p);
        break;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x1E0) : "memory");
    func_0028C5C0(p + 0x220, 0, 1.0f);
    func_00195E20(D_005BE098, p);
}

char *func_00207480(int, int, char *, int);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern char D_00567610[];

extern float D_00568170[][6];

void func_005072A0(char *p) {
    void func_001AD140(char *);
    float m[16] __attribute__((aligned(16)));
    char *o;
    func_00382A50(p + 0x214);
    if (*(int *)(p + 0x214) == 0) {
        func_001AD140(p);
        return;
    }
    UNIT(p + 0x1B0);
    QCOPY(p + 0x1E0, *(char **)(*(char **)(((char **)(*(char **)(p + 0x214) + 0x69F8))[*(int *)(p + 0x19C)] + 0x9D0) + 0x104) + 0x30);
    UNIT(m);
    *(int *)(p + 0x218) = 0;
    *(char **)(p + 0x218) = func_00207480(3, 0x33A, (char *)m, 0x10);
    if (*(int *)(p + 0x218) == 0) {
        func_001AD140(p);
        return;
    }
    *(unsigned char *)(*(char **)(p + 0x218) + 0x3A) = 1;
    o = *(char **)(p + 0x218);
    *(char **)(o + 0x90) = p + 0x1B0;
    *(unsigned char *)(o + 0x9A) = 0;
    *(float *)(p + 0x194) = D_00568170[*(int *)(p + 0x4E8)][*(int *)(p + 0x4EC)];
    *(unsigned char *)(p + 0x440) = 4;
    *(float *)(p + 0x450) = 0.0f;
    *(float *)(p + 0x454) = -100.0f;
    *(float *)(p + 0x458) = 0.0f;
    *(float *)(p + 0x45C) = 1.0f;
    *(float *)(p + 0x460) = 0.0f;
    *(float *)(p + 0x464) = -6000.0f;
    *(float *)(p + 0x468) = 0.0f;
    *(float *)(p + 0x46C) = 1.0f;
    *(float *)(p + 0x470) = 100.0f;
    *(unsigned char *)(p + 0x4E0) = 1;
    *(unsigned char *)(p + 0x4E1) = 0;
    *(short *)(p + 0x4E2) = 0;
    func_0028C200(p + 0x220, p + 0x4E0, p + 0x440, 3, D_00567610, p, 0);
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 0x198) = 0;
}

extern char D_00645A30[];

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00506F70(char *);

char *func_00507060(int u0, int u1, int p2, int p3, char *p4, int p5, int p6, float f0, float f1) {
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
    **q = func_001B0FD0(a, 0x500, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00506F70(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x9, **q);
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
        *(char **)(ret + 0x214) = p4;
        *(int *)(ret + 0x19C) = p2;
        *(int *)(ret + 0x1A0) = p3;
        *(int *)(ret + 0x218) = 0;
        *(float *)(ret + 0x200) = f0;
        *(float *)(ret + 0x204) = f1;
        *(int *)(ret + 0x4E8) = p5;
        *(int *)(ret + 0x4EC) = p6;
        *(char *)(ret + 0x45) = 4;
        *(int *)(ret + 0x4F0) = *(int *)(p4 + 0x65CC);
    }
    return ret;
}

void func_0028C740(char *);

void func_00507A00(char *p) {
    void func_001AD140(char *);
    if (*(char **)(p + 0x218) != 0) {
        func_001AD140(*(char **)(p + 0x218));
    }
    func_0028C740(p + 0x220);
}

void func_00507980(p0) char *p0; {
    int func_001AD140();
    float v0;
    int tmp2;
    v0 = 0.0f;
    *(float *)(p0 + 520) -= *(float *)(p0 + 16);
    if (*(float *)(p0 + 520) < v0) {
        tmp2 = func_001AD140();
    }
}

void func_005079C0(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_00507A40();

void func_00507A60(char *p) { func_00507A40(p + -64); }

extern void func_00506FD0();

void func_00507A70(char *p) { func_00506FD0(p + -64); }

void func_00507A80(char *p) { func_00506FD0(p + -160); }

void func_005079D0(void) {}

void func_005079E0(void) {}

void func_005079F0(void) {}
