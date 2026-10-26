char *func_00279290(char *);

void func_001A1E70(char *, int);

void func_001A2000(char *, int);

void func_001A3B20(char *, int, int, int);

#define SHOW(o, n) func_001A1E70(func_00279290(p + (o)), n)

#define HIDE(o, n) func_001A2000(func_00279290(p + (o)), n)

typedef struct { int x; int y; } P2_4D5;

extern P2_4D5 D_0058AF50[];

void func_004D5980(char *p) {
    int i;
    int c;
    if (*(unsigned char *)(p + 0x4F44) == 1) {
        SHOW(0x640, 1);
    } else {
        HIDE(0x640, 1);
    }
    for (i = 0; i < 10; i++) {
        if (*(signed char *)(p + 0x4EC2) >= i + 1 || *(signed char *)(p + 0x4EC1) >= i + 1 || *(signed char *)(p + 0x4EC3) >= i + 1 || i + 1 <= *(signed char *)(p + 0x4EC4)) {
            SHOW(0x1E40, i);
        } else {
            HIDE(0x1E40, i);
        }
        if (*(signed char *)(p + 0x4EC2) >= i + 0xB || *(signed char *)(p + 0x4EC1) >= i + 0xB || *(signed char *)(p + 0x4EC3) >= i + 0xB || i + 0xB <= *(signed char *)(p + 0x4EC4)) {
            SHOW(0x1E40, i + 10);
        } else {
            HIDE(0x1E40, i + 10);
        }
    }
    for (i = 0; i < 0x14; i++) {
        c = *(signed char *)(p + i + 0x4EDC);
        if (c < 0) {
            HIDE(0x3640, i);
        } else {
            SHOW(0x3640, i);
            func_001A3B20(func_00279290(p + 0x3640), i, D_0058AF50[c].x << 4, D_0058AF50[c].y << 4);
        }
    }
    if (*(unsigned char *)(p + 0x4F43) == 1) {
        SHOW(0x2A40, 5);
    } else {
        HIDE(0x2A40, 5);
    }
    if (*(unsigned char *)(p + 0x4F40) == 1) {
        SHOW(0x2A40, 0);
        if (*(unsigned char *)(p + 0x4F43) == 1) {
            SHOW(0x2A40, 4);
        } else {
            HIDE(0x2A40, 4);
        }
        for (i = 0; i < 0x14; i++) {
            c = *(signed char *)(p + i + 0x4EC7);
            if (c < 0) {
                HIDE(0x3040, i);
            } else {
                SHOW(0x3040, i);
                func_001A3B20(func_00279290(p + 0x3040), i, D_0058AF50[c].x << 4, D_0058AF50[c].y << 4);
            }
        }
    } else {
        HIDE(0x2A40, 0);
        HIDE(0x2A40, 4);
    }
    if (*(unsigned char *)(p + 0x4F41) == 1) {
        SHOW(0x2A40, 2);
        if (*(unsigned char *)(p + 0x4F43) == 1) {
            SHOW(0x2A40, 6);
        } else {
            HIDE(0x2A40, 6);
        }
        for (i = 0; i < 0x14; i++) {
            c = *(signed char *)(p + i + 0x4EF1);
            if (c < 0) {
                HIDE(0x3C40, i);
            } else {
                SHOW(0x3C40, i);
                func_001A3B20(func_00279290(p + 0x3C40), i, D_0058AF50[c].x << 4, D_0058AF50[c].y << 4);
            }
        }
        SHOW(0xC40, 0xE);
        SHOW(0xC40, 0xE);
        SHOW(0x1240, 0xE);
        SHOW(0x1240, 0xE);
    } else {
        HIDE(0x2A40, 2);
        HIDE(0x2A40, 6);
        HIDE(0xC40, 0xE);
        HIDE(0xC40, 0xE);
        HIDE(0x1240, 0xE);
        HIDE(0x1240, 0xE);
    }
    if (*(unsigned char *)(p + 0x4F42) == 1) {
        SHOW(0x2A40, 3);
        if (*(unsigned char *)(p + 0x4F43) == 1) {
            SHOW(0x2A40, 7);
        } else {
            HIDE(0x2A40, 7);
        }
        for (i = 0; i < 0x14; i++) {
            c = *(signed char *)(p + i + 0x4F06);
            if (c < 0) {
                HIDE(0x4240, i);
            } else {
                SHOW(0x4240, i);
                func_001A3B20(func_00279290(p + 0x4240), i, D_0058AF50[c].x << 4, D_0058AF50[c].y << 4);
            }
        }
        SHOW(0xC40, 0xF);
        SHOW(0xC40, 0xF);
        SHOW(0x1240, 0xF);
        SHOW(0x1240, 0xF);
    } else {
        HIDE(0x2A40, 3);
        HIDE(0x2A40, 7);
        HIDE(0xC40, 0xF);
        HIDE(0xC40, 0xF);
        HIDE(0x1240, 0xF);
        HIDE(0x1240, 0xF);
    }
    for (i = 0; i < 0xC; i++) {
        if (*(signed char *)(p + i + 0x4F2F) == 0) {
            HIDE(0x4840, i);
        } else {
            SHOW(0x4840, i);
        }
    }
}

extern char * D_005BE0D8;

extern char D_01DFA340[];

int func_0030FD40();

int func_004D6100(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    if (*(int *)(p0 + 20284) != 8) {
        v0 = D_005BE0D8;
        if (*(signed char *)(v0 + 3) != 0) {
            v1 = (222 - *(short *)(v0 + 46));
        } else {
            v1 = (445 - *(short *)(v0 + 46));
        }
        v2 = func_0030FD40(D_01DFA340, 12552, 32, v1, 0x585858, 16, 0xfffff2, 1);
    }
    return v2;
}
