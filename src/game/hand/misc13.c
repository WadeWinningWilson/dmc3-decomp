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
