extern "C" char D_01CAFF0C[];

extern "C" int D_01CAFF38[];

extern "C" short D_0054A0C0[];

extern "C" void func_00456190(char *);

extern "C" char *func_0027A710(char *);

extern "C" void func_001A2050(char *);

extern "C" void func_001A20C0(char *, int);

class Obj200d {
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
    virtual void mB4(int, int, int, int);
    virtual void dB8();
    virtual int mBC(float);
};

static inline void room_mark() {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    short id = *(short *)D_01CAFF38;
    unsigned short v = (short)(D_0054A0C0[id / 100] + id % 100) | 0x200;
    int i;
    char *q;
    for (i = 0, q = g; i < 0x30; i++, q += 2) {
        if (*(unsigned short *)(q + 0x620) == v) {
            break;
        }
        if (*(unsigned short *)(q + 0x620) == 0) {
            ((unsigned short *)(g + 0x620))[i] = v;
            break;
        }
    }
}

extern "C" {
void func_004554E0(char *p) {
    extern void func_001AD140(char *);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00456190(p);
        ((Obj200d *)(p + 0x200))->mB4(1, 0, 0, 0);
        func_001A2050(func_0027A710(p + 0x200));
        func_001A20C0(func_0027A710(p + 0x200), 2);
        func_001A20C0(func_0027A710(p + 0x200), 0xA);
        func_001A20C0(func_0027A710(p + 0x200), 0xB);
        func_001A20C0(func_0027A710(p + 0x200), 0xC);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 1:
        if (*(char **)(p + 0x690) != 0) {
            *(unsigned char *)(*(char **)(p + 0x690) + 0x90) = 0;
        }
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 2:
        if (*(char **)(p + 0x690) == 0) {
            room_mark();
        }
        {
            unsigned char r = ((Obj200d *)(p + 0x200))->mBC(*(float *)(p + 0x10));
            if (r == 4 || r == 0) {
                *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            }
        }
        break;
    case 3:
        if (*(char **)(p + 0x690) == 0) {
            room_mark();
            func_001AD140(p);
        }
        break;
    }
}
}

extern "C" char *func_002F7C10(int, int);

extern "C" int func_0020F3E0(char *, int, int);

extern "C" void func_00455A90(char *);

extern "C" void func_00455C30(char *);

extern "C" void func_00455CF0(char *, int);

extern "C" char *func_002EA290(int, int, float *, int);

extern "C" void func_00208830(char *, int);

struct O455 {
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
};

struct O455b {
    virtual void e0();
    virtual void mC(int);
};

static inline void tgtInit(char *t) {
    int i;
    *(unsigned char *)(t + 0) = 0;
    *(unsigned char *)(t + 1) = 0;
    *(short *)(t + 2) = 0;
    *(int *)(t + 8) = 0;
    *(int *)(t + 0xC) = 0;
    *(int *)(t + 0x10) = 0;
    *(int *)(t + 0x20) = 0;
    *(int *)(t + 0x24) = 0;
    *(int *)(t + 0x28) = 0;
    *(float *)(t + 0x2C) = 1.0f;
    *(float *)(t + 0x30) = 100000.0f;
    *(unsigned char *)(t + 0x34) = 0;
    *(unsigned char *)(t + 0x35) = 0;
    *(short *)(t + 0x36) = 0;
    for (i = 0; i < 10; i++)
        *(short *)(t + i * 2 + 0x38) = -1;
}

static inline void tgtSet(char *t, char *p, char *o) {
    tgtInit(t);
    *(unsigned char *)(t + 0) = 0;
    *(unsigned char *)(t + 1) = 0;
    *(short *)(t + 2) = 1;
    *(short *)(t + 4) = 0;
    *(char **)(t + 8) = p;
    *(int *)(t + 0xC) = 0;
    *(char **)(t + 0x10) = o;
    __asm__ volatile("lqc2 $vf4, 0x30(%0)
	lqc2 $vf5, 0x0(%1)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%1)" : : "r"(o), "r"(t + 0x20) : "memory");
}

