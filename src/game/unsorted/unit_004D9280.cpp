extern "C" {
int func_001AD140(char *p);
}

extern "C" void func_00105230(char *, char *, char *);

extern "C" char D_00645A30[];

extern "C" void func_001AAD30(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" char *func_001B1610(int, char *);

extern "C" void func_004D9640(char *);

extern "C" void func_001B1440(char *, char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_001B1430(char *, int);

extern "C" void func_0013D240(char *, int);

class ObjF2C {
public:
    virtual void u0();
    virtual void u1();
    virtual void u2();
    virtual void u3();
    virtual void u4();
    virtual void u5();
    virtual void u6();
    virtual void u7();
    virtual void u8();
    virtual int m2C(char *, char *);
    virtual void u10();
    virtual void u11();
    virtual void u12();
    virtual void u13();
    virtual void u14();
    virtual void u15();
    virtual void u16();
    virtual void u17();
    virtual void u18();
    virtual void u19();
    virtual void u20();
    virtual void u21();
    virtual void u22();
    virtual void u23();
    virtual void u24();
    virtual void u25();
    virtual void u26();
    virtual void u27();
    virtual void u28();
    virtual void u29();
    virtual void u30();
    virtual void u31();
    virtual void u32();
    virtual void u33();
    virtual void u34();
    virtual void u35();
    virtual void u36();
    virtual void u37();
    virtual void u38();
    virtual void u39();
    virtual void u40();
    virtual void u41();
    virtual void u42();
    virtual void u43();
    virtual void u44();
    virtual void u45();
    virtual void u46();
    virtual void u47();
    virtual void u48();
    virtual void u49();
    virtual void u50();
    virtual void mD4(int);
    virtual void u52();
    virtual void u53();
    virtual void u54();
    virtual void u55();
    virtual void u56();
    virtual void u57();
    virtual void u58();
    virtual void u59();
    virtual void u60();
    virtual void u61();
    virtual void u62();
    virtual void u63();
    virtual void u64();
    virtual void u65();
    virtual void u66();
    virtual void u67();
    virtual void u68();
    virtual void u69();
    virtual void u70();
    virtual void u71();
    virtual void u72();
    virtual void u73();
    virtual void m130();
};

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" char *func_004D9440(char *p, char *s, char *r2) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char *o;
    if (p == 0) {
        return 0;
    }
    if (s == 0) {
        return 0;
    }
    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_001AAD30(a);
    *b.pp = func_001B0FD0(a, 0x590, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0x590, t);
        if (r != 0) {
            func_004D9640(r);
        }
        func_001B1440((char *)&b, *b.pp, a);
        func_001959E0(D_00645A30, 0x3, *b.pp);
        func_001B1430(*b.pp, 1);
        goto ok;
    }
    *b.pp = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o == 0) {
        return 0;
    }
    if ((unsigned char)((ObjF2C *)(o + 0xE0))->m2C(s, p) == 0) {
        func_001AD140(ret);
        return 0;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(r2 + 0x10) : "memory");
    *(float *)(ret + 0x5C) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(ret + 0x520) : "memory");
    func_00105230(ret + 0x520, ret + 0x520, ret + 0x50);
    ((ObjF2C *)ret)->m130();
    return ret;
}
