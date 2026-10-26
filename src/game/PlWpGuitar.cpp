/* Emits two effects for every active entry pair (sub-object at +0x130 gives the rate). */
class Sub130 {
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
    virtual void m6C();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual float m7C();
    virtual int m80(float);
    virtual void d31();
    virtual int m88();
};

extern "C" void func_00104C00(char *, int, char *);

extern "C" char *func_00207480(int, int, int, int);

extern "C" char D_00666750[];

extern "C" void func_001AD140(char *);

extern "C" Sub130 *func_002792A0(char *);

extern "C" void func_001AD100(char *);

extern "C" char *func_002D9F00(char *, int);

extern "C" void func_003023F0(int);

extern "C" void func_00208050(char *, int);

extern "C" int func_0028B8E0(char *);

extern "C" int func_0028B620(char *);

extern "C" void func_0028B980(char *, char *, int);

extern "C" void func_0028B610(char *);

extern "C" char *func_001AED80(char *, int, unsigned short, int);

extern "C" void func_0028BF50(char *);

extern "C" char D_00548BB0[];

extern "C" char *func_003032F0(int, char *);

extern "C" int func_002242C0(char *);

extern "C" char *func_002FF740(int, int);

extern "C" int func_0028B690(char *, unsigned char);

extern "C" void func_00303870(char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

class Obj180b {
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
    virtual void mB0(int, char *);
    virtual void dB4();
    virtual void mB8(int, int, int, int, int);
    virtual void mBC(float);
};

class Spd1C {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void m1C(float);
};

static inline void attach(char *e, char *t) {
    *(char **)(e + 0x90) = t;
    *(unsigned char *)(e + 0x9A) = 0;
}

static inline void spd(char *p, float f) {
    ((Spd1C *)func_002792A0(p + 0x180))->m1C(f);
}

extern "C" void func_00302B60(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        func_0028B610(p);
        func_00208050(func_001AED80(D_00666750, 2, *(signed char *)(p + 0x46) * 15 + 3, 2), 1);
        *(char **)(p + 0x89C) = func_003032F0(*(int *)(*(char **)(p + 0x104) + 0x104), p);
        if ((unsigned char)func_002242C0(*(char **)(p + 0xE0)) == 0) {
            *(char **)(p + 0x894) = func_002FF740(3, *(int *)(*(char **)(p + 0x10C) + 0x104));
        } else {
            *(char **)(p + 0x894) = 0;
        }
        *(char **)(p + 0xE4) = D_00548BB0;
        *(unsigned char *)(p + 0x8A0) = *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D1);
        *(unsigned char *)(p + 0xDC) = 0;
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    case 1:
        if ((unsigned char)func_0028B8E0(p) == 0) {
            if (*(char **)(p + 0x898) != 0) {
                func_001AD140(*(char **)(p + 0x898));
                *(char **)(p + 0x898) = 0;
            }
            return;
        }
        if ((unsigned char)func_0028B620(p) == 0) {
            *(unsigned char *)(p + 0xD8) = 1;
        } else {
            *(unsigned char *)(p + 0xD8) = *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2);
        }
        if (!(*(float *)(*(char **)(p + 0xE0) + 0x29A8) <= 0.0f)) {
            return;
        }
        func_0028B980(p, p + 0x850, *(unsigned char *)(p + 0xD8));
        if (*(unsigned char *)(p + 0xDC) == 1) {
            char *e = *(char **)(p + 0xE0);
            if (*(unsigned char *)(e + 0x2848) != 0x11 || *(unsigned char *)(e + 0x2998) != 0x58 || *(unsigned char *)(e + 0x284C) != 3) {
                ((Obj180b *)(p + 0x180))->mBC(*(float *)(p + 0x10));
            }
        }
        switch (*(signed char *)(p + 0xDA)) {
        case 0:
            if (*(unsigned char *)(*(char **)(p + 0xE0) + 0x24EC) != *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2) ||
                *(unsigned char *)(p + 0xF8) != *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2) ||
                *(unsigned char *)(p + 0xDC) == 1) {
                ((Obj180b *)(p + 0x180))->mB0(*(int *)(p + 0x890), p + 0x100);
            }
            *(unsigned char *)(p + 0xDC) = 0;
            break;
        case -1:
            *(unsigned char *)(p + 0xDC) = 0;
            break;
        default:
            if (*(unsigned char *)(*(char **)(p + 0xE0) + 0x24EC) != *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2) ||
                *(unsigned char *)(p + 0xF8) != *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2)) {
                ((Obj180b *)(p + 0x180))->mB8(0, *(signed char *)(p + 0xDA), *(unsigned char *)(p + 0xDB), 0, 0);
                if (*(unsigned char *)(p + 0xD8) == 0x2A) {
                    spd(p, 10.0f);
                } else if (*(unsigned char *)(p + 0xD8) == 0x26) {
                    spd(p, 20.0f);
                } else if (*(unsigned char *)(p + 0xD8) == 0x25) {
                    spd(p, 61.0f);
                } else if (*(unsigned char *)(p + 0xD8) == 0x31) {
                    spd(p, 7.0f);
                } else if (*(unsigned char *)(p + 0xD8) == 0x17) {
                    spd(p, 51.0f);
                } else if (*(unsigned char *)(p + 0xD8) == 0x1B) {
                    spd(p, 21.0f);
                } else if (*(unsigned char *)(p + 0xD8) == 0xD) {
                    spd(p, 56.0f);
                } else if (*(unsigned char *)(p + 0xD8) == 0x2E) {
                    spd(p, 31.0f);
                }
                *(unsigned char *)(p + 0xDC) = 1;
            }
            break;
        }
        *(unsigned char *)(p + 0xF8) = *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2);
        if (*(unsigned char *)(p + 0xD8) != 1) {
            if ((*(unsigned char *)(*(char **)(p + 0xE0) + 0x24EB) & 0x80) && *(int *)(p + 0x894) != 0) {
                func_003023F0(*(int *)(p + 0x894));
            }
            if (*(unsigned char *)(*(char **)(p + 0xE0) + 0x24EB) & 0x40) {
                if (*(char **)(p + 0x898) == 0) {
                    *(char **)(p + 0x898) = func_00207480(2, 0xC1, 0, 8);
                    if (*(char **)(p + 0x898) != 0) {
                        attach(*(char **)(p + 0x898), *(char **)(*(char **)(p + 0x104) + 0x104));
                    }
                }
            } else if (*(char **)(p + 0x898) != 0) {
                func_001AD140(*(char **)(p + 0x898));
                *(char **)(p + 0x898) = 0;
            }
        }
        *(unsigned char *)(p + 0x8A0) = *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D1);
        func_00104C00(p + 0x810, (int)func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD4)), p + 0x850);
        UNIT(*(char **)(*(char **)(p + 0x100) + 0x100));
        if ((unsigned char)func_0028B690(p, *(unsigned char *)(p + 0xD8)) == 0 || *(unsigned char *)(*(char **)(p + 0xE0) + 0xD6) == 0) {
            return;
        }
        *(unsigned char *)(p + 0xD1) = 1;
        func_00303870(p + 0x89C);
        if (*(char **)(p + 0x89C) != 0) {
            *(unsigned char *)(*(char **)(p + 0x89C) + 0x40) = 1;
        }
        func_0028BF50(p);
        break;
    }
}

