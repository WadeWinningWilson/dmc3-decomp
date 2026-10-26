extern char D_00666710[];

extern char D_01DFABA0[];

extern char D_01DFA340[];

extern char D_006663C0[];

void func_0030EA90(char *, int);

unsigned short func_001AE360(char *, int);

void func_003303F0(char *, int, int, int, int);

unsigned short func_001AE1E0(char *, int);

unsigned short func_001AE310(char *, int);

extern signed char D_00666717[];

signed char func_0034C1C0(int, int, int);

signed char func_0034C1E0(int, int, int);

void func_001AE550(char *, int);

void func_003B7720(char *);

void func_003B7490(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(signed char *)(p + 0x1303) = D_00666717[0];
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        if (func_001AE310(D_006663C0, 0) & 0x2000) {
            if (*(short *)(p + 0x130C) < 100) {
                *(short *)(p + 0x130C) = *(short *)(p + 0x130C) + 1;
            }
        } else {
            *(short *)(p + 0x130C) = 0;
        }
        if (func_001AE310(D_006663C0, 0) & 0x8000) {
            if (*(short *)(p + 0x130E) < 100) {
                *(short *)(p + 0x130E) = *(short *)(p + 0x130E) + 1;
            }
        } else {
            *(short *)(p + 0x130E) = 0;
        }
        if ((func_001AE360(D_006663C0, 0) & 0x2000) || *(short *)(p + 0x130C) > 10) {
            D_00666717[0] = func_0034C1C0(D_00666717[0], 0x63, 1);
        }
        if ((func_001AE360(D_006663C0, 0) & 0x8000) || *(short *)(p + 0x130E) > 10) {
            D_00666717[0] = func_0034C1E0(D_00666717[0], -0x63, 1);
        }
        if (func_001AE1E0(D_006663C0, 0) & 0x40) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 0x1300) = 1;
            func_003303F0(D_01DFABA0, 0, 4, 0x40, 0);
        }
        if (func_001AE1E0(D_006663C0, 0) & 0x10) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 0x1300) = 1;
            D_00666717[0] = *(signed char *)(p + 0x1303);
            func_003303F0(D_01DFABA0, 0, 3, 0x40, 0);
        }
        if (func_001AE1E0(D_006663C0, 0) & 0x100) {
            func_001AE550(D_00666710, 2);
            func_003303F0(D_01DFABA0, 0, 4, 0x40, 0);
        }
        break;
    }
    func_003B7720(p);
    func_0030EA90(D_01DFA340, 0x2EEA);
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005AFE00[];

void func_00100450();

void func_0013D6A0();

void func_002791E0();

char * func_003B7AD0(p) char *p; {
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
    *(char * *)(p) = D_005AFE00;
    func_00100450(p + 64, (void *)func_002790E0, (void *)func_002791E0, 1536, 2, 135);
    *(char *)(p + 3136) = 0;
    *(char *)(p + 3328) = 0;
    *(char *)(p + 3329) = -1;
    *(char *)(p + 3330) = -1;
    *(char *)(p + 3332) = 0;
    *(char *)(p + 3331) = 0;
    *(short *)(p + 3340) = 0;
    *(short *)(p + 3338) = 0;
    *(short *)(p + 3336) = 0;
    *(short *)(p + 3334) = 0;
    return p;
}
