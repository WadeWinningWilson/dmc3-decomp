extern "C" char *func_00279290(char *);

class Obj1D4 {
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
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d114();
    virtual void m1D4(int, char *);
};

extern "C" void func_001A1F90(char *);

/* Ticks the body and, in state 26, the six extra parts, then emits sound 0x2A at the body. */
extern "C" void func_002AC120(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 26:
        func_001A1F90(func_00279290(p + 0x35C0));
        func_001A1F90(func_00279290(p + 0x3BC0));
        func_001A1F90(func_00279290(p + 0x41C0));
        func_001A1F90(func_00279290(p + 0x47C0));
        func_001A1F90(func_00279290(p + 0x4DC0));
        func_001A1F90(func_00279290(p + 0x53C0));
    }
    func_001A1F90(func_00279290(p + 0x16C0));
    ((Obj1D4 *)p)->m1D4(0x2A, p + 0x50);
}

extern "C" void func_001A1E10(char *);

extern "C" void func_002AC1F0(char *p) {
    func_001A1E10(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 26:
        func_001A1E10(func_00279290(p + 0x35C0));
        func_001A1E10(func_00279290(p + 0x3BC0));
        func_001A1E10(func_00279290(p + 0x41C0));
        func_001A1E10(func_00279290(p + 0x47C0));
        func_001A1E10(func_00279290(p + 0x4DC0));
        func_001A1E10(func_00279290(p + 0x53C0));
    }
    func_001A1E10(func_00279290(p + 0x16C0));
    ((Obj1D4 *)p)->m1D4(0x29, p + 0x50);
}

class ObjLift {
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
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d113b();
    virtual void m1D4(int, char *);
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void d122();
    virtual void d123();
    virtual void d124();
    virtual void d125();
    virtual void d126();
    virtual void d127();
    virtual void d128();
    virtual void d129();
    virtual void d130();
    virtual void d131();
    virtual void d132();
    virtual void d133();
    virtual void d134();
    virtual void d135();
    virtual void d136();
    virtual void m22C();
    virtual void m230();
};

extern "C" void func_002AA9C0(char *p) {
    if (*(unsigned char *)(p + 0x23CC) != 0) {
        switch (*(int *)(p + 0x23D0)) {
        case 0:
            ((ObjLift *)p)->m1D4(0x1A, p + 0x50);
            ((ObjLift *)p)->m22C();
            *(float *)(p + 0x23D4) = 40.0f;
            *(int *)(p + 0x23D0) = 1;
            break;
        case 1:
            *(float *)(p + 0x23D4) = *(float *)(p + 0x23D4) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x23D4) <= 0.0f) {
                ((ObjLift *)p)->m230();
                *(int *)(p + 0x23D0) = 2;
                *(unsigned char *)(p + 0x23CC) = 0;
            }
            break;
        case 2:
            break;
        }
    }
    if (*(unsigned char *)(p + 0x23D8) != 0) {
        switch (*(int *)(p + 0x23DC)) {
        case 0:
            ((ObjLift *)p)->m22C();
            *(float *)(p + 0x23E0) = 30.0f;
            *(int *)(p + 0x23DC) = 1;
            break;
        case 1:
            *(float *)(p + 0x23E0) = *(float *)(p + 0x23E0) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x23E0) <= 0.0f) {
                ((ObjLift *)p)->m230();
                *(float *)(p + 0x23E0) = 30.0f;
                *(int *)(p + 0x23DC) = 2;
            }
            break;
        case 2:
            *(float *)(p + 0x23E0) = *(float *)(p + 0x23E0) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x23E0) <= 0.0f) {
                *(int *)(p + 0x23DC) = 3;
                *(unsigned char *)(p + 0x23D8) = 0;
            }
            break;
        case 3:
            break;
        }
    }
}

extern "C" char D_01CAFF0C[];

extern "C" int func_00201770(char *, float *, float *, float *, int);

