class Obj0D0 {
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
    virtual void mD0();
};

extern "C" char D_00666750[];

extern "C" void func_001AF080(char *, int);

extern "C" void func_00418980(char *);

/* Releases both pool handles and notifies the four sub-objects, then resets the body at +0x19C0. */
extern "C" void func_00504DA0(char *p) {
    if (*(int *)(p + 0x40) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x40));
    }
    ((Obj0D0 *)(p + 0x80))->mD0();
    ((Obj0D0 *)(p + 0x680))->mD0();
    ((Obj0D0 *)(p + 0xC80))->mD0();
    if (*(int *)(p + 0x1398) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x1398));
    }
    ((Obj0D0 *)(p + 0x13C0))->mD0();
    func_00418980(p + 0x19C0);
}

class SubC8CC {
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
    virtual void mC8(char *);
    virtual void mCC(char *);
};

extern "C" void func_00504E40(char *p) {
    char *q = p + 0x12C0;
    ((SubC8CC *)(p + 0x80))->mCC(q);
    ((SubC8CC *)(p + 0x680))->mCC(q);
    ((SubC8CC *)(p + 0xC80))->mCC(q);
    ((SubC8CC *)(p + 0x13C0))->mCC(p + 0x1340);
}

extern "C" char D_00645A30[];

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_0013D240(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" void func_0013D6A0(char *);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_00504000(char *);

typedef struct { signed char c0; signed char c1; signed char c2; signed char c3; int a; int b; unsigned short h; } S504;

extern "C" char *func_005041E0(int p0, int p1, S504 s, char p3, char p4) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;

    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x1A40, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00504000(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x2C, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(int *)(ret + 0x38) = p0;
        *(int *)(ret + 0x3C) = p1;
        *(S504 *)(ret + 0x1384) = s;
        *(char *)(ret + 0x1394) = p3;
        *(char *)(ret + 0x1395) = p4;
    }
    return ret;
}
