/* Hand-matched game functions (spawners that tag their result). */

extern char D_01DF5E40[];
int func_001FED70(char *, int);
char *func_001B1270(int, int, int, int, int, float, int);
char *func_001B11C0(int a, int b, int id, int c, int d, float f, int e) {
    char *o = func_001B1270(a, b, func_001FED70(D_01DF5E40, id), c, d, f, e);
    if (o != 0) {
        *(char *)(o + 0x3C) = 2;
        *(short *)(o + 0x3E) = id;
    }
    return o;
}
extern char D_01DF6260[];
int func_001FEFB0(char *, int);
char *func_001B4320(int, int, int, int, int, float, int);
char *func_001B4260(int a, int b, int id, int c, int d, float f, int e) {
    int h = func_001FEFB0(D_01DF6260, id);
    char *o;
    if (h == 0) {
        return 0;
    }
    o = func_001B4320(a, b, h, c, d, f, e);
    if (o != 0) {
        *(char *)(o + 60) = 0;
        *(short *)(o + 62) = id;
    }
    return o;
}

void func_002EE3D0(char *p, float *out) {
    *out = (float)*(int *)(p + 0x444);
}
float func_002A6DE0(char *p) {
    float v = *(float *)(*(char **)(p + 0xA0) + 4);
    return 0.0f == v ? 1.0f : v;
}
unsigned char func_003AC6C0(char *);
int func_003AC730(char *p) {
    return func_003AC6C0(p) == 0 ? 2 : 0;
}
char *func_00279290(char *);
void func_001A39C0(char *, int, int, int, int);
void func_002338E0(char *p) {
    func_001A39C0(func_00279290(p + 0x40), 0, 0, 0, 0);
}
float func_001324E0(char *);
float func_00253740(char *p, char *v) {
    char stk[0x10] __attribute__((aligned(16)));
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%1)" : : "r"(v), "r"(stk), "r"(p + 0x50) : "memory");
    return func_001324E0(stk);
}
float func_001B28D0(char *p) {
    char *o = *(char **)(p + 0x114);
    if (*(unsigned char *)(o + 0x30) != 1) {
        return (float)*(int *)(o + 0x20);
    }
    return 1000000.0f;
}
float func_00131D10(float, float);
float func_002DAA60(char *p, char *v) {
    char stk[0x10] __attribute__((aligned(16)));
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%1)" : : "r"(v), "r"(stk), "r"(p + 0x50) : "memory");
    return func_00131D10(*(float *)(stk + 0), *(float *)(stk + 8));
}
extern char D_00645EB0[];
int func_00286780(char *, int);
void func_0013D5D0(char *);
void func_0027A0D0(char *p) {
    func_00286780(D_00645EB0, *(int *)(p + 0xC));
    *(int *)(p + 0xC) = 0;
    func_0013D5D0(p + 0x14);
    *(char *)(p + 0xA) = 0;
}
void func_001A0050(int, int, int, int, int);
void func_0031E290(char *p, int a, int b, int c) {
    if (*(unsigned char *)(p + 0x1C) != 0) {
        func_001A0050(*(int *)(p + 0x14), *(int *)(p + 0x18), a, b, c);
    }
}
void func_001A1E10(char *);
void func_003C4EF0(char *p) {
    func_001A1E10(func_00279290(p + 0x680));
    func_001A1E10(func_00279290(p + 0xC80));
}

typedef struct { int w[4]; } __attribute__((aligned(16))) Q16;
void func_001AD140(char *);
void func_0028C740(char *);
void func_00459820(char *p) {
    if (*(char **)(p + 0x218) != 0) {
        func_001AD140(*(char **)(p + 0x218));
    }
    func_0028C740(p + 0x230);
}
extern char D_01CAFF0C[];
int func_0034B800(char *, char *, int, int, float);
int func_004243B0(char *p) {
    return (unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, *(short *)(p + 0x90), 0x38E4, 300.0f) == 1;
}
extern char D_00546720[];
void func_001A9F90(char *, Q16 *);
void func_001A5CE0(char *);
void func_00279660(char *p) {
    Q16 q = *(Q16 *)D_00546720;
    func_001A9F90(p + 0x40, &q);
    *(char *)(p + 0x5C0) = 1;
    *(char *)(p + 0x5C8) = 1;
    func_001A5CE0(p + 0x40);
}
extern char D_01DFABA0[];
void func_002075D0(int, int, char *, int, int);
void func_00330B50(char *, int, char *, int);
void func_00471F10(char *p) {
    func_002075D0(3, 0x203, p + 0x150, 1, 8);
    func_00330B50(D_01DFABA0, 9, p + 0x50, 7);
}
void func_001A1E70(char *, int);
void func_003B66A0(char *p) {
    int i;
    for (i = 8; i <= 16; i++) {
        func_001A1E70(func_00279290(p + 0x700), i);
    }
}
typedef struct { int a; short k; short pad; int v; } K12L;
int func_00287D90(K12L *t, short k) {
    int i;
    char *e;
    for (i = 0, e = (char *)t; i < 64; i++, e += 12) {
        if (*(short *)(e + 4) == k) {
            return t[i].v;
        }
    }
    return 0;
}

void func_00199270(char *p) {
    char *o = *(char **)(p + 0x10C);
    *(long long *)(o + 0) = 0;
    *(long long *)(o + 8) = 0;
}
float func_001B46C0(char *p) {
    return (float)*(int *)(*(char **)(p + 0x440) + 0x68);
}
float func_001B4C80(char *p) {
    return (float)*(int *)(*(char **)(*(char **)(p + 0x4A0) + 0x440) + 0x68);
}
int func_0034C1C0(int a, int lim, int d) {
    int v = a + d;
    return v < lim ? v : lim;
}
int func_0034C1E0(int a, int lim, int d) {
    int v = a - d;
    return lim < v ? v : lim;
}
void func_0031DAF0(char *p, unsigned char k, int v) {
    ((char *)(p + 0x1E8C))[k] = 1;
    ((char *)(p + 0x1EAC))[k] = v;
}
extern long long D_0053F970[];
void func_001A99A0(long long *out, int i) {
    *out = D_0053F970[i];
}
int func_0021CB80(char *p) {
    return *(int *)(p + 0x2894) = *(int *)(*(char **)(p + 0x2834) + (*(unsigned char *)(p + 0x2848) << 3));
}
void func_004DA340(char *p, int v) {
    signed char n = *(signed char *)(p + 0x57A);
    *(signed char *)(p + 0x57A) = n + 1;
    ((short *)(p + 0x564))[n] = v;
}

void func_00210850(int, int, int *);
int func_00210830(int a, int b) {
    int r;
    func_00210850(a, b, &r);
    return r;
}
unsigned short func_0022A720(char *p) {
    return (*(unsigned short *)(p + 0x13298))++;
}
char *func_002792A0(char *);
float func_0027D780(char *p) {
    return *(float *)(func_002792A0(p + 0x4C0) + 0x12C);
}
extern signed char D_005BE134;
void func_002E8760(void) {
    if (D_005BE134 != 0) {
        D_005BE134--;
    }
}
void func_001F41C0(char *p, unsigned int v) {
    *(unsigned int *)(p + 0x88) = v;
    *(unsigned int *)(p + 0x90) = (*(unsigned int *)(p + 0x90) & 0xFFFFFF) | (v & 0xFF000000);
}
int func_00352CA0(void);
long long func_00331010(void) {
    return func_00352CA0();
}
float func_001FA830(float x, float v0, float x0, float v1, float x1) {
    float t = (x - x0) / (x1 - x0);
    return (1.0f - t) * v0 + t * v1;
}

void func_001F4170(char *p, unsigned int v) {
    *(unsigned int *)(p + 0x64) = (v << 3) / 10;
    *(unsigned int *)(p + 0x68) = v;
}
int func_0041D6B0(float *x, float d) {
    return (*x -= d) <= 0.0f;
}

typedef struct { char a; char flag; char rest[206]; } E208;
typedef struct { short n; char pad[14]; E208 e[1]; } T208;
void func_00208870(T208 *t, int i) {
    if (i < t->n) {
        t->e[i].flag = 0;
    }
}
void func_00208830(T208 *t, int i) {
    if (i < t->n) {
        t->e[i].flag = 1;
    }
}
int func_002F9D20(void);
int func_002F9E90(void) {
    int r = func_002F9D20();
    return r < 0 ? r : 0;
}
void func_003E6260(char *p) {
    if (*(unsigned char *)(p + 4) != 0) {
        *(char *)(p + 0x3B92) = 1;
        if (*(unsigned char *)(p + 0x14D) != 3) {
            *(volatile unsigned char *)(p + 0x3A4D);
        }
    }
}
void func_004B7F80(char *p, short v) {
    short o = *(short *)(p + 0xA58);
    if (o != v) {
        *(short *)(p + 0xA5A) = o;
        *(short *)(p + 0xA58) = v;
        *(char *)(p + 7) = 0;
        *(char *)(p + 6) = 0;
        *(char *)(p + 5) = 0;
    }
}
void func_004DBF00(char *p) {
    int k = *(unsigned char *)(p + 5);
    if (k == 3 || k == 0) {
        *(char *)(p + 5) = 1;
        *(float *)(p + 0xDB0) = *(float *)(p + 0xDB8);
    }
}
void func_0019AA40(int a, char *o) {
    unsigned char n = 4;
    int f = *(int *)o;
    if ((f & 0x1000) || (f & 0x2000)) {
        n = 12;
    }
    *(char *)(o + 6) = n;
    *(char *)(o + 5) = n;
}
long long func_001B31A0(int a, char *b) {
    return ((long long)(*(short *)(b + 0xA) - 1) << 14) | 0xA | ((long long)(*(short *)(b + 0xC) - 1) << 34);
}
float func_0038CA90(float a, float b, float c) {
    return (b * b + c * c - a * a) / (2.0f * b * c);
}
char *func_00207480(int, int, char *, int);
void func_003B6330(char *p) {
    char *o = func_00207480(3, 0x7B, p + 0x440, 16);
    if (o != 0) {
        *(char *)(o + 0x3A) = 1;
    }
}

typedef struct { char pad[0xB0]; char a; char pad1; short b; char c; char rest[208 - 0xB5]; } E208c;
typedef struct { short n; char pad[14]; E208c e[1]; } T208c;
void func_002088A0(T208c *t, int i, int a, int b, int c) {
    if (i < t->n) {
        t->e[i].a = a;
        t->e[i].b = b;
        t->e[i].c = c;
    }
}
extern char D_01CAF51F[];
extern char D_0055A1E0[];
extern char D_00559BB0[];
void func_002FF9D0(char *p) {
    if (*(unsigned char *)D_01CAF51F == 0) {
        *(char **)(p + 0x40) = D_0055A1E0;
    } else {
        *(char **)(p + 0x40) = D_00559BB0;
    }
}
typedef struct { int w[16]; } M64c;
void func_00300BD0(char *p) {
    **(M64c **)(p + 0x48) = **(M64c **)(p + 0x3C);
}
void func_00387550(char *p) {
    int k = *(unsigned char *)(p + 5);
    if (k == 3 || k == 0) {
        *(char *)(p + 5) = 1;
        *(float *)(p + 0xDB0) = *(float *)(p + 0xDB8);
        *(char *)(p + 0xDD0) = 0;
    }
}
float func_001FF0F0(char *a, int b) {
    char *o = (char *)func_001FEFB0(a, b);
    if (o == 0) {
        return -1.0f;
    }
    return (float)*(int *)(o + 0x68);
}

void func_001A2710(char *p, unsigned int c) {
    unsigned int g = (c >> 8) & 0xFF;
    unsigned int r = c & 0xFF;
    unsigned int b = (c >> 16) & 0xFF;
    *(unsigned int *)(p + 0x1A0) = r;
    *(unsigned int *)(p + 0x1A4) = g;
    *(unsigned int *)(p + 0x1A8) = b;
    *(unsigned long long *)(*(char **)(p + 0x10C) + 8) = ((unsigned long long)b << 16) | (r | ((unsigned long long)g << 8));
}
void func_0024DA80(char *, int, int);
void func_0033A620(char *p, int a, int b) {
    if (a >= 0 && b >= 0) {
        *(int *)(p + 0x12A8) = a;
        *(int *)(p + 0x12AC) = b;
        func_0024DA80(p + 0xDF0, *(int *)(p + 0x12A8), *(int *)(p + 0x12AC));
    }
}
extern char D_00666750[];
int func_001AEA60(char *, int, unsigned short);
void func_001AF080(char *, int);
void func_00370200(void) {
    int h = func_001AEA60(D_00666750, 6, 1);
    if (h != 0) {
        func_001AF080(D_00666750, h);
    }
}
void func_002A0100(char *p) {
    int i;
    for (i = 0; i < 3; i++, p += 4) {
        if (*(int *)(p + 0x8430) != 0) {
            *(int *)(p + 0x8430) = 3;
        }
    }
}
int func_002CB2E0(char *p) {
    unsigned int v = *(unsigned char *)(p + 0x2CE4);
    if (v - 4 <= 2 || v == 0x2E || v == 0x2F) {
        return 1;
    }
    return 0;
}
extern char *D_005BE0D8;
void func_001C5EB0(char *p, char *o) {
    *(char **)(p + 0x158A8) = o;
    *(int *)(*(char **)(p + 0x158A8) + 0x28) = ((int *)(*(char **)(p + 0x158A8) + 0x20))[*(signed char *)(D_005BE0D8 + 14)];
    *(short *)(*(char **)(p + 0x158A8) + 0x2E) = 0;
}

int func_001F9A70(int, char *, float);
int func_002056E0(char *p) {
    if (*(unsigned char *)(p + 4) == 0) {
        return 1;
    }
    return func_001F9A70(*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x550), p + 0x50, 1000.0f);
}
void func_003C3F70(char *p, int a, int b, signed char k) {
    if (a >= 0 && b >= 0) {
        func_0024DA80(p + k * 208 + 0x1430, a, b);
    }
}
void func_001C52A0(int x, char *o) {
    unsigned short fl = *(unsigned short *)(o + 4);
    if (fl & 4) {
        return;
    }
    if (*(unsigned char *)o == 0 || *(unsigned char *)(o + 3) == 0) {
        return;
    }
    *(unsigned short *)(o + 4) = fl | 4;
    *(short *)(o + 0xC) = 3;
}
void func_00393A70(char *p, int a) {
    *(char *)(p + 0x2EC2) = a;
    if (*(unsigned char *)(p + 0x2F3C) == 2) {
        if (*(unsigned char *)(p + 0x2EE1) <= 1 || !(*(unsigned short *)(p + 0x2EDE) & 0x100)) {
            *(char *)(p + 0x2DE6) = 2;
        }
    }
}
void func_00414D10(float *p) {
    float v;
    p[2] = 100.0f;
    p[1] = 100.0f;
    p[3] = 0.001f;
    p[4] = 110.0f;
    v = p[2] - 100.0f;
    p[5] = v;
    if (v < 0.0f) {
        p[5] = 0.0f;
    }
}
int func_00414FA0(char *p) {
    int i;
    int n = *(short *)(p + 4);
    for (i = 0; i < n; i++, p += 8) {
        if (*(unsigned char *)(p + 8) == 0) {
            return 1;
        }
    }
    return 0;
}

char *func_00501230(char *p) {
    int i;
    char *e;
    for (i = 0, e = p; i < 6; i++, e += 6) {
        if (*(unsigned char *)(e + 0x13ED) == 0) {
            return p + i * 6 + 0x13ED;
        }
    }
    return 0;
}
typedef struct { int a; short k; short pad; int v; } K12M;
int func_00287DE0(K12M *t, short k) {
    int i;
    char *e;
    for (i = 0, e = (char *)t; i < 64; i++, e += 12) {
        if (*(short *)(e + 4) == k) {
            return t[i + 1].a;
        }
    }
    return 0;
}
char *func_0021B0B0(char *p, short k) {
    int i;
    char *e;
    for (i = 0, e = p; i < 10; i++, e += 2) {
        if (k == *(short *)e) {
            return p + i * 12 + 0x14;
        }
    }
    return 0;
}
void func_001A26C0(char *p, short d) {
    short v = *(short *)(p + 0x15C) + d;
    if (v < 0) {
        v = 0;
    }
    if (v > 255) {
        v = 255;
    }
    *(int *)(p + 0x15C) = v;
}
char *func_002F7C10(int, int);
int func_004FD500(int a, int b) {
    char *e = func_002F7C10(b, 0x20);
    if (e != 0) {
        e -= 208;
    }
    if (e != 0) {
        return *(unsigned char *)(e + 0x2BC) != 0;
    }
    return 0;
}
void func_00234630(char *p) {
    char *o;
    if (*(int *)(p + 0x3860) < 5) {
        o = 0;
    } else {
        o = *(char **)(p + 0x3830) + 0x200;
    }
    *(char *)(o + 0x78) = 0;
    if (*(int *)(p + 0x3860) < 4) {
        o = 0;
    } else {
        o = *(char **)(p + 0x3830) + 0x180;
    }
    *(char *)(o + 0x78) = 1;
}

typedef struct { short k; short pad; int v; } K8;
int func_0030E980(char *p, int k) {
    int i;
    char *e;
    K8 *t;
    int n;
    n = *(int *)(p + 0x14);
    i = 0;
    if (0 < n) {
        t = *(K8 **)p;
        e = (char *)t;
        do {
            if (k == *(short *)e) {
                return t[i].v;
            }
            i++;
            e += 8;
        } while (i < n);
    }
    return 0;
}
void func_001A2000(char *, int);
void func_003ABE80(char *p, unsigned char k) {
    if (k == 1) {
        func_001A2000(func_00279290(p + 0x880), 1);
    } else {
        func_001A1E70(func_00279290(p + 0x880), 1);
    }
}

typedef struct { char pad[0x50]; char f; char rest[784 - 0x51]; } E784;
char *func_00228790(E784 *t) {
    int i;
    char *e;
    for (i = 0, e = (char *)t; i < 100; i++, e += 784) {
        if (*(unsigned char *)(e + 0x50) == 0) {
            t[i].f = 1;
            return &t[i].f;
        }
    }
    return 0;
}
int func_002077F0(char *p) {
    switch (*(unsigned char *)(p + 0x38)) {
    case 0:
    case 1:
        return 0;
    case 2:
    case 3:
        return 1;
    }
    return 0;
}
int func_0020CFA0(char *p) {
    char *o = *(char **)(p + 4);
    switch (*(unsigned char *)o) {
    case 0x54:
        return (unsigned char)(*(float *)(p + 8) < (float)*(int *)(o + 4));
    }
    return -1;
}
int func_002D2650(int x, int k, unsigned char *t) {
    int i = 0;
    unsigned char *e;
    if (*t != 0x1C) {
        e = t;
        do {
            if ((unsigned char)k != *e) {
                return (signed char)t[i * 8];
            }
            e += 8;
            i++;
        } while (*e != 0x1C);
    }
    return k;
}

int func_003C4B90(char *p) {
    switch (*(unsigned char *)(p + 0x1424)) {
    case 3:
    case 4:
    case 8:
    case 9:
    case 10:
        return 2;
    }
    return 0;
}
int func_003C4BF0(char *p) {
    switch (*(unsigned char *)(p + 0x1424)) {
    case 3:
    case 4:
    case 8:
    case 9:
    case 10:
        return 2;
    }
    return 0;
}
char *func_0030E9D0(char *p) {
    int i;
    char *e;
    char *t;
    int n;
    n = *(int *)(p + 0x14);
    i = 0;
    if (0 < n) {
        t = *(char **)p;
        e = t;
        do {
            if (*(short *)e == -1) {
                return t + i * 8;
            }
            i++;
            e += 8;
        } while (i < n);
    }
    return 0;
}
int func_002F1EF0(char *p) {
    int n = 0;
    int i;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) {
        return n;
    }
    for (i = 0; i < 10; i++) {
        if (*(signed char *)(p + i + 0x1037) != -1) {
            n++;
        }
    }
    return n;
}
extern short D_00586260[][47];
short func_004838E0(int x, int a) {
    return D_00586260[a / 100][a % 100];
}
void func_0048E970(char *p) {
    switch (*(int *)(p + 8)) {
    case 0:
        *(char *)(p + 0x2D) = 1;
        *(int *)(p + 8) += 1;
    case 1:
        if (*(unsigned char *)(p + 0x2D) == 0) {
            *(char *)(p + 0x2A) = 2;
            *(int *)(p + 4) += 1;
            *(int *)(p + 8) = 0;
        }
        break;
    }
}

char *func_001F3A50(char *, int);
float func_001F3B40(char *a, int b) {
    char *o = func_001F3A50(a, b);
    if (o == 0) {
        return -1.0f;
    }
    if (*(unsigned char *)(o + 0x84) != 1) {
        return (float)*(int *)(o + 0x80);
    }
    return 1000000.0f;
}
float func_001FEE60(char *a, int b) {
    char *o = (char *)func_001FED70(a, b);
    if (o == 0) {
        return -1.0f;
    }
    if (*(unsigned char *)(o + 0x30) != 1) {
        return (float)*(int *)(o + 0x20);
    }
    return 1000000.0f;
}
void func_002F2E30(char *, char *);
void func_004827C0(char *p) {
    char *g;
    *(char *)(p + 0x280) = 1;
    *(char *)(p + 0x44) = -1;
    *(char *)(p + 0x45) = 3;
    *(char *)(p + 0x46) = 0x3B;
    *(char *)(p + 0x47) = 0x29;
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2E30(g, p);
    }
}
int func_001C5F10(char *p) {
    int v = *(int *)(p + 0x158A4);
    *(int *)(p + 0x158A4) = v + 16;
    *(int *)(p + 0x1589C) = v;
    if (*(int *)(p + 0x158A0) == 0) {
        *(int *)(p + 0x158A0) = *(int *)(p + 0x1589C);
    }
    return *(int *)(p + 0x1589C);
}
typedef struct { float x, y, z, w; } V4g;
int func_0038EAA0(char *p, int k, V4g *out, float *r) {
    switch (k) {
    case 0:
        *out = *(V4g *)(p + 0x50);
        *r = 150.0f;
        out->y += 150.0f;
        return 1;
    }
    return 0;
}
unsigned char func_003AC650(char *p) {
    unsigned char r = 0;
    switch (*(unsigned char *)(p + 0x4BE4)) {
    case 7:
    case 8:
    case 9:
    case 0x1B:
    case 0x21:
    case 0x22:
        r = 1;
        break;
    }
    return r;
}

typedef struct { float x, y, z, w; } V4h;
int func_003DD7E0(char *p, int k, V4h *out, float *r) {
    switch (k) {
    case 0:
        *out = *(V4h *)(p + 0x50);
        out->y += 100.0f;
        *r = 100.0f;
        return 1;
    }
    return 0;
}
int func_003E6500(char *p, int k, V4h *out, float *r) {
    switch (k) {
    case 0:
        *out = *(V4h *)(p + 0x50);
        out->y += 150.0f;
        *r = 150.0f;
        return 1;
    }
    return 0;
}
void func_0022F0D0(char *);
void func_0022F610(char *);
void func_0022F620(char *);
void func_0022F060(char *p) {
    switch (*(int *)(p + 0x10)) {
    case 0:
        func_0022F0D0(p);
        break;
    case 1:
        func_0022F610(p);
        break;
    case 2:
        func_0022F620(p);
        break;
    }
}
void func_0019B3D0(int a, char *o) {
    unsigned char n = 5;
    int f = *(int *)o;
    if (f & 0x800) {
        if ((f & 0x1000) || (f & 0x2000)) {
            n = 8;
        } else {
            n = 7;
        }
    } else if ((f & 0x1000) || (f & 0x2000)) {
        n = 9;
    }
    *(char *)(o + 6) = n;
    *(char *)(o + 5) = n;
}
void func_00247510(char *, char *);
void func_00278060(char *p, char *q) {
    if (**(unsigned char **)(p + 0xEC) != 0) {
        if (**(unsigned char **)(p + 0xEC) & 8) {
            *(char **)(q + 0x40) = p + 0xE0;
        }
        if ((unsigned char)(**(unsigned char **)(p + 0xEC) & ~8)) {
            func_00247510(q + 0x14, p + 0xE0);
        }
    }
}
void func_002DBC30(char *p, char *o, unsigned char a, unsigned char b) {
    char *t = *(char **)(p + 0x2840);
    float *v = (float *)(t + ((unsigned short *)t)[a + b * 2]);
    *(float *)(o + 0x38) = v[0];
    *(int *)(o + 0x80) = 0;
    *(float *)(o + 0x84) = v[1];
    *(int *)(o + 0x88) = 0;
    *(float *)(o + 0x8C) = 1.0f;
    *(float *)(o + 0x70) = v[2];
    *(float *)(o + 0x74) = v[3];
    *(float *)(o + 0x78) = v[4];
    *(float *)(o + 0x7C) = 1.0f;
}

void func_0037B280(char *);
void func_0037B560(char *);
void func_0037B8C0(char *);
void func_0037B210(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_0037B280(p);
        break;
    case 1:
        func_0037B560(p);
        break;
    case 2:
        func_0037B8C0(p);
        break;
    }
}
void func_00385810(char *, int);
void func_00385A60(char *p) {
    *(char *)(p + 0x44) = 1;
    switch (*(unsigned char *)(p + 0x54)) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        if (*(unsigned char *)(p + 4) > 0) {
            *(char *)(p + 0x57) = 1;
            func_00385810(p, 0);
        }
        break;
    }
}

extern signed char D_005BE0BC;
extern signed char D_005BE0E4;
extern signed char D_005BE0B4;
extern signed char D_005BE0E8;
void func_00207FE0(void) {
    if (D_005BE0BC != 0) {
        D_005BE0BC--;
    }
    if (D_005BE0E4 != 0) {
        D_005BE0E4--;
    }
    if (D_005BE0B4 != 0) {
        D_005BE0B4--;
    }
    if (D_005BE0E8 != 0) {
        D_005BE0E8--;
    }
}
extern int D_01CAFF38[];
void func_0023A8F0(char *p) {
    *(char *)(p + 0x194D0) = 1;
    *(short *)(p + 0x194D2) = 360;
    *(unsigned char *)(p + 0x194D1) = 200;
    *(short *)(p + 0x194D4) = 35;
    if (D_01CAFF38[0] >= 600) {
        *(char *)(p + 0x194D0) = 0;
    }
}
void func_002D9290(char *p, unsigned char k, float f) {
    char *e;
    switch (k) {
    case 0:
        e = p + *(unsigned char *)(p + 0x28A0) * 96;
        *(float *)(e + 0x25E0) = 10.0f;
        *(int *)(e + 0x25E4) = 0;
        *(float *)(e + 0x25E8) = 10.0f;
        *(int *)(e + 0x25EC) = 0;
        e = p + *(unsigned char *)(p + 0x28A0) * 96;
        *(float *)(e + 0x25F0) = f;
        *(char *)(e + 0x25AC) = 1;
        break;
    }
}
void func_001F9D80(char *p) {
    int i;
    char *a;
    char *b;
    if (*(signed char *)(p + 0x100) == 0) {
        for (i = 3, a = p + 0x18, b = p + 0xC; i <= 6; i++, a += 8, b += 4) {
            if (*(unsigned char *)(a + 0x84) == 1) {
                *(float *)b = *(float *)(a + 0x80);
                *(char *)(a + 0x84) = 0;
            } else {
                *(float *)b = 1.0f;
            }
        }
    }
}

