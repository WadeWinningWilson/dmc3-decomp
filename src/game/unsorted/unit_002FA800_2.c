char *func_002FB8E0(int);

void *func_001282D0(void *, void *, unsigned int);

int func_002FB930(int a, int b, void *src) {
    char *func_002FB170(int);
    char *h = func_002FB170(a);
    char *d = func_002FB8E0(*(unsigned char *)(h + 0xA) & 0xF);
    if (d == 0) {
        return -1;
    }
    *(unsigned char *)(d + 2) = a;
    *(unsigned char *)(d + 3) = b;
    *(unsigned short *)(d + 4) = *(unsigned short *)(h + 0x18);
    *(unsigned short *)(d + 8) = *(unsigned short *)(h + 0x1A);
    *(unsigned short *)(d + 0xA) = *(unsigned short *)(h + 0x1C);
    *(unsigned short *)(d + 6) = *(unsigned short *)(h + 0x1E);
    *(unsigned short *)(d + 0xC) = 1;
    *(unsigned short *)(d + 0xE) = *(unsigned short *)(d + 6);
    func_001282D0(d + 0x10, src, 0x30);
    return 0;
}

typedef struct { unsigned short u0; unsigned char b2, b3, b4, b5, b6, b7; short h8, hA, hC, hE; unsigned char b10, b11, b12, b13; unsigned int w14; int w18; } S2FAA;

typedef struct { int cmd; int w4; S2FAA s; short h24, h26, h28, h2A; } C44;

int func_002FAA00(S2FAA *t, unsigned short a, unsigned short b, unsigned short c, unsigned short d) {
    int func_002FA530(int, void *, int);
    C44 s = { 0 };
    s.cmd = 0x10000004;
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
    s.h24 = a;
    s.h26 = b;
    s.h28 = c;
    s.h2A = d;
    func_002FA530(1, &s, 0x2C);
    return 0;
}

extern void (*D_005BE184)(short *, char *);

void func_002FAD60(short *, unsigned short, unsigned short);

int func_002FB1C0(char *o, short *d, int a, int b) {
    unsigned short v = *(unsigned short *)(o + 4);
    if (v & 2) {
        *d = v & ~8;
    } else {
        *d = v | 8;
    }
    if (D_005BE184 != 0) {
        D_005BE184(d, o);
    }
    func_002FAD60(d, a, b);
    return 0;
}

int func_002FAE60(char *p) {
    unsigned short f;
    if (*(unsigned short *)p & 1) {
        *(unsigned char *)(p + 3) = *(unsigned char *)(p + 3) & 0x7F;
    } else {
        *(unsigned short *)p = *(unsigned short *)p | 1;
        *(unsigned char *)(p + 3) = 0x7F;
    }
    f = *(unsigned short *)p;
    if (f & 0x20) {
        if ((f & 0xE) == 0) return -1;
    } else {
        if (f & 0x40) return -1;
    }
    if (f & 0x10) {
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) & 0x7F;
    }
    return 0;
}

typedef struct { short h0; short h2; unsigned char c4; char pad[0x17]; } C28;

void func_002FAB20(int a) {
    int func_002FAEF0(S2FAA *, int);
    C28 s = { 0 };
    s.h0 = 8;
    s.c4 = a & 0xF;
    func_002FAEF0((S2FAA *)&s, 0x10000002);
}

extern char D_01DF9F00[];

int func_002FB9F0(void) {
    char *func_002FB170();
    char *t0;
    int t1;
    char *t2;
    t0 = func_002FB170();
    t1 = ((*(unsigned char *)(t0 + 10) & 15) << 6);
    t2 = (D_01DF9F00 + ((*(unsigned char *)(t0 + 10) & 15) << 6));
    *(short *)((D_01DF9F00 + ((*(unsigned char *)(t0 + 10) & 15) << 6)) + 0) = 0;
    return 0;
}

void func_002FAB00(p0) int p0; {
    void func_002FAEF0();
    func_002FAEF0(p0, 0x10000002);
}

void func_002FAB10(p0) int p0; {
    void func_002FAEF0();
    func_002FAEF0(p0, 0x10000001);
}

int func_002FAC60(p0, p1) char *p0; char *p1; {
    void func_002FA530();
    char stk[0x40] __attribute__((aligned(16)));
    *(int *)((stk + -16) + 16) = 0x10000000;
    *(char *)((stk + -16) + 52) = *(unsigned char *)(p0 + 0);
    *(char *)((stk + -16) + 53) = *(unsigned char *)(p0 + 1);
    *(short *)((stk + -16) + 54) = *(short *)(p0 + 2);
    *(short *)((stk + -16) + 56) = *(unsigned short *)(p0 + 4);
    *(short *)((stk + -16) + 58) = *(unsigned short *)(p0 + 6);
    *(short *)((stk + -16) + 60) = *(unsigned short *)(p0 + 8);
    *(short *)((stk + -16) + 62) = *(unsigned short *)(p0 + 10);
    *(int *)((stk + -16) + 64) = *(int *)(p0 + 12);
    *(int *)((stk + -16) + 68) = *(int *)(p0 + 16);
    *(short *)((stk + -16) + 24) = *(unsigned short *)(p1 + 0);
    *(char *)((stk + -16) + 26) = *(unsigned char *)(p1 + 2);
    *(char *)((stk + -16) + 27) = *(unsigned char *)(p1 + 3);
    *(char *)((stk + -16) + 28) = *(unsigned char *)(p1 + 4);
    *(char *)((stk + -16) + 29) = *(unsigned char *)(p1 + 5);
    *(char *)((stk + -16) + 30) = *(unsigned char *)(p1 + 6);
    *(char *)((stk + -16) + 31) = *(unsigned char *)(p1 + 7);
    *(short *)((stk + -16) + 32) = *(short *)(p1 + 8);
    *(short *)((stk + -16) + 34) = *(short *)(p1 + 10);
    *(short *)((stk + -16) + 36) = *(short *)(p1 + 12);
    *(short *)((stk + -16) + 38) = *(short *)(p1 + 14);
    *(char *)((stk + -16) + 40) = *(unsigned char *)(p1 + 16);
    *(char *)((stk + -16) + 41) = *(unsigned char *)(p1 + 17);
    *(char *)((stk + -16) + 42) = *(unsigned char *)(p1 + 18);
    *(char *)((stk + -16) + 43) = *(unsigned char *)(p1 + 19);
    *(int *)((stk + -16) + 44) = *(int *)(p1 + 20);
    *(int *)((stk + -16) + 48) = *(int *)(p1 + 24);
    func_002FA530(1, ((stk + -16) + 16), 56);
    return 0;
}

void func_002FA880();

void func_002FA870(int p0) {
    func_002FA880(255, p0);
}
