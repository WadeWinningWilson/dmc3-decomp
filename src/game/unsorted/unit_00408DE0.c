void func_001AD140(char *);

extern char D_00666750[];

void func_0040A0C0(char *);

void func_0040A460(char *);

void func_0040A9E0(char *);

void func_0040AC80(char *);

void func_001AF080(char *, int);

void func_00409F00(char *p) {
    switch (*(int *)(p + 8)) {
    case 0:
        *(unsigned char *)(p + 0x19C) = 0;
        *(unsigned char *)(p + 0x19D) = 0;
        *(unsigned char *)(p + 0x19E) = 0;
        *(int *)(p + 0x1A0) = 0;
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
    case 1:
        func_0040A0C0(p);
        break;
    case 2:
        func_0040A460(p);
        break;
    case 3:
        func_0040A9E0(p);
        break;
    case 4:
        func_0040AC80(p);
        break;
    case 10:
    default:
        if (*(char **)(p + 0x17C) != 0) {
            func_001AD140(*(char **)(p + 0x17C));
            *(int *)(p + 0x17C) = 0;
        }
        if (*(char **)(p + 0x180) != 0) {
            func_001AD140(*(char **)(p + 0x180));
            *(int *)(p + 0x180) = 0;
        }
        if (*(char **)(p + 0x188) != 0) {
            func_001AD140(*(char **)(p + 0x188));
            *(int *)(p + 0x188) = 0;
        }
        if (*(char **)(p + 0x160) != 0) {
            func_001AD140(*(char **)(p + 0x160));
            *(int *)(p + 0x160) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 11:
    case 12:
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 13:
        if (*(int *)(p + 0x14) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (*(int *)(p + 0x18) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x18));
            *(int *)(p + 0x18) = 0;
        }
        if (*(int *)(p + 0x1C) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x1C));
            *(int *)(p + 0x1C) = 0;
        }
        *(int *)(p + 4) = 4;
        *(int *)(p + 8) = 0;
        *(int *)(p + 0xC) = 0;
        break;
    }
}

int func_0040B300(char *p, unsigned char d) {
    int v = *(signed char *)(p + 0x11);
    switch (*(unsigned char *)(p + 0x11)) {
    case 1: case 2: case 3: case 4:
        switch (d) {
        case 1: case 2:
            break;
        case 3:
            v = (unsigned char)(*(unsigned char *)(p + 0x11) - 1);
            if (v <= 0) v = 4;
            break;
        case 4:
            v = (unsigned char)(*(unsigned char *)(p + 0x11) + 1);
            if (v >= 5) v = 1;
            break;
        }
        break;
    case 0: case 5:
        break;
    }
    return v;
}

int func_001AFB90(char *, int, int, int);

unsigned char func_0040B070(char *p, unsigned char k, int c) {
    unsigned char r = 1;
    switch (k) {
    case 0:
        if (*(int *)(p + 0x14)) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (*(int *)(p + 0x18)) {
            func_001AF080(D_00666750, *(int *)(p + 0x18));
            *(int *)(p + 0x18) = 0;
        }
        if (c == 0) {
            *(int *)(p + 0x14) = func_001AFB90(D_00666750, 0x332, 0, 8);
            if (*(int *)(p + 0x14) == 0) r = 0;
            *(int *)(p + 0x18) = func_001AFB90(D_00666750, 0x334, 0, 8);
            if (*(int *)(p + 0x18) == 0) r = 0;
        }
        break;
    case 1:
        if (*(int *)(p + 0x14)) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (c == 0) {
            *(int *)(p + 0x14) = func_001AFB90(D_00666750, 0x33E, 0, 8);
            if (*(int *)(p + 0x14) == 0) r = 0;
        }
        break;
    case 2:
        if (*(int *)(p + 0x14)) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (c == 0) {
            *(int *)(p + 0x14) = func_001AFB90(D_00666750, 0x1770, 0, 8);
            if (*(int *)(p + 0x14) == 0) r = 0;
        }
        break;
    case 3:
        if (*(int *)(p + 0x14)) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (c == 0) {
            *(int *)(p + 0x14) = func_001AFB90(D_00666750, 0x774, 0, 8);
            if (*(int *)(p + 0x14) == 0) r = 0;
        }
        break;
    case 4:
        if (*(int *)(p + 0x14)) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (c == 0) {
            *(int *)(p + 0x1C) = func_001AFB90(D_00666750, 0x334, 0, 8);
            if (*(int *)(p + 0x1C) == 0) r = 0;
            *(int *)(p + 0x14) = func_001AFB90(D_00666750, 0x366, 0, 8);
            if (*(int *)(p + 0x14) == 0) r = 0;
        }
        break;
    case 5:
        break;
    default:
        r = 0;
        break;
    }
    return r;
}

void func_00409F00(char *p);

void func_004064E0(char *);

