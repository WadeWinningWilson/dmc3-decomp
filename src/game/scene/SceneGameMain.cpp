class ObjSnd {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
    virtual void m18(unsigned int, int);
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual int m2C();
};

extern "C" void func_0048D950(char *, int, int, int, int);

extern "C" void func_0048D990(char *);

extern "C" int func_0048DBC0(char *);

extern "C" {
void func_00237C10(char *p) {
    extern ObjSnd *D_005BC1A8;
    extern void func_001B1120(int);
    extern char D_01CAF67B[];
    extern char D_00645A30[];
    extern void func_00195520(char *, int);
    unsigned char r;
    func_001B1120(1);
    switch (*(unsigned char *)(p + 0x19)) {
    case 0:
        D_01CAF67B[0] = 1;
        func_0048D950(p + 0x193F8, 3, 5, 0, 0);
        D_005BC1A8->m18(0x80000000, 0x1E);
        *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
        break;
    case 1:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
        }
        break;
    case 2:
        func_0048D990(p + 0x193F8);
        r = (unsigned char)func_0048DBC0(p + 0x193F8);
        if (r != 0) {
            switch (r) {
            case 1:
            case 2:
                *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
                break;
            }
        }
        break;
    case 3:
        D_01CAF67B[0] = 0;
        *(int *)(p + 0x19480) = 1;
        *(unsigned char *)(p + 0x18) = 3;
        *(unsigned char *)(p + 0x19) = 0;
        break;
    }
    func_00195520(D_00645A30, 0x2C);
    func_001B1120(0);
}
}

extern "C" char D_01DF5D20[];

extern "C" int D_01CAFF10[];

extern "C" int D_01CAFF38[];

extern "C" int D_01CAFF14[];

extern "C" char D_01CAF520[];

extern "C" char D_006011E4[];

extern "C" char D_00631568[];

extern "C" int D_005BE09C;

extern "C" void func_001F9BF0(char *);

extern "C" void func_0020E4D0(char *, int, int);

extern "C" void func_00286F20(char *, int);

extern "C" void func_0027BEA0(char *);

extern "C" void func_001ACCD0(int);

extern "C" void func_0013E0A0(char *);

class ObjCam20 {
public:
    virtual void d0();
    virtual void mC();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void m20();
};

extern "C" {
void func_00235A30(char *p) {
    extern char D_01CAFF0C[];
    char *g;
    *(int *)(p + 0xC) = D_01CAFF10[0];
    func_001F9BF0(D_01DF5D20);
    D_01CAFF38[0] = *(int *)(p + 0x10) = *(short *)(*(char **)(*(char **)(p + 0xC) + 4) + 0xF2);
    *(int *)(p + 0x14) = *(short *)(*(char **)(*(char **)(p + 0xC) + 4) + 0xF4);
    func_0020E4D0(*(char **)(*(char **)(p + 0xC) + 4), *(int *)(p + 0x10), *(int *)(p + 0x14));
    func_00286F20(*(char **)(*(char **)(p + 0xC) + 8), *(int *)(p + 0x10));
    *(char **)D_01CAFF0C = p + 0x140;
    *(char **)(p + 0x164) = p;
    *(char **)(p + 0x140) = p + 0x5BF0;
    *(int *)(p + 0x158) = *(int *)(*(char **)(p + 0xC) + 4);
    *(char **)(p + 0x15C) = p + 0x180;
    *(char **)(p + 0x160) = p + 0xB70;
    *(int *)(p + 0x144) = *(int *)(p + 0xC);
    *(char **)(p + 0x16C) = p + 0x18E94;
    *(char **)(p + 0x170) = p + 0x18EA0;
    *(char **)(p + 0x168) = p + 0x19484;
    if (*(int *)(p + 0x10) == 0xC) {
        (*(char **)D_01CAFF0C)[0xA] = 1;
    } else {
        (*(char **)D_01CAFF0C)[0xA] = 0;
    }
    D_01CAFF14[0] = (int)(p + 0x30);
    func_0027BEA0(p + 0x18EA8);
    *(char **)(p + 0x2308) = p + 0x45C0;
    *(char **)(p + 0x230C) = p + 0x47C0;
    *(unsigned char *)(p + 0x5BE0) = 0;
    D_01CAF520[0] = 0;
    (*(char **)D_01CAFF0C)[9] = 0;
    func_001ACCD0(D_005BE09C);
    func_0013E0A0(D_006011E4);
    func_0013E0A0(D_00631568);
    g = *(char **)D_01CAFF0C;
    if (*(unsigned char *)(g + 0xA) != 0) {
        (*(ObjCam20 **)(*(char **)(g + 4) + 0x10))->mC();
        (*(ObjCam20 **)(*(char **)(g + 4) + 0x10))->m20();
    }
}
}

