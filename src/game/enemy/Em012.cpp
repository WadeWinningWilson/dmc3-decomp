/* Throw arc: decays a speed and moves along the facing; event 0xD when the sub-timer ends. */
class Obj3BF {
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
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual void d184();
    virtual void d185();
    virtual void d186();
    virtual void d187();
    virtual void d188();
    virtual void d189();
    virtual void d190();
    virtual void m304(int);
};

extern "C" float func_00131BA0(int);

extern "C" float func_00131C20(int);

extern "C" float func_0034C190(float, float, float);

extern "C" int func_0024E800(char *);

extern "C" {
void func_003BFD20(char *p) {
    extern void func_00132540(float *, char *, float);
    float t[4];
    float zero = 0.0f;
    *(int *)(p + 0x1668) = 0;
    p[0x1BC6] = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        *(float *)(p + 0x1BAC) = zero;
        *(float *)(p + 0x1BB0) = zero;
        *(float *)(p + 0x60) = func_00131BA0(*(short *)(p + 0x90));
        *(int *)(p + 0x64) = 0;
        *(float *)(p + 0x68) = func_00131C20(*(short *)(p + 0x90));
    case 1:
        if (!(*(float *)(p + 0x1BAC) <= 0.0f)) {
            *(float *)(p + 0x1BAC) = func_0034C190(*(float *)(p + 0x1BAC), 0.0f, *(float *)(p + 0x1BB0) * *(float *)(p + 0x10));
            func_00132540(t, p + 0x60, *(float *)(p + 0x1BAC) * *(float *)(p + 0x10));
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(t) : "memory");
        }
        if ((unsigned char)func_0024E800(p + 0x1680) == 1) {
            ((Obj3BF *)p)->m304(0xD);
        }
        break;
    }
}
}

/* An actor whose virtuals at 0x2EC..0x300 are used. */
class ObjB {
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
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual void d184();
    virtual int m2EC();
    virtual void m2F0(int);
    virtual void m2F4(int);
    virtual void m2F8(int);
    virtual void m2FC(int);
    virtual void m300(int);
    virtual void m304(int);
};

/* Waits for the motion at +0x1680 to finish, then enters state 0xD. */
extern "C" void func_003BF140(char *p) {
    *(int *)(p + 0x1668) = 0;
    *(unsigned char *)(p + 0x1BC6) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if ((unsigned char)func_0024E800(p + 0x1680) == 1) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 1:
        ((ObjB *)p)->m304(0xD);
        break;
    }
}

extern "C" void func_001A1E10(char *);

extern "C" char *func_00279290(char *);

extern "C" char D_00565D90[];

/* Resets both motions, scale and position, recovers the stance and enters state 0xD. */
extern "C" void func_003BFCA0(char *p) {
    func_001A1E10(func_00279290(p + 0x9C0));
    func_001A1E10(func_00279290(p + 0xFC0));
    *(float *)(p + 0x1BB4) = 1.0f;
    *(float *)(p + 0x1BB8) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(D_00565D90) : "memory");
    *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x134) + 0x20);
    ((ObjB *)p)->m304(0xD);
}

/* Emits two effects for every active entry pair (sub-object at +0x130 gives the rate). */
class Sub130 {
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
    virtual void m6C();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual float m7C();
    virtual int m80(float);
    virtual void d31();
    virtual int m88();
};

extern "C" void func_003C0280(char *, int);

extern "C" void func_003C0110(char *, int, float);

extern "C" void func_003C0190(char *, char *, float);

extern "C" void func_003BF5F0(char *p) {
    *(float *)(p + 0x1668) = 1.0f;
    *(unsigned char *)(p + 0x1BC6) = 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x1B98) = 15.0f;
    case 1:
        *(float *)(p + 0x1B98) = *(float *)(p + 0x1B98) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1B98) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        func_003C0280(p, 0x800);
        func_003C0110(p, 0x200, 5.0f);
        ((Sub130 *)(p + 0x130))->m6C();
        func_003C0190(p, p + 0x150, 200.0f);
        break;
    case 2:
        ((ObjB *)p)->m304(0xD);
        break;
    }
}

extern "C" char D_01CAFF0C[];

#define QCOPYB(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

class ObjDv2F0 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void d49(); virtual void d50(); virtual void d51(); virtual void d52(); virtual void d53();
    virtual void d54(); virtual void d55(); virtual void d56(); virtual void d57(); virtual void d58(); virtual void d59();
    virtual void d60(); virtual void d61(); virtual void d62(); virtual void d63(); virtual void d64(); virtual void d65();
    virtual void d66(); virtual void d67(); virtual void d68(); virtual void d69(); virtual void d70(); virtual void d71();
    virtual void d72(); virtual void d73(); virtual void d74(); virtual void d75(); virtual void d76(); virtual void d77();
    virtual void d78(); virtual void d79(); virtual void d80(); virtual void d81(); virtual void d82(); virtual void d83();
    virtual void d84(); virtual void d85(); virtual void d86(); virtual void d87(); virtual void d88(); virtual void d89();
    virtual void d90(); virtual void d91(); virtual void d92(); virtual void d93(); virtual void d94(); virtual void d95();
    virtual void d96(); virtual void d97(); virtual void d98(); virtual void d99(); virtual void d100(); virtual void d101();
    virtual void d102(); virtual void d103(); virtual void d104(); virtual void d105(); virtual void d106(); virtual void d107();
    virtual void d108(); virtual void d109(); virtual void d110(); virtual void d111(); virtual void d112(); virtual void d113();
    virtual void d114(); virtual void d115(); virtual void d116(); virtual void d117(); virtual void d118(); virtual void d119();
    virtual void d120(); virtual void d121(); virtual void d122(); virtual void d123(); virtual void d124(); virtual void d125();
    virtual void d126(); virtual void d127(); virtual void d128(); virtual void d129(); virtual void d130(); virtual void d131();
    virtual void d132(); virtual void d133(); virtual void d134(); virtual void d135(); virtual void d136(); virtual void d137();
    virtual void d138(); virtual void d139(); virtual void d140(); virtual void d141(); virtual void d142(); virtual void d143();
    virtual void d144(); virtual void d145(); virtual void d146(); virtual void d147(); virtual void d148(); virtual void d149();
    virtual void d150(); virtual void d151(); virtual void d152(); virtual void d153(); virtual void d154(); virtual void d155();
    virtual void d156(); virtual void d157(); virtual void d158(); virtual void d159(); virtual void d160(); virtual void d161();
    virtual void d162(); virtual void d163(); virtual void d164(); virtual void d165(); virtual void d166(); virtual void d167();
    virtual void d168(); virtual void d169(); virtual void d170(); virtual void d171(); virtual void d172(); virtual void d173();
    virtual void d174(); virtual void d175(); virtual void d176(); virtual void d177(); virtual void d178(); virtual void d179();
    virtual void d180(); virtual void d181(); virtual void d182(); virtual void d183(); virtual void d184(); virtual void d185();
    virtual void m2F0(int);
};

