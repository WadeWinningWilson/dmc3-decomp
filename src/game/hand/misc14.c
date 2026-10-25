/* Hand-matched functions that declare D_01CAFF0C as a plain char array (forcing reloads after stores) or whose callee prototypes conflict with misc3-13. */
extern char D_01CAFF0C[];
void func_00104C00(char *, char *, float *);
void func_00105230(char *, char *, float *);
void func_00131700(float *, float *, float *);
extern char *D_005BE09C;
extern float D_01DFC120[];
extern float D_01DFC130[];
extern float D_01DFC140[];
extern float D_01DFC150[];
float func_001324B0(float *, float *);
short func_0034B940(float *, float *);
void func_00105760(float *, float *, float);
void func_00104B80(float *, float *, float *);

#define E40F(p, i) (*(char **)((char *)((i) * 4) + (int)(p) + 0x108))

#define ID40F(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

void func_0040FDF0(char *p, unsigned short i) {
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float a;
    a = 45.0f * (float)(unsigned int)*(unsigned short *)(E40F(p, i) + 0x496);
    if (!(a <= 180.0f)) a -= 360.0f;
    if (a < -180.0f) a += 360.0f;
    ID40F(m);
    r[0] = 0.0f;
    r[1] = 6.283185f * (a / 360.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700(m, m, r);
    ID40F(E40F(p, i) + 0x450);
    t[0] = *(float *)(p + 0xFC) + 200.0f * (float)*(unsigned short *)(E40F(p, i) + 0x490);
    t[1] = *(float *)(p + 0x100) + (float)*(unsigned short *)(E40F(p, i) + 0x492);
    t[2] = *(float *)(p + 0x104) + 200.0f * (float)*(unsigned short *)(E40F(p, i) + 0x494);
    t[3] = 1.0f;
    func_00105230(E40F(p, i) + 0x450, E40F(p, i) + 0x450, t);
    func_00104C00(E40F(p, i) + 0x450, E40F(p, i) + 0x450, m);
}

#define VADD41E(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(d), "r"(s) : "memory")

void func_0041E410(void) {
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float c[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float e[4] __attribute__((aligned(16)));
    float f[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float r;
    if (*(char **)(D_005BE09C + 0x23C) != 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(D_005BE09C + 0x23C) + 0x70), "r"(e) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(f), "r"(*(char **)((*(char **)D_01CAFF0C) + 0xC) + 0x50) : "memory");
        a[0] = -400.0f;
        a[1] = 0.0f;
        a[2] = 0.0f;
        a[3] = 1.0f;
        b[0] = -100.0f;
        b[1] = 0.0f;
        b[2] = -70.0f;
        b[3] = 1.0f;
        c[0] = 100.0f;
        c[1] = 0.0f;
        c[2] = -70.0f;
        c[3] = 1.0f;
        d[0] = 400.0f;
        d[1] = 0.0f;
        d[2] = 0.0f;
        d[3] = 1.0f;
        d[2] = a[2] = -(300.0f + func_001324B0(e, f));
        r = 6.283185f * ((float)func_0034B940(f, e) / 65536.0f);
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105760(m, m, r);
        func_00104B80(D_01DFC120, m, a);
        func_00104B80(D_01DFC130, m, b);
        func_00104B80(D_01DFC140, m, c);
        func_00104B80(D_01DFC150, m, d);
        VADD41E(D_01DFC120, f);
        VADD41E(D_01DFC130, f);
        VADD41E(D_01DFC140, f);
        VADD41E(D_01DFC150, f);
    }
}

char *func_00207480(int, int, char *, int);
int func_0024E800(char *);
char *func_002792A0(char *);
void func_00299DE0(char *, int);
void func_0029C760(char *);
void func_0029DCE0(char *, int);
int func_002A4030(char *);
void func_0034BA60(int, float *, int, int, int);

#define ID29C(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

void func_0029C4B0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    int k;
    char *o;
    if (func_0024E800(p + 0x8980) == 0) return;
    switch (*(int *)(p + 0xA92C)) {
    case 0x1E:
        func_00299DE0(p, 0);
        break;
    case 0x1F:
        func_00299DE0(p, 1);
        break;
    }
    *(signed char *)(p + 0xA993) = 0;
    *(signed char *)(p + 5) = 0x1D;
    func_0029DCE0(p, 0x2A);
    func_0029C760(p);
    *(float *)(func_002792A0(p + 0x1D00) + 0x148) = 1.0f;
    *(float *)(func_002792A0(p + 0x2900) + 0x148) = 1.0f;
    *(float *)(func_002792A0(p + 0x2F00) + 0x148) = 1.0f;
    *(float *)(func_002792A0(p + 0x3500) + 0x148) = 1.0f;
    k = func_002A4030(p);
    switch (k) {
    case 0:
        if (*(unsigned char *)(p + 0x8920) == 1) {
            ID29C(m);
            o = func_00207480(3, 0xB1, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1BE0) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    case 1:
        if (*(unsigned char *)(p + 0x8921) == 1) {
            ID29C(m);
            o = func_00207480(3, 0xB2, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1BF4) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x8922) == 1) {
            ID29C(m);
            o = func_00207480(3, 0xB3, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1C08) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    }
    if (*(unsigned char *)((char *)k + (int)p + 0x8920) == 1) {
        v[0] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x30);
        v[1] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x34);
        v[2] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x38);
        v[3] = 1.0f;
        func_0034BA60(0x2A, v, *(signed char *)(p + 0x46), 0, 1);
    }
}


