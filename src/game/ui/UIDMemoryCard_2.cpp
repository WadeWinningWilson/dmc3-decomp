extern "C" char D_00666750[];

extern "C" int func_001AFB90(char *, int, int, int);

extern "C" void func_001AF080(char *, int);

extern "C" int func_004E5DC0(char *);

class W2BC0 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void m84(int, int);
    virtual void d88();
    virtual void m8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void mD0();
};

static inline int ok180(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" int func_004E5B50(char *p) {
    unsigned char v;
    if (*(unsigned char *)(p + 0x3896) == 1) {
        if (*(unsigned char *)(p + 0x3894) == 1) *(unsigned char *)(p + 0x3895) = 1;
        else *(unsigned char *)(p + 0x3895) = 0;
    }
    switch (*(signed char *)(p + 0x3891)) {
    case 0:
        if (*(unsigned char *)(p + 0x3895) == 0) break;
        if (*(unsigned char *)(p + 0x3892) == *(unsigned char *)(p + 0x3890) && *(unsigned char *)(p + 0x3896) == 0) {
            *(unsigned char *)(p + 0x3895) = 0;
            break;
        }
        if (*(unsigned char *)(p + 0x3894) == 1) {
            *(unsigned char *)(p + 0x3894) = 0;
            *(unsigned char *)(p + 0x3891) = 1;
        } else {
            *(unsigned char *)(p + 0x3891) = 3;
        }
        break;
    case 1:
        *(signed char *)(p + 0x3891) = *(signed char *)(p + 0x3891) + 1;
        break;
    case 2:
        ((W2BC0 *)(p + 0x2BC0))->mD0();
        *(signed char *)(p + 0x3891) = *(signed char *)(p + 0x3891) + 1;
    case 3:
        if (*(unsigned char *)(p + 0x3895) == 0) break;
        v = *(unsigned char *)(p + 0x3890);
        if (!(0 < v && v < 21)) break;
        *(unsigned char *)(p + 0x3892) = v;
        if (*(int *)(p + 0x180) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x180));
            *(int *)(p + 0x180) = 0;
        }
        *(int *)(p + 0x180) = func_001AFB90(D_00666750, *(unsigned char *)(p + 0x3892) + 0x1B76, 0, 8);
        *(unsigned char *)(p + 0x3891) = 4;
    case 4:
        if ((unsigned char)ok180(*(unsigned char **)(p + 0x180)) != 1) break;
        if (*(unsigned char *)(p + 0x3895) == 0) {
            *(unsigned char *)(p + 0x3891) = 3;
            break;
        }
        if ((unsigned char)func_004E5DC0(p) == 0) return 0;
        *(unsigned char *)(p + 0x3893) = 0;
        ((W2BC0 *)(p + 0x2BC0))->m84(*(unsigned char *)(p + 0x3893), 1);
        *(unsigned char *)(p + 0x3891) = 5;
        break;
    case 5:
        if (*(unsigned char *)(p + 0x3893) < 0x40) {
            *(unsigned char *)(p + 0x3893) = *(unsigned char *)(p + 0x3893) + 8;
            ((W2BC0 *)(p + 0x2BC0))->m84(*(unsigned char *)(p + 0x3893), 1);
        }
        if (*(unsigned char *)(p + 0x3893) >= 0x40) {
            ((W2BC0 *)(p + 0x2BC0))->m8C();
            *(unsigned char *)(p + 0x3895) = 0;
            *(unsigned char *)(p + 0x3891) = 0;
        }
        break;
    default:
        return 0;
    }
    return 1;
}
