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

void func_0013D240(char *, int);

void func_002791E0(char *, int);

extern char D_005A6F50[];

void func_0013D6A0(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30(char *);

extern signed char D_0056AF20[];

extern signed char D_0056AF21[];

extern signed char D_0056AF22[];

extern signed char D_0056AF23[];

extern char D_005B3120[];

char *func_00410510(char *p) {
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
    *(char **)p = D_005B3120;
    func_00100450(p + 0x3C, (void *)func_001AAD30, (void *)func_0013D240, 0x10, 0x15);
    func_00100450(p + 0x1C0, (void *)func_002790E0, (void *)func_002791E0, 0x600, 6);
    func_00100450(p + 0x25C0, (void *)func_002790E0, (void *)func_002791E0, 0x600, 2);
    *(unsigned char *)(p + 0x3220) = 0;
    *(unsigned char *)(p + 0x32A0) = 0;
    *(unsigned char *)(p + 0x3320) = 0;
    *(int *)(p + 0x190) = 0;
    *(int *)(p + 0x194) = 0;
    *(int *)(p + 0x198) = 0;
    *(unsigned char *)(p + 0x33A4) = 2;
    *(signed char *)(p + 0x33A5) = 0;
    *(signed char *)(p + 0x33A8) = D_0056AF20[*(signed char *)(p + 0x33A5) * 4];
    *(signed char *)(p + 0x33A9) = D_0056AF21[*(signed char *)(p + 0x33A5) * 4] + 1 - *(signed char *)(p + 0x33A8);
    *(signed char *)(p + 0x33A6) = D_0056AF22[*(signed char *)(p + 0x33A5) * 4];
    *(signed char *)(p + 0x33A7) = D_0056AF23[*(signed char *)(p + 0x33A5) * 4] + 1 - *(signed char *)(p + 0x33A6);
    *(unsigned char *)(p + 0x33B5) = 0;
    *(unsigned char *)(p + 0x33C2) = 0;
    *(unsigned char *)(p + 0x33C3) = 0;
    *(signed char *)(p + 0x33C6) = -1;
    *(unsigned char *)(p + 0x33C4) = 0;
    *(unsigned char *)(p + 0x33C5) = 0;
    *(unsigned char *)(p + 0x33C8) = 0;
    *(unsigned char *)(p + 0x33C9) = 0;
    *(unsigned char *)(p + 0x33CA) = 1;
    *(signed char *)(p + 0x33CD) = -1;
    *(unsigned char *)(p + 0x33CB) = 0;
    *(unsigned char *)(p + 0x33CC) = 0;
    *(unsigned char *)(p + 0x33CF) = 0;
    *(unsigned char *)(p + 0x33C1) = 0;
    return p;
}

extern char D_01DFA340[];

unsigned int func_00414A60(char *p, int id) {
    unsigned int func_0030FD40(char *, int, int, int, int, int, int, int);
    return func_0030FD40(D_01DFA340, id, 0x90, 0x90, 0x585858, 0x10, 0xFFFFF2, 1);
}

char *func_00279290(char *);

void func_001A2D70(char *, int, int);

void func_001A2D00(char *, int);

signed char func_00406C60(char *, signed char);

void func_00413630(char *p) {
    func_001A2D70(func_00279290(p + 0x7C0), 2, 0x80606060);
    func_001A2D70(func_00279290(p + 0x7C0), 0, 0x80606060);
    func_001A2D70(func_00279290(p + 0x7C0), 3, 0x80606060);
    func_001A2D70(func_00279290(p + 0x7C0), 1, 0x80606060);
    if (*(unsigned char *)(p + 0x33C4) == 1) func_001A2D70(func_00279290(p + 0x25C0), 0, 0x80606060);
    if (*(unsigned char *)(p + 0x33CB) == 1) func_001A2D70(func_00279290(p + 0x2BC0), 0, 0x80606060);
    switch (*(unsigned char *)(p + 0x33AB)) {
    case 4:
        if (*(signed char *)(*(char **)(p + 0x33A0) + 0x4E) != -1) {
            if (*(unsigned char *)(p + 0x33AA) == func_00406C60(*(char **)(p + 0x33A0), *(signed char *)(*(char **)(p + 0x33A0) + 0x4E)) - *(signed char *)(p + 0x33A6)) {
                func_001A2D70(func_00279290(p + 0x7C0), 2, 0x80A0A0A0);
                if (*(unsigned char *)(p + 0x33C4) == 1) func_001A2D00(func_00279290(p + 0x25C0), 0x80C0C0C0);
            }
        }
        if (*(signed char *)(*(char **)(p + 0x33A0) + 0x4F) != -1) {
            if (*(unsigned char *)(p + 0x33AA) == func_00406C60(*(char **)(p + 0x33A0), *(signed char *)(*(char **)(p + 0x33A0) + 0x4F)) - *(signed char *)(p + 0x33A6)) {
                func_001A2D70(func_00279290(p + 0x7C0), 0, 0x80A0A0A0);
                if (*(unsigned char *)(p + 0x33CB) == 1) func_001A2D00(func_00279290(p + 0x2BC0), 0x80C0C0C0);
            }
        }
        break;
    case 8:
        if (*(signed char *)(*(char **)(p + 0x33A0) + 0x4C) != -1) {
            if (*(unsigned char *)(p + 0x33AA) == func_00406C60(*(char **)(p + 0x33A0), *(signed char *)(*(char **)(p + 0x33A0) + 0x4C)) - *(signed char *)(p + 0x33A8)) {
                func_001A2D70(func_00279290(p + 0x7C0), 3, 0x80A0A0A0);
                if (*(unsigned char *)(p + 0x33C4) == 1) func_001A2D00(func_00279290(p + 0x25C0), 0x80C0C0C0);
            }
        }
        if (*(signed char *)(*(char **)(p + 0x33A0) + 0x4D) != -1) {
            if (*(unsigned char *)(p + 0x33AA) == func_00406C60(*(char **)(p + 0x33A0), *(signed char *)(*(char **)(p + 0x33A0) + 0x4D)) - *(signed char *)(p + 0x33A8)) {
                func_001A2D70(func_00279290(p + 0x7C0), 1, 0x80A0A0A0);
                if (*(unsigned char *)(p + 0x33CB) == 1) func_001A2D00(func_00279290(p + 0x2BC0), 0x80C0C0C0);
            }
        }
        break;
    }
}

int func_00411E50(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = (*(unsigned char *)(p0 + 4) < 3);
    if (tmp0 == 0) {
        return *(signed char *)(p0 + 13220);
    }
    return 0;
}

extern char * D_005BE0D8;

int func_003101B0();

int func_004149D0() {
    int func_0030FD40();
    char *v0;
    int v1;
    int v2;
    int tmp0;
    int tmp1;
    tmp0 = func_003101B0(D_01DFA340, 12551, 16);
    v1 = (256 - ((unsigned int)((unsigned int)tmp0 >> 16) >> 1));
    v0 = D_005BE0D8;
    if (*(signed char *)(v0 + 3) != 0) {
        v2 = (222 - *(short *)(v0 + 46));
    } else {
        v2 = (445 - *(short *)(v0 + 46));
    }
    tmp1 = func_0030FD40(D_01DFA340, 12551, v1, v2, 0x585858, 16, 0xfffff2, 1);
    return tmp1;
}

void func_00411B30(void) {}
