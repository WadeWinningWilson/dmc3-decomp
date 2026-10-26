class Obj0D0 {
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
    virtual void mD0();
};

extern "C" void func_0013D5D0(char *);

/* In states 2 and 3 notify the sub-object at +0x80, then reset the list at +0x694. */
extern "C" void func_00301870(char *p) {
    if (*(unsigned char *)(p + 0x39) == 2 || *(unsigned char *)(p + 0x39) == 3) {
        ((Obj0D0 *)(p + 0x80))->mD0();
    }
    func_0013D5D0(p + 0x694);
}

extern "C" void func_002FFBF0(char *);

class V302 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60();
    virtual void m64(int);
    virtual void m68(float, float);
};

extern "C" void func_003023F0(char *p) {
    if (*(unsigned char *)(p + 0x38) == 1) {
        *(int *)(p + 0x688) = 0;
        if (*(unsigned char *)(p + 0x680) == 0) {
            *(unsigned char *)(p + 0x680) = 1;
            func_002FFBF0(p);
            if (*(unsigned char *)(p + 0x39) == 3) {
                ((V302 *)(p + 0x80))->m64(*(unsigned char *)((char *)(*(short *)(p + 0x3A) * 0xB0) + *(int *)(p + 0x40) + 0x70) | *(unsigned char *)((char *)(*(short *)(p + 0x3A) * 0xB0) + *(int *)(p + 0x40) + 0x71) << 1);
                ((V302 *)(p + 0x80))->m68(*(float *)((char *)(*(short *)(p + 0x3A) * 0xB0) + *(int *)(p + 0x40) + 0x98), *(float *)((char *)(*(short *)(p + 0x3A) * 0xB0) + *(int *)(p + 0x40) + 0x9C));
            }
            *(int *)(p + 0x690) = 0;
        }
    }
}

class V84_3_hipi {
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
    virtual int m(unsigned char, int, char *);
};

class V84_3_iipi {
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
    virtual int m(int, int, char *);
};

extern "C" {
int func_003018C0(char *p0) {
    int v2;
    char *v0;
    int v1;
    int tmp0;
    v0 = p0;
    tmp0 = *(int *)(p0 + 64);
    p0 = (char *)*(short *)(p0 + 58);
    v1 = *(unsigned char *)((char (*)[176])((char *)tmp0 + 20))[(int)p0];
    switch (v1) {
    case 1:
        v2 = ((V84_3_hipi *)(v0 + 128))->m(*(unsigned char *)(v0 + 1676), 1, v0);
        break;
    case 2:
        v2 = ((V84_3_hipi *)(v0 + 128))->m(*(unsigned char *)(v0 + 1676), 2, v0);
        break;
    case 3:
        v2 = ((V84_3_iipi *)(v0 + 128))->m(*(unsigned char *)(v0 + 1676), 3, v0);
        break;
    }
    return v2;
}
}
