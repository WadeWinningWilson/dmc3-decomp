extern char D_01DFABA0[];

extern char D_006663C0[];

unsigned short func_001AE360(char *, int);

void func_003303F0(char *, int, int, int, int);

unsigned short func_001AE3B0(char *p, int k);

static inline int has500(char *p) {
    return (*(unsigned char *)(p + 0x13EB) & (1 << *(signed char *)(p + 0x13E9))) != 0;
}

int func_005008B0(char *p) {
    unsigned short k;
    signed char a;
    signed char b;
    int r;
    k = func_001AE3B0(D_006663C0, 0) | func_001AE360(D_006663C0, 0);
    a = *(signed char *)(p + 0x13E9);
    b = *(signed char *)(p + 0x13EA);
    if (func_001AE360(D_006663C0, 0) & 0x40) {
        r = 1;
        if (*(unsigned char *)(p + 0x13EC) == 1) return *(signed char *)(p + 0x13EA) == 0 ? r : 2;
        return r;
    }
    if (func_001AE360(D_006663C0, 0) & 0x10) {
        if (*(unsigned char *)(p + 0x13EC) == 1) *(signed char *)(p + 0x13EA) = 1;
        return 2;
    }
    if (k & 0x4000) {
        if (*(unsigned char *)(p + 0x13EB) != 0) {
            do {
                *(signed char *)(p + 0x13E9) = (*(signed char *)(p + 0x13E9) + 1) & 0xF;
            } while (has500(p) ^ 1);
        }
    } else if (k & 0x1000) {
        if (*(unsigned char *)(p + 0x13EB) != 0) {
            do {
                *(signed char *)(p + 0x13E9) = (*(signed char *)(p + 0x13E9) - 1) & 0xF;
            } while (has500(p) ^ 1);
        }
    } else if (k & 0xA000) {
        if (*(unsigned char *)(p + 0x13EC) == 1) *(signed char *)(p + 0x13EA) = (*(signed char *)(p + 0x13EA) + 1) & 1;
    }
    if (a != *(signed char *)(p + 0x13E9) || b != *(signed char *)(p + 0x13EA)) func_003303F0(D_01DFABA0, 0, 2, 0, 0);
    return 0;
}

extern char D_006011B4[];

extern char D_00631538[];

extern char D_01CAFF0C[];

void func_0013E020(char *, int, int);

void func_0013E040(char *, int, int);

int func_005008B0(char *p);

void func_005010C0(char *, int);

int func_00501140(char *, int);

void func_005011B0(char *, int);

void func_00501170(char *, int, int);

int func_005011F0(char *);

void func_00323FB0(char *);

