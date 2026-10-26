class V1C_3_iiii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual int m(int, int, int);
};

extern "C" {
int func_00290820(char *p0, int p1, int p2) {
    int tmp0;
    tmp0 = ((V1C_3_iiii *)p0)->m(p1, p2, 0xfffff4);
    return tmp0;
}
}

class V20_3_iiii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual int m(int, int, int);
};

extern "C" {
int func_002908A0(char *p0, int p1, int p2) {
    int tmp0;
    tmp0 = ((V20_3_iiii *)p0)->m(p1, p2, 0xfffff4);
    return tmp0;
}
}

class V28_3_iiii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual int m(int, int, int);
};

extern "C" {
int func_00290920(char *p0, int p1, int p2) {
    int tmp0;
    tmp0 = ((V28_3_iiii *)p0)->m(p1, p2, 0xfffff4);
    return tmp0;
}
}