extern "C" {
void func_003BEEE0(char *p) {
    extern int func_0034B800(float *, char *, short, int, float);
    float v[4];
    float y;
    *(float *)(p + 0x1668) = 1.0f;
    *(unsigned char *)(p + 0x1BC6) = 1;
    QCOPYB(v, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
    if ((unsigned char)func_0034B800(v, p + 0x50, *(short *)(p + 0x90) + 0, 0x4000, 500.0f) == 1) {
        y = *(float *)(p + 0x54);
        if (!(v[1] <= 100.0f + y) && v[1] < 2000.0f + y) {
            ((ObjDv2F0 *)p)->m2F0(0x1D);
        }
    }
}
}

class ObjDv304 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void d49(); virtual void d50(); virtual void d51(); virtual void d52(); virtual void d53();
    virtual void d54(); virtual void d55(); virtual void d56(); virtual void d57(); virtual void d58(); virtual void d59();
    virtual void d60(); virtual void d61(); virtual void d62(); virtual void d63(); virtual void d64(); virtual void d65();
    virtual void d66(); virtual void d67(); virtual void d68(); virtual void d69(); virtual void d70(); virtual void d71();
    virtual void d72(); virtual void d73(); virtual void d74(); virtual void d75(); virtual void d76(); virtual void d77();
    virtual void d78(); virtual void d79(); virtual void d80(); virtual void d81(); virtual void d82(); virtual void d83();
    virtual void d84(); virtual void d85(); virtual void d86(); virtual void d87(); virtual void d88(); virtual void d89();
    virtual void d90(); virtual void d91(); virtual void d92(); virtual void d93(); virtual void d94(); virtual void d95();
    virtual void d96(); virtual void d97(); virtual void d98(); virtual void d99(); virtual void d100(); virtual void d101();
    virtual void d102(); virtual void d103(); virtual void d104(); virtual void d105(); virtual void d106(); virtual void d107();
    virtual void d108(); virtual void d109(); virtual void d110(); virtual void d111(); virtual void d112(); virtual void d113();
    virtual void d114(); virtual void d115(); virtual void d116(); virtual void d117(); virtual void d118(); virtual void d119();
    virtual void d120(); virtual void d121(); virtual void d122(); virtual void d123(); virtual void d124(); virtual void d125();
    virtual void d126(); virtual void d127(); virtual void d128(); virtual void d129(); virtual void d130(); virtual void d131();
    virtual void d132(); virtual void d133(); virtual void d134(); virtual void d135(); virtual void d136(); virtual void d137();
    virtual void d138(); virtual void d139(); virtual void d140(); virtual void d141(); virtual void d142(); virtual void d143();
    virtual void d144(); virtual void d145(); virtual void d146(); virtual void d147(); virtual void d148(); virtual void d149();
    virtual void d150(); virtual void d151(); virtual void d152(); virtual void d153(); virtual void d154(); virtual void d155();
    virtual void d156(); virtual void d157(); virtual void d158(); virtual void d159(); virtual void d160(); virtual void d161();
    virtual void d162(); virtual void d163(); virtual void d164(); virtual void d165(); virtual void d166(); virtual void d167();
    virtual void d168(); virtual void d169(); virtual void d170(); virtual void d171(); virtual void d172(); virtual void d173();
    virtual void d174(); virtual void d175(); virtual void d176(); virtual void d177(); virtual void d178(); virtual void d179();
    virtual void d180(); virtual void d181(); virtual void d182(); virtual void d183(); virtual void d184(); virtual void d185();
    virtual void d186(); virtual void d187(); virtual void d188(); virtual void d189(); virtual void d190(); virtual void m304(int);
};

extern "C" void func_003BF510(char *p) {
    *(unsigned char *)(p + 0x1BC6) = 1;
    *(float *)(p + 0x1668) = 1.0f;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) += 1;
        *(float *)(p + 0x1B98) = 30.0f;
    case 1:
        *(float *)(p + 0x1B98) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x1B98) < 0.0f) {
            *(unsigned char *)(p + 5) += 1;
        }
        *(short *)(p + 0x90) += 3276.0f * *(float *)(p + 0x10);
        break;
    case 2:
        ((ObjDv304 *)p)->m304(0xD);
        break;
    }
}

extern "C" void func_001A1F90(char *);

class V1Cf {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

class V2F0 {
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
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual void d184();
    virtual void d185();
    virtual void m2F0(int);
};

class V98 {
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
    virtual void m98(int);
};

static inline float get1c() {
    char *g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0) {
        V1Cf *o = *(V1Cf **)(g + 0x10);
        if (o != 0) return o->m1C();
    }
    return 0.0f;
}

class VO304 {
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
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual void d184();
    virtual void d185();
    virtual void d186();
    virtual void d187();
    virtual void d188();
    virtual void d189();
    virtual void d190();
    virtual void m304(int);
};

