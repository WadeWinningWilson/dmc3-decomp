/* Size of a host file: builds the path, flips '/' to backslashes, open + seek end + close. */
extern char D_00540D50[];

 extern char D_005BBA30[8];

 extern char D_005BBA38[8];

 extern char D_00662370[];

void func_0012ACE8(char *, char *, char *, int, int, char *);

 unsigned int func_0012B400(char *);

void func_001AAAE0(char *);

 void func_001AAAF0(char *);

 int func_00111BE8(char *, int);

 int func_00111FF0(int, int, int);

 void func_00111E70(int);

int func_001EBB30(int a, int b, int c) {
    char buf[256];
    unsigned int i;
    int fd, size;
    func_0012ACE8(buf, D_00540D50, D_005BBA30, c, b, D_005BBA38);
    for (i = 0; i < func_0012B400(buf); i++) {
        if (buf[i] == '/') {
            buf[i] = 0x5C; /* backslash */
        }
    }
    func_001AAAE0(D_00662370);
    fd = func_00111BE8(buf, 1);
    if (fd < 0) {
        return 0;
    }
    size = func_00111FF0(fd, 0, 2);
    func_00111E70(fd);
    func_001AAAF0(D_00662370);
    return size;
}

int func_001EBB30(int a, int b, int c);

void func_00112228(int, int, int);

int func_001EB9F0(int a, int b, int c, int d) {
    char buf[256];
    unsigned int i;
    int fd, size;
    char *s;
    size = func_001EBB30(a, b, c);
    func_0012ACE8(buf, D_00540D50, D_005BBA30, c, b, D_005BBA38);
    i = 0;
    if (i < func_0012B400(buf)) {
        s = buf;
        do {
            if (*s == '/') {
                *s = 0x5C;
            }
            s++;
            i++;
        } while (i < func_0012B400(buf));
    }
    func_001AAAE0(D_00662370);
    fd = func_00111BE8(buf, 1);
    if (fd < 0) {
        return 0;
    }
    func_00112228(fd, d, size);
    func_00111E70(fd);
    func_001AAAF0(D_00662370);
    return 1;
}

extern char D_006663C0[];

extern unsigned char D_01CB1292[];

int func_001AE140(char *, int);

int func_001ECEB0(char *);

void func_001ECD70(char *p) {
    if (func_001AE140(D_006663C0, 0)) {
        p[0x3D0]++;
        p[0x3D0] = p[0x3D0] < 40 ? p[0x3D0] : 40;
    } else {
        p[0x3D0]--;
        p[0x3D0] = p[0x3D0] > 0 ? p[0x3D0] : 0;
    }
    if (*(short *)(p + 0x3D2) < 0) {
        if (p[0x3D0] < 20) {
            p[0x3CD] = 0;
            if ((unsigned char)func_001ECEB0(p) == 1) {
                p[0x3D1] = 1;
                D_01CB1292[0] = 1;
                p[0x3CE] = 1;
            } else {
                p[0x3D1] = 0;
                D_01CB1292[0] = 0;
                p[0x3CE] = 0;
            }
        } else {
            if (*(unsigned char *)(p + 0x3CD) == 0) {
                p[0x3CD] = 1;
            }
            p[0x3D1] = 0;
            D_01CB1292[0] = 0;
            p[0x3CE] = 0;
        }
    } else {
        p[0x3CD] = 1;
        (*(short *)(p + 0x3D2))--;
        D_01CB1292[0] = 0;
        p[0x3CE] = 0;
    }
}

extern char D_01C61900[];

void func_00138120(int);

void func_001C52F0(char *);

void func_001EC8A0(char *p) {
    func_00138120(0);
    if (*(unsigned char *)(p + 0x3C9) == 1) {
        func_001C52F0(D_01C61900);
    }
}

extern char D_005BE0D4[4];

extern unsigned int D_01CB051C[];

void func_001ED920(char *);

void func_001EC140(char *);

void func_001EC390(char *);

void func_001EC4F0(char *);

void func_001EC060(char *p) {
    extern char *D_005BE09C;
    func_001ED920(D_005BE0D4);
    D_005BE09C = p + 0x10;
    switch (*(signed char *)(p + 8)) {
    case 0:
        func_001EC140(p);
        break;
    case 1:
        func_001EC390(p);
        break;
    case 2:
        func_001EC4F0(p);
        break;
    }
    *(int *)(p + 0x268) = *(int *)(p + 0x268) + 1;
    if (D_01CB051C[0] < *(signed char *)(p + 0x266) * 360000 - 1) {
        D_01CB051C[0] = D_01CB051C[0] + 1;
    }
}

