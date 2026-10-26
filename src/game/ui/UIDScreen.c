extern char D_006663C0[];

extern char D_00666710[];

extern signed char D_00666718[];

extern signed char D_00666719[];

extern char D_01DFABA0[];

extern char D_01DFA340[];

unsigned short func_001AE310(char *, int);

unsigned short func_001AE360(char *, int);

unsigned short func_001AE1E0(char *, int);

signed char func_0034C1E0(signed char, int, int);

signed char func_0034C1C0(signed char, int, int);

void func_00134970(int, int);

void func_001349C0(short, short);

void func_001AE650(char *);

void func_003303F0(char *, int, int, int, int);

char *func_00279290(char *);

void func_001A2D70(char *, int, unsigned int);

void func_0030EA90(char *, int);

#define HOLD(m, o) \
    if (func_001AE310(D_006663C0, 0) & (m)) { \
        if (*(short *)(p + (o)) < 100) (*(short *)(p + (o)))++; \
    } else { \
        *(short *)(p + (o)) = 0; \
    }

#define COL(b, i) \
    if (f & (b)) { \
        func_001A2D70(func_00279290(p + 0x640), i, 0x80A0A0A0); \
    } else { \
        func_001A2D70(func_00279290(p + 0x640), i, 0x80404040); \
    }

void func_003B7FC0(char *p) {
    unsigned char f = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(signed char *)(p + 0xD03) = D_00666718[0];
        *(signed char *)(p + 0xD04) = D_00666719[0];
        (*(unsigned char *)(p + 5))++;
    case 1:
        HOLD(0x1000, 0xD06)
        HOLD(0x4000, 0xD08)
        HOLD(0x2000, 0xD0A)
        HOLD(0x8000, 0xD0C)
        if ((func_001AE360(D_006663C0, 0) & 0x1000) || *(short *)(p + 0xD06) > 10) {
            *(signed char *)(p + 0xD01) = 0;
            D_00666719[0] = func_0034C1E0(D_00666719[0], -0x15, 1);
            f |= 1;
            if (D_00666719[0] > -21) func_00134970(0, 1);
        } else if ((func_001AE360(D_006663C0, 0) & 0x4000) || *(short *)(p + 0xD08) > 10) {
            *(signed char *)(p + 0xD01) = 1;
            D_00666719[0] = func_0034C1C0(D_00666719[0], 0x15, 1);
            f |= 2;
            if (D_00666719[0] < 0x15) func_00134970(0, -1);
        }
        if ((func_001AE360(D_006663C0, 0) & 0x2000) || *(short *)(p + 0xD0A) > 10) {
            *(signed char *)(p + 0xD01) = 2;
            D_00666718[0] = func_0034C1C0(D_00666718[0], 0x34, 1);
            f |= 4;
            if (D_00666718[0] < 0x34) func_00134970(-1, 0);
        } else if ((func_001AE360(D_006663C0, 0) & 0x8000) || *(short *)(p + 0xD0C) > 10) {
            *(signed char *)(p + 0xD01) = 3;
            D_00666718[0] = func_0034C1E0(D_00666718[0], -0x34, 1);
            f |= 8;
            if (D_00666718[0] > -0x34) func_00134970(1, 0);
        }
        if (f == 0) *(signed char *)(p + 0xD01) = -1;
        if (func_001AE1E0(D_006663C0, 0) & 0x40) {
            *(unsigned char *)(p + 4) = 2;
            *(signed char *)(p + 0xD01) = 4;
            func_003303F0(D_01DFABA0, 0, 4, 0x40, 0);
        }
        if (func_001AE1E0(D_006663C0, 0) & 0x10) {
            *(unsigned char *)(p + 4) = 2;
            *(signed char *)(p + 0xD01) = 4;
            D_00666718[0] = *(signed char *)(p + 0xD03);
            D_00666719[0] = *(signed char *)(p + 0xD04);
            func_001349C0(-D_00666718[0], -D_00666719[0]);
            func_003303F0(D_01DFABA0, 0, 3, 0x40, 0);
        }
        if (func_001AE1E0(D_006663C0, 0) & 0x100) {
            func_001349C0(0, 0);
            func_001AE650(D_00666710);
            func_003303F0(D_01DFABA0, 0, 4, 0x40, 0);
        }
        break;
    }
    COL(1, 0)
    COL(2, 2)
    COL(4, 1)
    COL(8, 3)
    func_0030EA90(D_01DFA340, 0x2EFD);
}

void func_003B8680(void) {}
