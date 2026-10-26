extern "C" char *func_00279290(char *);

extern "C" void func_001A2D70(char *, int, int);

extern "C" unsigned char D_005BD020[7];

class VC8 {
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
    virtual void mC8(char *);
};

extern "C" void func_00405580(char *p) {
    int i;
    for (i = 0; i < 6; i++) {
        if (D_005BD020[i + 1] == *(unsigned char *)(p + 0x2001)) {
            func_001A2D70(func_00279290(p + 0xD40), i + 1, 0x80C0C0C0);
            *(float *)(*(char **)(p + i * 4 + 0x1F48) + 0x184) = 1.2f;
            *(float *)(*(char **)(p + i * 4 + 0x1F48) + 0x198) = 1.5f;
            *(float *)(*(char **)(p + i * 4 + 0x1F64) + 0x184) = 1.2f;
            *(float *)(*(char **)(p + i * 4 + 0x1F64) + 0x198) = 1.5f;
        } else {
            func_001A2D70(func_00279290(p + 0xD40), i + 1, 0x80404040);
            *(float *)(*(char **)(p + i * 4 + 0x1F48) + 0x184) = 1.0f;
            *(float *)(*(char **)(p + i * 4 + 0x1F48) + 0x198) = 1.0f;
            *(float *)(*(char **)(p + i * 4 + 0x1F64) + 0x184) = 1.0f;
            *(float *)(*(char **)(p + i * 4 + 0x1F64) + 0x198) = 1.0f;
        }
    }
    {
    char *m = p + 0x1FC0;
    ((VC8 *)(p + 0xD40))->mC8(m);
    ((VC8 *)(p + 0x1940))->mC8(m);
    }
}

extern "C" void func_001AD140(char *);

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

extern "C" Snd29C *D_005BC1A8;

extern "C" int func_0034E640(char *, char *, unsigned char);

extern "C" int func_0034F1C0(int);

extern "C" int func_0034F1D0(int);

extern "C" unsigned char func_00404740(char *, int);

extern "C" void func_00404720(char *);

static inline int ok404(char *o) {
    unsigned char r = 1;
    if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0;
    return r;
}

extern "C" void func_00404180(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok404(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44)) == 1) {
            (*(int *)(p + 8))++;
            *(int *)(p + 0x184) = func_0034E640(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), p + 0x5C, *(unsigned char *)(p + 0x188));
            *(unsigned char *)(p + 0x188) = 0;
            if (*(int *)(p + 0x184) == 0) {
                *(int *)(p + 8) = 8;
            } else {
                *(int *)(p + 0x10) = 0xC;
                D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
            }
        }
        break;
    case 1:
        if (--*(int *)(p + 0x10) < 0) {
            (*(int *)(p + 8))++;
            D_005BC1A8->m28(0, 1, 0xFFFFFF);
        }
        break;
    case 2:
        if (func_0034F1C0(*(int *)(p + 0x184))) {
            (*(int *)(p + 8))++;
            *(unsigned char *)(p + 0x16) = func_00404740(p, func_0034F1D0(*(int *)(p + 0x184)));
        }
        break;
    case 3:
        *(int *)(p + 4) = 5;
        (*(int *)(p + 8))++;
        break;
    case 4:
        *(int *)(p + 0x10) = 0x18;
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        (*(int *)(p + 8))++;
        break;
    case 5:
        if (--*(int *)(p + 0x10) < 0) {
            (*(int *)(p + 8))++;
            D_005BC1A8->m28(0, 1, 0xFFFFFF);
            if (*(int *)(p + 0x184)) {
                func_001AD140(*(char **)(p + 0x184));
                *(int *)(p + 0x184) = 0;
            }
        }
        break;
    case 6: case 7:
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 8:
        func_00404720(p);
        *(int *)(p + 4) = 8;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 4;
        break;
    }
}

extern "C" char D_01DFA310[];

extern "C" void func_0030E580(char *, char *);

extern "C" void func_0030E910(char *, int, int);

extern "C" int func_004107B0(char *, char *);

extern "C" int func_00411E50(int);