extern char D_00645A30[];

void func_001ABE60(char *, int);

extern char D_00540DC0[];

extern char D_00540DE0[];

extern char D_00540E00[];

extern char D_00540E20[];

extern signed char D_00666718[];

extern signed char D_00666719[];

extern char D_006480D0[];

void func_00129690(char *, int);

void func_001349C0(short, short);

void func_001ED3F0(void);

void func_00138500(void);

void func_00196070(char *);

void func_001960F0(char *, int);

void func_001ED310(void);

void func_00195390(char *);

void func_001EBF60(char *p) {
    extern char *D_005BE09C;
    func_00129690(D_00540DC0, 0x600);
    func_00129690(D_00540DE0, 0x440);
    func_00129690(D_00540E00, 0x7C0);
    func_00129690(D_00540E20, 0x5B0);
    *(unsigned char *)(p + 0x264) = 1;
    *(unsigned char *)(p + 0x266) = 0x3C;
    *(unsigned char *)(p + 0x265) = 0;
    func_001349C0(-D_00666718[0], -D_00666719[0]);
    func_001ED3F0();
    func_00138500();
    func_00196070(D_006480D0);
    func_001960F0(D_006480D0, 8);
    func_001ED310();
    func_001ABE60(p + 0x10, 0);
    D_005BE09C = p + 0x10;
    *(char **)(p + 0xC40) = p;
    func_00195390(D_00645A30);
}

extern char D_01DFABA0[];

extern char D_01DFA340[];

void func_003303F0(char *, int, int, int, int);

unsigned short func_001AE1E0(char *, int);

extern signed char D_00666712[];

unsigned short func_001AE360(char *, int);

typedef struct { int x; int y; } __attribute__((aligned(8))) P1ED;

extern P1ED D_005BBA40;

int func_001ED110(char *p) {
    extern int D_005829F0[][2];
    extern int D_005829F4[][2];
    void func_0030FDF0(char *, int, int, int, int, int, int, int);
    int r;
    P1ED pos;
    int c1;
    int c2;
    r = 0;
    if (*(unsigned char *)(p + 0xC04) != 0) {
        if ((func_001AE360(D_006663C0, 0) & 0x2000) || (func_001AE360(D_006663C0, 0) & 0x8000)) {
            func_003303F0(D_01DFABA0, 0, 2, 0, 0);
            if (*(unsigned char *)(p + 0xC05) == 0) {
                *(unsigned char *)(p + 0xC05) = 1;
            } else {
                *(unsigned char *)(p + 0xC05) = 0;
            }
        }
        if (func_001AE1E0(D_006663C0, 0) & 0x40) {
            if (*(unsigned char *)(p + 0xC05) == 0) {
                r = 1;
            } else {
                r = 2;
            }
        }
        if (func_001AE1E0(D_006663C0, 0) & 0x10) r = -1;
        pos = D_005BBA40;
        if (*(unsigned char *)(p + 0xC05) == 0) {
            c1 = 0xFFFFFF;
            c2 = 0x404040;
        } else {
            c1 = 0x404040;
            c2 = 0xFFFFFF;
        }
        func_0030FDF0(D_01DFA340, D_005829F0[D_00666712[0]][0], *(int *)(p + 0xC08) + pos.x, *(int *)(p + 0xC0C), c1, 0x10, 0xFFFFF2, 1);
        func_0030FDF0(D_01DFA340, D_005829F4[D_00666712[0]][0], *(int *)(p + 0xC08) + pos.y, *(int *)(p + 0xC0C), c2, 0x10, 0xFFFFF2, 1);
    }
    if (r != 0) *(unsigned char *)(p + 0xC04) = 0;
    return r;
}

extern char D_00654430[];

extern char D_01CB1290[];

extern short D_005BBA08[2];

extern short D_005BBA0C[];

extern short D_00574E70[];

void func_001F3BF0(char *);

int func_001F3CC0(char *, int, int, int);

int func_0032FCC0(char *);

int func_0032FD00(char *, int);

int func_0032FCD0(char *, int);

void func_002F9760(char *, int);

void func_00198140(char *, short *, int, int);

int func_00198370(char *);

int func_001B0EE0(int);

