void func_0021C7A0(char *, int);

extern char D_00553750[];

void func_002E00E0(char *, char *, char *, int);

void func_002E1B90(char *);

void func_002DFC90(char *p, char *t, char *q) {
    if (*(unsigned char *)(p + 0x28AD) == 1) {
        return;
    }
    *(unsigned char *)(p + 0x28AC) = 1;
    *(unsigned char *)(p + 0x28A9) = 0;
    *(unsigned char *)(p + 0x28B3) = 0;
    *(int *)(p + 0x28CC) = 0;
    if (t != 0) {
        if (10.0f + *(float *)(p + 0x2924) < *(float *)(p + 0x54) || (*(int *)(p + 0x2898) & 2)) {
            func_002E00E0(p, q, t, 3);
            return;
        }
        func_002E1B90(p);
        *(unsigned char *)(p + 0x2854) = 0;
        func_0021C7A0(p, 0x2A);
    } else {
        if (100.0f + *(float *)(p + 0x2924) < *(float *)(p + 0x54) || (*(int *)(p + 0x2898) & 2)) {
            func_002E00E0(p, 0, D_00553750, 3);
            return;
        }
        *(unsigned char *)(p + 0x2854) = 0;
        func_0021C7A0(p, 0x2A);
    }
}

void func_002E0580(char *, char *, char *, int);

void func_002E02C0(char *, char *, char *);

void func_002DF970(char *p, char *a, char *b) {
    if (*(unsigned char *)(p + 0x3C80) == 6) {
        func_002E0580(p, a, b, 0);
        func_002E02C0(p, a, b);
        *(float *)(p + 0x29A8) = *(float *)(a + 0x2C);
        func_002E00E0(p, b, a, -1);
    }
}

void func_002DF9F0(char *p, char *a, char *b) {
    if (*(unsigned char *)(p + 0x3C80) == 6) {
        func_002E0580(p, a, b, 1);
        func_002E02C0(p, a, b);
        *(float *)(p + 0x29A8) = *(float *)(a + 0x2C);
        func_002E00E0(p, b, a, *(signed char *)(a + 0x18) < 4 ? 3 : 5);
    }
}

void func_002E1750(char *p);

void func_002E1310(char *p);

void func_002E0E00(char *p);

void func_002E0A60(char *);

void func_002E0C90(char *);

void func_002E1900(char *);

void func_002E1A00(char *);

void func_002E0980(char *p) {
    if (*(unsigned char *)(p + 0x284C) && !(*(float *)(p + 0x29A8) <= 0.0f)) return;
    switch (*(unsigned char *)(p + 0x2AE1)) {
    case 1: func_002E0A60(p); break;
    case 2: func_002E0C90(p); break;
    case 3: case 5: func_002E0E00(p); break;
    case 4: func_002E1310(p); break;
    case 6: func_002E1750(p); break;
    case 7: func_002E1900(p); break;
    case 8: func_002E1A00(p); break;
    case 0: break;
    }
}

extern void func_002DFF90();

void func_002DFE10(void) { func_002DFF90(); }

void func_002E0A50(char *p0, int p1) {
    *(char *)(p0 + 10977) = p1;
    *(int *)(p0 + 10316) = 0;
}
