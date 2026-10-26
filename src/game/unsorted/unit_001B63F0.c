/* Hand-matched functions (fifth file: its callee declarations differ from the others). */
typedef struct {
    char pad0[8];
    char *tex;
    int c;
    char pad10[8];
    int f18;
    char pad1C[8];
    int f24;
    char pad28[4];
    int f2C;
    signed char type;
    char pad31;
    unsigned short h;
    unsigned short k;
    char pad36[7];
    unsigned char b3D;
    char pad3E[2];
    float f;
    char pad44[0xC];
} L1B9;

extern char *D_005BE09C;

extern char D_005BE0C4[4];

extern unsigned char D_005D0E50[];

void func_00104C00(char *, char *, char *);

char *func_001AE4B0(int);

int func_001B9AB0(char *, char *, float *, char *, int);

int func_001B63F0(char *);

void func_001B6580(char *, char *);

int func_001B82F0(char *, L1B9 *);

void func_001AE4F0(int);

int func_001B9520(char *a, char *b) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    L1B9 l;
    char *s;
    char *t;
    int r;
    if (b != 0) {
        s = b;
    } else {
        s = a;
    }
    if (*(char **)(s + 4) != 0) {
        func_00104C00((char *)m, D_005BE09C + 0x140, *(char **)(s + 4));
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(*(char **)(s + 4)) : "memory");
    } else {
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%3)\n\tlqc2 $vf6, 0x10(%3)\n\tlqc2 $vf7, 0x20(%3)\n\tlqc2 $vf8, 0x30(%3)\n\tsqc2 $vf4, 0x0(%1)\n\tsqc2 $vf5, 0x0(%0)\n\tsqc2 $vf6, 0x10(%0)\n\tsqc2 $vf7, 0x20(%0)\n\tsqc2 $vf8, 0x30(%0)" : : "r"(m), "r"(v), "r"(*(char **)(s + 8)), "r"(D_005BE09C + 0x140) : "memory");
    }
    t = func_001AE4B0(*(unsigned short *)(s + 0x34));
    r = 0;
    if (func_001B9AB0(D_005BE0C4, t, m, *(char **)(s + 8), *(unsigned short *)(s + 0x34)) == 0) {
        l.tex = t;
        l.c = 0;
        l.f18 = *(int *)(s + 0x18);
        l.f24 = *(int *)(s + 0x24);
        l.f2C = *(int *)(s + 0x2C);
        if (*(unsigned char *)(s + 0x30) == 2) {
            l.h = *(int *)(t + 0xC) >> (func_001B63F0(a) - 13);
            if (l.h == 0) {
                l.h = 1;
            }
            D_005D0E50[0] = 1;
            l.f = *(float *)(s + 0x40);
            l.type = 2;
        } else {
            l.h = *(unsigned short *)(s + 0x32);
            l.type = *(signed char *)(s + 0x30);
        }
        l.k = *(unsigned short *)(s + 0x34);
        l.b3D = *(unsigned char *)(s + 0x3D);
        func_001B6580(a, 0);
        r = func_001B82F0(a, &l);
    }
    func_001AE4F0(*(unsigned short *)(s + 0x34));
    return r;
}

extern unsigned char D_01CB1291[];

extern unsigned char D_01CB1292[];

extern char D_01C61820[];

void func_001B6480(char *, int);

void func_001B64E0(char *, short *);

void func_001B64C0(char *, int);

void func_001B6500(char *, int);

void func_001B6510(char *, int);

void func_001B6520(char *, int);

void func_001B6550(char *, int);

void func_001B7430(char *, int);

typedef struct { int x0; int y0; int c0; int o0; int x1; int y1; int c1; int o1; } R1B6;

typedef struct { unsigned char u0; unsigned char v0; unsigned char u1; unsigned char v1; } UV1B6;

extern UV1B6 D_005406C0[];

int func_001B6800(int z, short x, short y, short w, short h, int a, int b, unsigned char k, int c) {
    void func_001B6470(char *, R1B6 *);
    R1B6 r;
    short uv[4];
    if (D_01CB1291[0] == 1 && D_01CB1292[0] == 0) {
        uv[0] = D_005406C0[k].u0 << 4;
        uv[1] = D_005406C0[k].v0 << 4;
        uv[2] = D_005406C0[k].u1 << 4;
        uv[3] = D_005406C0[k].v1 << 4;
        r.x0 = x;
        r.y0 = y;
        r.c0 = c;
        r.x1 = x + w;
        r.y1 = y + h / 2;
        r.c1 = c;
        func_001B6470(D_01C61820, &r);
        func_001B6480(D_01C61820, 0);
        func_001B64C0(D_01C61820, ((unsigned char)a << 24) + 0x808080);
        func_001B64E0(D_01C61820, uv);
        func_001B6500(D_01C61820, b);
        func_001B6510(D_01C61820, 4);
        func_001B6520(D_01C61820, 0xF);
        func_001B6550(D_01C61820, 1);
        func_001B7430(D_01C61820, 0);
    }
    return D_005406C0[k].u1 - D_005406C0[k].u0;
}

