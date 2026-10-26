class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

extern "C" {
int func_00212B60(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(int *)(p0 + 40) != 0) {
        v1 = ((V14_0_i *)(v0 + 380))->m();
        *(int *)(v0 + 40) = 0;
    }
    return v1;
}
}

extern "C" {
int func_00212BA0(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(int *)(p0 + 40) != 0) {
        v1 = ((V14_0_i *)(v0 + 380))->m();
        *(int *)(v0 + 40) = 0;
    }
    return v1;
}
}
