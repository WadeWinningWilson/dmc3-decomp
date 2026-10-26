extern "C" char D_01DFABA0[];

extern "C" int D_005BE09C;

extern "C" void func_001EC8A0();

extern "C" void func_00330140(char *, char *, char *, char *);

extern "C" void func_003301F0(char *, char *);

extern "C" void func_001ECD70(char *);

extern "C" void func_001ECB30(char *);

extern "C" int func_0022C8C0(char *);

extern "C" void func_001AE9B0(char *);

extern "C" void func_001ECB40(char *);

extern "C" void func_001C4110(char *);

extern "C" void func_001ECBF0(char *);

extern "C" void func_003712C0(char *);

extern "C" void func_0028C9B0(char *);

extern "C" void func_0030EB50(char *);

extern "C" void func_001ECF20(char *);

extern "C" void func_001EC8E0(char *);

extern "C" void func_0022CAD0(char *);

extern "C" unsigned char func_001ECB20(char *);

extern "C" char D_01CAF2B0[];

extern "C" char D_01C61900[];

extern "C" char D_01DF8E48[];

extern "C" char D_01DFA340[];

class Snd10 {
public:
    virtual void d0(); virtual void d1(); virtual void f();
};

extern "C" {
void func_001EC390(char *p) {
    extern char D_00666750[];
    extern char *D_005BC1A8;
    int r;
    char *m;
    func_001EC8A0();
    m = (char *)D_005BE09C + 0x1E0;
    func_00330140(D_01DFABA0, m + 0x30, m + 0x20, m + 0x10);
    func_003301F0(D_01DFABA0, (char *)D_005BE09C + 0x100);
    func_001ECD70(p);
    func_001ECB30(D_01CAF2B0);
    r = func_0022C8C0(p + 0xC3C);
    func_001AE9B0(D_00666750);
    func_001ECB40(D_01CAF2B0);
    func_001C4110(D_01C61900);
    func_001ECBF0(p);
    ((Snd10 *)D_005BC1A8)->f();
    func_003712C0(p + 0x2C0);
    func_0028C9B0(D_01DF8E48);
    func_0030EB50(D_01DFA340);
    func_001ECF20(p);
    func_0030EB50(p + 0x3D4);
    func_001EC8E0(p);
    if (r == -1) {
        func_0022CAD0(p + 0xC3C);
        *(unsigned char *)(p + 8) = 2;
        *(unsigned char *)(p + 0xB) = 0;
        *(unsigned char *)(p + 0xA) = 0;
        *(unsigned char *)(p + 9) = 0;
        *(short *)(p + 0xE) = 0;
        *(short *)(p + 0xC) = 0;
    } else if (*(unsigned char *)(p + 0x26E) == 0 && func_001ECB20(p) == 1) {
        *(int *)(p + 0xC58) = -2;
        *(unsigned char *)(p + 0x26E) = 1;
    }
}
}

extern "C" char D_01C61820[];

extern "C" signed char D_00666717[];

extern "C" void func_001B6470(char *, int *);

extern "C" void func_001B6480(char *, int);

extern "C" void func_001B64C0(char *, int);

extern "C" void func_001B64D0(char *, short *);

extern "C" void func_001B6510(char *, int);

extern "C" void func_001B6520(char *, int);

extern "C" void func_001B6550(char *, int);

extern "C" void func_001B6630(char *, int);

extern "C" void func_001ECBF0(char *) {
    short s[2];
    int r[7];
    int c;
    int col;
    bool pos;
    int i;
    c = D_00666717[0];
    r[0] = 0;
    r[1] = 0;
    r[2] = 0xFFFFF3;
    pos = true;
    if (c < 0) pos = false;
    c = (c < 0) ? -c : c;
    if ((unsigned int)c > 0x58) c = 0x57;
    col = (c << 16) + (c + (c << 8)) + 0x80000000;
    for (i = 0; i < 8; i++) {
        r[0] = (int)((float)i * 64.0f);
        s[0] = 0x40;
        s[1] = 0x100;
        func_001B6470(D_01C61820, r);
        func_001B6480(D_01C61820, 0);
        func_001B64C0(D_01C61820, col);
        func_001B64D0(D_01C61820, s);
        func_001B6510(D_01C61820, 5);
        func_001B6520(D_01C61820, 10);
        if (pos) {
            func_001B6550(D_01C61820, 2);
        } else {
            func_001B6550(D_01C61820, 3);
        }
        func_001B6630(D_01C61820, 0);
    }
}

