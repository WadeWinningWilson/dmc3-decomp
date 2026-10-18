/* Hand-matched functions (continued from misc.c, which declares some callees differently). */

void func_0048AFC0(char *, int); void func_0041D800(char *, float, float); void func_0041D6E0(char *, char *, int, float); int func_0024E800(char *); void func_0048AF80(char *, int);
void func_00421F50(char *p) {
    char *b;
    *(int *)(p + 0x110) |= 2;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = -20.0f;
        *(float *)(p + 0x6C) = 1.0f;
        p[6] = 1;
    case 1:
        func_0041D800(p + 0x68, 2.0f * *(float *)(p + 0x10), 0.0f);
        b = p;
        if (b) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0024E800(p + 0x1060) == 1) {
            func_0048AF80(p, 4);
        }
        break;
    }
}
int func_0024E780(char *, int, int); void func_0024E7B0(char *, int, int); void func_0029F260(char *, int, int); void func_0029DCE0(char *, int);
void func_0029CC30(char *p) {
    int i;
    if ((unsigned char)func_0024E780(p + 0x8980, 0, 1) == 1) {
        func_0024E7B0(p + 0x8980, 0, 1);
        p[0x997C] = 0;
        p[0x99EC] = 0;
        p[0x9A5C] = 0;
        p[0x9ACC] = 0;
        p[0x9B3C] = 0;
        for (i = 1; i <= 4; i++) {
            func_0029F260(p, i, 0);
            p[0x9C74 + i] = 0;
        }
        func_0029DCE0(p, 0x21);
        p[5] = 0x25;
    }
}

/* Appends an entry to a 10-slot list (ids in front, 12-byte entries after). */
typedef struct Src21B { int a; float f; char rest[1]; } Src21B;
typedef struct Ent21B { int a; float f; char *rest; } Ent21B;
typedef struct List21B { short id[10]; Ent21B e[10]; unsigned int n; } List21B;
int func_0021B0B0(List21B *, int);
Ent21B *func_0021B100(List21B *p, Src21B *s, int id) {
    int r;
    if (p->n >= 10) {
        return 0;
    }
    r = func_0021B0B0(p, id);
    if (r) {
        return (Ent21B *)r;
    }
    p->id[p->n] = id;
    {
        Ent21B *e = &p->e[p->n];
        float f = s->f;
        e->a = s->a - 1;
        e->f = f;
        e->rest = s->rest;
    }
    p->n++;
    return &p->e[p->n - 1];
}

/* Turn angle from degrees, two position updates, keeps 20 units above the target. */
extern char D_01CAFF0C[];
void func_0041E270(char *, char *, float, float); void func_0024BF20(char *);
void func_00317740(char *p, int k) {
    char *o;
    float d;
    *(float *)(p + 0x20) = 6.283185f * (*(float *)(p + 0x220) / 360.0f);
    func_0041E270(p + 0x70, p + 0x1A0, *(float *)(p + 0x228), *(float *)(p + 0x22C));
    func_0041E270(p + 0x80, p + 0x190, *(float *)(p + 0x230), *(float *)(p + 0x234));
    if (*(unsigned char *)(p + 0x2B6) == 0) {
        if ((unsigned char)k == 0) {
            o = *(char **)(*(char **)D_01CAFF0C + 0xC);
        } else {
            o = *(char **)(*(char **)D_01CAFF0C + 0x10);
        }
        if (*(float *)(p + 0x74) - *(float *)(o + 0x54) < 20.0f) {
            *(float *)(p + 0x74) = 20.0f + *(float *)(o + 0x54);
        }
    }
    *(float *)(p + 0x7C) = 1.0f;
    *(float *)(p + 0x8C) = 1.0f;
    func_0024BF20(p);
}

/* Tries three float pairs (one per case) until func_002F0C10 accepts one. */
int func_002F0C10(char *, int, int, int, float, float);
int func_0023F670(char *p, int x, int y) {
    unsigned int i;
    float a, b;
    int r;
    for (i = 0; i < 3; i++) {
        switch (i) {
        case 0:
            a = *(float *)(*(char **)(p + 0x283C) + 0xC4);
            b = *(float *)(*(char **)(p + 0x283C) + 0xC8);
            break;
        case 1:
            a = *(float *)(*(char **)(p + 0x283C) + 0xCC);
            b = *(float *)(*(char **)(p + 0x283C) + 0xD0);
            break;
        case 2:
            a = *(float *)(*(char **)(p + 0x283C) + 0xD4);
            b = *(float *)(*(char **)(p + 0x283C) + 0xD8);
            break;
        }
        r = func_002F0C10(p + 0x2B58, x, y, *(unsigned char *)(p + 0xD4), a, b);
        if (r) {
            return r;
        }
    }
    return 0;
}