extern "C" void func_001AD140(char *);

extern "C" int D_005BE1A4;

extern "C" int D_01CB0514[];

extern "C" char D_006011CC[];

extern "C" char D_00631550[];

extern "C" char *func_004FF3D0();

extern "C" int func_004FFAB0(char *);

extern "C" void func_0021D000(char *, int);

extern "C" void func_0020E570(char *);

extern "C" void func_0020E580(char *);

extern "C" void func_00253920(char *);

extern "C" void func_00331350(char *);

class ObjE18 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void m18();
};

extern "C" {
void func_00237EC0(char *p) {
    extern char D_01CAFF0C[];
    extern ObjSnd *D_005BC1A8;
    extern char D_01DFABA0[];
    extern void func_001B1120(int);
    extern char D_00645A30[];
    extern void func_00195520(char *, int);
    extern void func_0013E020(char *, int, int);
    func_001B1120(1);
    switch (*(unsigned char *)(p + 0x19)) {
    case 0:
        *(unsigned char *)(*(char **)D_01CAFF0C + 9) = 1;
        if (D_01CB0514[0] != -1) {
            D_01CB0514[0] = D_01CB0514[0] + 1;
        }
        *(char **)(p + 0x18EA4) = func_004FF3D0();
        if (*(char **)(p + 0x18EA4) == 0) {
            D_005BC1A8->m18(0x80000000, 0x4B);
            D_005BE1A4 = 1;
            *(unsigned char *)(p + 0x1B) = 6;
            *(unsigned char *)(p + 0x19) = 3;
        } else {
            *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
        }
        break;
    case 1:
        switch ((unsigned char)func_004FFAB0(*(char **)(p + 0x18EA4))) {
        case 0:
            break;
        case 1:
            func_0021D000(*(char **)(*(char **)D_01CAFF0C + 0xC), 1);
            *(unsigned char *)(*(char **)D_01CAFF0C + 9) = 0;
            if (*(char **)(p + 0x18EA4) != 0) {
                func_001AD140(*(char **)(p + 0x18EA4));
            }
            *(unsigned char *)(p + 0x18) = 1;
            *(unsigned char *)(p + 0x19) = 0;
            break;
        case 2:
            func_0020E570(*(char **)(*(char **)(p + 0xC) + 4));
            func_0020E580(*(char **)(*(char **)(p + 0xC) + 4));
            func_00253920(*(char **)(p + 0x2058));
            (*(ObjE18 **)(*(char **)(p + 0xC) + 0x10))->m18();
            D_005BC1A8->m18(0x80000000, 0x20);
            func_00331350(D_01DFABA0);
            func_0013E020(D_006011CC, 0x1E, 0);
            func_0013E020(D_00631550, 0x1E, 0);
            *(unsigned char *)(p + 0x1B) = 2;
            *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
            break;
        case 3:
            D_005BC1A8->m18(0x80000000, 0x20);
            func_0013E020(D_006011CC, 0x1E, 0);
            func_0013E020(D_00631550, 0x1E, 0);
            *(unsigned char *)(p + 0x1B) = 7;
            *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
            break;
        case 4:
            D_005BC1A8->m18(0x80000000, 0x4B);
            func_0013E020(D_006011CC, 0x1E, 0);
            func_0013E020(D_00631550, 0x1E, 0);
            D_005BE1A4 = 1;
            *(unsigned char *)(p + 0x1B) = 6;
            *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
            break;
        }
        break;
    case 2:
        if (*(char **)(p + 0x18EA4) != 0) {
            func_001AD140(*(char **)(p + 0x18EA4));
        }
        *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
    case 3:
        if (D_005BC1A8->m2C() != 0) {
            *(unsigned char *)(p + 0x18) = 0xB;
            *(unsigned char *)(p + 0x19) = 0;
        }
        break;
    }
    func_00195520(D_00645A30, 0x2C);
    func_001B1120(0);
}
}

extern "C" void func_00205370(char *);

extern "C" char D_01DFA310[];

extern "C" char D_01C61900[];

extern "C" void func_00202590(char *);

extern "C" void func_00195CC0(char *);

extern "C" void func_00195B40(char *);