static inline int ok403E(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner403E(char *q) { if (*(unsigned int *)(q + 4) < 0x12) return 0; if (*(int *)(q + 0x4C) == 0) return 0; return q + *(int *)(q + 0x4C); }

static inline char *chunk403E(char *h) { if (**(unsigned short **)(h + 8) == 0) h = inner403E(*(char **)(h + 0xC)); else h = *(char **)(h + 0xC); return h; }

extern "C" void func_00403E70(char *p) {
    char *c;
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok403E(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44)) != 1) break;
        func_0030E580(D_01DFA310, chunk403E(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44)));
        if ((*(int *)(p + 0x180) = func_004107B0(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), p + 0x5C)) == 0) {
            *(int *)(p + 8) = 8;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m24(0, 0);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        switch ((unsigned char)func_00411E50(*(int *)(p + 0x180))) {
        case 0:
            break;
        case 3:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 3);
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 4:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 4);
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 1: case 2:
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 3:
        *(int *)(p + 4) = 5;
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        func_0030E910(D_01DFA310, 0x4E20, 0x4E84);
        if (*(char **)(p + 0x180) != 0) {
            func_001AD140(*(char **)(p + 0x180));
            *(char **)(p + 0x180) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 8:
        func_00404720(p);
        *(int *)(p + 4) = 8;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 4;
        break;
    }
}

extern "C" char D_00666750[];

extern "C" char *func_001AEA60(char *, int, int);

extern "C" int func_00304F30(char *, char *);

extern "C" int func_004495C0(char *, char *);

extern "C" int func_0044A1D0(int);

