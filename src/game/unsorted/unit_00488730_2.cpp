class V74_2_iii {
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
    virtual int m(int, int);
};

extern "C" {
int func_0048B270(int p0, int p1, int p2) {
    int tmp0;
    tmp0 = ((V74_2_iii *)p1)->m(((p2 & 255) | (((p2 & 255) << 8) | (((p2 & 255) << 24) | ((p2 & 255) << 16)))), (p2 & 255));
    return tmp0;
}
}
