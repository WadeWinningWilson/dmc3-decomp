class Obj1F0 {
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
    virtual void d79();
    virtual void d80();
    virtual void d81();
    virtual void d82();
    virtual void d83();
    virtual void d84();
    virtual void d85();
    virtual void d86();
    virtual void d87();
    virtual void d88();
    virtual void d89();
    virtual void d90();
    virtual void d91();
    virtual void d92();
    virtual void d93();
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d114();
    virtual void d115();
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual int m1F0(int, char *);
};

static inline unsigned char flag1(char *p, int off) {
    return *(unsigned char *)(p + off) == 1;
}

extern "C" void func_003A02D0(char *);

extern "C" void func_00393AC0(Obj1F0 *o, int a, char *e) {
    char *p = (char *)o;
    if (*(signed char *)(e + 6) == 44) {
        *(float *)(p + 3016) = 1.0f;
    } else if (*(unsigned char *)(p + 333) != 3) {
        *(unsigned char *)(p + 333) = 3;
        *(float *)(p + 3016) = 0.0f;
        *(char **)(p + 328) = e;
        o->m1F0(*(int *)(p + 328), p + 2928);
        if (flag1(p, 11748)) {
            func_003A02D0(p);
        }
    }
}

class AnimF {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m28(int);
};

extern "C" void func_0024DA80(char *, int, int);

extern "C" int func_0024E800(char *);

extern "C" void func_003A0CD0(char *, int);

extern "C" void func_003A02B0(char *, int);

static inline unsigned char pair_done2(char *p) {
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) {
        return 1;
    }
    return 0;
}

extern "C" void func_00393F20(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x1A;
        func_0024DA80(p + 0x29D0, 0, 0x1A);
        func_0024DA80(p + 0x2AA0, 0, 0x1A);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 1:
        if (!(((AnimF *)(p + 0x4C4))->m28(0) < 5.0f)) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        func_003A0CD0(p, 0x888);
        if (pair_done2(p) == 1) {
            func_003A02B0(p, 2);
        }
        break;
    }
}

class ObjB4BC {
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
    virtual void mB4(int, int, int, int);
    virtual void d44();
    virtual void mBC(float);
};

extern "C" int func_0039DED0(char *);

extern "C" int func_003A0230(char *);

extern "C" void func_00397E60(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x35;
        func_0024DA80(p + 0x29D0, 0, 0x35);
        func_0024DA80(p + 0x2AA0, 0, 0x35);
        ((ObjB4BC *)(p + 0xD80))->mB4(0, 0, 0, 0);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        ((ObjB4BC *)(p + 0xD80))->mBC(*(float *)(p + 0x10));
        if (pair_done2(p) == 1 && (unsigned char)func_0039DED0(p) == 1) {
            func_003A0230(p);
        }
    }
}

extern "C" void func_00397F90(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x35;
        func_0024DA80(p + 0x29D0, 0, 0x35);
        func_0024DA80(p + 0x2AA0, 0, 0x35);
        ((ObjB4BC *)(p + 0xD80))->mB4(3, 0, 0, 0);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        ((ObjB4BC *)(p + 0xD80))->mBC(*(float *)(p + 0x10));
        if (pair_done2(p) == 1 && (unsigned char)func_0039DED0(p) == 1) {
            func_003A0230(p);
        }
    }
}

extern "C" int func_0039DDF0(char *, float);

extern "C" void func_003A06D0(char *);

extern "C" void func_003980C0(char *p) {
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x37;
        func_0024DA80(p + 0x29D0, 0, 0x37);
        func_0024DA80(p + 0x2AA0, 0, 0x37);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        if ((unsigned char)func_0039DDF0(p, 110.0f) != 1 && pair_done2(p) == 1) {
            func_003A02B0(p, 2);
        }
    }
    func_003A06D0(p);
    if (((AnimF *)(p + 0x4C4))->m28(0) < 30.0f) {
        func_003A0CD0(p, 0x300);
    }
}

extern "C" void func_00398200(char *p) {
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x38;
        func_0024DA80(p + 0x29D0, 0, 0x38);
        func_0024DA80(p + 0x2AA0, 0, 0x38);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        if ((unsigned char)func_0039DDF0(p, 110.0f) != 1 && pair_done2(p) == 1) {
            func_003A02B0(p, 2);
        }
    }
    func_003A06D0(p);
    if (((AnimF *)(p + 0x4C4))->m28(0) < 30.0f) {
        func_003A0CD0(p, 0x300);
    }
}

extern "C" void func_00398340(char *p) {
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x39;
        func_0024DA80(p + 0x29D0, 0, 0x39);
        func_0024DA80(p + 0x2AA0, 0, 0x39);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        if ((unsigned char)func_0039DDF0(p, 95.0f) != 1 && pair_done2(p) == 1) {
            func_003A02B0(p, 2);
        }
    }
    func_003A06D0(p);
    if (((AnimF *)(p + 0x4C4))->m28(0) < 30.0f) {
        func_003A0CD0(p, 0x300);
    }
}

extern "C" void func_00398480(char *p) {
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x3A;
        func_0024DA80(p + 0x29D0, 0, 0x3A);
        func_0024DA80(p + 0x2AA0, 0, 0x3A);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        if ((unsigned char)func_0039DDF0(p, 95.0f) != 1 && pair_done2(p) == 1) {
            func_003A02B0(p, 2);
        }
    }
    func_003A06D0(p);
    if (((AnimF *)(p + 0x4C4))->m28(0) < 30.0f) {
        func_003A0CD0(p, 0x300);
    }
}

extern "C" void func_0039D330(char *, int);