char *func_00501280(char *p, signed char k) {
    int i;
    char *e;
    for (i = 0, e = p; i < 6; i++, e += 6) {
        if (*(unsigned char *)(e + 0x13ED) == 1 && *(signed char *)(e + 0x13EF) == k) {
            return p + i * 6 + 0x13ED;
        }
    }
    return 0;
}
extern char D_005D0E70[];
void func_0013DA10(char *, int);
int func_0030AB30(char *p) {
    float v = *(float *)(p + 0x10);
    if (v < 0.0f) {
        v = -v;
    }
    if (v <= 0.0001f) {
        return 0;
    }
    func_0013DA10(D_005D0E70, 0);
    return 1;
}

void func_0043EB20(char *p, unsigned char k) {
    if (k == 1) {
        if (*(signed char *)(p + 0x7C1) == 0) {
            func_001A2000(func_00279290(p + 0x1C0), 0);
        }
    } else if (*(signed char *)(p + 0x7C1) == 0) {
        func_001A1E70(func_00279290(p + 0x1C0), 0);
    }
}
float func_004D2B70(char *);
int func_004D2CB0(char *p) {
    if (*(unsigned char *)(p + 0xB2C8) == 1 && *(unsigned char *)(p + 0xB2D7) == 1 && func_004D2B70(p) < 40.0f) {
        return 1;
    }
    return 0;
}
int func_00250060(char *p) {
    float a = *(float *)(p + 0xF0);
    if (!(a <= 1.0f) || a < -1.0f) {
        return 1;
    }
    a = *(float *)(p + 0xF8);
    if (!(a <= 1.0f) || a < -1.0f) {
        return 1;
    }
    return 0;
}

void func_002FC2B0(char *p) {
    if (*(unsigned char *)(p + 0x82A) == 0) {
        *(unsigned char *)(p + 4) += 1;
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
    case 1:
        *(unsigned char *)(p + 5) += 1;
        break;
    case 2:
        *(unsigned char *)(p + 4) += 1;
        break;
    }
}
void func_0038ADD0(char *p) {
    if (*(unsigned char *)(p + 0x12C) == 0) {
        *(unsigned char *)(p + 4) += 1;
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
    case 1:
        *(unsigned char *)(p + 5) += 1;
        break;
    case 2:
        *(unsigned char *)(p + 4) += 1;
        break;
    }
}
void func_004F8A90(char *p, char *o) {
    int k = *(unsigned char *)(p + 0x60C);
    if (k == 0 || k == 1) {
        if (*(unsigned char *)(p + 0x616) == 0) {
            if (*(unsigned char *)(o + 0x3D) == 12 && *(unsigned char *)(p + 5) == 0) {
                *(char *)(p + 0x616) = 1;
                *(char *)(p + 0x617) = 1;
            } else if (*(signed char *)(o + 2) == 0) {
                *(char *)(p + 0x616) = 1;
                *(char *)(p + 0x618) = 1;
                return;
            }
        }
    }
}
int func_004B2EA0(char *p) {
    int i;
    if (*(signed char *)(p + 0x3DF0) != 0 || *(unsigned char *)(p + 0x3DF2) != 1) {
        return 0;
    }
    for (i = 0; i < 2; i++, p += 6) {
        if (*(signed char *)(p + 0x3DF4) != 0 || *(unsigned char *)(p + 0x3DF8) != 0) {
            return 0;
        }
    }
    return 1;
}

void func_00385500(char *p) {
    if (*(signed char *)(p + 0x58) == 0 && *(unsigned char *)(p + 0xA0) == 0) {
        *(unsigned char *)(p + 4) += 1;
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
    case 1:
        *(unsigned char *)(p + 5) += 1;
        break;
    case 2:
        *(unsigned char *)(p + 4) += 1;
        break;
    }
}
extern int D_01CAFF30[];
int func_0020F100(char *p) {
    switch (D_01CAFF30[0]) {
    case 9:
        return 0;
    case 10:
        return (*(int *)(p + 0x18) & 8) != 0;
    case 11:
        return 1;
    case 12:
        return (*(int *)(p + 0x18) & 8) == 0;
    }
    return 0;
}

typedef struct { signed char v; signed char k; } KV2;
extern KV2 D_0056AF30[];
int func_00406EA0(int p0, signed char k) {
    int i;
    KV2 *e;
    if (k == -1) {
        return -1;
    }
    i = 0;
    if (D_0056AF30[0].v != 0x3B) {
        e = D_0056AF30;
        do {
            if (k == e->k) {
                return D_0056AF30[i].v;
            }
            e++;
            i++;
        } while (e->v != 0x3B);
    }
    return -1;
}
typedef struct { float x, y, z, w; } V4i;
int func_003AC490(char *p, int k, V4i *out, float *r) {
    switch (k) {
    case 0:
        switch (*(unsigned char *)(p + 0x4BE4)) {
        case 0x23:
            return 0;
        }
        *out = *(V4i *)(p + 0x50);
        out->y += 100.0f;
        *r = 100.0f;
        return 1;
    }
    return 0;
}

typedef struct { float x, y, z, w; } V4j;
int func_0048AAA0(char *p, int k, V4j *out, float *r) {
    if (!(*(float *)(p + 0x4C4) <= 0.0f)) {
        switch (k) {
        case 0:
            *out = *(V4j *)(p + 0x50);
            *r = 150.0f;
            out->y += 150.0f;
            return 1;
        }
        return 0;
    }
    return 0;
}
void func_003305E0(char *, int, int, int, int, int, int);
void func_00330DA0(char *p, int k, int c, int d) {
    int n;
    if (c != 0) {
        switch (k) {
        case 0:
            n = 10;
            break;
        case 1:
            n = 11;
            break;
        case 2:
            n = 12;
            break;
        case 3:
            n = 13;
            break;
        default:
            return;
        }
        func_003305E0(p, 8, n, d, c, 0, c);
    }
}
extern char D_0055E250[];
extern char D_0055E254[];
extern char D_0055E258[];
extern char D_0055E25C[];
extern char D_0055E260[];
int func_0036DF10(char *, int, int, int, int, int);
int func_0036DF70(char *p, int i) {
    if (i > 15) {
        return 0;
    }
    return func_0036DF10(p, *(int *)(D_0055E250 + i * 20), *(int *)(D_0055E254 + i * 20), *(int *)(D_0055E258 + i * 20), *(int *)(D_0055E25C + i * 20), *(int *)(D_0055E260 + i * 20));
}
void func_0024F220(char *p) {
    unsigned char *c;
    int v;
    *(int *)(p + 0x14) += 1;
    *(int *)(p + 0x14) += 1;
    c = *(unsigned char **)(p + 0x14);
    v = c[0] | (c[1] << 8) | (c[2] << 16) | (c[3] << 24);
    *(unsigned char **)(p + 0x14) = c + 1;
    *(int *)(p + 0x14) += 1;
    *(int *)(p + 0x14) += 1;
    *(int *)(p + 0x14) += 1;
    if (*(char **)(p + 0xCC) != 0) {
        *(int *)(*(char **)(p + 0xCC) + 0xD8) = v;
    }
}

typedef struct { signed char a; signed char b; signed char c; } KV3;
extern KV3 D_0056AEE0[];
int func_00406CF0(int p0, signed char k) {
    int i;
    KV3 *e;
    if (k == -1) {
        return -1;
    }
    i = 0;
    if (D_0056AEE0[0].a != 0xF) {
        e = D_0056AEE0;
        do {
            if (k == e->c) {
                return D_0056AEE0[i].a;
            }
            e++;
            i++;
        } while (e->a != 0xF);
    }
    return -1;
}
int func_00406D80(int p0, signed char k) {
    int i;
    KV3 *e;
    if (k == -1) {
        return -1;
    }
    i = 0;
    if (D_0056AEE0[0].b != 0x3B) {
        e = D_0056AEE0;
        do {
            if (k == e->c) {
                return D_0056AEE0[i].b;
            }
            e++;
            i++;
        } while (e->b != 0x3B);
    }
    return -1;
}
int func_00406E10(signed char k) {
    int i;
    KV3 *e;
    if (k == -1) {
        return -1;
    }
    i = 0;
    if (D_0056AEE0[0].b != 0x3B) {
        e = D_0056AEE0;
        do {
            if (k == e->a) {
                return D_0056AEE0[i].b;
            }
            e++;
            i++;
        } while (e->b != 0x3B);
    }
    return -1;
}
void func_001971F0(char *);
typedef struct { int a; int id; int ref; char obj[0x110 - 12]; } RefSlot;
int func_00286780(char *p, int id) {
    RefSlot *t = (RefSlot *)p;
    int i;
    char *e;
    if (id != 0) {
        for (i = 0, e = (char *)t; i < 32; i++, e += 0x110) {
            if (*(int *)(e + 4) == id) {
                t[i].ref -= 1;
                if (t[i].ref == 0) {
                    t[i].id = 0;
                    func_001971F0(t[i].obj);
                    return 1;
                }
                return 0;
            }
        }
    }
    return 0;
}

extern char D_00598570[];
extern char D_00599090[];
extern unsigned char D_005BE148;
extern char D_00645A30[];
char *func_001005E0(int, int, char *, char *, int);
int func_00195D90(char *);
char *func_002F7DC0(void) {
    int v;
    char *o;
    v = func_00195D90(D_00645A30);
    if (v != 0) {
        do {
            o = func_001005E0(v, 0, D_00599090, D_00598570, 0);
            if (o != 0 && D_005BE148 == *(unsigned char *)(o + 4)) {
                return o;
            }
            v = func_00195D90(D_00645A30);
        } while (v != 0);
    }
    return 0;
}
float func_0021CBE0(char *p, unsigned char k, float d) {
    if (k == 0) {
        if (*(unsigned char *)(p + 0x28AC) == 1) {
            return *(float *)(p + 0x28C4);
        }
        if (*(unsigned char *)(p + 0x28AE) == 1 || *(unsigned char *)(p + 0x3C79) == 1 || *(unsigned char *)(p + 0x3C78) == 1) {
            return *(float *)(p + 0x28C4);
        }
    }
    *(float *)(p + 0x28C4) += d;
    if (!(*(float *)(p + 0x28C4) <= *(float *)(p + 0x28C8))) {
        *(float *)(p + 0x28C4) = *(float *)(p + 0x28C8);
    }
    return *(float *)(p + 0x28C4);
}

char *func_002871E0(char *p, unsigned char k, int id) {
    char *v;
    for (v = *(char **)(p + 0x394); v != 0; v = *(char **)(v + 8)) {
        if (*(unsigned char *)(v + 0x11) == k && *(int *)(v + 0x14) == id) {
            return v;
        }
    }
    for (v = *(char **)(p + 0x388); v != 0; v = *(char **)(v + 8)) {
        if (*(unsigned char *)(v + 0x11) == k && *(int *)(v + 0x14) == id) {
            return v;
        }
    }
    return 0;
}
float func_003216D0(char *p) {
    float v = *(float *)(p + 0x14);
    if (*(unsigned char *)(p + 0x8C) != 0) {
        v += *(float *)(*(char **)(*(char **)(p + 8) + 0x1C) + 0x1C) * (float)*(unsigned int *)(p + 0x90);
    }
    if (!(v <= 1199.0f)) {
        v = 1199.0f;
    }
    if (v < 0.0f) {
        v = 0.0f;
    }
    return v;
}

typedef struct { short id; short a; short b; } Tri16;
extern Tri16 D_00541B60[];
void func_0020E4D0(char *p, short a, short b) {
    int i = 0;
    Tri16 *e;
    if (D_00541B60[0].id != -1) {
        e = D_00541B60;
        do {
            if (D_01CAFF38[0] == e->id) {
                *(short *)(p + 0xF6) = D_00541B60[i].a;
                *(short *)(p + 0xF8) = D_00541B60[i].b;
                break;
            }
            e++;
            i++;
        } while (e->id != -1);
    }
    if (*(short *)(p + 0xF6) == -1) {
        *(short *)(p + 0xF6) = a;
        *(short *)(p + 0xF8) = b;
    }
}

extern char D_01CB1290[];
extern int D_01CB1308[];
extern int D_01CB130C[];
extern int D_01CB1310[];
void func_001F41B0(char *, int, int);

void func_001F4820(char *, int);
void func_0030F510(char *p, int s, int *last) {
    int x;
    int y;
    if (*last != s) {
        *(char *)*last = 0;
        x = D_01CB1308[0];
        y = D_01CB130C[0];
        if (*(unsigned char *)(p + 33) == 1) {
            func_001F41C0(D_01CB1290, *(int *)(p + 48));
            func_001F41B0(D_01CB1290, x + 1, y + 1);
            D_01CB1310[0] = 0xFFFFF1;
            func_001F4820(D_01CB1290, s);
        }
        func_001F41C0(D_01CB1290, *(int *)(p + 36));
        func_001F41B0(D_01CB1290, x, y);
        D_01CB1310[0] = 0xFFFFF2;
        func_001F4820(D_01CB1290, s);
        *last = s;
    }
}

int func_0019F6C0(int, int, int);
void func_0019F8B0(int, char *, int, int);
int func_001A1CB0(int, int, int);
char *func_001B0FD0(char *, int, int);
int func_0031DF90(char *p, int a, int b, int c, int d, int e) {
    int n = func_0019F6C0(a, b, d);
    char *buf;
    if (n <= 0) {
        return 0;
    }
    buf = func_001B0FD0(p + 4, n, -2);
    if (buf == 0) {
        return 0;
    }
    func_0019F8B0(a, buf, b, d);
    if (func_001A1CB0(a, b, n) != 0) {
        return 0;
    }
    func_001A0050(a, b, c, e, 0);
    *(int *)(p + 20) = a;
    *(int *)(p + 24) = b;
    *(char *)(p + 28) = 1;
    return 1;
}

int func_0019DE30(char *, int);
int func_0019DE60(char *, int);
int func_0019DE90(char *, int);
int func_0019DEC0(char *, int);
int func_0019DF30(char *, int);
int func_0019DFF0(char *, int);
int func_0019E0F0(char *, int);
void func_00206730(char *);
int func_0024E800(char *);
void func_002EF940(int, char *);
void func_003AA990(char *, int);
int func_003ACB40(char *);
void func_003AA8F0(char *);
void func_001AD100(char *);
void func_00373620(char *);
void func_00375000(char *);
void func_003758E0(char *);
extern char D_00568D20[];
void func_0028C200(char *, char *, char *, int, char *, char *, int);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
void func_0028C3A0(char *, int, int, char *);
void func_0021CBB0(char *);
void func_002DAF70(char *, int, int, int, float);
void func_002490F0(char *, int, int, int, int, int, float);
void func_002DB2C0(char *);
int func_002496D0(char *);
void func_0021B790(char *, int);
void func_002DBAA0(char *, short, float);
int func_0024E780(char *, int, int);
void func_0024E7B0(char *, int, int);
void func_0028C290(char *, int, int, char *);
extern char D_0057BA70[];
void func_00253110(char *, char *, int, float);
int func_002536B0(char *, char *);
void func_00471F60(char *, int);
void func_002530C0(char *, char *);
void func_001B4A50(char *, int, int);
void func_001F8910(char *, char *, char *, char *, int, int, float);
void func_00131700(char *, char *, float *);
void func_00105230(char *, char *, float *);
void func_001318E0(char *, char *, float *);
typedef struct { float v[4]; } __attribute__((aligned(16))) V4;
extern V4 D_0057BAB0;
void func_00133890(char *, char *, V4 *);
extern char D_01C61900[];
extern char *D_005BE09C;
void func_00210220(char *);
char *func_00210240(char *);
long func_0011EF60(int, unsigned long);
void func_00138120(int);
void func_001C52F0(char *);
void func_004F7680(int, char *, int, short, char *);
void func_00105300(char *, char *);
void func_00104E78(char *, char *);
extern int D_005BE0E0;
extern char D_01CB0530[];
void func_00130990(int, int);
void func_002289C0(char *);
void func_002289F0(char *);
void func_002290E0(char *);
void func_002965E0(char *, int);
void func_001A1F90(char *);
void func_0029FD40(char *);
char *func_0027A710(char *);
void func_001A20C0(char *, int);
void func_001A1F30(char *, int);
void func_003023F0(int);
void func_00322C50(char *);
void func_00322620(char *);
void func_00322870(char *);
void func_0037E850(char *, int);
void func_0034BA60(int, char *, int, int, int);
void func_0037D030(char *, int);
void func_002F2D30(char *, char *);
void func_0041D670(char *);
void func_003B4B60(char *, int);
void func_001970E0(char *);
int func_0013D2A0(char *, char *, int);
void func_00220860(char *, int, int, float);
void func_002497E0(char *);
void func_00249860(char *);
void func_0028C5C0(char *, int, float);
extern char D_005A7770[];
extern char D_01DF8E4D[];
extern char D_01DFA340[];
void func_00228300(char *);
void func_004BC510(char *);
void func_004BC5C0(char *);
void func_00100580(char *);
void func_004D85E0(char *, int);
int func_00207060(char *);
void func_00213C40(char *);
void func_002102E0(void);
void func_00230000(char *);
void func_0022F8C0(char *);
void func_0027BF60(char *);
void func_0013CF50(char *);
void func_00197C90(char *);
void func_002DAB90(char *, int);
int func_002DA0B0(int, int);
int func_002D9EB0(char *);
extern char D_005A7AA0[];
extern char D_005A7990[];
void func_001FF760(char *, int);
void func_00202010(char *, char *, char *, float);
void func_001C4970(char *, char *, int);
int func_002102F0(char *);
void func_003008D0(char *);
void func_00300CC0(char *);
void func_00300BD0(char *);
void func_00301160(char *);
void func_003A02B0(char *, int);
extern signed char D_005BD070;
void func_003C5430(char *, char *);
void func_00417C70(char *);
void func_00418040(char *);
void func_003FA440(char *, int);
void func_003FA3F0(char *, int);
void func_0044CD30(char *);
void func_0044CED0(char *);
void func_0044CEE0(char *);
short func_0034B940(char *, char *);
void func_00131650(char *, char *);
extern float D_005679BC;
extern float D_005679C0;
extern char D_00558B60[];
void func_00128488(char *, int, int);
int func_0023DF80(char *, int, int, float);
void func_0021C100(char *, int, int, float, float);
void func_00385460(char *);
void func_00385500(char *);
void func_00385580(char *);
void func_0019DD20(char *p) {
    int k;
    float v;
    if ((*(int *)p & 0x80000000) && !(*(int *)p & 1)) {
        v = *(float *)(*(char **)(p + 92) + 432);
        *(float *)(p + 112) = v;
        if (v > 0.0f) {
            k = *(unsigned char *)(p + 6);
            switch (k) {
            case 0:
                func_0019DE30(p, k);
                break;
            case 1:
                func_0019DE60(p, k);
                break;
            case 2:
                func_0019DE90(p, k);
                break;
            case 3:
                func_0019DEC0(p, k);
                break;
            case 4:
                func_0019DF30(p, k);
                break;
            case 5:
                func_0019DFF0(p, k);
                break;
            case 10:
                func_0019E0F0(p, k);
                break;
            }
        }
    }
}

void func_003AC510(char *p) {
    char *q;
    func_00206730(p + 0x4B14);
    if (*(char **)(p + 0x4B14) == 0) {
        *(char **)(p + 0x4B14) = func_00207480(3, 0xDC, 0, 16);
        q = *(char **)(p + 0x4B14);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x71C) + 0x104);
            q[0x9A] = 1;
            *(*(char **)(p + 0x4B14) + 0x3A) = 1;
        }
    }
    func_003305E0(D_01DFABA0, 0, 0x5B, (int)(p + 0x50), 0, 0, 0);
}

void func_003AC5B0(char *p) {
    char *q;
    func_00206730(p + 0x4B14);
    if (*(char **)(p + 0x4B14) != 0) {
        func_001AD140(*(char **)(p + 0x4B14));
        *(char **)(p + 0x4B14) = 0;
    }
    q = func_00207480(3, 0xDC, 0, 16);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x71C) + 0x104);
        q[0x9A] = 1;
        q[0x3A] = 1;
    }
    func_003305E0(D_01DFABA0, 0, 0x5D, (int)(p + 0x50), 0, 0, 0);
}

void func_003A71F0(char *p) {
    *(float *)(p + 0x516C) = *(float *)(p + 0x516C) + *(float *)(p + 0x10);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            func_003AA990(p, 15);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003A88A0(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1 && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            *(signed char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_00373580(char *p) {
    func_001AD100(p);
    *(float *)(p + 0x8F0) = *(float *)(p + 0x10);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x840), "r"(p + 0x50) : "memory");
    *(int *)(p + 0x110) = 0;

    switch ((unsigned char)*(unsigned char *)(p + 4)) {
    case 0:
        func_00373620(p);
        break;
    case 1:
        func_00375000(p);
        break;
    case 2:
        func_003758E0(p);
        break;
    case 3:
        break;
    }
}

void func_004073E0(char *p) {
    func_0028C200(p + 0x150, p + 0x370, p + 0x380, 3, D_00568D20, p, 0);
    func_0028C8E0(p + 0x150, 3);
    func_0028C910(p + 0x150);
    *(unsigned char *)(p + 0x370) = 1;
    *(unsigned char *)(p + 0x371) = 0;
    *(short *)(p + 0x372) = 0;
    *(unsigned char *)(p + 0x380) = 2;
    *(int *)(p + 0x390) = 0;
    *(int *)(p + 0x394) = 0;
    *(int *)(p + 0x398) = 0;
    *(float *)(p + 0x39C) = 1.0f;
    *(float *)(p + 0x3A0) = 300.0f;
    func_0028C3A0(p + 0x150, 0, -1, p + 0x3D0);
    if (*(char **)(p + 0x1CC) != 0) {
        *(*(char **)(p + 0x1CC) + 2) = 1;
    }
}

void func_003C6A10(char *p) {
    switch (*(unsigned char *)(p + 7)) {
    case 0:
        *(unsigned char *)(p + 7) = *(unsigned char *)(p + 7) + 1;
    case 1:
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 4) {
            func_0024E7B0(p + 0x1500, 0, 0);
            func_0028C8E0(p + 0x1950, 2);
            func_0028C910(p + 0x1950);
            func_0028C290(p + 0x1950, 7, 10, p + 0x64C);
            func_0028C290(p + 0x1950, 8, 10, p + 0x64C);
            func_0028C290(p + 0x1950, 9, 10, p + 0x64C);
            func_0028C290(p + 0x1950, 13, 10, p + 0x64C);
            func_0028C290(p + 0x1950, 14, 10, p + 0x64C);
        }
        if ((unsigned char)func_0024E800(p + 0x1500) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_00471940(char *p) {
    *(unsigned char *)(p + 0x4B0) = 1;
    *(float *)(p + 0x144) = *(float *)(p + 0x144) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x144) < 0.0f) {
        *(unsigned char *)(p + 0x4B0) = 0;
    }
    if (*(unsigned char *)(p + 0x4B0) == 1) {
        func_00253110(p, p + 0x480, 3, *(float *)(p + 0x10));
        switch (func_002536B0(p, p + 0x480)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x4B0) = 0;
            break;
        case -1:
            *(unsigned char *)(p + 0x4B0) = 0;
            break;
        }
    }
    if (*(unsigned char *)(p + 0x4B0) == 0) {
        func_00471F60(p, 0);
        *(unsigned char *)(p + 0x148) = 1;
        func_002530C0(p, D_0057BA70);
        *(unsigned char *)(p + 0x4B0) = 1;
        *(unsigned char *)(p + 5) = 1;
    }
}

void func_001B5FB0(char *p) {
    char *q;
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    func_001B4A50(p, 0, 0x18);
    q = *(char **)(p + 0x440);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xD0), "r"(q) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(q + 0x10) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xF0), "r"(q + 0x20) : "memory");
    *(unsigned char *)(p + 0x454) = 0;
    *(char **)(p + 0x45C) = q + 0x48;
    *(float *)(p + 0x458) = *(short *)(q + 0x48);
    *(unsigned char *)(p + 0x455) = 0;
    func_001F8910(p + 0x444, p + 0x444, *(char **)(p + 0x45C), *(char **)(p + 0x45C) + 0x14, 4, 4, 0.0f);
}

void func_004B9370(char *p) {
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
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x3B0) : "memory");
    func_00131700(p + 0x3B0, p + 0x3B0, rot);
    func_00105230(p + 0x3B0, p + 0x3B0, pos);
    func_001318E0(p + 0x3B0, p + 0x3B0, scl);
}

void func_00471C30(char *p) {
    V4 t;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x150) : "memory");
    t = D_0057BAB0;
    func_00133890(p + 0x150, p + 0xF0, &t);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
}

int func_001F8D70(char *p) {
    func_0013D5D0(p + 0xC);
    *(int *)(p + 0x1C) = 0;
    *(int *)(p + 0x20) = 0;
    return 1;
}

void func_0030ABB0(char *p) {
    func_00210220(p);
    *(int *)(p + 0x20) = *(short *)(func_00210240(p) + 4);
}

int func_00331040(int a, unsigned int b) {
    return func_0011EF60(func_00352CA0(), b);
}

void func_001EC8A0(char *p) {
    func_00138120(0);
    if (*(unsigned char *)(p + 0x3C9) == 1) {
        func_001C52F0(D_01C61900);
    }
}

void func_003B62C0(char *p) {
    func_004F7680(*(int *)(p + 0x4C0), p, 1, *(short *)(p + 0x90), *(char **)(func_00279290(p + 0x700) + 0x108) + 0x370);
}

void func_001B3AE0(int unused, char *q) {
    func_00105300(q, D_005BE09C + 0x100);
    *(int *)(q + 0x30) = 0;
    *(int *)(q + 0x34) = 0;
    *(int *)(q + 0x38) = 0;
    func_00104E78(q, q);
}

void func_00226C80(char *p) {
    func_002496D0(p);
    if (!(*(float *)(p + 0x2924) <= *(float *)(p + 0x54) - 5.0f)) {
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + 5.0f;
    }
}

void func_003586A0(char *p) {
    *(char **)(p + 0x7F0) = func_00207480(3, 0x9C, p + 0x520, 0x40);
    if (*(char **)(p + 0x7F0) != 0) {
        *(*(char **)(p + 0x7F0) + 0x3A) = 1;
    }
}

void func_00376E40(char *p) {
    char *q;
    func_002EF940(*(int *)D_01CAFF0C, p + 0x39F0);
    q = *(char **)(p + 0x910);
    if (q != 0) {
        func_002EF940(*(int *)D_01CAFF0C, q + 0x39F0);
    }
}

void func_001AF640(char *p, unsigned char a, unsigned char b) {
    int h = func_001AEA60(p, 0, (unsigned short)(a + b));
    if (h != 0) {
        func_001AF080(p, h);
    }
}

char *func_001ED7B0(char *p) {
    D_005BE0D8 = D_01CB0530;
    func_00130990((int)D_005BE0D8, 0x28);
    func_00130990(D_005BE0E0 = 0x700000A0, 0x18);
    return p;
}

