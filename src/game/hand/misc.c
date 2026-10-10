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
