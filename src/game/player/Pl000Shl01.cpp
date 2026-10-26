extern "C" void func_002DFFD0(char *, char *, int, int, int, float, float, float, float);

class O2E7 {
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
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void d66();
    virtual void d67();
    virtual void m118();
};

extern "C" void func_002E69E0(char *p, char *a, int c, float x, float y, float z) {
    char *o;
    switch (*(unsigned char *)(p + 0x8E0)) {
    case 0: case 1: case 4: case 5: case 6:
        o = *(char **)(p + 0x8E4);
        if (!((float)*(signed char *)(*(char **)(o + 0x158) + 0x7D35) <= *(float *)(*(char **)(o + 0x2844) + 0x308))) break;
        if (*(unsigned char *)(*(char **)(o + 0x158) + 0x7D37) == 1) break;
        if (!((float)*(signed char *)(*(char **)(o + 0x158) + 0x7D35) < *(float *)(*(char **)(o + 0x2844) + 0x308))) {
            func_002DFFD0(o, a, c, 0x258, 0, x, y, z, *(float *)(a + 0x28));
            return;
        }
        func_002DFFD0(o, a, c, 0x258, 0, x, y, z, *(float *)(a + 0x28));
        break;
    case 8:
        o = *(char **)(p + 0x8E4);
        if (*(unsigned char *)(*(char **)(o + 0x158) + 0x7D37) == 1) break;
        func_002DFFD0(o, a, c, 0x260, 0, x, y, z, *(float *)(a + 0x28));
        break;
    case 2:
        o = *(char **)(p + 0x8E4);
        if (!((float)*(signed char *)(*(char **)(o + 0x158) + 0x7D36) <= *(float *)(*(char **)(o + 0x2844) + 0x30C))) break;
        func_002DFFD0(o, a, c, 0x25A, 0, x, y, z, *(float *)(a + 0x28));
        break;
    case 3:
        o = *(char **)(p + 0x8E4);
        if (*(unsigned char *)(*(char **)(o + 0x158) + 0x7D37) == 1) break;
        func_002DFFD0(o, a, c, 0x25B, 0, x, y, z, *(float *)(a + 0x28));
        break;
    default:
        (*(O2E7 **)(p + 0x8E4))->m118();
        break;
    }
}
