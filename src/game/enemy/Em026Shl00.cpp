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

class VB4u {
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
    virtual unsigned int mB4();
};

static inline unsigned char ona5c(char *p) {
    if (*(unsigned char *)(p + 0xA5C) == 1) return 1;
    return 0;
}

extern "C" {
void func_004B72F0(char *p) {
    extern Sub130 *func_002792A0(char *);
    float v[4] __attribute__((aligned(16)));
    unsigned int n;
    unsigned int i;
    if ((unsigned char)ona5c(p) != 1) return;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(p + 0x9A0), "r"(v) : "memory");
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(v) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(p + 0x9E0), "r"(p + 0xF0) : "memory");
    n = ((VB4u *)func_002792A0(p + 0x1C0))->mB4();
    for (i = 0; i < n; i++) {
        if (*(char **)((char *)(i * 4) + (int)p + 0x1B4) != 0 && *(char **)(*(char **)((char *)(i * 4) + (int)p + 0x1B4) + 0x104) != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x1B4) + 0x104) + 0x30), "r"(v) : "memory");
            *(float *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x1B4) + 0x104) + 0x3C) = 1.0f;
        }
    }
}
}

extern "C" char *func_00279290(char *);

extern "C" void func_001A1E10(char *);

extern "C" void func_001A1F90(char *);

extern "C" void func_001A2180(char *, int, int);

extern "C" void func_001A2600(char *, short);

extern "C" void func_004B7B90(char *);

extern "C" void func_004B87C0(char *, float);

extern "C" void func_004B8400(char *);

extern "C" void func_004B87D0(char *, int);

extern "C" void func_004B8850(char *, int);

extern "C" int func_004B8780(char *, char *, float, float);

class W4B8 {
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
    virtual void mBC(float);
};

class W4B8p {
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
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual int m1BC();
};