/* Size of a host file: builds the path, flips '/' to backslashes, open + seek end + close. */
extern char D_00540D50[]; extern char D_005BBA30[8]; extern char D_005BBA38[8]; extern char D_00662370[];
void func_0012ACE8(char *, char *, char *, int, int, char *); unsigned int func_0012B400(char *);
void func_001AAAE0(char *); void func_001AAAF0(char *); int func_00111BE8(char *, int); int func_00111FF0(int, int, int); void func_00111E70(int);
int func_001EBB30(int a, int b, int c) {
    char buf[256];
    unsigned int i;
    int fd, size;
    func_0012ACE8(buf, D_00540D50, D_005BBA30, c, b, D_005BBA38);
    for (i = 0; i < func_0012B400(buf); i++) {
        if (buf[i] == '/') {
            buf[i] = 0x5C; /* backslash */
        }
    }
    func_001AAAE0(D_00662370);
    fd = func_00111BE8(buf, 1);
    if (fd < 0) {
        return 0;
    }
    size = func_00111FF0(fd, 0, 2);
    func_00111E70(fd);
    func_001AAAF0(D_00662370);
    return size;
}

/* Fades a blend factor to 1 and builds the colour/position vectors from it. */
void func_00133450(char *, float *, float *);
void func_003F2F60(char *);
void func_003F0460(char *);
void func_003EFCE0(char *p) {
    float v[4];
    float w[4];
    *(float *)(p + 0x3A8C) += 0.05f * *(float *)(p + 0x10);
    if (*(float *)(p + 0x3A8C) > 1.0f) {
        *(float *)(p + 0x3A8C) = 1.0f;
    }
    v[0] = *(float *)(p + 0x3AC0) * (1.0f - *(float *)(p + 0x3A8C));
    v[1] = *(float *)(p + 0x3A8C) + *(float *)(p + 0x3AC4) * (1.0f - *(float *)(p + 0x3A8C));
    v[2] = *(float *)(p + 0x3AC8) * (1.0f - *(float *)(p + 0x3A8C));
    v[3] = 0.0f;
    w[0] = *(float *)(p + 0x700);
    w[1] = *(float *)(p + 0x704);
    w[2] = *(float *)(p + 0x708);
    w[3] = 0.0f;
    func_00133450(p + 0x6E0, v, w);
    func_003F2F60(p);
    if (func_0024E800(p + 0x1FD0)) {
        func_003F0460(p);
    }
}

/* Aims at the target selected by +0xBA0/+0xBA4 (VU0 vector difference), then refreshes. */
float func_00132470(char *, float *); void func_0030CCD0(char *);
short func_0034B940(char *, char *);
int func_0034B8C0(short *, short *, int);
void func_00112228(int, int, int);
extern char D_00560130[];
void func_0028C200(char *, char *, char *, int, char *, char *, char *);
void func_0028C8E0(char *, int);
void func_002E7920(char *, int, int, int, char *, int);
void func_0028C910(char *);
void func_0028C3A0(char *, int, int, char *);
void func_00104B80(float *, char *, float *);
char *func_00207480(int, int, float *, int);
void func_001AD140(char *);
extern char *D_005BDC30;
extern unsigned char D_01CAFF3C[];
int func_00131D10(float, float);
void func_004D8550(char *, float);
void func_0030CBD0(char *p) {
    float v[4];
    char *a;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        a = *(char **)(p + 0xD0);
        if (a) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xB00), "r"(*(char **)(((char **)(a + 0x4F4))[*(int *)(p + 0xBA0)] + 0x104) + 0x30) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(*(char **)(((char **)(a + 0x4F4))[*(int *)(p + 0xBA4)] + 0x104) + 0x30) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0xB00), "r"(v) : "memory");
        } else {
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = 1.0f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
        }
        {
            float f = func_00132470(p + 0xB00, v);
            *(float *)(p + 0xE0) = 1.0f;
            *(float *)(p + 0xE4) = 1.0f;
            *(float *)(p + 0xE8) = f;
            *(float *)(p + 0xEC) = 1.0f;
        }
        break;
    case 1:
    case 2:
        break;
    }
    func_0030CCD0(p);
}

