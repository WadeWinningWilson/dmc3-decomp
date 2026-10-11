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
    Rec48 e[200];
    short n; /* records in use */
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

void func_002107A0(Rec48 *);

void func_00213710(Rec48Table *t) {
    int i;
    for (i = 0; i < t->n; i++) {
        if (t->e[i].flag == 1) {
            func_002107A0(&t->e[i]);
        }
    }
}

/* Looks up entry a (stride 0x80) and hands it to func_002E2870. */
int func_001B0FD0(char *, int, int);
void func_002E2870(char *, int, int, int);

int func_002E2800(char *p, int a, int b) {
    int r = func_001B0FD0(p + 0x34, a << 7, 1);
    if (r) {
        func_002E2870(p, r, a, b);
        return 1;
    }
    return 0;
}

/* Integrates a velocity into a position and clamps it; reports the sign change. */
unsigned char func_004B8610(char *p) {
    unsigned char r = 0;
    float v;
    *(float *)(p + 0x54) += *(float *)(p + 0x64);
    v = *(float *)(p + 0x64) + *(float *)(p + 0x74);
    if (v < 0.0f && !(*(float *)(p + 0x64) < 0.0f)) {
        r = 1;
    }
    if (v < 0.0f && v < *(float *)(p + 0xA44)) {
        v = *(float *)(p + 0xA44);
    }
    *(float *)(p + 0x64) = v;
    return r;
}

/* func_004B8610 with a timestep (+0x10) and the limit at +0x21A4. */
unsigned char func_003B51C0(char *p) {
    unsigned char r = 0;
    float v;
    *(float *)(p + 0x54) += *(float *)(p + 0x64) * *(float *)(p + 0x10);
    v = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    if (v < 0.0f && !(*(float *)(p + 0x64) < 0.0f)) {
        r = 1;
    }
    if (v < 0.0f && v < *(float *)(p + 0x21A4)) {
        v = *(float *)(p + 0x21A4);
    }
    *(float *)(p + 0x64) = v;
    return r;
}

/* Struct fields, not pointer arithmetic: MW recomputes &p->pos after each call
 * (it would keep p + 0x50 in a saved register). */
typedef struct Obj4377 {
    char pad0[0x50];
    float pos[4];
    char pad1[0x47E0 - 0x60];
    int x47E0;
    char pad2[0x4859 - 0x47E4];
    unsigned char sel;
    char pad3[4];
    unsigned char busy;
} Obj4377;

void func_004377A0(Obj4377 *, float *, unsigned char *);
void func_004376E0(Obj4377 *, float *, int, unsigned char);
float func_001324B0(float *, float *);

int func_00437B60(Obj4377 *p) {
    float buf[4];
    if (p->busy == 1) {
        return 0;
    }
    func_004377A0(p, p->pos, &p->sel);
    func_004376E0(p, buf, p->x47E0, p->sel);
    if (func_001324B0(buf, p->pos) <= 200.0f) {
        return 1;
    }
    return 0;
}

/* Draw text 0x3106 / 0x3107 centred, its y depending on the layout flag. */
extern char D_01DFA340[];
unsigned int func_003101B0(char *, int, int);
void func_0030FD40(char *, int, int, int, int, int, int, int);

void func_0041D570(void) {
    int x, y;
    unsigned int w = func_003101B0(D_01DFA340, 0x3106, 16);
    x = 472 - (w >> 16);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3106, x, y, 0x585858, 16, 0xFFFFF2, 1);
}

void func_0044BFA0(void) {
    int x, y;
    unsigned int w = func_003101B0(D_01DFA340, 0x3107, 16);
    x = 256 - (w >> 17);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3107, x, y, 0x585858, 16, 0xFFFFF2, 1);
}

/* The same helper for other text ids. */
void func_00417BA0(void) {
    int x, y;
    unsigned int w = func_003101B0(D_01DFA340, 0x3107, 16);
    x = 472 - (w >> 16);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3107, x, y, 0x585858, 16, 0xFFFFF2, 1);
}

void func_0047F8C0(void) {
    int x, y;
    unsigned int w = func_003101B0(D_01DFA340, 0x3106, 16);
    x = 472 - (w >> 16);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3106, x, y, 0x585858, 16, 0xFFFFF2, 1);
}

void func_00490DD0(void) {
    int x, y;
    unsigned int w = func_003101B0(D_01DFA340, 0x3106, 16);
    x = 472 - (w >> 16);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3106, x, y, 0x585858, 16, 0xFFFFF2, 1);
}

void func_004B6040(void) {
    int x, y;
    unsigned int w = func_003101B0(D_01DFA340, 0x3107, 16);
    x = 472 - (w >> 16);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3107, x, y, 0x585858, 16, 0xFFFFF2, 1);
}

void func_00504F40(void) {
    int x, y;
    unsigned int w = func_003101B0(D_01DFA340, 0x3108, 16);
    x = 472 - (w >> 16);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3108, x, y, 0x585858, 16, 0xFFFFF2, 1);
}

void func_004E26F0(char *p) {
    char *o;
    *(char **)(p + 0x74C) = func_00207480(3, 0x2D7, 0, 16);
    o = *(char **)(p + 0x74C);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x700;
        o[0x9A] = 0;
        *(*(char **)(p + 0x74C) + 0x3A) = 1;
    }
}

/* Updates each of the four attached items. */
typedef struct Obj28B {
    char pad[0xE8];
    int item[4];
} Obj28B;

void func_0028BCE0(Obj28B *, int, int, float);