extern "C" void func_003BD760(char *p, int a, char *b, int c, int d) {
    int i;
    *(int *)(p + 0x134) = a;
    *(char **)(p + 0x138) = b;
    *(int *)(p + 0x13C) = c;
    *(int *)(p + 0x140) = d;
    *(float *)(p + 0x144) = get1c();
    *(short *)(p + 0x160) = 0;
    *(int *)(p + 0x164) = 0;
    *(int *)(p + 0x168) = 0;
    *(int *)(p + 0x1B90) = 0;
    *(unsigned char *)(p + 0x14C) = 0;
    *(unsigned char *)(p + 0x14D) = 0;
    *(unsigned char *)(p + 0x2731) = 1;
    *(unsigned char *)(p + 0x2732) = 0;
    *(unsigned char *)(p + 0x2733) = 0;
    *(unsigned char *)(p + 0x2734) = 0;
    *(unsigned char *)(p + 0x2735) = 0;
    ((VO304 *)p)->m304(0);
    ((V2F0 *)p)->m2F0(0xE);
    ((V98 *)(p + 0x130))->m98(*(int *)(b + 0x1C));
    *(unsigned char *)(p + 0x2750) = 0;
    *(int *)(p + 0x1BA4) = 0;
    *(unsigned char *)(p + 0x1BC5) = 1;
    *(unsigned char *)(p + 0x1BC6) = 0;
    *(float *)(p + 0x1BA8) = 5.0f;
    for (i = 0; i < 2; i++) {
        *(int *)(p + i * 4 + 0x1BB4) = 0;
        func_001A1F90(func_00279290(p + i * 0x600 + 0x9C0));
    }
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_003BE3F0(char *, float);

class S3BE {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68();
    virtual void m6C();
    virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual int m88();
};

class O3BE {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144();
    virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158(); virtual void d15C(); virtual void d160(); virtual void d164();
    virtual void d168(); virtual void d16C(); virtual void d170(); virtual void d174(); virtual void d178(); virtual void d17C(); virtual void d180(); virtual void d184();
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194(); virtual void d198(); virtual void d19C(); virtual void d1A0(); virtual void d1A4();
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8(); virtual void d1BC(); virtual void d1C0(); virtual void d1C4();
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC(); virtual void d1E0(); virtual void d1E4();
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC();
    virtual void m2F0(int);
};

extern "C" {
void func_003BEFC0(char *p) {
    extern int func_0034B800(float *, char *, short, int, float);
    float v[4] __attribute__((aligned(16)));
    *(float *)(p + 0x1668) = 1.0f;
    *(unsigned char *)(p + 0x1BC6) = 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        func_003C0280(p, 0x100);
        func_003C0110(p, 0x200, 5.0f);
        ((S3BE *)(p + 0x130))->m6C();
        func_003C0190(p, p + 0x150, 200.0f);
        break;
    }
    *(float *)(p + 0x168) = *(float *)(p + 0x168) + *(float *)(p + 0x10);
    if (((S3BE *)(p + 0x130))->m88() != 0) {
        func_003BE3F0(p, 3.0f);
    }
    QCOPY(v, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
    if ((unsigned char)func_0034B800(v, p + 0x50, (short)(int)*(short *)(p + 0x90), 0x4000, 500.0f) == 1 &&
        !(v[1] <= *(float *)(p + 0x54) + 100.0f) && v[1] < *(float *)(p + 0x54) + 2000.0f) {
        ((O3BE *)p)->m2F0(0x1D);
    }
}
}

extern "C" void func_001A1E70(char *, int);

extern "C" void func_001A2D00(char *, int);

class O3BF {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144();
    virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158(); virtual void d15C(); virtual void d160(); virtual void d164();
    virtual void d168(); virtual void d16C(); virtual void d170(); virtual void d174(); virtual void d178(); virtual void d17C(); virtual void d180(); virtual void d184();
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194(); virtual void d198(); virtual void d19C(); virtual void d1A0(); virtual void d1A4();
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8(); virtual void d1BC(); virtual void d1C0(); virtual void d1C4();
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC(); virtual void d1E0(); virtual void d1E4();
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4(); virtual void d2F8(); virtual void d2FC(); virtual void d300();
    virtual void m304(int);
};

extern "C" void func_003BF840(char *p) {
    unsigned char c;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 6) = 0;
        *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x134) + 0x20);
        func_001A1E10(func_00279290(p + 0x9C0));
        func_001A1E70(func_00279290(p + 0xFC0), 0);
        func_001A1E70(func_00279290(p + 0xFC0), 1);
        *(float *)(p + 0x1BB4) = 1.0f;
        *(float *)(p + 0x1BB8) = 1.0f;
        *(unsigned char *)(p + 0x1BC8) = 0;
        c = *(unsigned char *)(p + 0x1BC8);
        func_001A2D00(func_00279290(p + 0x9C0), (c << 24) | (c << 16) | (c << 8) | c);
    case 1:
        if (*(unsigned char *)(p + 0x1BC8) < 0xFF) {
            *(unsigned char *)(p + 0x1BC8) = *(unsigned char *)(p + 0x1BC8) + 1;
        }
        c = *(unsigned char *)(p + 0x1BC8);
        func_001A2D00(func_00279290(p + 0x9C0), (c << 24) | (c << 16) | (c << 8) | c);
        if ((unsigned char)func_0024E800(p + 0x1680) == 1) {
            func_001A1E10(func_00279290(p + 0xFC0));
            ((O3BF *)p)->m304(0xD);
            func_001A2D00(func_00279290(p + 0x9C0), 0xFFFFFF);
        }
        break;
    }
}

extern "C" char *func_00207480(int, int, char *, int);

extern "C" int func_0024E780(char *, int, int);

extern "C" void func_0024E7B0(char *, int, int);

extern "C" char D_00578580[];

extern "C" void func_003DEBF0(char *, char *, char *, int, char *);

extern "C" void func_003DF0C0(char *, float);