#define ID299(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

void func_00299F70(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    int k;
    char *o;
    if (func_0024E800(p + 0x8980) == 0) return;
    switch (*(int *)(p + 0xA92C)) {
    case 0x1E:
        func_00299DE0(p, 0);
        break;
    case 0x1F:
        func_00299DE0(p, 1);
        break;
    }
    *(signed char *)(p + 0xA993) = 0;
    *(signed char *)(p + 0xAA91) = 1;
    *(signed char *)(p + 5) = 0x16;
    func_0029DCE0(p, 0x28);
    *(float *)(func_002792A0(p + 0x1D00) + 0x148) = 1.0f;
    *(float *)(func_002792A0(p + 0x2900) + 0x148) = 1.0f;
    *(float *)(func_002792A0(p + 0x2F00) + 0x148) = 1.0f;
    *(float *)(func_002792A0(p + 0x3500) + 0x148) = 1.0f;
    k = func_002A4030(p);
    switch (k) {
    case 0:
        if (*(unsigned char *)(p + 0x8920) == 1) {
            ID299(m);
            o = func_00207480(3, 0xB1, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1BE0) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    case 1:
        if (*(unsigned char *)(p + 0x8921) == 1) {
            ID299(m);
            o = func_00207480(3, 0xB2, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1BF4) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x8922) == 1) {
            ID299(m);
            o = func_00207480(3, 0xB3, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1C08) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    }
    if (*(unsigned char *)((char *)k + (int)p + 0x8920) == 1) {
        v[0] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x30);
        v[1] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x34);
        v[2] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x38);
        v[3] = 1.0f;
        func_0034BA60(0x2A, v, *(signed char *)(p + 0x46), 0, 1);
    }
}

void func_0029B5B0(char *);

#define ID29B(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

