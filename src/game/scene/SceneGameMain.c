#include "game/mt_rand.h"
/* Draw text 0x3106 / 0x3107 centred, its y depending on the layout flag. */
extern char D_01DFA340[];

extern char D_01CAFF0C[];

 extern char D_00645A30[];

 extern char D_01DF5D20[];

 extern int D_005BE09C;

 extern char D_01DF8E4D[];

void func_00195CC0(char *);

 void func_001F9BF0(char *);

 void func_001ACCD0(int);

 void func_00247760(char *);

void func_0023A710(char *p, int k) {
    void func_002D8F40(int, unsigned char);
    if (!(unsigned char)k) {
        p[0x5BE0] = 0;
    }
    (*(char **)D_01CAFF0C)[8] = 0;
    func_00195CC0(D_00645A30);
    (*(char **)(p + 0x2058))[0x28B4] = 0;
    func_001F9BF0(D_01DF5D20);
    func_001ACCD0(D_005BE09C);
    (*(char **)D_01CAFF0C)[9] = 0;
    D_01DF8E4D[0] = 0;
    D_01DFA340[0] = 0;
    func_00247760(p + 0x45C0);
    func_002D8F40(*(int *)(p + 0x2058), *(unsigned char *)(p + 0x5BE2));
}

extern char D_01DF5D20[];

extern char D_01DF8E4D[];

extern char D_00645A30[];

extern int D_005BE09C;

void func_001F9BF0(char *);

void func_001ACCD0(int);

void func_0021DC70(int, int);

int func_002B5500(char *);

void func_0023A480(char *p, int k) {
    void func_00195C60(char *, int, int);
    void func_002D8F40(int, int);
    (*(char **)D_01CAFF0C)[9] = 1;
    (*(char **)D_01CAFF0C)[8] = 1;
    D_01DF8E4D[0] = 1;
    func_001F9BF0(D_01DF5D20);
    func_001ACCD0(D_005BE09C);
    func_0021DC70(*(int *)(*(char **)D_01CAFF0C + 0xC), 1);
    p[0x5BE2] = func_002B5500(p + 0x2070);
    switch (k) {
    case 0:
        func_00195C60(D_00645A30, 4, 0);
        break;
    case 1:
        func_00195C60(D_00645A30, 5, 1);
        func_00195C60(D_00645A30, 4, 0);
        (*(char **)(p + 0x2058))[0x28B4] = 1;
        func_002D8F40(*(int *)(p + 0x2058), 0);
        break;
    case 2:
        break;
    }
}

void func_00239420(char *);

void func_002391E0(char *);

void func_002390D0(char *p, char k) {
    p[0x18FF8] = k;
    if (mt_rand() & 1) {
        *(int *)(p + 0x18F98) = 1;
    } else {
        *(int *)(p + 0x18F98) = 0;
    }
    if (*(int *)(p + 0x18F98)) {
        func_00239420(p);
    } else {
        func_002391E0(p);
    }
}

void func_00100580(char *);

extern char D_005A7AB0[];

void func_001003E0(char *, void *, int, int);

void func_00202ED0(void);

char *func_0023ADA0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A7AB0;
        func_001003E0(p + 2352, (void *)func_00202ED0, 16, 48);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern int D_01CAFF38[];

void func_0023A8F0(char *p) {
    *(char *)(p + 0x194D0) = 1;
    *(short *)(p + 0x194D2) = 360;
    *(unsigned char *)(p + 0x194D1) = 200;
    *(short *)(p + 0x194D4) = 35;
    if (D_01CAFF38[0] >= 600) {
        *(char *)(p + 0x194D0) = 0;
    }
}

extern char D_005A7AA0[];

extern char D_005A7990[];

