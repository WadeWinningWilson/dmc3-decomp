extern char D_01CAFF0C[];

void func_0047CCF0(char *, unsigned char);

void func_0047D2A0(char *, unsigned char);

static inline int flg_47C(short s) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    if (s < 32) {
        unsigned int *w = (unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18);
        return (*w & (1 << (s & 31))) != 0;
    } else {
        int t = s - 32;
        unsigned int *w = (unsigned int *)((char *)(t / 32 * 4) + (int)g + 0x44);
        return (*w & (1 << (t & 31))) != 0;
    }
}

void func_0047CA40(char *p) {
    int i;
    if (*(short *)(p + 0xDE) != -1 && flg_47C(*(short *)(p + 0xDE))) {
        *(unsigned char *)(p + 0xDD) = 1;
    }
    for (i = 0; i < 15; i++) {
        func_0047CCF0(p, i);
        func_0047D2A0(p, i);
    }
    *(unsigned char *)(p + 0x45) = 6;
    *(unsigned int *)(p + 0xC) |= 0x20;
}

extern void func_0047D540();

void func_0047D600(char *p) { func_0047D540(p + -64); }

void func_0047D610(char *p) { func_0047D540(p + -160); }

extern void func_0047D4D0();

void func_0047D640(char *p) { func_0047D4D0(p + -208); }

void func_0047D650(char *p) { func_0047D540(p + -208); }

void func_0047D510(char *p) { *(char *)(p + 220) = 0; }

void func_0047D530(char *p, short v) { *(short *)(p + 222) = v; }
