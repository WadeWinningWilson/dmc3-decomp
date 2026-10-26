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

extern "C" void func_002EE3F0(char *p) {
    switch (*(unsigned char *)(p + 0x360)) {
    case 1:
        if (*(SubCCc **)(p + 0x364) != 0) {
            (*(SubCCc **)(p + 0x364))->mCC(p + 0x450);
        }
        break;
    case 2:
    case 3:
    case 4:
        (*(SubCCc **)(p + 0x368))->mCC(p + 0x450);
        break;
    }
}

extern "C" void func_0013D5D0(char *);

extern "C" void func_0028C740(char *);

class ObjSk14 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void m14();
};

class ObjDtD0 {
public:
    virtual void m8(int); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void d49(); virtual void mD0();
};

extern "C" void func_002EDB30(char *p) {
    ObjDtD0 *o;
    int i;
    if (*(ObjDtD0 **)(p + 0x364) != 0) {
        ((ObjSk14 *)(p + 0x38C))->m14();
        (*(ObjDtD0 **)(p + 0x364))->mD0();
        (*(ObjDtD0 **)(p + 0x364))->m8(-1);
        func_0013D5D0(p + 0x36C);
    }
    o = *(ObjDtD0 **)(p + 0x368);
    if (o != 0 && o != *(ObjDtD0 **)(p + 0x364)) {
        o->mD0();
        (*(ObjDtD0 **)(p + 0x368))->m8(-1);
        func_0013D5D0(p + 0x37C);
    }
    for (i = 0; i < *(int *)(p + 0xDC); i++) {
        func_0013D5D0(p + i * 16 + 0xE0);
    }
    *(int *)(p + 0x364) = 0;
    *(int *)(p + 0x368) = 0;
    func_0028C740(p + 0x4A0);
}

class V74_0_v {
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
    virtual void m(void);
};

class V74_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_002EEAA0(char *p0, int p1) {
    int tmp2;
    ((V74_0_v *)*(char **)(p0 + 868))->m();
    tmp2 = ((V74_1_ii *)*(char **)(p0 + 872))->m(p1);
    return tmp2;
}
}

class V78_0_v {
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
    virtual void m(void);
};

class V78_2_iii {
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
    virtual int m(int, int);
};

extern "C" {
int func_002EEAF0(char *p0, int p1, int p2) {
    int tmp2;
    ((V78_0_v *)*(char **)(p0 + 868))->m();
    tmp2 = ((V78_2_iii *)*(char **)(p0 + 872))->m(p1, p2);
    return tmp2;
}
}