void func_004FFAD0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_005010C0(p, 0);
        *(unsigned char *)(p + 5) = 1;
        break;
    case 1:
        if ((signed char)func_00501140(p, 0) != 1) break;
        if (*(unsigned char *)(p + 0x13E5) != 0) {
            func_005010C0(p, 1);
            *(unsigned char *)(p + 5) = 2;
            func_003303F0(D_01DFABA0, 0, 8, 0, 0);
            func_0013E020(D_006011B4, 0x1E, 0x32);
            func_0013E020(D_00631538, 0x1E, 0x32);
        } else {
            func_005010C0(p, 5);
            *(unsigned char *)(p + 5) = 5;
        }
        break;
    case 2:
        if ((signed char)func_00501140(p, 1) != 1) break;
        func_005010C0(p, 3);
        func_005010C0(p, 2);
        *(unsigned char *)(p + 0x13E9) = 0;
        *(unsigned char *)(p + 0x13EA) = 1;
        *(unsigned char *)(p + 5) = 3;
        break;
    case 3:
        if ((signed char)func_00501140(p, 3) != 1) break;
        if ((signed char)func_00501140(p, 2) != 1) break;
        *(unsigned char *)(p + 0x13EB) = 0;
        *(unsigned char *)(p + 0x13EC) = 1;
        *(unsigned char *)(p + 0x13E9) = 0;
        *(unsigned char *)(p + 0x13EA) = 1;
        *(unsigned char *)(p + 5) = 4;
        break;
    case 4:
        switch ((unsigned char)func_005008B0(p)) {
        case 0:
            break;
        case 2:
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            func_005010C0(p, 5);
            func_005011B0(p, 2);
            func_005011B0(p, 3);
            func_00501170(p, 1, 2);
            func_0013E040(D_006011B4, 0x14, 0);
            func_0013E040(D_00631538, 0x14, 0);
            *(unsigned char *)(p + 5) = 5;
            break;
        case 1:
            if (*(unsigned char *)(p + 0x13E6) != 0) (*(unsigned char *)(p + 0x13E6))--;
            func_00501170(p, 0, 0);
            func_00501170(p, 1, 0);
            func_00501170(p, 2, 0);
            func_00501170(p, 3, 0);
            *(unsigned char *)(p + 0x13E4) = 1;
            *(unsigned char *)(p + 5) = 8;
            func_003303F0(D_01DFABA0, 0, 0x1C, 0, 0);
            func_0013E040(D_006011B4, 0x14, 0);
            func_0013E040(D_00631538, 0x14, 0);
            break;
        }
        break;
    case 5:
        if ((signed char)func_00501140(p, 5) != 1) break;
        *(unsigned char *)(p + 0x13EB) = 7;
        *(unsigned char *)(p + 0x13EC) = 0;
        *(unsigned char *)(p + 0x13EA) = 0;
        *(unsigned char *)(p + 0x13E9) = 0;
        *(unsigned char *)(p + 5) = 6;
        func_00323FB0(*(char **)(*(char **)(*(char **)D_01CAFF0C + 4) + 0xC));
        break;
    case 6:
        switch ((unsigned char)func_005008B0(p)) {
        case 0:
            break;
        case 2:
            func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
            break;
        case 1:
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
            func_00501170(p, 5, 0);
            *(unsigned char *)(p + 0x13EB) = 0;
            *(unsigned char *)(p + 0x13EC) = 1;
            *(unsigned char *)(p + 0x13EA) = 1;
            *(unsigned char *)(p + 5) = 7;
            break;
        }
        break;
    case 7:
        switch ((unsigned char)func_005008B0(p)) {
        case 0:
            break;
        case 2:
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            func_00501170(p, 5, 1);
            *(unsigned char *)(p + 0x13EB) = 7;
            *(unsigned char *)(p + 0x13EC) = 0;
            *(unsigned char *)(p + 5) = 6;
            break;
        case 1:
            func_003303F0(D_01DFABA0, 0, 0x19, 0, 0);
            switch (*(signed char *)(p + 0x13E9)) {
            case 0:
                *(unsigned char *)(p + 0x13E4) = 2;
                break;
            case 1:
                *(unsigned char *)(p + 0x13E4) = 3;
                break;
            case 2:
                *(unsigned char *)(p + 0x13E4) = 4;
                break;
            }
            if (*(unsigned char *)(p + 0x13E5) != 0) func_005011B0(p, 1);
            func_00501170(p, 0, 0);
            func_00501170(p, 5, 0);
            *(unsigned char *)(p + 5) = 8;
            break;
        }
        break;
    case 8:
        if ((unsigned char)func_005011F0(p) == 1) {
            *(unsigned char *)(p + 4) = 3;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005BB0B0[];

void func_00100450();

void func_0013D240();

void func_0013D6A0();

void func_001AAD30();

void func_002791E0();

char * func_004FF1F0(p) char *p; {
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
    *(char * *)(p) = D_005BB0B0;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 5, 135);
    func_00100450(p + 192, (void *)func_002790E0, (void *)func_002791E0, 1536, 3);
    *(char *)(p + 4832) = 0;
    *(char *)(p + 4960) = 0;
    *(char *)(p + 5101) = 0;
    *(char *)(p + 5102) = 0;
    *(char *)(p + 5103) = -1;
    *(char *)(p + 5107) = 0;
    *(char *)(p + 5108) = 0;
    *(char *)(p + 5109) = -1;
    *(char *)(p + 5113) = 0;
    *(char *)(p + 5114) = 0;
    *(char *)(p + 5115) = -1;
    *(char *)(p + 5119) = 0;
    *(char *)(p + 5120) = 0;
    *(char *)(p + 5121) = -1;
    *(char *)(p + 5125) = 0;
    *(char *)(p + 5126) = 0;
    *(char *)(p + 5127) = -1;
    *(char *)(p + 5131) = 0;
    *(char *)(p + 5132) = 0;
    *(char *)(p + 5133) = -1;
    *(int *)(p + 140) = 0;
    *(int *)(p + 144) = 0;
    *(int *)(p + 5088) = 0;
    *(char *)(p + 5092) = 0;
    return p;
}

int func_001AD140();

int func_004FFA80(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(int *)(p0 + 5088);
    if (v0 != 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

int func_004FFAB0(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = 6;
    if (*(unsigned char *)(p0 + 4) == tmp0) {
        return *(signed char *)(p0 + 5092);
    }
    return 0;
}