void func_00228970(char *p) {
    *(unsigned char *)(p + 0x1329A) = 1;
    func_002289C0(p);
    func_002289F0(p);
    func_002290E0(p);
    *(unsigned char *)(p + 0x1329A) = 0;
}

void func_00298200(char *p) {
    if (func_0024E800(p + 0x8980) != 0) {
        func_0024E7B0(p + 0x8980, 0, 0);
        func_002965E0(p, 0xFFFF);
    }
}

void func_002C4ED0(char *p) {
    *(unsigned char *)(p + 0x2F21) = 0;
    func_001A1F90(func_00279290(p + 0x640));
    if (*(unsigned char *)(p + 0x1840) == 1) {
        func_001A1F90(func_00279290(p + 0xC40));
    }
}

void func_002C4F30(char *p) {
    *(unsigned char *)(p + 0x2F21) = 1;
    func_001A1E10(func_00279290(p + 0x640));
    if (*(unsigned char *)(p + 0x1840) == 1) {
        func_001A1E10(func_00279290(p + 0xC40));
    }
}

void func_003C04A0(char *p, int a, int b) {
    if (a >= 0 && b >= 0) {
        *(int *)(p + 0x1BBC) = a;
        *(int *)(p + 0x1BC0) = b;
        func_0024DA80(p + 0x1680, *(int *)(p + 0x1BBC), *(int *)(p + 0x1BC0));
        func_0024DA80(p + 0x1750, *(int *)(p + 0x1BBC), *(int *)(p + 0x1BC0));
    }
}

void func_0029C350(char *p) {
    if (func_0024E800(p + 0x8980) != 0) {
        func_002965E0(p, 0xFFFF);
        func_0029FD40(p);
        *(int *)(p + 0xAA9C) = 0;
        *(unsigned char *)(p + 0xA563) = 0;
    }
}

void func_002E5910(char *p, int a) {
    if (*(signed char *)(p + 0x286) != 0) {
        func_001A2000(func_00279290(*(char **)(p + 0x240)), a);
    } else {
        func_001A20C0(func_0027A710(*(char **)(p + 0x240)), a);
    }
}

void func_002E5970(char *p, int a) {
    if (*(signed char *)(p + 0x286) != 0) {
        func_001A1E70(func_00279290(*(char **)(p + 0x240)), a);
    } else {
        func_001A1F30(func_0027A710(*(char **)(p + 0x240)), a);
    }
}

static inline unsigned char flag0(char *p) {
    return (*(unsigned short *)(p + 0x20CC) & 1) != 0;
}

void func_003B65E0(char *p) {
    int r;
    if (flag0(p)) {
        r = func_0024E780(p + 0x1D00, 1, 0);
        if (*(int *)(p + 0x20C0) != 0 && (unsigned char)r != 0) {
            func_003023F0(*(int *)(p + 0x20C0));
        }
    }
}

void func_004B74E0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_001A1F90(func_00279290(p + 0x1C0));
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 1:
        break;
    }
}

int func_004F90B0(char *p) {
    char *e = func_00207480(3, 0x291, 0, 16);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x5B0;
        e[0x9A] = 0;
        e[0x3A] = 1;
        return 1;
    }
    return 0;
}

void func_003225B0(char *p) {
    func_001AD100(p);
    func_00322C50(p);
    switch (*(unsigned char *)(p + 0x430)) {
    case 0:
        func_00322620(p);
        break;
    case 1:
        func_00322870(p);
        break;
    }
}

void func_0037CCE0(char *p, int k) {
    switch (k) {
    case 14:
        func_0037E850(p, 4);
        func_0034BA60(0x20, p + 0x6F0, 0x29, 0, 1);
        break;
    default:
        func_0037D030(p, *(int *)(*(char **)(p + 0x782C) + 0x10));
        break;
    }
}

void func_0038E6F0(char *p) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2D30(g, p);
    }
    *(int *)(p + 0x110) = 0;
    if (*(char **)(p + 0x43C) != 0) {
        func_001AD140(*(char **)(p + 0x43C));
        *(char **)(p + 0x43C) = 0;
    }
    func_0041D670(p + 0x410);
}

int func_003B4840(char *p) {
    short k = *(short *)(p + 0x20CE);
    if (k < 0 || k >= 39) {
        *(short *)(p + 0x20CE) = -1;
        return 0;
    }
    func_003B4B60(p, k);
    *(float *)(p + 0x21D4) = *(float *)(p + 0x21D8);
    *(short *)(p + 0x20CE) = -1;
    return 1;
}

void func_003B6370(char *p) {
    char *e = func_00207480(3, 0x29, 0, 16);
    if (e != 0) {
        *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x668) + 0x104);
        e[0x9A] = 0;
        e[0x3A] = 1;
        e[0x9C] = 0;
        e[0x9D] = 0;
        e[0x9E] = 0;
        e[0x9B] = 2;
    }
}

void func_0048A740(char *p) {
    char *g;
    *(int *)(p + 0x110) = 0;
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2D30(g, p);
    }
    func_0041D670(p + 0x4D4);
    func_0041D670(p + 0x4D8);
    func_0041D670(p + 0x4DC);
    func_0041D670(p + 0x4E0);
    func_0041D670(p + 0x440);
}

void func_00196C40(char *base, char *q) {
    if (q != 0) {
        if (q < base || q > base + 0x1FC0) {
            return;
        }
        if (*(short *)(q + 0x3A) != 0) {
            func_001970E0(base);
        }
        func_00130990((int)q, 0x10);
    }
}

int func_001AEBC0(char *p, char *q, int n) {
    int r;
    if (*(unsigned char *)(p + 0x270C) == 1 && *(int *)(p + 0x26E4) != 0) {
        r = func_0013D2A0(q + 0x10, p + 0x26E0, n);
    } else {
        r = (int)func_001B0FD0(q + 0x10, n, 0);
    }
    if (r == 0) {
        return 0;
    }
    *(int *)(q + 0xC) = r;
    return 1;
}

void func_002211D0(char *p) {
    switch (*(unsigned char *)(p + 0x2850)) {
    case 0:
        func_00220860(p, 1, 0, 5.0f);
        *(unsigned char *)(p + 0x2850) = *(unsigned char *)(p + 0x2850) + 1;
        break;
    case 1:
        func_002497E0(p);
        func_00249860(p);
        break;
    }
}

void func_002B45A0(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 0:
    case 1:
        func_001A1F90(func_00279290(p + 0xAC0));
    }
    func_001A1F90(func_00279290(p + 0x16C0));
}

void func_002BC120(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 4:
    case 5:
        func_001A1F90(func_00279290(p + 0xAC0));
    }
    func_001A1F90(func_00279290(p + 0x16C0));
}

void func_002FD5F0(char *p) {
    char *e = func_00207480(3, 0x82, 0, 0x20);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x560;
        e[0x9A] = 0;
    }
    e = func_00207480(3, 0x1C, 0, 0x20);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x560;
        e[0x9A] = 0;
    }
}

void func_00371040(char *p) {
    *(float *)(p + 0x570) = *(float *)(p + 0x570) - 1.0f;
    if (*(float *)(p + 0x570) < 0.0f) {
        func_0028C5C0(p + 0x150, 0, 1.0f);
        func_001AD140(p);
    } else {
        func_0028C5C0(p + 0x150, 0, 1.0f);
    }
}

void func_003A7110(char *p) {
    *(float *)(p + 0x516C) = *(float *)(p + 0x516C) + *(float *)(p + 0x10);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        func_0024E800(p + 0x4BF0);
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

int func_0041D600(char *p) {
    func_00228300(p + 0xD0);
    if (*(char **)(p + 0xD0) == 0) {
        func_001AD140(p);
        return 0;
    }
    if (*(int *)(*(char **)(p + 0xD0) + 0x110) & 4) {
        func_001AD140(p);
        return 0;
    }
    return 1;
}

void func_004BC4A0(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_004BC510(p);
        break;
    case 1:
        func_004BC5C0(p);
        break;
    }
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

char *func_00202D90(char *p, short flag) {
    if (p != 0) {
        if (p + 0x814 != 0) {
            *(char **)(p + 0x814) = D_005A7770;
        }
        if (p + 4 != 0) {
            *(char **)(p + 4) = D_005A7770;
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_004D7230(char *p) {
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

void func_001B4640(char *p) {
    func_001AD100(p);
    *(float *)(p + 0xBC) = *(float *)(p + 0xBC) + *(float *)(p + 0x10);
    if (D_005BE0BC != 0) {
        func_001AD140(p);
    } else if (func_00207060(p) != 0) {
        func_001AD140(p);
    } else {
        *(volatile unsigned char *)(p + 0x39);
    }
}

void func_00213AC0(char *p) {
    D_01DF8E4D[0] = 0;
    D_01DFA340[0] = 0;
    func_00213C40(p);
    func_002102E0();
    func_00230000(p + 0x3308);
    func_0022F8C0(p + 0x850C);
    func_0027BF60(p + 0x260C);
    func_0013D5D0(p + 0x25C8);
    func_0013CF50(p + 0x25F4);
    func_0013CF50(p + 0x2600);
    func_00197C90(p + 0x25D8);
}

void func_00221B40(char *p) {
    switch (*(unsigned char *)(p + 0x2904)) {
    case 1:
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DAB90(p, 3);
        }
    }
}

void func_0029CAD0(char *p) {
    if (func_0024E800(p + 0x8980) != 0 || *(unsigned char *)(p + 0x8922) == 0) {
        func_002965E0(p, 0xFFFF);
        func_0029FD40(p);
        *(int *)(p + 0xAA9C) = 0;
        *(unsigned char *)(p + 0xA563) = 0;
    }
}

char *func_00437250(char *p) {
    char *s;
    if (*(unsigned char *)(p + 0x485E) == 0) {
        s = *(char **)(*(char **)D_01CAFF0C + 0xC);
        return *(char **)(((char **)(s + 0x1390))[func_002D9EB0(s)] + 0x104) + 0x30;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x4810), "r"(p + 0x150) : "memory");
    *(float *)(p + 0x4814) = *(float *)(p + 0x4814) + 100.0f;
    return p + 0x4810;
}

char *func_0023AD20(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A7AA0;
        if (p + 0x14 != 0) {
            *(char **)(p + 0x14) = D_005A7990;
        }
        if (p + 8 != 0) {
            *(char **)(p + 8) = D_005A7990;
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_00248660(char *p) {
    func_001FF760(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, 1);
    func_00202010(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, p + 0x1A0, p + 0x190, 50.0f);
    func_001FF760(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, 0);
    *(float *)(p + 0x1AC) = 1.0f;
}

void func_00283700(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    if (*(unsigned char *)(p + 0x2620) != 0) {
        func_001A1F90(func_00279290(p + 0xAC0));
    }
    if (*(unsigned char *)(p + 0x2621) != 0) {
        func_001A1F90(func_00279290(p + 0x10C0));
    }
    func_001A1F90(func_00279290(p + 0x16C0));
}

void func_00283780(char *p) {
    func_001A1E10(func_00279290(p + 0x4C0));
    if (*(unsigned char *)(p + 0x2620) != 0) {
        func_001A1E10(func_00279290(p + 0xAC0));
    }
    if (*(unsigned char *)(p + 0x2621) != 0) {
        func_001A1E10(func_00279290(p + 0x10C0));
    }
    func_001A1E10(func_00279290(p + 0x16C0));
}

void func_002C2FF0(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 8:
    case 9:
        func_001A1F90(func_00279290(p + 0xAC0));
        func_001A1F90(func_00279290(p + 0x10C0));
    }
    func_001A1F90(func_00279290(p + 0x16C0));
}

void func_00300C40(char *p) {
    switch (*(unsigned char *)(p + 0x39)) {
    case 0:
    case 1:
        func_003008D0(p);
        func_00300CC0(p);
        break;
    case 2:
    case 3:
        func_00300BD0(p);
        func_00301160(p);
        break;
    }
}

int func_003A0230(char *p) {
    short k = *(short *)(p + 0x2DDA);
    if (k < 0 || k >= 66) {
        *(short *)(p + 0x2DDA) = -1;
        return 0;
    }
    if (k == *(short *)(p + 0xAC0)) {
        *(short *)(p + 0x2DDA) = -1;
        return 1;
    }
    func_003A02B0(p, k);
    *(float *)(p + 0x2E24) = *(float *)(p + 0x2E28);
    *(short *)(p + 0x2DDA) = -1;
    return 1;
}

void func_003C5890(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(int *)(p + 0x15DC) = 0;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x1430) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C5AE0(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x1430) == 1) {
            *(int *)(p + 0x15DC) = 0;
            *(float *)(p + 0x1CB8) = *(float *)(p + 0x1C24);
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C7390(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        func_0034BA60(0x3A, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
    case 1:
        if ((unsigned char)func_0024E800(p + 0x1500) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
}

void func_003DD450(char *p) {
    char *g;
    if (*(unsigned char *)(p + 0xEFC) == 1 && *(char **)(p + 0x308) != 0) {
        func_003C5430(*(char **)(p + 0x308), p);
    }
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2D30(g, p);
    }
    func_00206730(p + 0xEA0);
    if (*(char **)(p + 0xEA0) != 0) {
        func_001AD140(*(char **)(p + 0xEA0));
        *(char **)(p + 0xEA0) = 0;
    }
}

void func_00417DA0(char *p) {
    if (D_005BD070 == -1 || D_005BD070 != *(unsigned char *)(p + 0x38)) {
        switch (*(unsigned char *)(p + 4)) {
        case 0:
            func_00417C70(p);
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
            break;
        case 1:
            func_00418040(p);
            break;
        }
    }
}

void func_004265D0(char *p) {
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x40000001;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0xB60) == 1) {
            func_003FA3F0(p, 0);
        }
    }
}

void func_0044CCB0(char *p) {
    if (*(unsigned char *)(p + 0xDE) != 0) {
        func_001AD100(p);
        switch (*(unsigned char *)(p + 0xDF)) {
        case 0:
            func_0044CD30(p);
            break;
        case 1:
            func_0044CED0(p);
            break;
        }
        func_0044CEE0(p);
        func_0028C5C0(p + 0x2C0, 0, *(float *)(p + 0x10));
    }
}

void func_00482070(char *p) {
    *(short *)(p + 0x90) = func_0034B940(p + ((*(signed char *)(p + 0x288) + 1) << 4) + 0x310, p + 0x50);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x300), "r"(p + 0x50), "r"(p + ((*(signed char *)(p + 0x288) + 1) << 4) + 0x310) : "memory");
    func_00131650(p + 0x300, p + 0x300);
    *(float *)(p + 0x30C) = 1.0f;
}

int func_0050E800(char *p) {
    char *q;
    if (*(char **)(p + 0x460) != 0) {
        func_001AD140(*(char **)(p + 0x460));
    }
    *(char **)(p + 0x460) = func_00207480(3, 0x3B7, 0, 8);
    q = *(char **)(p + 0x460);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x150;
        q[0x9A] = 0;
        *(*(char **)(p + 0x460) + 0x3A) = 1;
        return 1;
    }
    return 0;
}

void func_0021D3F0(char *p, int flag) {
    *(int *)(p + 0x24BC) = 0;
    if (*(unsigned char *)(p + 0x28AC) != 1 && (unsigned char)flag != 1) {
        if (func_0023DF80(p, flag, 1, -20.0f) != 0) {
            func_0021B790(p, 0);
        } else {
            func_0021C100(p, 4, 0, 0.0f, -1.5f);
        }
    }
}

typedef struct { int w[8]; } __attribute__((aligned(16))) M32;
extern char *D_005BD0C8;
extern char *D_005BC2E0;
extern char D_00654430[];
extern char D_00586858[];
extern char D_00586870[];
void func_00198380(char *);
void func_00198160(char *, void *, int, int);
void func_001AEE60();
void func_0024E4C0(char *);
void func_0024E480(char *);
int func_0024D640(char *);
void func_0039D440(char *, int);
void func_0039D580(char *, int);
extern char D_006011E4[];
extern char D_00631568[];
extern char D_005872E0[];
extern char D_005BDD88[4];
void func_00207470(int, int, char *);
int func_0021CBA0(char *);
int func_002DAD40(char *);
int func_0023F760(char *);
void func_0021BEA0(char *, int);
void func_0046F350(char *);
void func_0046EBE0(char *);
void func_003303F0(char *, int, int, int, int);
void func_0013E040(char *, int, int);
extern char D_006663C0[];
extern float D_005647D4[];
int func_002242C0(char *);
unsigned short func_001AE1E0(char *, int);
void func_003AAB30(int, int, char *, int);
void func_003B9E50(char *);
void func_003B9D20(char *);
void func_003AB0E0(char *, char *);
void func_002D90A0(char *, float);
extern char D_005BE098[4];
extern char D_005A6F50[];
extern char D_005ABD80[];
extern unsigned char D_005BE18C;
void func_0021D480(char *);
void func_0021DD40(char *);
void func_0021F070(char *);
void func_0021F080(char *);
void func_00195E20(char *, char *);
void func_00104B80(char *, char *, char *);
void func_0013D6A0(char *);
int func_001F95F0(char *);
int func_002CFA00(char *, float);
void func_002CAF60(char *);
void func_002CE4C0(char *);
void func_0044EA50(char *, int);
void func_001A29A0(char *);
void func_00376E40(char *);
void func_00377260(char *);
void func_00376B80(char *, int);
void func_00376B40(char *, int);
extern signed char D_005BE120;
extern signed char D_005BE124;
void func_005069A0(char *, int);
void func_00506D90(char *);
void func_00134DE0(int, char *, int);
void func_00138320(int);
float func_002A4070(char *);
void func_0029DCE0(char *, int);
void func_001ACC30(char *, int, int, int, int);
int func_003C8130(char *, int);
void func_003C2D30(char *, int);
void func_00286040(char *);
void func_00330BD0(char *, int, char *, int, int);
void func_001EDAB0(void);
void func_00134070(int);
void func_001340C0(int);
void func_00103548(int);
void func_00134A30(int, int, int, int);
void func_0010DF60(int);
void func_001035E0(int, int);
void func_0013CDD0(int);
void func_0013CC30();
void func_00103C60(void *);
void func_0010D660(void);
extern char D_0066671A[];
extern char D_00666710[];
unsigned short func_001AE770(char *, int);
void func_0021C7A0(char *, int);
void func_002CEEA0(char *, int);
void func_002FFC60(char *);
void func_00300020(char *);

void func_00277DE0(char *p, char *s, char *x, int flag) {
    *(signed char *)(p + 0x10) = *(signed char *)s;
    *(unsigned char *)(p + 0x11) = *(unsigned char *)(s + 1);
    *(float *)(p + 0x14) = *(float *)(s + 4);
    *(unsigned char *)(p + 0x18) = *(unsigned char *)(s + 8);
    *(M32 *)(p + 0x20) = *(M32 *)(s + 0x10);
    *(M32 *)(p + 0x40) = *(M32 *)(s + 0x30);
    if (flag != 0) {
        *(char **)(p + 0xA0) = x;
    } else {
        func_00105300(p + 0x60, x);
        *(char **)(p + 0xA0) = p + 0x60;
    }
}

int func_0030AA50(char *p) {
    float a = *(float *)(p + 0x10);
    int r;
    if ((a < 0.0f ? -a : a) <= 0.0001f) {
        return 0;
    }
    r = (int)func_00210240(p);
    return ((int (**)(char *, int))D_00558B60)[*(int *)(p + 0x20)](p + 0x24, r);
}

void func_003853D0(char *p) {
    func_001AD100(p);
    if (*(unsigned char *)(p + 0x44) != 0) {
        switch (*(unsigned char *)(p + 4)) {
        case 0:
            func_00385460(p);
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        case 1:
            func_00385500(p);
            break;
        case 2:
            func_00385580(p);
            break;
        }
    }
}

void func_003A7550(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            *(signed char *)(p + 0x4E16) = 9;
            func_003AA8F0(p);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003ABEE0(char *p, int k) {
    if ((unsigned char)k == 1) {
        func_001A2000(func_00279290(p + 0x1480), 2);
        func_001A2000(func_00279290(p + 0x1480), 3);
    } else {
        func_001A1E70(func_00279290(p + 0x1480), 2);
        func_001A1E70(func_00279290(p + 0x1480), 3);
    }
}

void func_004F8FB0(char *p) {
    func_0028C200(p + 0x140, p + 0x360, p + 0x370, 4, D_005BD0C8, p, 0);
    func_0028C8E0(p + 0x140, 6);
    *(int *)(p + 0x218) = 0x30104;
    func_0028C910(p + 0x140);
    func_0028C3A0(p + 0x140, 0, -1, p + 0x5B0);
    func_0028C3A0(p + 0x140, 1, -1, p + 0x5B0);
}

void func_001AEEC0(char *p) {
    int i;
    func_00198380(D_00654430);
    for (i = 0; i < 303; i++, p += 0x20) {
        if (*(unsigned char *)(p + 1) == 1 || *(unsigned char *)(p + 1) == 2) {
            *(unsigned char *)(p + 1) = 4;
        }
    }
    func_00198160(D_00654430, (void *)func_001AEE60, 0, 0);
}

void func_00496740(char *p) {
    func_0028C740(p + 0x150);
    func_0028C200(p + 0x150, D_00586858, D_00586870, 1, D_005BC2E0 + 0xF40, p, 0);
    func_0028C8E0(p + 0x150, 0);
    func_0028C910(p + 0x150);
    func_0028C3A0(p + 0x150, 2, 5, p + 0x3B0);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_0024D9F0(char *p, char *b, int a, short s, int c0, int c1, int c2, int c3, int c4) {
    char *q;
    *(char **)p = b;
    q = *(char **)p;
    *(char **)(p + 4) = b + *(unsigned short *)q;
    *(char **)(p + 8) = b + *(unsigned short *)(q + 2);
    *(char **)(p + 0xC) = b + *(unsigned short *)(q + 4);
    *(int *)(p + 0x38) = a;
    *(short *)(p + 0x3C) = s;
    *(int *)(p + 0x40) = c0;
    *(int *)(p + 0x44) = c1;
    *(int *)(p + 0x6C) = c2;
    *(int *)(p + 0x48) = c3;
    *(int *)(p + 0xCC) = c4;
    *(unsigned char *)(p + 0x84) = 0;
    *(unsigned char *)(p + 0x84) = 0;
    func_0024E4C0(p);
    func_0024E480(p);
    *(unsigned char *)(p + 0x81) = 0;
    *(int *)(p + 0x98) = 0;
    *(unsigned char *)(p + 0x82) = 1;
}

void func_00392A60(char *p) {
    char *g;
    if (*(char **)(p + 0x2DD0) != 0) {
        func_001AD140(*(char **)(p + 0x2DD0));
    }
    func_0039D440(p, 0);
    func_0039D440(p, 1);
    func_0039D580(p, 0);
    func_0039D580(p, 1);
    *(unsigned char *)(p + 0x2F3D) = 4;
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2D30(g, p);
    }
}

void func_003A74C0(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0x5178) = 120.0f;
    case 1:
        *(float *)(p + 0x5178) = *(float *)(p + 0x5178) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x5178) < 0.0f) {
            func_003AA990(p, 0x12);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_0044CEE0(char *p) {
    if (*(unsigned char *)(p + 0x265) == 1) {
        *(float *)(p + 0x2B0) = *(float *)(p + 0x2B0) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2B0) < 0.0f) {
            *(float *)(p + 0x2B0) = 10.0f;
            func_00207470(3, 0x15F, p + 0x270);
            *(int *)(p + 0x268) = *(int *)(p + 0x268) + 1;
        }
        if (*(int *)(p + 0x268) >= 10) {
            *(unsigned char *)(p + 0x265) = 0;
        }
    }
}

void func_004BE230(char *p) {
    func_0028C200(p + 0x150, D_005BDD88, D_005872E0, 1, D_005BC2E0 + 0x780, p, 0);
    func_0028C8E0(p + 0x150, 0);
    func_0028C910(p + 0x150);
    *(int *)(p + 0x228) = 0x30F3F;
    func_0028C3A0(p + 0x150, 0, -1, p + 0x380);
    func_0028C3A0(p + 0x150, 1, -1, p + 0x380);
}

void func_004F8F20(char *p) {
    func_0028C200(p + 0x140, p + 0x360, p + 0x370, 3, D_005BD0C8, p, 0);
    *(int *)(p + 0x218) = 0x30443;
    *(float *)(p + 0x224) = 1.0f;
    func_0028C8E0(p + 0x140, 5);
    func_0028C910(p + 0x140);
    func_0028C3A0(p + 0x140, 0, -1, p + 0x5B0);
    func_0028C3A0(p + 0x140, 1, -1, p + 0x5B0);
}

int func_0023E460(char *p) {
    if ((func_0021CBA0(p) & 0x200) && (*(int *)(p + 0x2898) & 1) && (unsigned char)func_002DAD40(p) == 2 &&
        (unsigned char)func_0023F760(p) == 1 && *(unsigned char *)(p + 0x284A) != 10) {
        func_0021BEA0(p, 0);
        return 1;
    }
    return 0;
}

void func_00240520(char *p, int k) {
    *(unsigned char *)(p + 0x3C78) = 0;
    *(unsigned char *)(p + 0x3C6E) = 0;
    if ((unsigned char)k == 0) {
        func_0046F350(p + 0x3CE0);
        *(float *)(p + 0x28D4) = *(float *)(*(char **)(p + 0x283C) + 0x1E8);
        func_003303F0(D_01DFABA0, 2, 12, 64, 4);
    } else {
        func_0046EBE0(p + 0x3CE0);
    }
    func_0013E040(D_006011E4, 5, 0);
    func_0013E040(D_00631568, 5, 0);
}

int func_0028B8E0(char *p) {
    unsigned int i;
    char *q;
    *(unsigned char *)(p + 0xD1) = 0;
    if ((unsigned char)func_002242C0(*(char **)(p + 0xE0)) == 1 && *(unsigned char *)(*(char **)(p + 0xE0) + 0x3C79) == 0) {
        return 0;
    }
    for (i = 0, q = *(char **)(p + 0xE0); i < 5; i++, q++) {
        if (*(signed char *)(q + 0x3D4C) == *(signed char *)(p + 0xD2)) {
            return 1;
        }
    }
    return 0;
}

int func_002DA950(char *p) {
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) {
        return 0;
    }
    if (*(unsigned char *)(p + 0x28AC) == 1) {
        return 0;
    }
    if ((func_001AE1E0(D_006663C0, 0) & 0x20) && (*(int *)(p + 0x2898) & 1)) {
        return 1;
    }
    return 0;
}

void func_003B9BD0(char *p) {
    char *g;
    if (*(unsigned char *)(p + 0x1B4) != 0) {
        func_003AB0E0(*(char **)(p + 0x1DC), p);
    }
    func_00207480(0, 0xEA, p + 0x250, 16);
    if (*(unsigned char *)(p + 0x1B3) == 0) {
        func_002D90A0(*(char **)(*(char **)D_01CAFF0C + 0xC), D_005647D4[0]);
    }
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2D30(g, p);
    }
    func_001AD140(p);
}