char *func_0023AD20(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A7AA0;
        if (p + 0x14 != 0) {
            *(char **)(p + 0x14) = D_005A7990;
        }
        if (p + 8 != 0) {
            *(char **)(p + 8) = D_005A7990;
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern char D_01DFA340[];

void func_0030FD40(char *, int, int, int, int, int, int, int);

void func_0023A960(char *p) {
    int c;
    if (*(unsigned char *)(p + 0x194D0) == 1) {
        if (*(short *)(p + 0x194D2) > 0) {
            c = *(unsigned char *)(p + 0x194D1);
            func_0030FD40(D_01DFA340, D_01CAFF38[0] + 30000, *(short *)(p + 0x194D4), 200, (c << 16) + (c + (c << 8)), 16, 0xFFFFF2, 1);
            if (*(unsigned char *)(p + 0x194D1) > 0) {
                *(unsigned char *)(p + 0x194D1) = *(unsigned char *)(p + 0x194D1) - 1;
            }
            if (*(short *)(p + 0x194D2) < 0xF0) {
                *(short *)(p + 0x194D4) = *(short *)(p + 0x194D4) - 3;
            }
            *(short *)(p + 0x194D2) = *(short *)(p + 0x194D2) - 1;
        } else {
            *(unsigned char *)(p + 0x194D0) = 0;
        }
    }
}

int func_0034C1C0(int a, int lim, int d);

int func_0034C1E0(int a, int lim, int d);

char *func_0027BE40(char *, int);

int func_002399E0(char *p) {
    char *o;
    o = func_0027BE40(p + 0x18EA8, 2);
    if (o == 0) return 0;
    if ((*(int *)(p + (0x18F7C)))) {
    if (*(unsigned char *)(p + 0x18FF8) == 0) {
        (*(int *)(p + (0x18F68))) = func_0034C1C0((*(int *)(p + (0x18F68))), 0x80, 1);
        (*(int *)(p + (0x18F6C))) = func_0034C1E0((*(int *)(p + (0x18F6C))), 0x6F, 1);
        (*(int *)(p + (0x18F70))) = func_0034C1E0((*(int *)(p + (0x18F70))), 0x6F, 1);
    } else if ((*(int *)(p + (0x18F7C)))) {
        (*(int *)(p + (0x18F68))) = func_0034C1C0((*(int *)(p + (0x18F68))), 0x6F, 1);
        (*(int *)(p + (0x18F6C))) = func_0034C1E0((*(int *)(p + (0x18F6C))), 0x6F, 1);
        (*(int *)(p + (0x18F70))) = func_0034C1E0((*(int *)(p + (0x18F70))), 0x80, 1);
    }
    }
    (*(int *)(p + (0x18F74))) = func_0034C1C0((*(int *)(p + (0x18F74))), 0xC8, 0xA);
    *(int *)(o + 0x20) = (*(int *)(p + (0x18F68))) + ((*(int *)(p + (0x18F6C))) << 8) + ((*(int *)(p + (0x18F70))) << 16) + ((*(int *)(p + (0x18F74))) << 24);
    o = func_0027BE40(p + 0x18EA8, 0xB);
    if (o == 0) return 0;
    (*(int *)(p + (0x18F78))) = func_0034C1C0((*(int *)(p + (0x18F78))), 0x7F, 8);
    *(int *)(o + 0x24) = ((*(int *)(p + (0x18F78))) << 24) + 0x7F7F7F;
    if ((*(int *)(p + (0x18F7C))) == 0 && (*(int *)(p + (0x18F74))) >= 0xC8) (*(int *)(p + (0x18F7C))) = 1;
    return 1;
}

#define AP239(o, t, s) *(int *)(p + (o)) = func_0034C1C0(*(int *)(p + (o)), t, s)

int func_00239680(char *p) {
    char *e;
    e = func_0027BE40(p + 0x18EA8, 1);
    if (e == 0) return 0;
    AP239(0x18F68, 0x12C, 0xA);
    AP239(0x18F6C, 0x96, 5);
    AP239(0x18F70, 0x190, 0xD);
    AP239(0x18F74, 0x50, 2);
    if (*(unsigned char *)(p + 0x18FF8) == 0) {
        AP239(0x18F78, 0xAF, 5);
        AP239(0x18F7C, 0x80, 4);
        AP239(0x18F80, 0x80, 4);
    } else {
        AP239(0x18F78, 0x80, 4);
        AP239(0x18F7C, 0x80, 4);
        AP239(0x18F80, 0xAF, 5);
    }
    AP239(0x18F84, 0x80, 4);
    *(int *)(e + 0x18) = *(int *)(p + 0x18F68);
    *(int *)(e + 0x1C) = *(int *)(p + 0x18F6C);
    *(int *)(e + 0x20) = *(int *)(p + 0x18F70);
    *(int *)(e + 0x24) = *(int *)(p + 0x18F74);
    *(int *)(e + 0x14) = (*(int *)(p + 0x18F84) << 24) + ((*(int *)(p + 0x18F80) << 16) + (*(int *)(p + 0x18F78) + (*(int *)(p + 0x18F7C) << 8)));
    e = func_0027BE40(p + 0x18EA8, 0xF);
    if (e == 0) return 0;
    AP239(0x18F88, 0xFF, 8);
    AP239(0x18F8C, 0xFF, 8);
    *(signed char *)(e + 0x25) = *(int *)(p + 0x18F88);
    *(int *)(e + 0x1C) = *(int *)(p + 0x18F8C);
    return 1;
}

extern char D_01DFABA0[];

extern char D_006011B4[];

extern char D_00631538[];

void func_001B1120(int);

void func_0013E020(char *, int, int);

void func_0013E040(char *, int, int);

void func_003310C0(char *);

void func_003311E0(char *);

void func_004F9510(char *);

int func_004F9540(char *);

void func_00195520(char *, int);

void func_00238210(char *p) {
    func_001B1120(1);
    switch (*(unsigned char *)(p + 0x19)) {
    case 0:
        func_0013E020(D_006011B4, 0x1E, 0x32);
        func_0013E020(D_00631538, 0x1E, 0x32);
        func_003310C0(D_01DFABA0);
        (*(char **)D_01CAFF0C)[9] = 1;
        func_004F9510(p + 0x19484);
        *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
        break;
    case 1:
        if ((unsigned char)func_004F9540(p + 0x19484) == 1) {
            *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
        }
        break;
    case 2:
        func_0013E040(D_006011B4, 0x14, 0);
        func_0013E040(D_00631538, 0x14, 0);
        func_003311E0(D_01DFABA0);
        (*(char **)D_01CAFF0C)[9] = 0;
        *(unsigned char *)(p + 0x18) = 1;
        *(unsigned char *)(p + 0x19) = 0;
        break;
    default:
        *(unsigned char *)(p + 0x19) = 2;
        break;
    }
    func_00195520(D_00645A30, 0x2C);
    func_001B1120(0);
}

extern char D_01C61900[];

char *func_0027BE50(char *, int, int);

void func_001C5220(char *, char *);

void func_00239DE0(char *p) {
    char *e;
    if (*(int *)(p + 0x18F98) != 0) {
        e = func_0027BE50(p + 0x18EA8, 4, 0);
        if (e != 0) {
            func_001C5220(D_01C61900, e);
        }
    }
    if (*(int *)(p + 0x18F9C) != 0) {
        e = func_0027BE50(p + 0x18EA8, 0xD, 0);
        if (e != 0) {
            func_001C5220(D_01C61900, e);
        }
    }
    if (*(int *)(p + 0x18FA0) != 0) {
        e = func_0027BE50(p + 0x18EA8, 5, 0);
        if (e != 0) {
            func_001C5220(D_01C61900, e);
        }
    }
    if (*(int *)(p + 0x18FA4) != 0) {
        e = func_0027BE50(p + 0x18EA8, 0xF, 0);
        if (e != 0) {
            func_001C5220(D_01C61900, e);
        }
    }
    if (*(int *)(p + 0x18FA8) != 0) {
        e = func_0027BE50(p + 0x18EA8, 0xC, 0);
        if (e != 0) {
            func_001C5220(D_01C61900, e);
        }
    }
}

void func_001C51D0(char *, char *);

void func_00239C60(char *p) {
    char *e;
    *(int *)(p + 0x18F98) = 0;
    *(int *)(p + 0x18F9C) = 0;
    *(int *)(p + 0x18FA0) = 0;
    *(int *)(p + 0x18FA4) = 0;
    *(int *)(p + 0x18FA8) = 0;
    e = func_0027BE40(p + 0x18EA8, 4);
    if (e != 0) {
        func_001C51D0(D_01C61900, e);
        *(int *)(p + 0x18F98) = 1;
    }
    e = func_0027BE40(p + 0x18EA8, 0xD);
    if (e != 0) {
        func_001C51D0(D_01C61900, e);
        *(int *)(p + 0x18F9C) = 1;
    }
    e = func_0027BE40(p + 0x18EA8, 5);
    if (e != 0) {
        func_001C51D0(D_01C61900, e);
        *(int *)(p + 0x18FA0) = 1;
    }
    e = func_0027BE40(p + 0x18EA8, 0xF);
    if (e != 0) {
        func_001C51D0(D_01C61900, e);
        *(int *)(p + 0x18FA4) = 1;
    }
    e = func_0027BE40(p + 0x18EA8, 0xC);
    if (e != 0) {
        func_001C51D0(D_01C61900, e);
        *(int *)(p + 0x18FA8) = 1;
    }
}

void func_0023A590(char *p, unsigned int f) {
    void func_00195C60(char *, signed char, int);
    void func_002D8F40(int, int);
    if (f & 1) {
        func_00195C60(D_00645A30, 5, 0);
    }
    if (f & 2) {
        func_00195C60(D_00645A30, 5, 1);
        *(unsigned char *)(*(char **)(p + 0x2058) + 0x28B4) = 1;
        func_002D8F40(*(int *)(p + 0x2058), 0);
    }
    if (f & 4) {
        func_00195C60(D_00645A30, 6, 0);
        func_00195C60(D_00645A30, 9, 0);
    }
    if (f & 8) {
        func_00195C60(D_00645A30, 6, 1);
        func_00195C60(D_00645A30, 9, 1);
    }
    if (f & 0x10) {
        func_00195C60(D_00645A30, 4, 0);
    }
    if (f & 0x20) {
        func_00195C60(D_00645A30, 4, 1);
    }
    if (f & 0x40) {
        *(unsigned char *)(*(char **)(p + 0x2058) + 0x28B4) = 1;
    }
    if (f & 0x80) {
        func_002D8F40(*(int *)(p + 0x2058), 0);
    }
    if (f & 0x400) {
        D_01DF8E4D[0] = 1;
    }
    if (f & 0x800) {
        D_01DF8E4D[0] = 0;
    }
}

extern char D_00666710[];

extern char D_0066671A[];

unsigned short func_001AE770(char *, int);

extern char D_006663C0[];

unsigned short func_001AE1E0(char *, int);

extern unsigned char D_01CAF681[];

int func_002D8B10(char *);

static inline int btn_hit(int b) {
    unsigned short m = *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, b) * 2);
    unsigned short r = func_001AE1E0(D_006663C0, 0);
    return r & m;
}