class Snd29C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
    virtual void m18(unsigned int, int);
    virtual void m1C(unsigned int, int, int);
    virtual void m20(unsigned int, int, int);
    virtual void m24(int, int);
    virtual void m28(int, int, int);
    virtual int m2C();
};

extern "C" void func_001AF080(char *, int);

extern "C" void func_00196070(char *);

extern "C" void func_001960F0(char *, int);

extern "C" void func_001C3FB0(char *);

extern "C" void func_001ECBE0(char *);

extern "C" int func_001EC640(char *);

extern "C" void func_001AE8F0(char *);

extern "C" void func_001B0EF0(void);

extern "C" char *func_001AF3F0(char *, char *, int, int);

extern "C" int func_0032FD00(char *, int);

extern "C" void func_002F9780(char *, int, int);

extern "C" int func_0032FCD0(char *, int);

extern "C" void func_002F9790(char *, int, int);

extern "C" int func_0013D670(char *);

extern "C" void func_002F97B0(char *, int, int, int, int);

extern "C" int func_002F9800(char *, int);

extern "C" void func_00330FE0(char *, char *);

extern "C" void func_002F9770(char *, int);

extern "C" char *D_005BE0D8;

extern "C" int D_005BBA10;

extern "C" int D_005BC768;

extern "C" char D_006480D0[];

static inline int okC70(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" {
void func_001EC140(char *p) {
    extern Snd29C *D_005BC1A8;
    extern char D_00666750[];
    switch (*(signed char *)(p + 9)) {
    case 0:
        func_00196070(D_006480D0);
        func_001960F0(D_006480D0, 8);
        func_001C3FB0(D_01C61900);
        func_001ECBE0(p);
        D_005BC1A8->d1();
        *(unsigned char *)(p + 0x26C) = 1;
        *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
        *(unsigned char *)(p + 0xA) = 0;
    case 1:
        if ((unsigned char)func_001EC640(p) == 1) *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
        break;
    case 2:
        func_001AE8F0(D_00666750);
        func_001B0EF0();
        *(char **)(p + 0xC70) = func_001AF3F0(D_00666750, (char *)&D_005BBA10, 0, 0);
        *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
    case 3:
        func_001AE9B0(D_00666750);
        if ((unsigned char)okC70(*(unsigned char **)(p + 0xC70)) == 0) break;
        func_002F9780(D_01DFABA0, 0, func_0032FD00(D_01DFABA0, 0));
        func_002F9790(D_01DFABA0, 0, func_0032FCD0(D_01DFABA0, 0));
        func_002F97B0(D_01DFABA0, 0, *(int *)(*(char **)(p + 0xC70) + 0xC), func_0013D670(*(char **)(p + 0xC70) + 0x10), 0);
        *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
    case 4:
        if (func_002F9800(D_01DFABA0, 0) != 0) break;
        func_001AF080(D_00666750, *(int *)(p + 0xC70));
        func_00330FE0(D_01DFABA0, (char *)&D_005BC768);
        func_002F9770(D_01DFABA0, 0);
        *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
    case 5:
        *(short *)(D_005BE0D8 + 0x50) = 0;
        *(int *)(p + 0xC58) = 0;
        *(unsigned char *)(p + 0x3CC) = 1;
        *(unsigned char *)(p + 8) = 1;
        *(unsigned char *)(p + 0xB) = 0;
        *(unsigned char *)(p + 0xA) = 0;
        *(unsigned char *)(p + 9) = 0;
        *(short *)(p + 0xE) = 0;
        *(short *)(p + 0xC) = 0;
        break;
    }
}
}