void func_002053E0(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        func_0021D480(p);
        break;
    case 1:
        func_0021DD40(p);
        break;
    case 2:
        func_0021F070(p);
        break;
    case 3:
        func_0021F080(p);
        break;
    }
    func_00195E20(D_005BE098, p);
}

void func_0022B000(char *p) {
    func_00104B80(p + 0xD0, p + 0x20, *(char **)(p + 0x104) + 0x10);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0xD0) : "memory");
    if (!*(signed char *)(p + 1)) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(p + 0xD0) : "memory");
    }
    *(unsigned char *)(p + 0x110) = 6;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x120), "r"(p + 0xD0) : "memory");
    *(float *)(p + 0x10) = *(float *)(p + 0x134) = *(float *)(*(char **)(p + 0x104) + 0x24) * *(float *)(p + 0x14);
    *(float *)(p + 0x130) = *(float *)(*(char **)(p + 0x104) + 0x20);
}

void func_0029DCE0(char *p, int k) {
    *(int *)(p + 0xA92C) = k;
    func_0024DA80(p + 0x8980, 0, *(int *)(p + 0xA92C));
    func_0024DA80(p + 0x8A50, 0, *(int *)(p + 0xA92C));
    func_0024DA80(p + 0x8B20, 0, *(int *)(p + 0xA92C));
    func_0024DA80(p + 0x8BF0, 0, *(int *)(p + 0xA92C));
}

char *func_0030DA60(char *p) {
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005ABD80;
    *(unsigned char *)(p + 4) = 0;
    D_005BE18C = 0;
    *(unsigned char *)(p + 0x58) = 0;
    *(int *)(p + 0x54) = 0;
    *(int *)(p + 0x48) = 0;
    return p;
}

int func_001F8CD0(char *p, char *h) {
    char *q;
    *(char **)p = h;
    if (*(int *)(p + 0x1C) != 0) {
        func_0013D5D0(p + 0xC);
    }
    q = *(char **)p;
    *(int *)(p + 0x20) = *(int *)(q + 0x34) * (*(int *)(q + 0x2C) * *(int *)(q + 0x30)) * 4;
    if ((*(char **)(p + 0x1C) = func_001B0FD0(p + 0xC, *(int *)(p + 0x20), 1)) == 0) {
        return 0;
    }
    q = *(char **)p;
    *(char **)(p + 4) = (char *)(*(int *)(q + 0x3C) + (int)q) + 8;
    *(int *)(p + 8) = func_001F95F0(p);
    return 1;
}

void func_002CA270(char *p, int k) {
    if (k == 0) {
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
        *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        if (*(float *)(p + 0x64) <= -30.0f) {
            *(float *)(p + 0x64) = -30.0f;
        }
        if ((unsigned char)func_002CFA00(p, 0.0f) == 1) {
            func_00207480(3, 0x14F, p + 0x1890, 16);
            func_002CAF60(p);
        }
    }
}

void func_002CC570(char *p) {
    *(float *)(p + 0x2D70) = 1.0f;
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
    if ((unsigned char)func_0024E800(p + 0x2450) == 1 && (unsigned char)func_002CFA00(p, 0.0f) == 1) {
        func_00207480(3, 0x14F, p + 0x1890, 16);
        func_002CE4C0(p);
    }
}

void func_003A7420(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0x5170) = 120.0f;
    case 1:
        *(float *)(p + 0x5170) = *(float *)(p + 0x5170) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x5170) < 0.0f) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            *(signed char *)(p + 0x4E16) = 9;
            func_003AA8F0(p);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_0044EB50(char *p) {
    switch (*(unsigned char *)(p + 0x811)) {
    case 0:
        func_0044EA50(p, 1);
        break;
    case 1:
        *(float *)(p + 0x828) = *(float *)(p + 0x828) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x828) < 0.0f) {
            func_0044EA50(p, 2);
        }
        break;
    case 2:
        return;
    }
    func_001A29A0(func_00279290(p + 0x200));
}

void func_004966A0(char *p) {
    func_0028C740(p + 0x150);
    func_0028C200(p + 0x150, D_00586858, D_00586870, 1, D_005BC2E0 + 0xF00, p, 0);
    func_0028C8E0(p + 0x150, 0);
    func_0028C910(p + 0x150);
    func_0028C3A0(p + 0x150, 0, -1, p + 0x3B0);
    func_0028C3A0(p + 0x150, 1, -1, p + 0x3B0);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_004AE4B0(char *p) {
    func_00376E40(p);
    *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x400000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00377260(p);
        *(float *)(p + 0x3C44) = 1e-08f;
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            func_00376B40(p, 3);
        }
    }
}

void func_004E3240(char *p) {
    *(float *)(p + 0x144) = *(float *)(p + 0x144) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x144) < 0.0f) {
        func_001AD140(p);
        return;
    }
    func_00253110(p, p + 0x660, 3, *(float *)(p + 0x10));
    switch (func_002536B0(p, p + 0x660)) {
    case 0:
        break;
    case 1:
        break;
    case -1:
        func_001AD140(p);
        return;
    }
}

void func_00506900(char *p) {
    switch (D_005BE120) {
    case 0:
        func_005069A0(p, 0);
        break;
    case 2:
        func_005069A0(p, 1);
        if (D_005BE124 == 1) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x70), "r"(p + 0x1A0) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x80), "r"(p + 0x190) : "memory");
        }
        break;
    case 3:
        func_00506D90(p);
        break;
    }
}

void func_002788D0(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 3, 3, -1, 2, 1, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_002972C0(char *p) {
    float r = func_002A4070(p);
    *(float *)(p + 0xAA2C) = *(float *)(p + 0xAA2C) - r * *(float *)(p + 0x10);
    if (*(float *)(p + 0xAA2C) <= 0.0f) {
        *(float *)(p + 0xAA2C) = 0.0f;
    }
    if ((unsigned char)func_0024E780(p + 0x8980, 0, 0) == 1) {
        func_0024E7B0(p + 0x8980, 0, 0);
        *(unsigned char *)(p + 5) = 2;
    }
}

void func_0029CF80(char *p) {
    func_0029DCE0(p, 12);
    *(unsigned char *)(p + 5) = 15;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA993) = 0;
    *(unsigned char *)(p + 0xAA91) = 1;
    *(float *)(p + 0x8924) = 1.0f;
    func_001ACC30(D_005BE09C, 3, 20, 30, 0);
    *(float *)(p + 0xA98C) = 1000.0f;
    *(float *)(p + 0xAA80) = 1000.0f;
    *(unsigned char *)(p + 0xA98B) = 0;
}

void func_003C57E0(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0x15D4) = 120.0f;
    case 1:
        if ((unsigned char)func_003C8130(p, 1) == 0) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
        *(float *)(p + 0x15D4) = *(float *)(p + 0x15D4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x15D4) < 0.0f) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C7410(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        func_0034BA60(0x43, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
    case 1:
        func_003C2D30(p, 0);
        func_003C8130(p, 1);
        if ((unsigned char)func_0024E800(p + 0x1500) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C7780(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        func_0034BA60(0x43, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
    case 1:
        func_003C2D30(p, 1);
        func_003C8130(p, 1);
        if ((unsigned char)func_0024E800(p + 0x1500) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003F7D30(char *p) {
    char *e;
    if (*(int *)(p + 0x3A0) != 0) {
        func_0041D670(p + 0x3A0);
        e = func_00207480(3, 0xE9, 0, 16);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x410;
            e[0x9A] = 1;
            e[0x3A] = 1;
            e[0x9C] = 0x40;
            e[0x9D] = 0x20;
            *(unsigned char *)(e + 0x9E) = 0x80;
            e[0x9B] = 2;
        }
        func_003305E0(D_01DFABA0, 0, 0x5C, (int)(p + 0x50), 0, 0, 0);
    }
}

int func_00471E60(char *p) {
    char *q;
    if (*(char **)(p + 0x460) != 0) {
        func_001AD140(*(char **)(p + 0x460));
    }
    if (*(unsigned char *)(p + 0x4B1) == 0) {
        *(char **)(p + 0x460) = func_00207480(3, 0x200, 0, 8);
    } else {
        *(char **)(p + 0x460) = func_00207480(1, 0x55F, 0, 8);
    }
    q = *(char **)(p + 0x460);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x150;
        q[0x9A] = 0;
        *(*(char **)(p + 0x460) + 0x3A) = 1;
        return 1;
    }
    return 0;
}

void func_00477550(char *p) {
    func_00206730(p + 0x460);
    func_00286040(p + 0x464);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x46C) = 1.0f;
        func_00330BD0(D_01DFABA0, 0x22, p + 0x50, 0x22, 0);
    case 1:
        *(float *)(p + 0x46C) = *(float *)(p + 0x46C) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x46C) < 0.0f) {
            *(unsigned char *)(p + 4) = 3;
        }
    }
}

void func_001EDBF0(void) {
    int i;
    func_001EDAB0();
    func_00134070(0);
    func_001340C0(1);
    for (i = 0; i < 20; i++) {
        func_00103548(0);
    }
    func_00134A30(0, 0, 0, 0);
    func_0010DF60(0);
    func_001035E0(0, 0);
    func_0013CDD0(0);
    func_00103C60((void *)func_0013CC30);
    func_0010D660();
    *(volatile int *)0x10000010 = 0x8B;
    *(volatile int *)0x10000000 = 0;
}

void func_002C6C40(char *p) {
    char *e = func_00207480(3, 0xE9, 0, 16);
    if (e != 0) {
        e[0x9C] = 0x40;
        e[0x9D] = 0x20;
        *(unsigned char *)(e + 0x9E) = 0x80;
        e[0x9B] = 2;
        *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x4FC) + 0x104);
        e[0x9A] = 1;
        e[0x3A] = 1;
    }
    if (*(char **)(p + 0x2F78) != 0) {
        func_001AD140(*(char **)(p + 0x2F78));
    }
    func_003305E0(D_01DFABA0, 0, 0x5C, (int)(p + 0x50), 0, 0, 0);
}

void func_0033B200(char *p) {
    char *q;
    *(unsigned char *)(p + 0x1351) = 0;
    *(char **)(p + 0x12C4) = func_00207480(3, 0xE9, 0, 16);
    q = *(char **)(p + 0x12C4);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x668) + 0x104);
        q[0x9A] = 1;
        *(*(char **)(p + 0x12C4) + 0x3A) = 1;
        q = *(char **)(p + 0x12C4);
        q[0x9C] = 0x40;
        q[0x9D] = 0x20;
        *(unsigned char *)(q + 0x9E) = 0x80;
        q[0x9B] = 2;
    }
    func_003305E0(D_01DFABA0, 0, 0x5C, (int)(p + 0x50), 0, 0, 0);
}

void func_001BB870(char *p) {
    char *q;
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    func_001B4A50(p, 1, 0x10);
    q = *(char **)(p + 0x440);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xD0), "r"(q) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(q + 0x10) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xF0), "r"(q + 0x20) : "memory");
    *(unsigned char *)(p + 0x454) = 0;
    *(char **)(p + 0x45C) = q + 0x48;
    *(float *)(p + 0x458) = *(short *)(q + 0x48);
    *(unsigned char *)(p + 0x455) = 0;
    func_001F8910(p + 0x444, p + 0x444, *(char **)(p + 0x45C), *(char **)(p + 0x45C) + 0x14, 4, 4, 0.0f);
}

int func_0023F330(char *p) {
    if (*(unsigned char *)(p + 0x28A6) != 0) {
        return 0;
    }
    if ((unsigned char)func_0023F760(p) == 0) {
        return 0;
    }
    if ((func_0021CBA0(p) & 0x20) &&
        !(*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 8)])) {
        func_0021C7A0(p, 11);
        return 1;
    }
    return 0;
}

void func_002CCCD0(char *p) {
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    if ((unsigned char)func_002CFA00(p, 0.0f) == 1) {
        func_00207480(3, 0x14F, p + 0x1890, 16);
        if ((unsigned char)func_0024E800(p + 0x2450) == 1) {
            func_002CEEA0(p, 0);
        } else {
            func_002CEEA0(p, 2);
        }
    }
}

void func_002E1A00(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 1, 6, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 4);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
        }
        break;
    }
}

typedef struct { char pad[0xC]; int v; char rest[0xA0]; } R176;
void func_003B4D80(char *, int, int);
int func_003B3F70(char *);
int func_003B4840(char *);
void func_003F5430(char *);
void func_003F69E0(char *);
void func_003F7000(char *);
void func_0038F300(char *, int);
void func_0038F360(char *);
void func_0041E120(char *, float);
void func_0038F2C0(char *, int);
extern char D_005BDD78[4];
extern char D_00587160[];
unsigned int func_003101B0(char *, int, int);
void func_0030FD40(char *, int, int, int, int, int, int, int);
void func_00228260(char *);
void func_0050E000(char *);
void func_0050E160(char *);
void func_0050E420(char *);
void func_0050E5B0(char *);
extern char D_005BBA18[4];
extern int D_00540278[];
extern signed char D_005BC278[4];
int func_001AF3F0(char *, void *, int, int);
void func_0026D0B0(char *);
short func_0027BC40(char *, int);
int func_0027BCB0(char *, int);
void func_00288140(char *);
int func_002DD950(char *, int);
void func_00303820(char *);
float func_0034C160(float, float, float);
void func_003DA500(char *, int);
void func_0048AFC0(char *, int);
void func_00376CF0(char *);
void func_004B9EC0(char *);
void func_004BA4D0(char *);
void func_004BA670(char *);
void func_004BA880(char *);
void func_00382A50(char *);
void func_0024DD30(char *);
void func_0024E520(char *);
extern float D_005BCA80;
extern int D_0065E530[];
extern int D_0065E534[];
extern int D_0065E53C[];
extern int D_0065E540[];
extern char D_0065E4F0[];
void func_002DBCE0(char *);
void func_002CF260(char *);
void func_002CF630(char *, int);
void func_0034B9A0(char *, short, float, float, float);
void func_002CE1F0(char *);
void func_0043EEF0(char *, int);
void func_004D8560(char *, int);
void func_004D81D0(char *);
float func_0011DA38(float);
int func_00244DF0(char *, int);
void func_0021BDB0(char *, int, int);
extern char D_01DF5D20[];
extern float D_005606E0[][3];
void func_00477CE0(char *, int);
char *func_00203AB0(int, int, int);
void func_002EF4D0(int, int);
void func_00204E40(char *, char *);
int func_002A4A40(char *);
float func_001F9C40(char *, int);
int func_003B5A00(char *, short);
float func_003B5650(char *, int, int);
void func_001A2600(char *, int);
void func_001A23D0(char *);
void func_003E9930(char *);
void func_00480E90(char *, int);
extern int D_01DFAB80[];
extern int D_01DFAB8C[];
void func_00131760(char *, char *, float *);
int func_0020AC40(char *, char *);
void func_0020D140(char *);
int func_00249E20(char *, int);
void func_002D9070(char *, int);
void func_00226A00(char *, int);
void func_00225F30(char *, int);
void func_00226580(char *, int);
extern signed char D_005BCD60[];
void func_0031E570(char *);
void func_002D2270(char *, int);
extern char D_005B9CA0[];
extern char D_005B9CC4[];
extern char D_005B9D44[];
extern char D_005BE0D4[4];
extern unsigned int D_01CB051C[];
void func_001A1DC0(char *);
void func_001A1D90(char *);
void func_0028C790(char *, int);
void func_00252FA0(char *);
void func_002E7840(char *);
void func_0028C110(char *);
void func_001ED920(char *);
void func_001EC140(char *);
void func_001EC390(char *);
void func_001EC4F0(char *);
extern int D_0056EC50[];
int func_00243FC0(char *, int);
void func_003AB180(char *);
void func_003C6880(char *, int);
void func_001A5C30(char *);
void func_001A5D00(char *);
void func_003D29C0(char *);
extern char D_00586E20[];
extern char D_0058B5F0[];
extern char D_01DFA310[];
extern char D_00666200[];
extern char D_0053FD30[];
extern signed char D_00666714[];
void func_004E3550(char *, int);
char *func_00287270(char *, int, int);
void func_00213470(char *, int);
void func_0030E580(char *, int);
void func_001AAE30(char *, char *, int, int, int);
void func_001AB200(char *, int);
void func_001AB220(char *, int, int);
int func_0023E960(char *);
int func_00245C40(char *);
int func_0023EDD0(char *);
int func_0023EF80(char *);

void func_002FFB40(char *p) {
    *(unsigned char *)(p + 0x68C) = 0;
    switch (*(unsigned char *)(p + 0x39)) {
    case 0:
    case 1:
        func_002FFC60(p);
        break;
    case 2:
    case 3:
        func_00300020(p);
        break;
    }
    *(unsigned char *)(p + 0x38) = 1;
    *(float *)(p + 0x688) = 10.0f + (float)(*(R176 **)(p + 0x40))[*(short *)(p + 0x3A)].v;
}

void func_00370830(char *p) {
    *(float *)(p + 0x580) = *(float *)(p + 0x580) - 1.0f;
    if (*(float *)(p + 0x580) < 0.0f) {
        *(float *)(p + 0x570) = 40.0f;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    }
    func_00105300(p + 0x4F0, p + 0x4B0);
    func_00105300(p + 0x530, p + 0x4B0);
    *(float *)(p + 0x524) = *(float *)(p + 0x524) - 80.0f;
    *(float *)(p + 0x564) = *(float *)(p + 0x564) + 150.0f;
    func_0028C5C0(p + 0x150, 0, 1.0f);
}

void func_0038E9E0(char *p) {
    char *e;
    if (*(int *)(p + 0x410) != 0) {
        func_0041D670(p + 0x410);
        e = func_00207480(3, 0xE9, 0, 16);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x4E0) + 0x104);
            e[0x9A] = 1;
            e[0x3A] = 1;
            e[0x9C] = 0x40;
            e[0x9D] = 0x20;
            *(unsigned char *)(e + 0x9E) = 0x80;
            e[0x9B] = 2;
        }
        func_003305E0(D_01DFABA0, 0, 0x5C, (int)(p + 0x50), 0, 0, 0);
    }
}

void func_003AFC80(char *p) {
    *(unsigned char *)(p + 0x21CA) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 1;
        func_0024DA80(p + 0x1D00, 0, 1);
        func_0024DA80(p + 0x1DD0, 0, 1);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x21C4) = 1;
        break;
    case 1:
        func_003B4D80(p, 0x800, 0);
        if ((unsigned char)func_003B3F70(p) == 1) {
            func_003B4840(p);
        }
        break;
    }
}

void func_003DBDA0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        *(float *)(p + 0x54) = 110.0f;
        *(short *)(p + 0x90) = func_0034B940(((char **)(*(char **)D_01CAFF0C + 0xC))[*(unsigned char *)(p + 0xF02)] + 0x50, p + 0x50);
        *(float *)(p + 0xEC4) = *(float *)(p + 0xEC4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xEC4) < 0.0f) {
            *(unsigned char *)(p + 0xF05) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0xAF0);
}

void func_003F5310(char *p) {
    func_001AD100(p);
    *(float *)(p + 0x3B0) = *(float *)(p + 0x10);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x300), "r"(p + 0x50) : "memory");
    *(int *)(p + 0x110) = 0;
    switch ((unsigned char)*(unsigned char *)(p + 4)) {
    case 0:
        func_003F5430(p);
        break;
    case 1:
        func_003F69E0(p);
        break;
    case 2:
        func_003F7000(p);
        break;
    case 3:
        break;
    }
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x10000000;
}

void func_0041FBB0(char *p) {
    char *b;
    *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x2000;
    *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x80000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        func_0038F360(p);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041E120(b, 0.0f);
        if ((unsigned char)func_0041D6B0((float *)(p + 0x428), *(float *)(p + 0x10)) == 1) {
            func_0038F2C0(p, 1);
        }
    }
}

void func_004BC510(char *p) {
    *(float *)(p + 0x3B0) = *(float *)(p + 0x3B0) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x3B0) < 0.0f) {
        func_0028C200(p + 0x150, D_005BDD78, D_00587160, 1, D_005BC2E0 + 0x700, p, 0);
        func_0028C8E0(p + 0x150, 0);
        func_0028C910(p + 0x150);
        func_0028C3A0(p + 0x150, 1, -1, p + 0x370);
        *(int *)(p + 0x228) = 0x30F3F;
        *(float *)(p + 0x3B0) = 10.0f;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    }
}

void func_0050DF50(char *p) {
    func_001AD100(p);
    func_00206730(p + 0x460);
    func_00228260(p + 0x464);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_0050E000(p);
        break;
    case 1:
        func_0050E160(p);
        break;
    case 2:
        func_0050E420(p);
        break;
    }
    func_0050E5B0(p);
    if (*(unsigned char *)(p + 0x491) != 0) {
        func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
    }
}

void func_001F7D00(char *p) {
    char *q;
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    func_001B4A50(p, 0, *(unsigned char *)(*(char **)(p + 0x4A0) + 0xA1));
    q = *(char **)(p + 0x440);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xD0), "r"(q) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(q + 0x10) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xF0), "r"(q + 0x20) : "memory");
    *(unsigned char *)(p + 0x454) = 0;
    *(char **)(p + 0x45C) = q + 0x48;
    *(float *)(p + 0x458) = *(short *)(q + 0x48);
    *(unsigned char *)(p + 0x455) = 0;
    func_001F8910(p + 0x444, p + 0x444, *(char **)(p + 0x45C), *(char **)(p + 0x45C) + 0x14, 4, 4, 0.0f);
}

void func_0033B140(char *p) {
    char *q;
    *(unsigned char *)(p + 0x1351) = 1;
    *(char **)(p + 0x12C0) = func_00207480(3, 0xDC, 0, 16);
    q = *(char **)(p + 0x12C0);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x668) + 0x104);
        q[0x9A] = 1;
        *(*(char **)(p + 0x12C0) + 0x3A) = 1;
        q = *(char **)(p + 0x12C0);
        q[0x9C] = 0x40;
        q[0x9D] = 0x20;
        *(unsigned char *)(q + 0x9E) = 0x80;
        q[0x9B] = 2;
    }
    func_003305E0(D_01DFABA0, 0, 0x5A, (int)(p + 0x50), 0, 0, 0);
}

void func_001AFD60(char *p, signed char k, unsigned char m) {
    *(int *)(p + 0xC) = 0;
    *(int *)(p + 0x24) = 0;
    if (k == 0 && m == 1) {
        *(int *)(p + 0xC) = func_001AF3F0(D_00666750, D_005BBA18, 0, 0);
    } else if (k == 0 && m == 4) {
        *(int *)(p + 0xC) = func_001AF3F0(D_00666750, D_005BBA18, 0, 0);
    } else {
        *(int *)(p + 0xC) = func_001AF3F0(D_00666750, &D_00540278[k], 0, 0);
    }
}

int func_00287F50(char *p) {
    float a = *(float *)(p + 0x10);
    if ((a < 0.0f ? -a : a) < 0.0001f) {
        return 0;
    }
    *(float *)(p + 0x20) = *(float *)(p + 0x24);
    if (func_0027BC40(func_00210240(p) + 0x260C, *(unsigned char *)(p + 0x40)) < 0 &&
        func_0027BCB0(func_00210240(p) + 0x260C, *(unsigned char *)(p + 0x40)) < 0) {
        return 0;
    }
    func_00288140(p);
    return 1;
}

void func_002DD890(char *p) {
    switch (*(int *)(p + 0x18)) {
    case 0:
        *(int *)(p + 0x1F8) = 0;
        *(int *)(p + 0x18) = *(int *)(p + 0x18) + 1;
    case 1:
    case 2:
    case 3:
        if ((unsigned char)func_002DD950(p, D_005BC278[*(int *)(p + 0x18)]) == 1) {
            *(int *)(p + 0x1F8) = 0;
            *(int *)(p + 0x18) = *(int *)(p + 0x18) + 1;
        }
        break;
    case 4:
        *(int *)(p + 0x14) = 0;
        *(int *)(p + 0x18) = 0;
        break;
    }
}

void func_00303590(char *p) {
    char *q;
    func_00303820(p + 0x3C);
    if (*(int *)(p + 0x3C) == 0) {
        func_001AD140(p);
        return;
    }
    func_00206730(p + 0x44);
    q = *(char **)(p + 0x44);
    if (q == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(p + 0x40) == 1) {
        if (q != 0) {
            unsigned char *f = (unsigned char *)(q + 0x3B);
            if (*f == 1) {
                *f = 0;
            }
        }
    } else {
        if (q != 0) {
            *(unsigned char *)(q + 0x3B) = 1;
        }
    }
    *(unsigned char *)(p + 0x40) = 0;
}

void func_003C5910(char *p) {
    float f;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(int *)(p + 0x16E4) = 0;
    case 1:
        f = func_0034C160(*(float *)(p + 0x16E4), 40.0f, 0.5f * *(float *)(p + 0x10));
        *(float *)(p + 0x16E4) = f;
        *(float *)(p + 0x54) = *(float *)(p + 0x54) - f * *(float *)(p + 0x10);
        if (!(-50.0f <= *(float *)(p + 0x54))) {
            *(float *)(p + 0x54) = -50.0f;
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003DA600(char *p) {
    switch (*(unsigned char *)(p + 0xEF8)) {
    case 0:
        if (*(unsigned char *)(p + 0xEFD) != 4 && *(unsigned char *)(p + 0xEFD) != 5) {
            func_003DA500(p, 1);
        }
        break;
    case 1:
        *(float *)(p + 0xEF0) = *(float *)(p + 0xEF0) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xEF0) < 0.0f) {
            func_003DA500(p, 2);
        }
        break;
    case 2:
        return;
    }
    func_001A29A0(func_00279290(p + 0x340));
}

void func_004229E0(char *p) {
    *(int *)(p + 0x45C) = *(int *)(p + 0x45C) | 0x4000000;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x458) = 30.0f;
        *(unsigned char *)(p + 0x4D1) = 0;
        func_0048AFC0(p, -1);
        func_00207480(3, 0x1C4, p + 0x400, 16);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0041D6B0((float *)(p + 0x458), *(float *)(p + 0x10)) == 1) {
            *(int *)(p + 0x110) = *(int *)(p + 0x110) | 4;
            func_001AD140(p);
        }
    }
}

void func_004B0340(char *p) {
    func_00376E40(p);
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 2;
    *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x4000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00377260(p);
        *(float *)(p + 0x3C40) = 1200.0f;
        func_00376B80(p, -1);
        func_00376CF0(p);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0041D6B0((float *)(p + 0x8F8), *(float *)(p + 0x10)) == 1) {
            func_00376B40(p, 0xE);
        }
    }
}

void func_004B1080(char *p) {
    func_00376E40(p);
    *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x400000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00377260(p);
        *(float *)(p + 0x3C40) = 1200.0f;
        if (*(signed char *)(p + 0x973) > 5) {
            *(signed char *)(p + 0x973) = *(signed char *)(p + 0x973) - 2;
        }
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            func_00376B40(p, 3);
        }
    }
}

void func_004B9E00(char *p) {
    if ((unsigned char)func_0041D600(p) != 0) {
        func_001AD100(p);
        func_00206730(p + 0x4F4);
        func_00206730(p + 0x4F8);
        switch (*(int *)(p + 0x4FC)) {
        case 0:
            func_004B9EC0(p);
            break;
        case 1:
            func_004BA4D0(p);
            break;
        case 2:
            func_004BA670(p);
            break;
        case 3:
            func_004BA880(p);
            break;
        }
    }
}