extern "C" void func_0023A830(char *);

extern "C" void func_0023A710(char *, int);

extern "C" int func_00195BD0(char *);

extern "C" void func_00207F40(void);

extern "C" void func_00208480(void);

extern "C" void func_0030E540(char *);

extern "C" void func_0027BF60(char *);

extern "C" int func_001C6790(char *);

extern "C" void func_0020F250(char *);

extern "C" void func_00195460(char *);

class V144c {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void d66();
    virtual void d67();
    virtual void d68();
    virtual void d69();
    virtual void d70();
    virtual void d71();
    virtual void d72();
    virtual void d73();
    virtual void d74();
    virtual void d75();
    virtual void d76();
    virtual void d77();
    virtual void d78();
    virtual void m144(char *);
};

extern "C" {
void func_00238BA0(char *p) {
    extern char D_00645A30[];
    unsigned char *q;
    switch (*(unsigned char *)(p + 0x19)) {
    case 0:
        if (*(V144c **)(p + 0x2058)) {
            (*(V144c **)(p + 0x2058))->m144(*(char **)(p + 0xC) + 0xFC);
            func_00205370(*(char **)(p + 0x2058));
            *(int *)(p + 0x2058) = 0;
        }
        if (*(char **)(p + 0x205C)) {
            func_00205370(*(char **)(p + 0x205C));
            *(int *)(p + 0x205C) = 0;
        }
        func_00202590(*(char **)(p + 0x2060));
        func_00195CC0(D_00645A30);
        func_00195B40(D_00645A30);
        func_0023A830(p);
        q = (unsigned char *)(*(char **)(*(char **)(p + 0xC) + 4) + 0x9A);
        if (*q) {
            *q = 0;
            func_0023A710(p, 0);
        }
        (*(unsigned char *)(p + 0x19))++;
        break;
    case 1:
        if (!func_00195BD0(D_00645A30)) break;
        (*(unsigned char *)(p + 0x19))++;
    case 2:
        func_00207F40();
        func_00208480();
        func_0030E540(D_01DFA310);
        func_0027BF60(p + 0x18EA8);
        (*(unsigned char *)(p + 0x19))++;
        break;
    case 3:
        if ((unsigned char)func_001C6790(D_01C61900)) {
            if (*(unsigned char *)(p + 8)) {
                *(signed char *)(p + 0x1A) = -1;
            } else {
                switch (*(signed char *)(p + 0x1B)) {
                case 2: *(signed char *)(p + 0x1A) = 2; break;
                case 3: *(signed char *)(p + 0x1A) = 3; break;
                case 4: *(signed char *)(p + 0x1A) = 4; break;
                case 5: *(signed char *)(p + 0x1A) = 5; break;
                case 6: *(signed char *)(p + 0x1A) = 6; break;
                case 7: *(signed char *)(p + 0x1A) = 7; break;
                case 8: *(signed char *)(p + 0x1A) = 8; break;
                default: *(signed char *)(p + 0x1A) = 1; break;
                }
            }
            if (*(signed char *)(p + 0x1B) == 2) func_0020F250(*(char **)(*(char **)(p + 0xC) + 4));
            *(unsigned char *)(p + 0x18) = 12;
            *(unsigned char *)(p + 0x19) = 0;
        }
        break;
    }
    func_00195460(D_00645A30);
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

extern "C" char D_00666750[];

extern "C" char D_01C77230[];

extern "C" int D_005BC660;

extern "C" void func_00195870(char *, int);

extern "C" char *func_001AEA60(char *, int, int);

extern "C" int func_002DDC30(char *, int);

extern "C" void func_00239F40(char *);

extern "C" void func_00331080(char *);

extern "C" void func_0023A340(char *);

extern "C" {
void func_00237610(char *p) {
    extern char D_01CAFF0C[];
    extern char D_01DFABA0[];
    extern Snd29C *D_005BC1A8;
    extern char D_00645A30[];
    extern char D_006011B4[];
    extern char D_00631538[];
    extern char D_01CAF67B[];
    extern void func_001B1120(int);
    extern void func_00239C60(char *);
    extern void func_0013E020(char *, int, int);
    extern void func_0013E040(char *, int, int);
    extern void func_003310C0(char *);
    extern void func_003311E0(char *);
    extern void func_0023A350(char *);
    extern void func_00239DE0(char *);
    extern void func_00195520(char *, int);
    char *o;
    func_001B1120(1);
    switch (*(unsigned char *)(p + 0x19)) {
    case 0:
        D_005BC1A8->m24(0, 0);
        func_00195870(D_00645A30, 5);
        func_00195870(D_00645A30, 0xA);
        func_00195870(D_00645A30, 0xB);
        func_00195870(D_00645A30, 0xC);
        func_00195870(D_00645A30, 0xD);
        func_00195870(D_00645A30, 0xE);
        D_01C77230[0] = 1;
        *(int *)(p + 0x18E9C) = func_002DDC30(func_001AEA60(D_00666750, 6, 5), *(int *)(p + 0x19480));
        func_00239C60(p);
        func_00239F40(p);
        *(unsigned char *)(*(char **)D_01CAFF0C + 9) = 1;
        func_0013E020(D_006011B4, 0x1E, 0x32);
        func_0013E020(D_00631538, 0x1E, 0x32);
        func_003310C0(D_01DFABA0);
        *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
        break;
    case 1:
        func_0023A340(p);
        o = *(char **)(p + 0x18E9C);
        switch (*(int *)(o + 0x78)) {
        case -1:
            break;
        case 0:
            *(unsigned char *)(o + 0x6C) = 1;
            func_0023A350(p);
            D_01C77230[0] = 0;
            *(unsigned char *)(p + 0x193F4) = 0;
            *(unsigned char *)(p + 0x18) = 4;
            *(unsigned char *)(p + 0x19) = 0;
            break;
        case 1:
            *(unsigned char *)(o + 0x6C) = 1;
            func_0023A350(p);
            D_01C77230[0] = 0;
            *(unsigned char *)(p + 0x18) = 0xA;
            *(unsigned char *)(p + 0x19) = 0;
            break;
        case 2:
            func_003311E0(D_01DFABA0);
            *(unsigned char *)(*(char **)(p + 0x18E9C) + 0x6C) = 1;
            func_0023A350(p);
            D_005BC660 = 2;
            D_01C77230[0] = 0;
            *(unsigned char *)(p + 0x1B) = 8;
            *(unsigned char *)(p + 0x18) = 0xB;
            *(unsigned char *)(p + 0x19) = 0;
            func_00331080(D_01DFABA0);
            break;
        case 3:
            func_003311E0(D_01DFABA0);
            *(unsigned char *)(*(char **)(p + 0x18E9C) + 0x6C) = 1;
            func_0023A350(p);
            D_01C77230[0] = 0;
            *(unsigned char *)(p + 0x1B) = 7;
            *(unsigned char *)(p + 0x18) = 0xB;
            *(unsigned char *)(p + 0x19) = 0;
            func_00331080(D_01DFABA0);
            break;
        case 4:
            D_01CAF67B[0] = 1;
            *(unsigned char *)(p + 0x18) = 5;
            *(unsigned char *)(p + 0x19) = 0;
            break;
        case 5:
            *(unsigned char *)(o + 0x6C) = 1;
            func_0023A350(p);
            func_00239DE0(p);
            D_01C77230[0] = 0;
            *(unsigned char *)(*(char **)D_01CAFF0C + 9) = 0;
            *(unsigned char *)(p + 0x18) = 1;
            *(unsigned char *)(p + 0x19) = 0;
            func_0013E040(D_006011B4, 0x14, 0);
            func_0013E040(D_00631538, 0x14, 0);
            func_003311E0(D_01DFABA0);
            break;
        }
        break;
    }
    func_00195520(D_00645A30, 0x2C);
    func_001B1120(0);
}
}

extern "C" unsigned char D_01CAF679[];

extern "C" char D_01CAF67A[];

extern "C" char D_01CAF678[];

extern "C" char D_005BE110;

extern "C" void func_002390D0(char *, int);

extern "C" void func_003303F0(char *, int, int, int, int);

extern "C" void func_00239640(char *);

extern "C" void func_00370000(char *);

extern "C" void func_0036F540(char *);

extern "C" {
void func_00237240(char *p) {
    extern char D_01CAFF0C[];
    extern char D_01DFABA0[];
    extern Snd29C *D_005BC1A8;
    extern char D_00645A30[];
    extern void func_0013E020(char *, int, int);
    extern void func_00195520(char *, int);
    switch (*(unsigned char *)(p + 0x19)) {
    case 0:
        switch (*(int *)(p + 0x1C)) {
        case 0:
            D_005BC1A8->m18(0x80000000, 0x1E);
            func_0013E020(D_006011CC, 0x1E, 0);
            func_0013E020(D_00631550, 0x1E, 0);
            break;
        case 1:
            D_01C77230[0] = 1;
            func_002390D0(p, 0);
            func_003303F0(D_01DFABA0, 0, 9, 0, 0);
            *(unsigned char *)(*(char **)D_01CAFF0C + 9) = 1;
            break;
        case 2:
            if (D_01CAF679[0] == 0) {
                D_01CAF67A[0] = 0;
                D_01CAF678[0] = 1;
            }
            break;
        case 3:
            D_005BE110 = 1;
            D_005BC1A8->m18(0x80FFFFFF, 0x3C);
            func_003303F0(D_01DFABA0, 0, 9, 0, 0);
            break;
        case 4:
            D_01C77230[0] = 1;
            func_002390D0(p, 1);
            func_003303F0(D_01DFABA0, 0, 9, 0, 0);
            *(unsigned char *)(*(char **)D_01CAFF0C + 9) = 1;
            break;
        }
        *(int *)(p + 0x20) = 0;
        switch (*(unsigned char *)(*(char **)(*(char **)(p + 0xC) + 4) + 0xF0)) {
        case 0:
            *(unsigned char *)(p + 0x1B) = 2;
            func_00331350(D_01DFABA0);
            break;
        case 1:
            *(unsigned char *)(p + 0x1B) = 3;
            break;
        case 2:
            *(unsigned char *)(p + 0x1B) = 4;
            break;
        case 3:
            *(unsigned char *)(p + 0x1B) = 5;
            break;
        }
        *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
    case 1:
        switch (*(int *)(p + 0x1C)) {
        case 1: case 4:
            func_00195870(D_00645A30, 0xE);
            func_00239640(p);
            *(unsigned char *)(p + 0x19) = 2;
            *(int *)(p + 0x20) = 0;
            break;
        case 2:
            func_00370000(*(char **)(p + 0xC));
            if (*(char **)(*(char **)(p + 0xC) + 0x18) != 0) func_0036F540(*(char **)(*(char **)(p + 0xC) + 0x18));
            *(unsigned char *)(p + 0x19) = 4;
            *(int *)(p + 0x20) = 0;
            break;
        default:
            *(unsigned char *)(p + 0x19) = 5;
            *(int *)(p + 0x20) = 0;
            break;
        }
        break;
    case 2:
        func_00239640(p);
        if (++*(int *)(p + 0x20) < 0x1E) break;
        *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
        *(int *)(p + 0x20) = 0;
        break;
    case 3:
        if (++*(int *)(p + 0x20) < 5) break;
        if (func_001C6790(D_01C61900) == 0) break;
        D_01C77230[0] = 0;
        *(unsigned char *)(p + 0x18) = 0xB;
        *(unsigned char *)(p + 0x19) = 0;
        break;
    case 4:
        func_00195520(D_00645A30, 0x3F);
        if (++*(int *)(p + 0x20) < 0x1E) break;
        *(unsigned char *)(p + 0x18) = 0xB;
        *(unsigned char *)(p + 0x19) = 0;
        break;
    case 5:
        if (++*(int *)(p + 0x20) < 0x1E) break;
        *(unsigned char *)(p + 0x18) = 0xB;
        *(unsigned char *)(p + 0x19) = 0;
        break;
    }
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 0xA) != 0) func_00195520(D_00645A30, 0x2C);
}
}

