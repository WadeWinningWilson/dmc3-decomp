/* Hand-matched functions whose callee prototypes conflict with misc3-17 (part 5). */

#include "game/mt_rand.h"
extern float D_00562508[];
void func_002CA740(char *, unsigned char, int, int, int, int);
void func_002CA5F0(char *, int, int, int, int);
void func_002CB910(char *);
void func_002CA8D0(char *);

#define RETIME() \
    func_002CA5F0(p, -1, 0, 1, 10); \
    *(float *)(p + 0x2D10) = 60.0f + 120.0f * (2.3283064e-10f * mt_rand());

void func_002C7710(char *p) {
    int i;
    unsigned char c;
    switch (*(unsigned char *)(p + 0x5C1)) {
    case 0:
        *(unsigned char *)(p + 0x2B3C) = 0;
        *(unsigned char *)(p + 0x2BCC) = 0;
        *(unsigned char *)(p + 0x2C5C) = 0;
        func_002CA740(p, 0, -1, 0, 1, 0x10);
        func_002CA740(p, 1, -1, 0, 1, 0x10);
        if (*(float *)(p + 0x2D78) < D_00562508[*(unsigned char *)(p + 0x5C2)]) {
            RETIME()
        } else if ((mt_rand() & 3) >= 2) {
            RETIME()
        } else {
            RETIME()
        }
        (*(unsigned char *)(p + 0x5C1))++;
    case 1:
        for (i = 2; i <= 4; i++) {
            c = *(unsigned char *)(p + i + 0x2CE4);
            if ((c == 2 || c == 7) && *(unsigned char *)(p + i + 0x2CE9) == 1) {
                func_002CA740(p, i, -1, 0, 1, 0x10);
            }
        }
        if (*(float *)(p + 0x2D78) < D_00562508[*(unsigned char *)(p + 0x5C2)]) {
            *(unsigned char *)(p + 0x5C1) = 0;
            *(unsigned char *)(p + 0x2D7C) = 4;
            *(int *)(p + 0x2B20) = 0;
            func_002CB910(p);
            if ((*(short *)(p + 0x2D2A) > 0x2000 || *(short *)(p + 0x2D2A) < -0x2000) && *(unsigned char *)(p + 0x2F2E) != 2) {
                func_002CA8D0(p);
            }
        } else {
            c = *(unsigned char *)(p + 0x2CE4);
            if (c >= 0x27 && c < 0x2A && c == 0x29 && *(unsigned char *)(p + 0x2CE9) == 1) {
                (*(int *)(p + 0x2D0C))++;
                if (*(unsigned int *)(p + 0x2D0C) > (mt_rand() & 6)) {
                    RETIME()
                } else {
                    RETIME()
                }
            }
        }
        break;
    }
}

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
