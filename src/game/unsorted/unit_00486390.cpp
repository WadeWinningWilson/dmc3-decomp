extern "C" char D_00666750[];

extern "C" void func_001AD140(char *);

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

extern "C" ObjSnd *D_005BC1A8;

extern "C" char *func_003B6EE0(char *);

static inline int ok487(char *o) {
    unsigned char r = 1;
    if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0;
    return r;
}

extern "C" {
void func_004870B0(char *p) {
    extern void func_001AF080(char *, int);
    extern int func_001AFB90(char *, int, int, int);
    extern char D_01DFA340[];
    char *q;
    switch (*(unsigned int *)(p + 4)) {
    case 0:
        if (!(unsigned char)ok487(*(char **)(p + 0x28))) break;
        if ((*(char **)(p + 0x14) = func_003B6EE0(*(char **)(p + 0x28))) == 0) break;
        *(int *)(p + 4) = 1;
    case 1:
        D_005BC1A8->m14(0x80000000, 5);
        *(int *)(p + 4) = 2;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            switch (*(signed char *)(*(char **)(p + 0x14) + 0x1302)) {
            case -1: case 0:
                break;
            case 1:
                *(signed char *)(p + 0x3A) = 1;
                D_005BC1A8->m18(0x80000000, 0x3C);
                *(int *)(p + 4) = 3;
                break;
            }
        }
        break;
    case 3:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            switch (*(signed char *)(p + 0x3A)) {
            case -1: case 0:
                break;
            case 1:
                if (*(unsigned char *)(p + 0x38) == 1) {
                    func_001AD140(*(char **)(p + 0x14));
                    *(int *)(p + 0x14) = 0;
                    *(int *)(p + 4) = 4;
                } else {
                    *(unsigned char *)(*(char **)(p + 0x14) + 0x1301) = 0;
                    *(int *)(p + 4) = 5;
                }
                *(int *)(p + 8) = 0;
                D_01DFA340[0] = 0;
                break;
            }
        }
        break;
    case 4:
        if (*(unsigned int *)(p + 8) < 5) (*(int *)(p + 8))++;
        else *(int *)(p + 4) = *(int *)(p + 4) + 1;
        break;
    case 5:
        if (*(unsigned char *)(p + 0x38) == 1) {
            func_001AF080(D_00666750, *(int *)(p + 0x28));
            *(int *)(p + 0x28) = 0;
            *(int *)(p + 0x20) = func_001AFB90(D_00666750, 0x1AE, 0, 8);
            *(int *)(p + 4) = 0;
        } else {
            *(unsigned char *)(*(char **)(p + 0xC) + 0x1900) = 1;
            q = *(char **)(p + 0xC);
            *(unsigned char *)(q + 4) = 1;
            *(signed char *)(q + 0x1903) = -1;
            *(unsigned char *)(q + 0x1900) = 1;
            *(unsigned char *)(q + 0x1901) = 0;
            *(int *)(p + 4) = 2;
        }
        D_005BC1A8->m14(0x80000000, 5);
        *(int *)p = 0;
        break;
    case 6:
        break;
    }
}
}

extern "C" char *func_003BAA20(char *);

