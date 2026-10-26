extern char *D_005BC2E0;

short func_00131D10(float, float);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

void func_00133890(float *, float *, float *);

char *func_00207480(int, int, float *, int);

void func_0028C5C0(char *, int, float);

#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_004D8900(char *p) {
    void func_00105230(float *, float *, char *);
    float d[4] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *e;
    *(float *)(p + 0x174) = 1.0f;
    VCOPY(p + 0x3C0, p + 0x160);
    VCOPY(p + 0x3D0, p + 0x150);
    VCOPY(p + 0x50, p + 0x150);
    *(float *)(p + 0x5C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x160), "r"(p + 0x150) : "memory");
    d[3] = 1.0f;
    *(short *)(p + 0x90) = func_00131D10(d[0], d[2]);
    *(unsigned char *)(p + 0x3A0) = 1;
    *(unsigned char *)(p + 0x3A1) = 0;
    *(short *)(p + 0x3A2) = 0;
    *(unsigned char *)(p + 0x3B0) = 1;
    func_0028C200(p + 0x180, p + 0x3A0, p + 0x3B0, 1, D_005BC2E0 + 0x7C0, p, 0);
    *(int *)(p + 0x25C) = 1;
    *(int *)(p + 0x258) = 0x30700;
    func_0028C8E0(p + 0x180, 0);
    func_0028C910(p + 0x180);
    func_0028C3A0(p + 0x180, 0, -1, 0);
    u[0] = 0.0f;
    u[1] = 1.0f;
    u[2] = 0.0f;
    u[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00133890(m, d, u);
    func_00105230(m, m, p + 0x50);
    e = func_00207480(3, 0x289, m, 8);
    if (e != 0) *(unsigned char *)(e + 0x3A) = 1;
    func_0028C5C0(p + 0x180, 0, *(float *)(p + 0x10));
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
}

void func_001AD140(char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

#define VSUBR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

void func_004D8AB0(char *p) {
    void func_00105230(float *, float *, float *);
    float w[4] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    int i;
    char *e;
    char *r;
    *(float *)(p + 0x174) = *(float *)(p + 0x174) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x174) < 0.0f) {
        for (i = 0; i < 16; i++) {
            e = *(char **)((char *)(i * 4) + (int)p + 0x1FC);
            if (e != 0 && **(unsigned char **)(e + 0x104) == 1) {
                w[0] = *(float *)(e + 0x120);
                w[1] = *(float *)(e + 0x124);
                w[2] = *(float *)(e + 0x128);
                w[3] = 1.0f;
                VSUBR54(d, p + 0x150, p + 0x160);
                d[3] = 1.0f;
                u[1] = 1.0f;
                u[0] = 0.0f;
                u[2] = 0.0f;
                u[3] = 1.0f;
                UNIT(m);
                func_00133890(m, d, u);
                func_00105230(m, m, w);
                r = func_00207480(3, 0x289, m, 8);
                if (r != 0) {
                    *(unsigned char *)(r + 0x3A) = 1;
                }
            }
        }
        func_001AD140(p);
    } else {
        func_0028C5C0(p + 0x180, 0, *(float *)(p + 0x10));
    }
}

void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_0013D6A0(char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00252FA0(char *);

void func_0028C110(char *);

void func_0013D640(char *, char *);

extern char D_005B9620[];

extern char D_005B9644[];

extern char D_005B96C4[];

char *func_004D86E0(char *p0, float *p1, float *p2) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x400, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B9620;
            *(char **)(t + 0x40) = D_005B9644;
            *(char **)(t + 0xA0) = D_005B96C4;
            func_0028C110(t + 0x180);
            *(int *)(t + 0x170) = 0;
            *(int *)(t + 0x174) = 0;
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x8, *b.pp);
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
    if (ret != 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x150), "r"(p1) : "memory");
        *(float *)(ret + 0x15C) = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x160), "r"(p2) : "memory");
        *(float *)(ret + 0x16C) = 1.0f;
        *(char **)(ret + 0x170) = p0;
        *(char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p0 + 0x46);
    }
    return ret;
}

extern void func_004D8C30();

void func_004D8D40(char *p) { func_004D8C30(p + -64); }

extern void func_004D8C50();

void func_004D8D50(char *p) { func_004D8C50(p + -64); }

extern void func_004D8CA0();

void func_004D8D60(char *p) { func_004D8CA0(p + -64); }

void func_004D8D70(char *p) { func_004D8CA0(p + -160); }

void func_004D8C80(void) {}

void func_004D8C90(void) {}