extern "C" void func_00399000(char *p) {
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x3B;
        func_0024DA80(p + 0x29D0, 0, 0x3B);
        func_0024DA80(p + 0x2AA0, 0, 0x3B);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 0;
    case 1:
        if (!(((AnimF *)(p + 0x4C4))->m28(0) < 146.0f)) {
            func_0039D330(p, 0);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        if (pair_done2(p) == 1) {
            *(unsigned char *)(p + 0x2DE0) = 1;
            func_003A02B0(p, 2);
        }
        break;
    }
}

extern "C" void func_00399140(char *p) {
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x3C;
        func_0024DA80(p + 0x29D0, 0, 0x3C);
        func_0024DA80(p + 0x2AA0, 0, 0x3C);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 0;
    case 1:
        if (!(((AnimF *)(p + 0x4C4))->m28(0) < 143.0f)) {
            func_0039D330(p, 1);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        if (pair_done2(p) == 1) {
            *(unsigned char *)(p + 0x2DE0) = 1;
            func_003A02B0(p, 2);
        }
        break;
    }
}

extern "C" void func_0039D820(char *);

extern "C" {
void func_00394EE0(char *p) {
    extern char *func_00207480(int, int, int, int);
    char *e;
    switch (*(unsigned char *)(p + 0x2F3C)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x5B;
        func_0024DA80(p + 0x29D0, 0, 0x5B);
        func_0024DA80(p + 0x2AA0, 0, 0x5B);
        e = func_00207480(3, 0x313, 0, 0x10);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0xCC4) + 0x104);
            e[0x9A] = 0;
        }
        break;
    case 1:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x5C;
        func_0024DA80(p + 0x29D0, 0, 0x5C);
        func_0024DA80(p + 0x2AA0, 0, 0x5C);
        e = func_00207480(3, 0x314, 0, 0x10);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0xCC4) + 0x104);
            e[0x9A] = 0;
        }
        ((ObjB4BC *)(p + 0x1380))->mB4(5, 0, 0, 0);
        break;
    case 2:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x5D;
        func_0024DA80(p + 0x29D0, 0, 0x5D);
        func_0024DA80(p + 0x2AA0, 0, 0x5D);
        e = func_00207480(3, 0x315, 0, 0x10);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0xCC4) + 0x104);
            e[0x9A] = 0;
        }
        ((ObjB4BC *)(p + 0x1380))->mB4(5, 0, 0, 0);
        break;
    }
    func_0039D820(p);
}
}

extern "C" void func_003A0B30(char *);

extern "C" void func_003A0BD0(char *);

extern "C" void func_003A0AB0(char *);

class S130b {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void m6C();
    virtual void m70();
    virtual void m74();
    virtual short m78(short, short);
};

static inline void cam4(char *p, float x, float z) {
    *(float *)(p + 0x150) = x;
    *(float *)(p + 0x154) = 0.0f;
    *(float *)(p + 0x158) = z;
    *(float *)(p + 0x15C) = 1.0f;
}

extern "C" void func_003A0840(char *p) {
    switch (*(short *)(p + 0xAC0)) {
    case 0x3F:
        if (*(unsigned char *)(p + 5) < 0x14) {
            if (*(unsigned char *)(p + 0x2DD4) == 0) {
                cam4(p, 2860.0f, 2200.0f);
            } else {
                cam4(p, 2170.0f, 2200.0f);
            }
        } else {
            cam4(p, 2500.0f, 3000.0f);
        }
        break;
    case 0x40:
        if (*(unsigned char *)(p + 5) < 0x14) {
            if (*(unsigned char *)(p + 0x2DE7) == 1) {
                if (*(unsigned char *)(p + 0x2DD4) == 0) {
                    cam4(p, 2860.0f, 2200.0f);
                } else {
                    cam4(p, 2170.0f, 2200.0f);
                }
            } else {
                if (*(unsigned char *)(p + 0x2DD4) == 0) {
                    cam4(p, 2862.0f, 4000.0f);
                } else {
                    cam4(p, 2133.0f, 4000.0f);
                }
            }
        } else if (*(unsigned char *)(p + 5) < 0x1E) {
            cam4(p, 2500.0f, 3000.0f);
        } else {
            ((S130b *)(p + 0x130))->m6C();
        }
        break;
    default:
        ((S130b *)(p + 0x130))->m6C();
        break;
    }
    ((S130b *)(p + 0x130))->m74();
    ((S130b *)(p + 0x130))->m70();
    *(short *)(p + 0x2DEC) = ((S130b *)(p + 0x130))->m78(*(short *)(p + 0x160), *(short *)(p + 0x90));
    func_003A0B30(p);
    func_003A0BD0(p);
    func_003A0AB0(p);
    *(short *)(p + 0x2DF2) = *(short *)(p + 0x2DF0);
    *(short *)(p + 0x2DF0) = (*(unsigned char *)(p + 0x2DF4) << 4) | *(unsigned char *)(p + 0x2DF5);
}

#define IN_ARC(a, base, len) ((unsigned short)((a) - (base)) != 0 && (unsigned short)((a) - (base)) < (unsigned int)((len) + 1))

extern "C" unsigned char func_003A0C00(char *p, short a) {
    unsigned char r;
    if (IN_ARC(a, 0x1000, 0x3000)) {
        r = 2;
    } else if (IN_ARC(a, 0x4000, 0x3000)) {
        r = 3;
    } else if (IN_ARC(a, 0x7000, 0x2000)) {
        r = 1;
    } else if (IN_ARC(a, 0x9000, 0x3000)) {
        r = 5;
    } else if (IN_ARC(a, 0xC000, 0x3000)) {
        r = 4;
    } else {
        r = 0;
    }
    return r;
}

extern "C" int func_0039FE70(char *);

extern "C" void func_003A0620(char *);

extern "C" int func_0039FF60(char *);

extern "C" int func_003A01F0(char *);

class ObjVal28 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual float m28(int);
};