int func_00238E20(char *p) {
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) != 0) {
        return 0;
    }
    if ((unsigned char)func_002D8B10(*(char **)(*(char **)D_01CAFF0C + 0xC)) == 0) {
        return 0;
    }
    if (D_01CAF681[0] != 0) {
        *(unsigned char *)(p + 0x193F4) = 0;
        return 1;
    }
    if (func_001AE1E0(D_006663C0, 0) & 0x800) {
        *(unsigned char *)(p + 0x193F4) = 0;
        return 1;
    }
    if (btn_hit(0x1000)) {
        *(unsigned char *)(p + 0x193F4) = 1;
        return 1;
    }
    if (btn_hit(0x2000)) {
        *(unsigned char *)(p + 0x193F4) = 3;
        return 1;
    }
    if (btn_hit(0x4000)) {
        *(unsigned char *)(p + 0x193F4) = 2;
        return 1;
    }
    if (btn_hit(0x8000)) {
        *(unsigned char *)(p + 0x193F4) = 4;
        return 1;
    }
    return 0;
}

void func_0027C040(char *, unsigned char);

void func_0023A3E0(char *p, int k) {
    func_0027C040(p + 0x18EA8, (unsigned char)k);
}

void func_0023A8D0(char *p, float x) {
    void func_002477F0(char *, float);
    func_002477F0(p + 0x45C0, x + *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x84));
}