extern "C" {
void func_00408DE0(char *, signed char);
}

extern "C" {
void func_00408E50(char *);
}

extern "C" {
int func_00409250(char *);
}

extern "C" {
int func_00409260(char *);
}

class V18_2_iiv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m(int, int);
};

class V24_2_iiv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m(int, int);
};

class V2C_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual int m(void);
};

extern "C" {
int func_00237980(int p0) {
    extern char * D_005BC1A8;
    extern char D_006011B4[];
    extern char D_00631538[];
    extern char D_00645A30[];
    extern char D_01CAF67B[];
    extern char D_01CAFF0C[];
    extern char D_01DFABA0[];
    void func_0013E020(char *, int, int);
    void func_0013E040(char *, int, int);
    void func_00195520(char *, int);
    int func_001B1120(int);
    void func_00239C60(char *);
    void func_00239DE0(char *);
    void func_003310C0(char *);
    void func_003311E0(char *);
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    int tmp7;
    int tmp9;
    int tmp10;
    int tmp14;
    v0 = (char *)p0;
    func_001B1120(1);
    v1 = *(unsigned char *)(v0 + 25);
    tmp0 = 4;
    if (v1 != tmp0) {
        if (v1 != 3) {
            tmp1 = 2;
            if (v1 != tmp1) {
                switch (v1) {
                case 0:
                    *(char *)D_01CAF67B = 1;
                    func_00239C60(v0);
                    func_00408DE0((v0 + 0x19250), *(signed char *)(v0 + 103412));
                    if (*(unsigned char *)(v0 + 103412) == 0) {
                        ((V18_2_iiv *)D_005BC1A8)->m(0x80000000, 30);
                        *(char *)(v0 + 25) = (*(unsigned char *)(v0 + 25) + 1);
                    } else {
                        *(char *)(*(char **)D_01CAFF0C + 9) = 1;
                        func_0013E020(D_006011B4, 30, 50);
                        func_0013E020(D_00631538, 30, 50);
                        func_003310C0(D_01DFABA0);
                        *(char *)(v0 + 25) = 2;
                    }
                    break;
                case 1:
                    tmp7 = ((V2C_0_i *)D_005BC1A8)->m();
                    if ((tmp7 & 255) == 1) {
                        *(char *)(v0 + 25) = (*(unsigned char *)(v0 + 25) + 1);
                    }
                    break;
                }
            } else {
                *(char *)(v0 + 25) = (v1 + 1);
            }
        } else {
            func_00408E50((v0 + 0x19250));
            tmp9 = func_00409250((v0 + 0x19250));
            v2 = 0x10000;
            if ((tmp9 & 255) == 1) {
                tmp10 = func_00409260((v0 + (v2 | 37456)));
                v3 = 0x20000;
                if ((tmp10 & 255) == 1) {
                    *(char *)((v0 + v3) + -27660) = 1;
                }
                *(char *)(v0 + 25) = (*(unsigned char *)(v0 + 25) + 1);
            }
        }
    } else {
        *(char *)D_01CAF67B = 0;
        v4 = 0x20000;
        if (*(unsigned char *)(v0 + 103412) == 0) {
            *(int *)((v0 + v4) + -27520) = 0;
            *(char *)(v0 + 24) = 3;
            *(char *)(v0 + 25) = 0;
        } else {
            ((V24_2_iiv *)D_005BC1A8)->m(0, 0);
            *(char *)(*(char **)D_01CAFF0C + 9) = 0;
            func_0013E040(D_006011B4, 20, 0);
            func_0013E040(D_00631538, 20, 0);
            func_003311E0(D_01DFABA0);
            func_00239DE0(v0);
            *(char *)(v0 + 24) = 1;
            *(char *)(v0 + 25) = 0;
        }
    }
    func_00195520(D_00645A30, 44);
    tmp14 = func_001B1120(0);
    return tmp14;
}
}