extern "C" int func_0039DDF0(char *p, float t) {
    if (!(((ObjVal28 *)(p + 0x4C4))->m28(0) < t)) {
        if ((unsigned char)func_0039FE70(p) == 1) {
            *(unsigned char *)(p + 0x2DE6) = 0;
            func_003A0620(p);
            *(unsigned char *)(p + 0x2EC3) = 0;
            *(unsigned char *)(p + 0x2EC4) = 0;
            func_003A0230(p);
            return 1;
        }
        if ((unsigned char)func_0039FF60(p) == 1) {
            func_003A0230(p);
            return 1;
        }
        if ((unsigned char)func_003A01F0(p) == 1) {
            func_003A0230(p);
            return 1;
        }
    }
    return 0;
}

class ObjMdA0 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void m94(int, int);
    virtual void m98(int, int); virtual void m9C(int, int); virtual void mA0(int, int);
};

typedef struct { int v[6]; } i6tab;

typedef struct { unsigned char v[6]; } b6tab;

extern "C" i6tab D_00563EC0;

extern "C" b6tab D_005BCCC0;

extern "C" void func_0039CDF0(char *p) {
    i6tab t __attribute__((aligned(16))) = D_00563EC0;
    b6tab u = D_005BCCC0;
    int k = *(unsigned char *)(p + 0x2DD5);
    if (k != 0) {
        ((ObjMdA0 *)(p + 0x4C0))->m94(1, t.v[(unsigned char)k * 2]);
        ((ObjMdA0 *)(p + 0x4C0))->m98(1, t.v[*(unsigned char *)(p + 0x2DD5) * 2 + 1]);
        ((ObjMdA0 *)(p + 0x4C0))->m9C(1, u.v[*(unsigned char *)(p + 0x2DD5) * 2]);
        ((ObjMdA0 *)(p + 0x4C0))->mA0(1, u.v[*(unsigned char *)(p + 0x2DD5) * 2 + 1]);
    }
}

extern "C" int func_0039FE70(char *p) {
    char *list;
    int i;
    int n;
    if ((*(unsigned char *)(p + 0x2DE7) != 0) == false) {
        return 0;
    }
    list = *(char **)(p + 0x2ED8);
    if (list == 0) {
        *(unsigned char *)(p + 0x2DE7) = 0;
        *(unsigned char *)(p + 0x2DE5) = 1;
        *(unsigned char *)(p + 0x2DE3) = 1;
        return 0;
    }
    n = *(unsigned char *)(p + 0x2EE1);
    if (n < 2) {
        *(unsigned char *)(p + 0x2DE7) = 0;
        *(unsigned char *)(p + 0x2DE5) = 1;
        *(unsigned char *)(p + 0x2DE3) = 1;
        return 0;
    }
    for (i = 0; i < n; i++) {
        char *e = *(char **)(list + i * 4 + 0x264);
        if (e != p && e != 0) {
            if (*(short *)(e + 0xAC0) == 0x24 || ((*(unsigned short *)(e + 0x2DD8) & 1) != 0) == 1) {
                return 0;
            }
        }
    }
    *(short *)(p + 0x2DDA) = 0x40;
    return 1;
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" void func_00105760(float *, float *, float);

class ObjPosC4 {
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
    virtual float *mC4();
};

#define VADDIP(d,s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline unsigned char cam_lock(char *p) {
    unsigned char r;
    if (*(unsigned char *)(p + 0x2DE8) == 1) {
        r = 1;
    } else {
        r = 0;
    }
    return r;
}

extern "C" {
void func_003A1220(char *p) {
    extern void func_00104B80(float *, char *, float *);
    float m[16];
    float v[4];
    float *src = ((ObjPosC4 *)(p + 0x4C0))->mC4();
    QCOPY(p + 0x2E10, src);
    if (cam_lock(p) != 0) {
        float a = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
        v[0] = *(float *)(p + 0x2E10);
        v[1] = 0.0f;
        v[2] = *(float *)(p + 0x2E18);
        v[3] = 0.0f;
        UNIT(m);
        func_00105760(m, m, a);
        func_00104B80(v, (char *)m, v);
        VADDIP(p + 0x50, v);
    }
}
}

extern "C" char *func_00279290(char *);

extern "C" void func_001A5CC0(char *);

extern "C" void func_001A5C30(char *);

extern "C" void func_00138330(void);

class V1FC {
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
    virtual void d79();
    virtual void d80();
    virtual void d81();
    virtual void d82();
    virtual void d83();
    virtual void d84();
    virtual void d85();
    virtual void d86();
    virtual void d87();
    virtual void d88();
    virtual void d89();
    virtual void d90();
    virtual void d91();
    virtual void d92();
    virtual void d93();
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d114();
    virtual void d115();
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void d122();
    virtual void d123();
    virtual void d124();
    virtual unsigned char m1FC(unsigned char *, float *);
};

extern "C" void func_003A21F0(char *p) {
    float f;
    unsigned char v;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    func_001A5C30(func_00279290(p + 0x4C0));
    func_001A5C30(func_00279290(p + 0x1980));
    func_001A5C30(func_00279290(p + 0x1F80));
    func_001A5C30(func_00279290(p + 0xD80));
    func_001A5C30(func_00279290(p + 0x1380));
    if (*(short *)(p + 0xAC0) == 0x3B || *(short *)(p + 0xAC0) == 0x3C) return;
    v = 0x40;
    f = 100.0f;
    if (((V1FC *)p)->m1FC(&v, &f) == 1) {
        func_001A5CC0(func_00279290(p + 0x4C0));
        func_001A5CC0(func_00279290(p + 0x1980));
        func_001A5CC0(func_00279290(p + 0x1F80));
        func_001A5CC0(func_00279290(p + 0xD80));
        func_001A5CC0(func_00279290(p + 0x1380));
        func_00138330();
    }
}

extern "C" int func_00131D10(float, float);