extern "C" {
void func_004875C0(char *p) {
    extern void func_001AF080(char *, int);
    extern int func_001AFB90(char *, int, int, int);
    extern char D_01DFA340[];
    char *q;
    switch (*(unsigned int *)(p + 4)) {
    case 0:
        if (!(unsigned char)ok487(*(char **)(p + 0x30))) break;
        if ((*(char **)(p + 0x1C) = func_003BAA20(*(char **)(p + 0x30))) == 0) break;
        *(int *)(p + 4) = 1;
    case 1:
        D_005BC1A8->m14(0x80000000, 5);
        *(int *)(p + 4) = 2;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            switch (*(signed char *)(*(char **)(p + 0x1C) + 0x2502)) {
            case -1:
                break;
            case 15:
                *(signed char *)(p + 0x3A) = 15;
                D_005BC1A8->m18(0x80000000, 0x3C);
                *(int *)(p + 4) = 3;
                break;
            }
        }
        break;
    case 3:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            switch (*(signed char *)(p + 0x3A)) {
            case -1:
                break;
            case 15:
                if (*(unsigned char *)(p + 0x38) == 1) {
                    func_001AD140(*(char **)(p + 0x1C));
                    *(int *)(p + 0x1C) = 0;
                    *(int *)(p + 4) = 4;
                } else {
                    *(unsigned char *)(*(char **)(p + 0x1C) + 0x2500) = 0;
                    *(int *)(p + 4) = 5;
                }
                *(int *)(p + 8) = 0;
                D_01DFA340[0] = 0;
                break;
            }
        }
        break;
    case 4:
        if (*(unsigned int *)(p + 8) < 5) (*(int *)(p + 8))++;
        else *(int *)(p + 4) = *(int *)(p + 4) + 1;
        break;
    case 5:
        if (*(unsigned char *)(p + 0x38) == 1) {
            func_001AF080(D_00666750, *(int *)(p + 0x30));
            *(int *)(p + 0x30) = 0;
            *(int *)(p + 0x20) = func_001AFB90(D_00666750, 0x1AE, 0, 8);
            *(int *)(p + 4) = 0;
        } else {
            *(unsigned char *)(*(char **)(p + 0xC) + 0x1900) = 1;
            q = *(char **)(p + 0xC);
            *(unsigned char *)(q + 4) = 1;
            *(signed char *)(q + 0x1903) = -1;
            *(unsigned char *)(q + 0x1900) = 1;
            *(unsigned char *)(q + 0x1901) = 0;
            *(int *)(p + 4) = 2;
        }
        D_005BC1A8->m14(0x80000000, 5);
        *(int *)p = 0;
        break;
    case 6:
        break;
    }
}
}

extern "C" char *func_003B79B0(char *);

extern "C" {
void func_00487330(char *p) {
    extern void func_001AF080(char *, int);
    extern int func_001AFB90(char *, int, int, int);
    extern char D_01DFA340[];
    char *q;
    switch (*(unsigned int *)(p + 4)) {
    case 0:
        if (!(unsigned char)ok487(*(char **)(p + 0x2C))) break;
        if ((*(char **)(p + 0x18) = func_003B79B0(*(char **)(p + 0x2C))) == 0) break;
        *(int *)(p + 4) = 1;
    case 1:
        D_005BC1A8->m14(0x80000000, 5);
        *(int *)(p + 4) = 2;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            switch (*(signed char *)(*(char **)(p + 0x18) + 0xD02)) {
            case -1: case 0: case 1: case 2: case 3:
                break;
            case 4:
                *(signed char *)(p + 0x3A) = 4;
                D_005BC1A8->m18(0x80000000, 0x3C);
                *(int *)(p + 4) = 3;
                break;
            }
        }
        break;
    case 3:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            switch (*(signed char *)(p + 0x3A)) {
            case -1: case 0: case 1: case 2: case 3:
                break;
            case 4:
                if (*(unsigned char *)(p + 0x38) == 1) {
                    func_001AD140(*(char **)(p + 0x18));
                    *(int *)(p + 0x18) = 0;
                    *(int *)(p + 4) = 4;
                } else {
                    *(unsigned char *)(*(char **)(p + 0x18) + 0xD00) = 0;
                    *(int *)(p + 4) = 5;
                }
                *(int *)(p + 8) = 0;
                D_01DFA340[0] = 0;
                break;
            }
        }
        break;
    case 4:
        if (*(unsigned int *)(p + 8) < 5) (*(int *)(p + 8))++;
        else *(int *)(p + 4) = *(int *)(p + 4) + 1;
        break;
    case 5:
        if (*(unsigned char *)(p + 0x38) == 1) {
            func_001AF080(D_00666750, *(int *)(p + 0x2C));
            *(int *)(p + 0x2C) = 0;
            *(int *)(p + 0x20) = func_001AFB90(D_00666750, 0x1AE, 0, 8);
            *(int *)(p + 4) = 0;
        } else {
            *(unsigned char *)(*(char **)(p + 0xC) + 0x1900) = 1;
            q = *(char **)(p + 0xC);
            *(unsigned char *)(q + 4) = 1;
            *(signed char *)(q + 0x1903) = -1;
            *(unsigned char *)(q + 0x1900) = 1;
            *(unsigned char *)(q + 0x1901) = 0;
            *(int *)(p + 4) = 2;
        }
        D_005BC1A8->m14(0x80000000, 5);
        *(int *)p = 0;
        break;
    case 6:
        break;
    }
}
}

