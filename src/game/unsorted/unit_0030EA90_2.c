int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

void func_0022CB30(char *);

void func_0022CB50(char *, char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BC6E8[4];

extern char D_005BC6EC[4];

extern char D_005BC6F0[4];

extern char D_005BC6F4[4];

extern char D_005BC6F8[4];

extern char D_005BC700[4];

extern char D_005BC708[4];

extern char D_005BC70C[4];

extern char D_005BC710[4];

extern char D_005BC714[4];

extern char D_005BC718[4];

extern char D_005BC71C[4];

extern char D_005BC720[4];

extern char D_005BC724[4];

extern char D_005BC728[4];

extern char D_005BC72C[4];

extern char D_005BC730[4];

extern char D_005BC734[4];

extern char D_005BC738[4];

extern char D_005BC73C[4];

static inline unsigned int rgba30F(unsigned char r, unsigned char g, unsigned char b, unsigned char a) { return r | ((g << 8) | ((a << 24) | (b << 16))); }

int func_0030F790(char *p, char **ps) {
    char r[16];
    char buf[32];
    char tok[32];
    int i;
    int k;
    unsigned char c0;
    unsigned char c1;
    unsigned char c2;
    if (**ps == 0) return 0x15;
    if (**ps != '<') return 0;
    (*ps)++;
    for (i = 0; i < 0x1F; i++) {
        buf[i] = **ps;
        (*ps)++;
        if (**ps == '>') {
            (*ps)++;
            break;
        }
    }
    buf[i + 1] = 0;
    func_0022CB30(r);
    func_0022CB50(r, buf);
    func_0022CBB0(r, tok);
    k = 0;
    if (func_0012B1A0(tok, D_005BC6E8) == 0) {
        k = 1;
        *(short *)(p + 0x36) = func_0022CD60(r);
        *(short *)(p + 0x38) = func_0022CD60(r);
    } else if (func_0012B1A0(tok, D_005BC6EC) == 0) {
        k = 2;
        *(float *)(p + 0x44) = func_0022CD90(r);
    } else if (func_0012B1A0(tok, D_005BC6F0) == 0) {
        k = 3;
        c0 = func_0022CD60(r);
        c1 = func_0022CD60(r);
        c2 = func_0022CD60(r);
        *(unsigned int *)(p + 0x28) = rgba30F(c0, c1, c2, (unsigned int)*(float *)(p + 0x50));
    } else if (func_0012B1A0(tok, D_005BC6F4) == 0) {
        k = 4;
        c0 = func_0022CD60(r);
        c1 = func_0022CD60(r);
        c2 = func_0022CD60(r);
        *(unsigned int *)(p + 0x2C) = rgba30F(c0, c1, c2, (unsigned int)*(float *)(p + 0x50));
    } else if (func_0012B1A0(tok, D_005BC6F8) == 0) {
        k = 5;
    } else if (func_0012B1A0(tok, D_005BC700) == 0) {
        k = 6;
    } else if (func_0012B1A0(tok, D_005BC708) == 0) {
        k = 7;
        *(float *)(p + 0x54) = func_0022CD90(r);
    } else if (func_0012B1A0(tok, D_005BC70C) == 0) {
        k = 8;
        *(unsigned char *)(p + 0x34) = func_0022CD60(r);
    } else if (func_0012B1A0(tok, D_005BC710) == 0) {
        k = 9;
    } else if (func_0012B1A0(tok, D_005BC714) == 0) {
        k = 10;
        *(float *)(p + 0x4C) = func_0022CD90(r);
    } else if (func_0012B1A0(tok, D_005BC718) == 0) {
        k = 11;
    } else if (func_0012B1A0(tok, D_005BC71C) == 0) {
        k = 12;
    } else if (func_0012B1A0(tok, D_005BC720) == 0) {
        k = 13;
        *(int *)(p + 0x10) = func_0022CD60(r);
    } else if (func_0012B1A0(tok, D_005BC724) == 0) {
        k = 14;
        *(float *)(p + 0x58) = 128.0f / func_0022CD90(r);
    } else if (func_0012B1A0(tok, D_005BC728) == 0) {
        k = 15;
        *(float *)(p + 0x58) = 128.0f / func_0022CD90(r);
    } else if (func_0012B1A0(tok, D_005BC72C) == 0) {
        k = 16;
    } else if (func_0012B1A0(tok, D_005BC730) == 0) {
        k = 18;
    } else if (func_0012B1A0(tok, D_005BC734) == 0) {
        k = 19;
    } else if (func_0012B1A0(tok, D_005BC738) == 0) {
        k = 20;
    } else if (func_0012B1A0(tok, D_005BC73C) == 0) {
        k = 17;
        *(unsigned char *)(p + 0x5C) = func_0022CD60(r);
    }
    return k;
}

extern char D_01DFA310[];

int func_0030E980();

int func_0030EAA0(p0, p1, p2, p3, p4) char *p0; int p1; int p2; int p3; int p4; {
    int v0;
    char *v1;
    int v2;
    int tmp0;
    v0 = p4;
    *(int *)(p0 + 12) = p1;
    v1 = p0;
    *(short *)(p0 + 20) = p2;
    *(short *)(p0 + 22) = p3;
    tmp0 = func_0030E980(D_01DFA310);
    *(int *)(v1 + 24) = tmp0;
    if (*(int *)(v1 + 24) == 0) {
        v2 = 0;
    } else {
        *(char **)(v1 + 60) = (v1 + 93);
        *(int *)(v1 + 64) = 0;
        *(char *)(v1 + 0) = 1;
        *(int *)(v1 + 72) = 0;
        *(int *)(v1 + 80) = 0x43000000;
        *(char *)(v1 + 32) = 0;
        *(char *)(v1 + 33) = 1;
        if ((v0 & 255) == 0) {
            *(int *)(v1 + 68) = 0x3f800000;
            *(char *)(v1 + 52) = 22;
        }
        v2 = 1;
    }
    return v2;
}

void func_0030FCF0(p0, p1, p2) int p0; char *p1; char *p2; {
    int v0;
    int v1;
    v0 = *(signed char *)(p2 + 0);
    v1 = 62;
    if (v0 != v1) {
        do {
            p2 = (p2 + 1);
            *(char *)(*(char **)(p1 + 0) + 0) = v0;
            *(int *)(p1 + 0) = (*(int *)(p1 + 0) + 1);
            v0 = *(signed char *)(p2 + 0);
        } while (v0 != v1);
    }
    *(char *)(*(char **)(p1 + 0) + 0) = v0;
    *(int *)(p1 + 0) = (*(int *)(p1 + 0) + 1);
}

void func_0030FCB0(int p0, char *p1, char *p2) {
    signed char t0;
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    t0 = *(signed char *)(*(char **)(p2 + 0) + 0);
    t1 = *(char **)(p1 + 0);
    *(char *)(*(char **)(p1 + 0) + 0) = *(signed char *)(*(char **)(p2 + 0) + 0);
    t2 = (*(char **)(p1 + 0) + 1);
    *(char **)(p1 + 0) = (*(char **)(p1 + 0) + 1);
    t3 = (*(char **)(p2 + 0) + 1);
    *(char **)(p2 + 0) = (*(char **)(p2 + 0) + 1);
    t4 = *(char **)(p1 + 0);
    *(char *)(*(char **)(p1 + 0) + 0) = 0;
}