extern "C" {
unsigned char func_003A0C00(char *p, short a);
}

class V7078i {
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
    virtual void m70();
    virtual void d27();
    virtual int m78(short, short);
};

static inline unsigned char on2de3(char *p) {
    if (*(unsigned char *)(p + 0x2DE3) == 1) return 1;
    return 0;
}

extern "C" void func_00393CA0(char *p, int a, char *q) {
    float v[4] __attribute__((aligned(16)));
    unsigned char r;
    signed char c;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    if ((unsigned char)on2de3(p) == 0) return;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(q + 0x10), "r"(p + 0x50) : "memory");
    r = func_003A0C00(p, (short)((V7078i *)(p + 0x130))->m78((short)func_00131D10(v[0], v[2]), *(short *)(p + 0x90)));
    c = *(signed char *)(q + 5);
    if ((c == 0 || c == 2 || c == 1) && (*(unsigned char *)(p + 0x2EE1) <= 1 || (*(unsigned short *)(p + 0x2EDE) & 0x100) == 0)) {
        *(unsigned char *)(p + 0x2DE6) = 4;
    }
    if ((r & 1) != 0) {
        func_003A02B0(p, 0x26);
    } else {
        func_003A02B0(p, 0x25);
    }
}

extern "C" void func_00393B50(char *p, char *s, char *q) {
    float v[4] __attribute__((aligned(16)));
    float a;
    float b;
    signed char c;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    a = 5.0f;
    b = a;
    if (*(signed char *)(s + 2) == 0) {
        a *= 3.0f;
        b *= 2.0f;
    }
    *(float *)(p + 0xC90) = a;
    *(float *)(p + 0xC94) = 0.0f;
    *(float *)(p + 0xC98) = a;
    *(float *)(p + 0xC9C) = 0.0f;
    *(float *)(p + 0xCA0) = b;
    *(unsigned char *)(p + 0xC5C) = 1;
    if ((unsigned char)on2de3(p) == 0) return;
    c = *(signed char *)(q + 5);
    if (c != 0 && c != 2 && c != 1) {
        __asm__ volatile("lqc2 $vf4, 0x0(%2)
    	lqc2 $vf5, 0x0(%1)
    	vsub.xyzw $vf6, $vf5, $vf4
    	sqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(q + 0x10), "r"(p + 0x50) : "memory");
        if ((func_003A0C00(p, (short)((V7078i *)(p + 0x130))->m78((short)func_00131D10(v[0], v[2]), *(short *)(p + 0x90))) & 1) != 0) {
            func_003A02B0(p, 0x26);
        } else {
            func_003A02B0(p, 0x25);
        }
    }
}

extern "C" unsigned char D_01CAFF3C[];

extern "C" float D_00563E10[];

extern "C" int func_0039AF40(char *, int);

class VD8039A {
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
    virtual void mB4(int, int, int, int);
    virtual void d44();
    virtual void mBC(float);
};

class V4C439A {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m28(int);
};

static inline unsigned char bo39B(char *p) {
    unsigned char r;
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) r = 1;
    else r = 0;
    return r;
}

static inline void an39B(char *p, int k) {
    *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
    *(short *)(p + 0x2DDC) = k;
    func_0024DA80(p + 0x29D0, 0, k);
    func_0024DA80(p + 0x2AA0, 0, k);
}

extern "C" void func_0039AA30(char *p, int f) {
    float t;
    *(unsigned short *)(p + 0x2DD8) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        an39B(p, 0x54);
        ((VD8039A *)(p + 0xD80))->mB4(5, 0, 0, 0);
        *(unsigned char *)(p + 5) = 10;
        break;
    case 10:
        if (!(((V4C439A *)(p + 0x4C4))->m28(0) < 42.0f)) {
            *(unsigned char *)(p + 0x2EC1) = 3;
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 11:
        *(unsigned char *)(p + 0x2EC1) = 3;
        if (bo39B(p) == 1) {
            an39B(p, 0x55);
            *(unsigned char *)(p + 5) = 20;
            *(float *)(p + 0x2E30) = D_00563E10[D_01CAFF3C[0]];
            if ((unsigned char)f == 0) *(short *)(p + 0x2F18) = 2;
            else *(short *)(p + 0x2F18) = 6;
        }
        break;
    case 20:
        *(unsigned char *)(p + 0x2EC1) = 3;
        if ((unsigned char)func_0039AF40(p, f) == 1) {
            *(unsigned char *)(p + 5) = 25;
            if ((unsigned char)f == 0) *(short *)(p + 0x2F18) = 2;
            else *(short *)(p + 0x2F18) = 6;
        }
        break;
    case 25:
        *(unsigned char *)(p + 0x2EC1) = 3;
        if (bo39B(p) == 1) {
            if ((*(float *)(p + 0x2E30) -= 1.0f) <= 0.0f) {
                an39B(p, 0x56);
                *(unsigned char *)(p + 5) = 30;
                if ((unsigned char)f == 0) *(short *)(p + 0x2F18) = 1;
                else *(short *)(p + 0x2F18) = 3;
            } else {
                an39B(p, 0x55);
                *(unsigned char *)(p + 5) = 20;
            }
        }
        break;
    case 30:
        *(unsigned char *)(p + 0x2EC1) = 3;
        func_0039AF40(p, (unsigned char)((unsigned char)f | 0x10));
        if (!(((V4C439A *)(p + 0x4C4))->m28(0) < 112.0f)) (*(unsigned char *)(p + 5))++;
        break;
    case 31:
        if (bo39B(p) == 1) func_003A02B0(p, 2);
        break;
    }
    if (f != 0) {
        bool b = false;
        t = ((V4C439A *)(p + 0x4C4))->m28(0);
        if (*(unsigned char *)(p + 5) < 26) {
            if ((!(t < 130.0f) && t <= 155.0f) || (!(t < 215.0f) && t <= 232.0f) || !(t < 300.0f)) b = true;
        } else if (*(unsigned char *)(p + 5) >= 30 && t <= 5.0f) {
            b = true;
        }
        if (b) func_003A0CD0(p, 0x300);
    }
    if (*(unsigned char *)(p + 5) < 31) ((VD8039A *)(p + 0xD80))->mBC(*(float *)(p + 0x10));
}