int func_001EC640(char *p) {
    switch (*(signed char *)(p + 0xA)) {
    case 0:
        *(signed char *)(p + 0xA) = 0xA;
        func_001F3BF0(D_01CB1290);
        break;
    case 0xA:
        if ((unsigned char)func_001F3CC0(D_01CB1290, D_00666712[0], 0x1C2, 0x3FFC) == 1) {
            *(signed char *)(p + 0xA) = 0x14;
        }
        break;
    case 0x14:
        func_00198140(D_00654430, D_005BBA08, func_0032FCC0(D_01DFABA0), 0);
        *(signed char *)(p + 0xA) = *(signed char *)(p + 0xA) + 1;
    case 0x15:
        if ((unsigned char)func_00198370(D_00654430) == 0) {
            func_002F9760(D_01DFABA0, func_0032FCC0(D_01DFABA0));
            *(signed char *)(p + 0xA) = 0x19;
        }
        break;
    case 0x19:
        func_00198140(D_00654430, D_005BBA0C, func_0032FD00(D_01DFABA0, 0), 0);
        func_00198140(D_00654430, D_005BBA0C + 1, func_0032FCD0(D_01DFABA0, 0), 0);
        *(signed char *)(p + 0xA) = *(signed char *)(p + 0xA) + 1;
    case 0x1A:
        if ((unsigned char)func_00198370(D_00654430) == 0) {
            *(signed char *)(p + 0xA) = 0x1E;
        }
        break;
    case 0x1E:
        *(int *)(p + 0x2C4) = func_001B0EE0(0x8440);
        func_00198140(D_00654430, D_00574E70 + D_00666712[0], *(int *)(p + 0x2C4), 0);
        *(signed char *)(p + 0xA) = *(signed char *)(p + 0xA) + 1;
    case 0x1F:
        if ((unsigned char)func_00198370(D_00654430) == 0) {
            *(signed char *)(p + 0xA) = 0x28;
        }
        break;
    case 0x28:
        return 1;
    }
    return 0;
}

extern char D_01C61820[];

void func_001B6C90(char *p, short x, short y, int c, short w, short h, int a);

extern int D_00582AD0[];

void func_001ECF20(char *p) {
    unsigned int func_0030FDF0(char *, int, int, int, int, int, int, int);
    if (*(unsigned char *)(p + 0x3CE) == 1) {
        D_01CB1292[0] = 0;
        func_0030FDF0(p + 0x3D4, D_00582AD0[D_00666712[0]], 0x1E, 0xA0, 0x80FFFFFF, 0x12, 0xFFFFF5, 1);
        func_001B6C90(D_01C61820, 0, 0, 0xFFFFF4, 0x280, 0xF0, 0x70000000);
        func_001B6C90(D_01C61820, 0, 0x9B, 0xFFFFF4, 0x280, 0x32, 0x80000000);
    } else {
        *(unsigned char *)(p + 0x3D4) = 0;
    }
}

unsigned int func_003101B0(char *, int, int);

unsigned int func_00310200(char *, int, int);

void func_001ECFF0(char *p, int x, int y, int s) {
    extern int D_005829F0[];
    extern int D_005829F4[];
    int w;
    int h;
    if (s != 0) {
        unsigned int r;
        r = func_003101B0(D_01DFA340, s, 0);
        {
            unsigned int lo = r & 0xFFFF;
            w = r >> 16;
            r = lo;
            y += r;
        }
        h = 0;
        h += func_00310200(D_01DFA340, D_005829F0[D_00666712[0] * 2], 0) >> 16;
        h += 0x32;
        h += func_00310200(D_01DFA340, D_005829F4[D_00666712[0] * 2], 0) >> 16;
        x += w / 2 - h / 2;
    }
    *(unsigned char *)(p + 0xC04) = 1;
    *(unsigned char *)(p + 0xC05) = 1;
    *(int *)(p + 0xC08) = x;
    *(int *)(p + 0xC0C) = y;
}

void func_00138150();

void func_001388B0();

void func_001A9150();

void func_001ECAA0(void) {
    func_00138150(21);
    func_001A9150(21);
    func_001388B0(4);
    func_001388B0(5);
}

void func_001381C0();

void func_001381D0();

void func_001ECAE0(void) {
    func_001381C0(21);
    func_001A9150(21);
    func_001381D0(21);
    func_001388B0(4);
    func_001388B0(5);
}

extern char D_005BE098;

void func_00195E10();

void func_0022CA80();

void func_001ECB40(int p0) {
    extern int D_005BE09C;
    func_0022CA80((p0 + 3132));
    func_00195E10(&D_005BE098);
    D_005BE09C = (p0 + 16);
}

extern char D_01CB05E0[];

int func_001EBC30();

int func_001EDD20();

