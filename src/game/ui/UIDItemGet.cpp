extern "C" {
extern char D_006480D0[];
}

extern "C" {
int func_0013D5D0(...);
}

extern "C" {
int func_00196C40(int, int);
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
int func_0032F4F0(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = (char *)p0;
    v3 = ((VD0_0_i *)(v0 + 192))->m();
    v1 = *(int *)(v0 + 144);
    if (v1 != 0) {
        v2 = (int)D_006480D0;
        v3 = func_00196C40(v2, v1);
        *(int *)(v0 + 144) = 0;
    }
    if ((0 < *(int *)(v0 + 56))) {
        v4 = 0;
        v5 = (int)v0;
        do {
            v3 = func_0013D5D0((v5 + 60));
            v4 = (v4 + 1);
            v5 = (v5 + 16);
        } while ((v4 < *(int *)(v0 + 56)));
    }
    return v3;
}
}
