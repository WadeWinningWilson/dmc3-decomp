extern char D_00577EF0[];

extern char D_00577F00[];

extern char D_0056F590[];

void func_001AD100(char *);

void func_00206730(char *);

short func_00131D10(float, float);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

void func_00133890(char *, char *, float *);

char *func_00207480(int, int, float *, int);

float func_00132470(char *, char *);

void func_00132580(float *, char *, float);

void func_0034BA60(int, char *, int, int, int);

void func_0028C740(char *);

void func_0028C5C0(char *, int, float);

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define POS() \
    *(float *)(p + 0x180) = *(float *)(p + 0x50); \
    *(float *)(p + 0x184) = *(float *)(p + 0x54); \
    *(float *)(p + 0x188) = *(float *)(p + 0x58); \
    *(float *)(p + 0x18C) = 1.0f;

#define TICK(o) \
    t = *(float *)(p + 0x10); \
    x = *(float *)(p + (o)) - t; \
    *(float *)(p + (o)) = x;

#define DROP(o) \
    if (*(char **)(p + (o)) != 0) { \
        *(unsigned char *)(*(char **)(p + (o)) + 0x3A) = 1; \
        func_001AD140(*(char **)(p + (o))); \
        *(char **)(p + (o)) = 0; \
    }

void func_00448DC0(char *pp) {
    void func_001AD140(char *);
    float d[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float m1[16] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    float m2[16] __attribute__((aligned(16)));
    float t;
    float x;
    int f;
    int i;
    char *e;
    char *p = pp;
    func_001AD100(p);
    for (i = 0; i < 3; i++) func_00206730(p + i * 4 + 0x3B0);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        (*(unsigned char *)(p + 4))++;
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x3F0), "r"(p + 0x3E0) : "memory");
        *(short *)(p + 0x90) = func_00131D10(d[0], d[2]);
        func_0028C200(p + 0x190, D_00577EF0, D_00577F00, 3, D_0056F590, p, 0);
        func_0028C8E0(p + 0x190, 3);
        func_0028C910(p + 0x190);
        func_0028C3A0(p + 0x190, 0, -1, p + 0x150);
        func_0028C3A0(p + 0x190, 1, -1, p + 0x150);
        UNIT(p + 0x150);
        v[0] = 0.0f;
        v[1] = 1.0f;
        v[2] = 0.0f;
        v[3] = 1.0f;
        func_00133890(p + 0x150, p + 0x60, v);
        POS()
        VCOPY(p + 0x3D0, p + 0x50);
        *(char **)(p + 0x3B0) = func_00207480(3, 0x190, 0, 0x10);
        e = *(char **)(p + 0x3B0);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x150;
            *(unsigned char *)(e + 0x9A) = 3;
        }
        break;
    case 1:
        f = 0;
        if (*(char **)(p + 0x20C) != 0) f = *(int *)(*(char **)(p + 0x20C) + 8);
        if (!(func_00132470(p + 0x50, p + 0x3D0) <= 2000.0f) || (f & 0x30000)) {
            (*(unsigned char *)(p + 4))++;
            *(float *)(p + 0x3C0) = 30.0f;
            UNIT(m1);
            VCOPY(m1 + 12, p + 0x50);
            m1[15] = 1.0f;
            *(char **)(p + 0x3B4) = func_00207480(3, 0x368, m1, 0x10);
            func_0034BA60(0x24, p + 0x50, 0x1D, 0, 1);
        } else {
            func_00132580(u, p + 0x60, *(float *)(p + 0x10));
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(u) : "memory");
            POS()
        }
        break;
    case 2:
        TICK(0x3C0)
        if (x < 0.0f) {
            (*(unsigned char *)(p + 4))++;
            *(unsigned char *)(p + 5) = 0;
            *(float *)(p + 0x3C4) = 30.0f;
            func_0028C740(p + 0x190);
        }
        break;
    case 3:
        TICK(0x3C4)
        if (x < 0.0f) {
            DROP(0x3B4)
            DROP(0x3B0)
        }
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            (*(unsigned char *)(p + 5))++;
            *(float *)(p + 0x3C0) = 32.0f;
            UNIT(m2);
            VCOPY(m2 + 12, p + 0x50);
            m2[15] = 1.0f;
            *(char **)(p + 0x3B8) = func_00207480(3, 0x367, m2, 0x10);
        case 1:
            TICK(0x3C0)
            if (x < 0.0f) {
                *(float *)(p + 0x3C0) = 20.0f;
                (*(unsigned char *)(p + 5))++;
                func_0028C8E0(p + 0x190, 6);
                func_0028C910(p + 0x190);
                func_0028C3A0(p + 0x190, 2, -1, p + 0x150);
                func_0034BA60(0x27, p + 0x50, 0x1D, 0, 1);
            }
            break;
        case 2:
            TICK(0x3C0)
            if (x < 0.0f) {
                (*(unsigned char *)(p + 4))++;
                *(unsigned char *)(p + 5) = 0;
            }
            break;
        }
        break;
    case 4:
        func_0028C740(p + 0x190);
        func_001AD140(p);
        break;
    }
    func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
}

extern char D_00645A30[];

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00448B50(char *);

void func_00132540(char *, char *, float);

char *func_00448C50(float *p0, float *p1) {
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
            func_00448B50(t);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x6, *b.pp);
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
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x3E0), "r"(p0) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x3F0), "r"(p1) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(ret + 0x60), "r"(p1), "r"(p0) : "memory");
        func_00132540(ret + 0x60, ret + 0x60, 50.0f);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p0) : "memory");
    }
    return ret;
}

int func_004492F0(p0) char *p0; {
    int func_001AD140();
    char *v0;
    char *v1;
    char *v2;
    int v3;
    v0 = *(char **)(p0 + 944);
    v1 = p0;
    if (v0 != 0) {
        *(char *)(v0 + 58) = 1;
        v3 = func_001AD140(*(int *)(v1 + 944));
    }
    v2 = *(char **)(v1 + 948);
    if (v2 != 0) {
        *(char *)(v2 + 58) = 1;
        v3 = func_001AD140(*(int *)(v1 + 948));
    }
    return v3;
}

extern void func_00448BC0();

void func_00449350(char *p) { func_00448BC0(p + -64); }

void func_00449360(char *p) { func_00448BC0(p + -160); }

void func_004492C0(void) {}

void func_004492D0(void) {}

void func_004492E0(void) {}