static inline int ok4037(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner4037(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk4037(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner4037(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

static inline unsigned char rdyB4037(char *o) { unsigned char r; if (*(unsigned char *)(o + 4) == 1 && *(unsigned char *)(o + 0x555E) != 0) { *(unsigned char *)(o + 0x556C) = 1; r = 1; } else r = 0; return r; }

extern "C" void func_00403720(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok4037(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44)) != 1) break;
        func_0030E580(D_01DFA310, chunk4037(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), 7));
        if ((*(int *)(p + 0x178) = func_004495C0(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), p + 0x5C)) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        *(int *)(p + 0x164) = func_00304F30(func_001AEA60(D_00666750, 6, 3), p + 0x5C);
        if (*(int *)(p + 0x164) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (rdyB4037(*(char **)(p + 0x164)) != 1) break;
        D_005BC1A8->m24(0, 0);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        switch ((unsigned char)func_0044A1D0(*(int *)(p + 0x178))) {
        case 0:
            break;
        case 3:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 3);
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 4:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 4);
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 1: case 2:
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 3:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 4:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        func_0030E910(D_01DFA310, 0x4E20, 0x4E83);
        if (*(char **)(p + 0x178) != 0) {
            func_001AD140(*(char **)(p + 0x178));
            *(char **)(p + 0x178) = 0;
        }
        if (*(char **)(p + 0x164) != 0) {
            func_001AD140(*(char **)(p + 0x164));
            *(char **)(p + 0x164) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5: case 6:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 7:
        func_00404720(p);
        *(int *)(p + 4) = 8;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 3;
        break;
    }
}

extern "C" int func_0047D9B0(char *, char *);

extern "C" int func_0047DE20(int);

static inline int ok403AC(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner403AC(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk403AC(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner403AC(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

static inline unsigned char rdyB403AC(char *o) { unsigned char r; if (*(unsigned char *)(o + 4) == 1 && *(unsigned char *)(o + 0x555E) != 0) { *(unsigned char *)(o + 0x556C) = 1; r = 1; } else r = 0; return r; }

extern "C" void func_00403AC0(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok403AC(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44)) != 1) break;
        func_0030E580(D_01DFA310, chunk403AC(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), 13));
        if ((*(int *)(p + 0x17C) = func_0047D9B0(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), p + 0x5C)) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        *(int *)(p + 0x164) = func_00304F30(func_001AEA60(D_00666750, 6, 3), p + 0x5C);
        if (*(int *)(p + 0x164) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (rdyB403AC(*(char **)(p + 0x164)) != 1) break;
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        switch ((unsigned char)func_0047DE20(*(int *)(p + 0x17C))) {
        case 0:
            break;
        case 3:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 3);
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 4:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 4);
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 1: case 2:
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 3:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 4:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        func_0030E910(D_01DFA310, 0x4E20, 0x4E84);
        if (*(char **)(p + 0x17C) != 0) {
            func_001AD140(*(char **)(p + 0x17C));
            *(char **)(p + 0x17C) = 0;
        }
        if (*(char **)(p + 0x164) != 0) {
            func_001AD140(*(char **)(p + 0x164));
            *(char **)(p + 0x164) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5: case 6:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 7:
        func_00404720(p);
        *(int *)(p + 4) = 8;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 3;
        break;
    }
}

extern "C" int func_004B3780(char *, int, char *);

extern "C" int func_004B42B0(int);

static inline int ok4033(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner4033(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk4033(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner4033(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

static inline unsigned char rdyA4033(char *o) { unsigned char r; if (*(unsigned char *)(o + 4) == 1 && *(unsigned char *)(o + 0x54C4) != 0) { *(unsigned char *)(o + 0x554F) = 1; r = 1; } else r = 0; return r; }

static inline unsigned char rdyB4033(char *o) { unsigned char r; if (*(unsigned char *)(o + 4) == 1 && *(unsigned char *)(o + 0x555E) != 0) { *(unsigned char *)(o + 0x556C) = 1; r = 1; } else r = 0; return r; }

extern "C" void func_00403330(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok4033(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44)) != 1) break;
        func_0030E580(D_01DFA310, chunk4033(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), 13));
        if ((*(int *)(p + 0x174) = func_004B3780(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), *(int *)(p + 0x58), p + 0x5C)) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        *(int *)(p + 0x164) = func_00304F30(func_001AEA60(D_00666750, 6, 3), p + 0x5C);
        if (*(int *)(p + 0x164) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (rdyA4033(*(char **)(p + 0x164)) != 1) break;
        if (rdyB4033(*(char **)(p + 0x164)) != 1) break;
        D_005BC1A8->m24(0, 0);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        switch ((unsigned char)func_004B42B0(*(int *)(p + 0x174))) {
        case 0:
            break;
        case 3:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 3);
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 4:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 4);
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 1: case 2:
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 3:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 4:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        func_0030E910(D_01DFA310, 0x4E20, 0x5207);
        if (*(char **)(p + 0x174) != 0) {
            func_001AD140(*(char **)(p + 0x174));
            *(char **)(p + 0x174) = 0;
        }
        if (*(char **)(p + 0x164) != 0) {
            func_001AD140(*(char **)(p + 0x164));
            *(char **)(p + 0x164) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5: case 6:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 7:
        func_00404720(p);
        *(int *)(p + 4) = 8;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 3;
        break;
    }
}

extern "C" {
extern char D_01DFA340[];
}

extern "C" {
int func_0013D5D0(...);
}

class VD0_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00405430(int p0) {
    int v0;
    char *v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    v0 = 0;
    v1 = (char *)p0;
    *(char *)D_01DFA340 = 0;
    v2 = v1;
    do {
        v3 = ((VD0_0_i *)(v2 + 320))->m();
        v0 = (v0 + 1);
        v2 = (v2 + 1536);
    } while ((v0 < 5));
    if ((0 < *(int *)(v1 + 56))) {
        v4 = 0;
        v5 = (int)v1;
        do {
            v3 = func_0013D5D0((v5 + 60));
            v4 = (v4 + 1);
            v5 = (v5 + 16);
        } while ((v4 < *(int *)(v1 + 56)));
    }
    return v3;
}
}

class VCC_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_004054D0(int p0) {
    int v0;
    char *v1;
    int v2;
    int v3;
    v0 = 0;
    v1 = (char *)p0;
    v2 = (p0 + 8128);
    do {
        v3 = ((VCC_1_ii *)(v1 + 320))->m(v2);
        v0 = (v0 + 1);
        v1 = (v1 + 1536);
    } while ((v0 < 5));
    return v3;
}
}
