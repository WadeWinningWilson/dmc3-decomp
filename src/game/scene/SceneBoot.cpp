extern "C" void func_001AD140(char *);

extern "C" char D_005BE098[4];

extern "C" void func_00195E20(char *, char *);

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

extern "C" int func_001AFB90(char *, int, int, int);

class Obj40s {
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
    virtual void m2C(char *, char *);
    virtual void d30();
    virtual void d34();
    virtual void m38();
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
    virtual void mD4(int);
};

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

static inline char *res_ent(char *t, unsigned int i) {
    char *r;
    if (*(unsigned int *)(t + 4) <= i) {
        r = 0;
    } else if (((int *)(t + 8))[i] == 0) {
        r = 0;
    } else {
        r = t + ((int *)(t + 8))[i];
    }
    return r;
}

static inline char *res_get(char *e, unsigned int i) {
    char *r;
    if (**(unsigned short **)(e + 8) == 0) {
        r = res_ent(*(char **)(e + 0xC), i);
    } else {
        r = *(char **)(e + 0xC);
    }
    return r;
}

extern "C" {
void func_0022E510(char *p) {
    extern char D_00666750[];
    switch (*(int *)(p + 0x38)) {
    case 0:
        *(int *)(p + 0x640) = func_001AFB90(D_00666750, 0x397, 0, 8);
        *(int *)(p + 0x38) = *(int *)(p + 0x38) + 1;
        UNIT(p + 0x650);
        break;
    case 1: {
        unsigned char r = 1;
        if (*(unsigned char *)(*(char **)(p + 0x640) + 1) != 0 && *(unsigned char *)(*(char **)(p + 0x640) + 1) != 3) {
            r = 0;
        }
        if (r) {
            ((Obj40s *)(p + 0x40))->m2C(res_get(*(char **)(p + 0x640), 1), res_get(*(char **)(p + 0x640), 0));
            ((Obj40s *)(p + 0x40))->m38();
            ((Obj40s *)(p + 0x40))->mD4(1);
            D_005BC1A8->m14(0x80000000, 0x3C);
            *(int *)(p + 0x3C) = 0xB4;
            *(int *)(p + 0x38) = *(int *)(p + 0x38) + 1;
        }
        break;
    }
    case 2:
        if (--*(int *)(p + 0x3C) <= 0) {
            D_005BC1A8->m18(0x80000000, 0x3C);
            *(int *)(p + 0x38) = *(int *)(p + 0x38) + 1;
        }
        func_00195E20(D_005BE098, p);
        break;
    case 3:
        if (D_005BC1A8->m2C() != 0) {
            func_001AD140(p);
        } else {
            func_00195E20(D_005BE098, p);
        }
        break;
    }
}
}

extern "C" char D_01DF5D20[];

extern "C" void func_001F9BF0(char *);

class ObjSnd24 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24(int, int);
};

extern "C" char D_006480D0[];

extern "C" char D_006661E0[];

extern "C" signed char D_01CAF515[];

extern "C" signed char D_01CAF516[];

extern "C" unsigned char D_01CAF51C[];

extern "C" unsigned char D_01CAF67C[];

extern "C" void func_00196070(char *);

extern "C" void func_001960F0(char *, int);

extern "C" void func_001AAC20(char *, int);

extern "C" int func_0022DD60(char *);

extern "C" int func_0022DB30(char *);

extern "C" int func_0022D960(char *p) {
    unsigned int st = *(unsigned int *)(p + 0xC);
    switch (st) {
    case 0:
        func_00196070(D_006480D0);
        func_001960F0(D_006480D0, 100);
        *(int *)(p + 0x14) = 0;
        (*(int *)(p + 0xC))++;
        *(int *)(p + 0x10) = 0;
        ((ObjSnd24 *)D_005BC1A8)->m24(0x80000000, 1);
        break;
    case 1:
        *(int *)(p + 0xC) = st + 1;
        *(int *)(p + 0x10) = 0;
        break;
    case 2:
        *(int *)(p + 0xC) = st + 1;
        *(int *)(p + 0x10) = 0;
        if (D_01CAF515[0]) {
            if (D_01CAF516[0] == 0x3C) {
                func_001AAC20(D_006661E0, 2);
            } else {
                func_001AAC20(D_006661E0, 1);
            }
        } else {
            func_001AAC20(D_006661E0, 0);
        }
        func_001F9BF0(D_01DF5D20);
        break;
    case 3:
        if (func_0022DD60(p)) {
            (*(int *)(p + 0xC))++;
            *(int *)(p + 0x10) = 0;
        }
        break;
    case 4:
        if (func_0022DB30(p)) {
            (*(int *)(p + 0xC))++;
            *(int *)(p + 0x10) = 0;
        }
        break;
    case 5:
        *(int *)(p + 0xC) = st + 1;
        break;
    case 6:
        func_00196070(D_006480D0);
        func_001960F0(D_006480D0, 8);
        D_01CAF51C[0] = 0;
        D_01CAF67C[0] = 0;
        return *(unsigned char *)(p + 8) ? -1 : 1;
    }
    return 0;
}

extern "C" {
int func_001AF080(char *, int);
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
int func_0022E790(int p0) {
    extern char D_00666750[];
    int v0;
    int v1;
    int v2;
    v2 = ((VD0_0_i *)(p0 + 64))->m();
    v0 = *(int *)((char *)p0 + 1600);
    if (v0 != 0) {
        v2 = func_001AF080(D_00666750, v0);
    }
    return v2;
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
int func_0022E7E0(int p0) {
    int tmp0;
    tmp0 = ((VCC_1_ii *)(p0 + 64))->m(0);
    return tmp0;
}
}
