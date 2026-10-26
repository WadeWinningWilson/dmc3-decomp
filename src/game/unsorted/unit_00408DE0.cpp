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

extern "C" int func_004B13B0(unsigned char *, char *);

extern "C" int func_004B1EF0(int);

extern "C" int func_004B1F00(int);

extern "C" int func_0040B300(char *, int);

extern "C" void func_0040B2F0(char *);

static inline int ok014(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" void func_00409980(char *p) {
    int r;
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok014(*(unsigned char **)(p + 0x14)) != 1) break;
        if ((*(int *)(p + 0x174) = func_004B13B0(*(unsigned char **)(p + 0x14), p + 0x4C)) == 0) {
            *(int *)(p + 8) = 8;
            break;
        }
        D_005BC1A8->m28(0x80000000, 0, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)func_004B1EF0(*(int *)(p + 0x174)) != 1) break;
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m24(0, 0);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 3:
        r = func_004B1F00(*(int *)(p + 0x174));
        switch ((unsigned char)r) {
        case 0:
            break;
        case 3: case 4: case 1: case 2:
            *(unsigned char *)(p + 0x12) = func_0040B300(p, r);
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (*(char **)(p + 0x174) != 0) {
            func_001AD140(*(char **)(p + 0x174));
            *(char **)(p + 0x174) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 8:
        func_0040B2F0(p);
        *(int *)(p + 4) = 4;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 4;
        break;
    }
}

extern "C" char D_00666750[];

extern "C" int func_001AFB90(char *, int, int, int);

extern "C" void func_001AF080(char *, int);

extern "C" char D_006663C0[];

extern "C" int D_00569E90[];

extern "C" int func_003F3F30(unsigned char *, int);

extern "C" int func_003F44F0(int);

extern "C" int func_003F44E0(int);

extern "C" int func_003F44D0(int);

extern "C" unsigned short func_001AE1E0(char *, int);

