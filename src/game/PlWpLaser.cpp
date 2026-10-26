extern "C" void func_00104C00(char *, int, char *);

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

extern "C" char *func_002D9F00(char *, int);

extern "C" {
extern "C" void func_003CB670(char *p) {
    func_00104C00(p + 0x910, (int)func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD4)), p + 0x950);
    ((ObjC8 *)(p + 0x280))->mC8(p + 0x910);
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
int func_003CB6C0(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(signed char *)(p0 + 218) != -1) {
        ((VCC_1_pv *)(v0 + 640))->m((v0 + 2320));
        v1 = func_0028BFE0(v0);
        if ((v1 & 255) == 1) {
            v1 = ((V10_0_i *)(v0 + 2176))->m();
        }
    }
    return v1;
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
int func_003CB730(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 640))->m();
    if (*(unsigned char *)(v0 + 221) == 1) {
        v1 = ((V14_0_i *)(v0 + 2176))->m();
    }
    if ((0 < *(int *)(v0 + 424))) {
        v2 = 0;
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 428));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 424)));
    }
    return v1;
}
}