extern "C" {
void func_0024DD30(char *p);
}

extern "C" void func_0024E830(char *, char *, float *, char *);

class VBC {
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
    virtual void mBC(float);
};

static inline bool has55c() {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0) return false;
    return true;
}

extern "C" void func_002ACA20(char *p) {
    float z[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float o[4] __attribute__((aligned(16)));
    __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0
	sqc2 $vf20, 0x0(%0)" : : "r"(z) : "memory");
    if (has55c()) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(p + 0x50) : "memory");
        v[1] = v[1] + 100.0f;
        v[3] = 1.0f;
        if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, o, (float *)(p + 0x2B50), 0) == 1) {
            func_0024E830(p + 0x2160, p + 0x50, z, p + 0x2B50);
            func_0024E830(p + 0x2230, p + 0x50, z, p + 0x2B50);
        }
    }
    func_0024DD30(p + 0x2160);
    func_0024DD30(p + 0x2230);
    switch (*(signed char *)(p + 0x3B0)) {
    case 0x1A:
        ((VBC *)(p + 0x16C0))->mBC(*(float *)(p + 0x10));
        break;
    }
}

class Col355 {
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
    virtual void m78(int, int);
};

struct M2AD { float m[16]; };

class S2AD {
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
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d114();
    virtual void d115();
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void d122();
    virtual void d123();
    virtual void d124();
    virtual void d125();
    virtual unsigned char m200(unsigned char *, int *, char *);
};

class V2AD {
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
    virtual void mCC(M2AD *);
};

extern "C" void func_001A5CC0(char *);

extern "C" void func_00138340(unsigned char);

extern "C" void func_001A23D0(char *);

extern "C" short func_001A5DA0(char *);

extern "C" void func_001A5D70(char *, short);

extern "C" void func_00104C00(M2AD *, M2AD *, char *);

#define LIGHT(o)     if (*(unsigned char *)(p + 0x23FC) == 0) {         if (ok == 1) {             func_001A5CC0(func_00279290(p + (o)));             func_00138340(c);         } else {             func_001A23D0(func_00279290(p + (o)));             func_001A5C30(func_00279290(p + (o)));         }     }

#define V(o) ((V2AD *)(p + (o)))

#define MAT(o) (*(M2AD **)(*(char **)(p + (o)) + 0x104))

#define SUB(o, f, d)     LIGHT(o)     s = func_001A5DA0(func_00279290(p + 0x4C0));     func_001A5D70(func_00279290(p + (o)), s - (d));     V(o)->mCC(MAT(f));

#define C ((Col355 *)(p + 0x4EC0))
extern "C" {
void func_002AD190(char *p) {
    extern void func_001A5C30(char *);
    M2AD a;
    M2AD b;
    int x;
    unsigned char c;
    unsigned char ok;
    short s;
    ok = ((S2AD *)p)->m200(&c, &x, *(char **)(*(char **)(p + 0x410) + 0x104) + 0x30);
    LIGHT(0x4C0)
    a = *(M2AD *)(p + 0x1E80);
    V(0x4C0)->mCC(&a);
    SUB(0x35C0, 0x418, 1)
    SUB(0x3BC0, 0x410, 1)
    SUB(0x41C0, 0x410, 2)
    SUB(0x47C0, 0x424, 1)
    SUB(0x4DC0, 0x434, 1)
    SUB(0x53C0, 0x43C, 1)
    LIGHT(0x16C0)
    func_00104C00(&b, MAT(0x428), p + 0x1F00);
    V(0x16C0)->mCC(&b);
}
}
#undef C

extern "C" {
int func_001A5C80(int);
}

class VC_0_i {
public:
    virtual void d0();
    virtual int m(void);
};

