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