extern "C" void func_0039D0F0(char *, int);

class C392 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual unsigned int mB4();
};

class B392 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void mC8(char *);
};

extern "C" C392 *func_002792A0(char *);

static inline bool on392(char *p) { if (*(unsigned char *)(p + 0x2DE1) == 1) return true; return false; }

extern "C" void func_00392670(char *p) {
    float d[4] __attribute__((aligned(16)));
    unsigned int n;
    unsigned int i;
    if (on392(p) == 1) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 0x2D40), "r"(d) : "memory");
        d[3] = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(d) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(d) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 0x2D80), "r"(p + 0xF0) : "memory");
        n = func_002792A0(p + 0x4C0)->mB4();
        for (i = 0; i < n; i++) {
            if (((char **)(p + 0xCC0))[i] != 0 && *(char **)(((char **)(p + 0xCC0))[i] + 0x104) != 0) {
                __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 0xCC0))[i] + 0x104) + 0x30), "r"(d) : "memory");
                *(float *)(*(char **)(((char **)(p + 0xCC0))[i] + 0x104) + 0x3C) = 1.0f;
            }
        }
    }
    if (*(unsigned char *)(p + 0x2F3C) != 1) {
        func_0039D0F0(p, 0);
        ((B392 *)(p + 0xD80))->mC8(p + 0x2E40);
    }
    if (*(unsigned char *)(p + 0x2F3C) != 0) {
        func_0039D0F0(p, 1);
        ((B392 *)(p + 0x1380))->mC8(p + 0x2E80);
    }
    switch (*(unsigned char *)(p + 0x2DD5)) {
    case 1:
        *(float *)(p + 0x2900) = *(float *)(p + 0x10);
        ((B392 *)(p + 0x1980))->mC8(*(char **)(*(char **)(p + 0xCF0) + 0x104));
        break;
    case 2:
        *(float *)(p + 0x29C0) = *(float *)(p + 0x10);
        ((B392 *)(p + 0x1F80))->mC8(*(char **)(*(char **)(p + 0xCF0) + 0x104));
        break;
    }
}

extern "C" {
bool func_003A0F60(char *p) {
    extern void func_00104B80(float *, float *, float *);
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float a = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    unsigned char f = 0;
    bool r;
    if (*(float *)(p + 0x70) != 0.0f) {
        *(float *)(p + 0x60) = *(float *)(p + 0x60) + *(float *)(p + 0x70);
        if (!(*(float *)(p + 0x70) <= 0.0f)) {
            if (!(*(float *)(p + 0x60) < *(float *)(p + 0x2E00))) {
                *(float *)(p + 0x60) = *(float *)(p + 0x2E00);
                f |= 1;
            }
        } else if (*(float *)(p + 0x60) <= *(float *)(p + 0x2E00)) {
            *(float *)(p + 0x60) = *(float *)(p + 0x2E00);
            f |= 1;
        }
    } else {
        f |= 1;
    }
    if (*(float *)(p + 0x78) != 0.0f) {
        *(float *)(p + 0x68) = *(float *)(p + 0x68) + *(float *)(p + 0x78);
        if (!(*(float *)(p + 0x78) <= 0.0f)) {
            if (!(*(float *)(p + 0x68) < *(float *)(p + 0x2E08))) {
                *(float *)(p + 0x68) = *(float *)(p + 0x2E08);
                f |= 2;
            }
        } else if (*(float *)(p + 0x68) <= *(float *)(p + 0x2E08)) {
            *(float *)(p + 0x68) = *(float *)(p + 0x2E08);
            f |= 2;
        }
    } else {
        f |= 2;
    }
    if (*(float *)(p + 0x60) == 0.0f && *(float *)(p + 0x68) == 0.0f) {
        return 1;
    }
    v[0] = *(float *)(p + 0x60) * *(float *)(p + 0x10);
    v[1] = 0.0f;
    v[2] = *(float *)(p + 0x68) * *(float *)(p + 0x10);
    v[3] = 0.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105760(m, m, a);
    func_00104B80(v, m, v);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    if (f == 3) {
        r = true;
    } else {
        r = false;
    }
    return r;
}
}

class V393 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void u70();
    virtual void u74();
    virtual void u78();
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual void u1FC();
    virtual void u200();
    virtual void u204();
    virtual void u208();
    virtual void u20C();
    virtual void u210();
    virtual void u214();
    virtual void u218();
    virtual void u21C();
    virtual void u220();
    virtual void u224();
    virtual void u228();
    virtual void u22C();
    virtual void u230();
    virtual void u234();
    virtual void u238();
    virtual void u23C();
    virtual void u240();
    virtual void u244();
    virtual void u248();
    virtual void u24C();
    virtual void u250();
    virtual void u254();
    virtual void u258();
    virtual void u25C();
    virtual void u260();
    virtual void u264();
    virtual void u268();
    virtual void u26C();
    virtual void u270();
    virtual void u274();
    virtual void u278();
    virtual void u27C();
    virtual void u280();
    virtual void u284();
    virtual void u288();
    virtual void u28C();
    virtual void u290();
    virtual void u294();
    virtual void u298();
    virtual void u29C();
    virtual void u2A0();
    virtual void u2A4();
    virtual void u2A8();
    virtual void u2AC();
    virtual void u2B0();
    virtual void u2B4();
    virtual void u2B8();
    virtual void u2BC();
    virtual void u2C0();
    virtual void u2C4();
    virtual void u2C8();
    virtual void u2CC();
    virtual void u2D0();
    virtual void u2D4();
    virtual void u2D8();
    virtual void u2DC();
    virtual void u2E0();
    virtual void u2E4();
    virtual void u2E8();
    virtual void u2EC();
    virtual void u2F0();
    virtual void u2F4();
    virtual void u2F8();
    virtual void u2FC();
    virtual void u300();
    virtual void u304();
    virtual void u308();
    virtual void u30C();
    virtual void u310();
    virtual void u314();
    virtual void u318();
    virtual void u31C();
    virtual void u320();
    virtual void u324();
    virtual void u328();
    virtual void u32C();
    virtual void u330();
    virtual void u334();
    virtual void u338();
    virtual void u33C();
    virtual void u340();
    virtual void u344();
    virtual void u348();
    virtual void u34C();
    virtual void m350(char *, char *);
};