extern "C" {
void func_004550D0(char *p) {
    extern void func_001AD140(char *);
    float v[4];
    O455b *b;
    if (*(short *)(p + 0x64A) != -1 && func_0020F3E0(*(char **)(*(char **)D_01CAFF0C + 0x18), 9, *(short *)(p + 0x64A)) == -1) {
        func_001AD140(p);
        return;
    }
    *(signed char *)(p + 0x642) = 0;
    func_00455A90(p);
    func_00455C30(p);
    func_00455CF0(p, 1);
    ((O455 *)(p + 0x200))->mB4(0, 0, 0, 0);
    tgtSet(p + 0x990, p, *(char **)(*(char **)(p + 0x1C8) + 0x104));
    *(int *)(p + 0xC) |= 0x40;
    if (*(short *)(p + 0x64A) != -1) {
        v[0] = *(float *)(p + 0x680);
        v[1] = 50.0f + *(float *)(p + 0x684);
        v[2] = *(float *)(p + 0x688);
        v[3] = 1.0f;
        *(char **)(p + 0x690) = func_002EA290(9, (unsigned char)*(short *)(p + 0x64A), v, 1);
        if (*(char **)(p + 0x690) != 0)
            *(signed char *)(*(char **)(p + 0x690) + 0x90) = 1;
    }
    b = (O455b *)func_002F7C10(*(short *)(p + 0x646), 0);
    if (b != 0)
        b->mC(0);
    if (*(short *)(p + 0x648) != -1)
        func_00208830(*(char **)(*(char **)D_01CAFF0C + 0x1C), *(short *)(p + 0x648));
    *(unsigned char *)(p + 4) += 1;
}
}

extern "C" char D_01DFABA0[];

extern "C" void func_003305E0(char *, int, int, char *, int, int, int);

extern "C" void func_002F43B0(int, unsigned char *);

extern "C" char *func_002075D0(int, int, int, int, int);

static inline void setc456(char *e, unsigned char r, unsigned char g, unsigned char b) { *(unsigned char *)(e + 0x9C) = r; *(unsigned char *)(e + 0x9D) = g; *(unsigned char *)(e + 0x9E) = b; *(unsigned char *)(e + 0x9B) = 2; *(unsigned char *)(e + 0x9F) = 0x80; *(unsigned char *)(e + 0x9B) = 3; *(unsigned char *)(e + 0x9B) = 1; }

extern "C" {
void func_00456280(char *p) {
    int func_001AD140(char *p);
    unsigned char c[4];
    bool f;
    unsigned char k;
    char *e;
    func_002F43B0(*(unsigned char *)(p + 0x644), c);
    f = false;
    switch (*(unsigned char *)(p + 0x642)) {
    case 0:
        k = *(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90);
        break;
    case 1:
        k = 7;
        break;
    }
    switch (k) {
    case 0:
        break;
    case 7:
        if (*(char **)(p + 0x698) != 0) {
            *(unsigned char *)(*(char **)(p + 0x698) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x698));
            *(char **)(p + 0x698) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1DC) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    case 6:
        if (*(char **)(p + 0x69C) != 0) {
            *(unsigned char *)(*(char **)(p + 0x69C) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x69C));
            *(char **)(p + 0x69C) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1E0) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    case 5:
        if (*(char **)(p + 0x6A0) != 0) {
            *(unsigned char *)(*(char **)(p + 0x6A0) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x6A0));
            *(char **)(p + 0x6A0) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1D8) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    case 4:
        if (*(char **)(p + 0x6A4) != 0) {
            *(unsigned char *)(*(char **)(p + 0x6A4) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x6A4));
            *(char **)(p + 0x6A4) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1E4) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    case 3:
        if (*(char **)(p + 0x6A8) != 0) {
            *(unsigned char *)(*(char **)(p + 0x6A8) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x6A8));
            *(char **)(p + 0x6A8) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1D4) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    case 2:
        if (*(char **)(p + 0x6AC) != 0) {
            *(unsigned char *)(*(char **)(p + 0x6AC) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x6AC));
            *(char **)(p + 0x6AC) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1D0) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    case 1:
        if (*(char **)(p + 0x6B0) != 0) {
            *(unsigned char *)(*(char **)(p + 0x6B0) + 0x3A) = 1;
            func_001AD140(*(char **)(p + 0x6B0));
            *(char **)(p + 0x6B0) = 0;
            e = func_002075D0(2, 0x10F, *(int *)(*(char **)(p + 0x1E8) + 0x104), 1, 0x40);
            if (e != 0) {
                setc456(e, c[0], c[1], c[2]);
            }
            f = true;
        }
    }
    if (f) func_003305E0(D_01DFABA0, 8, 0x44, p + 0x50, 0x22, 0, 0);
}
}

struct M207 { float m[16]; };

extern "C" {
char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
}

static inline void setc4567(char *e, unsigned char r, unsigned char g, unsigned char b) { *(unsigned char *)(e + 0x9C) = r; *(unsigned char *)(e + 0x9D) = g; *(unsigned char *)(e + 0x9E) = b; *(unsigned char *)(e + 0x9B) = 2; *(unsigned char *)(e + 0x9F) = 0x80; *(unsigned char *)(e + 0x9B) = 3; *(unsigned char *)(e + 0x9B) = 1; }

