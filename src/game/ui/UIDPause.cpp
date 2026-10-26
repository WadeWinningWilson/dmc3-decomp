extern "C" char *func_00279290(char *);

extern "C" short D_0054EF70[];

extern "C" char D_005BE098[8];

extern "C" unsigned char func_0034C1C0(unsigned char, int, int);

extern "C" unsigned char func_0034C1E0(unsigned char, int, int);

extern "C" void func_002DE780(char *);

extern "C" void func_002DF290(char *);

extern "C" void func_00195E20(char *, char *);

class VA2DE {
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
    virtual unsigned char mBC(float);
};

class VB2DE {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void m1C(float);
    virtual void d6();
    virtual float m24();
};

static inline void sm2DE(char *p, unsigned int k, unsigned char v) {
    char *m = func_00279290(p + 0x80);
    if (k < *(unsigned short *)(m + 0xA8)) *(int *)(*(char **)(m + 0xBC) + k * 0x340 + 0x15C) = v;
}

extern "C" VB2DE *func_002792A0(char *);

extern "C" void func_002DE3A0(char *p) {
    int i;
    unsigned char v;
    int k;
    unsigned char r;
    int j;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        ((VA2DE *)(p + 0x80))->mB4(0, 0, 0, 0);
        func_002792A0(p + 0x80)->m1C(1.0f);
        (*(unsigned char *)(p + 5))++;
    case 1:
        *(unsigned char *)(p + 0x6D0) = func_0034C1C0(*(unsigned char *)(p + 0x6D0), 0x80, 0xC);
        for (i = 0; i < 6; i++) {
            v = *(unsigned char *)(p + 0x6D0);
            k = D_0054EF70[i];
            sm2DE(p, k, v);
        }
        r = ((VA2DE *)(p + 0x80))->mBC(1.0f);
        if (r == 4 || r == 0 || !(func_002792A0(p + 0x80)->m24() < 12.0f)) (*(unsigned char *)(p + 5))++;
        break;
    case 2:
        func_002DE780(p);
        break;
    case 3:
        *(unsigned char *)(p + 0x6D0) = func_0034C1E0(*(unsigned char *)(p + 0x6D0), 0, 0xC);
        for (i = 0; i < 6; i++) {
            v = *(unsigned char *)(p + 0x6D0);
            j = D_0054EF70[i];
            sm2DE(p, j, v);
        }
        sm2DE(p, 8, *(unsigned char *)(p + 0x6D0));
        sm2DE(p, 9, *(unsigned char *)(p + 0x6D0));
        sm2DE(p, 10, *(unsigned char *)(p + 0x6D0));
        sm2DE(p, 11, *(unsigned char *)(p + 0x6D0));
        sm2DE(p, 12, *(unsigned char *)(p + 0x6D0));
        sm2DE(p, 13, *(unsigned char *)(p + 0x6D0));
        sm2DE(p, 14, *(unsigned char *)(p + 0x6D0));
        r = ((VA2DE *)(p + 0x80))->mBC(1.0f);
        if (r == 4 || r == 0 || !(func_002792A0(p + 0x80)->m24() < 30.0f)) (*(unsigned char *)(p + 5))++;
        break;
    case 4:
        func_002DF290(p);
        break;
    }
    func_00195E20(D_005BE098, p);
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

extern "C" {
int func_002DF2A0(int p0) {
    int tmp0;
    ((VC8_1_iv *)(p0 + 128))->m((p0 + 1680));
    tmp0 = ((VCC_1_ii *)(p0 + 128))->m((p0 + 1680));
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

extern "C" {
int func_002DF300(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 128))->m();
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
