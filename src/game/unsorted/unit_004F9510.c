extern char D_00666750[];

void func_001AD140(char *);

extern char D_006663C0[];

extern int D_00569E90[];

char *func_001AEA60(char *, int, int);

int func_003F4680(char *);

int func_001AFB90(char *, int, int, int);

int func_003F4E30(int);

int func_003F3F30(char *, int);

int func_003F44F0(int);

unsigned short func_001AE1E0(char *, int);

void func_003F4E20(int);

void func_003F44E0(int);

int func_003F44D0(int);

int func_003F4E10(int);

int func_003F4E00(int);

void func_001AF080(char *, int);

static inline int ok4F9(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

void func_004F9E20(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if (*(int *)(p + 0x40) == 0) {
            *(int *)(p + 0x40) = func_003F4680(func_001AEA60(D_00666750, 6, 4));
            if (*(int *)(p + 0x40) == 0) {
                *(int *)(p + 8) = 7;
                break;
            }
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
    case 1:
        *(int *)(p + 0x2C) = func_001AFB90(D_00666750, D_00569E90[*(short *)(p + 0x22)], 1, 8);
        if (*(int *)(p + 0x2C) == 0) {
            *(int *)(p + 8) = 7;
            break;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
    case 2:
        if ((unsigned char)ok4F9(*(unsigned char **)(p + 0x2C)) != 1) break;
        if ((unsigned char)func_003F4E30(*(int *)(p + 0x40)) != 1) break;
        *(int *)(p + 0x3C) = func_003F3F30(*(char **)(p + 0x2C), *(signed char *)(p + 0x22));
        if (*(int *)(p + 0x3C) == 0) {
            *(int *)(p + 8) = 7;
            break;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 3:
        if ((unsigned char)func_003F44F0(*(int *)(p + 0x3C)) != 1) break;
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 4:
        if ((func_001AE1E0(D_006663C0, 0) & 0x50) == 0) break;
        switch (*(unsigned char *)((char *)(*(unsigned char *)(p + 0x21) * 4) + (int)p + 0x16)) {
        case 1: case 2: case 3:
            break;
        default:
            func_003F4E20(*(int *)(p + 0x40));
            break;
        }
        func_003F44E0(*(int *)(p + 0x3C));
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5:
        if ((unsigned char)func_003F44D0(*(int *)(p + 0x3C)) != 1) break;
        if ((unsigned char)func_003F4E10(*(int *)(p + 0x40)) == 1) *(int *)(p + 8) = *(int *)(p + 8) + 1;
        else *(int *)(p + 8) = 8;
        break;
    case 6:
        if ((unsigned char)func_003F4E00(*(int *)(p + 0x40)) != 1) break;
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 7:
        if (*(char **)(p + 0x40) != 0) {
            func_001AD140(*(char **)(p + 0x40));
            *(char **)(p + 0x40) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
    case 8:
        if (*(char **)(p + 0x2C) != 0) {
            if (!(unsigned char)ok4F9(*(unsigned char **)(p + 0x2C))) break;
        }
        if (*(char **)(p + 0x3C) != 0) {
            func_001AD140(*(char **)(p + 0x3C));
            *(char **)(p + 0x3C) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 9: case 10:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 11:
        if (*(int *)(p + 0x2C) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x2C));
            *(int *)(p + 0x2C) = 0;
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        *(int *)(p + 8) = 0;
        break;
    }
}

extern char D_01CAFF0C[];

void func_004F9970(char *, int, int);

void func_004F99E0(char *);

void func_004FA5B0(char *);

void func_004F9E20(char *p);

void func_004FA180(char *p);

static inline int ok4F95(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline unsigned char st_4F95(char *g) { unsigned char r; if (*(unsigned char *)(g + 4) == 1 && *(unsigned char *)(g + 0x2848) == 0x2A && *(unsigned char *)(g + 0x284C) == 2) r = 1; else r = 0; return r; }

unsigned char func_004F9540(char *p) {
    unsigned char r;
    char *g;
    int i;
    char *q;
    r = 0;
    switch (*(unsigned int *)(p + 4)) {
    case 0:
        if (*(unsigned char *)(p + 0x20) == *(unsigned char *)(p + 0x21)) {
            *(int *)(p + 4) = 4;
            break;
        }
        *(short *)(p + 0x22) = *(short *)((char *)(*(unsigned char *)(p + 0x21) * 4) + (int)p + 0x10);
        *(signed char *)(p + 0x24) = *(signed char *)((char *)(*(unsigned char *)(p + 0x21) * 4) + (int)p + 0x12);
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
    case 1:
        if (*(unsigned char *)(p + 0x24) == 1 && *(short *)(p + 0x22) == 9 && *(unsigned char *)(*(char **)(p + 0x28) + 0x29) >= 4u) {
            func_004F9970(p, 0x3A, 1);
            g = *(char **)(*(char **)D_01CAFF0C + 0xC);
            if (!(unsigned char)(*(unsigned char *)(g + 0x28AC) == 1)) {
                if (st_4F95(g) == 0) {
                    *(float *)(g + 0x2AA8) = *(float *)(g + 0x2AA8) + 1000.0f;
                    *(float *)(g + 0x2AD4) = *(float *)(g + 0x2AD4) + *(float *)(g + 0x2AA8);
                    if (!(*(float *)(g + 0x2AD4) <= *(float *)(g + 0x2AA8))) *(float *)(g + 0x2AD4) = *(float *)(g + 0x2AA8);
                    *(unsigned char *)(*(char **)(p + 0x28) + 0x29) = *(unsigned char *)(*(char **)(p + 0x28) + 0x29) - 4;
                }
            }
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        *(int *)(p + 8) = 0;
    case 2:
        switch (*(unsigned char *)(p + 0x24)) {
        case 1:
            func_004F99E0(p);
            break;
        case 2:
            func_004F99E0(p);
            break;
        case 3:
            func_004F9E20(p);
            break;
        case 4:
            func_004FA180(p);
            break;
        case 5:
            func_004FA5B0(p);
            break;
        default:
            *(int *)(p + 4) = 4;
            break;
        }
        break;
    case 3:
        *(unsigned char *)(p + 0x21) = *(unsigned char *)(p + 0x21) + 1;
        if (*(unsigned char *)(p + 0x20) == *(unsigned char *)(p + 0x21)) {
            *(unsigned char *)(p + 0x20) = 0;
            *(unsigned char *)(p + 0x21) = 0;
            *(short *)(p + 0x10) = 0;
            *(unsigned char *)(p + 0x12) = 0;
            *(short *)(p + 0x14) = 0;
            *(unsigned char *)(p + 0x16) = 0;
            *(short *)(p + 0x18) = 0;
            *(unsigned char *)(p + 0x1A) = 0;
            *(short *)(p + 0x1C) = 0;
            *(unsigned char *)(p + 0x1E) = 0;
            *(int *)(p + 4) = *(int *)(p + 4) + 1;
        } else {
            *(int *)(p + 4) = 0;
        }
        break;
    case 4:
        if (*(char **)(p + 0x2C) != 0) {
            if (!(unsigned char)ok4F95(*(char **)(p + 0x2C))) break;
        }
        if (*(char **)(p + 0x30) != 0) {
            if (!(unsigned char)ok4F95(*(char **)(p + 0x30))) break;
        }
        if (*(char **)(p + 0x34) != 0) {
            if (!(unsigned char)ok4F95(*(char **)(p + 0x34))) break;
        }
        if (*(char **)(p + 0x40) != 0) {
            func_001AD140(*(char **)(p + 0x40));
            *(char **)(p + 0x40) = 0;
        }
        if (*(char **)(p + 0x38) != 0) {
            func_001AD140(*(char **)(p + 0x38));
            *(char **)(p + 0x38) = 0;
        }
        if (*(char **)(p + 0x3C) != 0) {
            func_001AD140(*(char **)(p + 0x3C));
            *(char **)(p + 0x3C) = 0;
        }
        if (*(char **)(p + 0x44) != 0) {
            func_001AD140(*(char **)(p + 0x44));
            *(char **)(p + 0x44) = 0;
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        break;
    case 5: case 6:
        *(int *)(p + 4) = *(unsigned int *)(p + 4) + 1;
        break;
    case 7:
        for (i = 0, q = p; i < 3; i++, q += 4) {
            if (*(int *)(q + 0x2C) != 0) {
                func_001AF080(D_00666750, *(int *)(q + 0x2C));
                *(int *)(q + 0x2C) = 0;
            }
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
    case 8:
        r = 1;
        break;
    default:
        *(int *)(p + 4) = 4;
        break;
    }
    return r;
}

extern char D_01CAFF10[];

void func_004F9510(char *p0) {
    int t0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    t0 = *(int *)D_01CAFF10;
    *(int *)(p0 + 40) = *(int *)D_01CAFF10;
    *(int *)(p0 + 44) = 0;
    *(int *)(p0 + 56) = 0;
    *(int *)(p0 + 60) = 0;
    *(int *)(p0 + 64) = 0;
    *(int *)(p0 + 68) = 0;
}
