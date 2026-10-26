extern "C" void func_0024FA20(void) {}

class VC8_3_iipi {
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
    virtual int m(int, int, char *);
};

extern "C" {
int func_0024F9E0(char *p0, char *p1, char *p2) {
    int v0;
    char *v1;
    int v2;
    int tmp0;
    v0 = *(int *)(p2 + 760);
    v1 = p2;
    v2 = *(int *)(p1 + 752);
    if (v2 != 0) {
        v2 = (v2 + 64);
    }
    *(int *)(v1 + 188) = 0x3f800000;
    tmp0 = ((VC8_3_iipi *)p0)->m(v0, v2, (v1 + 176));
    return tmp0;
}
}