extern "C" signed char D_00666712[];

extern "C" char D_00666710[];

extern "C" char D_01DFA310[];

extern "C" char D_01CB1290[];

extern "C" char D_00540330[];

extern "C" int D_01CB12BC[];

extern "C" unsigned char D_01CAF67F[];

extern "C" char *func_003DDF20(char *);

extern "C" void func_0030E540(char *);

extern "C" void func_0030E440(char *, int);

extern "C" char *func_001AF3F0(char *, char *, int, int);

extern "C" void func_001AE690(char *);

extern "C" void func_001F3BF0(char *);

extern "C" int func_001F3CC0(char *, int, int, int);

extern "C" {
void func_00486B60(char *p) {
    extern unsigned char D_01DFA340[];
    extern void func_001AF080(char *, char *);
    extern char *func_001AFB90(char *, int, int, int);
    unsigned char ok;
    char *q;
    switch (*(int *)(p + 4)) {
    case 0:
        ok = 1;
        if (*(unsigned char *)(*(char **)(p + 0x24) + 1) != 0 && *(unsigned char *)(*(char **)(p + 0x24) + 1) != 3) ok = 0;
        if (ok == 0) break;
        *(signed char *)(p + 0x3B) = D_00666712[0];
        if ((*(char **)(p + 0x10) = func_003DDF20(*(char **)(p + 0x24))) == 0) break;
        *(int *)(p + 4) = 1;
    case 1:
        D_005BC1A8->m14(0x80000000, 5);
        *(int *)(p + 4) = 2;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            switch (*(signed char *)(*(char **)(p + 0x10) + 0x3D03)) {
            case -1:
            case 0:
            case 1:
            case 2:
                break;
            case 3:
                *(unsigned char *)(p + 0x3A) = 3;
                D_005BC1A8->m18(0x80000000, 0x3C);
                *(int *)(p + 4) = 3;
                D_01CAF67F[0] = 1;
                break;
            }
        }
        break;
    case 3:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            switch (*(signed char *)(p + 0x3A)) {
            case -1:
            case 0:
            case 1:
            case 2:
                break;
            case 3:
                if (*(unsigned char *)(p + 0x38) == 1) {
                    func_001AD140(*(char **)(p + 0x10));
                    *(char **)(p + 0x10) = 0;
                    *(int *)(p + 4) = 4;
                } else {
                    *(unsigned char *)(*(char **)(p + 0x10) + 0x3D00) = 0;
                    *(int *)(p + 4) = 5;
                }
                *(int *)(p + 8) = 0;
                D_01DFA340[0] = 0;
                break;
            }
        }
        break;
    case 4:
        if (*(unsigned int *)(p + 8) < 5) {
            (*(int *)(p + 8))++;
        } else {
            (*(int *)(p + 4))++;
        }
        break;
    case 5:
        if (*(signed char *)(p + 0x3B) != D_00666712[0]) {
            *(int *)(p + 4) = 6;
            *(int *)(p + 8) = 0;
        } else {
            if (*(unsigned char *)(p + 0x38) == 1) {
                func_001AF080(D_00666750, *(char **)(p + 0x24));
                *(char **)(p + 0x24) = 0;
                *(char **)(p + 0x20) = func_001AFB90(D_00666750, 0x1AE, 0, 8);
                *(int *)(p + 4) = 0;
            } else {
                *(unsigned char *)(*(char **)(p + 0xC) + 0x1900) = 1;
                q = *(char **)(p + 0xC);
                *(unsigned char *)(q + 4) = 1;
                *(signed char *)(q + 0x1903) = -1;
                *(unsigned char *)(q + 0x1900) = 1;
                *(unsigned char *)(q + 0x1901) = 0;
                *(int *)(p + 4) = 2;
                D_01CAF67F[0] = 0;
            }
            D_005BC1A8->m14(0x80000000, 5);
            *(int *)p = 0;
        }
        break;
    case 6:
        switch (*(int *)(p + 8)) {
        case 0:
            if (*(char **)(p + 0xC) != 0) {
                func_001AD140(*(char **)(p + 0xC));
                *(char **)(p + 0xC) = 0;
            }
            if (*(char **)(p + 0x10) != 0) {
                func_001AD140(*(char **)(p + 0x10));
                *(char **)(p + 0x10) = 0;
            }
            if (*(char **)(p + 0x14) != 0) {
                func_001AD140(*(char **)(p + 0x14));
                *(char **)(p + 0x14) = 0;
            }
            if (*(char **)(p + 0x18) != 0) {
                func_001AD140(*(char **)(p + 0x18));
                *(char **)(p + 0x18) = 0;
            }
            if (*(char **)(p + 0x1C) != 0) {
                func_001AD140(*(char **)(p + 0x1C));
                *(char **)(p + 0x1C) = 0;
            }
            (*(int *)(p + 8))++;
        case 1:
        case 2:
        case 3:
            (*(int *)(p + 8))++;
            break;
        case 4:
            if (*(char **)(p + 0x20) != 0) {
                func_001AF080(D_00666750, *(char **)(p + 0x20));
                *(char **)(p + 0x20) = 0;
            }
            if (*(char **)(p + 0x24) != 0) {
                func_001AF080(D_00666750, *(char **)(p + 0x24));
                *(char **)(p + 0x24) = 0;
            }
            if (*(char **)(p + 0x28) != 0) {
                func_001AF080(D_00666750, *(char **)(p + 0x28));
                *(char **)(p + 0x28) = 0;
            }
            if (*(char **)(p + 0x2C) != 0) {
                func_001AF080(D_00666750, *(char **)(p + 0x2C));
                *(char **)(p + 0x2C) = 0;
            }
            if (*(char **)(p + 0x30) != 0) {
                func_001AF080(D_00666750, *(char **)(p + 0x30));
                *(char **)(p + 0x30) = 0;
            }
            if (*(unsigned char *)(p + 0x38) == 0) {
                if (*(char **)(p + 0x34) == 0) break;
                func_001AF080(D_00666750, *(char **)(p + 0x34));
                *(char **)(p + 0x34) = 0;
                func_0030E540(D_01DFA310);
            }
            (*(int *)(p + 8))++;
            break;
        case 5:
            if (*(unsigned char *)(p + 0x38) == 0) {
                func_0030E440(D_01DFA310, D_01CB12BC[0]);
                *(char **)(p + 0x34) = func_001AF3F0(D_00666750, D_00540330 + D_00666712[0] * 4, 0, 0);
            }
            *(char **)(p + 0x20) = func_001AFB90(D_00666750, 0x1AE, 0, 8);
            func_001AE690(D_00666710);
            func_001F3BF0(D_01CB1290);
            (*(int *)(p + 8))++;
            break;
        case 6:
            if ((unsigned char)func_001F3CC0(D_01CB1290, D_00666712[0], 0x1C2, 0x3FFC)) {
                D_005BC1A8->m14(0x80000000, 5);
                *(int *)(p + 8) = 0;
                *(int *)(p + 4) = 0;
                *(int *)p = 0;
            }
            break;
        }
        break;
    }
}
}