void func_004BB530(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00207480(3, 0x25E, p + 0x380, 8);
        *(float *)(p + 0x3E4) = 3.0f;
        func_00330B50(D_01DFABA0, 12, p + 0x3B0, 4);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 1:
        *(float *)(p + 0x3E4) = *(float *)(p + 0x3E4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x3E4) < 0.0f) {
            func_001AD140(p);
            return;
        }
        break;
    }
}

void func_00506760(char *p) {
    func_00382A50(p + 0x218);
    func_00206730(p + 0x21C);
    if (*(char **)(p + 0x218) == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(*(char **)(p + 0x218) + 0x77C8) != 0) {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x20C) = *(float *)(p + 0x20C) - *(float *)(p + 0x10);
    func_0028C5C0(p + 0x220, 0, 1.0f);
    if (*(float *)(p + 0x20C) < 0.0f) {
        func_001AD140(p);
    }
}

void func_002498D0(char *p) {
    func_0024DD30(p + *(unsigned char *)(p + 0x28A0) * 416 + 0x4120);
    if ((unsigned char)func_0024E780(p + *(unsigned char *)(p + 0x28A0) * 416 + 0x4120, 0, 2) & 0x80) {
        *(unsigned char *)(p + 0x24CE) = 1;
    } else {
        *(unsigned char *)(p + 0x24CE) = 0;
    }
    func_0024E520(p + *(unsigned char *)(p + 0x28A0) * 416 + 0x4120);
}

void func_00458BF0(char *p) {
    *(int *)(p + 0x208) = 0;
    switch (*(int *)(p + 0x1A0)) {
    case 0:
        func_00105300(p + 0x1B0, *(char **)(*(char **)(((char **)(*(char **)(p + 0x214) + 0x69F8))[*(int *)(p + 0x19C)] + 0x9D8) + 0x104));
        break;
    case 1:
        func_00105300(p + 0x1B0, *(char **)(*(char **)(((char **)(*(char **)(p + 0x214) + 0x69F8))[*(int *)(p + 0x19C)] + 0x9E4) + 0x104));
        break;
    }
    *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    func_0034BA60(0x36, p + 0x1E0, 0x29, 0, 1);
}

void func_002273B0(char *p) {
    float f;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 6, 0x3B, -1, 2, 5, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        if (!(*(float *)(p + 0x2924) <= *(float *)(p + 0x54) - 5.0f)) {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + 1.0f;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        }
        break;
    }
}

void func_00278980(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002DBCE0(p);
        func_002490F0(p, 2, 0, -1, 2, 5, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        *(unsigned char *)(p + 0x3D49) = 9;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 10);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_002C9360(char *p, int k) {
    int v;
    if (k == 0) {
        if (*(unsigned char *)(p + 0x5C3) == 1 &&
            (*(unsigned char *)(p + 0x2F2E) == 2 || *(unsigned char *)(p + 0x2F2E) == 1) &&
            !(*(float *)(p + 0x2F34) <= D_005BCA80)) {
            *(unsigned char *)(p + 0x2F2E) = 0;
            v = *(unsigned char *)(p + 0x5C2);
            v = v < 2 ? v + 1 : v;
            *(unsigned char *)(p + 0x5C2) = v;
        }
        if (*(int *)(p + 0x5FC) == 1) {
            *(int *)(p + 0x5FC) = 0;
            *(unsigned char *)(p + 0x5C3) = 1;
            func_002CF260(p);
            func_002C4F30(p);
            func_002CF630(p, 0);
            *(float *)(p + 0x2D70) = 1.0f;
        }
    }
}

void func_002CC9E0(char *p) {
    func_0034B9A0(p + 0x50, *(short *)(p + 0x90), *(float *)(p + 0x68), *(float *)(p + 0x64), *(float *)(p + 0x10));
    *(float *)(p + 0x68) = *(float *)(p + 0x68) + *(float *)(p + 0x78) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    if (*(float *)(p + 0x68) < 0.5f) {
        *(float *)(p + 0x68) = 0.5f;
    }
    if ((unsigned char)func_002CFA00(p, 0.0f) == 1) {
        func_00207480(3, 0x14F, p + 0x1890, 16);
        func_002CE1F0(p);
    }
}

void func_0043F070(char *p) {
    switch (*(unsigned char *)(p + 0x7CB)) {
    case 0:
    case 1:
    case 2:
        func_0043EEF0(p, 3);
        break;
    case 3:
        *(float *)(p + 0x7EC) = *(float *)(p + 0x7EC) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x7EC) < 0.0f) {
            func_0043EEF0(p, 4);
        }
        break;
    case 4:
        return;
    }
    func_001A29A0(func_00279290(p + 0x1C0));
}

void func_004D74E0(char *p) {
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

int func_001FF610(char *p) {
    if (*(float *)(p + 4) < func_0011DA38(0.5235988f) && !(*(float *)(p + 4) <= -func_0011DA38(0.5235988f))) {
        return 0;
    }
    if (*(float *)(p + 4) < func_0011DA38(0.78539813f) && !(*(float *)(p + 4) <= -func_0011DA38(0.78539813f))) {
        return 1;
    }
    return 2;
}

int func_0023E1F0(char *p) {
    if (((unsigned char)func_00244DF0(p, 0x8000000F) == 1 || (func_0021CBA0(p) & 2)) && (*(int *)(p + 0x2898) & 1) &&
        (unsigned char)func_002DAD40(p) != 2) {
        if (*(unsigned char *)(p + 0x28A6) == 0) {
            func_0021C7A0(p, 2);
        } else {
            func_0021BDB0(p, 0, 0);
            func_0021C7A0(p, 12);
        }
        return 1;
    }
    return 0;
}

void func_002570E0(void) {
    char *s = *(char **)(*(char **)D_01CAFF0C + 0xC);
    func_00477CE0(s + 0x3D08, 0x3C);
    *(char **)(s + 0x3D44) = func_00203AB0(1, 1, 1);
    *(int *)(*(char **)D_01CAFF0C + 0x10) = *(int *)(s + 0x3D44);
    func_002EF4D0(*(int *)D_01CAFF0C, 1);
    if (*(char **)(s + 0x3D44) != 0) {
        func_00204E40(*(char **)(s + 0x3D44), *(char **)(*(char **)D_01CAFF0C + 4) + 0xFC);
        *(unsigned char *)(s + 0x3C79) = 1;
        *(unsigned char *)(*(char **)(s + 0x3D44) + 0x3C79) = 1;
        *(unsigned char *)(s + 0x3C6E) = 3;
    }
    func_00128488(*(char **)(s + 0x3D1C), 0, *(int *)(s + 0x3D20) * 46);
    *(unsigned char *)(s + 0x3D30) = 0;
}

void func_002977B0(char *p) {
    int k;
    func_0024E7B0(p + 0x8980, 0, 0);
    func_0029DCE0(p, 0x38);
    *(unsigned char *)(p + 0xA993) = 1;
    *(unsigned char *)(p + 0xA992) = 0;
    func_002A0100(p);
    k = func_002A4A40(p);
    *(float *)(p + 0x8924) = ((float *)D_005606E0[k])[*(int *)(p + 0x8928)];
    *(unsigned char *)(p + 5) = 8;
    *(int *)(p + 0x892C) = *(int *)(p + 0x8928);
}

int func_002F2930(char *p) {
    switch (*(signed char *)(p + 0x28)) {
    case 0:
        if (*(int *)(p + 0x1C) - *(int *)(p + 0x20) > *(signed char *)(p + 0x29)) {
            break;
        }
        if (!(*(float *)(p + 0x2C) <= 0.0f)) {
            *(signed char *)(p + 0x28) = 1;
            return 0;
        }
        return 1;
    case 1:
        *(float *)(p + 0x2C) = *(float *)(p + 0x2C) - func_001F9C40(D_01DF5D20, 0x41);
        if (*(float *)(p + 0x2C) <= 0.0f) {
            return 1;
        }
        break;
    }
    return 0;
}

void func_003F0F10(char *p) {
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0)) {
    case 0:
        func_001A2600(func_00279290(p + 0x980), 1);
        func_001A2600(func_00279290(p + 0xF80), 1);
        break;
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 0);
        func_001A23D0(func_00279290(p + 0x980));
        func_001A23D0(func_00279290(p + 0xF80));
        break;
    }
    if (func_0024E800(p + 0x1FD0) != 0) {
        func_003E9930(p);
    }
}

void func_00480FF0(char *p) {
    switch (*(unsigned char *)(p + 0x28B)) {
    case 0:
        func_00480E90(p, 2);
        break;
    case 1:
        func_00480E90(p, 3);
        break;
    case 2:
    case 3:
        *(float *)(p + 0x294) = *(float *)(p + 0x294) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x294) < 0.0f) {
            func_00480E90(p, 4);
        }
        break;
    case 4:
        return;
    }
    func_001A29A0(func_00279290(p + 0x740));
}

void func_0041D840(char *a, char *b, float s) {
    *(float *)(a + 0x44) = 6.283185f * (*(short *)(a + 0x50) / 65536.0f);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b + 0x20), "r"(a + 0x40) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b + 0x10), "r"(a + 0x10) : "memory");
    *(float *)(b + 0x30) = s;
    *(float *)(b + 0x34) = s;
    *(float *)(b + 0x38) = s;
    *(float *)(b + 0x3C) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(b + 0x40) : "memory");
    func_00131760(b + 0x40, b + 0x40, (float *)(b + 0x20));
    func_00105230(b + 0x40, b + 0x40, (float *)(b + 0x10));
    func_001318E0(b + 0x40, b + 0x40, (float *)(b + 0x30));
}

void func_0041D910(char *a, char *b, float x, float y, float z) {
    *(float *)(a + 0x44) = 6.283185f * (*(short *)(a + 0x50) / 65536.0f);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b + 0x20), "r"(a + 0x40) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b + 0x10), "r"(a + 0x10) : "memory");
    *(float *)(b + 0x30) = x;
    *(float *)(b + 0x34) = y;
    *(float *)(b + 0x38) = z;
    *(float *)(b + 0x3C) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(b + 0x40) : "memory");
    func_00131760(b + 0x40, b + 0x40, (float *)(b + 0x20));
    func_00105230(b + 0x40, b + 0x40, (float *)(b + 0x10));
    func_001318E0(b + 0x40, b + 0x40, (float *)(b + 0x30));
}

int func_0020AB70(char *p) {
    while (**(unsigned char **)(p + 0xC) != 14) {
        switch (func_0020AC40(p, p + 0xC)) {
        case 1:
            return 0;
        case 2:
            return 1;
        case -1:
            func_0020D140(p);
            break;
        default:
            *(char **)(p + 0xC) = *(char **)(p + 0xC) + (((**(int **)(p + 0xC) >> 8) & 0xFF) + 1) * 4;
            *(unsigned char *)(p + 0x89) = 0;
            break;
        }
    }
    return 1;
}

void func_00225E60(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        if (*(unsigned char *)(p + 0x28A7) == 0) {
            func_002490F0(p, 0, 0x3A, -1, 0, 0, -1.0f);
        } else {
            func_002490F0(p, 0, 0x32, -1, 0, 0, -1.0f);
        }
        *(unsigned char *)(p + 0x2866) = 0;
        *(unsigned char *)(p + 0x284C) = 1;
        break;
    case 1:
        func_002496D0(p);
        if ((unsigned char)func_00249E20(p, 0) == 4) {
            func_0021B790(p, 10);
        }
        break;
    }
}

void func_002405C0(char *p, unsigned char k) {
    if (k == 0 || (*(unsigned char *)(p + 0x28AA) != 3 && *(signed char *)(p + 0x46) != 1 && *(unsigned char *)(p + 0x3C79) != 0)) {
        *(unsigned char *)(p + 0x3C79) = 0;
        *(unsigned char *)(*(char **)(p + 0x3D44) + 0x3C79) = 0;
        *(unsigned char *)(p + 0x3C6E) = 0;
        *(unsigned char *)(p + 0x3D31) = 0;
        func_002D9070(p, *(signed char *)(p + 0x24F2));
        if (*(char **)(p + 0x3D44) != 0) {
            *(unsigned char *)(*(char **)(p + 0x3D44) + 0xD6) = 0;
        }
        if (*(unsigned char *)(p + 0x28AA) != 1 && *(unsigned char *)(p + 0x28AE) == 0) {
            func_00226A00(p, 0);
            *(float *)(p + 0x28D0) = *(float *)(*(char **)(p + 0x283C) + 0x1F0);
            func_00225F30(p, 2);
            func_00226580(p, 0);
        }
    }
}

void func_00277280(char *p) {
    if ((func_0021CBA0(p) & 0x1000000) || (*(unsigned char *)(p + 0x2849) == 0x11 && *(unsigned char *)(p + 0x2998) == 0xD)) {
        if ((unsigned char)func_002242C0(p) == 0) {
            D_01DFAB80[0] = D_01DFAB80[0] | 0x80000;
            D_01DFAB80[0] = D_01DFAB80[0] | 0x100000;
        } else {
            D_01DFAB8C[0] = D_01DFAB8C[0] | 0x20;
            D_01DFAB8C[0] = D_01DFAB8C[0] | 0x40;
        }
        *(unsigned char *)(p + 0x7F8B) = 0;
    }
}

void func_002D59A0(char *p) {
    char *q;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0031E570(p + 0x1D0);
        *(char **)(p + 0x390C) = func_00207480(3, 0x16B, 0, 16);
        q = *(char **)(p + 0x390C);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x688) + 0x104);
            q[0x9A] = 3;
            *(*(char **)(p + 0x390C) + 0x3A) = 1;
        }
    case 1:
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) {
            func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        }
    }
}

int func_002FFA10(char *p) {
    char *r;
    switch (*(unsigned char *)(p + 0x39)) {
    case 0:
    case 1:
        r = func_001B0FD0(p + 0x694, 0x4340, 1);
        if (r == 0) {
            return 0;
        }
        *(char **)(p + 0x44) = r;
        func_00128488(*(char **)(p + 0x44), 0, 0x4340);
        break;
    case 2:
    case 3:
        r = func_001B0FD0(p + 0x694, 0x2C0, 1);
        if (r == 0) {
            return 0;
        }
        *(char **)(p + 0x48) = r;
        func_00128488(*(char **)(p + 0x48), 0, 0x2C0);
        break;
    }
    return 1;
}

void func_0039CEE0(char *p) {
    switch (*(unsigned char *)(p + 0x2F3C)) {
    case 0:
        func_001A1F90(func_00279290(p + 0xD80));
        func_001A1DC0(func_00279290(p + 0xD80));
        break;
    case 1:
        func_001A1F90(func_00279290(p + 0x1380));
        func_001A1DC0(func_00279290(p + 0x1380));
        break;
    default:
        func_001A1F90(func_00279290(p + 0xD80));
        func_001A1DC0(func_00279290(p + 0xD80));
        func_001A1F90(func_00279290(p + 0x1380));
        func_001A1DC0(func_00279290(p + 0x1380));
        break;
    }
}

void func_0039CFB0(char *p) {
    switch (*(unsigned char *)(p + 0x2F3C)) {
    case 0:
        func_001A1E10(func_00279290(p + 0xD80));
        func_001A1D90(func_00279290(p + 0xD80));
        break;
    case 1:
        func_001A1D90(func_00279290(p + 0x1380));
        func_001A1E10(func_00279290(p + 0x1380));
        break;
    default:
        func_001A1E10(func_00279290(p + 0xD80));
        func_001A1D90(func_00279290(p + 0xD80));
        func_001A1D90(func_00279290(p + 0x1380));
        func_001A1E10(func_00279290(p + 0x1380));
        break;
    }
}

void func_004557B0(char *p) {
    int k;
    char *g;
    *(unsigned char *)(p + 0x642) = 1;
    *(unsigned char *)(p + 5) = 0;
    func_0028C790(p + 0x6C0, 0);
    func_0028C790(p + 0x6C0, 1);
    k = *(short *)(p + 0x1F8);
    if (k != -1) {
        g = *(char **)(*(char **)D_01CAFF0C + 0x18);
        if (k < 32) {
            ((int *)(g + 0x18))[k / 32] |= 1 << (k & 31);
        } else {
            k -= 32;
            ((int *)(g + 0x44))[k / 32] |= 1 << (k & 31);
        }
    }
}

char *func_004E0880(char *p) {
    int i;
    func_00252FA0(p);
    *(char **)p = D_005B9CA0;
    *(char **)(p + 0x40) = D_005B9CC4;
    *(char **)(p + 0xA0) = D_005B9D44;
    *(unsigned char *)(p + 0x240) = 0;
    *(unsigned char *)(p + 0x241) = 0;
    *(short *)(p + 0x242) = 0;
    *(int *)(p + 0x248) = 0;
    *(int *)(p + 0x24C) = 0;
    *(int *)(p + 0x250) = 0;
    *(int *)(p + 0x260) = 0;
    *(int *)(p + 0x264) = 0;
    *(int *)(p + 0x268) = 0;
    *(float *)(p + 0x26C) = 1.0f;
    *(float *)(p + 0x270) = 100000.0f;
    *(unsigned char *)(p + 0x274) = 0;
    *(unsigned char *)(p + 0x275) = 0;
    *(short *)(p + 0x276) = 0;
    for (i = 0; i < 10; i++) {
        *(short *)(p + i * 2 + 0x278) = -1;
    }
    func_002E7840(p + 0x2A0);
    func_0028C110(p + 0x340);
    return p;
}

void func_002C6B60(char *p) {
    char *e;
    char *q;
    e = func_00207480(3, 0xDC, 0, 16);
    if (e != 0) {
        e[0x9C] = 0x40;
        e[0x9D] = 0x20;
        *(unsigned char *)(e + 0x9E) = 0x80;
        e[0x9B] = 2;
        *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x4FC) + 0x104);
        e[0x9A] = 1;
        e[0x3A] = 1;
    }
    *(char **)(p + 0x2F78) = func_00207480(3, 0x2CF, 0, 16);
    q = *(char **)(p + 0x2F78);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x4FC) + 0x104);
        q[0x9A] = 1;
        *(*(char **)(p + 0x2F78) + 0x3A) = 1;
    }
    func_003305E0(D_01DFABA0, 0, 0x5A, (int)(p + 0x50), 0, 0, 0);
}

void func_001EC060(char *p) {
    func_001ED920(D_005BE0D4);
    D_005BE09C = p + 0x10;
    switch (*(signed char *)(p + 8)) {
    case 0:
        func_001EC140(p);
        break;
    case 1:
        func_001EC390(p);
        break;
    case 2:
        func_001EC4F0(p);
        break;
    }
    *(int *)(p + 0x268) = *(int *)(p + 0x268) + 1;
    if (D_01CB051C[0] < *(signed char *)(p + 0x266) * 360000 - 1) {
        D_01CB051C[0] = D_01CB051C[0] + 1;
    }
}

int func_002441F0(char *p, unsigned char k) {
    switch (k) {
    case 0:
        if ((unsigned char)func_00243FC0(p, 2) == 1) {
            return 1;
        }
        if ((unsigned char)func_00243FC0(p, 3) == 1) {
            return 2;
        }
        break;
    case 1:
        if ((unsigned char)func_00243FC0(p, 5) == 1) {
            return 1;
        }
        if ((unsigned char)func_00243FC0(p, 6) == 1) {
            return 2;
        }
        break;
    }
    return 0;
}

void func_003A8940(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        func_00207480(2, 0x97, *(char **)(*(char **)(p + 0x724) + 0x104), 16);
        func_003AB180(p);
    case 1:
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            switch (*(unsigned char *)(p + 0x4E1E)) {
            case 0:
                *(signed char *)(p + 0x4E16) = 0x11;
                break;
            case 1:
                *(signed char *)(p + 0x4E16) = 0;
                break;
            }
            func_003AA8F0(p);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003C67A0(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 3) {
            func_0024E7B0(p + 0x1500, 0, 0);
            func_003C6880(p, D_0056EC50[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3]);
        }
        if ((unsigned char)func_0024E800(p + 0x1430) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003D2560(char *p) {
    char *b;
    if ((unsigned char)func_0041D600(p) != 0) {
        if (*(unsigned char *)(*(char **)(p + 0xD0) + 0x976) == 0) {
            func_001A5C30(func_00279290(p + 0x240));
        } else {
            func_001A5D00(func_00279290(p + 0x240));
        }
        func_001AD100(p);
        func_00206730(p + 0xB50);
        switch (*(int *)(p + 0xB58)) {
        case 0:
            func_003D29C0(p);
        }
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D840(b, p + 0x1B0, 1.0f);
        func_0028C5C0(p + 0x8D0, 0, 1.0f);
        func_00195E20(D_005BE098, p);
    }
}

void func_003DD4D0(char *p) {
    char *q;
    func_0028C790(p + 0xBD0, 0);
    func_0028C790(p + 0xBD0, 1);
    func_0028C200(p + 0xBD0, p + 0xDF0, p + 0xE00, 2, D_00586E20, p, 0);
    func_0028C8E0(p + 0xBD0, 0);
    func_0028C910(p + 0xBD0);
    *(unsigned char *)(p + 0xDF0) = 6;
    *(unsigned char *)(p + 0xDF1) = 0;
    *(short *)(p + 0xDF2) = 0;
    *(unsigned char *)(p + 0xE00) = 2;
    *(int *)(p + 0xE10) = 0;
    *(int *)(p + 0xE14) = 0;
    *(int *)(p + 0xE18) = 0;
    *(float *)(p + 0xE1C) = 1.0f;
    *(float *)(p + 0xE20) = 40.0f;
    func_0028C3A0(p + 0xBD0, 0, -1, p + 0x9A0);
    q = *(char **)(p + 0xC4C);
    if (q != 0) {
        *(int *)(q + 0xC) = *(int *)(q + 0xC) & 0xFFFCFFFF;
    }
}

void func_003F1130(char *p) {
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0)) {
    case 0:
        func_001A2600(func_00279290(p + 0x980), 1);
        func_001A2600(func_00279290(p + 0xF80), 1);
        break;
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 0);
        func_001A23D0(func_00279290(p + 0x980));
        func_001A23D0(func_00279290(p + 0xF80));
        break;
    }
    *(float *)(p + 0x3A8C) = *(float *)(p + 0x3A8C) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x3A8C) < 0.0f) {
        func_003E9930(p);
    }
}

void func_004E3160(char *p) {
    *(float *)(p + 0x63C) = *(float *)(p + 0x63C) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x63C) < 0.0f) {
        func_004E3550(p, 1);
        *(unsigned char *)(p + 0x148) = 1;
        func_002530C0(p, D_0058B5F0);
        *(unsigned char *)(p + 0x680) = 1;
        *(unsigned char *)(p + 5) = 2;
    }
    if (*(unsigned char *)(p + 0x680) == 1) {
        func_00253110(p, p + 0x660, 3, *(float *)(p + 0x10));
        switch (func_002536B0(p, p + 0x660)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x680) = 0;
            break;
        case -1:
            *(unsigned char *)(p + 0x680) = 0;
            break;
        }
    }
}

typedef struct { unsigned char r, g, b, a; } C4;
typedef struct { float x, y, z, w; } F4u;
typedef struct { float x, y, z; } F3u;
void func_002CDFB0(char *);
void func_0038B130(char *);
int func_003B9390(char *);
extern char D_005AB530[];
extern char D_005AB500[];
void func_00221240(char *);
void func_002CB900(char *, int);
void func_002F44B0(char *);
void func_0032FDB0(char *);
int func_002F9800(char *, int);
extern char D_005A7AB0[];
extern char D_00599B28[];
extern int D_01CAFF14[];
void func_001282D0(char *, char *, int);
void func_00100450(char *, void *, void *, int, int);
void func_0023B880();
void func_00202ED0();
int func_00277EF0(char *, float);
void func_0024F480(char *, int);
extern char D_005AC730[];
void func_002CD800(char *);
void func_0039D890(char *);
char *func_00231CC0(char *, int, int);
extern char D_01CAF2C0[];
extern char D_01CAF570[];
extern char D_00568CB0[];
extern char D_00568CD0[];
void func_0029B250(char *);
int func_002A4030(char *);
void func_0029DD80(char *, int, int);
void func_0030E540(char *);
void func_002872E0(char *, int, int);
int func_002DBF70(char *);
void func_001B1130(int);
void func_001AB140(char *);
void func_00287320(char *);
void func_001ABE60(char *, int);
void func_003712B0(char *, int);
void func_00131D70(char *, char *);
void func_004FE910(char *, char *);
extern char D_00540DC0[];
extern char D_00540DE0[];
extern char D_00540E00[];
extern char D_00540E20[];
extern signed char D_00666718[];
extern signed char D_00666719[];
extern char D_006480D0[];
int func_0019E7B0(char *);
int func_0019EAA0(char *);
void func_0029C760(char *);
void func_003708E0(char *);
void func_00370BF0(char *);
void func_00370EF0(char *);
void func_002282B0(char *);
void func_00129690(char *, int);
void func_001349C0(short, short);
void func_001ED3F0(void);
void func_00138500(void);
void func_00196070(char *);
void func_001960F0(char *, int);
void func_001ED310(void);
void func_00195390(char *);
extern int D_01DFAB70[];
extern int D_01DFAB7C[];
void func_004AB880(char *);
void func_004ABBF0(char *);
void func_004AC030(char *);
void func_004AC420(char *);
void func_004AC670(char *);
void func_004AC8F0(char *);
void func_004ACA80(char *);
void func_00505550(char *);
void func_00505570(char *);
void func_005055F0(char *);
void func_00506080(char *);
void func_00506210(char *);
void func_00506480(char *);
void func_00507550(char *);
void func_00507570(char *);
void func_005075E0(char *);
extern float D_00561DA0[][3];
void func_002A0090(char *);
void func_00322030(char *, int);
extern char D_005BA060[];
void func_001AAD30();
void func_0013D240();
void func_002790E0();
void func_002791E0();
void func_003206E0(char *);
void func_004D9B90(char *, int);
void func_004D9950(char *);
void func_004D9AC0(char *, int);
void func_00323140(int, int, int, int, int);
int func_0020F210(char *);
float func_0041E060(char *);
int func_0038F490(char *);
void func_0041DAB0(char *, char *, int);
void func_0038F830(char *);
extern char D_0057BA90[];
extern char D_005B6990[];
extern signed char D_0056AF22[];
extern signed char D_0056AF23[];
int func_0023EC60(char *);
int func_0023F290(char *);
void func_003D16B0(char *);
int func_0023E330(char *);
int func_0023E500(char *);
extern char D_00553750[];
extern char D_005B8340[];
extern char D_005AADD0[];
extern char D_005B6810[];
extern char D_005B6834[];
extern char D_005B68B4[];
extern char D_005B6948[];
void func_002E00E0(char *, char *, char *, int);
void func_002E1B90(char *);
int func_0039D080(char *, int);
void func_0041DBA0(char *, char *);
void func_0024F750(char *);
void func_0027A570(char *);
void func_004AB580(char *);
void func_004AB610(char *);
void func_004AB6C0(char *);
void func_004AB770(char *);
int func_0023AA80(int);
void func_004FE770(char *);
void func_004FE780(char *);
void func_004FE790(char *);
void func_004FE7A0(char *);
void func_004FE7B0(char *);
void func_004FE7C0(char *);
void func_004FE7D0(char *);
void func_004FE120(char *);
void func_00317740(char *, int);
void func_00207850(char *);
void func_001EF6B0(char *);
void func_0023D5B0(char *);
extern int D_01DFAB74[];
extern float D_0055C7F0[];
extern float D_0055C7F4[];
extern float D_0055C7F8[];
extern float D_0055C7FC[];
void func_002F30B0(int, char *, char *);
int func_00124EC0(int);
void func_002F9860(char *, int, int, int);
void func_003B61B0(char *);
void func_003B6450(char *);
void func_003B4F60(char *);
void func_0048B400(char *);
void func_0048B320(char *);
int func_0048B150(char *);
void func_0048AF80(char *, int);
void func_0041D820(char *, float, float);
void func_0041D6E0(char *, char *, int, float);
void func_0022A890(char *);
extern char D_00568430[];
void func_0033C100(char *);
void func_0033C500(char *);
void func_0033C810(char *);
void func_0033C8A0(char *);
void func_00277E70(char *);
void func_00277ED0(char *);
void func_0048B020(char *);
void func_0041D800(char *, float, float);
void func_0021CB60(char *, int);
void func_0021CB50(char *, int);
extern float D_0056EC20[];
extern int D_0056EC80[];
extern float D_0056EBF0[];
void func_003C8350(char *);
int func_003C8470(char *, int, int);
void func_0023A3E0(char *, unsigned char);
extern char D_00546740[];
void func_001A5D40(char *, int);
extern unsigned char D_00666716[];
void func_001AE0D0(char *);