void func_0029B350(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    int k;
    char *o;
    if (func_0024E800(p + 0x8980) == 0) return;
    switch (*(int *)(p + 0xA92C)) {
    case 0x1E:
        func_00299DE0(p, 0);
        break;
    case 0x1F:
        func_00299DE0(p, 1);
        break;
    }
    *(signed char *)(p + 0xA993) = 0;
    *(signed char *)(p + 5) = 0x19;
    func_0029DCE0(p, 0x23);
    func_0029B5B0(p);
    k = func_002A4030(p);
    switch (k) {
    case 0:
        if (*(unsigned char *)(p + 0x8920) == 1) {
            ID29B(m);
            o = func_00207480(3, 0xB1, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1BE0) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    case 1:
        if (*(unsigned char *)(p + 0x8921) == 1) {
            ID29B(m);
            o = func_00207480(3, 0xB2, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1BF4) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x8922) == 1) {
            ID29B(m);
            o = func_00207480(3, 0xB3, (char *)m, 0x10);
            if (o != 0) {
                *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x1C08) + 0x104);
                *(signed char *)(o + 0x9A) = 0;
            }
        }
        break;
    }
    if (*(unsigned char *)((char *)k + (int)p + 0x8920) == 1) {
        v[0] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x30);
        v[1] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x34);
        v[2] = *(float *)(*(char **)(*(char **)(p + 0x1AD8) + 0x104) + 0x38);
        v[3] = 1.0f;
        func_0034BA60(0x2A, v, *(signed char *)(p + 0x46), 0, 1);
    }
}

typedef struct N2EF { int v; struct N2EF *next; } N2EF;
typedef struct { int x; N2EF n[256]; N2EF *used; N2EF *free; int y; } P2EF;

static inline void init2EF(P2EF *pl) {
    int i;
    pl->used = 0;
    pl->free = &pl->n[0];
    for (i = 0; i < 255; i++) pl->n[i].next = &pl->n[i + 1];
    pl->n[255].next = 0;
}

void func_002EF4D0(char *p, int k) {
    if (((char **)(p + 0xC))[k] != 0) {
        init2EF((P2EF *)(((char **)(p + 0xC))[k] + 0x336C));
        init2EF((P2EF *)(((char **)(p + 0xC))[k] + 0x2B5C));
        *(int *)(((char **)(p + 0xC))[k] + 0x3B7C) = 0;
    }
}

typedef struct N2F0 { int v; struct N2F0 *next; } N2F0;
typedef struct { N2F0 n[256]; N2F0 *used; N2F0 *free; } P2F0;
int func_002242C0(int);
int func_0024D640(int);
float func_001F9C40(char *, int);
unsigned char func_002EFB60(char *, int);
unsigned char func_002EFFF0(char *);
unsigned char func_002F04A0(char *);
void func_002F0650(char *);
extern char D_01DF5D20[];

typedef struct { char pad[0x818]; P2F0 pl; } B2F0;
float func_0011DBE0(float, float);
void func_00195E20(char *, char *);
void func_00206730(char *);
void func_00207470(int, int, float *);
void func_00253110(float, char *, int, int);
int func_002536B0(char *, int);
void func_00286040(char *);
void func_0028C5C0(char *, int, float);
void func_003023F0(int);
void func_00330BD0(int *, int, char *, int, int);
void func_00332AE0(char *, int *, float, float);
void func_004E6FF0(char *);
int func_004E70B0(char *);
extern int D_005880A0[];
extern float D_005880C4[];
extern float D_005880C8[];
extern float D_005BDF88;
extern float D_005BDF8C;
extern char D_005BE098[4];
extern int D_01DFABA0[];

static inline void init2F0(B2F0 *b) {
    int i;
    b->pl.used = 0;
    b->pl.free = &b->pl.n[0];
    for (i = 0; i < 255; i++) b->pl.n[i].next = (N2F0 *)((char *)((i + 1) * 8) + (int)b + 0x818);
    b = (B2F0 *)((char *)b);
    b->pl.n[255].next = 0;
}

