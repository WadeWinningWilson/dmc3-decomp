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

extern char D_01CAFF0C[];

extern char D_01DFABA0[];

extern float D_005BDBA8;

extern float D_005BDBAC;

extern unsigned char D_01DF5DBC[];

extern unsigned char D_01DF5DC4[];

extern float D_01DF5DB8[];

extern float D_01DF5DC0[];

void func_00330C50(char *, int, int, int, int);

void func_00377100(char *, unsigned char);

static inline unsigned char is1_46E(char *g) {
    return *(unsigned char *)(g + 0x28AC) == 1;
}

int func_0046EC00(char *p, unsigned char kind, int a, char *o, unsigned char c, float x, float y) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    if (is1_46E(g) == 1) return 0;
    if (*(unsigned char *)(g + 0x284A) == 0x29) return 0;
    if (*(unsigned char *)(p + 1) == 0) {
        *(unsigned char *)p = kind;
        *(unsigned char *)(p + 1) = 1;
        *(int *)(p + 4) = 0;
        *(unsigned char *)(p + 0x23) = 0;
        *(float *)(p + 8) = D_005BDBA8;
        if (*(unsigned char *)p == 1) {
            *(float *)(p + 8) = *(float *)(p + 8) * 0.7f;
        }
        *(float *)(p + 0xC) = x;
        *(float *)(p + 0x10) = y;
        *(int *)(p + 0x14) = 0;
        *(int *)(p + 0x18) = a;
        *(unsigned char *)(p + 0x20) = 1;
        *(unsigned char *)(p + 0x21) = 0;
        *(unsigned char *)(p + 0x22) = c;
        if (*(unsigned char *)p == 1) {
            func_00330C50(D_01DFABA0, 0x46, *(int *)(p + 0x18), 0x1D, 0);
            if (o != 0) {
                *(char **)(p + 0x1C) = o;
                func_00377100(*(char **)(p + 0x1C), 1);
            }
        } else {
            *(char **)(p + 0x1C) = 0;
        }
        return 1;
    }
    if (kind == *(unsigned char *)p) return 0;
    D_01DF5DBC[0] = 1;
    D_01DF5DC4[0] = 1;
    D_01DF5DB8[0] = 1.0f;
    D_01DF5DC0[0] = 1.0f;
    *(unsigned char *)p = kind;
    *(unsigned char *)(p + 1) = 3;
    *(float *)(p + 4) = D_005BDBAC;
    *(unsigned char *)(p + 0x23) = 0;
    *(float *)(p + 8) = D_005BDBA8;
    *(int *)(p + 0xC) = 0;
    *(int *)(p + 0x10) = 0;
    *(int *)(p + 0x14) = 0;
    *(int *)(p + 0x18) = a;
    *(unsigned char *)(p + 0x20) = 1;
    *(unsigned char *)(p + 0x21) = 1;
    *(unsigned char *)(p + 0x22) = 0;
    return 0;
}

void func_0046EBE0(char *p0) {
    *(char *)(p0 + 1) = 0;
    *(int *)(p0 + 4) = 0;
    *(char *)(p0 + 35) = 0;
    *(int *)(p0 + 12) = 0;
    *(char *)(p0 + 32) = 0;
    *(int *)(p0 + 28) = 0;
}