typedef struct { short h[3]; } __attribute__((aligned(4))) S6_393;

extern "C" S6_393 D_005BCC80;

extern "C" S6_393 D_005BCC88;

extern "C" void func_00393890(char *p, char *a, char *w) {
    S6_393 u;
    S6_393 t;
    unsigned char b;
    u = D_005BCC80;
    t = D_005BCC88;
    if ((*(unsigned char *)(p + 0x2DD7) != 0) == 1) return;
    *(unsigned char *)(p + 0x2DD7) = 1;
    if (*(signed char *)(a + 2) == 0 && (*(unsigned char *)(p + 0x2EC4) >= *(unsigned char *)(p + 0x2EC5)) == 1) {
        func_003A02B0(p, t.h[*(unsigned char *)(p + 0x2F3C)]);
    } else {
        if (*(signed char *)(a + 2) == 1 && (*(unsigned char *)(p + 0x2EC4) >= *(unsigned char *)(p + 0x2EC5)) == 1) {
            b = *(unsigned char *)(p + 0x2EE1);
            if (b == 1 || (b > 1 && !(*(unsigned short *)(p + 0x2EDE) & 0x100))) {
                *(unsigned char *)(p + 0x2DE5) = 0;
            }
        }
        func_003A02B0(p, u.h[*(unsigned char *)(p + 0x2F3C)]);
    }
    *(char *)(p + 0x16C) = *(signed char *)(a + 0);
    *(char *)(p + 0x16D) = *(signed char *)(a + 1);
    *(char *)(p + 0x16E) = *(signed char *)(a + 2);
    *(float *)(p + 0x170) = *(float *)(a + 4);
    *(float *)(p + 0x174) = *(float *)(a + 8);
    *(float *)(p + 0x178) = *(float *)(a + 0xC);
    *(float *)(p + 0x17C) = *(float *)(a + 0x10);
    *(float *)(p + 0x180) = *(float *)(a + 0x14);
    *(char *)(p + 0x184) = *(signed char *)(a + 0x18);
    *(float *)(p + 0x188) = *(float *)(a + 0x1C);
    *(char *)(p + 0x18C) = *(signed char *)(a + 0x20);
    *(float *)(p + 0x190) = *(float *)(a + 0x24);
    *(float *)(p + 0x194) = *(float *)(a + 0x28);
    *(float *)(p + 0x198) = *(float *)(a + 0x2C);
    *(char *)(p + 0x19C) = *(unsigned char *)(a + 0x30);
    *(int *)(p + 0x1A0) = *(int *)(a + 0x34);
    *(float *)(p + 0x1A4) = *(float *)(a + 0x38);
    *(char *)(p + 0x1A8) = *(signed char *)(a + 0x3C);
    *(char *)(p + 0x1A9) = *(signed char *)(a + 0x3D);
    *(char *)(p + 0x1AA) = *(signed char *)(a + 0x3E);
    ((V393 *)p)->m350(a, w);
}

extern "C" void func_003A2320(char *);

extern "C" void func_00393570(char *p, char *a, char *w) {
    unsigned char inc;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    if ((*(unsigned char *)(p + 0x2DD6) != 0) == 1) return;
    *(unsigned char *)(p + 0x2DD6) = 1;
    func_003A2320(p);
    inc = 1;
    if (*(signed char *)(w + 5) == 3 && *(signed char *)(w + 6) == *(signed char *)(p + 0x46)) inc = 2;
    *(unsigned char *)(p + 0x2EE5) += inc;
    if ((*(unsigned char *)(p + 0x2EE5) >= *(unsigned char *)(p + 0x2EE6)) == 1) {
        func_003A02B0(p, 0x24);
    } else if (*(signed char *)(w + 5) == 3 && *(signed char *)(w + 6) == *(signed char *)(p + 0x46)) {
        if (*(unsigned char *)(p + 0x2F3C) == 0) {
            func_003A02B0(p, 0x20);
        } else if (*(unsigned char *)(p + 0x2F3C) == 1) {
            func_003A02B0(p, 0x23);
        } else {
            func_003A02B0(p, 0x24);
        }
    } else {
        switch (*(short *)(p + 0xAC0)) {
        case 0x2E:
        case 0x2A:
        case 0x1E:
            func_003A02B0(p, 0x1E);
            break;
        case 0x2F:
        case 0x2B:
        case 0x1F:
            func_003A02B0(p, 0x1F);
            break;
        case 0x30:
        case 0x2C:
        case 0x21:
            func_003A02B0(p, 0x21);
            break;
        case 0x31:
        case 0x2D:
        case 0x22:
            func_003A02B0(p, 0x22);
            break;
        default:
            if (*(unsigned char *)(p + 0x2F3C) == 0) {
                func_003A02B0(p, 0x20);
            } else if (*(unsigned char *)(p + 0x2F3C) == 1) {
                func_003A02B0(p, 0x23);
            }
            break;
        }
    }
    *(char *)(p + 0x16C) = *(signed char *)(a + 0);
    *(char *)(p + 0x16D) = *(signed char *)(a + 1);
    *(char *)(p + 0x16E) = *(signed char *)(a + 2);
    *(float *)(p + 0x170) = *(float *)(a + 4);
    *(float *)(p + 0x174) = *(float *)(a + 8);
    *(float *)(p + 0x178) = *(float *)(a + 0xC);
    *(float *)(p + 0x17C) = *(float *)(a + 0x10);
    *(float *)(p + 0x180) = *(float *)(a + 0x14);
    *(char *)(p + 0x184) = *(signed char *)(a + 0x18);
    *(float *)(p + 0x188) = *(float *)(a + 0x1C);
    *(char *)(p + 0x18C) = *(signed char *)(a + 0x20);
    *(float *)(p + 0x190) = *(float *)(a + 0x24);
    *(float *)(p + 0x194) = *(float *)(a + 0x28);
    *(float *)(p + 0x198) = *(float *)(a + 0x2C);
    *(char *)(p + 0x19C) = *(unsigned char *)(a + 0x30);
    *(int *)(p + 0x1A0) = *(int *)(a + 0x34);
    *(float *)(p + 0x1A4) = *(float *)(a + 0x38);
    *(char *)(p + 0x1A8) = *(signed char *)(a + 0x3C);
    *(char *)(p + 0x1A9) = *(signed char *)(a + 0x3D);
    *(char *)(p + 0x1AA) = *(signed char *)(a + 0x3E);
    ((V393 *)p)->m350(a, w);
}

