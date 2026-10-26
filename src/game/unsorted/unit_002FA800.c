/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-10 (part 2). */
void func_002FB930(int, int, int *);

void func_002FB9F0(int, int);

typedef struct { unsigned short u0; unsigned char b2, b3, b4, b5, b6, b7; short h8, hA, hC, hE; unsigned char b10, b11, b12, b13; unsigned int w14; int w18; } S2FAA;

typedef struct { unsigned char b0; char p1[3]; unsigned short h4; unsigned char b6; unsigned char b7; unsigned char b8; unsigned char b9; unsigned char bA; unsigned char bB; unsigned char bC; unsigned char bD; short hE; int w10; unsigned char b14; char p15; unsigned short h16; unsigned short h18; unsigned short h1A; unsigned short h1C; unsigned short h1E; } G2FB2;

G2FB2 *func_002FB170(int, int);

void func_002FB1C0(G2FB2 *, S2FAA *, int, int);

int func_002FAA00(S2FAA *, unsigned short, unsigned short, unsigned short, unsigned short);

void func_002FAB10(S2FAA *);

void func_002FAB00(S2FAA *);

int func_002FB250(int a, int b, int *prm) {
    S2FAA s = { 0 };
    G2FB2 *g;
    for (;;) {
        g = func_002FB170((unsigned short)a, (unsigned short)b);
        if (g == 0) return -1;
        s.u0 = g->h4;
        s.b4 = a;
        s.b5 = g->b7;
        s.h8 = g->bC;
        s.hA = g->bD;
        s.hC = g->hE;
        s.b3 = g->b9;
        s.b6 = g->bA;
        s.b7 = g->bB;
        s.w14 = g->w10;
        s.b2 = g->b8;
        s.b10 = g->b14;
        s.b5 += prm[1];
        s.b6 += prm[2];
        s.b7 += prm[3];
        s.b3 += prm[4];
        s.h8 += prm[5];
        s.hA += prm[6];
        s.hC += prm[7];
        s.w14 += prm[8];
        s.b10 += prm[9];
        s.h8 = s.h8 * prm[10] / 100;
        s.b2 |= prm[11];
        if (g->h1E) {
            s.b2 &= 0x7F;
            s.b2 |= 1;
        }
        switch (g->b0) {
        case 6: func_002FB930((unsigned short)a, (unsigned short)b, prm); break;
        case 7: func_002FB9F0((unsigned short)a, (unsigned short)b); break;
        case 1: func_002FB1C0(g, &s, (unsigned short)a, g->b6 + prm[0]); break;
        case 2: func_002FAB10(&s); break;
        case 3: func_002FAB00(&s); break;
        case 5: func_002FAA00(&s, g->h18, g->h1A, g->h1C, g->h1E); break;
        case 8: case 9: case 10: case 11: case 12: break;
        }
        if (g->h16 == 0xFFFF || g->h16 == (unsigned short)b) break;
        b = g->h16;
    }
    return 0;
}

int func_002FA530(int, void *, int);

extern char D_005588D0[];

void func_0010F9C0(char *, ...);

typedef struct { unsigned short fl; unsigned char b2; unsigned char b3; unsigned char b4; unsigned char b5; } F2FAE;

typedef struct { int cmd; int w4; S2FAA s; } C36;

int func_002FAEF0(S2FAA *t, int cmd) {
    C36 s = { 0 };
    switch (cmd) {
    case 0x10000003:
    case 0x10000002:
    case 0x10000001:
        break;
    default:
        func_0010F9C0(D_005588D0);
        return -1;
    }
    s.cmd = cmd;
    s.s.u0 = t->u0;
    s.s.b2 = t->b2;
    s.s.b3 = t->b3;
    s.s.b4 = t->b4;
    s.s.b5 = t->b5;
    s.s.b6 = t->b6;
    s.s.b7 = t->b7;
    s.s.h8 = t->h8;
    s.s.hA = t->hA;
    s.s.hC = t->hC;
    s.s.hE = t->hE;
    s.s.b10 = t->b10;
    s.s.b11 = t->b11;
    s.s.b12 = t->b12;
    s.s.b13 = t->b13;
    s.s.w14 = t->w14;
    s.s.w18 = t->w18;
    if (func_002FAE60((F2FAE *)&s.s) == -1) return -1;
    func_002FA530(1, &s, 0x24);
    return 0;
}

typedef struct { int cmd; int w4; unsigned char c8; char pad[3]; } C12;

int func_002FA800(int a) {
    C12 s = { 0 };
    s.cmd = 0x10000009;
    s.c8 = a & 1;
    func_002FA530(1, &s, 12);
    return 0;
}

int func_002FA980(int a) {
    C12 s = { 0 };
    s.cmd = 0x1000000C;
    s.c8 = a == 0xFF ? a : a & 0xF;
    func_002FA530(1, &s, 12);
    return 0;
}

typedef struct { int cmd; int w4; int w8; int wC; short h10; unsigned char b12; unsigned char b13; } C20;

int func_002FAB80(int a, int b, short c, unsigned char d, unsigned char e) {
    C20 s = { 0 };
    s.cmd = 0x10000007;
    s.w8 = a;
    s.wC = b;
    s.h10 = c;
    s.b12 = d;
    s.b13 = e;
    func_002FA530(1, &s, 0x14);
    return 0;
}

typedef struct { int cmd; int w4; int w8; int wC; int w10; } W20;

int func_002FABF0(int a, int b, int c) {
    W20 s = { 0 };
    s.cmd = 0x30000000;
    s.w8 = a;
    s.wC = b;
    s.w10 = c;
    func_002FA530(3, &s, 0x14);
    return 0;
}