void func_001B69F0(int z, short x, short y, int c, short w, short h, int t2, int t3) {
    void func_001B6470(char *, R1B6 *);
    R1B6 r;
    short uv[4];
    short ww;
    if (t3 == 0) return;
    ww = w + 10;
    r.x0 = (short)(x - 0x1C - ww / 24);
    r.y0 = (short)(y - 8 - h / 16);
    r.c0 = c;
    r.o0 = 1;
    r.x1 = (short)(ww / 48 + (x + 0x20 + ww));
    r.y1 = (short)(h / 32 + (y + 0xC + h));
    r.c1 = c;
    r.o1 = 1;
    func_001B6470(D_01C61820, &r);
    func_001B6480(D_01C61820, 0);
    uv[2] = 0x1000;
    uv[3] = 0x800;
    uv[0] = 0;
    uv[1] = 0;
    func_001B64E0(D_01C61820, uv);
    func_001B64C0(D_01C61820, t2);
    func_001B6500(D_01C61820, t3);
    func_001B6510(D_01C61820, 4);
    func_001B6520(D_01C61820, 0);
    func_001B6550(D_01C61820, 1);
    func_001B7430(D_01C61820, 0);
}

void func_001B64D0(char *, short *);

int func_001B6630(char *, char *);

void func_001B6BD0(char *p, int a, int b) {
    void func_001B6470(char *, int *);
    short sz[2];
    int s[7];
    if (a == 0) {
        a = 0x20000000;
    }
    sz[0] = 0x200;
    s[2] = b;
    sz[1] = 0x100;
    s[0] = 0;
    s[1] = 0;
    func_001B6470(D_01C61820, s);
    func_001B64C0(D_01C61820, a);
    func_001B64D0(D_01C61820, sz);
    func_001B6510(D_01C61820, 4);
    func_001B6520(D_01C61820, 0);
    func_001B6550(D_01C61820, 1);
    func_001B6630(D_01C61820, 0);
}

void func_001B6C90(char *p, short x, short y, int c, short w, short h, int a) {
    void func_001B6470(char *, int *);
    short sz[2];
    int s[7];
    s[1] = y;
    s[2] = c;
    sz[0] = w;
    sz[1] = h;
    s[0] = x;
    func_001B6470(D_01C61820, s);
    func_001B64C0(D_01C61820, a);
    func_001B64D0(D_01C61820, sz);
    func_001B6510(D_01C61820, 4);
    func_001B6520(D_01C61820, 0xF);
    func_001B6550(D_01C61820, 1);
    func_001B6630(D_01C61820, 0);
}

typedef struct { unsigned int f0 : 3; unsigned int ab : 1; unsigned int f4 : 4; unsigned int fx : 4; unsigned int f12 : 20; } W4_1B6;

typedef struct { short lo : 4; short v : 12; } H12_1B6;

typedef struct { int w0; W4_1B6 w4; int w8; int wC; H12_1B6 x; H12_1B6 y; int w14; int w18; } Pkt1B6;

#define PADDSW(d, a, b) __asm__ volatile("lq $t0, 0x0(%1)\n\tlq $t1, 0x0(%2)\n\tpaddsw $t0, $t0, $t1\n\tsq $t0, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory", "t0", "t1")

Pkt1B6 *func_0013B800(int);

void func_00138830(signed char, int, Pkt1B6 *);

void func_001387E0(int, Pkt1B6 *);

int func_001B6630(char *a, char *b) {
    int t[4] __attribute__((aligned(16)));
    char *s;
    Pkt1B6 *k;
    if (b != 0) {
        s = b;
    } else {
        s = a;
    }
    k = func_0013B800(0x1C);
    if (k == 0) return 0;
    k->w0 = 0x10000000;
    *(int *)&k->w4 = 0x324000;
    if (*(unsigned char *)(s + 0x3D) != 0) {
        *(int *)&k->w4 |= 8;
        *(int *)&k->w4 = (*(int *)&k->w4 & ~0xF00) | ((*(unsigned char *)(s + 0x3D) & 0xF) << 8);
    }
    if (*(int *)(s + 0xC) == 0) {
        k->x.v = **(short **)(s + 8);
        k->y.v = *(short *)(*(char **)(s + 8) + 4);
        k->w14 = *(int *)(*(char **)(s + 8) + 8);
    } else {
        PADDSW(t, *(char **)(s + 8), *(char **)(s + 0xC));
        k->x.v = (short)t[0];
        k->y.v = (short)t[1];
        k->w14 = t[2];
    }
    k->w18 = **(int **)(s + 0x20);
    k->wC = *(int *)(s + 0x1C);
    if (*(unsigned char *)(s + 0x30) != 5) {
        func_00138830(*(signed char *)(s + 0x30), *(unsigned short *)(s + 0x32), k);
    } else {
        func_001387E0(*(unsigned short *)(s + 0x32), k);
    }
    return 1;
}

extern void func_001B6430();

void func_001B6440(void) { func_001B6430(); }

void func_001B6450(char *p, int v) { *(int *)(p + 0) = v; }

void func_001B6460(char *p, int v) { *(int *)(p + 4) = v; }

void func_001B6490(char *p, int v) { *(int *)(p + 16) = v; }

void func_001B64A0(char *p, int v) { *(int *)(p + 20) = v; }

void func_001B64B0(char *p, int v) { *(int *)(p + 24) = v; }

void func_001B64F0(char *p, float v) { *(float *)(p + 40) = v; }

void func_001B6530(char *p, short v) { *(short *)(p + 52) = v; }

void func_001B6540(char *p, int v) { *(int *)(p + 56) = v; }

void func_001B6560(char *p, float v) { *(float *)(p + 64) = v; }

void func_001B6570(char *p, float v) { *(float *)(p + 76) = v; }
