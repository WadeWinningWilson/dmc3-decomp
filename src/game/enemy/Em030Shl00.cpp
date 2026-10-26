extern "C" {
int func_001AD100(void);
}

extern "C" {
int func_003FD3E0(char *);
}

extern "C" {
int func_003FD630(char *);
}

extern "C" {
int func_003FD970(char *);
}

extern "C" {
int func_003FDAD0(char *);
}

class V130_0_i {
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
    virtual void d68();
    virtual void d69();
    virtual void d70();
    virtual void d71();
    virtual void d72();
    virtual void d73();
    virtual int m(void);
};

extern "C" {
int func_003FD330(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    int tmp5;
    v0 = (char *)p0;
    v1 = func_001AD100();
    v2 = *(unsigned char *)(v0 + 4);
    tmp0 = 4;
    if (v2 != tmp0) {
        if (v2 != 3) {
            tmp1 = 2;
            if (v2 != tmp1) {
                if (v2 != 1) {
                    if (v2 != 0) {
                        return v1;
                    } else {
                        tmp2 = func_003FD3E0(v0);
                        return tmp2;
                    }
                } else {
                    tmp3 = ((V130_0_i *)v0)->m();
                    return tmp3;
                }
            } else {
                tmp4 = func_003FD630(v0);
                return tmp4;
            }
        } else {
            tmp5 = func_003FD970(v0);
            return tmp5;
        }
    } else {
        v3 = func_003FDAD0(v0);
        return v3;
    }
}
}
