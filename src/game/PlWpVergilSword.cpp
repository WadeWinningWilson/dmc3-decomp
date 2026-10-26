extern "C" void func_00104C00(char *, int, char *);

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

extern "C" char *func_002D9F00(char *, int);

extern "C" void func_0022C520(char *, char *, char *, char *);

extern "C" void func_00105300(char *, char *);

/* Re-anchors the two held weapons (+0xB00, +0x1100) to their bones on the owner at +0xE0. */
extern "C" void func_003C9A70(char *p) {
    if (*(unsigned char *)(p + 0xD4) != 0) {
        func_00104C00(p + 0x1780, (int)func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD4)), p + 0x1700);
        ((ObjB4C8 *)(p + 0xB00))->mC8(p + 0x1780);
    }
    if (*(unsigned char *)(p + 0xD5) != 0) {
        func_0022C520(p + 0x200, p + 0x1100, *(char **)(*(char **)(p + 0x1D0) + 0x104), p + 0x980);
        func_00104C00(p + 0x17C0, (int)func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD5)), p + 0x1740);
        ((ObjB4C8 *)(p + 0x1100))->mC8(p + 0x17C0);
        func_00105300(p + 0x980, *(char **)(*(char **)(p + 0x1D0) + 0x104));
    }
}

extern char D_00666750[];

extern "C" int func_001AED80(char *, int, int, int);

extern "C" void func_00208050(int, int);

extern "C" void func_0022BFA0(char *, char *, char *, int);

extern "C" unsigned int func_0022C430(char *);

struct O3C9 {
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual unsigned char m2C(int, int);
    virtual void e10();
    virtual void e11();
    virtual void e12();
    virtual void e13();
    virtual void e14();
    virtual void e15();
    virtual void e16();
    virtual void e17();
    virtual void e18();
    virtual void e19();
    virtual void e20();
    virtual void e21();
    virtual void e22();
    virtual void e23();
    virtual void e24();
    virtual void e25();
    virtual void e26();
    virtual void e27();
    virtual void e28();
    virtual void e29();
    virtual void e30();
    virtual void e31();
    virtual void e32();
    virtual void e33();
    virtual void e34();
    virtual void e35();
    virtual void e36();
    virtual void e37();
    virtual void e38();
    virtual void e39();
    virtual void e40();
    virtual void e41();
    virtual void mB0(int, char *);
};

#define ID3C9(k) func_001AED80(D_00666750, 2, (unsigned short)(*(signed char *)(p + 0x46) * 15 + 14), k)

extern "C" {
void func_003C95E0(char *p) {
    int func_001AD140(char *p);
    char *r;
    unsigned int i;
    int n;
    int a;
    a = ID3C9(0);
    if (((O3C9 *)(p + 0xB00))->m2C(ID3C9(1), a) == 0) {
        func_001AD140(p);
        return;
    }
    *(char **)(p + 0xE8) = p + 0xB00;
    a = ID3C9(3);
    if (((O3C9 *)(p + 0x1100))->m2C(ID3C9(4), a) == 0) {
        func_001AD140(p);
        return;
    }
    *(char **)(p + 0xEC) = p + 0x1100;
    *(int *)(p + 0x1CC) = ID3C9(8);
    ((O3C9 *)(p + 0xB00))->mB0(*(int *)(p + 0x1CC), p + 0x1C4);
    ((O3C9 *)(p + 0x1100))->mB0(0, p + 0x1D0);
    r = (char *)ID3C9(5);
    n = func_0022C430(r);
    for (i = 0; i < (unsigned int)n; i++)
        func_0022BFA0(p + i * 0xC0 + 0x200, p + 0x1D0, r, i);
    func_00208050(ID3C9(7), 1);
}
}

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

extern "C" {
int func_003C9B30(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(unsigned char *)(p0 + 212) != 0) {
        v1 = ((VCC_1_pi *)(v0 + 2816))->m((v0 + 6016));
    }
    if (*(unsigned char *)(v0 + 213) != 0) {
        v1 = ((VCC_1_pi *)(v0 + 4352))->m((v0 + 6080));
    }
    return v1;
}
}

extern "C" {
int func_0013D5D0(...);
}

extern "C" {
int func_00286040(char *);
}

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
int func_003C9B90(int p0) {
    int func_001AD140(...);
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 2816))->m();
    ((VD0_0_v *)(v0 + 4352))->m();
    v2 = func_00286040((v0 + 6144));
    v1 = *(int *)(v0 + 6144);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
    }
    v3 = 0;
    if ((0 < *(int *)(v0 + 256))) {
        v4 = (int)v0;
        do {
            v2 = func_0013D5D0((v4 + 260));
            v3 = (v3 + 1);
            v4 = (v4 + 16);
        } while ((v3 < *(int *)(v0 + 256)));
    }
    return v2;
}
}