class Obj1F4 {
public:
    virtual void w0();
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual void w5();
    virtual void w6();
    virtual void w7();
    virtual void w8();
    virtual void w9();
    virtual void w10();
    virtual void w11();
    virtual void w12();
    virtual void w13();
    virtual void w14();
    virtual void w15();
    virtual void w16();
    virtual void w17();
    virtual void w18();
    virtual void w19();
    virtual void w20();
    virtual void w21();
    virtual void w22();
    virtual void w23();
    virtual void w24();
    virtual void w25();
    virtual void w26();
    virtual void w27();
    virtual void w28();
    virtual void w29();
    virtual void w30();
    virtual void w31();
    virtual void w32();
    virtual void w33();
    virtual void w34();
    virtual void w35();
    virtual void w36();
    virtual void w37();
    virtual void w38();
    virtual void w39();
    virtual void w40();
    virtual void w41();
    virtual void w42();
    virtual void w43();
    virtual void w44();
    virtual void w45();
    virtual void w46();
    virtual void w47();
    virtual void w48();
    virtual void w49();
    virtual void w50();
    virtual void w51();
    virtual void w52();
    virtual void w53();
    virtual void w54();
    virtual void w55();
    virtual void w56();
    virtual void w57();
    virtual void w58();
    virtual void w59();
    virtual void w60();
    virtual void w61();
    virtual void w62();
    virtual void w63();
    virtual void w64();
    virtual void w65();
    virtual void w66();
    virtual void w67();
    virtual void w68();
    virtual void w69();
    virtual void w70();
    virtual void w71();
    virtual void w72();
    virtual void w73();
    virtual void w74();
    virtual void w75();
    virtual void w76();
    virtual void w77();
    virtual void w78();
    virtual void w79();
    virtual void w80();
    virtual void w81();
    virtual void w82();
    virtual void w83();
    virtual void w84();
    virtual void w85();
    virtual void w86();
    virtual void w87();
    virtual void w88();
    virtual void w89();
    virtual void w90();
    virtual void w91();
    virtual void w92();
    virtual void w93();
    virtual void w94();
    virtual void w95();
    virtual void w96();
    virtual void w97();
    virtual void w98();
    virtual void w99();
    virtual void w100();
    virtual void w101();
    virtual void w102();
    virtual void w103();
    virtual void w104();
    virtual void w105();
    virtual void w106();
    virtual void w107();
    virtual void w108();
    virtual void w109();
    virtual void w110();
    virtual void w111();
    virtual void w112();
    virtual void w113();
    virtual void w114();
    virtual void w115();
    virtual void w116();
    virtual void w117();
    virtual void w118();
    virtual void w119();
    virtual void w120();
    virtual void w121();
    virtual void w122();
    virtual void m1F4(char *, int);
};

extern "C" {
void func_003BFE30(char *p) {
    extern void func_0034BA60(int, char *, int, int, int);
    char m[64] __attribute__((aligned(16)));
    float z = 0.0f;
    *(int *)(p + 0x1668) = 0;
    *(unsigned char *)(p + 0x1BC6) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 6) = 0;
    case 1:
        if ((unsigned char)func_0024E780(p + 0x1680, 0, 0) == 1) {
            func_0024E7B0(p + 0x1680, 0, 0);
            *(unsigned char *)(p + 0x1BC5) = 0;
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1B98) = 60.0f;
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(m + 0x30), "r"(*(char **)(*(char **)(p + 0x8B8) + 0x104) + 0x30) : "memory");
            *(float *)(m + 0x3C) = 1.0f;
            *(char **)(p + 0x2728) = func_00207480(3, 0x206, m, 0x10);
            func_0034BA60(0x22, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        }
        break;
    case 2:
        *(float *)(p + 0x1B98) = *(float *)(p + 0x1B98) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1B98) < z) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_003DEBF0(p + 0x1BD0, p + 0x8B0, D_00578580, 0x1C, p);
            *(float *)(p + 0x1B98) = 90.0f;
            func_0034BA60(0x1A, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        }
        break;
    case 3:
        *(float *)(p + 0x1B98) = *(float *)(p + 0x1B98) - *(float *)(p + 0x10);
        *(float *)(p + 0x1BB4) = *(float *)(p + 0x1BB4) - 0.01f * *(float *)(p + 0x10);
        *(float *)(p + 0x1BB8) = *(float *)(p + 0x1BB8) - 0.01f * *(float *)(p + 0x10);
        if (*(float *)(p + 0x1BB4) < z) {
            *(float *)(p + 0x1BB4) = z;
        }
        if (*(float *)(p + 0x1BB8) < 0.0f) {
            *(float *)(p + 0x1BB8) = 0.0f;
        }
        if (*(float *)(p + 0x1B98) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        func_003DF0C0(p + 0x1BD0, *(float *)(p + 0x10));
        break;
    case 4:
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        break;
    }
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0x1B9C) = 30.0f;
    case 1:
        *(float *)(p + 0x1B9C) = *(float *)(p + 0x1B9C) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1B9C) < 0.0f) {
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            ((Obj1F4 *)p)->m1F4(p + 0x550, 0);
        }
        break;
    case 2:
        break;
    }
}
}

extern "C" void func_00105300(char *, int);

extern "C" void func_00104C00(char *, char *, char *);

extern "C" void func_003DF450(char *);

class V3C0 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual int mB4();
    virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void mC8(int);
};

#define QCOPYR3C(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

#define VADDA3C(d, b) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(b) : "memory")

extern "C" V3C0 *func_002792A0(char *);

extern "C" void func_003C0A20(char *p) {
    float v[4] __attribute__((aligned(16)));
    char m[0x40] __attribute__((aligned(16)));
    int i;
    char *e;
    if (*(unsigned char *)(p + 0x1BC5) == 1) {
        QCOPYR3C(v, p + 0x1A00);
        v[3] = 1.0f;
        func_00105300(m, (int)(p + 0x19D0));
        VADDA3C(p + 0x50, v);
        for (i = 0; i < func_002792A0(p + 0x9C0)->mB4(); i++) {
            e = *(char **)((char *)(i * 4) + (int)p + 0x8B0);
            if (e != 0 && *(char **)(e + 0x104) != 0) {
                func_00104C00(*(char **)(e + 0x104), m, *(char **)(e + 0x104));
                *(float *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x8B0) + 0x104) + 0x3C) = 1.0f;
            }
        }
        ((V3C0 *)(p + 0xFC0))->mC8(*(int *)(*(char **)(p + 0x8B8) + 0x104));
    } else {
        func_003DF450(p + 0x1BD0);
    }
}

