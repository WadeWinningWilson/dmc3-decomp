void func_001AD140(char *);

void func_001AF080(char *, int);

extern char D_006480D0[];

extern char D_00666750[];

void func_004061C0(char *);

int func_004047E0(char *);

int func_001AEB60(char *);

int func_00404730(char *);

void func_00403030(char *);

void func_00403330(char *);

void func_00403720(char *);

void func_00403AC0(char *);

void func_00403E70(char *);

void func_00404180(char *);

void func_00196C40(char *, int);

int func_00402EC0(char *);

void func_00406740(char *);

int func_001AFFE0(char *);

static inline int ok402(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

void func_004028A0(char *p) {
    int func_00404710(char *);
    switch (*(unsigned int *)(p + 4)) {
    case 0:
        func_004061C0(p + 0x5C);
        *(int *)(p + 0x160) = *(unsigned char *)(p + 0x14);
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        *(int *)(p + 8) = 0;
    case 1:
        if ((unsigned char)func_004047E0(p) == 1) {
            *(int *)(p + 4) = *(int *)(p + 4) + 1;
            *(int *)(p + 8) = 0;
        }
        break;
    case 2:
        *(signed char *)(p + 0x16) = *(signed char *)(p + 0x15);
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        *(int *)(p + 8) = 0;
    case 3:
        if ((unsigned char)func_001AEB60(D_00666750) == 0) break;
        if (*(unsigned char *)(p + 0x17) == 0 && (unsigned char)func_00404710(p) == 0) {
            *(int *)(p + 4) = 0xA;
            break;
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
    case 4:
        switch (*(unsigned char *)(p + 0x15)) {
        case 0:
            func_00403030(p);
            break;
        case 3:
            func_00403330(p);
            break;
        case 4:
            func_00403720(p);
            break;
        case 5:
            func_00403AC0(p);
            break;
        case 2:
            func_00403E70(p);
            break;
        case 1:
            func_00404180(p);
            break;
        }
        break;
    case 5:
        if (*(unsigned char *)(p + 0x14) == 0) {
            if (*(unsigned char *)(p + 0x15) != *(unsigned char *)(p + 0x16)) {
                *(signed char *)(p + 0x170) = *(signed char *)(p + 0x16);
                *(int *)(p + 4) = *(int *)(p + 4) + 1;
            } else if (*(unsigned char *)(p + 0x15) == 0) {
                *(int *)(p + 4) = 7;
            } else {
                *(int *)(p + 4) = *(unsigned int *)(p + 4) + 1;
                *(unsigned char *)(p + 0x16) = 0;
            }
        } else {
            *(int *)(p + 4) = 7;
        }
        break;
    case 6:
        if ((unsigned char)func_001AEB60(D_00666750) == 0) break;
        if (*(unsigned char *)(p + 0x17) == 1 && (unsigned char)func_00404730(p) == 0) {
            *(int *)(p + 4) = 0xA;
            break;
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
    case 7:
        switch (*(unsigned char *)(p + 0x15)) {
        case 0:
            func_00403030(p);
            break;
        case 3:
            func_00403330(p);
            break;
        case 4:
            func_00403720(p);
            break;
        case 5:
            func_00403AC0(p);
            break;
        case 2:
            func_00403E70(p);
            break;
        case 1:
            func_00404180(p);
            break;
        }
        break;
    case 8:
        if (*(unsigned char *)(p + 0x14) == 0) {
            if (*(unsigned char *)(p + 0x15) != *(unsigned char *)(p + 0x16)) {
                *(signed char *)(p + 0x15) = *(signed char *)(p + 0x16);
                *(int *)(p + 4) = 9;
            } else if (*(unsigned char *)(p + 0x15) == 0) {
                *(int *)(p + 4) = 0xA;
            } else {
                *(unsigned char *)(p + 0x15) = 0;
                *(int *)(p + 4) = 9;
            }
        } else {
            *(int *)(p + 4) = 0xA;
        }
        break;
    case 9:
        *(int *)(p + 0x54) = (*(int *)(p + 0x54) + 1) & 1;
        *(int *)(p + 4) = 2;
        break;
    case 10:
        if (*(char **)(p + 0x44) != 0) {
            if (!(unsigned char)ok402(*(unsigned char **)(p + 0x44))) break;
        }
        if (*(char **)(p + 0x48) != 0) {
            if (!(unsigned char)ok402(*(unsigned char **)(p + 0x48))) break;
        }
        if (*(char **)(p + 0x4C) != 0) {
            if (!(unsigned char)ok402(*(unsigned char **)(p + 0x4C))) break;
        }
        if (*(char **)(p + 0x50) != 0) {
            if (!(unsigned char)ok402(*(unsigned char **)(p + 0x50))) break;
        }
        if (*(char **)(p + 0x164) != 0) func_001AD140(*(char **)(p + 0x164));
        if (*(char **)(p + 0x168) != 0) func_001AD140(*(char **)(p + 0x168));
        if (*(char **)(p + 0x16C) != 0) func_001AD140(*(char **)(p + 0x16C));
        if (*(char **)(p + 0x174) != 0) func_001AD140(*(char **)(p + 0x174));
        if (*(char **)(p + 0x178) != 0) func_001AD140(*(char **)(p + 0x178));
        if (*(char **)(p + 0x17C) != 0) func_001AD140(*(char **)(p + 0x17C));
        if (*(char **)(p + 0x180) != 0) func_001AD140(*(char **)(p + 0x180));
        if (*(char **)(p + 0x184) != 0) func_001AD140(*(char **)(p + 0x184));
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        break;
    case 11: case 12:
        *(int *)(p + 4) = *(unsigned int *)(p + 4) + 1;
        break;
    case 13:
        if (*(int *)(p + 0x44) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x44));
            *(int *)(p + 0x44) = 0;
        }
        if (*(int *)(p + 0x48) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x48));
            *(int *)(p + 0x48) = 0;
        }
        if (*(int *)(p + 0x4C) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x4C));
            *(int *)(p + 0x4C) = 0;
        }
        if (*(int *)(p + 0x50) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x50));
            *(int *)(p + 0x50) = 0;
        }
        if (*(int *)(p + 0x58) != 0) {
            func_00196C40(D_006480D0, *(int *)(p + 0x58));
            *(int *)(p + 0x58) = 0;
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
    case 14:
        if ((unsigned char)func_00402EC0(p) == 1) *(int *)(p + 4) = *(int *)(p + 4) + 1;
        else *(int *)(p + 4) = 0x10;
        func_00406740(p + 0x5C);
        break;
    case 15:
        if ((unsigned char)func_001AFFE0(p + 0x18) != 1) break;
        if ((unsigned char)func_001AEB60(D_00666750) != 1) break;
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        break;
    case 16:
        break;
    default:
        *(int *)(p + 4) = 0xA;
        break;
    }
}

int func_00402850(p0, p1, p2) char *p0; int p1; int p2; {
    int func_00404710();
    int v0;
    int v1;
    v0 = 1;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    *(char *)(p0 + 20) = p1;
    *(char *)(p0 + 21) = p1;
    *(char *)(p0 + 368) = v0;
    *(char *)(p0 + 23) = p2;
    if (*(unsigned char *)(p0 + 23) == v0) {
        v1 = func_00404710(p0, p1, p2, v0);
    }
    return v1;
}

int func_00403020(p0) char *p0; {
    return (*(int *)(p0 + 4) == 16);
}