extern "C" {
int func_002AA800(int p0) {
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    int tmp5;
    int tmp6;
    int tmp7;
    int tmp8;
    tmp0 = ((VC_0_i *)(p0 + 1216))->m();
    func_001A5C80(tmp0);
    tmp1 = ((VC_0_i *)(p0 + 5824))->m();
    func_001A5C80(tmp1);
    tmp2 = ((VC_0_i *)(p0 + 13760))->m();
    func_001A5C80(tmp2);
    tmp3 = ((VC_0_i *)(p0 + 15296))->m();
    func_001A5C80(tmp3);
    tmp4 = ((VC_0_i *)(p0 + 16832))->m();
    func_001A5C80(tmp4);
    tmp5 = ((VC_0_i *)(p0 + 18368))->m();
    func_001A5C80(tmp5);
    tmp6 = ((VC_0_i *)(p0 + 19904))->m();
    func_001A5C80(tmp6);
    tmp7 = ((VC_0_i *)(p0 + 21440))->m();
    tmp8 = func_001A5C80(tmp7);
    return tmp8;
}
}

extern "C" {
int func_002AA8E0(int p0) {
    int func_001A5C30(int);
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    int tmp5;
    int tmp6;
    int tmp7;
    int tmp8;
    tmp0 = ((VC_0_i *)(p0 + 1216))->m();
    func_001A5C30(tmp0);
    tmp1 = ((VC_0_i *)(p0 + 5824))->m();
    func_001A5C30(tmp1);
    tmp2 = ((VC_0_i *)(p0 + 13760))->m();
    func_001A5C30(tmp2);
    tmp3 = ((VC_0_i *)(p0 + 15296))->m();
    func_001A5C30(tmp3);
    tmp4 = ((VC_0_i *)(p0 + 16832))->m();
    func_001A5C30(tmp4);
    tmp5 = ((VC_0_i *)(p0 + 18368))->m();
    func_001A5C30(tmp5);
    tmp6 = ((VC_0_i *)(p0 + 19904))->m();
    func_001A5C30(tmp6);
    tmp7 = ((VC_0_i *)(p0 + 21440))->m();
    tmp8 = func_001A5C30(tmp7);
    return tmp8;
}
}

extern "C" {
int func_0013D5D0(...);
}

class V14_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(void);
};

class V24_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m(void);
};

class VD0_0_i {
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
    virtual int m(void);
};

class VD0_0_v {
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
    virtual void m(void);
};

extern "C" {
int func_002AD000(int p0) {
    int v0;
    char *v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    v0 = 0;
    v1 = (char *)p0;
    v2 = v1;
    do {
        ((V24_0_v *)(v2 + 9272))->m();
        v0 = (v0 + 1);
        v2 = (v2 + 32);
    } while ((v0 < 10));
    ((V14_0_v *)(v1 + 22976))->m();
    ((V14_0_v *)(v1 + 23004))->m();
    ((V14_0_v *)(v1 + 23032))->m();
    ((V14_0_v *)(v1 + 23060))->m();
    ((V14_0_v *)(v1 + 23088))->m();
    ((V14_0_v *)(v1 + 23116))->m();
    ((V14_0_v *)(v1 + 23144))->m();
    ((V14_0_v *)(v1 + 23172))->m();
    ((VD0_0_v *)(v1 + 5824))->m();
    ((VD0_0_v *)(v1 + 13760))->m();
    ((VD0_0_v *)(v1 + 15296))->m();
    ((VD0_0_v *)(v1 + 16832))->m();
    ((VD0_0_v *)(v1 + 18368))->m();
    ((VD0_0_v *)(v1 + 19904))->m();
    ((VD0_0_v *)(v1 + 21440))->m();
    v5 = ((VD0_0_i *)(v1 + 1216))->m();
    v3 = 0;
    if ((0 < *(int *)(v1 + 11200))) {
        v4 = (int)v1;
        do {
            v5 = func_0013D5D0((v4 + 11204));
            v3 = (v3 + 1);
            v4 = (v4 + 16);
        } while ((v3 < *(int *)(v1 + 11200)));
    }
    return v5;
}
}