extern "C" void func_001A2180(char *, int, int);

extern "C" void func_001A23D0(char *);

extern "C" void func_001A2210(char *, int, int, int);

extern "C" void func_001A2440(char *, int);

class Self3C0 {
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
    virtual int m200(unsigned char *, char *, int);
};

class Mdl3C0 {
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
    virtual void mCC(char *);
};

static inline void setA3C0(char *o, unsigned int i, unsigned char a) {
    if (i < *(unsigned short *)(o + 0xA8)) *(int *)(*(char **)(o + 0xBC) + i * 0x340 + 0x15C) = a;
}

extern "C" void func_003C0BE0(char *p) {
    unsigned char c;
    char buf[7];
    int a;
    char *o;
    int i;
    int j;
    int k;
    if (!(unsigned char)((Self3C0 *)p)->m200(&c, buf, *(int *)(*(char **)(p + 0x8BC) + 0x104) + 0x30)) c = 0x80;
    a = (unsigned char)(unsigned int)((float)(unsigned int)c * *(float *)(p + 0x1BB4));
    if (a != 0x80) {
        func_001A2180(func_00279290(p + 0x9C0), a, 1);
        o = func_00279290(p + 0x9C0);
        for (i = 0; i < *(unsigned short *)(o + 0xA8); i++) setA3C0(o, i, a);
    } else {
        func_001A23D0(func_00279290(p + 0x9C0));
    }
    a = (unsigned char)(unsigned int)((float)(unsigned int)c * *(float *)(p + 0x1BB8));
    if (a != 0x80) {
        o = func_00279290(p + 0xFC0);
        for (j = 0; j < *(unsigned short *)(o + 0xA8); j++) setA3C0(o, j, a);
        func_001A2210(func_00279290(p + 0xFC0), 0, a, 1);
    } else {
        func_001A2440(func_00279290(p + 0xFC0), 0);
        o = func_00279290(p + 0xFC0);
        for (k = 0; k < *(unsigned short *)(o + 0xA8); k++) setA3C0(o, k, 0x80);
    }
    ((Mdl3C0 *)(p + 0x9C0))->mCC(p + 0x1620);
    if (*(unsigned char *)(p + 0x2730) != 9) ((Mdl3C0 *)(p + 0xFC0))->mCC(*(char **)(*(char **)(p + 0x8B8) + 0x104));
}

class A3C0 {
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
    virtual void m34(char *, char *);
    virtual void m38(char *, char *);
};

class X3C0 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void m14(int, char *, char *, A3C0 *);
};

class Y3C0 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void m14(char *, A3C0 *, int);
};

extern "C" {
void func_003C0690(char *p, char *hit, A3C0 *att, char *pos) {
    extern int func_0034B800(char *, float *, short, int, float);
    extern void func_0034BA60(int, char *, signed char, int, int);
    float v[4] __attribute__((aligned(16)));
    char *q;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    switch (*(signed char *)(hit + 2)) {
    case 0:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x8EC) + 0x104) + 0x30) : "memory");
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, v, *(short *)(p + 0x90) + 0x8000, 0x4000, 5000.0f) == 1) {
            func_0034BA60(*(int *)(hit + 0x34), pos, *(signed char *)(p + 0x46), 0, 1);
            ((X3C0 *)(p + 0x1B18))->m14(0, pos, hit, att);
            ((Y3C0 *)(p + 0x1B00))->m14(hit, att, *(int *)(p + 0x1AB0));
            if (p != 0) p += 0x40;
            att->m38(hit, p);
        } else {
            ((X3C0 *)(p + 0x1B18))->m14(2, pos, hit, att);
            q = p;
            if (q != 0) q += 0x40;
            att->m34(hit, q);
            func_0034BA60(8, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        }
        break;
    case 1:
        ((X3C0 *)(p + 0x1B18))->m14(2, pos, hit, att);
        func_0034BA60(6, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        break;
    }
}
}

extern "C" int D_01CAFF38[];

extern "C" char D_00566160[];

extern "C" float func_00132470(char *, char *);

