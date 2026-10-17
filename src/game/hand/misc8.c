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
void func_00286780(char *, int);
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
