/* Resets an entry (index from the global's +14 byte): a VU0 vector copy, then w = 1. */
extern char *D_005BE0D8;

/* Draw text 0x3106 / 0x3107 centred, its y depending on the layout flag. */
extern char D_01DFA340[];

unsigned int func_003101B0(char *, int, int);

void func_00504F40(void) {
    void func_0030FD40(char *, int, int, int, int, int, int, int);
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

void func_00100580(char *);

void func_001003E0(char *, void *, int, int);

void func_0013D240(char *, int);

void func_002791E0(char *, int);

extern char D_005BB140[];

extern char D_005A6F50[];

char *func_00504110(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005BB140;
        if (p + 6592 != 0) {
            func_0013D240(p + 6680, -1);
            func_0013D240(p + 6664, -1);
        }
        func_002791E0(p + 5056, -1);
        func_002791E0(p + 3200, -1);
        func_002791E0(p + 1664, -1);
        func_001003E0(p + 128, (void *)func_002791E0, 1536, 1);
        if (p != 0) {
            *(char **)p = D_005A6F50;
            func_0013D240(p + 36, -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_0013D6A0(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

char *func_00504000(char *p) {
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005BB140;
    func_00100450(p + 0x80, (void *)func_002790E0, (void *)func_002791E0, 0x600, 1);
    func_002790E0(p + 0x680);
    func_002790E0(p + 0xC80);
    *(unsigned char *)(p + 0x1280) = 0;
    *(unsigned char *)(p + 0x1300) = 0;
    func_002790E0(p + 0x13C0);
    {
        char *q = p + 0x19C0;
        func_0013D6A0(q + 0x48);
        func_0013D6A0(q + 0x58);
        *(short *)(q + 0x68) = 1;
        *(short *)(q + 0x6A) = 0;
    }
    *(unsigned char *)(p + 0x1380) = 2;
    *(int *)(p + 0x38) = 0;
    *(int *)(p + 0x3C) = 0;
    *(int *)(p + 0x40) = 0;
    return p;
}

int func_00504EC0(p0) char *p0; {
    int v0;
    int tmp0;
    int tmp1;
    tmp0 = *(unsigned char *)(p0 + 4);
    tmp1 = 4;
    if (tmp0 != tmp1) {
        return 0;
    } else {
        v0 = *(signed char *)(p0 + 4992);
        return v0;
    }
}

extern char D_01DFA340[];

int func_00504EF0(p0) char *p0; {
    int func_0030FD40();
    int v0;
    int v1;
    v0 = *(int *)(p0 + 5000);
    if (v0 >= 0) {
        v1 = func_0030FD40(D_01DFA340, v0, 44, 82, 0x585858, 16, 0xfffff2, 0);
    }
    return v1;
}

void func_00504D90(void) {}
