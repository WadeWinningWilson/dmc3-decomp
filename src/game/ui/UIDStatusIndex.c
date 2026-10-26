extern char *D_005BE0D8;

extern char D_01DFA340[];

unsigned int func_0030FD40(char *, int, int, int, int, int, int, int);

extern int D_005866B0[];

unsigned int func_004886C0(char *p) {
    int y;
    int s = D_005866B0[*(unsigned char *)(p + 0x2001)];
    if (*(signed char *)(D_005BE0D8 + 3) != 0) {
        y = 0x9A - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 0x134 - *(short *)(D_005BE0D8 + 0x2E);
    }
    return func_0030FD40(D_01DFA340, s, 0x124, y + 0x10, 0x585858, 0x10, 0xFFFFF2, 1);
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005B7130[];

void func_00100450();

void func_0013D240();

void func_0013D6A0();

void func_001AAD30();

void func_002791E0();

char * func_00487A00(p) char *p; {
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
    *(char * *)(p) = D_005B7130;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 15, 135);
    func_00100450(p + 320, (void *)func_002790E0, (void *)func_002791E0, 1536, 5);
    *(char *)(p + 8000) = 0;
    *(char *)(p + 8192) = 2;
    return p;
}

int func_004884F0(p0) char *p0; {
    int v0;
    if ((*(unsigned char *)(p0 + 4) < 2)) {
        return 0;
    } else {
        v0 = *(signed char *)(p0 + 8192);
        return v0;
    }
}

void func_004883F0(void) {}

signed char func_00488520(char *p) { return *(signed char *)(p + 8193); }
