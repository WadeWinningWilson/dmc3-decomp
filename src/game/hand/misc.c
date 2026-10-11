/* Hand-matched functions whose translation unit is not identified yet. Each was a near miss
 * of tools/gen_flow.py; the fix is noted. Move them to their real files as the code is mapped. */

/* Clamps a short to >= 0 before storing it (an if/else of two stores, short parameter). */
void func_001A5D70(char *p, short v) {
    if (v < 0) {
        *(short *)(p + 392) = 0;
    } else {
        *(short *)(p + 392) = v;
    }
    *(char *)(p + 394) = 1;
}

/* Record i of a 48-byte array at +56, if its flag byte is set (real struct indexing gives
 * MW's index-first address add). */
typedef struct Rec48 {
    int a;
    unsigned char flag;
    char pad[43];
} Rec48;

typedef struct Rec48Table {
    char pad[56];
    Rec48 e[1];
} Rec48Table;

Rec48 *func_00215A00(Rec48Table *t, short i) {
    if (t->e[i].flag != 0) {
        return &t->e[i];
    }
    return 0;
}

/* Compares a byte with a 3-byte-row table entry; the column is added first. */
extern unsigned char D_0056EA20[];

int func_003C5400(unsigned char *p) {
    return p[7414] < (D_0056EA20 + p[5585])[p[5584] * 3];
}

/* Smallest power of two (2^1..2^10) that reaches n; a `<= 10` loop test is what gives
 * MW's `slti $at`. */
int func_001971B0(int n) {
    int i;
    for (i = 1; i <= 10; i++) {
        if ((1 << i) >= n) {
            return i;
        }
    }
    return 1;
}

/* Byte flag compared signed after a zero-extending load (blez). */
int func_003C3FC0(unsigned char *p) {
    if (p[7417] == 1 && (int)p[5585] > 0) {
        return 1;
    }
    return 0;
}

int func_002D8B10(unsigned char *p) {
    if (p[10419] != 0 && *(float *)(p + 10444) > 0.0f) {
        return 0;
    }
    return 1;
}

/* Steps a 0..15 value up or down with wrap-around. */
int func_00433F50(int a, int v, int dir) {
    if ((unsigned char)dir == 0) {
        return v < 15 ? v + 1 : 0;
    }
    return v > 0 ? v - 1 : 15;
}

/* Two-dimensional table lookups: real array indexing gives MW's address order. */
extern float D_005459C0[][2];

float func_002DBD40(int a, int b) {
    if ((unsigned char)b == 2) {
        b = 1;
    }
    return D_005459C0[(unsigned char)a][(unsigned char)b];
}

extern signed char D_005BDD50[4]; /* small data ($gp) */
extern int D_00586AD0[][8];

int func_004B5D10(char *p, int i) {
    int k = D_005BDD50[i];
    int n = *(unsigned char *)(k + *(int *)(p + 13168) + 67);
    if (n >= 8) {
        n = 7;
    }
    return D_00586AD0[k][n];
}

/* Resets an entry (index from the global's +14 byte): a VU0 vector copy, then w = 1. */
extern char *D_005BE0D8;

void func_001A9CA0(char *p0, void *src) {
    char *e = p0 + (*(signed char *)(D_005BE0D8 + 14) << 7) + 448;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(src), "r"(e + 48) : "memory");
    *(float *)(e + 112) = 0.0f;
    *(float *)(e + 116) = 0.0f;
    *(float *)(e + 120) = 0.0f;
    *(float *)(e + 124) = 1.0f;
}

void func_003D0B20(char *p, int k) {
    switch (k) {
    case 0:
        p[44260] = 0;
        break;
    case 1:
        p[44261] = 1;
        break;
    }
}

/* Calls func_00210660 for every flagged record of the 200-entry table (see func_00215A00). */
void func_00210660(Rec48 *);

void func_00213C40(Rec48Table *t) {
    int i;
    for (i = 0; i < 200; i++) {
        if (t->e[i].flag == 1) {
            func_00210660(&t->e[i]);
        }
    }
}

/* How many of three thresholds f exceeds, capped at 2 (char counters use daddiu). */
extern float D_005623B0[3];

unsigned char func_002C6CF0(float f) {
    unsigned char n = 0;
    int i;
    for (i = 0; i < 3; i++) {
        if (f > D_005623B0[i]) {
            n++;
        }
    }
    if (n >= 3) {
        n = 2;
    }
    return n;
}

/* State 1 or 2 -> 3, with two floats from small data. */
extern float D_005BDBC8, D_005BDBC4;

void func_0046F350(unsigned char *p) {
    unsigned char ok = 1;
    if ((unsigned int)(p[1] - 1) > 1) {
        ok = 0;
    }
    if (ok) {
        p[1] = 3;
        *(float *)(p + 4) = D_005BDBC8;
        p[35] = 0;
        *(float *)(p + 8) = D_005BDBC4;
        p[32] = 1;
    }
}

/* Creates the object at +0x748 and links it back. */
char *func_00207480(int, int, int, int);

void func_004E2690(char *p) {
    char *o;
    *(char **)(p + 0x748) = func_00207480(3, 0x2D6, 0, 16);
    o = *(char **)(p + 0x748);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x6C0;
        o[0x9A] = 0;
        *(*(char **)(p + 0x748) + 0x3A) = 1;
    }
}

/* Resets every 303-entry record in state 4 and notifies its sub-object. */
typedef struct Ent32 {
    char a;
    unsigned char state;
    char pad[14];
    char sub[16];
} Ent32;

extern Ent32 D_00666750[303];
void func_0013D5D0(void *);

void func_001AEE60(void) {
    int i;
    for (i = 0; i < 303; i++) {
        if (D_00666750[i].state == 4) {
            D_00666750[i].state = 0;
            func_0013D5D0(D_00666750[i].sub);
        }
    }
}

/* True when the 16-bit angle difference is within a quarter turn. */
short func_002DAA60(char *);

int func_002DAA00(char *p) {
    short d = *(short *)(p + 0x90) - func_002DAA60(p);
    if (d <= 0x3FFF && d > -0x4000) {
        return 1;
    }
    return 0;
}

/* Counted arrays of 16-byte entries (the count is the first entry's head word). */
typedef struct Ent16 {
    int head;
    char sub[12];
} Ent16;

void func_0022F8C0(Ent16 *e) {
    int i;
    for (i = 0; i < e[0].head; i++) {
        func_0013D5D0(e[i].sub);
    }
}

void func_00230000(Ent16 *e) {
    int i;
    for (i = 0; i < e[0].head; i++) {
        func_0013D5D0(e[i].sub);
    }
}

/* Runs three update steps, then reports whether both byte pairs differ. */
void func_00509A10(char *);
void func_00509FA0(char *);
void func_0050A210(char *);

int func_00509AA0(char *p) {
    func_00509A10(p);
    *(int *)(p + 0x18) = 0;
    func_00509FA0(p);
    func_0050A210(p);
    if (p[0x68] != p[0x69] && p[0x6A] != p[0x6B]) {
        return 1;
    }
    return 0;
}