extern "C" int D_01CAFF38[];

extern "C" char D_00666750[];

extern "C" void func_00390E40(char *);

extern "C" void func_00252B50(char *, int, int, float, float);

extern "C" void func_0039D4C0(char *, int);

extern "C" void func_004B6970(char *, char *, int);

extern "C" int func_001AEA60(char *, int, int);

extern "C" int func_0031B860(int, char *, int, float);

extern "C" void func_0034B270(int, char *, int);

class V390 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68();
    virtual void g6C();
    virtual void g70();
    virtual void g74();
};

extern "C" void func_00390C00(char *p) {
    float y;
    int r;
    func_00390E40(p);
    func_00252B50(p, 0x80, 0x20, 400.0f, 300.0f);
    func_0039D4C0(p, 0);
    func_0039D4C0(p, 1);
    if (D_01CAFF38[0] == 0x79 || D_01CAFF38[0] == 0x19E) {
        y = 0.0f;
        if (*(int *)(p + 0xB04) != 0) {
            func_003A02B0(p, 2);
        } else {
            func_003A02B0(p, 1);
            y = 100.0f;
        }
        switch (*(unsigned char *)(p + 0x2DD4)) {
        case 0:
            *(float *)(p + 0x50) = 2900.0f;
            *(float *)(p + 0x54) = y;
            *(float *)(p + 0x58) = 2125.0f;
            *(float *)(p + 0x5C) = 1.0f;
            break;
        case 1:
            *(float *)(p + 0x50) = 2120.0f;
            *(float *)(p + 0x54) = y;
            *(float *)(p + 0x58) = 2125.0f;
            *(float *)(p + 0x5C) = 1.0f;
            break;
        default:
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0xAE0) : "memory");
            break;
        }
    } else {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0xAE0) : "memory");
        func_003A02B0(p, 2);
    }
    ((V390 *)(p + 0x130))->g6C();
    ((V390 *)(p + 0x130))->g74();
    ((V390 *)(p + 0x130))->g70();
    *(short *)(p + 0x90) = *(short *)(p + 0x160);
    func_004B6970(*(char **)(p + 0xB10), p, 0);
    func_004B6970(*(char **)(p + 0xB10), p, 1);
    r = func_001AEA60(D_00666750, 6, 3);
    *(int *)(p + 0x2DD0) = func_0031B860(r, p + 0xBC8, *(unsigned char *)(p + 0x2EE0) ? 2 : 1, *(float *)(p + 0xBC8));
    if (D_01CAFF38[0] == 0x79 || D_01CAFF38[0] == 0x19E) func_0034B270(5, 0, 0);
}

class P39A {
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
    virtual void d79();
    virtual void d80();
    virtual void d81();
    virtual void d82();
    virtual void d83();
    virtual void d84();
    virtual void d85();
    virtual void d86();
    virtual void d87();
    virtual void d88();
    virtual void d89();
    virtual void d90();
    virtual void d91();
    virtual void d92();
    virtual void d93();
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual unsigned char m1BC();
};

typedef struct { short s[5]; } S39A;

extern "C" S39A D_00563E60;

extern "C" void func_003A0F20(char *);

extern "C" void func_003A1180(char *);

static inline unsigned char bo39A(char *p) {
    unsigned char r;
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) r = 1;
    else r = 0;
    return r;
}

static inline void an39A(char *p, int k) {
    *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
    *(short *)(p + 0x2DDC) = k;
    func_0024DA80(p + 0x29D0, 0, k);
    func_0024DA80(p + 0x2AA0, 0, k);
}

