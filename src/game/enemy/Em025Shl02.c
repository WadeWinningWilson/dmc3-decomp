extern char D_01CAFF0C[];

extern char D_005601B0[];

extern float D_005601D8[];

extern float D_005601D4[];

extern char D_005601F0[];

extern float D_00560218[];

extern float D_00560214[];

float func_001324E0(float *);

void func_002EC050(int, char *, float);

void func_00332AE0(char *, char *, float, float);

typedef struct { int w[16]; } S3FE;

void func_003FE180(char *p, S3FE *s, int unused, float *pos) {
    void func_002282B0(char *);
    char *func_00207480(int, int, char *, int);
    void func_0034BA60(int, char *, int, int, int);
    void func_001AD140(char *);
    float v[4];
    volatile S3FE c;
    float w[4] __attribute__((aligned(16)));
    float l;
    char *o;
    func_002282B0(p + 0x428);
    if (*(int *)(p + 0x428) == 0) return;
    c = *s;
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    v[0] = *(float *)(o + 0x50) - pos[0];
    v[1] = *(float *)(o + 0x54) - pos[1];
    v[2] = *(float *)(o + 0x58) - pos[2];
    v[3] = 1.0f;
    l = func_001324E0(v);
    if (((signed char *)s)[2] != 0) return;
    v[0] = *(float *)(p + 0x470);
    v[1] = *(float *)(p + 0x474);
    v[2] = *(float *)(p + 0x478);
    v[3] = 1.0f;
    if (!(*(float *)((char *)s + 4) < 100.0f) && l < 500.0f) {
        func_002EC050(10, (char *)v, 100.0f);
        func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005601F0, D_00560218[0], D_00560214[0]);
    } else {
        func_002EC050(3, (char *)v, 100.0f);
        func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005601B0, D_005601D8[0], D_005601D4[0]);
    }
    func_00207480(3, 0x5A, p + 0x440, 0x10);
    w[0] = *(float *)(p + 0x470);
    w[1] = *(float *)(p + 0x474);
    w[2] = *(float *)(p + 0x478);
    w[3] = 1.0f;
    func_0034BA60(0x1D, (char *)w, *(signed char *)(*(char **)(p + 0x428) + 0x46), 0, 1);
    func_001AD140(p);
}

extern char D_00560130[];

void func_0028C200(char *, char *, char *, int, char *, char *, char *);

void func_0028C8E0(char *, int);

