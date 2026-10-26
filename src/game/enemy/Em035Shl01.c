void func_0028C5C0(char *, int, float);

float func_0011DBE0(float, float);

typedef struct { int w[4]; } __attribute__((aligned(16))) q16t;

extern q16t D_0058B9E0;

void func_004E91F0(char *p) {
    void func_00206730(char *);
    void func_00133890(char *, char *, q16t *);
    float t;
    q16t up;
    func_00206730(p + 0x460);
    t = *(float *)(p + 0x10);
    t = *(float *)(p + 0x464) - t;
    *(float *)(p + 0x464) = t;
    if (t < 0.0f) {
        *(unsigned char *)(p + 4) = 3;
        return;
    }
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    up = D_0058B9E0;
    func_00133890(p + 0x150, p + 0xF0, &up);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
}

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern char D_01DFABA0[];

char *func_00207480(int, int, int, int);

void func_00330BD0(char *p, unsigned int k, int x, int y, int z);

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

extern char D_00587920[];

extern float D_005BDF24;

extern float D_005BDF1C;

extern V4 D_0058B9D0;

void func_004E8FC0(char *p) {
    void func_00133890(char *, char *, V4 *);
    V4 m;
    char *t;
    char *o;
    p[4] = 1;
    p[0x44] = -1;
    p[0x45] = 4;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    m = D_0058B9D0;
    func_00133890(p + 0x150, p + 0xF0, &m);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(char **)(p + 0x460) = func_00207480(2, 0x1C8, 0, 0x10);
    if ((o = *(char **)(p + 0x460)) != 0) {
        *(char **)(o + 0x90) = p + 0x150;
        o[0x9A] = 3;
    }
    p[0x3B0] = 1;
    p[0x3B1] = 0;
    *(short *)(p + 0x3B2) = 0;
    p[0x3C0] = 2;
    *(int *)(p + 0x3D0) = 0;
    *(int *)(p + 0x3D4) = 0;
    *(int *)(p + 0x3D8) = 0;
    *(float *)(p + 0x3DC) = 1.0f;
    *(float *)(p + 0x3E0) = D_005BDF24;
    func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 3, D_00587920, p, 0);
    *(int *)(p + 0x268) = 0x440;
    if (*(unsigned char *)(p + 0x468) == 0) {
        func_0028C8E0(p + 0x190, 0x11);
    } else {
        func_0028C8E0(p + 0x190, 0x15);
    }
    func_0028C910(p + 0x190);
    func_0028C3A0(p + 0x190, 0, -1, p + 0x150);
    *(float *)(p + 0x464) = D_005BDF1C;
    if (*(unsigned char *)(p + 0x468) == 1) {
        func_00330BD0(D_01DFABA0, 0x59, (int)(p + 0x50), 0x23, 0);
    } else {
        func_00330BD0(D_01DFABA0, 0x58, (int)(p + 0x50), 0x23, 0);
    }
}

extern char D_00645A30[];

void func_0028C110(char *);

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00252FA0(char *);

extern char D_005BA310[];

extern char D_005BA334[];

extern char D_005BA3B4[];

char *func_004E8DB0(float *p0, float *p1, char p2) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x470, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005BA310;
            *(char **)(t + 0x40) = D_005BA334;
            *(char **)(t + 0xA0) = D_005BA3B4;
            func_0028C110(t + 0x190);
            *(int *)(t + 0x460) = 0;
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
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p0) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xF0), "r"(p1) : "memory");
        *(char *)(ret + 0x468) = p2;
    }
    return ret;
}

extern float D_005BDF20;

void func_004E9190(p0) int p0; {
    int func_00206730();
    char *v0;
    float v1;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_00206730((v0 + 1120));
    v1 = 0.0f;
    *(float *)(v0 + 1124) -= *(float *)(v0 + 16);
    if (*(float *)(v0 + 1124) < v1) {
        *(char *)(v0 + 4) = 2;
        v1 = D_005BDF20;
        *(float *)(v0 + 1124) = v1;
    }
}

int func_001AD140();

int func_004E92F0(p0) char *p0; {
    int v0;
    int v1;
    int tmp0;
    v0 = (int)p0;
    v1 = *(int *)(p0 + 1120);
    if (v1 != 0) {
        func_001AD140(v1);
    }
    tmp0 = func_001AD140(v0);
    return tmp0;
}

extern void func_004E9370();

void func_004E9410(char *p) { func_004E9370(p + -64); }

void func_004E9420(char *p) { func_004E9370(p + -160); }

void func_004E9330(void) {}

void func_004E9340(void) {}

void func_004E9350(void) {}

void func_004E9360(void) {}