typedef struct { int cmd; int w4; short h8; short hA; } H12;

int func_002FB040(short a, short b) {
    H12 s = { 0 };
    s.cmd = 0x10000008;
    s.h8 = a;
    s.hA = b;
    func_002FA530(1, &s, 12);
    return 0;
}

typedef struct { int cmd; int w4; unsigned char c8; unsigned char c9; char pad[2]; } D12;

int func_002FA880(int a, int b) {
    D12 s = { 0 };
    s.cmd = 0x1000000A;
    s.c8 = a == 0xFF ? a : a & 0xF;
    s.c9 = b & 0x7F;
    func_002FA530(1, &s, 12);
    return 0;
}

int func_002F9F10(int);

int func_002FA000(int, unsigned char);

int func_002FA0C0(void *, int, unsigned char, unsigned char, unsigned char);

int func_002F9EC0(int);

void func_002FA250(void *, void *, int, int);

void func_002FAC60(void *, unsigned char *);

int func_002FAD60(unsigned char *p, unsigned short id, int k) {
    char buf[16] = { 0 };
    char tmp[32];
    int h;
    int n;
    int i;
    h = func_002F9F10(id);
    n = func_002FA000(h, k);
    for (i = 0; i < n; i++) {
        if (func_002FA0C0(buf, h, k, p[5], i) >= 0) {
            func_002FA250(tmp, buf, p[5], func_002F9EC0(id));
            func_002FAC60(tmp, p);
        }
    }
    return 0;
}

typedef struct { int cmd; int w4; unsigned char c8; char pad[3]; int wC; unsigned char c10; char pad2[3]; } E20;

int func_002FA900(int a, int b, int c) {
    E20 s = { 0 };
    s.cmd = 0x1000000B;
    s.c8 = a == 0xFF ? a : a & 0xF;
    s.wC = c;
    s.c10 = b & 0x7F;
    func_002FA530(1, &s, 0x14);
    return 0;
}

int func_0012B1A0(char *, char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BC648[8];

extern char D_005BC650[8];

extern char D_005BC658[8];

typedef struct { signed char a0; unsigned char a1; signed char a2; unsigned char a3; char pad4[0xC]; float f10[12]; unsigned char c40; int c44; int c48; int c4C; } S2FBA;

int func_002FBC30(char *, int *, S2FBA *);

int func_002F6690(S2FBA *, char *, char *);

static inline int *chunk2FB(int *q, int n) { if ((unsigned int)q[1] < n + 1) return 0; if (*(int *)((char *)q + n * 4 + 8) == 0) return 0; return (int *)((char *)q + *(int *)((char *)q + n * 4 + 8)); }

int func_002FBA30(char *p, int *q, char *r) {
    char name[32];
    S2FBA s;
    s.a1 = 0;
    s.a3 = 0;
    s.f10[0] = 0.0f;
    s.a0 = -1;
    s.a2 = -1;
    s.f10[1] = 0.0f;
    s.f10[2] = 0.0f;
    s.f10[3] = 1.0f;
    s.f10[4] = 0.0f;
    s.f10[5] = 0.0f;
    s.f10[6] = 0.0f;
    s.f10[7] = 1.0f;
    s.f10[8] = 1.0f;
    s.f10[9] = 1.0f;
    s.f10[10] = 1.0f;
    s.f10[11] = 1.0f;
    s.c40 = 0;
    s.c44 = -1;
    s.c48 = -1;
    s.c4C = 0;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BC648) == 0) {
            return func_002FBC30(p, chunk2FB(q, s.a0 * 10), &s);
        }
        if (func_002F6690(&s, name, r) == 0) {
            if (func_0012B1A0(name, D_005BC650) == 0) {
                s.c40 = 1;
                s.c44 = func_0022CD60(r);
                s.c48 = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005BC658) == 0) {
                s.c4C = func_0022CD60(r);
            }
        }
    }
    return 0;
}

void func_002FB610();

int func_002FB120(void) {
    func_002FB610();
    return 0;
}

extern char D_01DF9F00[];

void func_00128488();

char *func_002FB8E0(int p0) {
    func_00128488((D_01DF9F00 + (p0 << 6)), 0, 64);
    *(short *)((D_01DF9F00 + (p0 << 6)) + 0) = 1;
    return (D_01DF9F00 + (p0 << 6));
}

extern int D_005BE184;

extern char D_01DF9EC0[];

int func_002FB5B0();

int func_002FB0B0() {
    int v0;
    char *v1;
    func_002FB5B0();
    v0 = 0;
    v1 = D_01DF9EC0;
    do {
        *(int *)(v1 + 0) = 0;
        *(int *)(v1 + 4) = 0;
        v0 = (v0 + 8);
        *(int *)(v1 + 8) = 0;
        *(int *)(v1 + 12) = 0;
        *(int *)(v1 + 16) = 0;
        *(int *)(v1 + 20) = 0;
        *(int *)(v1 + 24) = 0;
        *(int *)(v1 + 28) = 0;
        v1 = (v1 + 32);
    } while (((unsigned int)v0 < (unsigned int)16));
    D_005BE184 = 0;
    return 0;
}

int func_002FB5B0() {
    int v1;
    int v0;
    v1 = 0;
    v0 = (int)D_01DF9F00;
    do {
        func_00128488(v0, 0, 64);
        v1 = (v1 + 1);
        v0 = (v0 + 64);
    } while (((unsigned int)v1 < (unsigned int)16));
    return 0;
}

int func_002FB140(int p0) {
    D_005BE184 = p0;
    return 0;
}

int func_002FB150(int p0, int p1) {
    *(int *)((D_01DF9EC0 + (p0 << 2)) + 0) = p1;
    return 0;
}