void func_0023D330(char *p) {
    *(C4 *)(p + 0x2928) = *(C4 *)(p + 0x2960);
    *(F4u *)(p + 0x292C) = *(F4u *)(p + 0x2964);
    *(F4u *)(p + 0x293C) = *(F4u *)(p + 0x2974);
    *(float *)(p + 0x294C) = *(float *)(p + 0x2984);
    *(F3u *)(p + 0x2950) = *(F3u *)(p + 0x2988);
    *(float *)(p + 0x295C) = *(float *)(p + 0x2994);
    if (func_0023E960(p) == 0 && func_00245C40(p) == 0 && func_0023EDD0(p) == 0) {
        func_0023EF80(p);
    }
}

void func_00259B30(char *p) {
    unsigned char k;
    if (*(unsigned char *)(p + 0x28A0) == 0) {
        k = *(unsigned char *)(p + 0x24EF);
        if (k & 0x40) {
            switch (k & 0x3F) {
            case 0:
                func_001A1E70(func_00279290(p + 0x180), 0);
                func_001A2000(func_00279290(p + 0x180), 1);
                break;
            case 1:
                func_001A2000(func_00279290(p + 0x180), 0);
                func_001A1E70(func_00279290(p + 0x180), 1);
                break;
            }
        } else {
            func_001A1E70(func_00279290(p + 0x180), 0);
            func_001A2000(func_00279290(p + 0x180), 1);
        }
    }
}

void func_0029C860(char *p) {
    switch ((unsigned char)func_0024E780(p + 0x8980, 0, 0)) {
    case 1:
        func_0024E7B0(p + 0x8980, 0, 0);
        *(float *)(p + 0x8924) = 1.0f;
        *(int *)(p + 0x9644) = 0;
        *(unsigned char *)(p + 5) = 0x1F;
    }
    if (func_0024E800(p + 0x8980) != 0 || *(unsigned char *)(p + 0x8922) == 0) {
        func_002965E0(p, 0xFFFF);
        func_0029FD40(p);
        *(int *)(p + 0xAA9C) = 0;
        *(unsigned char *)(p + 0xA563) = 0;
    }
}

void func_002CC3B0(char *p) {
    func_0034B9A0(p + 0x50, *(short *)(p + 0x90) + 0x8000, *(float *)(p + 0x68), *(float *)(p + 0x64), *(float *)(p + 0x10));
    *(float *)(p + 0x68) = *(float *)(p + 0x68) + *(float *)(p + 0x78) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    if (*(float *)(p + 0x68) < 0.5f) {
        *(float *)(p + 0x68) = 0.5f;
    }
    if (*(float *)(p + 0x64) < 0.0f && (unsigned char)func_002CFA00(p, 0.0f) == 1) {
        func_00207480(3, 0x14F, p + 0x1890, 16);
        func_002CDFB0(p);
    }
}

void func_002D37C0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0031E570(p + 0x1D0);
        *(unsigned char *)(p + 0x1E2) = 3;
        *(unsigned char *)(p + 0x1E3) = 2;
    case 1:
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 0) == 1) {
            func_0024E7B0(p + 0x2F70, 0, 0);
            func_00207480(3, 0x144, p + 0x1EF0, 16);
        }
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) {
            if (*(unsigned char *)(p + 0x38D0) != 2) {
                *(unsigned char *)(p + 0x38D0) = *(unsigned char *)(p + 0x38D0) + 1;
            }
            func_002D2270(p, 7);
        }
    }
}

void func_0038B050(char *p) {
    char *q;
    unsigned short v;
    unsigned char c;
    unsigned char lo;
    unsigned char hi;
    if (*(unsigned char *)(p + 0x180) != 0) {
        func_0038B130(p);
        if (*(unsigned char *)(p + 0x181) != 1) {
            func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
            return;
        }
        if (*(unsigned char *)(p + 0x116) != 0) {
            *(float *)(p + 0x184) = *(float *)(p + 0x184) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x184) < 0.0f) {
                *(unsigned char *)(p + 0x181) = 0;
                func_0028C790(p + 0x190, 0);
                func_0028C910(p + 0x190);
                func_0028C3A0(p + 0x190, 0, -1, p + 0x140);
                v = *(unsigned short *)(p + 0x110);
                q = *(char **)(p + 0x20C);
                c = *(unsigned char *)(p + 0x410);
                hi = (v >> 8) & 0xFF;
                lo = v & 0xFF;
                if (q != 0) {
                    q[0xC4] = c;
                    q[0xC5] = 0;
                    q[0xC6] = lo;
                    q[0xC7] = hi;
                }
            }
        }
    }
}

void func_003AA5E0(char *p) {
    char *q;
    if ((*(unsigned char *)(p + 0x4BE4) == 0x23 || *(unsigned char *)(p + 0x4BE4) == 0x24) && *(unsigned char *)(p + 0x5164) == 1) {
        if (*(char **)(p + 0x4AF0) == 0) {
            *(char **)(p + 0x4AF0) = func_00207480(3, 0x35C, 0, 16);
            q = *(char **)(p + 0x4AF0);
            if (q != 0) {
                *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x71C) + 0x104);
                q[0x9A] = 0;
                *(*(char **)(p + 0x4AF0) + 0x3A) = 1;
            }
        }
    } else if (*(char **)(p + 0x4AF0) != 0) {
        func_001AD140(*(char **)(p + 0x4AF0));
        *(char **)(p + 0x4AF0) = 0;
        q = func_00207480(3, 0x365, 0, 16);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x71C) + 0x104);
            q[0x9A] = 0;
        }
    }
}

void func_003F1360(char *p) {
    *(float *)(p + 0x3A8C) = *(float *)(p + 0x3A8C) - *(float *)(p + 0x10);
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0)) {
    case 0:
        func_001A2600(func_00279290(p + 0x980), 1);
        func_001A2600(func_00279290(p + 0xF80), 1);
        break;
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 0);
        func_001A23D0(func_00279290(p + 0x980));
        func_001A23D0(func_00279290(p + 0xF80));
        break;
    }
    if (*(float *)(p + 0x3A8C) < 0.0f) {
        func_003E9930(p);
    }
}

void func_0021BDB0(char *p, int a, int b) {
    *(unsigned char *)(p + 0x24D0) = a;
    *(unsigned char *)(p + 0x299C) = 0;
    *(unsigned char *)(p + 0x2998) = 0;
    *(signed char *)(p + 0x3D49) = *(signed char *)(p + 0x3BA1);
    *(unsigned char *)(p + 0x28A5) = 2;
    *(signed char *)(p + 0x3B9F) = -1;
    if ((unsigned char)b == 1) {
        func_00221240(p);
        func_00220860(p, 1, 0, (float)(unsigned int)*(unsigned char *)(p + 0x24D0));
        func_00220860(p, 0, 0, (float)(unsigned int)*(unsigned char *)(p + 0x24D0));
    }
    func_0021C7A0(p, 10);
}

void func_002CAE70(char *p) {
    func_0024DA80(p + 0x2450, 0, 7);
    func_0024DA80(p + 0x2520, 0, 7);
    func_0024DA80(p + 0x25F0, 0, 7);
    func_0024DA80(p + 0x26C0, 0, 7);
    func_0024DA80(p + 0x2790, 0, 7);
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 0.0f;
    *(float *)(p + 0x6C) = 1.0f;
    *(float *)(p + 0x70) = 0.0f;
    *(float *)(p + 0x74) = -1.0f;
    *(float *)(p + 0x78) = 0.0f;
    *(float *)(p + 0x7C) = 1.0f;
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    func_002CB900(p, 0x28);
    *(unsigned char *)(p + 0x2CE4) = 0x28;
    *(unsigned char *)(p + 0x2CE5) = 0x28;
    *(unsigned char *)(p + 0x2CE6) = 0x28;
    *(unsigned char *)(p + 0x2CE7) = 0x28;
    *(unsigned char *)(p + 0x2CE8) = 0x28;
    func_00128488(p + 0x5AD, 0, 20);
}

char *func_002F4600(char *p) {
    int i;
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005AB530;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x40) : "memory");
    *(int *)(p + 0x80) = 0;
    for (i = 0; i < 3; i++) {
        ((int *)(p + 0x84))[i] = 0;
    }
    *(int *)(p + 0x90) = 0;
    *(unsigned char *)(p + 0x94) = 0;
    *(char **)p = D_005AB500;
    func_002F44B0(p);
    return p;
}

char *func_0023BB20(char *p) {
    int i;
    *(char **)p = D_005A7AB0;
    func_001282D0(p + 0x10, D_00599B28, 4);
    func_00128488(p + 0x14, 0, 14);
    func_00128488(p + 0x30, 0, 0x900);
    func_00100450(p + 0x930, (void *)func_0023B880, (void *)func_00202ED0, 16, 0x30);
    for (i = 0; i < 48; i++) {
        *(char **)(p + i * 16 + 0x93C) = p + i * 0x30 + 0x30;
    }
    return p;
}

int func_00244E60(char *p, unsigned int id) {
    unsigned char k;
    if (id != 0) {
        switch (id & 0xFF000000) {
        case 0x80000000:
            k = ((unsigned char *)(p + 0x24DB))[id & 0xFF];
            if (k == 2) {
                return 2;
            }
            if (k != 1) {
                break;
            }
            if (id == 0x80000005 && (*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x40)])) {
                *(unsigned char *)(p + 0x2905) = 1;
                *(float *)(p + 0x2910) = 30.0f;
            }
            return 1;
        case 0x40000000:
            if ((id & 0xFF) == *(unsigned char *)(p + 0x2998)) {
                return 2;
            }
            break;
        }
    }
    return 0;
}

void func_0024F380(char *p) {
    float s = func_001F9C40(D_01DF5D20, 0x87);
    float f = *(float *)(p + 0x10) * s;
    if (*(unsigned char *)(p + 0x20) == 1) {
        if ((unsigned char)func_00277EF0(p + 0x30, f) == 1) {
            func_00278060(p + 0x30, ((char **)D_01CAFF14)[0]);
        } else {
            switch (*(unsigned char *)(p + 0x120)) {
            case 0:
                *(unsigned char *)(p + 0x20) = 0;
                break;
            case 1:
                func_0024F480(p, 0);
                break;
            case 2:
                if (*(unsigned char *)(p + 0x21) == 0) {
                    func_0024F480(p, 1);
                } else {
                    func_0024F480(p, 0);
                }
                break;
            }
        }
    }
}

void func_002CD620(char *p) {
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        *(unsigned char *)(p + 0x5AD) = *(unsigned char *)(p + 0x5AD) + 1;
    case 1:
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
        *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        *(float *)(p + 0x58) = *(float *)(p + 0x58) + *(float *)(p + 0x68) * *(float *)(p + 0x10);
        *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        if ((unsigned char)func_002CFA00(p, 0.0f) == 1) {
            func_00207480(3, 0x14F, p + 0x1890, 16);
            *(unsigned char *)(p + 0x2D7C) = 7;
            *(unsigned char *)(p + 0x5C1) = 0;
            func_002CD800(p);
        }
    }
}

char *func_003271B0(char *p) {
    int i;
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005AB530;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x40) : "memory");
    *(int *)(p + 0x80) = 0;
    for (i = 0; i < 3; i++) {
        ((int *)(p + 0x84))[i] = 0;
    }
    *(int *)(p + 0x90) = 0;
    *(unsigned char *)(p + 0x94) = 0;
    *(char **)p = D_005AC730;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0xA1) = 0;
    *(int *)(p + 0xA4) = 0;
    return p;
}

void func_0038E8F0(char *p) {
    char *q;
    char *e;
    if (*(int *)(p + 0x410) == 0) {
        *(char **)(p + 0x410) = func_00207480(3, 0x2D0, 0, 16);
        q = *(char **)(p + 0x410);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x4E0) + 0x104);
            q[0x9A] = 1;
            *(*(char **)(p + 0x410) + 0x3A) = 1;
        }
        e = func_00207480(3, 0xDC, 0, 16);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x4E0) + 0x104);
            e[0x9A] = 1;
            e[0x3A] = 1;
            e[0x9C] = 0x40;
            e[0x9D] = 0x20;
            *(unsigned char *)(e + 0x9E) = 0x80;
            e[0x9B] = 2;
        }
        func_003305E0(D_01DFABA0, 0, 0x5A, (int)(p + 0x50), 0, 0, 0);
    }
}

static inline unsigned char pair_done(char *p) {
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) {
        return 1;
    }
    return 0;
}

void func_003969F0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x2D;
        func_0024DA80(p + 0x29D0, 0, 0x2D);
        func_0024DA80(p + 0x2AA0, 0, 0x2D);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x1E4) = 0;
        *(unsigned char *)(p + 0x1E5) = 0;
        *(unsigned char *)(p + 0x2DE0) = 1;
        func_0039D890(p);
    case 1:
        if (pair_done(p) == 1) {
            func_003A02B0(p, 2);
        }
    }
}

static inline unsigned char armed(char *p) {
    return *(unsigned char *)(p + 0x21C9) != 0;
}

static inline unsigned char partner_ready(char *g) {
    if (*(unsigned char *)(g + 0x28AE) == 1 && *(unsigned char *)(g + 0x28A9) == 1) {
        return 1;
    }
    return 0;
}

int func_003B5CD0(char *p) {
    char *g;
    if (!armed(p)) {
        return 0;
    }
    if ((unsigned char)func_003B5A00(p, *(short *)(p + 0x2210)) == 1) {
        return 0;
    }
    if (*(int *)(p + 0x2210) == *(int *)(p + 0x21FC)) {
        return 0;
    }
    if (*(unsigned char *)(p + 0x2190) == 1) {
        g = *(char **)(*(char **)D_01CAFF0C + 0xC);
        if (g != 0 && partner_ready(g) == 1) {
            *(short *)(p + 0x20CE) = 0x25;
        }
    } else {
        *(short *)(p + 0x20CE) = 0x1F;
    }
    return 1;
}

void func_00485110(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0xAF0) = 3.0f;
        func_00207480(3, 0x21F, p + 0x150, 16);
        func_0028C740(p + 0x1A0);
        *(unsigned char *)(p + 0x3C0) = 1;
        *(float *)(p + 0x3F0) = 300.0f;
        func_0028C3A0(p + 0x1A0, 0, -1, p + 0x150);
        func_00330BD0(D_01DFABA0, 0x2C, p + 0x50, 0x22, 0);
    case 1:
        *(float *)(p + 0xAF0) = *(float *)(p + 0xAF0) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xAF0) < 0.0f) {
            *(unsigned char *)(p + 4) = 3;
        }
    }
    func_0028C5C0(p + 0x1A0, 0, *(float *)(p + 0x10));
}

static inline unsigned char both_done(char *p) {
    if ((unsigned char)func_0024E800(p + 0x1D00) == 1 && (unsigned char)func_0024E800(p + 0x1DD0) == 1) {
        return 1;
    }
    return 0;
}

void func_00299E80(char *p) {
    if (*(unsigned char *)(p + 0x8920) == 0) {
        func_0029B250(p);
        return;
    }
    switch (func_002A4030(p)) {
    case 0:
        *(unsigned char *)(p + 5) = 0x16;
        func_0029DD80(p, 0x28, 10);
        return;
    case 1:
        func_0029DCE0(p, 0x1E);
        break;
    case 2:
        func_0029DCE0(p, 0x1F);
        break;
    }
    *(unsigned char *)(p + 0xA993) = 1;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA988) = 0;
    func_002A0100(p);
    *(unsigned char *)(p + 5) = 0x15;
}

void func_002DBE80(char *p) {
    func_0030E540(D_01DFA310);
    func_002872E0(*(char **)(*(char **)(p + 0xC) + 8), 3, *(int *)(p + 0x14));
    if (func_002DBF70(p) != -1) {
        func_002872E0(*(char **)(*(char **)(p + 0xC) + 8), 0, func_002DBF70(p));
    }
    func_002872E0(*(char **)(*(char **)(p + 0xC) + 8), 4, *(int *)(p + 0x14));
    D_01CAFF14[0] = 0;
    D_01CAF51F[0] = 0;
    func_001B1130(0);
    if (*(unsigned char *)(p + 0x10) == 1) {
        func_001AB140(D_00666200);
    }
    func_00287320(*(char **)(*(char **)(p + 0xC) + 8));
    func_001ABE60(D_01CAF2C0, 0);
    if (*(int *)(p + 0x14) == 3) {
        func_003712B0(D_01CAF570, 1);
    }
}

void func_003B0420(char *p) {
    *(unsigned char *)(p + 0x21CA) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 6;
        func_0024DA80(p + 0x1D00, 0, 6);
        func_0024DA80(p + 0x1DD0, 0, 6);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x21C4) = 1;
        break;
    case 1:
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
        }
        break;
    case 2:
        break;
    }
}

void func_003B92A0(char *p) {
    if (*(unsigned char *)(p + 0x1B4) != 0) {
        *(unsigned char *)(p + 0x1B9) = *(unsigned char *)(*(char **)(p + 0x1DC) + 0x4E17);
    }
    switch (*(unsigned char *)(p + 0x1B6)) {
    case 0:
        break;
    case 1:
        *(unsigned char *)(p + 0x1A8) = 1;
        *(float *)(p + 0x150) = *(float *)(p + 0x240);
        *(float *)(p + 0x154) = *(float *)(p + 0x244);
        *(float *)(p + 0x158) = *(float *)(p + 0x248);
        *(float *)(p + 0x15C) = 1.0f;
        func_00131D70(p + 0x80, p + 0x150);
        switch (*(unsigned char *)(p + 0x1B5)) {
        case 0:
            break;
        case 1:
            func_004FE910(p, D_00568CB0);
            break;
        case 2:
            break;
        case 3:
            func_004FE910(p, D_00568CD0);
            break;
        }
        break;
    case 2:
        break;
    }
}

void func_003D3790(char *p) {
    char *g;
    switch (*(int *)(p + 0xB54)) {
    case 0:
        *(float *)(p + 0xB60) = 600.0f;
        *(int *)(p + 0xB54) = 1;
    case 1:
        g = *(char **)(p + 0x94C);
        if (g != 0 && (*(int *)(g + 8) & 0x31001)) {
            func_0041D670(p + 0xB50);
            func_0034BA60(0x4B, p + 0x50, 0x32, 0, 1);
            func_00207480(3, 0x336, p + 0x1F0, 16);
            *(float *)(p + 0xB60) = 30.0f;
            *(int *)(p + 0xB54) = 2;
        }
    case 2:
        if ((unsigned char)func_0041D6B0((float *)(p + 0xB60), *(float *)(p + 0x10)) == 1) {
            func_001AD140(p);
            return;
        }
    }
}


int func_0023F190(char *p) {
    if (*(unsigned char *)(p + 0x28AA) == 2) {
        return 0;
    }
    if (*(unsigned char *)(p + 0x290D) == 1) {
        return 0;
    }
    if ((*(int *)(p + 0x2898) & 1) &&
        ((unsigned char)func_00244DF0(p, 0x8000000F) == 1 || (unsigned char)func_00244DF0(p, 0x80000009) == 1 ||
         *(unsigned char *)(p + 0x2848) == 1) &&
        (*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x100)])) {
        func_0021C7A0(p, 0x12);
        return 1;
    }
    return 0;
}

void func_0029C3B0(char *p) {
    if (*(unsigned char *)(p + 0x8922) == 0) {
        func_00299E80(p);
        return;
    }
    switch (func_002A4030(p)) {
    case 2:
        *(unsigned char *)(p + 5) = 0x1D;
        func_0029DD80(p, 0x2A, 10);
        func_0029C760(p);
        return;
    case 0:
        func_0029DCE0(p, 0x1E);
        break;
    case 1:
        func_0029DCE0(p, 0x1F);
        break;
    }
    *(unsigned char *)(p + 0xA993) = 1;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA988) = 0;
    func_002A0100(p);
    *(unsigned char *)(p + 5) = 0x1C;
}

void func_00370730(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00370830(p);
        break;
    case 1:
        func_003708E0(p);
        break;
    case 2:
        func_00370BF0(p);
        break;
    case 3:
        func_00370EF0(p);
        break;
    case 4:
        func_00371040(p);
        break;
    }
    func_002282B0(p + 0x480);
    func_00206730(p + 0x578);
    if (*(int *)(p + 0x480) == 0) {
        func_001AD140(p);
    }
    *(float *)(p + 0x50) = *(float *)(p + 0x4E0);
    *(float *)(p + 0x54) = *(float *)(p + 0x4E4);
    *(float *)(p + 0x58) = *(float *)(p + 0x4E8);
    *(float *)(p + 0x5C) = 1.0f;
    *(short *)(p + 0x90) = 0x7FFF;
}

void func_001EBF60(char *p) {
    func_00129690(D_00540DC0, 0x600);
    func_00129690(D_00540DE0, 0x440);
    func_00129690(D_00540E00, 0x7C0);
    func_00129690(D_00540E20, 0x5B0);
    *(unsigned char *)(p + 0x264) = 1;
    *(unsigned char *)(p + 0x266) = 0x3C;
    *(unsigned char *)(p + 0x265) = 0;
    func_001349C0(-D_00666718[0], -D_00666719[0]);
    func_001ED3F0();
    func_00138500();
    func_00196070(D_006480D0);
    func_001960F0(D_006480D0, 8);
    func_001ED310();
    func_001ABE60(p + 0x10, 0);
    D_005BE09C = p + 0x10;
    *(char **)(p + 0xC40) = p;
    func_00195390(D_00645A30);
}

int func_00430DA0(char *p, unsigned char a, unsigned char b) {
    if ((*(int *)(p + 0x2898) & 2) && *(unsigned char *)(p + 0x3C83) != 0) {
        *(unsigned char *)(p + 0x3C84) = 1;
        return 0;
    }
    *(unsigned char *)(p + 0x3C82) = a;
    *(unsigned char *)(p + 0x2854) = b;
    *(unsigned char *)(p + 0x3C80) = 6;
    if ((unsigned char)b == 0 && (unsigned char)a == 1 && *(unsigned char *)(p + 0x2848) == 0x14) {
        if ((unsigned char)func_002242C0(p) == 0) {
            D_01DFAB70[0] = D_01DFAB70[0] | 0x80000000;
        } else {
            D_01DFAB7C[0] = D_01DFAB7C[0] | 0x20000;
        }
    }
    if (!(*(int *)(p + 0x2898) & 2)) {
        func_0021C7A0(p, 0x13);
        return 1;
    }
    *(unsigned char *)(p + 0x3C84) = 1;
    return 0;
}

void func_004AB780(char *p) {
    if ((unsigned char)func_0041D600(p) != 0) {
        func_001AD100(p);
        func_00206730(p + 0x4C0);
        switch (*(int *)(p + 0x4C4)) {
        case 0:
            func_004AB880(p);
            break;
        case 1:
            func_004ABBF0(p);
            break;
        case 2:
            func_004AC030(p);
            break;
        case 3:
            func_004AC420(p);
            break;
        case 0x80:
            func_004AC670(p);
            break;
        case 0x81:
            func_004AC8F0(p);
            break;
        case 0x82:
            func_004ACA80(p);
            break;
        }
    }
}

void func_004D2510(char *p, int k) {
    if ((unsigned char)k == 1) {
        func_001A1E10(func_00279290(p + 0x53C0));
        func_001A1E70(func_00279290(p + 0x11C0), 7);
        func_001A1E70(func_00279290(p + 0x11C0), 9);
        func_001A2000(func_00279290(p + 0x11C0), 8);
        func_001A2000(func_00279290(p + 0x11C0), 10);
    } else {
        func_001A1F90(func_00279290(p + 0x53C0));
        func_001A2000(func_00279290(p + 0x11C0), 7);
        func_001A2000(func_00279290(p + 0x11C0), 9);
        func_001A1E70(func_00279290(p + 0x11C0), 8);
        func_001A1E70(func_00279290(p + 0x11C0), 10);
    }
}

void func_00505450(char *p) {
    func_00382A50(p + 0x224);
    func_00206730(p + 0x228);
    if (*(char **)(p + 0x224) == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(*(char **)(p + 0x224) + 0x77C8) != 0) {
        func_001AD140(p);
        return;
    }
    func_001AD100(p);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00505550(p);
        break;
    case 1:
        func_00505570(p);
        break;
    case 2:
        func_005055F0(p);
        break;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x1E0) : "memory");
    func_0028C5C0(p + 0x230, 0, 1.0f);
    func_00195E20(D_005BE098, p);
}

void func_00505F80(char *p) {
    func_00382A50(p + 0x218);
    func_00206730(p + 0x21C);
    if (*(char **)(p + 0x218) == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(*(char **)(p + 0x218) + 0x77C8) != 0) {
        func_001AD140(p);
        return;
    }
    func_001AD100(p);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00506080(p);
        break;
    case 1:
        func_00506210(p);
        break;
    case 2:
        func_00506480(p);
        break;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x1E0) : "memory");
    func_0028C5C0(p + 0x220, 0, 1.0f);
    func_00195E20(D_005BE098, p);
}

void func_00507450(char *p) {
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

void func_0029C760(char *p) {
    int k;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA993) = 1;
    func_002A0090(p);
    *(unsigned char *)(p + 0xAA91) = 1;
    k = func_002A4A40(p);
    *(float *)(p + 0x8924) = ((float *)D_00561DA0[k])[*(int *)(p + 0x8928)];
    if (*(unsigned char *)(p + 0x8922) == 1) {
        if (*(int *)(p + 0x8928) == 0) {
            func_00322030(p, 0);
        } else {
            func_00322030(p, 1);
        }
    }
    *(unsigned char *)(p + 5) = 0x1E;
    *(int *)(p + 0xAA9C) = 0;
    *(unsigned char *)(p + 0xA563) = 3;
}

