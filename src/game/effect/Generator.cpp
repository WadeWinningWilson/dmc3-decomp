extern int D_005BE0B8;

class V1B29 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void m28();
    virtual void m2C();
    virtual void m30();
};

extern "C" void func_001B29C0(V1B29 *p) {
    switch (*((unsigned char *)p + 4)) {
    case 0:
        D_005BE0B8++;
        p->m28();
        break;
    case 1:
        p->m2C();
        break;
    case 2:
        p->m30();
        break;
    }
}
