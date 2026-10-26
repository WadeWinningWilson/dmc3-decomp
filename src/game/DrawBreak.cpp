extern "C" void func_001A1F90(char *);

extern "C" char *func_00279290(char *);

class ObjB4C8 {
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
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void mC8(char *);
};

/* Resets both trails (+0x580, +0xB80) to the shared anchor at +0x18D0 and ticks the motion. */
extern "C" void func_0036F540(char *p) {
    *(unsigned char *)(p + 0x18C4) = 0;
    *(unsigned char *)(p + 0x18C5) = 0;
    ((ObjB4C8 *)(p + 0x580))->mB4(0, 0, 0, 0);
    ((ObjB4C8 *)(p + 0x580))->mC8(p + 0x18D0);
    ((ObjB4C8 *)(p + 0xB80))->mB4(0, 0, 0, 0);
    ((ObjB4C8 *)(p + 0xB80))->mC8(p + 0x18D0);
    func_001A1F90(func_00279290(p + 0x1180));
}

extern "C" signed char D_005628F0[];

extern "C" char D_01CAFF30[];

static inline void bclr36F(char *p, short k) {
    int m = ~(1 << (k & 31));
    *(int *)(*(char **)(p + 4) + k / 32 * 4 + 0x680) &= m;
}

static inline void bset36F(char *p, short k) {
    int m = 1 << (k & 31);
    *(int *)(*(char **)(p + 4) + k / 32 * 4 + 0x680) |= m;
}

static inline unsigned char tst36F(char *p, int m) {
    return (*(int *)(*(char **)(p + 4) + 0x684) & m) != 0;
}

extern "C" void func_0036FD60(char *p) {
    int i;
    int n;
    for (i = 0x24; i <= 0x39; i++) {
        if (D_005628F0[i - 0x24] != -1) {
            if (!(*(int *)D_01CAFF30 > D_005628F0[i - 0x24])) {
                p[i + 0x20] = 0;
                bclr36F(p, i);
            } else if (*(int *)D_01CAFF30 > D_005628F0[i - 0x24]) {
                p[i + 0x20] = 0;
                bset36F(p, i);
            }
        }
    }
    if (*(int *)D_01CAFF30 < 5) {
        *(signed char *)(p + 0x44) = 0;
        *(int *)(*(char **)(p + 4) + 0x684) &= ~0x10;
    } else if (*(int *)D_01CAFF30 == 5) {
        *(signed char *)(p + 0x44) = 1;
        *(int *)(*(char **)(p + 4) + 0x684) |= 0x10;
    } else if (*(int *)D_01CAFF30 >= 6) {
        *(signed char *)(p + 0x44) = 0;
        *(int *)(*(char **)(p + 4) + 0x684) |= 0x10;
    }
    if (*(int *)D_01CAFF30 == 6) {
        *(unsigned char *)(p + 0x48) = 0;
        *(int *)(*(char **)(p + 4) + 0x684) &= ~0x100;
        *(unsigned char *)(p + 0x49) = 0;
        *(int *)(*(char **)(p + 4) + 0x684) &= ~0x200;
        *(unsigned char *)(p + 0x4A) = 0;
        *(int *)(*(char **)(p + 4) + 0x684) &= ~0x400;
    } else if (*(int *)D_01CAFF30 == 7) {
        n = 0;
        if (*(unsigned char *)(p + 0x48) == 0 && tst36F(p, 0x100) == 1) n++;
        if (*(unsigned char *)(p + 0x49) == 0 && tst36F(p, 0x200) == 1) n++;
        if (*(unsigned char *)(p + 0x4A) == 0 && tst36F(p, 0x400) == 1) n++;
        if (n < 2) {
            *(unsigned char *)(p + 0x48) = 0;
            *(int *)(*(char **)(p + 4) + 0x684) |= 0x100;
            *(unsigned char *)(p + 0x49) = 0;
            *(int *)(*(char **)(p + 4) + 0x684) |= 0x200;
            *(unsigned char *)(p + 0x4A) = 0;
            *(int *)(*(char **)(p + 4) + 0x684) |= 0x400;
        }
    }
}

extern "C" {
extern int D_005BE09C;
}

class VC8_1_iv {
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
    virtual void m(int);
};

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

class VCC_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_0036F400(int p0) {
    int tmp0;
    D_005BE09C = (p0 + 6496);
    ((VCC_1_iv *)(p0 + 4480))->m((p0 + 6416));
    ((VC8_1_iv *)(p0 + 1408))->m((p0 + 6352));
    ((VCC_1_iv *)(p0 + 1408))->m((p0 + 6352));
    ((VC8_1_iv *)(p0 + 2944))->m((p0 + 6352));
    tmp0 = ((VCC_1_ii *)(p0 + 2944))->m((p0 + 6352));
    return tmp0;
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
int func_0036F4A0(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 1408))->m();
    ((VD0_0_v *)(v0 + 2944))->m();
    v1 = ((VD0_0_i *)(v0 + 4480))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 56))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 60));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 56)));
    }
    return v1;
}
}