int func_0024CD10(char *p, int a, unsigned short k) {
    switch (k) {
    case 0:
        return 1;
    case 1:
        if (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 8)]) {
            return 1;
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x2848) == 0x18) {
            break;
        }
        return 1;
    case 3:
        if (((signed char *)(p + 0x3D4C))[*(unsigned char *)(p + 0x3D4B)] != 7) {
            return 0;
        }
        if (*(unsigned char *)(p + 0x3C6C) != 1 && a == 10) {
            return 0;
        }
        return 1;
    }
    return 0;
}

void func_0029B250(char *p) {
    if (*(unsigned char *)(p + 0x8921) == 0) {
        func_0029C3B0(p);
        return;
    }
    switch (func_002A4030(p)) {
    case 1:
        *(unsigned char *)(p + 5) = 0x19;
        func_0029DD80(p, 0x23, 10);
        return;
    case 2:
        func_0029DCE0(p, 0x1E);
        break;
    case 0:
        func_0029DCE0(p, 0x1F);
        break;
    }
    *(unsigned char *)(p + 0xA993) = 1;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA988) = 0;
    *(unsigned char *)(p + 0xAA91) = 1;
    func_002A0100(p);
    *(unsigned char *)(p + 5) = 0x18;
}

void func_002E1900(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        if (*(unsigned char *)(p + 0x2AE3) == 1) {
            func_002490F0(p, 1, 9, -1, 0, 0, -1.0f);
            *(short *)(p + 0x2856) = 10;
        } else {
            func_002490F0(p, 1, 7, -1, 0, 0, -1.0f);
            *(short *)(p + 0x2856) = 6;
        }
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, *(unsigned char *)(p + 0x2856));
        } else {
            func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
        }
        break;
    }
}

void func_00494E70(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x468) = 3.0f;
        func_00207480(3, 0x1E8, p + 0x150, 16);
        func_00330BD0(D_01DFABA0, 0x32, p + 0x50, 0x22, 0);
        func_0028C740(p + 0x190);
        *(unsigned char *)(p + 0x3B0) = 1;
        *(float *)(p + 0x3E0) = 200.0f;
        func_0028C3A0(p + 0x190, 0, -1, p + 0x150);
        break;
    case 1:
        *(float *)(p + 0x468) = *(float *)(p + 0x468) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x468) < 0.0f) {
            *(unsigned char *)(p + 4) = 3;
        }
        break;
    }
    func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
    func_00206730(p + 0x460);
    func_00206730(p + 0x464);
}

int func_004B2DA0(char *p, int k) {
    signed char r;
    signed char m;
    if (*(signed char *)(p + 0x3DF1) == 0) {
        k += 5;
    }
    r = func_00406CF0(*(int *)(p + 0x3DE0), (signed char)k);
    if (r == -1) {
        return 0;
    }
    m = *(signed char *)(p + 0x3DF1);
    if (m == 0 && r == *(signed char *)(*(char **)(p + 0x3DE0) + 0x4E)) {
        return 1;
    }
    if (m == 0 && r == *(signed char *)(*(char **)(p + 0x3DE0) + 0x4F)) {
        return 1;
    }
    if (m == 1 && r == *(signed char *)(*(char **)(p + 0x3DE0) + 0x4C)) {
        return 1;
    }
    if (m == 1 && r == *(signed char *)(*(char **)(p + 0x3DE0) + 0x4D)) {
        return 1;
    }
    return 0;
}

int func_004D2BB0(char *p) {
    if (*(unsigned char *)(p + 0xB154) == 0x39) {
        return 0;
    }
    if (*(unsigned char *)(p + 0xB2C8) == 1 && *(unsigned char *)(p + 0xB2D4) == 0 && func_004D2B70(p) < 75.0f) {
        return 1;
    }
    if (*(unsigned char *)(p + 0xB2C8) == 2 && *(unsigned char *)(p + 0xB2D3) == 0 && *(float *)(p + 0xB2A8) <= 0.0f &&
        *(unsigned char *)(p + 0xB2D8) == 1) {
        return 1;
    }
    return 0;
}

char *func_004E3860(char *p) {
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005BA060;
    func_00100450(p + 0x3C, (void *)func_001AAD30, (void *)func_0013D240, 16, 20);
    func_00100450(p + 0x1C0, (void *)func_002790E0, (void *)func_002791E0, 0x600, 7);
    func_002790E0(p + 0x2BC0);
    func_002790E0(p + 0x31C0);
    *(unsigned char *)(p + 0x3810) = 0;
    *(int *)(p + 0x180) = 0;
    *(unsigned char *)(p + 0x3891) = 0;
    *(unsigned char *)(p + 0x3892) = 0xFF;
    *(unsigned char *)(p + 0x3890) = 0xFF;
    *(unsigned char *)(p + 0x3894) = 0;
    *(unsigned char *)(p + 0x3895) = 0;
    *(unsigned char *)(p + 0x3896) = 1;
    *(unsigned char *)(p + 0x3897) = 0;
    return p;
}

void func_0050E680(char *p) {
    func_0028C790(p + 0x190, 0);
    func_0028C790(p + 0x190, 1);
    func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 1, D_005BC2E0 + 0x9C0, p, 0);
    func_0028C8E0(p + 0x190, 0);
    func_0028C910(p + 0x190);
    *(int *)(p + 0x268) = 0x30504;
    *(unsigned char *)(p + 0x3B0) = 4;
    *(unsigned char *)(p + 0x3B1) = 0;
    *(short *)(p + 0x3B2) = 0;
    *(unsigned char *)(p + 0x3B4) = 1;
    *(unsigned char *)(p + 0x3B5) = 0;
    *(short *)(p + 0x3B6) = 0;
    *(unsigned char *)(p + 0x3C0) = 2;
    *(int *)(p + 0x3D0) = 0;
    *(int *)(p + 0x3D4) = 0;
    *(int *)(p + 0x3D8) = 0;
    *(float *)(p + 0x3DC) = 1.0f;
    *(float *)(p + 0x3E0) = 175.0f;
    *(unsigned char *)(p + 0x410) = 2;
    *(int *)(p + 0x420) = 0;
    *(int *)(p + 0x424) = 0;
    *(int *)(p + 0x428) = 0;
    *(float *)(p + 0x42C) = 1.0f;
    *(float *)(p + 0x430) = 20.0f;
    func_0028C3A0(p + 0x190, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x190, 1, -1, p + 0x150);
}

void func_003E6150(char *p) {
    if (*(unsigned char *)(p + 0x14D) != 3) {
        func_003206E0(p + 0x130);
        if (*(unsigned char *)(p + 0x3A4E) == 0) {
            switch (*(unsigned char *)(p + 0x342C)) {
            case 0x4C:
                func_0034BA60(0x23, p + 0x710, 0x1C, 0, 1);
                break;
            case 0x17:
            case 0x53:
                func_0034BA60(0x24, p + 0x710, 0x1C, 0, 1);
                break;
            case 0x56:
                func_0034BA60(0x24, p + 0x710, 0x1C, 0, 1);
                break;
            case 0x4F:
                func_0034BA60(0x23, p + 0x710, 0x1C, 0, 1);
                break;
            }
            *(unsigned char *)(p + 0x3B93) = 1;
        }
    }
}

void func_004D9DD0(char *p) {
    if (*(signed char *)(p + 0x57B) != -1) {
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            *(float *)(p + 0x560) = 30.0f;
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            break;
        case 1:
            *(float *)(p + 0x560) = *(float *)(p + 0x560) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x560) < 0.0f) {
                func_004D9B90(p, 1);
                func_004D9950(p);
                *(float *)(p + 0x560) = 60.0f;
                *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            }
            break;
        case 2:
            *(float *)(p + 0x560) = *(float *)(p + 0x560) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x560) < 0.0f) {
                func_004D9AC0(p, 1);
                *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
                *(unsigned char *)(p + 5) = 0;
            }
            break;
        }
    } else {
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        *(unsigned char *)(p + 5) = 0;
    }
}

void func_0020F250(char *p) {
    int k = D_01CAFF30[0];
    if (k == 20 && *(unsigned char *)(p + 0xF0) == 0 && *(short *)(p + 0xF2) == 0x19B) {
        func_00323140(*(int *)(p + 0x6A4), 0x38, 0x38, 7, 1);
    } else if (k == 2 && *(unsigned char *)(p + 0xF0) == 0 && *(short *)(p + 0xF2) == 1) {
        func_00323140(*(int *)(p + 0x6A4), 3, 0x2C, 7, 1);
    } else if (k == 5 && *(unsigned char *)(p + 0xF0) == 0 && *(short *)(p + 0xF2) == 0x6F &&
               (unsigned char)func_0020F210(p) == 1) {
        func_00323140(*(int *)(p + 0x6A4), 3, 0x21, 7, 1);
    }
}

void func_0041E9F0(char *p) {
    char *b;
    *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x2000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        *(float *)(p + 0x54) = func_0041E060(b);
        *(int *)(p + 0x80) = 0;
        *(int *)(p + 0x88) = 0;
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D840(b, p + 0x390, 1.0f);
        func_00207480(3, 0x198, p + 0x3D0, 16);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041DAB0(p + 0x50, p + 0x90, func_0038F490(p));
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041E120(b, 0.0f);
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            func_0038F830(p);
        }
    }
}

void func_0023CC80(char *p) {
    if (*(unsigned char *)(p + 0x2848) == 0x1D) {
        *(C4 *)(p + 0x2928) = *(C4 *)(p + 0x2960);
        *(F4u *)(p + 0x292C) = *(F4u *)(p + 0x2964);
        *(F4u *)(p + 0x293C) = *(F4u *)(p + 0x2974);
        *(float *)(p + 0x294C) = *(float *)(p + 0x2984);
        *(F3u *)(p + 0x2950) = *(F3u *)(p + 0x2988);
        *(float *)(p + 0x295C) = *(float *)(p + 0x2994);
    }
    if (func_0023E960(p) == 0 && func_00245C40(p) == 0 && func_0023EDD0(p) == 0 && func_0023EF80(p) == 0 &&
        func_0023EC60(p) == 0) {
        func_0023F290(p);
    }
}

void func_00471A30(char *p) {
    *(float *)(p + 0x470) = *(float *)(p + 0x470) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x470) < 0.0f) {
        func_00471F60(p, 1);
        *(unsigned char *)(p + 0x148) = 1;
        func_002530C0(p, D_0057BA90);
        *(unsigned char *)(p + 0x4B0) = 1;
        *(unsigned char *)(p + 5) = 2;
        func_00330B50(D_01DFABA0, 0, p + 0x50, 7);
        if ((unsigned char)func_00471E60(p) == 0) {
            func_001AD140(p);
            return;
        }
    }
    if (*(unsigned char *)(p + 0x4B0) == 1) {
        func_00253110(p, p + 0x490, 3, *(float *)(p + 0x10));
        switch (func_002536B0(p, p + 0x490)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x4B0) = 0;
            break;
        case -1:
            *(unsigned char *)(p + 0x4B0) = 0;
            break;
        }
    }
}

char *func_0047D800(char *p) {
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005B6990;
    func_00100450(p + 0x80, (void *)func_002790E0, (void *)func_002791E0, 0x600, 7);
    func_002790E0(p + 0x2A80);
    *(unsigned char *)(p + 0x3080) = 0;
    *(int *)(p + 0x3C) = 0;
    *(int *)(p + 0x40) = 0;
    *(signed char *)(p + 0x3104) = 2;
    *(signed char *)(p + 0x310D) = D_0056AF22[0];
    *(signed char *)(p + 0x310E) = D_0056AF23[0] + 1 - *(signed char *)(p + 0x310D);
    *(unsigned char *)(p + 0x3105) = 0;
    *(signed char *)(p + 0x3118) = -1;
    *(signed char *)(p + 0x3117) = -1;
    *(unsigned char *)(p + 0x3116) = 0;
    *(unsigned char *)(p + 0x3119) = 0;
    *(unsigned char *)(p + 0x311A) = 0;
    *(unsigned char *)(p + 0x311B) = 0;
    *(unsigned char *)(p + 0x311C) = 0;
    *(unsigned char *)(p + 0x3114) = 0;
    return p;
}

void func_0023A960(char *p) {
    int c;
    if (*(unsigned char *)(p + 0x194D0) == 1) {
        if (*(short *)(p + 0x194D2) > 0) {
            c = *(unsigned char *)(p + 0x194D1);
            func_0030FD40(D_01DFA340, D_01CAFF38[0] + 30000, *(short *)(p + 0x194D4), 200, (c << 16) + (c + (c << 8)), 16, 0xFFFFF2, 1);
            if (*(unsigned char *)(p + 0x194D1) > 0) {
                *(unsigned char *)(p + 0x194D1) = *(unsigned char *)(p + 0x194D1) - 1;
            }
            if (*(short *)(p + 0x194D2) < 0xF0) {
                *(short *)(p + 0x194D4) = *(short *)(p + 0x194D4) - 3;
            }
            *(short *)(p + 0x194D2) = *(short *)(p + 0x194D2) - 1;
        } else {
            *(unsigned char *)(p + 0x194D0) = 0;
        }
    }
}

void func_003D13B0(char *p) {
    char *b;
    if ((unsigned char)func_0041D600(p) != 0) {
        if (*(unsigned char *)(*(char **)(p + 0xD0) + 0x976) == 0) {
            func_001A5C30(func_00279290(p + 0x240));
        } else {
            func_001A5D00(func_00279290(p + 0x240));
        }
        func_001AD100(p);
        func_00206730(p + 0xB80);
        *(unsigned char *)(p + 0xB91) = 0;
        switch (*(int *)(p + 0xB84)) {
        case 0:
        case 1:
        case 2:
            func_003D16B0(p);
        }
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D840(b, p + 0x1B0, 1.0f);
        if (*(unsigned char *)(p + 0xB91) & 1) {
            func_0028C5C0(p + 0x8F0, 0, 1.0f);
        }
        if (*(unsigned char *)(p + 0xB91) & 2) {
            func_00195E20(D_005BE098, p);
        }
    }
}

void func_0023D960(char *p) {
    func_00244E60(p, 0x80000005);
    if (!(*(signed char *)(p + 0x46) == 0 && *(unsigned char *)(p + 0x2998) == 0x63 &&
          (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 8)]))) {
        if (func_0023E1F0(p) != 0) {
            return;
        }
        if (func_0023E330(p) != 0) {
            return;
        }
    }
    if (func_0023E460(p) == 0 && func_0023E500(p) == 0 && func_0023E960(p) == 0 && func_00245C40(p) == 0 &&
        func_0023EDD0(p) == 0 && func_0023EF80(p) == 0 && func_0023F290(p) == 0) {
        func_0023F330(p);
    }
}

static inline unsigned char is_set(unsigned char v) {
    return v != 0;
}

static inline unsigned char has_flag(char *p) {
    return (*(unsigned short *)(p + 0x2DD8) & 0x100) != 0;
}

void func_002DFC90(char *p, char *t, char *q) {
    if (*(unsigned char *)(p + 0x28AD) == 1) {
        return;
    }
    *(unsigned char *)(p + 0x28AC) = 1;
    *(unsigned char *)(p + 0x28A9) = 0;
    *(unsigned char *)(p + 0x28B3) = 0;
    *(int *)(p + 0x28CC) = 0;
    if (t != 0) {
        if (10.0f + *(float *)(p + 0x2924) < *(float *)(p + 0x54) || (*(int *)(p + 0x2898) & 2)) {
            func_002E00E0(p, q, t, 3);
            return;
        }
        func_002E1B90(p);
        *(unsigned char *)(p + 0x2854) = 0;
        func_0021C7A0(p, 0x2A);
    } else {
        if (100.0f + *(float *)(p + 0x2924) < *(float *)(p + 0x54) || (*(int *)(p + 0x2898) & 2)) {
            func_002E00E0(p, 0, D_00553750, 3);
            return;
        }
        *(unsigned char *)(p + 0x2854) = 0;
        func_0021C7A0(p, 0x2A);
    }
}

void func_0039D600(char *p) {
    if (is_set(*(unsigned char *)(p + 0x2EE4)) == 1) {
        if (has_flag(p) == 1) {
            if (*(int *)(p + 0x2F04) != 0 && (unsigned char)func_0039D080(p, 0) == 1) {
                func_003023F0(*(int *)(p + 0x2F04));
            }
            if (*(int *)(p + 0x2F0C) != 0 && (unsigned char)func_0039D080(p, 1) == 1) {
                func_003023F0(*(int *)(p + 0x2F0C));
            }
        }
    } else {
        if (has_flag(p) == 1) {
            if (*(int *)(p + 0x2F00) != 0 && (unsigned char)func_0039D080(p, 0) == 1) {
                func_003023F0(*(int *)(p + 0x2F00));
            }
            if (*(int *)(p + 0x2F08) != 0 && (unsigned char)func_0039D080(p, 1) == 1) {
                func_003023F0(*(int *)(p + 0x2F08));
            }
        }
    }
}

void func_004AD5B0(char *p) {
    func_00376E40(p);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041DBA0(p, p + 0xC00);
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            if (*(unsigned char *)(p + 0x8EB) == 0) {
                if (*(unsigned char *)(p + 0x975) % 3 == 0) {
                    func_00376B40(p, 4);
                } else {
                    func_00376B40(p, 0x12);
                }
            } else {
                if ((int)*(unsigned char *)(p + 0x975) % 4 == 0) {
                    func_00376B40(p, 4);
                } else {
                    func_00376B40(p, 0x12);
                }
            }
        }
    }
}

char *func_004B35B0(char *p) {
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005B8340;
    func_00100450(p + 0x3C, (void *)func_001AAD30, (void *)func_0013D240, 16, 0x19);
    func_00100450(p + 0x200, (void *)func_002790E0, (void *)func_002791E0, 0x600, 7);
    func_002790E0(p + 0x2C00);
    *(unsigned char *)(p + 0x3270) = 0;
    *(unsigned char *)(p + 0x32F0) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(int *)(p + 0x1D0) = 0;
    *(int *)(p + 0x1D4) = 0;
    *(unsigned char *)(p + 0x3374) = 2;
    *(unsigned char *)(p + 0x3375) = 0;
    *(unsigned char *)(p + 0x3378) = 0;
    *(signed char *)(p + 0x3379) = -1;
    *(unsigned char *)(p + 0x337A) = 0x80;
    *(unsigned char *)(p + 0x337B) = 0;
    *(unsigned char *)(p + 0x3376) = 0;
    *(unsigned char *)(p + 0x3377) = 0;
    return p;
}

char *func_0047C870(char *p) {
    int i;
    char *e;
    func_0024F750(p);
    *(char **)(p + 0xD0) = D_005AADD0;
    *(int *)(p + 0xD8) = -1;
    *(char **)p = D_005B6810;
    *(char **)(p + 0x40) = D_005B6834;
    *(char **)(p + 0xA0) = D_005B68B4;
    *(char **)(p + 0xD0) = D_005B6948;
    func_0027A570(p + 0xA40);
    *(unsigned char *)(p + 0xDC) = 1;
    *(unsigned char *)(p + 0xDD) = 0;
    *(short *)(p + 0xDE) = -1;
    for (i = 0; i < 15; i++) {
        e = p + i * 160 + 0xE0;
        *(unsigned char *)e = 0;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e + 0x10) : "memory");
        *(float *)(e + 0x50) = 0.0f;
        *(float *)(e + 0x54) = 0.0f;
        *(float *)(e + 0x58) = 0.0f;
        *(float *)(e + 0x5C) = 1.0f;
        *(float *)(e + 0x60) = 0.0f;
        *(float *)(e + 0x64) = 0.0f;
        *(float *)(e + 0x68) = 0.0f;
        *(float *)(e + 0x6C) = 1.0f;
        *(float *)(e + 0x70) = 0.0f;
        *(float *)(e + 0x74) = 0.0f;
        *(float *)(e + 0x78) = 0.0f;
        *(float *)(e + 0x7C) = 1.0f;
        *(float *)(e + 0x80) = 0.0f;
        *(float *)(e + 0x84) = 0.0f;
        *(float *)(e + 0x88) = 0.0f;
        *(float *)(e + 0x8C) = 1.0f;
        *(float *)(e + 0x90) = 0.0f;
    }
    return p;
}

void func_004AB460(char *p) {
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(signed char *)(p + 0x46) = *(signed char *)(p + 0x150);
    *(int *)(p + 0x80) = 0;
    *(int *)(p + 0x84) = 0;
    *(int *)(p + 0x88) = 0;
    *(float *)(p + 0x8C) = 1.0f;
    *(int *)(p + 0x60) = 0;
    *(int *)(p + 0x64) = 0;
    *(int *)(p + 0x68) = 0;
    *(float *)(p + 0x6C) = 1.0f;
    *(int *)(p + 0x70) = 0;
    *(int *)(p + 0x74) = 0;
    *(int *)(p + 0x78) = 0;
    *(float *)(p + 0x7C) = 1.0f;
    *(short *)(p + 0x90) = 0;
    *(int *)(p + 0x4C0) = 0;
    *(int *)(p + 0x4D0) = 0;
    *(int *)(p + 0x4D8) = 0;
    *(int *)(p + 0x4D4) = 0;
    *(int *)(p + 0x4DC) = 0;
    *(short *)(p + 0x4E0) = 0;
    *(unsigned char *)(p + 0x4E2) = 0;
    *(unsigned char *)(p + 0x4E3) = 0;
    switch (*(int *)(p + 0x4C4)) {
    case 0:
    case 1:
    case 2:
    case 3:
        func_004AB580(p);
        break;
    case 0x80:
        func_004AB610(p);
        break;
    case 0x81:
        func_004AB6C0(p);
        break;
    case 0x82:
        func_004AB770(p);
        break;
    }
    *(int *)(p + 0x4CC) = 0;
}

void func_004FE000(char *p) {
    *(unsigned char *)(p + 0x2B8) = func_0023AA80(*(int *)D_01CAFF0C);
    switch (*(unsigned char *)(p + 0x2B8)) {
    case 0:
        func_004FE770(p);
        break;
    case 1:
        func_004FE780(p);
        break;
    case 2:
        func_004FE790(p);
        break;
    case 3:
        func_004FE7A0(p);
        break;
    case 6:
        func_004FE7B0(p);
        break;
    case 0x64:
        func_004FE7C0(p);
        break;
    case 0x65:
        func_004FE7D0(p);
        break;
    default:
        *(unsigned char *)(p + 0x2B8) = 0xFF;
        func_004FE120(p);
        break;
    }
    func_00317740(p, 0);
    *(unsigned char *)(p + 0x2B9) = *(unsigned char *)(p + 0x2B8);
}

void func_001EE2F0(char *p) {
    func_001AD100(p);
    func_00207850(p);
    if (func_00207060(p) != 0) {
        func_001AD140(p);
        return;
    }
    if (D_005BE0E4 != 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(p + 0x39) != 0) {
        return;
    }
    if (*(unsigned char *)(*(char **)(p + 0xA0) + 0x84) == 0) {
        *(float *)(p + 0x6E8) = *(float *)(p + 0x6E8) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x6E8) < 0.0f) {
            if (*(unsigned char *)(p + 0x98) == 1) {
                *(unsigned char *)(p + 4) = 2;
                return;
            }
            func_001AD140(p);
            return;
        }
    }
    func_001EF6B0(p);
    if (!(*(float *)(p + 0x40) <= 0.0f)) {
        *(float *)(p + 0x40) = *(float *)(p + 0x40) - *(float *)(p + 0x10);
        return;
    }
    if (*(unsigned char *)(p + 0x3B) == 0) {
        func_00195E20(D_005BE098, p);
    }
}

void func_0023D630(char *p) {
    if ((*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x40)]) ||
        (*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x20)]) ||
        (unsigned char)partner_ready(p) == 0) {
        func_0023D5B0(p);
        return;
    }
    if ((unsigned char)func_002DAD40(p) == 2) {
        func_0021B790(p, 10);
        return;
    }
    if (*(unsigned char *)(p + 0x28A6) != 0) {
        func_0021C7A0(p, 0x24);
        return;
    }
}

void func_0023D750(char *p) {
    if ((*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x40)]) ||
        (*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x20)]) ||
        (unsigned char)partner_ready(p) == 0) {
        func_0023D5B0(p);
        return;
    }
    if ((unsigned char)func_002DAD40(p) == 2) {
        func_0021B790(p, 10);
        return;
    }
    if (*(unsigned char *)(p + 0x28A6) == 0) {
        func_0021C7A0(p, 0x23);
        return;
    }
}

void func_003310C0(char *p) {
    func_002F9860(p, 1, 0, (func_00124EC0(-0x3F80) << 16) / 125);
    func_002F9860(p, 2, 0, (func_00124EC0(-0x3F80) << 16) / 125);
    func_002F9860(p, 7, 0, (func_00124EC0(-0x3F80) << 16) / 125);
    func_002F9860(p, 8, 0, (func_00124EC0(-0x3F80) << 16) / 125);
}

void func_003311E0(char *p) {
    func_002F9860(p, 1, 0x7F, (func_00124EC0(-0x3F80) << 16) / 125);
    func_002F9860(p, 2, 0x7F, (func_00124EC0(-0x3F80) << 16) / 125);
    func_002F9860(p, 7, 0x7F, (func_00124EC0(-0x3F80) << 16) / 125);
    func_002F9860(p, 8, 0x7F, (func_00124EC0(-0x3F80) << 16) / 125);
}

void func_0033D6F0(char *p) {
    char *q;
    func_0028C790(p + 0x150, 0);
    func_0028C790(p + 0x150, 1);
    func_0028C790(p + 0x150, 2);
    func_0028C790(p + 0x150, 3);
    func_0028C790(p + 0x150, 4);
    func_0028C790(p + 0x150, 5);
    func_0028C200(p + 0x150, p + 0x370, p + 0x390, 1, D_005BC2E0 + 0x5C0, p, 0);
    func_0028C8E0(p + 0x150, 0);
    *(unsigned char *)(p + 0x370) = 1;
    *(unsigned char *)(p + 0x371) = 0;
    *(short *)(p + 0x372) = 0;
    *(unsigned char *)(p + 0x390) = 2;
    *(float *)(p + 0x3A0) = D_0055C7F0[0];
    *(float *)(p + 0x3A4) = D_0055C7F4[0];
    *(float *)(p + 0x3A8) = D_0055C7F8[0];
    *(float *)(p + 0x3B0) = D_0055C7FC[0];
    func_0028C3A0(p + 0x150, 0, -1, p + 0xB80);
    q = *(char **)(p + 0x1CC);
    if (q != 0) {
        *(int *)(q + 0xC) = *(int *)(q + 0xC) & ~0x4000;
    }
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_003B1F10(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x21;
        func_0024DA80(p + 0x1D00, 0, 0x21);
        func_0024DA80(p + 0x1DD0, 0, 0x21);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x21C4) = 1;
        *(unsigned char *)(p + 0x21C7) = 0;
        *(unsigned char *)(p + 0x21CC) = 0;
        *(unsigned char *)(p + 0x21C9) = 4;
        func_003B61B0(p);
        func_003B6450(p);
    case 1:
        if (both_done(p) == 1) {
            *(unsigned char *)(p + 0x21C7) = 1;
            if ((unsigned char)func_003B3F70(p) == 1) {
                func_003B4840(p);
            }
        }
    }
    func_003B4F60(p);
}

