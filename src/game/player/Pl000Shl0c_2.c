extern char D_00645A30[];

void func_00105300(char *, char *);

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

extern char D_005B8A80[];

extern char D_005B8AA4[];

extern char D_005B8B24[];

char *func_004BC190(char *p0, short p1, char p2, char *p3) {
    void func_0028C110(char *);
    void func_00252FA0(char *);
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
    **q = func_001B0FD0(a, 0x3C0, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B8A80;
            *(char **)(t + 0x40) = D_005B8AA4;
            *(char **)(t + 0xA0) = D_005B8B24;
            func_0028C110(t + 0x150);
            *(int *)(t + 0x3B0) = 0;
            *(char *)(t + 0x3B4) = 0;
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x8, **q);
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
        func_00105300(ret + 0x370, p0);
        *(short *)(ret + 0x90) = p1;
        *(char *)(ret + 0x3B4) = p2;
        *(char **)(ret + 0x3B8) = p3;
        *(char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p3 + 0x46);
    }
    return ret;
}

void func_00131700(char *, char *, float *);

void func_00105230(char *, char *, float *);

void func_001318E0(char *, char *, float *);

void func_004BC0C0(char *p) {
    float pos[4] __attribute__((aligned(16)));
    float rot[4] __attribute__((aligned(16)));
    float scl[4] __attribute__((aligned(16)));
    pos[0] = *(float *)(p + 0x50);
    pos[1] = *(float *)(p + 0x54);
    pos[2] = *(float *)(p + 0x58);
    pos[3] = 1.0f;
    rot[0] = 0.0f;
    rot[1] = 6.283185f * (*(short *)(p + 0x90) / 65536.0f);
    rot[2] = 0.0f;
    rot[3] = 1.0f;
    scl[0] = 1.0f;
    scl[1] = 1.0f;
    scl[2] = 1.0f;
    scl[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x380) : "memory");
    func_00131700(p + 0x380, p + 0x380, rot);
    func_00105230(p + 0x380, p + 0x380, pos);
    func_001318E0(p + 0x380, p + 0x380, scl);
}

int func_001AD140();

void func_004BC5C0(p0) char *p0; {
    float v0;
    int tmp2;
    v0 = 0.0f;
    *(float *)(p0 + 944) -= *(float *)(p0 + 16);
    if (*(float *)(p0 + 944) < v0) {
        tmp2 = func_001AD140();
    }
}

extern char D_005872C0[];

int func_004BC900(int, int, int, int, float);

int func_004BC840(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f1, float f2, float f3) {
    int v0;
    int v2;
    int v4;
    int v5;
    int v1;
    char *v3;
    int v6;
    v0 = p0;
    v2 = p1;
    v3 = (D_005872C0 + ((p3 & 255) << 2));
    v4 = p2;
    v5 = p3;
    v1 = 0;
    if ((0 < *(int *)(v3 + 0))) {
        do {
            v6 = func_004BC900(v0, v2, v4, v5, (7.0f * (float)v1));
            v1 = (v1 + 1);
        } while ((v1 < *(int *)(v3 + 0)));
    }
    return v6;
}

extern char D_005B8D00[];

extern char D_005B8D24[];

extern char D_005B8DA4[];

int func_004BCA90(p0) int p0; {
    int func_00252FA0();
    int func_0028C110();
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B8D00;
    *(char **)((char *)p0 + 64) = D_005B8D24;
    *(char **)((char *)p0 + 160) = D_005B8DA4;
    func_0028C110((p0 + 336));
    *(char *)((char *)p0 + 880) = 0;
    *(int *)((char *)p0 + 992) = 0;
    *(int *)((char *)p0 + 996) = 0;
    *(int *)((char *)p0 + 1000) = 0;
    *(int *)((char *)p0 + 1004) = 0;
    *(int *)((char *)p0 + 1008) = 0;
    *(int *)((char *)p0 + 1012) = 0;
    *(int *)((char *)p0 + 1016) = 0;
    return p0;
}

extern void func_004BBA90();

void func_004BC7C0(char *p) { func_004BBA90(p + -64); }

extern void func_004BC390();

void func_004BC7F0(char *p) { func_004BC390(p + -64); }