int func_001EBD90(p0) int p0; {
    int tmp0;
    int tmp1;
    tmp0 = func_001EDD20(D_01CB05E0);
    *(int *)((char *)p0 + 8) = tmp0;
    tmp1 = func_001EBC30(p0);
    return tmp1;
}

int func_001EBDE0(p0) char *p0; {
    return (short)(*(unsigned char *)(*(char **)(p0 + 8) + 3) + 1);
}

void func_001EBE00(p0, p1, p2) char *p0; char *p1; int p2; {
    *(short *)(p1 + 4) = *(signed char *)((char (*)[10])((char *)*(int *)(p0 + 8) + 14))[(short)p2];
    *(short *)(p1 + 6) = *(signed char *)((char (*)[10])((char *)*(int *)(p0 + 8) + 15))[(short)p2];
    *(short *)(p1 + 0) = (*(short *)(p1 + 4) - ((unsigned int)*(unsigned short *)((char (*)[10])((char *)*(int *)(p0 + 8) + 10))[(short)p2] >> 1));
    *(short *)(p1 + 2) = (*(short *)(p1 + 6) - ((unsigned int)*(unsigned short *)((char (*)[10])((char *)*(int *)(p0 + 8) + 12))[(short)p2] >> 1));
    *(short *)(p1 + 8) = *(unsigned short *)((char (*)[10])((char *)*(int *)(p0 + 8) + 6))[(short)p2];
    *(short *)(p1 + 10) = *(unsigned short *)((char (*)[10])((char *)*(int *)(p0 + 8) + 8))[(short)p2];
    *(short *)(p1 + 12) = *(unsigned short *)((char (*)[10])((char *)*(int *)(p0 + 8) + 10))[(short)p2];
    *(short *)(p1 + 14) = *(unsigned short *)((char (*)[10])((char *)*(int *)(p0 + 8) + 12))[(short)p2];
}

void func_00138140();

int func_00138180();

int func_00138190();

void func_001381A0();

void func_001381B0();

void func_001381E0();

int func_001381F0();

void func_001382E0();

void func_001382F0();

void func_00138320();

void func_001A8970();

void func_001A8A20();

void func_001A8AD0();

void func_001A8B90();

void func_001A8C40();

void func_001A8DC0();

void func_001A8E70();

void func_001A8F20();

void func_001A8FF0();

void func_001A90A0();

void func_001B35B0();

int func_001EC940(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    func_001A8970(1);
    func_001A8A20(2);
    func_001A8AD0(3);
    func_001382E0(4);
    func_001388B0(0);
    func_001382F0(4);
    func_001A8B90(7);
    func_001A8C40(8);
    func_001A8DC0(9);
    func_001A8E70(11);
    func_001388B0(1);
    func_001381A0(14);
    func_001B35B0();
    func_001381E0(15);
    func_001388B0(2);
    func_001381F0(15);
    func_001381B0(15);
    func_001A8FF0(16);
    func_001A8F20(17);
    func_001381E0(19);
    func_001388B0(3);
    func_001381F0(19);
    func_001A90A0(20);
    func_00138150(21);
    func_001A9150(21);
    func_00138320(22);
    func_001388B0(4);
    func_001381E0(25);
    func_001388B0(5);
    v3 = func_001381F0(25);
    tmp0 = *(unsigned char *)(v0 + 968);
    v1 = 28;
    if (tmp0 == 1) {
        func_00138140(v1);
        v2 = 28;
        if (*(unsigned char *)(v0 + 970) == 0) {
            v3 = func_00138180(v2);
        } else {
            v3 = func_00138190(28);
        }
        *(char *)(v0 + 969) = 1;
        *(char *)(v0 + 968) = 0;
    }
    return v3;
}

int func_00105E68();

int func_001ECB80(p0, p1, p2) int p0; int p1; int p2; {
    int tmp0;
    tmp0 = func_00105E68(p1, (p0 + 336), p2, 1);
    *(int *)((char *)p1 + 0) = (*(int *)((char *)p1 + 0) >> 4);
    *(int *)((char *)p1 + 4) = (*(int *)((char *)p1 + 4) >> 4);
    *(int *)((char *)p1 + 8) = (*(int *)((char *)p1 + 8) >> 4);
    return tmp0;
}

short func_001EBDD0(char *p) { return *(short *)(p + 4); }

int func_001ECB20(void) { return 0; }

void func_001ECBE0(void) {}

void func_00195E00();

void func_001ECB30(void) {
    func_00195E00(&D_005BE098);
}