int func_0040B2E0(char *);

void func_00409270(char *);

void func_004095E0(char *);

void func_00409980(char *);

void func_00409C00(char *);

void func_00406A50(char *);

static inline int ok408(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

void func_00408E50(char *p) {
    *(int *)(p + 0x158) = 0;
    switch (*(unsigned int *)(p + 4)) {
    case 0:
        func_004064E0(p + 0x4C);
        *(int *)(p + 0x150) = *(unsigned char *)(p + 0x10);
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
    case 1:
        *(signed char *)(p + 0x12) = *(signed char *)(p + 0x11);
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        *(int *)(p + 8) = 0;
    case 2:
        if ((unsigned char)func_0040B2E0(p) == 1) *(int *)(p + 4) = *(int *)(p + 4) + 1;
        else *(int *)(p + 4) = 7;
        break;
    case 3:
        switch (*(unsigned char *)(p + 0x11)) {
        case 0:
            func_00409270(p);
            break;
        case 1:
            func_004095E0(p);
            break;
        case 2:
            func_00409980(p);
            break;
        case 3:
            func_00409C00(p);
            break;
        case 4:
            func_00409F00(p);
            break;
        }
        break;
    case 4:
        if (*(unsigned char *)(p + 0x170) == 1) {
            *(int *)(p + 4) = 6;
            break;
        }
        if (*(unsigned char *)(p + 0x10) == 0) {
            if (*(unsigned char *)(p + 0x11) != *(unsigned char *)(p + 0x12)) {
                *(signed char *)(p + 0x168) = *(signed char *)(p + 0x12);
                *(signed char *)(p + 0x11) = *(signed char *)(p + 0x12);
                *(int *)(p + 4) = 5;
            } else if (*(unsigned char *)(p + 0x11) == 0) {
                *(int *)(p + 4) = 6;
            } else {
                *(unsigned char *)(p + 0x11) = 0;
                *(unsigned char *)(p + 0x12) = 0;
                *(int *)(p + 4) = 5;
            }
        } else {
            *(int *)(p + 4) = 6;
        }
        break;
    case 5:
        *(int *)(p + 4) = 1;
        break;
    case 6:
        func_00406A50(p + 0x4C);
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
    case 7:
        if (*(char **)(p + 0x14) != 0) {
            if (!(unsigned char)ok408(*(unsigned char **)(p + 0x14))) break;
        }
        if (*(char **)(p + 0x18) != 0) {
            if (!(unsigned char)ok408(*(unsigned char **)(p + 0x18))) break;
        }
        if (*(char **)(p + 0x1C) != 0) {
            if (!(unsigned char)ok408(*(unsigned char **)(p + 0x1C))) break;
        }
        if (*(char **)(p + 0x15C) != 0) func_001AD140(*(char **)(p + 0x15C));
        if (*(char **)(p + 0x160) != 0) func_001AD140(*(char **)(p + 0x160));
        if (*(char **)(p + 0x164) != 0) func_001AD140(*(char **)(p + 0x164));
        if (*(char **)(p + 0x16C) != 0) func_001AD140(*(char **)(p + 0x16C));
        if (*(char **)(p + 0x174) != 0) func_001AD140(*(char **)(p + 0x174));
        if (*(char **)(p + 0x178) != 0) func_001AD140(*(char **)(p + 0x178));
        if (*(char **)(p + 0x17C) != 0) func_001AD140(*(char **)(p + 0x17C));
        if (*(char **)(p + 0x180) != 0) func_001AD140(*(char **)(p + 0x180));
        if (*(char **)(p + 0x188) != 0) func_001AD140(*(char **)(p + 0x188));
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
    case 8: case 9:
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        break;
    case 10:
        if (*(int *)(p + 0x14) != 0) func_001AF080(D_00666750, *(int *)(p + 0x14));
        if (*(int *)(p + 0x18) != 0) func_001AF080(D_00666750, *(int *)(p + 0x18));
        if (*(int *)(p + 0x1C) != 0) func_001AF080(D_00666750, *(int *)(p + 0x1C));
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        break;
    case 11:
        break;
    default:
        *(int *)(p + 4) = 7;
        break;
    }
}

int func_00409250(p0) char *p0; {
    return (*(int *)(p0 + 4) == 11);
}

unsigned char func_00409260(char *p) { return *(unsigned char *)(p + 368); }

extern char D_01DFABA0[];

int func_003303F0();

int func_00408DE0(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    int v0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 344) = 0;
    *(char *)(p0 + 368) = 0;
    *(char *)(p0 + 16) = p1;
    *(char *)(p0 + 17) = p1;
    *(char *)(p0 + 360) = 1;
    if (*(unsigned char *)(p0 + 16) != 0) {
        v0 = func_003303F0(D_01DFABA0, 0, 26, 0, 0);
    }
    return v0;
}
