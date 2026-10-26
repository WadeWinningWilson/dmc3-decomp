class V18_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual int m(void);
};

extern "C" {
int func_0022CA80(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 8);
    if (v0 != 0) {
        v1 = ((V18_0_i *)v0)->m();
    }
    return v1;
}
}