class ObjUI {
public:
    virtual void z0();
    virtual void z1();
    virtual void z2();
    virtual void z3();
    virtual void z4();
    virtual void z5();
    virtual void z6();
    virtual void z7();
    virtual void z8();
    virtual void z9();
    virtual void z10();
    virtual void z11();
    virtual void z12();
    virtual void z13();
    virtual void z14();
    virtual void z15();
    virtual void z16();
    virtual void z17();
    virtual void z18();
    virtual void z19();
    virtual void z20();
    virtual void z21();
    virtual void z22();
    virtual void z23();
    virtual void z24();
    virtual void z25();
    virtual void z26();
    virtual void z27();
    virtual void z28();
    virtual void z29();
    virtual void z30();
    virtual void z31();
    virtual void z32();
    virtual void z33();
    virtual void z34();
    virtual void z35();
    virtual void z36();
    virtual void z37();
    virtual void z38();
    virtual void z39();
    virtual void z40();
    virtual void z41();
    virtual void z42();
    virtual void z43();
    virtual void z44();
    virtual void z45();
    virtual void z46();
    virtual void z47();
    virtual void z48();
    virtual void z49();
    virtual void z50();
    virtual void z51();
    virtual void z52();
    virtual void z53();
    virtual void z54();
    virtual void z55();
    virtual void z56();
    virtual void z57();
    virtual void z58();
    virtual void z59();
    virtual void z60();
    virtual void z61();
    virtual void z62();
    virtual void z63();
    virtual void z64();
    virtual void z65();
    virtual void z66();
    virtual void z67();
    virtual void z68();
    virtual void z69();
    virtual void z70();
    virtual void z71();
    virtual void z72();
    virtual void z73();
    virtual void z74();
    virtual void z75();
    virtual void z76();
    virtual void z77();
    virtual void z78();
    virtual void z79();
    virtual void z80();
    virtual void z81();
    virtual void z82();
    virtual void z83();
    virtual void z84();
    virtual void z85();
    virtual void z86();
    virtual void z87();
    virtual void z88();
    virtual void z89();
    virtual void z90();
    virtual void z91();
    virtual void z92();
    virtual void z93();
    virtual void z94();
    virtual void z95();
    virtual void z96();
    virtual void z97();
    virtual void z98();
    virtual void z99();
    virtual void z100();
    virtual void z101();
    virtual void z102();
    virtual void z103();
    virtual void z104();
    virtual void z105();
    virtual void z106();
    virtual void z107();
    virtual void z108();
    virtual void z109();
    virtual void z110();
    virtual void z111();
    virtual void z112();
    virtual void z113();
    virtual void z114();
    virtual void z115();
    virtual void z116();
    virtual void z117();
    virtual void z118();
    virtual void z119();
    virtual void z120();
    virtual void z121();
    virtual void z122();
    virtual void z123();
    virtual void z124();
    virtual void z125();
    virtual void z126();
    virtual void z127();
    virtual void z128();
    virtual void z129();
    virtual void z130();
    virtual void z131();
    virtual void z132();
    virtual void z133();
    virtual void z134();
    virtual void z135();
    virtual void z136();
    virtual void z137();
    virtual void z138();
    virtual void z139();
    virtual void z140();
    virtual void z141();
    virtual void z142();
    virtual void z143();
    virtual void z144();
    virtual void z145();
    virtual void z146();
    virtual void z147();
    virtual void z148();
    virtual void z149();
    virtual void z150();
    virtual void z151();
    virtual void z152();
    virtual void z153();
    virtual void z154();
    virtual void z155();
    virtual void z156();
    virtual void z157();
    virtual void z158();
    virtual void z159();
    virtual void z160();
    virtual void z161();
    virtual void z162();
    virtual void z163();
    virtual void z164();
    virtual void z165();
    virtual void z166();
    virtual void z167();
    virtual void z168();
    virtual void z169();
    virtual void z170();
    virtual void z171();
    virtual void z172();
    virtual void z173();
    virtual void z174();
    virtual void z175();
    virtual void z176();
    virtual void z177();
    virtual void z178();
    virtual void z179();
    virtual void z180();
    virtual void z181();
    virtual void z182();
    virtual void z183();
    virtual void z184();
    virtual void z185();
    virtual void m2F0(int);
    virtual void z187();
    virtual void z188();
    virtual void z189();
    virtual void z190();
    virtual void m304(int);
};

static inline int gray4(unsigned char c) { return (c << 24) | (c << 16) | (c << 8) | c; }

extern "C" {
void func_003BF9C0(char *p) {
    extern void func_00132540(float *, float *, float);
    float d[4] __attribute__((aligned(16)));
    char *o;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 6) = 0;
        switch (D_01CAFF38[0]) {
        case 0xCD:
            *(char **)(p + 0x2754) = D_00566160 + *(unsigned char *)(p + 0x2750) * 32;
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x2740), "r"(*(char **)(p + 0x2754) + 0x10) : "memory");
            break;
        }
        *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x134) + 0x20);
        func_001A1E10(func_00279290(p + 0x9C0));
        func_001A1E70(func_00279290(p + 0xFC0), 0);
        func_001A1E70(func_00279290(p + 0xFC0), 1);
        *(float *)(p + 0x1BB4) = 1.0f;
        *(float *)(p + 0x1BB8) = 1.0f;
        *(unsigned char *)(p + 0x1BC8) = 0;
        o = func_00279290(p + 0x9C0);
        func_001A2D00(o, gray4(*(unsigned char *)(p + 0x1BC8)));
    case 1:
        if (*(unsigned char *)(p + 0x1BC8) < 0xFF) {
            *(unsigned char *)(p + 0x1BC8) = *(unsigned char *)(p + 0x1BC8) + 1;
        }
        o = func_00279290(p + 0x9C0);
        func_001A2D00(o, gray4(*(unsigned char *)(p + 0x1BC8)));
        switch (*(unsigned char *)(p + 6)) {
        case 0:
            if ((unsigned char)func_0024E800(p + 0x1680) == 1) {
                *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
                func_001A1E10(func_00279290(p + 0xFC0));
                func_001A2D00(func_00279290(p + 0x9C0), 0xFFFFFF);
            }
            break;
        case 1:
            break;
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x2740), "r"(p + 0x50) : "memory");
        func_00132540(d, d, 3.0f);
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(d) : "memory");
        if (func_00132470(p + 0x50, p + 0x2740) < 10.0f) {
            if (**(signed char **)(p + 0x2754) != -1) {
                (*(unsigned char *)(p + 0x2750))++;
                *(char **)(p + 0x2754) = D_00566160 + (unsigned char)*(unsigned char *)(p + 0x2750) * 32;
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x2740), "r"(*(char **)(p + 0x2754) + 0x10) : "memory");
            } else {
                ((ObjUI *)p)->m304(0xD);
                *(unsigned char *)(p + 0x2750) = 0;
                return;
            }
        }
        func_003C0110(p, 0x200, 5.0f);
        func_003C0190(p, p + 0x2740, 200.0f);
        break;
    }
}
}

/* Hand-matched C++ functions that declare D_01CAFF0C as a plain char array (forcing reloads after stores) or whose prototypes/classes conflict with vcalls-vcalls7. */
extern "C" char D_01CAFF0C[];

extern "C" char D_005BE098[4];

extern "C" void func_00195E20(char *, char *);

#define FB(t, o) (*(t *)(p + (o)))

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" void func_0028C5C0(float, char *, int);

extern "C" void func_002EF940(char *, char *);

extern "C" void func_00206730(char *);

extern "C" int func_002077F0(char *);

extern "C" void func_001AD140(char *);

