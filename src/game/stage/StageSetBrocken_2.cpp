extern "C" {
int func_002F7C10(int, int);
}

extern "C" {
int func_004FDBB0(char *, float);
}

extern "C" {
int func_004FDD90(int);
}

extern "C" {
int func_004FDE30(int);
}

class V54_1_iv {
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
    virtual void m(int);
};

class V58_1_iv {
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
    virtual void m(int);
};

class VB4_4_iiiii {
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
    virtual int m(int, int, int, int);
};

class VB4_4_iiiiv {
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
    virtual void m(int, int, int, int);
};

extern "C" {
int func_004FD580(char *p0, int p1) {
    char *v0;
    int v1;
    int v2;
    char *v3;
    int v4;
    int v5;
    int v6;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 701);
    v2 = p1;
    if (v1 != 6) {
        v6 = func_002F7C10((v1 + 10), 8);
        v3 = (char *)v6;
        if (v3 != 0) {
            v3 = (v3 + -56);
        }
        if (v3 != 0) {
            if (*(unsigned char *)(v0 + 700) != 0) {
                ((V54_1_iv *)v3)->m(0);
                ((VB4_4_iiiiv *)(v0 + 752))->m(2, 0, 0, 0);
                v6 = func_004FDBB0(v0, 0.0f);
                v4 = (int)v0;
                if (v2 == 0) {
                    v6 = func_004FDD90(v4);
                }
            } else {
                ((V58_1_iv *)v3)->m(0);
                v6 = ((VB4_4_iiiii *)(v0 + 752))->m(1, 0, 0, 0);
                v5 = (int)v0;
                if (v2 == 0) {
                    v6 = func_004FDE30(v5);
                }
            }
        }
    }
    return v6;
}
}