extern "C" {
void func_0039A570(char *p, int f) {
    extern void func_00207480(int, int, char *, int);
    S39A t;
    float v;
    *(unsigned char *)(p + 0x2DE8) = 0;
    *(unsigned short *)(p + 0x2DD8) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        an39A(p, 0x4A);
        *(unsigned char *)(p + 5) = 10;
    case 10:
        if (f != 0 || bo39A(p) == 1) {
            an39A(p, 0x4B);
            *(unsigned char *)(p + 5) = 20;
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 45.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 0.0f;
            *(float *)(p + 0x70) = 0.0f;
            *(float *)(p + 0x74) = -2.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f;
            *(float *)(p + 0x2E04) = 0.0f;
            *(float *)(p + 0x2E08) = 0.0f;
            *(float *)(p + 0x2E0C) = 0.0f;
            *(unsigned char *)(p + 0x2DE0) = 0;
            *(unsigned char *)(p + 0x2DE3) = 0;
            *(unsigned char *)(p + 0x2DE4) = 0;
        } else {
            *(unsigned char *)(p + 0x2DE8) = 1;
        }
        func_003A0CD0(p, 0x800);
        break;
    case 20:
        if (bo39A(p) == 1) {
            an39A(p, 0x4C);
            *(unsigned char *)(p + 5) = 21;
        }
        break;
    case 21:
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(unsigned char *)(p + 5) = 30;
            *(float *)(p + 0x70) = 0.0f;
            *(float *)(p + 0x74) = -3.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f;
            *(float *)(p + 0x2E04) = -30.0f;
            *(float *)(p + 0x2E08) = 0.0f;
            *(float *)(p + 0x2E0C) = 0.0f;
        }
        t = D_00563E60;
        func_003A0CD0(p, t.s[D_01CAFF3C[0]] + 0x100);
        break;
    case 30:
        if ((unsigned char)((P39A *)p)->m1BC() == 1) {
            an39A(p, 0x4D);
            *(unsigned char *)(p + 5) = 40;
            func_00207480(3, 0x2E5, p + 0x450, 0x10);
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 0.0f;
            *(float *)(p + 0x70) = 0.0f;
            *(float *)(p + 0x74) = 0.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f;
            *(float *)(p + 0x2E04) = 0.0f;
            *(float *)(p + 0x2E08) = 0.0f;
            *(float *)(p + 0x2E0C) = 0.0f;
            *(unsigned char *)(p + 0x2DE3) = 1;
            *(unsigned char *)(p + 0x2DE4) = 1;
        }
        break;
    case 40:
        *(unsigned char *)(p + 5) = 41;
        break;
    case 41:
        *(unsigned char *)(p + 0x2DE8) = 1;
        if (bo39A(p) == 1) func_003A02B0(p, 2);
        break;
    }
    if (*(unsigned char *)(p + 5) >= 20 && *(unsigned char *)(p + 5) < 31) {
        if (!(*(unsigned char *)(p + 0x2DF5) & 1)) {
            v = 10.0f + (*(float *)(p + 0x164) - 350.0f) / 10.0f;
            if (v < 10.0f) v = 10.0f;
            else if (!(v <= 30.0f)) v = 30.0f;
            *(float *)(p + 0x68) = v;
            *(float *)(p + 0x78) = v;
            *(float *)(p + 0x2E08) = v;
        } else {
            *(float *)(p + 0x68) = 10.0f;
            *(float *)(p + 0x78) = 10.0f;
            *(float *)(p + 0x2E08) = 10.0f;
        }
        func_003A0F20(p);
        func_003A1180(p);
    }
}
}

extern "C" {
int func_00391DF0(char *, int);
}

class V130_1_ii {
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
    virtual int m(int);
};

extern "C" {
void func_00390BA0(char *p0) {
    int v0;
    int v1;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 4);
    switch (v0) {
    default:
        return;
    case 0:
        tmp0 = ((V130_1_ii *)p0)->m(v0);
        return;
    case 1:
        v1 = func_00391DF0(p0, v0);
        return;
    }
}
}

class V10_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(void);
};

class VCC_1_pi {
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
    virtual int m(char *);
};

class VCC_1_pv {
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
    virtual void m(char *);
};

extern "C" {
int func_00392870(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    ((VCC_1_pv *)(v0 + 1216))->m((v0 + 1104));
    v1 = ((V10_0_i *)(v0 + 9600))->m();
    if (*(unsigned char *)(v0 + 12092) != 1) {
        ((VCC_1_pv *)(v0 + 3456))->m((v0 + 11840));
        v1 = ((V10_0_i *)(v0 + 9744))->m();
    }
    if (*(unsigned char *)(v0 + 12092) != 0) {
        ((VCC_1_pv *)(v0 + 4992))->m((v0 + 11904));
        v1 = ((V10_0_i *)(v0 + 9888))->m();
    }
    v2 = *(unsigned char *)(v0 + 11733);
    tmp0 = 2;
    if (v2 != tmp0) {
        if (v2 != 1) {
            return v1;
        } else {
            tmp1 = ((VCC_1_pi *)(v0 + 6528))->m((v0 + 1104));
            return tmp1;
        }
    } else {
        v3 = ((VCC_1_pi *)(v0 + 8064))->m((v0 + 1104));
        return v3;
    }
}
}

extern "C" {
int func_0013D5D0(...);
}

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

class V14_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(void);
};

class VD0_0_v {
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
    virtual void m(void);
};

extern "C" {
int func_00392970(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 1216))->m();
    ((VD0_0_v *)(v0 + 3456))->m();
    ((VD0_0_v *)(v0 + 4992))->m();
    ((VD0_0_v *)(v0 + 6528))->m();
    ((VD0_0_v *)(v0 + 8064))->m();
    ((V14_0_v *)(v0 + 9600))->m();
    ((V14_0_v *)(v0 + 9744))->m();
    v1 = ((V14_0_i *)(v0 + 9888))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 528))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 532));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 528)));
    }
    return v1;
}
}

class V18_3_iiii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual int m(int, int, int);
};

extern "C" {
int func_00393EB0(int p0, int p1, int p2) {
    int v0;
    char *v1;
    int v2;
    if (p1 != 0) {
        v0 = (p0 + 2928);
        if (p2 != 0) {
            v1 = (char *)(p0 + 3096);
            if (v0 != 0) {
                if (v1 != 0) {
                    v2 = ((V18_3_iiii *)v1)->m(p1, p2, v0);
                }
            }
        }
    }
    return v2;
}
}
