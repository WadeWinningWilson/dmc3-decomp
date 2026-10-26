extern unsigned int D_01DF8810[];

extern unsigned int D_01DF7E50[];

void func_00207A90(unsigned int *);

void func_00451730(char *p, signed char k);

int func_004514E0(char *);

void func_004516F0(char *);

static inline unsigned int mt_450(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return y;
}

static inline void col_450(unsigned char *o, unsigned char r, unsigned char g, unsigned char b) {
    o[0x9C] = r;
    o[0x9D] = g;
    o[0x9E] = b;
    o[0x9B] = 2;
}

void func_00450DC0(char *p) {
    int i;
    int n;
    unsigned char r;
    char *o;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        for (i = 0; i < 8; i++) {
            o = *(char **)(p + i * 4 + 0x320);
            if (o) {
                o[0x7A3] = 1;
                o[0x7A4] = 1;
                col_450(*(unsigned char **)(p + i * 4 + 0x320), 0x80, 0x80, 0x80);
            }
        }
        *(unsigned char *)(p + 0xEA) = mt_450() & 7;
        o = ((char **)(p + 0x320))[*(unsigned char *)(p + 0xEA)];
        if (o) {
            o[0x7A3] = 0;
            o[0x7A4] = 1;
            col_450(((unsigned char **)(p + 0x320))[*(unsigned char *)(p + 0xEA)], 0xAF, 0xFF, 0xDF);
        }
        func_00451730(p, *(signed char *)(p + 0xEA));
        (*(unsigned char *)(p + 5))++;
        break;
    case 1:
        if ((unsigned char)func_004514E0(p) == 1) break;
        func_004516F0(p);
        *(float *)(p + 0x110) = *(float *)(p + 0x110) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x110) < 0.0f) {
            o = ((char **)(p + 0x320))[*(unsigned char *)(p + 0xEA)];
            if (o) {
                o[0x7A3] = 1;
                o[0x7A4] = 1;
                col_450(((unsigned char **)(p + 0x320))[*(unsigned char *)(p + 0xEA)], 0x80, 0x80, 0x80);
            }
            n = 0;
            for (i = 0; i < 8; i++) {
                if (*(unsigned char *)(p + i + 0xDD) == 0) n++;
            }
            if (n > 3) n--;
            r = mt_450() % n;
            if (r != *(unsigned char *)(p + 0xEA)) {
                if (*(unsigned char *)((char *)r + (int)p + 0xDD) == 0) {
                    *(unsigned char *)(p + 0xEA) = r;
                } else {
                    for (i = 0; i < 8; i++) {
                        if (*(unsigned char *)(p + i + 0xDD) == 0) *(unsigned char *)(p + 0xEA) = i;
                    }
                }
            } else {
                for (i = 0; i < 8; i++) {
                    if (*(unsigned char *)(p + i + 0xDD) == 0) *(unsigned char *)(p + 0xEA) = i;
                }
            }
            o = ((char **)(p + 0x320))[*(unsigned char *)(p + 0xEA)];
            if (o) {
                o[0x7A3] = 0;
                o[0x7A4] = 1;
                col_450(((unsigned char **)(p + 0x320))[*(unsigned char *)(p + 0xEA)], 0xAF, 0xFF, 0xDF);
            }
            func_00451730(p, *(signed char *)(p + 0xEA));
            *(float *)(p + 0x110) = 420.0f;
        }
        break;
    }
}

extern void func_004513B0();

void func_00451B90(char *p) { func_004513B0(p + -64); }

extern void func_00451AD0();

void func_00451BB0(char *p) { func_00451AD0(p + -64); }

void func_00451BC0(char *p) { func_00451AD0(p + -160); }

extern void func_00451A70();

void func_00451BD0(char *p) { func_00451A70(p + -208); }

extern void func_00451A30();

void func_00451BE0(char *p) { func_00451A30(p + -208); }

void func_00451BF0(char *p) { func_00451AD0(p + -208); }

void func_00451890(char *p0) {
    *(char *)(p0 + 235) = 1;
    *(char *)(p0 + 5) = 0;
}