extern "C" {
void func_004B7FB0(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern int func_004B8610(char *);
    char *o;
    char *q;
    o = *(char **)(p + 0xAC0);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_001A1E10(func_00279290(p + 0x1C0));
        func_004B7B90(p);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 40.0f;
        *(float *)(p + 0x68) = 7.5f;
        *(float *)(p + 0x6C) = 0.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = -3.0f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 0.0f;
        *(float *)(p + 0xA40) = 0.0f;
        *(float *)(p + 0xA44) = 0.0f;
        *(float *)(p + 0xA48) = 7.5f;
        *(float *)(p + 0xA4C) = 0.0f;
        if (*(unsigned char *)(p + 0xA34) == 0) {
            *(float *)(p + 0x60) = -7.5f;
            *(float *)(p + 0xA40) = -7.5f;
        } else {
            *(float *)(p + 0x60) = 7.5f;
            *(float *)(p + 0xA40) = 7.5f;
        }
        q = *(char **)(p + 0x84C);
        if (q != 0) {
            *(unsigned char *)(p + 0xA5E) = 4;
            *(int *)(q + 0xC) = 0x35000;
            *(unsigned char *)(q + 5) = 1;
        }
        ((W4B8 *)(p + 0x1C0))->mB4(0, 0, 0, 0);
        func_004B87C0(p, 5.0f);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 1:
        func_004B8400(p);
        if ((unsigned char)func_004B8610(p) == 1) {
            *(float *)(p + 0x70) = 0.0f;
            *(float *)(p + 0x74) = -2.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0xA40) = 0.0f;
            *(float *)(p + 0xA44) = -20.0f;
            *(float *)(p + 0xA48) = 7.5f;
            *(float *)(p + 0xA4C) = 0.0f;
            if (*(unsigned char *)(p + 0xA34) == 0) {
                *(float *)(p + 0x60) = -7.5f;
                *(float *)(p + 0xA40) = -7.5f;
            } else {
                *(float *)(p + 0x60) = 7.5f;
                *(float *)(p + 0xA40) = 7.5f;
            }
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        ((W4B8 *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        func_004B87D0(p, 0x20);
        break;
    case 2:
        if ((unsigned char)((W4B8p *)p)->m1BC() == 1) {
            q = *(char **)(p + 0x84C);
            if (q != 0) *(unsigned char *)(q + 5) = 0xD;
            ((W4B8 *)(p + 0x1C0))->mB4(1, 0, 0, 0);
            if (*(unsigned char *)(p + 0xA34) == 0) {
                o = func_00207480(3, 0x311, 0, 0x10);
                if (o != 0) {
                    *(int *)(o + 0x90) = *(int *)(func_00279290(p + 0x1C0) + 0x108);
                    *(unsigned char *)(o + 0x9A) = 0;
                }
            } else {
                o = func_00207480(3, 0x312, 0, 0x10);
                if (o != 0) {
                    *(int *)(o + 0x90) = *(int *)(func_00279290(p + 0x1C0) + 0x108);
                    *(unsigned char *)(o + 0x9A) = 0;
                }
            }
            func_004B8850(p, 0x1F);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            break;
        }
        func_004B8400(p);
        func_004B8610(p);
        ((W4B8 *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        func_004B87D0(p, 0x20);
        break;
    case 3:
        ((W4B8 *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        if (*(unsigned char *)(o + 0x2F3D) >= 2) *(unsigned char *)(p + 0xA5C) = 0;
        if (*(unsigned char *)(o + 0x2F3D) < 3) break;
        if (*(unsigned char *)(p + 0xA34) == 0) {
            func_00207480(3, 0x363, *(int *)(func_00279290(p + 0x1C0) + 0x108), 0x10);
            func_004B8850(p, 0x27);
        } else {
            func_00207480(3, 0x364, *(int *)(func_00279290(p + 0x1C0) + 0x108), 0x10);
            func_004B8850(p, 0x58);
        }
        func_001A2180(func_00279290(p + 0x1C0), 0x40, 1);
        *(float *)(p + 0xA50) = 60.0f;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 4:
        func_001A2600(func_00279290(p + 0x1C0), (int)(-2.0f * *(float *)(p + 0x10)));
        if ((unsigned char)func_004B8780(p, p + 0xA50, 1.0f, 0.0f) == 1) {
            func_001A1F90(func_00279290(p + 0x1C0));
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 5:
        break;
    }
}
}

extern "C" {
int func_001AD140(char *p);
}

extern "C" void func_0028C5C0(char *, int, float);

extern "C" void func_001AD100(char *);

extern "C" void func_004B7E60(char *);

extern "C" void func_004B74E0(char *);

extern "C" void func_004B7540(char *);

extern "C" void func_004B7550(char *);

extern "C" void func_004B77B0(char *);

extern "C" void func_004B77C0(char *);

extern "C" void func_004B7D90(char *);

extern "C" void func_00195E20(char *, char *);

extern "C" char D_005BE098[4];

class VC8b {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47(); virtual void f(char *);
};

static inline unsigned char func_004B7190_a(char *o) {
    return (*(unsigned int *)(o + 0xA0) & 1) != 0;
}

static inline unsigned char func_004B7190_b(char *p) {
    return *(unsigned char *)(p + 0xA5C) == 1;
}

extern "C" void func_004B7190(char *p) {
    char *w = *(char **)(p + 0xAC0);
    func_001AD100(p);
    if (*(unsigned char *)(w + 0x2F3D) == 4) {
        func_001AD140(p);
        return;
    }
    func_004B7E60(p);
    switch (*(short *)(p + 0xA58)) {
    case 0:
        func_004B74E0(p);
        break;
    case 1:
        func_004B7540(p);
        break;
    case 2:
        func_004B7550(p);
        break;
    case 3:
        func_004B77B0(p);
        break;
    case 4:
        func_004B77C0(p);
        break;
    }
    if (func_004B7190_a(func_00279290(p + 0x1C0)) == 1) {
        func_004B7D90(p);
        ((VC8b *)(p + 0x1C0))->f(p + 0x170);
        if (func_004B7190_b(p) == 1) {
            func_0028C5C0(p + 0x7D0, 0, *(float *)(p + 0x10));
        }
        func_00195E20(D_005BE098, p);
    }
}

extern "C" void func_0034BA60(int, char *, int, int, int);

class W4B7 {
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
    virtual void mBC(float);
};

class W4B7m {
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
    virtual int mAC();
};

extern "C" {
void func_004B77C0(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern char *func_002792A0(char *);
    extern void func_004B8610(char *);
    char *o;
    char *e;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_001A1E10(func_00279290(p + 0x1C0));
        *(float *)(p + 0x50) = 2410.0f;
        *(float *)(p + 0x54) = -10.0f;
        *(float *)(p + 0x58) = 3400.0f;
        *(float *)(p + 0x5C) = 1.0f;
        *(short *)(p + 0xAD4) = 0;
        *(short *)(p + 0x90) = 0;
        *(short *)(p + 0xAD6) = 0;
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(int *)(p + 0x68) = 0;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0xA40) = 0;
        *(int *)(p + 0xA44) = 0;
        *(int *)(p + 0xA48) = 0;
        *(int *)(p + 0xA4C) = 0;
        ((W4B7 *)(p + 0x1C0))->mB4(2, 0, 0, 0);
        *(float *)(p + 0xA50) = 173.0f;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 1:
        if ((unsigned char)func_004B8780(p, p + 0xA50, 1.0f, 0.0f) != 1) break;
        *(float *)(p + 0xA50) = 135.0f;
        *(float *)(p + 0xA54) = 40.0f;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 2:
        func_004B8780(p, p + 0xA50, 1.0f, 0.0f);
        if ((unsigned char)func_004B8780(p, p + 0xA54, 1.0f, 0.0f) != 1) break;
        o = *(char **)(p + 0xAC0);
        if (*(unsigned char *)(p + 0xA34) != 0) e = func_00207480(3, 0x3BE, 0, 0x10);
        else e = func_00207480(3, 0x3BD, 0, 0x10);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(func_00279290(p + 0x1C0) + 0x108) + 0x80;
            *(unsigned char *)(e + 0x9A) = 0;
            *(unsigned char *)(e + 0x3A) = 1;
        }
        func_0034BA60(0x59, *(char **)(func_00279290(p + 0x1C0) + 0x108) + 0xB0, *(signed char *)(o + 0x46), 0, 1);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 3:
        if ((unsigned char)func_004B8780(p, p + 0xA50, 1.0f, 0.0f) != 1) break;
        *(float *)(p + 0xA50) = 80.0f;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 4:
        func_004B8780(p, p + 0xA50, 1.0f, 0.0f);
        if ((unsigned char)((W4B7m *)func_002792A0(p + 0x1C0))->mAC() == 4) {
            ((W4B7 *)(p + 0x1C0))->mB4(0, 0, 0, 0);
            *(float *)(p + 0x64) = 15.0f;
            *(float *)(p + 0xA44) = 15.0f;
            func_004B8850(p, 0x56);
            func_004B87C0(p, 5.0f);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            break;
        }
        ((W4B7 *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        break;
    case 5:
        ((W4B7 *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        if ((unsigned char)func_004B8780(p, p + 0xA50, 1.0f, 0.0f) == 1) {
            func_001A1F90(func_00279290(p + 0x1C0));
            *(int *)(p + 0x60) = 0;
            *(int *)(p + 0x64) = 0;
            *(int *)(p + 0x68) = 0;
            *(int *)(p + 0x6C) = 0;
            *(int *)(p + 0x70) = 0;
            *(int *)(p + 0x74) = 0;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 0;
            *(int *)(p + 0xA40) = 0;
            *(int *)(p + 0xA44) = 0;
            *(int *)(p + 0xA48) = 0;
            *(int *)(p + 0xA4C) = 0;
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            break;
        }
        func_004B87D0(p, 0x20);
        break;
    case 6:
        break;
    }
    func_004B8610(p);
}
}

extern "C" void func_00104B80(float *, float *, float *);

extern "C" void func_0028C910(char *);

extern "C" void func_00105760(char *, char *, float);

extern "C" void func_004B7F80(char *, int);

extern "C" void func_004B8680(char *);

extern "C" void func_004B8730(char *);

class O4B7a {
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
    virtual void mB4(int, int, int, int);
    virtual void uB8();
    virtual void mBC(float);
};

class O4B7b {
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
    virtual int mAC();
};

extern "C" {
void func_004B7550(char *p) {
    extern char *func_002792A0(char *);
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    char *e;
    char *s;
    float a;
    e = *(char **)(p + 0xAC0);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        ((O4B7a *)(p + 0x1C0))->mB4(2, 0, 0, 0);
        (*(unsigned char *)(p + 5))++;
        break;
    case 1:
        if ((unsigned char)((O4B7b *)func_002792A0(p + 0x1C0))->mAC() == 4) {
            if ((s = *(char **)(p + 0x84C)) != 0) {
                *(unsigned char *)(p + 0xA5E) = 1;
                *(int *)(s + 0xC) = 0xCC0;
                func_0028C910(p + 0x7D0);
                *(unsigned short *)(s + 6) = *(unsigned short *)(p + 0x7D4);
            }
            if (*(unsigned char *)(p + 0xA34) == 0) {
                *(float *)(p + 0xA50) = 12.0f;
            } else {
                *(float *)(p + 0xA50) = 12.0f;
            }
            ((O4B7a *)(p + 0x1C0))->mB4(0, 0, 0, 0);
            (*(unsigned char *)(p + 5))++;
            func_004B8850(p, 0x56);
            func_004B87C0(p, 5.0f);
        } else {
            ((O4B7a *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        }
        break;
    case 2:
        if (*(short *)(e + 0x2F3E) == 2) {
            func_001A1F90(func_00279290(p + 0x1C0));
            func_004B7F80(p, 0);
        } else {
            func_004B8680(p);
            func_004B8730(p);
            a = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
            __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
            func_00105760((char *)m, (char *)m, a);
            func_00104B80(v, m, (float *)(p + 0x60));
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
            func_004B8780(p, p + 0xA50, 1.0f, 0.0f);
            ((O4B7a *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
            func_004B87D0(p, 0x20);
        }
        break;
    }
}
}

extern "C" char *D_005BDC30;

extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern "C" void func_0028C8E0(char *, int);

extern "C" void func_0028C3A0(char *, int, int, char *);

class O4B6E {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28();
    virtual void m2C(char *, char *);
    virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C();
    virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C();
    virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C();
    virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC();
    virtual void mB0(char *, char *);
};

static inline char *ent4B6(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch4B6(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent4B6(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" void func_004B6E40(char *p) {
    char *x;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(char **)(p + 0x7C0) = gch4B6(*(char **)(p + 0x1B0), 0);
    if (*(unsigned char *)(p + 0xA34) == 0) x = gch4B6(*(char **)(p + 0x1B0), 2);
    else x = gch4B6(*(char **)(p + 0x1B0), 3);
    *(char **)(p + 0x7C4) = gch4B6(*(char **)(p + 0x1B0), 0x13);
    ((O4B6E *)(p + 0x1C0))->m2C(x, *(char **)(p + 0x7C0));
    ((O4B6E *)(p + 0x1C0))->mB0(*(char **)(p + 0x7C4), p + 0x1B4);
    *(unsigned char *)(p + 0xA5E) = 5;
    *(unsigned char *)(p + 0xA5F) = 0;
    *(short *)(p + 0xA60) = 0;
    *(unsigned char *)(p + 0xA70) = 2;
    *(float *)(p + 0xA80) = 0.0f;
    *(float *)(p + 0xA84) = 100.0f;
    *(float *)(p + 0xA88) = 0.0f;
    *(float *)(p + 0xA8C) = 1.0f;
    *(float *)(p + 0xA90) = 50.0f;
    func_0028C200(p + 0x7D0, p + 0xA5E, p + 0xA70, 3, D_005BDC30, p, 0);
    *(int *)(p + 0x8A8) = 0x35000;
    *(float *)(p + 0x8B4) = 1.0f;
    *(unsigned char *)(p + 0x7D3) = 1;
    func_0028C8E0(p + 0x7D0, 7);
    func_0028C910(p + 0x7D0);
    func_0028C3A0(p + 0x7D0, 0, -1, p + 0x170);
    *(unsigned char *)(p + 0xA5E) = 4;
    *(float *)(p + 0x50) = 0.0f;
    *(float *)(p + 0x54) = 0.0f;
    *(float *)(p + 0x58) = 0.0f;
    *(float *)(p + 0x5C) = 1.0f;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 0.0f;
    *(float *)(p + 0x6C) = 0.0f;
    *(float *)(p + 0x70) = 0.0f;
    *(float *)(p + 0x74) = 0.0f;
    *(float *)(p + 0x78) = 0.0f;
    *(float *)(p + 0x7C) = 0.0f;
    *(float *)(p + 0xA40) = 0.0f;
    *(float *)(p + 0xA44) = 0.0f;
    *(float *)(p + 0xA48) = 0.0f;
    *(float *)(p + 0xA4C) = 0.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x170) : "memory");
    *(short *)(p + 0xAD4) = 0;
    *(short *)(p + 0x90) = 0;
    *(short *)(p + 0xAD6) = 0;
    *(float *)(p + 0x1A0) = *(float *)(p + 0x50);
    *(float *)(p + 0x1A4) = *(float *)(p + 0x54);
    *(float *)(p + 0x1A8) = *(float *)(p + 0x58);
    *(short *)(p + 0xA5A) = -1;
    func_004B7F80(p, 0);
    *(unsigned char *)(p + 0xA5C) = 1;
    (*(unsigned char *)(p + 4))++;
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
extern "C" void func_004B7430(char *p) {
    ((SubCCc *)(p + 0x1C0))->mCC(p + 0x170);
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
int func_004B7450(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 448))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 304))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 308));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 304)));
    }
    return v1;
}
}
