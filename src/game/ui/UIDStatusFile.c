/* Resets an entry (index from the global's +14 byte): a VU0 vector copy, then w = 1. */
extern char *D_005BE0D8;

/* Draw text 0x3106 / 0x3107 centred, its y depending on the layout flag. */
extern char D_01DFA340[];

unsigned int func_003101B0(char *, int, int);

void func_0041D570(void) {
    void func_0030FD40(char *, int, int, int, int, int, int, int);
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

void func_00100580(char *);

void func_001003E0(char *, void *, int, int);

extern char D_005B37F0[];

extern char D_005A6F50[];

char *func_0041C8F0(char *p, short flag) {
    void func_0013D240(char *, int);
    void func_002791E0(char *, int);
    if (p != 0) {
        *(char **)p = D_005B37F0;
        func_001003E0(p + 320, (void *)func_002791E0, 1536, 5);
        func_001003E0(p + 60, (void *)func_0013D240, 16, 16);
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

extern char *D_005BE0D8;

extern char D_01DFA340[];

unsigned int func_0041D510(char *p, int a) {
    unsigned int func_0030FD40(char *, int, int, int, int, int, int, int);
    int y;
    if (*(signed char *)(D_005BE0D8 + 3) != 0) {
        y = 0x9A - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 0x134 - *(short *)(D_005BE0D8 + 0x2E);
    }
    return func_0030FD40(D_01DFA340, a, 0x124, y + 0x10, 0x585858, 0x10, 0xFFFFF2, 1);
}

char * func_002790E0();

void func_00100450();

void func_0013D6A0();

void func_001AAD30();

char * func_0041C810(p) char *p; {
    void func_0013D240();
    void func_002791E0();
    *(char * *)(p) = D_005A6F50;
    func_0013D6A0(p + 36);
    *(int *)(p + 32) = 0;
    *(int *)(p + 28) = 0;
    *(char *)(p + 7) = 0;
    *(char *)(p + 6) = 0;
    *(char *)(p + 5) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 24) = 0;
    *(int *)(p + 8) = 0;
    *(char *)(p + 52) = -1;
    *(char *)(p + 53) = 0;
    *(char *)(p + 54) = 0;
    *(int *)(p + 12) = 135;
    *(int *)(p + 16) = 1065353216;
    *(int *)(p + 20) = 1065353216;
    *(char * *)(p) = D_005B37F0;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 16, 135);
    func_00100450(p + 320, (void *)func_002790E0, (void *)func_002791E0, 1536, 5);
    *(char *)(p + 8000) = 0;
    *(char *)(p + 8196) = 2;
    return p;
}

int func_0041D3C0(p0) char *p0; {
    int v0;
    if ((*(unsigned char *)(p0 + 4) < 2)) {
        return 0;
    } else {
        v0 = *(signed char *)(p0 + 8196);
        return v0;
    }
}

void func_0041D2C0(void) {}

signed char func_0041D3F0(char *p) { return *(signed char *)(p + 8197); }