static inline int ok40A(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" void func_0040A9E0(char *p) {
    int v;
    switch (*(unsigned int *)(p + 0xC)) {
    case 0:
        if (*(int *)(p + 0x14) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        *(int *)(p + 0x14) = func_001AFB90(D_00666750, D_00569E90[*(unsigned char *)(p + 0x198)], 0, 8);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
    case 1:
        if ((unsigned char)ok40A(*(unsigned char **)(p + 0x14)) != 1) break;
        *(int *)(p + 0x188) = func_003F3F30(*(unsigned char **)(p + 0x14), *(signed char *)(p + 0x198));
        if (*(int *)(p + 0x188) == 0) {
            *(int *)(p + 0xC) = 7;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 2:
        if ((unsigned char)func_003F44F0(*(int *)(p + 0x188)) == 0) break;
        if ((unsigned char)D_005BC1A8->m2C() == 0) break;
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
    case 3:
        if ((func_001AE1E0(D_006663C0, 0) & 0x50) == 0) break;
        func_003F44E0(*(int *)(p + 0x188));
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 4:
        if ((unsigned char)func_003F44D0(*(int *)(p + 0x188)) != 1) break;
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        if (*(char **)(p + 0x188) != 0) {
            func_001AD140(*(char **)(p + 0x188));
            *(char **)(p + 0x188) = 0;
        }
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 5: case 6:
        *(int *)(p + 0xC) = *(unsigned int *)(p + 0xC) + 1;
        break;
    case 7:
        if (*(int *)(p + 0x14) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        v = *(unsigned short *)(p + 0x198);
        switch ((unsigned char)v) {
        case 0x12:
            *(unsigned short *)(p + 0x198) = (v & 0xFF00) | 0x13;
            *(int *)(p + 0xC) = 0;
            break;
        case 0x13:
            *(unsigned short *)(p + 0x198) = (v & 0xFF00) | 0x14;
            *(int *)(p + 0xC) = 0;
            break;
        default:
            *(int *)(p + 8) = 2;
            *(int *)(p + 0xC) = 0;
            break;
        }
        break;
    default:
        *(int *)(p + 8) = 0xA;
        *(int *)(p + 0xC) = 0;
        break;
    }
}

extern "C" char D_01DFA310[];

extern "C" void func_0030E580(char *, char *);

extern "C" void func_0030E910(char *, int, int);

extern "C" int func_00478340(unsigned char *, char *);

extern "C" int func_00478AC0(int);

extern "C" int func_00478AF0(int);

static inline int ok409C(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

static inline char *inner409C(char *q) { if (*(unsigned int *)(q + 4) < 3) return 0; if (*(int *)(q + 0x10) == 0) return 0; return q + *(int *)(q + 0x10); }

static inline char *chunk409C(char *h) { if (**(unsigned short **)(h + 8) == 0) return inner409C(*(char **)(h + 0xC)); return *(char **)(h + 0xC); }

extern "C" void func_00409C00(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok409C(*(unsigned char **)(p + 0x14)) != 1) break;
        if (*(unsigned char *)(*(char **)(p + 0x14C) + 0xD3) == 0) {
            *(int *)(p + 8) = 8;
            break;
        }
        if ((*(int *)(p + 0x178) = func_00478340(*(unsigned char **)(p + 0x14), p + 0x4C)) == 0) {
            *(int *)(p + 8) = 8;
            break;
        }
        func_0030E580(D_01DFA310, chunk409C(*(char **)(p + 0x14)));
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)func_00478AC0(*(int *)(p + 0x178)) != 1) break;
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m24(0, 0);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 3:
        *(unsigned char *)(p + 0x154) = func_00478AF0(*(int *)(p + 0x178));
        switch (*(unsigned char *)(p + 0x154)) {
        case 0: case 1:
            break;
        case 3: case 4: case 2:
            *(unsigned char *)(p + 0x12) = func_0040B300(p, *(signed char *)(p + 0x154));
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (*(char **)(p + 0x178) != 0) {
            func_001AD140(*(char **)(p + 0x178));
            *(char **)(p + 0x178) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 8:
        func_0040B2F0(p);
        func_0030E910(D_01DFA310, 0x4E20, 0x526C);
        *(int *)(p + 4) = 4;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 4;
        break;
    }
}

extern "C" int func_00487B90(char *, char *, int);

extern "C" int func_004D8EA0(char *, int);

extern "C" int func_004884F0(int);

extern "C" int func_00488520(int);

static inline int ok409(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner409(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk409(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner409(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

extern "C" void func_00409270(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        *(int *)(p + 0x158) = 2;
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
    case 1:
        if ((unsigned char)ok409(*(char **)(p + 0x14)) != 1) break;
        if ((unsigned char)ok409(*(char **)(p + 0x18)) != 1) break;
        func_0030E580(D_01DFA310, chunk409(*(char **)(p + 0x14), 9));
        if ((*(int *)(p + 0x164) = func_00487B90(*(char **)(p + 0x14), p + 0x4C, *(unsigned char *)(p + 0x168))) == 0) {
            *(int *)(p + 8) = 8;
            break;
        }
        if ((*(int *)(p + 0x160) = func_004D8EA0(*(char **)(p + 0x18), 3)) == 0) {
            *(int *)(p + 8) = 5;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 3:
        *(unsigned char *)(p + 0x154) = func_004884F0(*(int *)(p + 0x164));
        switch (*(unsigned char *)(p + 0x154)) {
        case 0: case 3: case 4:
            break;
        case 1:
            *(unsigned char *)(p + 0x12) = func_00488520(*(int *)(p + 0x164));
            if (*(unsigned char *)(p + 0x12) == 5) *(unsigned char *)(p + 0x12) = 0;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 2:
            *(unsigned char *)(p + 0x12) = func_0040B300(p, *(signed char *)(p + 0x154));
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        *(int *)(p + 0x158) = 1;
        if (*(char **)(p + 0x164) != 0) {
            func_001AD140(*(char **)(p + 0x164));
            *(char **)(p + 0x164) = 0;
        }
        if (*(char **)(p + 0x160) != 0) {
            func_001AD140(*(char **)(p + 0x160));
            *(char **)(p + 0x160) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 8:
        func_0040B2F0(p);
        func_0030E910(D_01DFA310, 0x4E20, 0x4E84);
        *(int *)(p + 4) = 4;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 4;
        break;
    }
}

extern "C" char *func_001AEA60(char *, int, int);

extern "C" int func_00415240(char *, char *);

extern "C" int func_00304F30(char *, char *);

extern "C" int func_00415EB0(int);

static inline int ok4095(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner4095(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk4095(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner4095(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

static inline unsigned char rdyA4095(char *o) { unsigned char r; if (*(unsigned char *)(o + 4) == 1 && *(unsigned char *)(o + 0x54C4) != 0) { *(unsigned char *)(o + 0x554F) = 1; r = 1; } else r = 0; return r; }

static inline unsigned char rdyB4095(char *o) { unsigned char r; if (*(unsigned char *)(o + 4) == 1 && *(unsigned char *)(o + 0x555E) != 0) { *(unsigned char *)(o + 0x556C) = 1; r = 1; } else r = 0; return r; }

extern "C" void func_004095E0(char *p) {
    int r;
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok4095(*(char **)(p + 0x14)) != 1) break;
        func_0030E580(D_01DFA310, chunk4095(*(char **)(p + 0x14), 13));
        if ((*(int *)(p + 0x16C) = func_00415240(*(char **)(p + 0x14), p + 0x4C)) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        *(int *)(p + 0x15C) = func_00304F30(func_001AEA60(D_00666750, 6, 3), p + 0x4C);
        if (*(int *)(p + 0x15C) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (rdyA4095(*(char **)(p + 0x15C)) != 1) break;
        if (rdyB4095(*(char **)(p + 0x15C)) != 1) break;
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        r = func_00415EB0(*(int *)(p + 0x16C));
        switch ((unsigned char)r) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x170) = 1;
        case 3: case 4: case 2:
            *(unsigned char *)(p + 0x12) = func_0040B300(p, r);
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
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        if (*(char **)(p + 0x16C) != 0) {
            func_001AD140(*(char **)(p + 0x16C));
            *(char **)(p + 0x16C) = 0;
        }
        if (*(char **)(p + 0x15C) != 0) {
            func_001AD140(*(char **)(p + 0x15C));
            *(char **)(p + 0x15C) = 0;
        }
        break;
    case 5: case 6:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 7:
        func_0040B2F0(p);
        func_0030E910(D_01DFA310, 0x4E20, 0x5207);
        *(int *)(p + 4) = 4;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 3;
        break;
    }
}

extern "C" int func_0041C9A0(char *, char *, int);

extern "C" int func_0041D3C0(int);

extern "C" int func_0041D3F0(int);

static inline int ok40A0(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner40A0(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk40A0(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner40A0(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

extern "C" void func_0040A0C0(char *p) {
    switch (*(unsigned int *)(p + 0xC)) {
    case 0:
        if (*(int *)(p + 0x14) == 0) *(int *)(p + 0x14) = func_001AFB90(D_00666750, 0x366, 0, 8);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
    case 1:
        if ((unsigned char)ok40A0(*(char **)(p + 0x14)) != 1) break;
        if ((unsigned char)ok40A0(*(char **)(p + 0x1C)) != 1) break;
        func_0030E580(D_01DFA310, chunk40A0(*(char **)(p + 0x14), 9));
        if ((*(int *)(p + 0x17C) = func_0041C9A0(*(char **)(p + 0x14), p + 0x4C, *(signed char *)(p + 0x19C))) == 0) {
            *(int *)(p + 0xC) = 8;
            break;
        }
        if ((*(int *)(p + 0x160) = func_004D8EA0(*(char **)(p + 0x1C), 3)) == 0) {
            *(int *)(p + 0xC) = 5;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m24(0, 0);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 3:
        *(unsigned char *)(p + 0x154) = func_0041D3C0(*(int *)(p + 0x17C));
        switch (*(unsigned char *)(p + 0x154)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x19C) = func_0041D3F0(*(int *)(p + 0x17C));
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        case 3: case 4: case 2:
            *(unsigned char *)(p + 0x12) = func_0040B300(p, *(signed char *)(p + 0x154));
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (*(char **)(p + 0x17C) != 0) {
            func_001AD140(*(char **)(p + 0x17C));
            *(char **)(p + 0x17C) = 0;
        }
        if (*(char **)(p + 0x160) != 0) {
            func_001AD140(*(char **)(p + 0x160));
            *(char **)(p + 0x160) = 0;
        }
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 0xC) = *(unsigned int *)(p + 0xC) + 1;
        break;
    case 8:
        func_0040B2F0(p);
        func_0030E910(D_01DFA310, 0x4E20, 0x4E2A);
        if (*(unsigned char *)(p + 0x154) == 1) {
            *(int *)(p + 8) = 2;
            *(int *)(p + 0xC) = 0;
        } else {
            *(int *)(p + 8) = 0xA;
            *(int *)(p + 0xC) = 0;
        }
        break;
    default:
        *(int *)(p + 8) = 0xA;
        *(int *)(p + 0xC) = 0;
        break;
    }
}

extern "C" short D_0056B008[];

extern "C" int func_005041E0(char *, char *, char *, signed char, signed char);

extern "C" int func_00504EC0(int);

static inline int ok40AC(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner40AC(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk40AC(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner40AC(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

extern "C" void func_0040AC80(char *p) {
    switch (*(unsigned int *)(p + 0xC)) {
    case 0:
        if (*(int *)(p + 0x14) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (*(int *)(p + 0x18) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x18));
            *(int *)(p + 0x18) = 0;
        }
        *(int *)(p + 0x14) = func_001AFB90(D_00666750, 0x371, 0, 8);
        *(int *)(p + 0x18) = func_001AFB90(D_00666750, D_0056B008[*(signed char *)(p + 0x19C)], 0, 8);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
    case 1:
        if ((unsigned char)ok40AC(*(char **)(p + 0x14)) != 1) break;
        if ((unsigned char)ok40AC(*(char **)(p + 0x18)) != 1) break;
        if ((unsigned char)ok40AC(*(char **)(p + 0x1C)) != 1) break;
        func_0030E580(D_01DFA310, chunk40AC(*(char **)(p + 0x14), 4));
        if ((*(int *)(p + 0x184) = func_005041E0(*(char **)(p + 0x14), *(char **)(p + 0x18), p + 0x18C, *(signed char *)(p + 0x19D), *(signed char *)(p + 0x19E))) == 0) {
            *(int *)(p + 0xC) = 8;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 3:
        *(unsigned char *)(p + 0x154) = func_00504EC0(*(int *)(p + 0x184));
        switch (*(unsigned char *)(p + 0x154)) {
        case 0:
            break;
        case 2:
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        case 3: case 4:
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (*(char **)(p + 0x184) != 0) {
            func_001AD140(*(char **)(p + 0x184));
            *(char **)(p + 0x184) = 0;
        }
        if (*(char **)(p + 0x160) != 0) {
            func_001AD140(*(char **)(p + 0x160));
            *(char **)(p + 0x160) = 0;
        }
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 0xC) = *(unsigned int *)(p + 0xC) + 1;
        break;
    case 8:
        if (*(int *)(p + 0x14) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (*(int *)(p + 0x18) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x18));
            *(int *)(p + 0x18) = 0;
        }
        func_0030E910(D_01DFA310, 0x4E20, 0x5014);
        *(int *)(p + 8) = 2;
        *(int *)(p + 0xC) = 0;
        break;
    default:
        *(int *)(p + 8) = 0xA;
        *(int *)(p + 0xC) = 0;
        break;
    }
}

extern "C" int func_00441020(char *, char *, char *, int, signed char, signed char, signed char);

extern "C" int func_00442AB0(int);

extern "C" unsigned char func_00442AE0(int);

extern "C" unsigned char func_00442AF0(int);

extern "C" void func_00442B40(char *, int);

extern "C" int func_00442B00(int);

static inline int ok40A4(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner40A4(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk40A4(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner40A4(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

extern "C" void func_0040A460(char *p) {
    struct S442 { signed char a[4]; int b; int c; unsigned short d; };
    S442 t30;
    S442 t20;
    switch (*(unsigned int *)(p + 0xC)) {
    case 0:
        if (*(int *)(p + 0x14) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (*(int *)(p + 0x18) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x18));
            *(int *)(p + 0x18) = 0;
        }
        *(int *)(p + 0x14) = func_001AFB90(D_00666750, 0x370, 0, 8);
        *(int *)(p + 0x18) = func_001AFB90(D_00666750, D_0056B008[*(signed char *)(p + 0x19C)], 0, 8);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
    case 1:
        if ((unsigned char)ok40A4(*(char **)(p + 0x14)) != 1) break;
        if ((unsigned char)ok40A4(*(char **)(p + 0x18)) != 1) break;
        if ((unsigned char)ok40A4(*(char **)(p + 0x1C)) != 1) break;
        func_0030E580(D_01DFA310, chunk40A4(*(char **)(p + 0x14), 13));
        if ((*(int *)(p + 0x180) = func_00441020(*(char **)(p + 0x14), *(char **)(p + 0x18), p + 0x4C, *(int *)(p + 0x1A0), *(signed char *)(p + 0x19C), *(signed char *)(p + 0x19D), *(signed char *)(p + 0x19E))) == 0) {
            *(int *)(p + 0xC) = 8;
            break;
        }
        if ((*(int *)(p + 0x160) = func_004D8EA0(*(char **)(p + 0x1C), 3)) == 0) {
            *(int *)(p + 0xC) = 5;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 3:
        *(unsigned char *)(p + 0x154) = func_00442AB0(*(int *)(p + 0x180));
        switch (*(unsigned char *)(p + 0x154)) {
        case 0: case 1:
            break;
        case 5:
            *(unsigned char *)(p + 0x19D) = func_00442AE0(*(int *)(p + 0x180));
            *(unsigned char *)(p + 0x19E) = func_00442AF0(*(int *)(p + 0x180));
            func_00442B40((char *)&t30, *(int *)(p + 0x180));
            *(signed char *)(p + 0x18C) = t30.a[0];
            *(signed char *)(p + 0x18D) = t30.a[1];
            *(signed char *)(p + 0x18E) = t30.a[2];
            *(signed char *)(p + 0x18F) = t30.a[3];
            *(int *)(p + 0x190) = t30.b;
            *(int *)(p + 0x194) = t30.c;
            *(unsigned short *)(p + 0x198) = t30.d;
            *(int *)(p + 0x1A0) = func_00442B00(*(int *)(p + 0x180));
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        case 6:
            *(unsigned char *)(p + 0x19D) = func_00442AE0(*(int *)(p + 0x180));
            *(unsigned char *)(p + 0x19E) = func_00442AF0(*(int *)(p + 0x180));
            func_00442B40((char *)&t20, *(int *)(p + 0x180));
            *(signed char *)(p + 0x18C) = t20.a[0];
            *(signed char *)(p + 0x18D) = t20.a[1];
            *(signed char *)(p + 0x18E) = t20.a[2];
            *(signed char *)(p + 0x18F) = t20.a[3];
            *(int *)(p + 0x190) = t20.b;
            *(int *)(p + 0x194) = t20.c;
            *(unsigned short *)(p + 0x198) = t20.d;
            *(int *)(p + 0x1A0) = func_00442B00(*(int *)(p + 0x180));
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        case 3: case 4:
            *(unsigned char *)(p + 0x12) = func_0040B300(p, *(signed char *)(p + 0x154));
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        case 2:
            *(unsigned char *)(p + 0x19D) = 0;
            *(unsigned char *)(p + 0x19E) = 0;
            *(int *)(p + 0x1A0) = 0;
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (*(char **)(p + 0x180) != 0) {
            func_001AD140(*(char **)(p + 0x180));
            *(char **)(p + 0x180) = 0;
        }
        if (*(char **)(p + 0x160) != 0) {
            func_001AD140(*(char **)(p + 0x160));
            *(char **)(p + 0x160) = 0;
        }
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 0xC) = *(unsigned int *)(p + 0xC) + 1;
        break;
    case 8:
        if (*(int *)(p + 0x14) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (*(int *)(p + 0x18) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x18));
            *(int *)(p + 0x18) = 0;
        }
        func_0030E910(D_01DFA310, 0x4E20, 0x5014);
        switch (*(unsigned char *)(p + 0x154)) {
        case 0: case 1:
            break;
        case 5:
            *(int *)(p + 8) = 3;
            *(int *)(p + 0xC) = 0;
            break;
        case 6:
            *(int *)(p + 8) = 4;
            *(int *)(p + 0xC) = 0;
            break;
        case 2:
            *(int *)(p + 8) = 1;
            *(int *)(p + 0xC) = 0;
            break;
        case 3: case 4:
            *(int *)(p + 8) = 0xA;
            *(int *)(p + 0xC) = 0;
            break;
        }
        break;
    default:
        *(int *)(p + 8) = 0xA;
        *(int *)(p + 0xC) = 0;
        break;
    }
}