extern "C" char D_005D0E70[];

extern "C" char D_005D0E78[];

extern "C" char D_006011B4[];

extern "C" char D_006011CC[];

extern "C" char *func_003887C0(char *);

extern "C" void func_0030E580(char *, char *);

extern "C" void func_0013D900(char *);

extern "C" void func_0013DC30(char *, int, int);

extern "C" void func_0013E040(char *, int, int);

extern "C" void func_0013E020(char *, int, int);

extern "C" void func_003DE690(char *);

extern "C" void func_003BBC00(char *);

static inline char *ent486(char *t, unsigned short i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(i * 4 + t + 8) == 0) { r = 0; } else { r = t + *(int *)(i * 4 + t + 8); } return r; }

static inline char *gch486(char *h, unsigned short i) { char *r; char *t; unsigned short k = i; if (**(unsigned short **)(h + 8) == 0) { t = *(char **)(h + 0xC); r = ent486(t, k); } else { r = *(char **)(h + 0xC); } return r; }

extern "C" {
void func_00486510(char *p) {
    extern unsigned char D_01DFA340[];
    extern void func_001AF080(char *, char *);
    extern char *func_001AFB90(char *, int, int, int);
    unsigned char ok;
    char *q;
    switch (*(int *)(p + 4)) {
    case 0:
        if (*(unsigned char *)(p + 0x38) == 0) {
            ok = 1;
            if (*(unsigned char *)(*(char **)(p + 0x34) + 1) != 0 && *(unsigned char *)(*(char **)(p + 0x34) + 1) != 3) ok = 0;
            if (ok == 0) break;
        }
        ok = 1;
        if (*(unsigned char *)(*(char **)(p + 0x20) + 1) != 0 && *(unsigned char *)(*(char **)(p + 0x20) + 1) != 3) ok = 0;
        if (ok == 0) break;
        D_01CAF67F[0] = 0;
        if (*(unsigned char *)(p + 0x38) == 0) func_0030E580(D_01DFA310, gch486(*(char **)(p + 0x34), 2));
        if ((*(char **)(p + 0xC) = func_003887C0(*(char **)(p + 0x20))) == 0) break;
        if (*(unsigned char *)(p + 0x38) == 0 && *(unsigned char *)(p + 0x39) == 0) {
            *(unsigned char *)(p + 0x39) = 1;
            func_0013D900(D_005D0E70);
            func_0013DC30(D_005D0E78, 0x6E, 0);
            func_0013E040(D_006011B4, 0x3C, 1);
        }
        *(int *)(p + 4) = 1;
    case 1:
        D_005BC1A8->m14(0x80000000, 5);
        *(int *)(p + 4) = 2;
    case 2:
        *(unsigned char *)(*(char **)(p + 0xC) + 0x1901) = *(unsigned char *)(p + 0x38);
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            switch (*(signed char *)(*(char **)(p + 0xC) + 0x1903)) {
            case -1:
            case 1:
            case 2:
            case 3:
            case 4:
            case 8:
                break;
            case 0:
                *(unsigned char *)(p + 0x3A) = 0;
                D_005BC1A8->m18(0x80000000, 0x3C);
                *(int *)(p + 4) = 3;
                break;
            case 5:
                *(unsigned char *)(p + 0x3A) = 5;
                D_005BC1A8->m18(0x80000000, 0x3C);
                *(int *)(p + 4) = 3;
                break;
            case 6:
                *(unsigned char *)(p + 0x3A) = 6;
                D_005BC1A8->m18(0x80000000, 0x3C);
                *(int *)(p + 4) = 3;
                break;
            case 7:
                *(unsigned char *)(p + 0x3A) = 7;
                D_005BC1A8->m18(0x80000000, 0x3C);
                *(int *)(p + 4) = 3;
                break;
            case 9:
                *(unsigned char *)(p + 0x3A) = 9;
                D_005BC1A8->m18(0x80000000, 0x3C);
                if (*(unsigned char *)(p + 0x38) == 0) func_0013E020(D_006011CC, 0x3C, 0);
                *(int *)(p + 4) = 3;
                break;
            }
        }
        break;
    case 3:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            if (*(unsigned char *)(p + 0x38) == 1) {
                func_001AD140(*(char **)(p + 0xC));
                *(char **)(p + 0xC) = 0;
                *(int *)(p + 4) = 4;
            } else {
                *(unsigned char *)(*(char **)(p + 0xC) + 0x1900) = 0;
                *(int *)(p + 4) = 5;
            }
            *(int *)(p + 8) = 0;
            D_01DFA340[0] = 0;
        }
        break;
    case 4:
        if (*(unsigned int *)(p + 8) < 5) {
            (*(int *)(p + 8))++;
        } else {
            (*(int *)(p + 4))++;
        }
        break;
    case 5:
        if (*(unsigned char *)(p + 0x38) == 1) {
            func_001AF080(D_00666750, *(char **)(p + 0x20));
            *(char **)(p + 0x20) = 0;
        }
        switch (*(signed char *)(p + 0x3A)) {
        case -1:
        case 2:
        case 3:
        case 4:
        case 8:
            break;
        case 0:
            *(int *)p = 1;
            if (*(char **)(p + 0x10) == 0) {
                *(char **)(p + 0x24) = func_001AFB90(D_00666750, 0x1D6, 0, 8);
                *(int *)(p + 4) = 0;
            } else {
                *(unsigned char *)(*(char **)(p + 0x10) + 0x3D00) = 1;
                q = *(char **)(p + 0x10);
                *(unsigned char *)(q + 4) = 1;
                *(unsigned char *)(q + 0x3D02) = 0;
                *(signed char *)(q + 0x3D03) = -1;
                *(unsigned char *)(q + 0x3D00) = 1;
                func_003DE690(q);
                *(int *)(p + 4) = 2;
                D_005BC1A8->m14(0x80000000, 5);
            }
            break;
        case 1:
            *(unsigned char *)(p + 0x3A) = 1;
            break;
        case 5:
            *(int *)p = 2;
            if (*(char **)(p + 0x14) == 0) {
                *(char **)(p + 0x28) = func_001AFB90(D_00666750, 0x1C2, 0, 8);
                *(int *)(p + 4) = 0;
            } else {
                *(unsigned char *)(*(char **)(p + 0x14) + 0x1301) = 1;
                q = *(char **)(p + 0x14);
                *(unsigned char *)(q + 4) = 1;
                *(unsigned char *)(q + 5) = 0;
                *(unsigned char *)(q + 0x1300) = 0;
                *(signed char *)(q + 0x1302) = -1;
                *(unsigned char *)(q + 0x1301) = 1;
                *(int *)(p + 4) = 2;
                D_005BC1A8->m14(0x80000000, 5);
            }
            break;
        case 6:
            *(int *)p = 3;
            if (*(char **)(p + 0x18) == 0) {
                *(char **)(p + 0x2C) = func_001AFB90(D_00666750, 0x1CC, 0, 8);
                *(int *)(p + 4) = 0;
            } else {
                *(unsigned char *)(*(char **)(p + 0x18) + 0xD00) = 1;
                q = *(char **)(p + 0x18);
                *(unsigned char *)(q + 4) = 1;
                *(unsigned char *)(q + 5) = 0;
                *(signed char *)(q + 0xD01) = -1;
                *(signed char *)(q + 0xD02) = -1;
                *(unsigned char *)(q + 0xD00) = 1;
                *(int *)(p + 4) = 2;
                D_005BC1A8->m14(0x80000000, 5);
            }
            break;
        case 7:
            *(int *)p = 4;
            if (*(char **)(p + 0x1C) == 0) {
                *(char **)(p + 0x30) = func_001AFB90(D_00666750, 0x1B8, 0, 8);
                *(int *)(p + 4) = 0;
            } else {
                *(unsigned char *)(*(char **)(p + 0x1C) + 0x2500) = 1;
                q = *(char **)(p + 0x1C);
                *(unsigned char *)(q + 4) = 1;
                *(unsigned char *)(q + 0x2501) = 0;
                *(signed char *)(q + 0x2502) = -1;
                *(unsigned char *)(q + 0x2500) = 1;
                *(unsigned char *)(q + 0x2503) = 0;
                func_003BBC00(q);
                *(int *)(p + 4) = 2;
                D_005BC1A8->m14(0x80000000, 5);
            }
            break;
        case 9:
            *(int *)p = 5;
            *(int *)(p + 4) = 0;
            break;
        }
        break;
    case 6:
        break;
    }
}
}
