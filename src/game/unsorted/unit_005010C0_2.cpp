extern "C" char *func_00279290(char *);

extern "C" void func_001A2000(char *, int);

extern "C" void func_001A1E70(char *, int);

extern "C" void func_005012F0(char *, char *);

class O501 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void u70();
    virtual void u74();
    virtual void u78();
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void m88(int, int, int);
    virtual void u8C();
    virtual void m90(int);
};

extern "C" void func_00501300(char *p, char *a) {
    switch (*(signed char *)(a + 1)) {
    case 0:
        func_001A1E70(func_00279290(p + 0xC0), 0);
        *(unsigned char *)(a + 5) = 4;
        *(unsigned char *)(a + 3) = 0;
        (*(signed char *)(a + 1))++;
    case 1:
        *(unsigned char *)(a + 5) += 2;
        ((O501 *)(p + 0xC0))->m88(0, *(unsigned char *)(a + 5), 1);
        if (!(*(unsigned char *)(a + 5) < 0x40)) {
            *(unsigned char *)(a + 3) = 1;
            (*(signed char *)(a + 1))++;
        }
        break;
    case 2:
        if (*(signed char *)(a + 4) == 0) {
            *(unsigned char *)(a + 5) = 0x40;
            ((O501 *)(p + 0xC0))->m88(0, *(unsigned char *)(a + 5), 1);
            *(signed char *)(a + 4) = -1;
            *(unsigned char *)(a + 3) = 0;
            (*(signed char *)(a + 1))++;
        }
        break;
    case 3:
        *(unsigned char *)(a + 5) -= 8;
        ((O501 *)(p + 0xC0))->m88(0, *(unsigned char *)(a + 5), 1);
        if (!(*(unsigned char *)(a + 5) > 0)) {
            ((O501 *)(p + 0xC0))->m90(0);
            func_001A2000(func_00279290(p + 0xC0), 0);
            *(unsigned char *)(a + 3) = 3;
            *(signed char *)(a + 1) = -1;
        }
        break;
    case -1:
    default:
        ((O501 *)(p + 0xC0))->m90(0);
        func_001A2000(func_00279290(p + 0xC0), 0);
        func_005012F0(p, a);
        break;
    }
}