extern char D_005A7A90[];

char *func_0023ACD0(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005A7A90;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_00204F40(char *, int, float, float, float, float);

void func_0023A400(char *p, int i) {
    char *e;
    if (!(i < *(unsigned short *)(*(char **)(p + 0x2050) + 6))) {
        i = 0;
    }
    e = (char *)(i * 48) + (int)*(char **)(p + 0x2054);
    func_00204F40(*(char **)(p + 0x2058), *(unsigned char *)e, *(float *)(e + 4), *(float *)(e + 8), *(float *)(e + 0xC), 6.283185f * (*(float *)(e + 0x10) / 360.0f));
}

void func_00238210(char *p);

void func_00235E10(char *);

void func_00236E70(char *);

void func_00237240(char *);

void func_00237610(char *);

void func_00237980(char *);

void func_00237D90(char *);

void func_00237EC0(char *);

void func_00238370(char *);

void func_00238BA0(char *);

void func_00238390(char *);

void func_00237C10(char *);

int func_00235D00(char *p) {
    switch (*(unsigned char *)(p + 0x18)) {
    case 0: func_00235E10(p); break;
    case 1: func_00236E70(p); break;
    case 2: func_00237240(p); break;
    case 3: func_00237610(p); break;
    case 4: func_00237980(p); break;
    case 5: func_00237D90(p); break;
    case 6: func_00237EC0(p); break;
    case 7: func_00238210(p); break;
    case 8: func_00238370(p); break;
    case 11: func_00238BA0(p); break;
    case 9: func_00238390(p); break;
    case 10: func_00237C10(p); break;
    case 12: return *(signed char *)(p + 0x1A);
    }
    return 0;
}

void func_0027BDC0();

void func_0023A350(p) char *p; {
    func_0027BDC0(p + 102056, 5, 1);
    func_0027BDC0(p + 102056, 15, 1);
    func_0027BDC0(p + 102056, 12, 1);
}

extern char D_005BC768;

extern char D_006011E4[];

extern char D_00631568[];

extern char D_01CAFF14[];

int func_0013E0A0();

void func_00203750();

void func_0020E7C0();

void func_002872E0();

void func_00287320();

void func_00287430();

void func_002E8730();

void func_002F9770();

void func_00330FE0();

int func_00235C00(p0) char *p0; {
    char *v0;
    int tmp15;
    v0 = p0;
    func_0020E7C0(*(int *)(*(char **)(p0 + 12) + 4));
    func_002872E0(*(int *)(*(char **)(v0 + 12) + 8), 0, *(int *)(v0 + 16));
    func_002872E0(*(int *)(*(char **)(v0 + 12) + 8), 1, *(int *)(v0 + 16));
    func_002872E0(*(int *)(*(char **)(v0 + 12) + 8), 2, *(int *)(v0 + 16));
    func_00287430(*(int *)(*(char **)(v0 + 12) + 8));
    func_002E8730();
    func_00287320(*(int *)(*(char **)(v0 + 12) + 8));
    if (*(int *)(v0 + 16) == 421) {
        func_00203750();
    }
    func_00330FE0(D_01DFABA0, &D_005BC768);
    func_002F9770(D_01DFABA0, 0);
    func_0013E0A0(D_006011E4);
    tmp15 = func_0013E0A0(D_00631568);
    *(char *)D_01DFA340 = 0;
    *(char *)(*(char **)D_01CAFF0C + 10) = 0;
    *(int *)D_01CAFF0C = 0;
    *(int *)D_01CAFF14 = 0;
    *(int *)(v0 + 320) = 0;
    return tmp15;
}

int func_00239060(p0) char *p0; {
    return (*(unsigned char *)(*(char **)(p0 + 8280) + 10412) == 1);
}

int func_00316730();

int func_0023A7B0(p0) int p0; {
    int tmp0;
    tmp0 = func_00316730((p0 + 19072));
    *(char *)((char *)p0 + 23520) = 1;
    return tmp0;
}

int func_003169D0();

int func_0023A7E0(p0) int p0; {
    int tmp0;
    tmp0 = func_003169D0((p0 + 19072));
    *(char *)((char *)p0 + 23520) = 1;
    return tmp0;
}

void func_0023A870(p0, p1, p2) int p0; int p1; int p2; {
    *(char *)((char *)((p1 << 4) + p0) + 8464) = p2;
}

extern void func_00316990();

void func_0023A810(char *p) { func_00316990(p + 19072); }

void func_00238E10(void) {}

void func_0023A340(void) {}

char *func_0023A470(char *p) { return p + 384; }

void func_0023A830(char *p) { *(char *)(p + 23521) = 0; }

void func_0023A3C0(char *p0, int p1) {
    *(int *)(p0 + 28) = p1;
    *(char *)(p0 + 24) = 2;
    *(char *)(p0 + 25) = 0;
}

void func_0023A820(char *p0) {
    *(char *)(p0 + 23521) = 1;
}

void func_0023A840(char *p0, int p1) {
    *(char *)((p0 + 0x20000) + -28108) = p1;
    *(char *)(p0 + 24) = 9;
    *(char *)(p0 + 25) = 0;
}

void func_0023A860(char *p0) {
    *(char *)(p0 + 24) = 8;
    *(char *)(p0 + 25) = 0;
}

unsigned char func_0023AA80(char *p0) {
    return *(unsigned char *)(*(char **)(p0 + 36) + 17681);
}

void func_002476C0();

void func_00248BA0(int, float);

int func_0023A880(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int func_002477F0(int, float);
    int tmp1;
    func_002476C0((p0 + 17856));
    func_00248BA0((p0 + 17856), f3);
    tmp1 = func_002477F0((p0 + 17856), *(float *)((char *)p0 + 18320));
    return tmp1;
}
