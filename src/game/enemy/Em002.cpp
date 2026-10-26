extern "C" char *func_00279290(char *);

class ObjA8 {
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
    virtual void mA8(int);
};

extern "C" void func_001A1E10(char *);

extern "C" void func_002C3070(char *p) {
    func_001A1E10(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 8:
    case 9:
    case 10:
    case 11:
        ((ObjA8 *)(p + 0x4C0))->mA8(0x14);
        ((ObjA8 *)(p + 0x4C0))->mA8(0x15);
    }
    switch (*(signed char *)(p + 0x3B0)) {
    case 8:
    case 9:
        func_001A1E10(func_00279290(p + 0xAC0));
        func_001A1E10(func_00279290(p + 0x10C0));
    }
    func_001A1E10(func_00279290(p + 0x16C0));
}
