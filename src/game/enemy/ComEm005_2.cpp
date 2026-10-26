extern "C" {
extern char D_01CAFF0C[];
}

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

class V18_1_fv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m(float);
};

class V3C_0_i {
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
    virtual int m(void);
};

class V8C_0_v {
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
    virtual void m(void);
};

class V94_1_ii {
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
    virtual int m(int);
};

class VB4_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_003CD350(char *p0, float f0) {
    char *v0;
    float v1;
    int v2;
    int v3;
    int v4;
    int tmp1;
    int tmp4;
    int tmp7;
    int tmp8;
    int tmp9;
    v0 = p0;
    v1 = f0;
    tmp1 = ((V3C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        tmp4 = ((V14_0_i *)(*(char **)(*(char **)D_01CAFF0C + 32) + 2112))->m();
        if (tmp4 != 0) {
            ((V18_1_fv *)(*(char **)(*(char **)D_01CAFF0C + 32) + 2112))->m(v1);
            ((V8C_0_v *)v0)->m();
            tmp7 = ((V94_1_ii *)v0)->m(0);
            v4 = ((VB4_1_ii *)v0)->m((tmp7 & 255));
        } else {
            ((V8C_0_v *)v0)->m();
            tmp8 = ((V94_1_ii *)v0)->m(1);
            v4 = ((VB4_1_ii *)v0)->m((tmp8 & 255));
        }
    } else {
        ((V8C_0_v *)v0)->m();
        tmp9 = ((V94_1_ii *)v0)->m(1);
        v4 = ((VB4_1_ii *)v0)->m((tmp9 & 255));
    }
    return v4;
}
}