void func_0028BC60(Obj28B *p, int a, float f) {
    unsigned int i;
    for (i = 0; i < 4; i++) {
        if (p->item[i]) {
            func_0028BCE0(p, a, p->item[i], f);
        }
    }
}

/* Steps an angle by a rate * dt, then moves along it (short += float). */
float func_00131BA0(int);

void func_003C0110(char *p, int a, float f) {
    *(short *)(p + 0x1664) += a * *(float *)(p + 0x10);
    *(float *)(p + 0x54) += *(float *)(p + 0x10) * (f * func_00131BA0(*(short *)(p + 0x1664)));
}

/* Text helper with the 0 variant; record sizes rounded to 16; two-slot check; a scene reset. */
void func_004E5F00(void) {
    int x, y;
    unsigned int w = func_003101B0(D_01DFA340, 0x3106, 0);
    x = 472 - (w >> 16);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3106, x, y, 0x585858, 0, 0xFFFFF2, 1);
}
typedef struct Arr1A5 { int base; int n; int stride; } Arr1A5;
int func_00197B30(int);
int func_001A5AA0(int a, Arr1A5 *s) {
    int sum = 0;
    int i;
    for (i = 0; i < s->n; i++) {
        sum += func_00197B30(s->base + ((i * s->stride) << 6));
        sum = (sum + 15) & ~15;
    }
    return sum;
}
int func_00412D80(char *, char *);
unsigned char func_00412CF0(char *p) {
    unsigned char ok = 1;
    int i;
    for (i = 0; i < 2; i++) {
        if (!(unsigned char)func_00412D80(p, p + 0x33C2 + i * 7)) {
            ok = 0;
        }
    }
    if (*(unsigned char *)(p + 0x33C1) == 1) {
        p[0x33C1] = 0;
    }
    return ok;
}
extern char D_01CAFF0C[]; extern char D_00645A30[]; extern char D_01DF5D20[]; extern int D_005BE09C; extern char D_01DF8E4D[];
void func_00195CC0(char *); void func_001F9BF0(char *); void func_001ACCD0(int); void func_00247760(char *); void func_002D8F40(int, unsigned char);
void func_0023A710(char *p, int k) {
    if (!(unsigned char)k) {
        p[0x5BE0] = 0;
    }
    (*(char **)D_01CAFF0C)[8] = 0;
    func_00195CC0(D_00645A30);
    (*(char **)(p + 0x2058))[0x28B4] = 0;
    func_001F9BF0(D_01DF5D20);
    func_001ACCD0(D_005BE09C);
    (*(char **)D_01CAFF0C)[9] = 0;
    D_01DF8E4D[0] = 0;
    D_01DFA340[0] = 0;
    func_00247760(p + 0x45C0);
    func_002D8F40(*(int *)(p + 0x2058), *(unsigned char *)(p + 0x5BE2));
}

/* Bytes of a w x h image in a GS pixel format (PSMCT32/24/16, PSMT8, PSMT4). A small
 * switch: MW's compare chain runs in reverse source order. */
int func_00196A20(int w, int h, int psm) {
    switch (psm) {
    case 2:
        return w * h * 2;
    case 1:
        return w * h * 3;
    case 0:
        return w * h * 4;
    case 0x14:
        return (unsigned int)(w * h) >> 1;
    case 0x13:
        return w * h;
    }
    return 0;
}

/* Resets the slot table (16 slots, -1 = free). */
void func_002F9880(char *);
void func_002FA510(void);
void func_002FA7A0(char *);
void func_002FB0B0(void);

extern struct {
    unsigned char on;
    char pad[3];
    int count;
    int slot[16];
} D_01DF8ED0;

int func_002F91E0(char *p) {
    unsigned int i;
    func_002F9880(p);
    func_002FA510();
    func_002FA7A0(p);
    func_002FB0B0();
    D_01DF8ED0.count = 0;
    D_01DF8ED0.on = 1;
    for (i = 0; i < 16; i++) {
        D_01DF8ED0.slot[i] = -1;
    }
    return 0;
}

/* The text helper with the id as a parameter (negative = none). */
void func_0050D9B0(char *p, int id) {
    int x, y;
    unsigned int w;
    if (id < 0) {
        return;
    }
    w = func_003101B0(D_01DFA340, id, 0);
    x = 472 - (w >> 16);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, id, x, y, 0x585858, 0, 0xFFFFF2, 1);
}

/* Acts on the state of the sub-object at +0xDF0 (1 or 2). */
int func_0024E780(char *, int, int);
void func_0024E7B0(char *, int, int);
void func_0033A660(char *, int);

void func_0033A580(char *p) {
    if ((unsigned char)func_0024E780(p + 0xDF0, 0, 1) == 1) {
        func_0024E7B0(p + 0xDF0, 0, 1);
        func_0033A660(p, 0);
    } else if ((unsigned char)func_0024E780(p + 0xDF0, 0, 1) == 2) {
        func_0024E7B0(p + 0xDF0, 0, 1);
        func_0033A660(p, 1);
    }
}

/* Counts down 16 timers; parallel arrays in one struct share MW's induction pointer. */
typedef struct Timers28C {
    char pad0[0x28];
    unsigned char busy[16];
    float timer[16];
    int x78;
    int obj[16];
} Timers28C;

void func_0028C790(Timers28C *, int);

void func_0028C630(Timers28C *p, float dt) {
    int i;
    for (i = 0; i < 16; i++) {
        if (p->obj[i] != 0 && p->busy[i] == 0) {
            if (p->timer[i] <= 0.0f) {
                func_0028C790(p, i);
            } else {
                p->timer[i] -= dt;
            }
        }
    }
}