extern "C" void func_0013D5D0(char *);

extern "C" void func_00206730(char *);

class ObjSkD0 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void d49(); virtual void mD0();
};

class ObjSk14 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void m14();
};

extern "C" void func_00286040(char *);

extern "C" void func_003031E0(char *p) {
    int i;
    ((ObjSkD0 *)(p + 0x180))->mD0();
    if (*(unsigned char *)(p + 0xDD) == 1) {
        ((ObjSk14 *)(p + 0x780))->m14();
    }
    func_00286040(p + 0x894);
    if (*(char **)(p + 0x894) != 0) {
        func_001AD140(*(char **)(p + 0x894));
    }
    func_00303870(p + 0x89C);
    if (*(char **)(p + 0x89C) != 0) {
        func_001AD140(*(char **)(p + 0x89C));
        *(int *)(p + 0x89C) = 0;
    }
    func_00206730(p + 0x898);
    if (*(char **)(p + 0x898) != 0) {
        func_001AD140(*(char **)(p + 0x898));
        *(int *)(p + 0x898) = 0;
    }
    for (i = 0; i < *(int *)(p + 0x118); i++) {
        func_0013D5D0(p + i * 16 + 0x11C);
    }
}

class ObjC8 {
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

extern "C" {
extern "C" void func_00303120(char *p) {
    func_00104C00(p + 0x810, (int)func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD4)), p + 0x850);
    ((ObjC8 *)(p + 0x180))->mC8(p + 0x810);
}
}

extern "C" {
int func_0028BFE0(char *);
}

class V10_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(void);
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
int func_00303170(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(signed char *)(p0 + 218) != -1) {
        ((VCC_1_pv *)(v0 + 384))->m((v0 + 2064));
        v1 = func_0028BFE0(v0);
        if ((v1 & 255) == 1) {
            v1 = ((V10_0_i *)(v0 + 1920))->m();
        }
    }
    return v1;
}
}