extern "C" void func_00456700(char *p) {
    unsigned char c[4];
    bool f;
    char *e;
    func_002F43B0(*(unsigned char *)(p + 0x644), c);
    f = false;
    switch (*(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90)) {
    case 0:
        if (*(char **)(p + 0x6B0) == 0) {
            *(char **)(p + 0x6B0) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x6B0);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1E8) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc4567(*(char **)(p + 0x6B0), c[0], c[1], c[2]);
            }
            f = true;
        }
        if (*(unsigned char *)(p + 0x643) == 1) break;
    case 1:
        if (*(char **)(p + 0x6AC) == 0) {
            *(char **)(p + 0x6AC) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x6AC);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1D0) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc4567(*(char **)(p + 0x6AC), c[0], c[1], c[2]);
            }
            f = true;
        }
        if (*(unsigned char *)(p + 0x643) == 2) break;
    case 2:
        if (*(char **)(p + 0x6A8) == 0) {
            *(char **)(p + 0x6A8) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x6A8);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1D4) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc4567(*(char **)(p + 0x6A8), c[0], c[1], c[2]);
            }
            f = true;
        }
        if (*(unsigned char *)(p + 0x643) == 3) break;
    case 3:
        if (*(char **)(p + 0x6A4) == 0) {
            *(char **)(p + 0x6A4) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x6A4);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1E4) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc4567(*(char **)(p + 0x6A4), c[0], c[1], c[2]);
            }
            f = true;
        }
        if (*(unsigned char *)(p + 0x643) == 4) break;
    case 4:
        if (*(char **)(p + 0x6A0) == 0) {
            *(char **)(p + 0x6A0) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x6A0);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1D8) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc4567(*(char **)(p + 0x6A0), c[0], c[1], c[2]);
            }
            f = true;
        }
        if (*(unsigned char *)(p + 0x643) == 5) break;
    case 5:
        if (*(char **)(p + 0x69C) == 0) {
            *(char **)(p + 0x69C) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x69C);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1E0) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc4567(*(char **)(p + 0x69C), c[0], c[1], c[2]);
            }
            f = true;
        }
        if (*(unsigned char *)(p + 0x643) == 6) break;
    case 6:
        if (*(char **)(p + 0x698) == 0) {
            *(char **)(p + 0x698) = func_00207480(2, 0x10E, 0, 0x40);
            e = *(char **)(p + 0x698);
            if (e != 0) {
                *(int *)(e + 0x94) = *(int *)(*(char **)(p + 0x1DC) + 0x104);
                *(unsigned char *)(e + 0x99) = 1;
                setc4567(*(char **)(p + 0x698), c[0], c[1], c[2]);
            }
            f = true;
        }
    case 7:
        break;
    }
    if (f) func_003305E0(D_01DFABA0, 8, 0x43, p + 0x50, 0x22, 0, 0);
}

class B0_455 {
public:
    char pad[0x40];
};

class B1_455 {
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
    virtual void m34(char *, char *);
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
    virtual void m64(char *, int, float, float, float);
    char b4;
    signed char b5;
};

class D_455 : public B0_455, public B1_455 {
public:
    int y;
};

class P_455 : public B0_455, public B1_455 {
public:
    int z;
};

extern "C" int func_002242C0(D_455 *);

extern "C" int func_00455B90(P_455 *);

extern "C" void func_00456B70(P_455 *, int, char *);

extern "C" void func_00455880(P_455 *self, char *a, B1_455 *e, char *w) {
    char *p = (char *)self;
    int r;
    if (a == 0) return;
    if (e == 0) return;
    if (e->b5 == 0 && (unsigned char)func_002242C0(static_cast<D_455 *>(e)) == 1) return;
    if (((signed char *)a)[2] != 0) {
        if (e->b5 == 2) {
            switch (*(unsigned char *)(a + 0x3D)) {
            case 0xD:
            case 0xE:
                break;
            default:
                return;
            }
        } else {
            switch (*(unsigned char *)(a + 0x3D)) {
            case 0xF:
            case 0x10:
                break;
            default:
                return;
            }
        }
    }
    if (e->b5 == 0 && (unsigned char)func_002242C0(static_cast<D_455 *>(e)) == 1) return;
    r = (unsigned char)func_00455B90(self);
    if (r == 1) {
        e->m64(a, 0, *(float *)(a + 4), 1.0f, 1.0f);
    } else {
        e->m34(a, (char *)(B1_455 *)self);
        *(unsigned char *)(p + 0x641) = 1;
    }
    func_00456B70(self, r, w);
    if (r == 1) {
        func_003305E0(D_01DFABA0, 8, 0x41, w, 0x22, 0, 0);
    } else {
        func_003305E0(D_01DFABA0, 8, 0x42, w, 0x22, 0, 0);
    }
}

class SubCCc {
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
    virtual int mCC(char *);
};

extern "C" {
extern "C" void func_00455790(char *p) {
    ((SubCCc *)(p + 0x200))->mCC(p + 0x650);
}
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
int func_00455050(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 512))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 220))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 224));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 220)));
    }
    return v1;
}
}
