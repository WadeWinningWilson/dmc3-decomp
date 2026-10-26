extern "C" {
extern char D_00544B01[];
}

extern "C" {
extern char D_01DFAB70[];
}

extern "C" {
extern char D_01DFAB7C[];
}

extern "C" {
extern char D_01DFABA0[];
}

extern "C" {
void func_0021C6D0(char *);
}

extern "C" {
void func_0021CAF0(char *);
}

extern "C" {
void func_0021CB80(char *);
}

extern "C" {
int func_002242C0(...);
}

extern "C" {
void func_003305E0(char *, int, int, char *, int, int, int);
}

extern "C" {
void func_00333170(char *);
}

class V180_0_i {
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
    virtual void d74();
    virtual void d75();
    virtual void d76();
    virtual void d77();
    virtual void d78();
    virtual void d79();
    virtual void d80();
    virtual void d81();
    virtual void d82();
    virtual void d83();
    virtual void d84();
    virtual void d85();
    virtual void d86();
    virtual void d87();
    virtual void d88();
    virtual void d89();
    virtual void d90();
    virtual void d91();
    virtual void d92();
    virtual void d93();
    virtual int m(void);
};

extern "C" {
int func_0021C580(char *p0, int p1) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp2;
    int tmp3;
    int tmp8;
    *(char *)(p0 + 10313) = *(signed char *)(p0 + 10312);
    *(char *)(p0 + 10312) = p1;
    *(char *)(p0 + 10315) = *(signed char *)((D_00544B01 + ((p1 & 255) << 1)) + 0);
    *(int *)(p0 + 10320) = 0;
    *(int *)(p0 + 10476) = 0;
    *(char *)(p0 + 10507) = 0;
    v0 = p0;
    if ((*(int *)(p0 + 10392) & 0x10000) != 0) {
        func_00333170((v0 + 15760));
    }
    func_0021CAF0(v0);
    func_0021CB80(v0);
    if (*(unsigned char *)(v0 + 10313) == 18) {
        func_003305E0(D_01DFABA0, 0, 99, (v0 + 80), 0, 0, 0);
    }
    if (*(unsigned char *)(v0 + 10313) == 22) {
        if (*(unsigned char *)(v0 + 10312) != 22) {
            *(char *)(v0 + 15477) = 0;
        }
    }
    v2 = *(unsigned char *)(v0 + 10312);
    tmp2 = 19;
    if (v2 != tmp2) {
        v3 = (int)v0;
        if (v2 != 20) {
            tmp3 = func_002242C0(v3);
            if ((tmp3 & 255) == 0) {
                *(int *)D_01DFAB70 = (*(int *)D_01DFAB70 | 0x80000000);
            } else {
                *(int *)D_01DFAB7C = (*(int *)D_01DFAB7C | 0x20000);
            }
        }
    }
    func_0021C6D0(v0);
    tmp8 = ((V180_0_i *)v0)->m();
    return tmp8;
}
}