extern "C" {
void func_00486390(char *, int);
}

extern "C" {
int func_00486460(char *);
}

extern "C" {
int func_00237D90(int p0) {
    extern char * D_005BC1A8;
    extern char D_00645A30[];
    extern char D_01CAF67B[];
    void func_00195520(char *, int);
    int func_001B1120(int);
    void func_0023A350(char *);
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp4;
    int tmp7;
    int tmp8;
    v0 = (char *)p0;
    func_001B1120(1);
    v1 = *(unsigned char *)(v0 + 25);
    tmp0 = 2;
    if (v1 != tmp0) {
        switch (v1) {
        case 0:
            ((V18_2_iiv *)D_005BC1A8)->m(0x80000000, 30);
            *(char *)(v0 + 25) = (*(unsigned char *)(v0 + 25) + 1);
            break;
        case 1:
            tmp4 = ((V2C_0_i *)D_005BC1A8)->m();
            v2 = 0x20000;
            if ((tmp4 & 255) == 1) {
                *(char *)(*(char **)((v0 + v2) + -29028) + 108) = 1;
                func_0023A350(v0);
                func_00486390((v0 + 0x19444), 1);
                *(char *)(v0 + 25) = (*(unsigned char *)(v0 + 25) + 1);
            }
            break;
        }
    } else {
        tmp7 = func_00486460((v0 + 0x19444));
        v3 = 0x20000;
        if ((tmp7 & 255) == 1) {
            *(int *)((v0 + v3) + -27520) = 4;
            *(char *)D_01CAF67B = 0;
            *(char *)(v0 + 24) = 3;
            *(char *)(v0 + 25) = 0;
        }
    }
    func_00195520(D_00645A30, 44);
    tmp8 = func_001B1120(0);
    return tmp8;
}
}