void func_002E7920(char *, int, int, int, char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

void func_00104B80(float *, char *, float *);

#define VUNIT(d) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(d) : "memory")

void func_003FDE10(char *p) {
    char *func_00207480(int, int, float *, int);
    void func_001AD140(char *);
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *b;
    char *o;
    char *e;
    p[0x370] = 3;
    p[0x371] = 0;
    *(short *)(p + 0x372) = 0;
    p[0x380] = 2;
    *(int *)(p + 0x390) = 0;
    *(int *)(p + 0x394) = 0;
    *(int *)(p + 0x398) = 0;
    *(float *)(p + 0x39C) = 1.0f;
    *(float *)(p + 0x3A0) = 100.0f;
    func_0028C200(p + 0x150, p + 0x370, p + 0x380, 2, D_00560130, p, p + 0x3D0);
    func_0028C8E0(p + 0x150, 0);
    b = p;
    if (b) b += 0x40;
    func_002E7920(p + 0x3D0, 0, 0, 0, b, 0);
    func_0028C910(p + 0x150);
    func_0028C3A0(p + 0x150, 0, -1, p + 0x440);
    e = *(char **)(p + 0x1CC);
    e[2] = 1;
    VUNIT(p + 0x440);
    *(float *)(p + 0x470) = *(float *)(*(char **)(p + 0x424) + 0x180);
    *(float *)(p + 0x474) = *(float *)(*(char **)(p + 0x424) + 0x184);
    *(float *)(p + 0x478) = *(float *)(*(char **)(p + 0x424) + 0x188);
    v[0] = *(float *)(*(char **)(p + 0x42C) + 4);
    v[1] = *(float *)(*(char **)(p + 0x42C) + 8);
    v[2] = *(float *)(*(char **)(p + 0x42C) + 0xC);
    v[3] = 0.0f;
    func_00104B80(v, *(char **)(p + 0x424) + 0x150, v);
    *(float *)(p + 0x430) = v[0];
    *(float *)(p + 0x434) = v[1];
    *(float *)(p + 0x438) = v[2];
    *(float *)(p + 0x43C) = 0.0f;
    *(float *)(p + 0x4C0) = 60.0f;
    VUNIT(m);
    *(char **)(p + 0x4C8) = func_00207480(3, 0x30, m, 0x10);
    if ((o = *(char **)(p + 0x4C8)) != 0) {
        *(char **)(o + 0x90) = p + 0x440;
        o[0x9A] = 0;
        e = *(char **)(p + 0x4C8);
        e[0x3A] = 1;
    } else {
        func_001AD140(p);
    }
    *(short *)(p + 0x90) = 0x7FFF;
}

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

void func_003FDFF0(char *p) {
    void func_0034BA60(int, char *, signed char, int, int);
    void func_001AD140(char *);
    char *func_00207480(int, int, float *, int);
    void func_002282B0(char **);
    float v[4] __attribute__((aligned(16)));
    unsigned int f;
    func_002282B0((char **)(p + 0x428));
    if (*(char **)(p + 0x428) == 0) func_001AD140(p);
    func_001AD100(p);
    f = *(unsigned int *)(*(char **)(p + 0x1CC) + 8);
    *(float *)(p + 0x470) = *(float *)(p + 0x470) + *(float *)(p + 0x430) * *(float *)(p + 0x10);
    *(float *)(p + 0x474) = *(float *)(p + 0x474) + *(float *)(p + 0x434) * *(float *)(p + 0x10);
    *(float *)(p + 0x478) = *(float *)(p + 0x478) + *(float *)(p + 0x438) * *(float *)(p + 0x10);
    *(float *)(p + 0x4C0) = *(float *)(p + 0x4C0) - *(float *)(p + 0x10);
    if ((f & 0x40) != 0 || *(float *)(p + 0x478) < 1300.0f) {
        func_00207480(3, 0xED, (float *)(p + 0x440), 0x10);
        v[0] = *(float *)(p + 0x470);
        v[1] = *(float *)(p + 0x474);
        v[2] = *(float *)(p + 0x478);
        v[3] = 1.0f;
        func_0034BA60(0x1D, (char *)v, *(signed char *)(*(char **)(p + 0x428) + 0x46), 0, 1);
        func_001AD140(p);
    } else {
        func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
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

extern char D_005B2290[];

extern char D_005B22B4[];

extern char D_005B2334[];

void func_00252FA0(char *);

void func_002E82A0(char *);

char *func_003FDC20(char *p0, int p1) {
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
    **q = func_001B0FD0(a, 0x4E0, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B2290;
            *(char **)(t + 0x40) = D_005B22B4;
            *(char **)(t + 0xA0) = D_005B2334;
            func_0028C110(t + 0x150);
            func_002E82A0(t + 0x3D0);
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
        *(char **)(ret + 0x424) = p0;
        *(int *)(ret + 0x428) = *(int *)(p0 + 0x1A4);
        *(char *)(ret + 0x45) = 4;
        *(int *)(ret + 0x42C) = p1;
        *(int *)(ret + 0x4C8) = 0;
    }
    return ret;
}

int func_003FE150(p0) char *p0; {
    int func_001AD140();
    int v0;
    int v1;
    v0 = *(int *)(p0 + 1224);
    if (v0 != 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

extern void func_003FE3A0();

void func_003FE460(char *p) { func_003FE3A0(p + -64); }

void func_003FE470(char *p) { func_003FE3A0(p + -160); }

void func_003FE130(void) {}

void func_003FE140(void) {}