unsigned char func_002F0740(char *p, unsigned char a, unsigned char b) {
    int o;
    unsigned char r;
    o = ((int *)(*(char **)D_01CAFF0C + 0xC))[b];
    if ((unsigned char)func_0024D640(o) == 1 || a == 1 || (unsigned char)func_002242C0(o) == 1) {
        if (a != 1 || (unsigned char)func_002242C0(o) == 1) {
            if (*(unsigned char *)(p + 0x1034) == 0) {
                *(unsigned char *)(p + 0x1034) = 1;
                *(int *)(p + 0x102C) = 0;
                *(float *)(p + 0x1030) = 0.0f;
            }
            if (*(float *)(p + 0x1030) < 300.0f) {
                r = func_002EFFF0(p);
            } else {
                r = func_002F04A0(p);
            }
        } else {
            r = func_002EFFF0(p);
        }
        if (r == 1) {
            *(float *)(p + 0x1030) += func_001F9C40(D_01DF5D20, 0x87);
        } else {
            init2F0((B2F0 *)p);
            *(int *)(p + 0x1028) = 0;
            *(unsigned char *)(p + 0x1034) = 0;
            *(int *)(p + 0x102C) = 0;
            *(float *)(p + 0x1030) = 0.0f;
            func_002EFB60(p, 1);
        }
    } else {
        *(unsigned char *)(p + 0x1034) = 0;
        *(int *)(p + 0x102C) = 0;
        r = func_002EFB60(p, 1);
    }
    func_002F0650(p);
    return r;
}

void func_004E6840(char *p) {
    float v;
    short s;
    func_00206730(p + 0x470);
    func_00286040(p + 0x474);
    if (!(*(float *)(p + 0xB1C) <= 0.0f)) {
        v = *(float *)(p + 0xB1C) - D_005BDF88;
        *(float *)(p + 0xB1C) = v > 0.0f ? v : 0.0f;
    }
    func_00253110(*(float *)(p + 0x10), p, func_004E70B0(p), 3);
    if (*(int *)(p + 0x474) != 0) func_003023F0(*(int *)(p + 0x474));
    switch (func_002536B0(p, func_004E70B0(p))) {
    case 1:
        *(signed char *)(p + 0x148) = 0;
        break;
    case -1:
        *(signed char *)(p + 4) = 3;
        *(signed char *)(p + 5) = 0;
        break;
    }
    if (*(char **)(p + 0x21C) != 0) {
        if (*(int *)(*(char **)(p + 0x21C) + 8) & 0x40) {
            *(signed char *)(p + 4) = 2;
            *(signed char *)(p + 5) = 0;
            *(signed char *)(p + 0x148) = 1;
        } else if (*(int *)(*(char **)(p + 0x21C) + 8) & 0x30000) {
            *(signed char *)(p + 4) = 3;
            *(signed char *)(p + 5) = 0;
            func_00330BD0(D_01DFABA0, 8, p + 0x50, 0x23, 0);
        }
    }
    if (*(char **)(p + 0x220) != 0) {
        if (*(int *)(*(char **)(p + 0x220) + 8) & 1) {
            *(signed char *)(p + 4) = 3;
            *(signed char *)(p + 5) = 0;
            func_00207470(3, 0x1C, (float *)(p + 0x150));
            func_00330BD0(D_01DFABA0, 8, p + 0x50, 0x23, 0);
            func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005880A0, D_005880C8[0], D_005880C4[0]);
        } else if (*(int *)(*(char **)(p + 0x220) + 8) & 2) {
            *(float *)(p + 0xB1C) += D_005BDF8C;
            func_00207470(3, 4, (float *)(p + 0x150));
            func_00330BD0(D_01DFABA0, 6, p + 0x50, 0x23, 0);
        }
    }
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    s = *(short *)(p + 0xB10);
    *(short *)(p + 0xB10) = (int)((float)s + 5461.0f * *(float *)(p + 0x10));
    if (*(short *)(p + 0xB10) * s < 0) func_00330BD0(D_01DFABA0, 0x73, p + 0x50, 0x23, 0);
    func_004E6FF0(p);
    func_0028C5C0(p + 0x1A0, 0, *(float *)(p + 0x10));
    func_00195E20(D_005BE098, p);
}
