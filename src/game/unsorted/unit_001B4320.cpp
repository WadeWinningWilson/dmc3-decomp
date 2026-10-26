class Obj38 {
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
    virtual int m38();
};

extern "C" {
void func_001B4550(Obj38 *o) {
    extern char *D_005BE0D8;
    extern void func_00131530(char *, int, char *, int, int);
    extern void func_001B2B00(char *, char *, int, char *, char *);
    extern unsigned char func_002070F0(char *);
    extern void func_00207100(char *, char *);
    char stk[0x40] __attribute__((aligned(16)));
    char *p = (char *)o;
    char *e = p + (*(signed char *)(D_005BE0D8 + 14) << 5) + 1136;
    func_00131530(e, 39, p + (signed char)o->m38() * 624 + 1200, 0, 0);
    if (func_002070F0(p) == 1) {
        func_00207100(p, stk);
        func_001B2B00(p, e + 16, 0, p + 80, stk);
    } else {
        func_001B2B00(p, e + 16, 0, p + 80, 0);
    }
}
}

class V38_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_001B4B80(char *p0) {
    extern char * D_005BE0D8;
    void func_00131530(int, int, int, int, int);
    int func_001B2B00(...);
    int func_002070F0(int);
    void func_00207100(int, char *);
    char stk[0x40] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    int tmp1;
    int tmp5;
    v0 = p0;
    v1 = (int)((p0 + (*(signed char *)(D_005BE0D8 + 14) << 5)) + 1120);
    tmp1 = ((V38_0_i *)p0)->m();
    func_00131530(v1, 39, ((*(int *)(v0 + 1184) + ((signed char)tmp1 * 624)) + 1200), 0, 0);
    tmp5 = func_002070F0(*(int *)(v0 + 1184));
    if ((tmp5 & 255) == 1) {
        func_00207100(*(int *)(v0 + 1184), ((stk + -48) + 48));
        v2 = func_001B2B00(v0, (v1 + 16), 0, (*(int *)(v0 + 1184) + 80), ((stk + -48) + 48));
    } else {
        v2 = func_001B2B00(v0, (v1 + 16), 0, (*(int *)(v0 + 1184) + 80), 0);
    }
    return v2;
}
}