extern "C" int func_001F9A70(float, char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

struct A3BD {
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
    virtual void d84();
    virtual void d88();
    virtual void d8C();
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
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual void d200();
    virtual void d204();
    virtual void d208();
    virtual void d20C();
    virtual void d210();
    virtual void d214();
    virtual void d218();
    virtual void d21C();
    virtual void d220();
    virtual void d224();
    virtual void d228();
    virtual void d22C();
    virtual void d230();
    virtual void d234();
    virtual void d238();
    virtual void d23C();
    virtual void d240();
    virtual void d244();
    virtual void d248();
    virtual void d24C();
    virtual void d250();
    virtual void d254();
    virtual void d258();
    virtual void d25C();
    virtual void d260();
    virtual void d264();
    virtual void d268();
    virtual void d26C();
    virtual void d270();
    virtual void d274();
    virtual void d278();
    virtual void d27C();
    virtual void d280();
    virtual void d284();
    virtual void d288();
    virtual void d28C();
    virtual void d290();
    virtual void d294();
    virtual void d298();
    virtual void d29C();
    virtual void d2A0();
    virtual void d2A4();
    virtual void d2A8();
    virtual void d2AC();
    virtual void d2B0();
    virtual void d2B4();
    virtual void d2B8();
    virtual void d2BC();
    virtual void d2C0();
    virtual void d2C4();
    virtual void d2C8();
    virtual void d2CC();
    virtual void d2D0();
    virtual void d2D4();
    virtual void d2D8();
    virtual void d2DC();
    virtual void d2E0();
    virtual void d2E4();
    virtual void d2E8();
    virtual int m2EC();
    virtual void d2F0();
    virtual void d2F4();
    virtual void d2F8();
    virtual void d2FC();
    virtual void m300();
    virtual void d304();
    virtual int m308();
};

struct C3BD {
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
    virtual void d84();
    virtual void d88();
    virtual void d8C();
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
    virtual void mC8(char *);
};

struct D3BD {
    virtual void d8();
    virtual void dC();
    virtual void m10();
};

struct E3BD {
    virtual void d8();
    virtual void dC();
    virtual void m10(float);
};

static inline char *gt3BD(void) { return *(char **)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x550); }

static inline void kill3BD(char *e) { *(unsigned char *)(e + 0x3A) = 1; }

extern "C" {
void func_003BD260(char *p) {
    extern void func_0034BA60(int, char *, signed char, int, int);
    int i;
    int k;
    char *m;
    char *e;
    unsigned int x;
    float f;
    float g;
    if ((unsigned char)func_001F9A70(1000.0f, gt3BD(), p + 0x50) == 0) {
        func_001AD140(p);
        return;
    }
    FB(float, 0x1660) = FB(float, 0x10);
    ((A3BD *)p)->m2EC();
    ((A3BD *)p)->m300();
    UNIT(*(char **)(FB(char *, 0x8B0) + 0x100));
    FB(float, 0x84) = 6.283185f * ((float)FB(short, 0x90) / 65536.0f);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x1600), "r"(p + 0x80) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x15F0), "r"(p + 0x50) : "memory");
    UNIT(p + 0x1620);
    func_00131700(p + 0x1620, p + 0x1620, p + 0x1600);
    func_00105230(p + 0x1620, p + 0x1620, p + 0x15F0);
    func_001318E0(p + 0x1620, p + 0x1620, p + 0x1610);
    FB(float, 0x650) = FB(float, 0x10);
    FB(float, 0x710) = FB(float, 0x10);
    FB(float, 0x7D0) = FB(float, 0x10);
    FB(float, 0x890) = FB(float, 0x10);
    if (FB(unsigned char, 0x1BC5) == 1) {
        m = p + 0x1620;
        ((C3BD *)(p + 0x9C0))->mC8(m);
    }
    for (i = 0; i < 0x10; i++) {
        e = *(char **)((char *)(i * 4) + (int)p + 0x18AC);
        if (e != 0) {
            x = *(unsigned int *)(e + 0xC);
            if (x & 0x30) {
                x &= ~0x30;
                *(unsigned int *)(e + 0xC) = x;
            }
            if (*(int *)(*(char **)(p + 0x134) + 0x28) != 0 && (x & 0x30000)) {
                x &= 0xFFFCFFFF;
                *(unsigned int *)(e + 0xC) = x;
            }
        }
    }
    if (!(FB(float, 0x1B90) <= 0.0f))
        k = 1;
    else
        k = 0;
    func_0028C5C0(FB(float, 0x10), p + 0x1830, k);
    if (FB(unsigned char, 0x1BC4) != 0)
        func_002EF940(*(char **)D_01CAFF0C, p + 0x1A50);
    ((D3BD *)(p + 0x1B00))->m10();
    ((D3BD *)(p + 0x1B18))->m10();
    for (i = 0; i < 6; i++) {
        func_00206730(p + i * 4 + 0x2714);
        if (*(char **)((char *)(i * 4) + (int)p + 0x2714) != 0 && (unsigned char)func_002077F0(*(char **)((char *)(i * 4) + (int)p + 0x2714)) == 1)
            *(char **)((char *)(i * 4) + (int)p + 0x2714) = 0;
        if (*(char **)((char *)(i * 4) + (int)p + 0x2714) != 0) {
            if (i == 1) {
                if (FB(unsigned char, 0x1BC7) == 1)
                    *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x2714) + 0x3B) = 0;
                else
                    *(unsigned char *)(*(char **)((char *)(i * 4) + (int)p + 0x2714) + 0x3B) = 1;
            }
            if (i == 5) {
                if (((A3BD *)p)->m308() != 9) {
                    kill3BD(*(char **)((char *)(i * 4) + (int)p + 0x2714));
                    func_001AD140(*(char **)((char *)(i * 4) + (int)p + 0x2714));
                    *(char **)((char *)(i * 4) + (int)p + 0x2714) = 0;
                }
            }
        }
    }
    if (((A3BD *)p)->m308() != 3 && FB(char *, 0x2714) != 0)
        func_001AD140(FB(char *, 0x2714));
    if ((FB(float, 0x1BA4) -= FB(float, 0x10)) < 0.0f) {
        if (!(FB(float, 0x1668) <= 1.0f)) {
            FB(float, 0x1BA4) = 5.0f;
            func_0034BA60(0x15, p + 0x50, FB(signed char, 0x46), 0, 1);
        } else {
            FB(float, 0x1BA4) = 10.0f;
            func_0034BA60(0x14, p + 0x50, FB(signed char, 0x46), 0, 1);
        }
    }
    for (i = 0; i < 3; i++) {
        if (!(*(float *)((char *)(i * 0xC0) + (int)p + 0x5D8) <= *(float *)((char *)(i * 4) + (int)p + 0x8A0))) {
            *(float *)((char *)(i * 0xC0) + (int)p + 0x5D8) -= 0.01f * FB(float, 0x10);
            if (*(float *)((char *)(i * 0xC0) + (int)p + 0x5D8) < *(float *)((char *)(i * 4) + (int)p + 0x8A0))
                *(float *)((char *)(i * 0xC0) + (int)p + 0x5D8) = *(float *)((char *)(i * 4) + (int)p + 0x8A0);
        }
    }
    f = FB(float, 0x818);
    if (!(f <= FB(float, 0x8AC))) {
        g = f - 0.01f * FB(float, 0x10);
        FB(float, 0x818) = g;
        if (g < FB(float, 0x8AC))
            FB(float, 0x818) = FB(float, 0x8AC);
    }
    ((E3BD *)(p + 0x15C0))->m10(FB(float, 0x10));
    func_00195E20(D_005BE098, p);
}
}