unsigned char func_0041DAB0(char *a, short *b, int c) {
    short d;
    d = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, a);
    d = d - *b;
    return func_0034B8C0(b, &d, c);
}

int func_001EB9F0(int a, int b, int c, int d) {
    char buf[256];
    unsigned int i;
    int fd, size;
    char *s;
    size = func_001EBB30(a, b, c);
    func_0012ACE8(buf, D_00540D50, D_005BBA30, c, b, D_005BBA38);
    i = 0;
    if (i < func_0012B400(buf)) {
        s = buf;
        do {
            if (*s == '/') {
                *s = 0x5C;
            }
            s++;
            i++;
        } while (i < func_0012B400(buf));
    }
    func_001AAAE0(D_00662370);
    fd = func_00111BE8(buf, 1);
    if (fd < 0) {
        return 0;
    }
    func_00112228(fd, d, size);
    func_00111E70(fd);
    func_001AAAF0(D_00662370);
    return 1;
}

#define VUNIT(d) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(d) : "memory")

void func_003FDE10(char *p) {
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

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define VSUBR(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

typedef struct { float v[5]; } T4D6;

static inline float fsqrt(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
}

extern T4D6 D_0058B100;
extern char D_0055FEF0[];
void func_00105300(char *, char *);
extern char D_00564950[];
extern char D_00564FC0[];
void func_00131D70(char *, char *);
void func_002530C0(char *, char *);

void func_004D6FA0(char *p) {
    T4D6 tbl;
    float v[4] __attribute__((aligned(16)));
    float d;
    float f;
    char *o;
    char *e;
    tbl = D_0058B100;
    p[0x360] = 5;
    p[0x361] = 0;
    *(short *)(p + 0x362) = 0;
    p[0x370] = 2;
    *(int *)(p + 0x380) = 0;
    *(int *)(p + 0x384) = 0;
    *(int *)(p + 0x388) = 0;
    *(float *)(p + 0x38C) = 1.0f;
    *(float *)(p + 0x390) = 75.0f;
    func_0028C200(p + 0x140, p + 0x360, p + 0x370, 3, D_005BDC30, p, 0);
    *(int *)(p + 0x218) = 0x30040;
    *(float *)(p + 0x224) = 1.0f;
    func_0028C8E0(p + 0x140, 8);
    func_0028C910(p + 0x140);
    func_0028C3A0(p + 0x140, 0, -1, p + 0x4B0);
    *(char **)(p + 0x138) = func_00207480(3, 0x28F, 0, 0x10);
    if ((o = *(char **)(p + 0x138)) != 0) {
        *(char **)(o + 0x90) = p + 0x4B0;
        o[0x9A] = 0;
        e = *(char **)(p + 0x138);
        e[0x3A] = 1;
    }
    QCOPY(v, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
    VSUBR(v, v, p + 0x50);
    v[1] = v[1] + 100.0f;
    d = fsqrt(v[0] * v[0] + v[2] * v[2]);
    func_00131D10(v[0], v[2]);
    *(short *)(p + 0x514) = -(short)func_00131D10(v[1], d);
    if (*(short *)(p + 0x514) > 0) {
        *(short *)(p + 0x514) = 0;
    } else if (*(short *)(p + 0x514) < -0x2000) {
        *(short *)(p + 0x514) = -0x2000;
    }
    f = tbl.v[D_01CAFF3C[0]];
    *(float *)(p + 0x68) = f;
    *(float *)(p + 0x4F8) = f;
    func_004D8550(p, 20.0f);
}

static inline void set4_370(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

void func_00370510(char *p) {
    float m[16] __attribute__((aligned(16)));
    char *b;
    char *o;
    char *e;
    char *g;
    p[0x370] = 3;
    p[0x371] = 0;
    *(short *)(p + 0x372) = 0;
    p[0x380] = 2;
    *(int *)(p + 0x390) = 0;
    *(int *)(p + 0x394) = 0;
    *(int *)(p + 0x398) = 0;
    *(float *)(p + 0x39C) = 1.0f;
    *(float *)(p + 0x3A0) = 50.0f;
    func_0028C200(p + 0x150, p + 0x370, p + 0x380, 2, D_0055FEF0, p, p + 0x3D0);
    func_0028C8E0(p + 0x150, 0);
    b = p;
    if (b) b += 0x40;
    func_002E7920(p + 0x3D0, 0, 0, 0, b, 0);
    func_0028C910(p + 0x150);
    func_0028C3A0(p + 0x150, 0, -1, p + 0x4F0);
    func_0028C3A0(p + 0x150, 0, -1, p + 0x530);
    e = *(char **)(p + 0x1CC);
    e[2] = 1;
    g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    VUNIT(p + 0x4B0);
    *(float *)(p + 0x4E0) = *(float *)(g + 0x50);
    *(float *)(p + 0x4E4) = 1000.0f + *(float *)(g + 0x54);
    *(float *)(p + 0x4E8) = *(float *)(g + 0x58);
    *(float *)(p + 0x4B0) = *(float *)(*(char **)(p + 0x57C) + 0x10);
    *(float *)(p + 0x4C4) = *(float *)(*(char **)(p + 0x57C) + 0x10);
    *(float *)(p + 0x4D8) = *(float *)(*(char **)(p + 0x57C) + 0x10);
    func_00105300(p + 0x4F0, p + 0x4B0);
    func_00105300(p + 0x530, p + 0x4B0);
    *(float *)(p + 0x524) = *(float *)(p + 0x524) - 80.0f;
    *(float *)(p + 0x564) = *(float *)(p + 0x564) + 150.0f;
    set4_370((float *)(p + 0x4A0), 0.0f, 0.0f, 0.0f, 0.0f);
    VUNIT(m);
    *(char **)(p + 0x578) = func_00207480(3, 0x75, m, 0x10);
    if ((o = *(char **)(p + 0x578)) != 0) {
        *(char **)(o + 0x90) = p + 0x4B0;
        o[0x9A] = 0;
        e = *(char **)(p + 0x578);
        e[0x3A] = 1;
    } else {
        func_001AD140(p);
    }
    *(float *)(p + 0x570) = 40.0f;
    *(float *)(p + 0x580) = **(float **)(p + 0x57C);
}

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

extern V4 D_0056A0C0;
void func_00133890(char *, char *, V4 *);

void func_003FD410(char *p) {
    V4 m;
    char *t;
    char *o;
    char *e;
    p[4] = 2;
    p[0x44] = -1;
    p[0x45] = 4;
    QCOPY(p + 0x50, *(char **)(*(char **)(p + 0x190) + 0x104) + 0x30);
    t = *(char **)(*(char **)(p + 0xD0) + 0x674);
    *(float *)(p + 0xF0) = *(float *)(p + 0x50) - *(float *)(*(char **)(t + 0x104) + 0x30);
    *(float *)(p + 0xF4) = *(float *)(p + 0x54) - *(float *)(*(char **)(t + 0x104) + 0x34);
    *(float *)(p + 0xF8) = *(float *)(p + 0x58) - *(float *)(*(char **)(t + 0x104) + 0x38);
    *(float *)(p + 0xFC) = 1.0f;
    func_00131D70(p + 0x80, p + 0xF0);
    m = D_0056A0C0;
    func_00133890(p + 0x150, p + 0xF0, &m);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(char **)(p + 0x470) = func_00207480(3, 0xBE, 0, 0x10);
    if ((o = *(char **)(p + 0x470)) != 0) {
        *(char **)(o + 0x90) = p + 0x150;
        o[0x9A] = 3;
        e = *(char **)(p + 0x470);
        e[0x3A] = 1;
    }
    p[0x3C0] = 4;
    p[0x3C1] = 0;
    *(short *)(p + 0x3C2) = 0;
    p[0x3C4] = 1;
    p[0x3C5] = 0;
    *(short *)(p + 0x3C6) = 1;
    p[0x3D0] = 2;
    *(int *)(p + 0x3E0) = 0;
    *(int *)(p + 0x3E4) = 0;
    *(float *)(p + 0x3E8) = 20.0f;
    *(float *)(p + 0x3EC) = 1.0f;
    *(float *)(p + 0x3F0) = 5.0f;
    p[0x420] = 2;
    *(int *)(p + 0x430) = 0;
    *(int *)(p + 0x434) = 0;
    *(float *)(p + 0x438) = 30.0f;
    *(float *)(p + 0x43C) = 1.0f;
    *(float *)(p + 0x440) = 15.0f;
    func_0028C200(p + 0x1A0, p + 0x3C0, p + 0x3D0, 3, D_00564950, p, 0);
    *(int *)(p + 0x278) = 0x30441;
    func_0028C8E0(p + 0x1A0, 8);
    func_0028C910(p + 0x1A0);
    func_0028C3A0(p + 0x1A0, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x1A0, 1, -1, p + 0x150);
    func_002530C0(p, D_00564FC0);
    *(short *)(p + 0x480) = 0;
    p[0x482] = 0;
}