void func_003B2030(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x22;
        func_0024DA80(p + 0x1D00, 0, 0x22);
        func_0024DA80(p + 0x1DD0, 0, 0x22);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x21C4) = 1;
        *(unsigned char *)(p + 0x21C7) = 0;
        *(unsigned char *)(p + 0x21CC) = 0;
        *(unsigned char *)(p + 0x21C9) = 4;
        func_003B61B0(p);
        func_003B6450(p);
    case 1:
        if (both_done(p) == 1) {
            *(unsigned char *)(p + 0x21C7) = 1;
            if ((unsigned char)func_003B3F70(p) == 1) {
                func_003B4840(p);
            }
        }
    }
    func_003B4F60(p);
}

void func_00422AA0(char *p) {
    char *g;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        func_0034BA60(0x28, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        func_0048B400(p);
        func_0048B320(p);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        g = *(char **)(*(char **)D_01CAFF0C + 0xC);
        if (150.0f + *(float *)(g + 0x54) < *(float *)(p + 0x54)) {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) - 2.0f;
        } else {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + 2.0f;
        }
        func_0041DBA0(p, p + 0xA40);
        func_0041DAB0(p + 0x50, p + 0x90, func_0048B150(p));
        if ((unsigned char)func_0024E800(p + 0x1060) == 1) {
            func_0048AF80(p, 0xB);
            *(int *)(p + 0x454) = 0;
        }
    }
}

void func_00428040(char *p) {
    if (*(float *)(p + 0x478) <= 0.0f) {
        *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x40000000;
    }
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x3B8) = 40.0f - 6.0f * (float)(unsigned int)*(unsigned char *)(p + 0x3AB);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0041D6B0((float *)(p + 0x3B8), *(float *)(p + 0x10)) == 1) {
            func_003FA440(p, -1);
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        if ((unsigned char)func_0024E800(p + 0xB60) == 1) {
            func_003FA3F0(p, 0);
        }
        break;
    }
}

void func_004F6150(char *p) {
    char *b;
    if ((unsigned char)func_0041D600(p) != 0) {
        func_001AD100(p);
        func_00206730(p + 0xB50);
        switch (*(int *)(p + 0xB54)) {
        case 0:
            *(float *)(p + 0xB60) = 60.0f;
            *(int *)(p + 0xB54) = 1;
        case 1:
            func_0041D820(p + 0x68, *(float *)(p + 0x78) * *(float *)(p + 0x10), 10.0f);
            b = p;
            if (b != 0) {
                b += 0x40;
            }
            func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
            *(float *)(p + 0x5C) = 1.0f;
        case 2:
            if ((unsigned char)func_0041D6B0((float *)(p + 0xB60), *(float *)(p + 0x10)) == 1) {
                func_001AD140(p);
                return;
            }
        }
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D840(b, p + 0x1B0, 0.7f);
        func_0028C5C0(p + 0x8D0, 0, 1.0f);
    }
}

void func_004FF000(char *p) {
    char *b;
    if ((unsigned char)func_0041D600(p) != 0) {
        func_001AD100(p);
        func_00206730(p + 0x460);
        if (*(int *)(p + 0x460) == 0) {
            func_001AD140(p);
            return;
        }
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            if (*(int *)(p + 0x470) == 0) {
                *(float *)(p + 0x464) = 150.0f;
            } else {
                *(float *)(p + 0x464) = 100.0f;
            }
            *(float *)(p + 0x46C) = 150.0f / *(float *)(p + 0x464);
            *(unsigned char *)(p + 5) = 1;
        case 1:
            *(float *)(p + 0x434) = *(float *)(p + 0x434) + *(float *)(p + 0x46C);
            if ((unsigned char)func_0041D6B0((float *)(p + 0x464), *(float *)(p + 0x10)) == 1) {
                func_001AD140(p);
                return;
            }
        }
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D840(b, p + 0x160, 1.0f);
    }
}

void func_002287F0(char *tbl, char *e, unsigned char slot, unsigned char mask) {
    int m;
    char **pp;
    char **pq;
    char **pr;
    if (*(unsigned char *)e == 1) {
        m = **(unsigned char **)(e + 0x100) & mask;
        if (m & 1) {
            pp = (char **)(tbl + slot * 12);
            if (*pp == 0) {
                *(int *)(e + 0x2FC) = 0;
            } else {
                *(char **)(e + 0x2FC) = *pp;
            }
            *pp = e;
            *(unsigned char *)(e + 3) = 1;
        }
        if (m & 2) {
            pq = (char **)(tbl + (slot * 3 + 1) * 4);
            if (*pq == 0) {
                *(int *)(e + 0x300) = 0;
            } else {
                *(char **)(e + 0x300) = *pq;
            }
            *pq = e;
            *(unsigned char *)(e + 3) = 0;
        }
        if (m & 4) {
            pr = (char **)(tbl + (slot * 3 + 2) * 4);
            if (*pr == 0) {
                *(int *)(e + 0x304) = 0;
            } else {
                *(char **)(e + 0x304) = *pr;
            }
            *pr = e;
            *(unsigned char *)(e + 3) = 0;
        }
        func_0022A890(e);
        *(unsigned char *)e = 2;
    }
}

void func_0033BFC0(char *p) {
    func_001AD100(p);
    func_00206730(p + 0xBCC);
    func_00228300(p + 0xBC4);
    if (*(char **)(p + 0xBCC) != 0 && (unsigned char)func_002077F0(*(char **)(p + 0xBCC)) == 1) {
        *(int *)(p + 0xBCC) = 0;
    }
    if ((unsigned char)func_002DA0B0(*(int *)(p + 0xBC0), 0) == 0) {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0xB50) = *(float *)(p + 0xB50) - *(float *)(p + 0x10);
    if (*(float *)(p + 0xB50) < 0.0f) {
        func_001AD140(p);
        return;
    }
    switch (*(unsigned char *)(p + 0xB42)) {
    case 0:
        func_0033C100(p);
        break;
    case 1:
        func_0033C500(p);
        break;
    case 2:
        func_0033C810(p);
        break;
    case 3:
        func_0033C8A0(p);
        break;
    }
    func_00195E20(D_005BE098, p);
}

void func_0033D5B0(char *p) {
    char *q;
    func_0028C790(p + 0x150, 0);
    func_0028C790(p + 0x150, 1);
    func_0028C790(p + 0x150, 2);
    func_0028C790(p + 0x150, 3);
    func_0028C790(p + 0x150, 4);
    func_0028C790(p + 0x150, 5);
    func_0028C200(p + 0x150, p + 0x370, p + 0x390, 1, D_005BC2E0 + 0x600, p, 0);
    func_0028C8E0(p + 0x150, 0);
    func_0028C910(p + 0x150);
    *(unsigned char *)(p + 0x370) = 1;
    *(unsigned char *)(p + 0x371) = 0;
    *(short *)(p + 0x372) = 0;
    *(unsigned char *)(p + 0x390) = 2;
    *(float *)(p + 0x3A0) = D_0055C7F0[0];
    *(float *)(p + 0x3A4) = D_0055C7F4[0];
    *(float *)(p + 0x3A8) = D_0055C7F8[0];
    *(float *)(p + 0x3AC) = 1.0f;
    *(float *)(p + 0x3B0) = D_0055C7FC[0];
    func_0028C3A0(p + 0x150, 0, -1, p + 0xB80);
    q = *(char **)(p + 0x1CC);
    if (q != 0) {
        q[2] = 1;
        *(int *)(q + 0xC) = *(int *)(q + 0xC) & ~0x4000;
    }
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_0037E010(char *p) {
    char *m = p + 0x7770;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    *(float *)(p + 0x77A0) = 0.0f;
    *(float *)(p + 0x77A4) = -28.0f;
    *(float *)(p + 0x77A8) = 351.0f;
    *(float *)(p + 0x77AC) = 1.0f;
    func_00104B80(p + 0x77A0, *(char **)(*(char **)(p + 0x774) + 0x104), p + 0x77A0);
    if ((unsigned char)func_00277EF0(p + 0x7680, *(float *)(p + 0x10)) == 1) {
        func_00278060(p + 0x7680, ((char **)D_01CAFF14)[0]);
    } else {
        func_00277DE0(p + 0x7680, D_00568430, p + 0x7770, 1);
        *(float *)(p + 0x76AC) = *(float *)(p + 0x77B0);
        *(float *)(p + 0x76CC) = *(float *)(p + 0x77B0);
        *(float *)(p + 0x76B0) = *(float *)(p + 0x77B4);
        *(float *)(p + 0x76D0) = *(float *)(p + 0x77B4);
        *(short *)(p + 0x76B4) = *(unsigned short *)(p + 0x77B8);
        *(short *)(p + 0x76B6) = *(unsigned short *)(p + 0x77BA);
        *(short *)(p + 0x76B8) = *(unsigned short *)(p + 0x77BC);
        *(short *)(p + 0x76D4) = *(unsigned short *)(p + 0x77B8);
        *(short *)(p + 0x76D6) = *(unsigned short *)(p + 0x77BA);
        *(short *)(p + 0x76D8) = *(unsigned short *)(p + 0x77BC);
        func_00277E70(p + 0x7680);
        func_00277ED0(p + 0x7680);
        func_00278060(p + 0x7680, ((char **)D_01CAFF14)[0]);
    }
}

void func_00422BC0(char *p) {
    char *g;
    char *b;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        func_0048B020(p);
        *(float *)(p + 0x458) = *(float *)(p + 0x458) + *(float *)(p + 0x454);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 25.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        g = *(char **)(*(char **)D_01CAFF0C + 0xC);
        if (150.0f + *(float *)(g + 0x54) < *(float *)(p + 0x54)) {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) - 2.0f;
        } else {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + 2.0f;
        }
        func_0041D800(p + 0x68, *(float *)(p + 0x10), 30.0f);
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0((float *)(p + 0x458), *(float *)(p + 0x10)) == 1) {
            func_0048AF80(p, 0xC);
        }
    }
}

void func_0021BFC0(char *p) {
    func_002DBCE0(p);
    *(unsigned char *)(p + 0x299C) = 0;
    *(unsigned char *)(p + 0x29A1) = 0;
    *(unsigned char *)(p + 0x29A0) = 0;
    *(unsigned char *)(p + 0x299F) = 0;
    *(unsigned char *)(p + 0x2998) = 0;
    *(int *)(p + 0x291C) = 0;
    *(unsigned char *)(p + 0x28A9) = 0;
    if (*(unsigned char *)(p + 0x3C6E) == 1 && !(*(int *)(p + 0x2898) & 0x40000)) {
        func_0021CB60(p, 2);
        func_0021CB50(p, 1);
        func_00430DA0(p, 0, 0);
        return;
    }
    if (*(int *)(p + 0x2898) & 0x20000) {
        func_002490F0(p, 0, 0x22, -1, 0, 0, -1.0f);
    } else if (*(unsigned char *)(p + 0x2904) == 4) {
        func_002490F0(p, 0, 0x1F, -1, 0, 0, -1.0f);
    } else {
        func_002490F0(p, 0, 0x20, -1, 0, 0, -1.0f);
    }
    func_0021C7A0(p, 8);
}

static inline void mot_setup(char *p) {
    func_0024E7B0(p + 0x1500, 0, 0);
    func_0028C8E0(p + 0x1950, 5);
    func_0028C910(p + 0x1950);
    func_0028C290(p + 0x1950, 7, 0x14, p + 0x64C);
    func_0028C290(p + 0x1950, 8, 0x14, p + 0x64C);
    func_0028C290(p + 0x1950, 9, 0x14, p + 0x64C);
    func_0028C290(p + 0x1950, 0xD, 0x14, p + 0x64C);
    func_0028C290(p + 0x1950, 0xE, 0x14, p + 0x64C);
}

void func_003C7830(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0x15D4) = D_0056EC20[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3];
        *(int *)(p + 0x16E0) = 0;
        *(float *)(p + 0x15F0) = 40.0f;
        {
            int f = D_0056EC80[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3];
            if (f != 0) {
                func_003C6880(p, f);
            }
        }
    case 1:
        func_003C2D30(p, 1);
        *(float *)(p + 0x15F0) = *(float *)(p + 0x15F0) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x15F0) < 0.0f) {
            *(float *)(p + 0x15F0) = 40.0f;
            func_003C8130(p, 1);
        }
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 8) {
            mot_setup(p);
        }
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 9) {
            mot_setup(p);
        }
        *(float *)(p + 0x15D4) = *(float *)(p + 0x15D4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x15D4) < 0.0f) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C74C0(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0x15D4) = D_0056EBF0[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3];
        func_003C8350(p);
        *(int *)(p + 0x16E0) = 0;
        *(float *)(p + 0x15F0) = 40.0f;
        {
            int f = D_0056EC80[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3];
            if (f != 0) {
                func_003C6880(p, f);
            }
        }
    case 1:
        func_003C2D30(p, 0);
        *(float *)(p + 0x15F0) = *(float *)(p + 0x15F0) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x15F0) < 0.0f) {
            *(float *)(p + 0x15F0) = 40.0f;
            func_003C8130(p, 1);
            func_003C8350(p);
        }
        if ((unsigned char)func_003C8470(p, 0, 0) == 0) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 8) {
            mot_setup(p);
        }
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 9) {
            mot_setup(p);
        }
        *(float *)(p + 0x15D4) = *(float *)(p + 0x15D4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x15D4) < 0.0f) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_0020EA00(char *p, unsigned char *q) {
    func_0023A3E0(*(char **)(p + 0x69C), *q);
}

char *func_0040FAD0(char *p, int i) {
    return func_00207480(3, 0x1C, ((char **)(p + 0x108))[i] + 0x450, 0x40);
}

char *func_0040FB60(char *p, int i) {
    return func_00207480(3, 0x229, ((char **)(p + 0x108))[i] + 0x450, 0x40);
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_003586F0(char *p, char *t) {
    float m[16];
    UNIT(m);
    func_00105230((char *)m, (char *)m, (float *)t);
    func_00207480(3, 0x9D, (char *)m, 0x20);
}

void func_00279700(char *p, int a) {
    Q16 q = *(Q16 *)D_00546740;
    func_001A9F90(p + 0x40, &q);
    *(char *)(p + 0x5C0) = 1;
    *(char *)(p + 0x5C8) = 1;
    func_001A5D40(p + 0x40, a);
}

void func_00408A60(char *p, int a, int b, float *t) {
    float m[16];
    if (a && b) {
        UNIT(m);
        func_00105230((char *)m, (char *)m, t);
        func_00207480(3, 0x31, (char *)m, 0x20);
    }
}

int func_0036DF10(char *out, int a, int b, int c, int d, int v) {
    if (D_00666716[0] == 1) {
        func_001AE0D0(D_006663C0);
        *(int *)out = v;
        return 1;
    }
    return 0;
}

extern V4 D_0058BB70;

void func_004F50B0(char *p) {
    V4 t;
    t = D_0058BB70;
    func_00133890(p + 0x170, p + 0xF0, &t);
    *(float *)(p + 0x1A0) = *(float *)(p + 0x50);
    *(float *)(p + 0x1A4) = *(float *)(p + 0x54);
    *(float *)(p + 0x1A8) = *(float *)(p + 0x58);
    *(float *)(p + 0x1AC) = 1.0f;
}

extern V4 D_005599D0;
void func_00105760(char *, char *, float);

void func_0030CCD0(char *p) {
    V4 t;
    t = D_005599D0;
    func_00133890(p + 0xB10, p + 0xF0, &t);
    func_001318E0(p + 0xB10, p + 0xB10, (float *)(p + 0xE0));
    *(float *)(p + 0xB40) = *(float *)(p + 0xB00);
    *(float *)(p + 0xB44) = *(float *)(p + 0xB04);
    *(float *)(p + 0xB48) = *(float *)(p + 0xB08);
    *(float *)(p + 0xB4C) = 1.0f;
}

void func_0033D2A0(char *p) {
    float m[16];
    float v[4];
    v[0] = *(float *)(p + 0x50);
    v[1] = *(float *)(p + 0x54);
    v[2] = *(float *)(p + 0x58);
    v[3] = 1.0f;
    UNIT(m);
    func_00105230((char *)m, (char *)m, v);
    func_00207480(3, 0x8B, (char *)m, 8);
}

void func_002FD660(char *p) {
    float m[16];
    float v[4];
    char *o;
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = -6.0f;
    v[3] = 1.0f;
    UNIT(m);
    func_00105230((char *)m, (char *)m, v);
    o = func_00207480(1, 0xE8, (char *)m, 0x20);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x560;
        *(unsigned char *)(o + 0x9A) = 0;
    }
}

void func_003B9620(char *p, int a, int b, float *t) {
    float m[16];
    if (a && b) {
        *(unsigned char *)(p + 0x1BA) = 1;
        *(float *)(p + 0x1D0) = 30.0f;
        if (*(unsigned char *)(p + 0x1B7) != 0) {
            *(unsigned char *)(p + 0x1B1) = 1;
        }
        UNIT(m);
        func_00105230((char *)m, (char *)m, t);
        func_00207480(3, 0x110, (char *)m, 0x20);
    }
}

void func_00456B70(char *p, unsigned char k, float *t) {
    float m[16];
    UNIT(m);
    func_00105230((char *)m, (char *)m, t);
    if (k == 1) {
        func_002075D0(3, 0x1C, (char *)m, 1, 0x40);
    } else {
        func_002075D0(3, 6, (char *)m, 1, 0x40);
    }
}

void func_002999D0(char *p) {
    float m[16];
    char *o;
    func_0029DCE0(p, 0x30);
    *(unsigned char *)(p + 5) = 0xD;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA993) = 0;
    UNIT(m);
    o = func_00207480(3, 0xAD, (char *)m, 0x10);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x9BB0;
        *(unsigned char *)(o + 0x9A) = 0;
    }
}

void func_00299AA0(char *p) {
    float m[16];
    char *o;
    func_0029DCE0(p, 0x35);
    *(unsigned char *)(p + 5) = 0xE;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA993) = 0;
    UNIT(m);
    o = func_00207480(3, 0xAE, (char *)m, 0x10);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x9BB0;
        *(unsigned char *)(o + 0x9A) = 0;
    }
}

void func_00299B70(char *p) {
    float m[16];
    char *o;
    func_0029DCE0(p, 0x31);
    *(unsigned char *)(p + 0xA993) = 1;
    *(unsigned char *)(p + 0xA992) = 0;
    func_002A0100(p);
    *(unsigned char *)(p + 5) = 0x11;
    UNIT(m);
    o = func_00207480(3, 0xAF, (char *)m, 0x10);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x9BB0;
        *(unsigned char *)(o + 0x9A) = 0;
    }
}

#define SETPOS(m, s) __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(s) : "memory")

void func_00481CE0(char *p, signed char k, float *t) {
    float m[16];
    UNIT(m);
    func_00105230((char *)m, (char *)m, t);
    m[15] = 1.0f;
    if (k == 0) {
        func_00207480(3, 0x22C, (char *)m, 0x20);
    } else {
        func_00207480(3, 0x22B, (char *)m, 0x20);
    }
}

int func_004F91E0(char *p) {
    float m[16];
    UNIT(m);
    SETPOS(m, p + 0x50);
    *(char **)(p + 0x138) = func_00207480(3, 0x2E8, (char *)m, 0x10);
    if (*(char **)(p + 0x138) != 0) {
        *(unsigned char *)(*(char **)(p + 0x138) + 0x3A) = 1;
        return 1;
    }
    return 0;
}

void func_0029D120(char *p) {
    float m[16];
    char *o;
    UNIT(m);
    if (*(unsigned int *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x2898) & 2) {
        func_0029DCE0(p, 0x34);
    } else {
        func_0029DCE0(p, 0x37);
        o = func_00207480(3, 0xAF, (char *)m, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = p + 0x9BB0;
            *(unsigned char *)(o + 0x9A) = 0;
        }
    }
    *(unsigned char *)(p + 5) = 0x13;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA993) = 0;
    *(unsigned char *)(p + 0xA991) = 0;
}

static inline void fx_follow(char *o, char *t) {
    *(char **)(o + 0x90) = t;
    *(unsigned char *)(o + 0x9A) = 1;
}

static inline void fx_color(char *o, int r, int g, int b) {
    *(unsigned char *)(o + 0x9C) = r;
    *(unsigned char *)(o + 0x9D) = g;
    *(unsigned char *)(o + 0x9E) = b;
    *(unsigned char *)(o + 0x9B) = 2;
}

void func_003E6680(char *p) {
    float m[16];
    func_00206730(p + 0x3BE4);
    if (*(char **)(p + 0x3BE4) == 0) {
        *(char **)(p + 0x3BE4) = func_00207480(3, 0xE9, (char *)m, 0x10);
        if (*(char **)(p + 0x3BE4) != 0) {
            *(unsigned char *)(*(char **)(p + 0x3BE4) + 0x3A) = 1;
            fx_follow(*(char **)(p + 0x3BE4), p + 0x6E0);
            fx_color(*(char **)(p + 0x3BE4), 0x40, 0x20, 0x80);
        }
    }
    func_003305E0(D_01DFABA0, 0, 0x5C, (int)(p + 0x50), 0, 0, 0);
}

typedef struct { short s[4]; } S8;

extern S8 D_005BCD08;
extern float D_0057894C[];
extern unsigned char D_01CAFF3D[];
void func_001B43C0(char *, int, int);
extern char D_01DF8A00[];

void func_003B6490(char *p, unsigned char k) {
    float m[16];
    S8 t;
    char *o;
    float a;
    t = D_005BCD08;
    a = 6.283185f * ((float)t.s[k] / 65536.0f);
    UNIT(m);
    func_00105760((char *)m, (char *)m, a);
    o = func_00207480(3, 0xC0, (char *)m, 0x10);
    if (o != 0) {
        *(char **)(o + 0x90) = *(char **)(*(char **)(p + 0x668) + 0x104);
        *(unsigned char *)(o + 0x9A) = 0;
        *(unsigned char *)(o + 0x3A) = 1;
        *(unsigned char *)(o + 0x9C) = 0;
        *(unsigned char *)(o + 0x9D) = 0;
        *(unsigned char *)(o + 0x9E) = 0;
        *(unsigned char *)(o + 0x9B) = 2;
    }
}

void func_0048B320(char *p) {
    float m[16];
    char *o;
    UNIT(m);
    m[12] = 5.0f;
    m[13] = 5.0f;
    m[14] = 15.0f;
    o = func_00207480(3, 0x173, (char *)m, 0x10);
    if (o != 0) {
        *(char **)(o + 0x90) = *(char **)(*(char **)(p + 0x570) + 0x104);
        *(unsigned char *)(o + 0x9A) = 0;
        *(unsigned char *)(o + 0x3A) = 1;
    }
    m[12] = -5.0f;
    o = func_00207480(3, 0x173, (char *)m, 0x10);
    if (o != 0) {
        *(char **)(o + 0x90) = *(char **)(*(char **)(p + 0x570) + 0x104);
        *(unsigned char *)(o + 0x9A) = 0;
        *(unsigned char *)(o + 0x3A) = 1;
    }
}

void func_004503B0(char *p, float *a, int b) {
    float m[16];
    float f;
    if (a != 0 && b != 0 && *(unsigned char *)(p + 0x807) != 0 && *(unsigned char *)(p + 0x800) != 3) {
        f = a[1] * (D_0057894C[0] / 100.0f);
        func_0044EA50(p, 0);
        func_00207480(3, 0x31, (char *)m, 0x20);
        *(float *)(p + 0x830) = *(float *)(p + 0x830) - f;
        if (*(float *)(p + 0x830) <= 0.0f || D_01CAFF3D[0] != 0) {
            *(float *)(p + 0x830) = -1.0f;
            *(unsigned char *)(p + 0x80E) = 1;
        }
    }
}

void func_002FD6E0(char *p) {
    float m[16];
    float v[4];
    char *e;
    char *q;
    v[2] = -6.0f;
    v[0] = 0.0f;
    v[3] = 1.0f;
    v[1] = 0.0f;
    UNIT(m);
    func_00105230((char *)m, (char *)m, v);
    e = func_00207480(1, 0xF4, (char *)m, 0x40);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x560;
        *(unsigned char *)(e + 0x9A) = 0;
    }
    if (*(char **)(p + 0x878) != 0) {
        func_001AD140(*(char **)(p + 0x878));
        *(int *)(p + 0x878) = 0;
    }
    if (*(char **)(p + 0x87C) != 0) {
        func_001AD140(*(char **)(p + 0x87C));
        *(int *)(p + 0x87C) = 0;
    }
    *(char **)(p + 0x878) = func_00207480(1, 0x10B, 0, 0x40);
    q = *(char **)(p + 0x878);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x560;
        *(unsigned char *)(q + 0x9A) = 0;
    }
}

void func_002FD7C0(char *p) {
    float m[16];
    float v[4];
    char *e;
    char *q;
    v[2] = -8.0f;
    v[0] = 0.0f;
    v[3] = 1.0f;
    v[1] = 0.0f;
    UNIT(m);
    func_00105230((char *)m, (char *)m, v);
    *(char **)(p + 0x878) = func_00207480(1, 0xE7, (char *)m, 0x40);
    e = *(char **)(p + 0x878);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x560;
        *(unsigned char *)(e + 0x9A) = 0;
    }
    v[2] = 6.0f;
    v[3] = 1.0f;
    v[0] = 0.0f;
    v[1] = 0.0f;
    UNIT(m);
    func_00105230((char *)m, (char *)m, v);
    *(char **)(p + 0x87C) = func_00207480(1, 0x117, (char *)m, 0x40);
    q = *(char **)(p + 0x87C);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x560;
        *(unsigned char *)(q + 0x9A) = 0;
    }
}

void func_001F7720(char *p) {
    char *q;
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    q = *(char **)(p + 0x440);
    func_001B43C0(p, 0, 0x18);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xD0), "r"(q + 0x20) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(q + 0x30) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xF0), "r"(q + 0x40) : "memory");
    *(float *)(p + 0x460) = *(int *)(q + 0x68);
    *(unsigned char *)(p + 0x454) = 0;
    *(char **)(p + 0x45C) = q + 0x6C;
    *(float *)(p + 0x458) = *(short *)(q + 0x6C);
    *(unsigned char *)(p + 0x455) = 0;
    func_001F8910(p + 0x444, p + 0x444, *(char **)(p + 0x45C), *(char **)(p + 0x45C) + 0x14, 4, 4, 0.0f);
    *(char **)(p + 0xAC0) = func_0021B0B0(D_01DF8A00, *(short *)(q + 0xD8));
    if (*(char **)(p + 0xAC0) == 0) {
        *(unsigned char *)(p + 0x38) = 3;
        func_001AD140(p);
    } else {
        *(int *)(p + 0xAC4) = 0;
        *(int *)(p + 0xBC) = 0;
        *(char *)(p + 0xAB0) = *(signed char *)(D_005BE0D8 + 0xE);
    }
}
