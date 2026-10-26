void func_00104B80(char *, float *, float *);

void func_00104C00(float *, char *, float *);

void func_00105300(float *, char *);

void func_00105760(float, float *, float *);

void func_0030B770(char *);

#define ID30B(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

#define CP30B(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_0030B4C0(char *p) {
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *q;
    int i;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
    case 1:
    case 2:
    case 3:
        q = *(char **)(p + 0xD0);
        if (q == 0) break;
        if (*(unsigned char *)(p + 0x1748) == 0) {
            v[0] = *(float *)(p + 0xE8);
        } else {
            v[0] = -*(float *)(p + 0xE8);
        }
        v[1] = 0.0f;
        v[2] = 0.0f;
        v[3] = 1.0f;
        for (i = 0; i < 3; i++) {
            switch (i) {
            case 2:
                ID30B(m);
                func_00105760(6.283185f * (-*(float *)(p + 0x1734) / 360.0f), m, m);
                func_00104C00(m, *(char **)(((char **)(q + 0x4F4))[*(int *)(p + 0x1744)] + 0x104), m);
                break;
            case 1:
                func_00105300(m, *(char **)(((char **)(q + 0x4F4))[*(int *)(p + 0x1744)] + 0x104));
                break;
            case 0:
                ID30B(m);
                func_00105760(6.283185f * (*(float *)(p + 0x1734) / 360.0f), m, m);
                func_00104C00(m, *(char **)(((char **)(q + 0x4F4))[*(int *)(p + 0x1744)] + 0x104), m);
                break;
            }
            func_00104B80(p + i * 16 + 0x1640, m, v);
            if (*(unsigned char *)(p + 0x1748) == 0) {
                CP30B(p + i * 16 + 0x1610, m);
            } else {
                CP30B(p + i * 16 + 0x1610, m);
                *(float *)((char *)(i * 16) + (int)p + 0x1610) *= -1.0f;
                *(float *)((char *)(i * 16) + (int)p + 0x1614) *= -1.0f;
                *(float *)((char *)(i * 16) + (int)p + 0x1618) *= -1.0f;
            }
        }
        break;
    }
    func_0030B770(p);
}

void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_0013D6A0(char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0013D640(char *, char *);

void func_0030C180(char *);

char *func_0030BF70(int p0, int p1, int p2, int p3, int p4, int p5, char p6, char *p7, char p8, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0xBC0, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_0030C180(t);
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
    if (ret != 0) {
        *(int *)(ret + 0xD0) = p0;
        *(int *)(ret + 0xD4) = p1;
        *(int *)(ret + 0xD8) = p2;
        *(int *)(ret + 0xB9C) = p3;
        *(int *)(ret + 0xBA0) = p4;
        *(int *)(ret + 0xBA4) = p5;
        *(char *)(ret + 0xBA8) = p6;
        *(char *)(ret + 0x45) = 3;
        *(char *)(ret + 0xB98) = p8;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xF0), "r"(p7 + 0x20) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xB00), "r"(p7 + 0x30) : "memory");
        *(float *)(ret + 0xE0) = 1.0f;
        *(float *)(ret + 0xE4) = 1.0f;
        *(float *)(ret + 0xE8) = f;
        *(float *)(ret + 0xEC) = 1.0f;
    }
    return ret;
}

char *func_00279290(char *);

extern char D_005599AC[];

extern char D_005599A8[];

extern int D_005BE098;

int func_0024E780(int, int, int);

void func_0030BBC0(char *);

void func_001A29A0(char *);

void func_00195E20(int *, char *);

void func_0030BAC0(char *p) {
    unsigned char r;
    int i;
    r = func_0024E780(*(int *)(p + 0x173C), 0, 1);
    if (!(*(float *)(p + 0xE8) <= *(float *)D_005599AC)) {
        *(float *)(p + 0xE8) = *(float *)(p + 0xE8) + *(float *)D_005599A8;
        if (*(float *)(p + 0xE8) < *(float *)D_005599AC) {
            *(float *)(p + 0xE8) = *(float *)D_005599AC;
        }
    }
    if (r == 5) {
        *(unsigned char *)(p + 5) = 3;
        func_0030BBC0(p);
    } else {
        if (*(unsigned char *)(p + 0x1739) == 1) {
            for (i = 0; i < 3; i++) {
                func_001A29A0(func_00279290(p + i * 0x600 + 0x180));
            }
        }
        func_00195E20(&D_005BE098, p);
    }
}

extern char D_00559990[];

void func_0024E7B0(int, int, int);

void func_0030B920(char *);

void func_0030B820(char *p) {
    unsigned char r;
    int i;
    r = func_0024E780(*(int *)(p + 0x173C), 0, 1);
    if (r == 3) {
        *(unsigned char *)(p + 5) = 1;
        func_0024E7B0(*(int *)(p + 0x173C), 0, 1);
        func_0030B920(p);
    } else {
        if (*(float *)(p + 0xE8) < *(float *)D_00559990) {
            *(float *)(p + 0xE8) = *(float *)(p + 0xE8) + *(float *)(p + 0x1380);
            if (!(*(float *)(p + 0xE8) <= *(float *)D_00559990)) {
                *(float *)(p + 0xE8) = *(float *)D_00559990;
            }
        }
        func_0030B770(p);
        if (*(unsigned char *)(p + 0x1739) == 1) {
            for (i = 0; i < 3; i++) {
                func_001A29A0(func_00279290(p + i * 0x600 + 0x180));
            }
        }
        func_00195E20(&D_005BE098, p);
    }
}

void func_0030AFB0(char *);

char *func_0030AE00(int p0, int p1, int p2, int p3, int p4, int p5, char p6, char p7) {
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
    **q = func_001B0FD0(a, 0x1780, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_0030AFB0(t);
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
        *(int *)(ret + 0xD0) = p0;
        *(int *)(ret + 0xD4) = p1;
        *(int *)(ret + 0xD8) = p2;
        *(int *)(ret + 0x173C) = p3;
        *(int *)(ret + 0x1740) = p4;
        *(int *)(ret + 0x1744) = p5;
        *(char *)(ret + 0x1748) = p6;
        *(char *)(ret + 0x45) = 3;
        *(char *)(ret + 0x1739) = p7;
    }
    return ret;
}

char *func_0030BDC0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, char p7) {
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
    **q = func_001B0FD0(a, 0xBC0, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_0030C180(t);
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
        *(int *)(ret + 0xD0) = p0;
        *(int *)(ret + 0xD4) = p1;
        *(int *)(ret + 0xD8) = p2;
        *(int *)(ret + 0xB9C) = p3;
        *(int *)(ret + 0xBA0) = p4;
        *(int *)(ret + 0xBA4) = p5;
        *(char *)(ret + 0xBA8) = 0;
        *(char *)(ret + 0x45) = 3;
        *(int *)(ret + 0xB94) = p6;
        *(char *)(ret + 0xB98) = p7;
    }
    return ret;
}

extern void func_001AD140();

void func_0030B3D0(void) { func_001AD140(); }

extern void func_0030B1A0();

void func_0030BD90(char *p) { func_0030B1A0(p + -64); }

extern void func_0030B030();

void func_0030BDA0(char *p) { func_0030B030(p + -64); }

void func_0030BDB0(char *p) { func_0030B030(p + -160); }

void func_0030B4B0(void) {}