extern "C" void func_00105760(float *, float *, float);

class ObjPosC4 {
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
    virtual float *mC4();
};

#define SETPOS(m,s) __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(s) : "memory")

#define GETPOS(d,m) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(m) : "memory")

#define VADDIP(d,s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" {
extern "C" void func_003C01C0(char *p) {
    float m2[16];
    float m[16];
    float a[4];
    float *src = ((ObjPosC4 *)(p + 0x9C0))->mC4();
    QCOPY(a, src);
    SETPOS(m2, a);
    func_00105760(m, m2, 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f));
    GETPOS(a, m);
    VADDIP(p + 0x50, a);
}
}

extern "C" {
extern "C" void func_003BF6F0(char *p) {
    *(unsigned char *)(p + 0x1BC6) = 1;
    *(float *)(p + 0x1668) = 1.0f;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) += 1;
        *(float *)(p + 0x1B98) = 10.0f;
    case 1:
        *(float *)(p + 0x1B98) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x1B98) < 0.0f) {
            *(unsigned char *)(p + 5) += 1;
        }
        *(short *)(p + 0x90) += 3276.0f * *(float *)(p + 0x10);
        break;
    case 2:
        ((ObjDv304 *)p)->m304(0xD);
        break;
    }
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
int func_003C0B40(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((V14_0_v *)(v0 + 5568))->m();
    ((VD0_0_v *)(v0 + 2496))->m();
    v1 = ((VD0_0_i *)(v0 + 4032))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 468))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 472));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 468)));
    }
    return v1;
}
}

extern "C" {
extern char D_00578470[];
}

extern "C" {
void func_0024DB10(char *, int, int, int, int, int, int);
}

extern "C" {
int func_0032D3D0(int, char *, int, float);
}

extern "C" {
void func_003BE510(char *, char *, int, int);
}

class V2E8_4_ppiii {
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
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual int m(char *, char *, int, int);
};

extern "C" {
int func_003BD090(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int tmp1;
    int tmp2;
    int tmp3;
    v1 = p0;
    *(char *)(p0 + 4) = (*(unsigned char *)(p0 + 4) + 1);
    *(char *)(p0 + 5) = 0;
    *(char *)(p0 + 10032) = 0;
    func_0024DB10((v1 + 5760), 0, 0, -1, -1, 0, 255);
    func_0024DB10((v1 + 5968), 0, 0, -1, -1, 0, 255);
    v2 = 0;
    v0 = *(char **)(*(char **)(v1 + 2232) + 260);
    *(char *)(v1 + 6736) = 0;
    *(char *)(v1 + 6737) = 0;
    *(short *)(v1 + 6738) = 0;
    *(int *)(v1 + 6744) = 0;
    *(int *)(v1 + 6748) = 0;
    *(int *)(v1 + 6752) = 0;
    *(int *)(v1 + 6768) = 0;
    *(int *)(v1 + 6772) = 0;
    *(int *)(v1 + 6776) = 0;
    *(int *)(v1 + 6780) = 0x3f800000;
    *(int *)(v1 + 6784) = 0x47c35000;
    *(char *)(v1 + 6788) = 0;
    *(char *)(v1 + 6789) = 0;
    *(short *)(v1 + 6790) = 0;
    while ((v2 < 10)) {
        tmp1 = ((v2 << 1) + (int)v1);
        v2 = (v2 + 1);
        *(short *)((char *)tmp1 + 6792) = -1;
    }
    *(char *)(v1 + 6736) = 0;
    *(char *)(v1 + 6737) = 0;
    *(short *)(v1 + 6738) = 0;
    *(short *)(v1 + 6740) = 0;
    *(char **)(v1 + 6744) = v1;
    *(char **)(v1 + 6748) = (v1 + 6816);
    *(char **)(v1 + 6752) = v0;
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(v0), "r"((v1 + 6768)) : "memory");
    tmp2 = func_0032D3D0(0, v1, v2, 2.5f);
    v5 = (int)v1;
    *(int *)(v1 + 200) = tmp2;
    if (v5 != 0) {
        v5 = (v5 + 64);
    }
    v6 = (int)v1;
    if (v6 != 0) {
        v6 = (v6 + 208);
    }
    func_003BE510(v1, (v1 + 1360), v6, v5);
    v7 = (int)v1;
    if (v1 != 0) {
        v7 = (int)(v1 + 304);
    }
    v3 = (int)v1;
    *(int *)(v1 + 276) = v7;
    if (v3 != 0) {
        v3 = (v3 + 64);
    }
    v4 = (int)v1;
    if (v4 != 0) {
        v4 = (v4 + 464);
    }
    tmp3 = ((V2E8_4_ppiii *)v1)->m((v1 + 1360), D_00578470, v4, v3);
    *(short *)(v1 + 5744) = 0;
    *(short *)(v1 + 5742) = 0;
    *(short *)(v1 + 5740) = 0;
    *(short *)(v1 + 5732) = 0;
    *(int *)(v1 + 5736) = 0x3f800000;
    *(short *)(v1 + 10000) = 0;
    *(char *)(v1 + 7108) = 0;
    return tmp3;
}
}
