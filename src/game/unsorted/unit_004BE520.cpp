#include "game/mt_rand.h"
class V300_1_ii {
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
    virtual int m(int);
};

class V88_0_i {
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
    virtual int m(void);
};

extern "C" {
void func_004C4A40(char *p0) {
    extern char D_0058AAA0[];
    int func_0024E800(...);
    void func_004CBBE0(char *, float);
    int func_004CBD90(char *);
    void func_004D1AF0(char *, char *, int);
    int func_004D2610(char *, int);
    int v0;
    char *v1;
    int v2;
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp6;
    v0 = *(unsigned char *)(p0 + 45400);
    v1 = p0;
    switch (v0) {
    case 0:
        *(char *)(v1 + 45400) = (v0 + 1);
        tmp0 = ((V300_1_ii *)p0)->m(0);
        *(int *)(v1 + 45436) = 0;
        return;
    case 1:
        tmp1 = func_004D2610(p0, v0);
        if ((tmp1 & 255) == 1) {
            tmp2 = func_004CBD90(v1);
            return;
        } else {
            func_004D1AF0(v1, D_0058AAA0, 0);
            tmp3 = ((V88_0_i *)(v1 + 304))->m();
            if (tmp3 != 0) {
                func_004CBBE0(v1, 3.0f);
            }
            v2 = func_0024E800(*(int *)(v1 + 43776));
            if ((v2 & 255) == 1) {
                *(int *)(v1 + 45436) = (*(int *)(v1 + 45436) + 1);
                if ((*(int *)(v1 + 45436) & 1) != 0) {
                    tmp6 = ((V300_1_ii *)v1)->m(1);
                    return;
                } else {
                    v2 = ((V300_1_ii *)v1)->m(0);
                    break;
                }
            } else {
                break;
            }
        }
        break;
    }
}
}

class V2EC_1_ii {
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
    virtual int m(int);
};

class V2F8_1_ii {
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
    virtual int m(int);
};

extern "C" {
void func_004C9E20(char *p0) {
    int func_004D2D90(...);
    int v0;
    char *v1;
    int v2;
    int tmp0;
    int tmp1;
    int tmp3;
    v0 = *(unsigned char *)(p0 + 45400);
    v1 = p0;
    switch (v0) {
    case 0:
        v2 = func_004D2D90(p0, v0);
        if ((v2 & 255) != 0) {
            if (*(unsigned char *)(v1 + 45768) != 2) {
                tmp0 = ((V2F8_1_ii *)v1)->m(23);
                return;
            } else {
                if (*(int *)(v1 + 45696) != 0) {
                    tmp1 = ((V2F8_1_ii *)v1)->m(23);
                    return;
                } else {
                    *(char *)(v1 + 45400) = (*(unsigned char *)(v1 + 45400) + 1);
                    tmp3 = ((V300_1_ii *)v1)->m(105);
                    return;
                }
            }
        } else {
            break;
        }
        break;
    case 1:
        v2 = ((V2EC_1_ii *)p0)->m(v0);
        if (v2 == 119) {
            v2 = ((V2F8_1_ii *)v1)->m(23);
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

extern "C" {
void func_004C87A0(char *p) {
    extern int func_004D1EF0(char *);
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        (*(unsigned char *)(p + 0xB158))++;
        if (mt_rand() & 1) {
            ((ObjB *)p)->m300(2);
        } else {
            ((ObjB *)p)->m300(0x11);
        }
        break;
    case 1:
        if (((ObjB *)p)->m2EC() == 0x77) {
            ((ObjB *)p)->m2F8(0x17);
        }
        break;
    }
    if ((unsigned char)func_004D1EF0(p) == 0) {
        ((ObjB *)p)->m2F8(0x32);
    }
}
}

/* An object whose virtual at 0x2F8 takes an int. */
class Obj2F8 {
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
    virtual void m2F8(int);
};

extern "C" float D_005BDF3C;

extern "C" int func_004D1B90(char *, int);

extern "C" void func_004D31D0(char *p, float dt) {
    unsigned char ok;
    if (*(unsigned char *)(p + 0xB2D3) == 1) {
        return;
    }
    if (*(unsigned char *)(p + 0x14D) == 3) {
        return;
    }
    ok = 1;
    if ((unsigned int)(*(unsigned char *)(p + 0xB2C9) - 2) > 1) {
        ok = 0;
    }
    if (ok == 1) {
        *(float *)(p + 0xB2BC) += dt;
        if (*(float *)(p + 0xB2BC) > D_005BDF3C) {
            p[0xB2CC] = 1;
            switch ((unsigned char)func_004D1B90(p, 1)) {
            case 1:
            case 2:
                ((Obj2F8 *)p)->m2F8(50);
                break;
            case 0:
                *(float *)(p + 0xB2BC) = D_005BDF3C - 1.0f;
                p[0xB2CC] = 0;
                break;
            }
        }
    }
}

extern "C" float D_0058AD80[];

extern "C" void func_004C89F0(char *p) {
    unsigned char ok;
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        (*(unsigned char *)(p + 0xB158))++;
        ok = 1;
        if ((unsigned int)(*(unsigned char *)(p + 0xB2C9) - 2) > 1) {
            ok = 0;
        }
        if (ok == 1) {
            p[0xB2CC] = 1;
            if (*(unsigned char *)(p + 0xB2D3) == 1) {
                p[0xB2D3] = 0;
                *(float *)(p + 0xB2A8) = D_0058AD80[*(int *)(p + 0xB2C0)];
            }
        }
        ((ObjB *)p)->m300(20);
        break;
    case 1:
        if (((ObjB *)p)->m2EC() == 0x77) {
            ((ObjB *)p)->m2F8(0x17);
        }
        break;
    }
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

extern "C" float D_005BDDB8;

extern "C" {
void func_004C47D0(char *p) {
    extern int func_0024E800(char *);
    extern char D_0058AAA0[];
    extern int func_004D2610(char *, ...);
    extern void func_004D1AF0(char *, char *, int);
    extern void func_004CBBE0(char *, float);
    extern void func_004CBD90(char *);
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        (*(unsigned char *)(p + 0xB158))++;
        ((ObjB *)p)->m300(1);
        *(float *)(p + 0xB178) = D_005BDDB8;
        break;
    case 1:
        if ((unsigned char)func_004D2610(p, 1) == 1) {
            func_004CBD90(p);
            break;
        }
        func_004D1AF0(p, D_0058AAA0, 0);
        if (((Sub130 *)(p + 0x130))->m88()) {
            func_004CBBE0(p, 3.0f);
        }
        if ((unsigned char)func_0024E800(*(char **)(p + 0xAB00)) == 1) {
            ((ObjB *)p)->m300(1);
        }
        *(float *)(p + 0xB178) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0xB178) < 0.0f) {
            ((ObjB *)p)->m2F8(0x17);
        }
        break;
    }
}
}

extern "C" {
void func_004C4BA0(char *p) {
    extern int func_0024E800(char *);
    extern char D_0058AAA0[];
    extern int func_004D2610(char *, ...);
    extern void func_004D1AF0(char *, char *, int);
    extern void func_004CBBE0(char *, float);
    extern void func_004CBD90(char *);
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        (*(unsigned char *)(p + 0xB158))++;
        ((ObjB *)p)->m300(1);
        *(int *)(p + 0xB17C) = 0;
        *(int *)(p + 0xB184) = 0;
        break;
    case 1:
        if ((unsigned char)func_004D2610(p) == 1) {
            func_004CBD90(p);
            break;
        }
        func_004D1AF0(p, D_0058AAA0, 0);
        if (((Sub130 *)(p + 0x130))->m88()) {
            func_004CBBE0(p, 3.0f);
        }
        if ((unsigned char)func_0024E800(*(char **)(p + 0xAB00)) == 1) {
            if (*(int *)(p + 0xB17C) == 0) {
                *(int *)(p + 0xB17C) = 1;
                *(int *)(p + 0xB184) = *(int *)(p + 0xB184) != 1;
            } else if (mt_rand() & 1) {
                *(int *)(p + 0xB17C) = 0;
            }
            if (*(int *)(p + 0xB17C) == 0) {
                ((ObjB *)p)->m300(1);
            } else if (*(int *)(p + 0xB184) == 0) {
                ((ObjB *)p)->m300(0x59);
            } else {
                ((ObjB *)p)->m300(0x5A);
            }
        }
        break;
    }
}
}

extern "C" {
void func_004C5200(char *p) {
    extern int func_0024E800(char *);
    extern char D_0058AAA0[];
    extern int func_004D2610(char *, ...);
    extern void func_004D1AF0(char *, char *, int);
    extern void func_004CBBE0(char *, float);
    extern void func_004CBD90(char *);
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        (*(unsigned char *)(p + 0xB158))++;
        ((ObjB *)p)->m300(0x59);
        *(int *)(p + 0xB184) = 0;
        break;
    case 1:
        if ((unsigned char)func_004D2610(p) == 1) {
            func_004CBD90(p);
            break;
        }
        func_004D1AF0(p, D_0058AAA0, 0);
        if (((Sub130 *)(p + 0x130))->m88()) {
            func_004CBBE0(p, 3.0f);
        }
        if ((unsigned char)func_0024E800(*(char **)(p + 0xAB00)) == 1) {
            *(int *)(p + 0xB184) = *(int *)(p + 0xB184) >= 2 ? 0 : *(int *)(p + 0xB184) + 1;
            switch (*(int *)(p + 0xB184)) {
            case 0:
                if (mt_rand() & 1) {
                    ((ObjB *)p)->m300(0x59);
                } else {
                    ((ObjB *)p)->m300(0x5A);
                }
                break;
            case 1:
                ((ObjB *)p)->m300(0);
                break;
            case 2:
                ((ObjB *)p)->m300(1);
                break;
            }
        }
        break;
    }
}
}

extern "C" {
void func_004C68F0(char *p) {
    extern int func_0024E780(char *, int, int);
    extern int func_004D2D90(char *);
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p) != 0) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m300(0x27);
        }
        break;
    case 1:
        if ((unsigned char)func_0024E780(*(char **)(p + 0xAB00), 1, 0) == 1) {
            ((ObjB *)p)->m2F8(0x3D);
        }
        break;
    }
}
}

class ObjT1C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

extern "C" char D_01CAFF0C[];

extern "C" void func_004CC3A0(char *, char *, char *, char *);

extern "C" void func_004C39E0(char *p, int a, int b, int c, int d) {
    char *g;
    char *m;
    char *n;
    float t;
    *(int *)(p + 0x134) = a;
    *(int *)(p + 0x138) = b;
    *(int *)(p + 0x13C) = c;
    *(int *)(p + 0x140) = d;
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0 && *(ObjT1C **)(g + 0x10) != 0) {
        t = (*(ObjT1C **)(g + 0x10))->m1C();
    } else {
        t = 0.0f;
    }
    *(float *)(p + 0x144) = t;
    *(int *)(p + 0xB2C0) = ((Sub130 *)(p + 0x130))->m80(*(float *)(p + 0x144));
    *(short *)(p + 0x160) = 0;
    *(int *)(p + 0x164) = 0;
    *(int *)(p + 0x168) = 0;
    m = p;
    if (m != 0) {
        m += 0x40;
    }
    n = p;
    if (n != 0) {
        n += 0xD0;
    }
    func_004CC3A0(p, p + 0xE30, n, m);
    *(unsigned char *)(p + 0x14C) = 0;
    *(unsigned char *)(p + 0x14D) = 0;
    ((ObjB *)p)->m2F8(0x16);
}

extern "C" float D_005BDDC4;

extern "C" {
void func_004C5460(char *p) {
    extern int func_004D2610(char *, ...);
    extern void func_004CBD90(char *);
    extern void func_004D1AF0(char *, char *, int);
    extern char D_0058AAA0[];
    extern void func_004CBBE0(char *, float);
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        ((ObjB *)p)->m300(0);
        *(float *)(p + 0xB178) = D_005BDDC4;
        break;
    case 1:
        if ((unsigned char)func_004D2610(p) == 1) {
            func_004CBD90(p);
            break;
        }
        func_004D1AF0(p, D_0058AAA0, 0);
        if (((Sub130 *)(p + 0x130))->m88() != 0) {
            func_004CBBE0(p, 3.0f);
        }
        *(float *)(p + 0xB178) = *(float *)(p + 0xB178) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xB178) < 0.0f) {
            ((ObjB *)p)->m2F8(0x17);
        }
        break;
    }
}
}

extern "C" {
void func_004C67A0(char *p) {
    extern int func_004D2D90(char *);
    extern int func_0024E780(char *, int, int);
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p) != 0) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m300(0x5B);
        }
        break;
    case 1:
        if ((unsigned char)func_0024E780(*(char **)(p + 0xAB00), 1, 0) == 1) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m300(0x5C);
        }
        break;
    case 2:
        if ((unsigned char)func_0024E780(*(char **)(p + 0xAB00), 1, 0) == 1) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m2F8(0x29);
        }
        break;
    }
}
}

extern "C" float D_005BDF2C;

extern "C" {
void func_004C6C00(char *p) {
    extern int func_004D2D90(char *);
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p) != 0) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m300(0x28);
        }
        break;
    case 1:
        if (((ObjB *)p)->m2EC() == 0x77) {
            if (*(float *)(p + 0x164) < D_005BDF2C) {
                *(unsigned char *)(p + 0xB158) = 3;
                ((ObjB *)p)->m300(0x2A);
            } else {
                *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
                ((ObjB *)p)->m300(0x29);
            }
        }
        break;
    case 2:
        if (*(float *)(p + 0x164) < D_005BDF2C) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m300(0x2A);
        } else if (((ObjB *)p)->m2EC() == 0x77) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m300(0x2A);
        }
        break;
    case 3:
        if (((ObjB *)p)->m2EC() == 0x77) {
            ((ObjB *)p)->m2F8(0x17);
        }
        break;
    }
}
}

extern "C" void func_00330BD0(char *, int, char *, int, int);

extern "C" char D_01DFABA0[];

extern "C" unsigned char D_005BDDD8[8];

extern "C" signed char D_005BDDC8[8];

extern "C" signed char D_005BDDD0[8];

extern "C" float D_005BDD98;

extern "C" float D_0058ADA0[];

extern "C" void func_004D1F90(char *);

extern "C" void func_004D30B0(char *);

class ObjB158 {
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
    virtual void m2F8(int);
    virtual void d2FC();
    virtual void m300(int);
};

#define FB(t, o) (*(t *)(p + (o)))

static inline void attach3(char *e, char *t) {
    *(char **)(e + 0x90) = t;
    *(unsigned char *)(e + 0x9A) = 3;
}

static inline int mode23(char *p) {
    unsigned char r = 1;
    if ((unsigned int)(FB(unsigned char, 0xB2C9) - 2) > 1) {
        r = 0;
    }
    return r;
}

extern "C" {
void func_004C8B20(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern void func_001AD140(char *);
    extern char *func_004D2740(char *);
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
        FB(unsigned char, 0xAD23) = 0xC;
        ((ObjB158 *)p)->m300(0x56);
        FB(unsigned char, 0xB2D4) = 1;
        FB(int, 0xB184) = D_005BDDD8[FB(int, 0xB2C0)];
        if (FB(char *, 0xB2F4) != 0) {
            func_001AD140(FB(char *, 0xB2F4));
        }
        FB(char *, 0xB2F4) = func_00207480(3, 0x332, 0, 0x10);
        if (FB(char *, 0xB2F4) != 0) {
            attach3(FB(char *, 0xB2F4), *(char **)(*(char **)(func_004D2740(p) + 4) + 0x104));
            *(unsigned char *)(FB(char *, 0xB2F4) + 0x3A) = 1;
        }
        if (FB(unsigned char, 0xB2C8) == 1) {
            func_00330BD0(D_01DFABA0, 0x27, p + 0x50, 0x23, 0);
            FB(unsigned char, 0xB18A) = 0;
        } else {
            func_00330BD0(D_01DFABA0, 0x2E, p + 0x50, 0x23, 0);
        }
        break;
    case 1:
        if (((ObjB158 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            if (!mode23(p)) {
                FB(unsigned char, 0xB2CC) = 1;
            }
            ((ObjB158 *)p)->m300(0x57);
            if (FB(unsigned char, 0xB2C8) == 1) {
                FB(float, 0xB178) = 240.0f;
                func_00330BD0(D_01DFABA0, 0x6C, p + 0x50, 0x23, 0);
                func_00330BD0(D_01DFABA0, 0x63, p + 0x50, 0x23, 0);
            } else {
                FB(float, 0xB178) = 60.0f;
                func_00330BD0(D_01DFABA0, 0x2D, p + 0x50, 0x23, 0);
            }
        }
        break;
    case 2:
        FB(float, 0xB178) = FB(float, 0xB178) - FB(float, 0x10);
        if (FB(unsigned char, 0xB2C8) == 1 && FB(unsigned char, 0xB18A) == 0 && FB(float, 0xB178) < 240.0f - D_005BDD98) {
            FB(unsigned char, 0xB18A) = 1;
            func_00330BD0(D_01DFABA0, 0x63, p + 0x50, 0x23, 0);
            func_00330BD0(D_01DFABA0, 0x25, p + 0x50, 0x23, 0);
        }
        if (FB(float, 0xB178) < 0.0f) {
            if (FB(char *, 0xB2F4) != 0) {
                func_001AD140(FB(char *, 0xB2F4));
            }
            FB(char *, 0xB2F8) = func_00207480(3, 0x333, 0, 0x10);
            if (FB(char *, 0xB2F8) != 0) {
                attach3(FB(char *, 0xB2F8), *(char **)(*(char **)(func_004D2740(p) + 4) + 0x104));
                *(unsigned char *)(FB(char *, 0xB2F8) + 0x3A) = 1;
            }
            FB(unsigned char, 0xAD23) = 5;
            if (FB(unsigned char, 0xB2C8) == 2) {
                FB(unsigned char, 0xB2D3) = 1;
                FB(unsigned char, 0xB2D9) = 1;
                FB(float, 0xB2A4) = D_0058ADA0[FB(int, 0xB2C0)];
                ((ObjB158 *)p)->m2F8(0x17);
                FB(signed char, 0xB2CB) = D_005BDDC8[FB(int, 0xB2C0)];
                func_004D1F90(p);
                if (mode23(p) == 1 && FB(char *, 0xB300) == 0) {
                    FB(char *, 0xB300) = func_00207480(3, 0x398, 0, 0x10);
                    if (FB(char *, 0xB300) != 0) {
                        attach3(FB(char *, 0xB300), *(char **)(*(char **)(func_004D2740(p) + 0x38) + 0x104));
                        *(unsigned char *)(FB(char *, 0xB300) + 0x3A) = 1;
                    }
                }
            } else {
                FB(int, 0xB2C4) = D_005BDDD0[FB(int, 0xB2C0)];
                ((ObjB158 *)p)->m2F8(0x17);
            }
        }
        break;
    }
    func_004D30B0(p);
}
}

extern "C" int func_0034BBE0(int, char *);

extern "C" char *D_0058AC00[][3];

extern "C" char *D_0058AD00[][3];

extern "C" float D_0058AF20[];

extern "C" int func_004D2BB0(char *);

extern "C" int func_004D2CB0(char *);

extern "C" int func_004D2E40(char *, int, char *);

extern "C" void func_004C83A0(char *p) {
    float w[12];
    char *e;
    char *q;
    int n;
    int st = *(unsigned char *)(p + 45400);
    switch (st) {
    case 0:
        *(char *)(p + 45400) = st + 1;
        ((V300_1_ii *)p)->m(81);
        *(char *)(p + 45777) = 0;
        *(char *)(p + 45450) = 0;
        return;
    case 1:
        if (*(unsigned char *)(p + 45777) == 1) {
            if (*(unsigned char *)(p + 45450) == 0) {
                *(char *)(p + 45450) = 1;
                func_00330BD0(D_01DFABA0, 90, (p + 80), 35, 0);
            }
            *(float *)(p + 45728) = *(float *)(p + 45728) + *(float *)(p + 16);
            if (*(float *)(p + 45728) > D_0058AF20[*(int *)(p + 45760)]) {
                if ((unsigned char)func_004D2BB0(p) == 1 || (unsigned char)func_004D2CB0(p) == 1) {
                    ((V2F8_1_ii *)p)->m(62);
                    return;
                }
                if (*(unsigned char *)(p + 45784) == 0) {
                    e = D_0058AC00[*(int *)(p + 45760)][*(unsigned char *)(p + 45768)];
                } else {
                    e = D_0058AD00[*(int *)(p + 45760)][*(unsigned char *)(p + 45768)];
                }
                n = 0;
                if (*(int *)e != 0) {
                    q = e;
                    do {
                        w[n] = *(float *)(q + 4);
                        n++;
                        q += 8;
                    } while (*(int *)q != 0);
                }
                ((V2F8_1_ii *)p)->m((unsigned char)func_004D2E40(p, *(unsigned char *)(e + func_0034BBE0(n, (char *)w) * 8), e));
            }
            break;
        }
        if (((V2EC_1_ii *)p)->m(1) == 119) ((V2F8_1_ii *)p)->m(23);
        break;
    }
}

extern "C" void func_002F2D30(char *, char *);

extern "C" char D_00587ECC[];

class O4C4 {
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
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC();
    virtual float m1E0(unsigned int);
};

extern "C" void func_004C4630(char *p) {
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        switch (*(unsigned char *)(p + 0xB2C8)) {
        case 0:
        case 1:
            func_00330BD0(D_01DFABA0, 0x3C, p + 0x50, 0x23, 0);
            break;
        case 2:
            func_00330BD0(D_01DFABA0, 0x31, p + 0x50, 0x23, 0);
            break;
        }
        *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) = (int)((O4C4 *)p)->m1E0((unsigned int)*(float *)(D_00587ECC + *(unsigned char *)(p + 0xB2C8) * 0x54));
        *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = 0;
        if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
            func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
        }
        break;
    case 1:
        *(unsigned char *)(p + 4) = 2;
        break;
    }
}

extern "C" float D_005BDD90;

extern "C" float D_005BDD94;

extern "C" float D_005BDE10;

extern "C" float func_004D32F0(char *);

class O4C6 {
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
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual void u1FC();
    virtual void u200();
    virtual void u204();
    virtual void u208();
    virtual void u20C();
    virtual void u210();
    virtual void u214();
    virtual void u218();
    virtual void u21C();
    virtual void u220();
    virtual void u224();
    virtual void u228();
    virtual void u22C();
    virtual void u230();
    virtual void u234();
    virtual void u238();
    virtual void u23C();
    virtual void u240();
    virtual void u244();
    virtual void u248();
    virtual void u24C();
    virtual void u250();
    virtual void u254();
    virtual void u258();
    virtual void u25C();
    virtual void u260();
    virtual void u264();
    virtual void u268();
    virtual void u26C();
    virtual void u270();
    virtual void u274();
    virtual void u278();
    virtual void u27C();
    virtual void u280();
    virtual void u284();
    virtual void u288();
    virtual void u28C();
    virtual void u290();
    virtual void u294();
    virtual void u298();
    virtual void u29C();
    virtual void u2A0();
    virtual void u2A4();
    virtual void u2A8();
    virtual void u2AC();
    virtual void u2B0();
    virtual void u2B4();
    virtual void u2B8();
    virtual void u2BC();
    virtual void u2C0();
    virtual void u2C4();
    virtual void u2C8();
    virtual void u2CC();
    virtual void u2D0();
    virtual void u2D4();
    virtual void u2D8();
    virtual void u2DC();
    virtual void u2E0();
    virtual void u2E4();
    virtual void u2E8();
    virtual int m2EC();
    virtual void u2F0();
    virtual void u2F4();
    virtual void m2F8(int);
    virtual void u2FC();
    virtual void m300(int);
};

extern "C" {
void func_004C69C0(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_004D2D90(char *);
    extern char *func_004D2740(char *);
    extern int func_004D2890(char *, float *, int, float);
    float v[4];
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p) != 0) {
            (*(unsigned char *)(p + 0xB158))++;
            ((O4C6 *)p)->m300(0x54);
            func_00207480(3, 0x32B, *(char **)(*(char **)(func_004D2740(p) + 4) + 0x104), 0x10);
        }
        break;
    case 1:
        if (((O4C6 *)p)->m2EC() == 0x77) {
            (*(unsigned char *)(p + 0xB158))++;
            *(float *)(p + 0xB178) = 60.0f;
            *(float *)(p + 0xB2B0) = func_004D32F0(p);
            ((O4C6 *)p)->m300(0x55);
        }
        break;
    case 2:
        v[0] = 0.0f;
        v[1] = D_005BDD90;
        v[2] = D_005BDD94;
        v[3] = 1.0f;
        if ((unsigned char)func_004D2890(p, v, 1, D_005BDE10) == 1) {
            (*(unsigned char *)(p + 0xB158))++;
            *(short *)(p + 0x90) = (unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x84) / 6.283185f) + 32767 + 1;
            func_00207480(3, 0x32B, *(char **)(*(char **)(func_004D2740(p) + 4) + 0x104), 0x10);
        }
        break;
    case 3:
        if (((O4C6 *)p)->m2EC() == 0x77) {
            ((O4C6 *)p)->m2F8(0x3D);
        }
        break;
    }
}
}

extern "C" char *func_00279290(char *);

extern "C" void func_001A5CC0(char *);

extern "C" void func_001A5B90(char *);

extern "C" void func_00138340(unsigned char);

class Self4D0 {
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

class Mdl4D0 {
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

#define ON(o) func_001A5CC0(func_00279290(p + (o)))

#define OFF(o) func_001A5B90(func_00279290(p + (o)))

#define UPD(o) ((Mdl4D0 *)(p + (o)))->mCC(p + 0x5A20)

extern "C" void func_004D0610(char *p) {
    unsigned char c;
    char buf[7];
    if (*(unsigned char *)(p + 0xB2CF) != 1) return;
    switch (*(unsigned char *)(p + 0xB2C9)) {
    case 0:
        if ((unsigned char)((Self4D0 *)p)->m200(&c, buf, *(int *)(*(char **)(p + 0xE78) + 0x104) + 0x30) == 1) {
            ON(0x11C0);
            ON(0x17C0);
            ON(0x3BC0);
            ON(0x35C0);
            if (*(unsigned char *)(p + 0xB2C8) == 2) ON(0x41C0);
            func_00138340(c);
        } else {
            OFF(0x11C0);
            OFF(0x17C0);
            OFF(0x3BC0);
            OFF(0x35C0);
            if (*(unsigned char *)(p + 0xB2C8) == 2) OFF(0x41C0);
        }
        UPD(0x11C0);
        UPD(0x17C0);
        UPD(0x3BC0);
        UPD(0x35C0);
        if (*(unsigned char *)(p + 0xB2C8) == 2) UPD(0x41C0);
        break;
    case 1:
        if ((unsigned char)((Self4D0 *)p)->m200(&c, buf, *(int *)(*(char **)(p + 0xE78) + 0x104) + 0x30) == 1) {
            ON(0x11C0);
            ON(0x17C0);
            ON(0x3BC0);
            ON(0x35C0);
            ON(0x53C0);
            func_00138340(c);
        } else {
            OFF(0x11C0);
            OFF(0x17C0);
            OFF(0x3BC0);
            OFF(0x35C0);
            OFF(0x53C0);
        }
        UPD(0x11C0);
        UPD(0x17C0);
        UPD(0x53C0);
        UPD(0x3BC0);
        UPD(0x35C0);
        break;
    case 2:
        if ((unsigned char)((Self4D0 *)p)->m200(&c, buf, *(int *)(*(char **)(p + 0xF74) + 0x104) + 0x30) == 1) {
            ON(0x1DC0);
            ON(0x29C0);
            if (*(unsigned char *)(p + 0xB120) == 0) {
    ON(0x2FC0);
            } else {
    ON(0x23C0);
            }
            ON(0x35C0);
            if (*(unsigned char *)(p + 0xB2C8) == 2) ON(0x41C0);
            func_00138340(c);
        } else {
            OFF(0x1DC0);
            OFF(0x29C0);
            if (*(unsigned char *)(p + 0xB120) == 0) {
    OFF(0x2FC0);
            } else {
    OFF(0x23C0);
            }
            OFF(0x35C0);
            if (*(unsigned char *)(p + 0xB2C8) == 2) OFF(0x41C0);
        }
        UPD(0x1DC0);
        UPD(0x29C0);
        if (*(unsigned char *)(p + 0xB120) == 0) {
            UPD(0x2FC0);
        } else {
            UPD(0x23C0);
        }
        UPD(0x35C0);
        if (*(unsigned char *)(p + 0xB2C8) == 2) UPD(0x41C0);
        break;
    case 3:
        if ((unsigned char)((Self4D0 *)p)->m200(&c, buf, *(int *)(*(char **)(p + 0x10C8) + 0x104) + 0x30) == 1) {
            ON(0x47C0);
            ON(0x4DC0);
            ON(0x53C0);
            ON(0x3BC0);
            ON(0x35C0);
            func_00138340(c);
        } else {
            OFF(0x47C0);
            OFF(0x4DC0);
            OFF(0x53C0);
            OFF(0x3BC0);
            OFF(0x35C0);
        }
        UPD(0x47C0);
        UPD(0x4DC0);
        UPD(0x53C0);
        UPD(0x3BC0);
        UPD(0x35C0);
        break;
    }
}

class W4D3A {
public:
    virtual void d8(); virtual void dC();
    virtual int m10();
    virtual int m14();
    virtual int m18();
};

class W4D3B {
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
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4();
    virtual int m2F8(int);
    virtual void d2FC(); virtual void d300(); virtual void d304(); virtual void d308(); virtual void d30C();
    virtual int m310();
};

extern "C" void func_004D33C0(char *p0, int p1) {
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int tmp21;
    v0 = p0;
    v1 = (char *)p1;
    if (3 != *(unsigned char *)(p0 + 333)) {
        *(char *)(v0 + 364) = *(signed char *)(v1 + 0);
        *(char *)(v0 + 365) = *(signed char *)(v1 + 1);
        *(char *)(v0 + 366) = *(signed char *)(v1 + 2);
        *(float *)(v0 + 368) = *(float *)(v1 + 4);
        *(float *)(v0 + 372) = *(float *)(v1 + 8);
        *(float *)(v0 + 376) = *(float *)(v1 + 12);
        *(float *)(v0 + 380) = *(float *)(v1 + 16);
        *(float *)(v0 + 384) = *(float *)(v1 + 20);
        *(char *)(v0 + 388) = *(signed char *)(v1 + 24);
        *(float *)(v0 + 392) = *(float *)(v1 + 28);
        *(char *)(v0 + 396) = *(signed char *)(v1 + 32);
        *(float *)(v0 + 400) = *(float *)(v1 + 36);
        *(float *)(v0 + 404) = *(float *)(v1 + 40);
        *(float *)(v0 + 408) = *(float *)(v1 + 44);
        *(char *)(v0 + 412) = *(unsigned char *)(v1 + 48);
        *(int *)(v0 + 416) = *(int *)(v1 + 52);
        *(float *)(v0 + 420) = *(float *)(v1 + 56);
        *(char *)(v0 + 424) = *(signed char *)(v1 + 60);
        *(char *)(v0 + 425) = *(signed char *)(v1 + 61);
        *(char *)(v0 + 426) = *(signed char *)(v1 + 62);
        tmp21 = ((W4D3A *)*(char **)(v0 + 316))->m14();
        if (1 == (tmp21 & 255)) {
            ((W4D3B *)v0)->m2F8(16);
        }
        v4 = ((W4D3A *)*(char **)(v0 + 316))->m10();
        v3 = (v4 & 255);
        switch (v3) {
        case 0:
            break;
        case 1:
            v4 = ((W4D3A *)*(char **)(v0 + 316))->m18();
            if ((v4 & 255) != 0) {
                v4 = ((W4D3B *)v0)->m2F8(8);
            }
            break;
        }
        v5 = *(signed char *)(v1 + 2);
        switch (v5) {
        case 0:
            break;
        case 1:
            v4 = ((W4D3B *)v0)->m310();
            v2 = (v4 & 255);
            switch (v2) {
            case 0:
                *(int *)(v0 + 0x5A10) = 0x41200000;
                *(char *)(v0 + 0x59CC) = 1;
                break;
            case 2:
                break;
            }
            break;
        }
    }
}

struct M207 { float m[16]; };

extern "C" float D_005BDE14;

extern "C" float D_005BDE0C;

extern "C" float D_005BDE08;

class W4C7 {
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
    virtual void m2F8(int);
    virtual void d2FC();
    virtual void m300(int);
};

extern "C" {
void func_004C7E50(char *p) {
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    extern void func_00104C00(char *, char *, char *);
    extern void func_00105760(float *, float *, float);
    extern int func_004D2D90(char *);
    extern char *func_004D2740(char *);
    extern int func_004D2890(char *, float *, int, float);
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p) == 0) break;
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        ((W4C7 *)p)->m300(0x54);
        *(short *)(p + 0x90) = *(short *)(p + 0x160);
        break;
    case 1:
        if (((W4C7 *)p)->m2EC() != 0x77) break;
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        *(float *)(p + 0xB178) = D_005BDE14;
        func_00207480(3, 0x338, *(M207 **)(*(char **)(func_004D2740(p) + 4) + 0x104), 0x10);
        *(float *)(p + 0xB2B0) = func_004D32F0(p);
        ((W4C7 *)p)->m300(0x55);
        break;
    case 2:
        v[2] = -100.0f;
        v[3] = 1.0f;
        v[0] = 0.0f;
        v[1] = 0.0f;
        if ((unsigned char)func_004D2890(p, v, 1, D_005BDE0C) != 1) break;
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105760(m, m, 3.1415925f);
        func_00104C00((char *)m, *(char **)(*(char **)(func_004D2740(p) + 4) + 0x104), (char *)m);
        func_00207480(3, 0x338, (M207 *)m, 0x10);
        break;
    case 3:
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        ((W4C7 *)p)->m300(0x54);
        *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x84) / 6.283185f);
        break;
    case 4:
        if (((W4C7 *)p)->m2EC() != 0x77) break;
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        *(float *)(p + 0xB178) = D_005BDE08;
        break;
    case 5:
        *(float *)(p + 0xB178) = *(float *)(p + 0xB178) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xB178) < 0.0f) {
            if (*(unsigned char *)(p + 0xB154) == 0x31) ((W4C7 *)p)->m2F8(0x17);
            else ((W4C7 *)p)->m2F8(0x29);
        }
        break;
    }
}
}

extern "C" float D_005BDE98;

extern "C" float D_005BDE9C;

extern "C" float D_005BDEA0;

extern "C" float D_005BDEA4;

extern "C" float D_005BDEA8;

class O4C6D {
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
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual void u1FC();
    virtual void u200();
    virtual void u204();
    virtual void u208();
    virtual void u20C();
    virtual void u210();
    virtual void u214();
    virtual void u218();
    virtual void u21C();
    virtual void u220();
    virtual void u224();
    virtual void u228();
    virtual void u22C();
    virtual void u230();
    virtual void u234();
    virtual void u238();
    virtual void u23C();
    virtual void u240();
    virtual void u244();
    virtual void u248();
    virtual void u24C();
    virtual void u250();
    virtual void u254();
    virtual void u258();
    virtual void u25C();
    virtual void u260();
    virtual void u264();
    virtual void u268();
    virtual void u26C();
    virtual void u270();
    virtual void u274();
    virtual void u278();
    virtual void u27C();
    virtual void u280();
    virtual void u284();
    virtual void u288();
    virtual void u28C();
    virtual void u290();
    virtual void u294();
    virtual void u298();
    virtual void u29C();
    virtual void u2A0();
    virtual void u2A4();
    virtual void u2A8();
    virtual void u2AC();
    virtual void u2B0();
    virtual void u2B4();
    virtual void u2B8();
    virtual void u2BC();
    virtual void u2C0();
    virtual void u2C4();
    virtual void u2C8();
    virtual void u2CC();
    virtual void u2D0();
    virtual void u2D4();
    virtual void u2D8();
    virtual void u2DC();
    virtual void u2E0();
    virtual void u2E4();
    virtual void u2E8();
    virtual int m2EC();
    virtual void u2F0();
    virtual void u2F4();
    virtual void m2F8(int);
    virtual void u2FC();
    virtual void m300(int);
};

extern "C" {
void func_004C6DF0(char *p) {
    extern void func_00105760(float *, float *, float);
    extern int func_004D2D90(char *);
    float m[16] __attribute__((aligned(16)));
    float n[16] __attribute__((aligned(16)));
    float f;
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p) != 0) {
            if (*(int *)(p + 0xB280) != 0) {
                ((O4C6D *)p)->m2F8(0x17);
            } else {
                (*(unsigned char *)(p + 0xB158))++;
                ((O4C6D *)p)->m300(0x66);
            }
        }
        break;
    case 1:
        if (((O4C6D *)p)->m2EC() == 0x77) {
            (*(unsigned char *)(p + 0xB158))++;
            ((O4C6D *)p)->m300(0x67);
            *(float *)(p + 0xB170) = D_005BDE98;
            *(float *)(p + 0xB174) = 0.0f;
        }
        break;
    case 2:
        f = *(float *)(p + 0xB170) + D_005BDE9C;
        f = f < D_005BDEA0 ? f : D_005BDEA0;
        *(float *)(p + 0xB170) = f;
        *(float *)(p + 0xB174) = *(float *)(p + 0xB174) + f;
        *(float *)(p + 0xB160) = 0.0f;
        *(float *)(p + 0xB164) = 0.0f;
        *(float *)(p + 0xB168) = *(float *)(p + 0xB170);
        *(float *)(p + 0xB16C) = 1.0f;
        __asm__ volatile("lqc2 $vf5, 0x0(%1)
	lqc2 $vf4, 0x30(%0)
	vmove.xyz $vf4, $vf5
	sqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(p + 0xB160) : "memory");
        func_00105760(n, m, 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f));
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(p + 0xB160), "r"(n) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0xB160) : "memory");
        *(float *)(p + 0x5C) = 1.0f;
        if (*(float *)(p + 0x164) < D_005BDEA8) {
            (*(unsigned char *)(p + 0xB158))++;
            ((O4C6D *)p)->m300(0x68);
        } else if (!(*(float *)(p + 0xB174) < D_005BDEA4)) {
            (*(unsigned char *)(p + 0xB158))++;
            ((O4C6D *)p)->m300(0x68);
        }
        break;
    case 3:
        if (((O4C6D *)p)->m2EC() == 0x77) {
            ((O4C6D *)p)->m2F8(0x17);
        }
        break;
    }
}
}

extern "C" float D_005BDF0C;

extern "C" int func_0021CAD0(char *);

class P4D41 {
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
    virtual int m2E8();
    virtual void d2EC(); virtual void d2F0(); virtual void d2F4();
    virtual void m2F8(int);
};

class Q4D41 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68();
    virtual void m6C();
    virtual void m70();
    virtual void m74();
    virtual short m78(short, short);
};

class R4D41 {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual int m14();
};

static inline unsigned char bitA4D41(unsigned char s) { unsigned char r = 0; if ((unsigned int)(s - 0x17) < 0x1C && ((1 << (s - 0x17)) & 0x80003FD)) r = 1; return r; }

static inline unsigned char inA4D41(unsigned char s) { unsigned char r = 1; if (!bitA4D41(s) && s != 0x42) r = 0; return r; }

static inline unsigned char inB4D41(unsigned char s) { unsigned char r = 0; if ((unsigned int)(s - 0x17) < 0xA && ((1 << (s - 0x17)) & 0x3FD)) r = 1; return r; }

static inline int inC4D41(unsigned char s) { unsigned char r = 1; if ((unsigned int)(s - 2) > 1) r = 0; return r; }

extern "C" {
void func_004D4120(char *p, signed char k) {
    extern void func_004CBD90(char *);
    char *t;
    unsigned char r;
    if (*(unsigned char *)(p + 4) != 0 && *(unsigned char *)(p + 0x14D) != 3 && !(unsigned char)((R4D41 *)*(char **)(p + 0x13C))->m14() && !(unsigned char)((P4D41 *)p)->m2E8()) {
        if (k == 0) {
            ((Q4D41 *)(p + 0x130))->m6C();
            ((Q4D41 *)(p + 0x130))->m74();
            if (*(float *)(p + 0x164) < D_005BDF0C) {
                ((Q4D41 *)(p + 0x130))->m70();
                if ((short)(((Q4D41 *)(p + 0x130))->m78(*(short *)(p + 0x160), *(short *)(*(char **)(p + 0x140) + 0x50)) + 0x2000) < 0x4000) {
                    if (inA4D41(*(unsigned char *)(p + 0xB154)) == 1) func_004CBD90(p);
                }
            } else {
                t = *(char **)(*(char **)D_01CAFF0C + 0xC);
                if (func_0021CAD0(t) != 0) {
                    switch ((unsigned char)func_0021CAD0(t)) {
                    case 0xF: case 0x17:
                        if (inB4D41(*(unsigned char *)(p + 0xB154)) == 1 && !(unsigned char)inC4D41(*(unsigned char *)(p + 0xB2C9))) ((P4D41 *)p)->m2F8(0x42);
                        break;
                    }
                }
            }
        } else if (k == 1) {
            if (inB4D41(*(unsigned char *)(p + 0xB154)) == 1 && !(unsigned char)inC4D41(*(unsigned char *)(p + 0xB2C9))) ((P4D41 *)p)->m2F8(0x42);
        }
    }
}
}

extern "C" char *D_0058AA60[][3];

class V4C4 {
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
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4();
    virtual void m2F8(int);
    virtual void d2FC();
    virtual void m300(int);
};

class W4C4 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual int m88();
    virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8();
    virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4(); virtual void dC8();
    virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4(); virtual void dE8();
    virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104(); virtual void d108();
    virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C();
    virtual void m120(float *);
};

extern "C" {
void func_004C43B0(char *p) {
    extern void func_004CBD90(char *);
    extern int func_004D2610(char *);
    extern void func_004CBBE0(char *, float);
    float w[7];
    float f;
    char *e;
    char *q;
    int n;
    unsigned char c;
    int i;
    char *r;
    unsigned char b;
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        *(unsigned char *)(p + 0xB158) += 1;
        ((V4C4 *)p)->m300(0);
        return;
    case 1:
        ((W4C4 *)*(char **)((*(char **)D_01CAFF0C) + 0xC))->m120(&f);
        if (f <= 0.0f) {
            ((V4C4 *)p)->m2F8(0x38);
            return;
        }
        if ((unsigned char)func_004D2BB0(p) == 1) {
            ((V4C4 *)p)->m2F8(0x39);
            return;
        }
        if ((unsigned char)func_004D2610(p) == 1) {
            func_004CBD90(p);
            return;
        }
        if ((unsigned char)func_004D2CB0(p) == 1) {
            ((V4C4 *)p)->m2F8(0x44);
            return;
        }
        if (((W4C4 *)(p + 0x130))->m88() != 0) {
            func_004CBBE0(p, 3.0f);
            return;
        }
        e = D_0058AA60[*(int *)(p + 0xB2C0)][*(unsigned char *)(p + 0xB2C8)];
        n = 0;
        if (*(int *)e != 0) {
            q = e;
            do {
                w[n] = *(float *)(q + 4);
                n++;
                q += 8;
            } while (*(int *)q != 0);
        }
        c = *(unsigned char *)(e + func_0034BBE0(n, (char *)w) * 8);
        b = *(unsigned char *)(p + 0xB156);
        if (c == b) {
            i = 0;
            if (*(int *)e != 0) {
                r = e;
                do {
                    if (b != *(int *)r) {
                        c = *(unsigned char *)(e + i * 8);
                        break;
                    }
                    r += 8;
                    i++;
                } while (*(int *)r != 0);
            }
        }
        *(unsigned char *)(p + 0xB156) = c;
        ((V4C4 *)p)->m2F8(c);
        break;
    }
}
}

extern "C" float D_005BDF10;

extern "C" float D_00587ED0[][3][21];

extern "C" float D_00587ED4[][3][21];

class O4C8 {
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
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual void u1FC();
    virtual void u200();
    virtual void u204();
    virtual void u208();
    virtual void u20C();
    virtual void u210();
    virtual void u214();
    virtual void u218();
    virtual void u21C();
    virtual void u220();
    virtual void u224();
    virtual void u228();
    virtual void u22C();
    virtual void u230();
    virtual void u234();
    virtual void u238();
    virtual void u23C();
    virtual void u240();
    virtual void u244();
    virtual void u248();
    virtual void u24C();
    virtual void u250();
    virtual void u254();
    virtual void u258();
    virtual void u25C();
    virtual void u260();
    virtual void u264();
    virtual void u268();
    virtual void u26C();
    virtual void u270();
    virtual void u274();
    virtual void u278();
    virtual void u27C();
    virtual void u280();
    virtual void u284();
    virtual void u288();
    virtual void u28C();
    virtual void u290();
    virtual void u294();
    virtual void u298();
    virtual void u29C();
    virtual void u2A0();
    virtual void u2A4();
    virtual void u2A8();
    virtual void u2AC();
    virtual void u2B0();
    virtual void u2B4();
    virtual void u2B8();
    virtual void u2BC();
    virtual void u2C0();
    virtual void u2C4();
    virtual void u2C8();
    virtual void u2CC();
    virtual void u2D0();
    virtual void u2D4();
    virtual void u2D8();
    virtual void u2DC();
    virtual void u2E0();
    virtual void u2E4();
    virtual void u2E8();
    virtual int m2EC();
    virtual void u2F0();
    virtual void u2F4();
    virtual void m2F8(int);
    virtual void u2FC();
    virtual void m300(int);
};

static inline int is4C8(char *p) {
    unsigned char r = 1;
    if ((unsigned int)(*(unsigned char *)(p + 0xB2C9) - 2) > 1) {
        r = 0;
    }
    return r;
}

extern "C" {
void func_004C8160(char *p) {
    extern void func_0034B8C0(char *, short *, int);
    extern void func_004CBD90(char *);
    extern int func_004D2610(char *);
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        (*(unsigned char *)(p + 0xB158))++;
        ((O4C8 *)p)->m300(0x3D);
        *(int *)(p + 0xB288) = 0;
        break;
    case 1:
        *(short *)(p + 0xB150) = *(short *)(p + 0x160) - *(short *)(p + 0x90);
        func_0034B8C0(p + 0x90, (short *)(p + 0xB150), (int)(16384.0f * *(float *)(p + 0x10)));
        if (!((*(float *)(p + 0xB288) += *(float *)(p + 0x10)) <= D_005BDF10) && (unsigned char)func_004D2610(p) == 1) {
            func_004CBD90(p);
            *(int *)(p + 0xB288) = 0;
            break;
        }
        *(float *)(p + 0xAF9C) = *(D_00587ED4[(unsigned char)is4C8(p)][*(unsigned char *)(p + 0xB2C8)]);
        *(float *)(p + 0xAF98) = *(D_00587ED0[(unsigned char)is4C8(p)][*(unsigned char *)(p + 0xB2C8)]);
        if (((O4C8 *)p)->m2EC() == 0x77) {
            ((O4C8 *)p)->m2F8(0x17);
            *(int *)(p + 0xB288) = 0;
        }
        break;
    }
}
}

extern "C" unsigned char func_0024E810(char *);

class O4D0F {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0();
    virtual float *mC4();
};

extern "C" {
void func_004D0F20(char *p) {
    extern void func_00105760(float *, float *, float);
    extern unsigned char func_0024E800(char *);
    float n[16] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float *v;
    if (func_0024E810(*(char **)(p + 0xAB00)) == 0 && func_0024E800(*(char **)(p + 0xAB00)) == 0) {
        switch (*(unsigned char *)(p + 0xB2C9)) {
        case 0:
        case 1:
            v = ((O4D0F *)(p + 0x11C0))->mC4();
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xB130), "r"(v) : "memory");
            break;
        case 2:
            v = ((O4D0F *)(p + 0x1DC0))->mC4();
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xB130), "r"(v) : "memory");
            break;
        case 3:
            v = ((O4D0F *)(p + 0x47C0))->mC4();
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xB130), "r"(v) : "memory");
            break;
        }
    }
    if (*(unsigned char *)(p + 0xB2D6) == 1) {
        __asm__ volatile("lqc2 $vf4, 0x0(%2)
	mfc1 $t0, %0
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%1)" : : "f"(*(float *)(p + 0xB2AC)), "r"(p + 0xB130), "r"(p + 0xB130) : "t0", "memory");
        *(unsigned char *)(p + 0xB2D6) = 0;
    }
    __asm__ volatile("lqc2 $vf5, 0x0(%1)
	lqc2 $vf4, 0x30(%0)
	vmove.xyz $vf4, $vf5
	sqc2 $vf4, 0x30(%0)" : : "r"(n), "r"(p + 0xB130) : "memory");
    func_00105760(m, n, 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f));
    __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(p + 0xB140), "r"(m) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0xB140) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
}
}

extern "C" unsigned char D_005BDF38;

class O4C9 {
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
    virtual void m2F8(int);
    virtual void d2FC();
    virtual void m300(int);
};

class S4C9 {
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
    virtual void d84();
    virtual int m88();
};

static inline void attach4C9(char *e, char *t) {
    *(char **)(e + 0x90) = t;
    *(unsigned char *)(e + 0x9A) = 3;
}

extern "C" {
void func_004C9AB0(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern void func_001AD140(char *);
    extern void func_0034B8C0(char *, short *, short);
    extern void func_004CBBE0(float, char *);
    extern void func_004CBD90(char *);
    extern int func_004D2610(char *);
    extern char **func_004D2740(char *);
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
        ((O4C9 *)p)->m300(0x74);
        break;
    case 1:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x75);
            FB(int, 0xB184) = D_005BDF38;
            FB(char *, 0xB2FC) = func_00207480(3, 0x356, 0, 0x10);
            if (FB(char *, 0xB2FC) != 0) {
                attach4C9(FB(char *, 0xB2FC), *(char **)(*func_004D2740(p) + 0x104));
                *(unsigned char *)(FB(char *, 0xB2FC) + 0x3A) = 1;
            }
        }
        break;
    case 2:
        FB(short, 0xB150) = FB(short, 0x160) - FB(short, 0x90);
        func_0034B8C0(p + 0x90, (short *)(p + 0xB150), 16384.0f * FB(float, 0x10));
        if ((unsigned char)func_004D2BB0(p) == 1) {
            ((O4C9 *)p)->m2F8(0x39);
            break;
        }
        if ((unsigned char)func_004D2610(p) == 1) {
            func_004CBD90(p);
            break;
        }
        if (((S4C9 *)(p + 0x130))->m88() != 0) func_004CBBE0(3.0f, p);
        if (((O4C9 *)p)->m2EC() == 0x77) {
            if (--FB(int, 0xB184) <= 0) {
                FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
                ((O4C9 *)p)->m300(0x76);
                if (FB(char *, 0xB2FC) != 0) func_001AD140(FB(char *, 0xB2FC));
                FB(char *, 0xB2FC) = func_00207480(3, 0x357, 0, 0x10);
                if (FB(char *, 0xB2FC) != 0) {
                    attach4C9(FB(char *, 0xB2FC), *(char **)(*func_004D2740(p) + 0x104));
                    *(unsigned char *)(FB(char *, 0xB2FC) + 0x3A) = 1;
                }
            } else {
                ((O4C9 *)p)->m300(0x75);
            }
        }
        break;
    case 3:
        if (((O4C9 *)p)->m2EC() == 0x77) ((O4C9 *)p)->m2F8(0x17);
        break;
    }
}
}

extern "C" int func_0034B800(float, char *, char *, short, short);

extern "C" int func_002D9EB0(char *);

extern "C" void func_004E8DB0(float *, float *, int);

extern "C" float D_0058ADF0[];

extern "C" float D_005BDE34;

extern "C" short D_005BDE30;

extern "C" short D_005BDE32;

extern "C" {
void func_004C7130(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern char **func_004D2740(char *);
    extern int func_004D2D90(char *);
    extern void func_00105760(float, float *, float *);
    float d[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float n[16] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *e;
    char *pl;
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p)) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x2B);
            FB(float, 0xB178) = D_0058ADF0[FB(int, 0xB2C0)];
        }
        break;
    case 1:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            func_00207480(3, 0x323, *(char **)(func_004D2740(p)[0] + 0x104), 0x10);
            ((O4C9 *)p)->m300(0x2C);
            e = func_00207480(3, 0x349, *(char **)(func_004D2740(p)[0] + 0x104), 0x10);
            if (e != 0)
                *(float *)(e + 0x14) = FB(float, 0xACB4);
        }
        break;
    case 2:
        if ((FB(float, 0xB178) -= FB(float, 0x10)) < 0.0f) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            if ((unsigned char)func_0034B800(D_005BDE34, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, D_005BDE30 + FB(short, 0x90), D_005BDE32) == 1) {
                pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
                e = *(char **)(((char **)(pl + 0x1388))[func_002D9EB0(pl)] + 0x104) + 0x30;
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(e) : "memory");
            } else {
                v[2] = 500.0f;
                v[3] = 1.0f;
                v[0] = 0.0f;
                v[1] = 0.0f;
                __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(n), "r"(v) : "memory");
                func_00105760(6.283185f * ((float)FB(short, 0x90) / 65536.0f), m, n);
                __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(m) : "memory");
                __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(p + 0x50) : "memory");
                v[1] = *(float *)(*(char **)(func_004D2740(p)[1] + 0x104) + 0x34);
                v[3] = 1.0f;
            }
            __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(v), "r"(p + 0x50) : "memory");
            func_004E8DB0(v, d, 0);
        }
        break;
    case 3:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x2D);
        }
        break;
    case 4:
        if (((O4C9 *)p)->m2EC() == 0x77)
            ((O4C9 *)p)->m2F8(0x17);
        break;
    }
}
}

extern "C" void func_0024E7B0(char *, int, int);

extern "C" int func_0034B6B0(float, char *, char *, char *);

extern "C" void func_001ACC30(int, int, int, int, int);

extern "C" void func_0036DF10(char *, int, int, int, int, int);

extern "C" int D_005BE09C;

extern "C" char D_005BE1A8[8];

extern "C" float D_005BDDEC;

extern "C" float D_005BDDF0;

extern "C" float D_005BDDF4;

extern "C" float D_005BDDF8;

extern "C" float D_005BDDFC;

extern "C" float D_005BDE04;

extern "C" {
void func_004C9F50(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_0024E780(char *, int, int);
    extern char **func_004D2740(char *);
    extern int func_004D2D90(char *);
    extern int func_004D2890(float, char *, float *, int);
    float v[4];
    float f;
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p)) {
            if (FB(unsigned char, 0xB2C8) != 2) {
                ((O4C9 *)p)->m2F8(0x17);
                break;
            }
            if (FB(int, 0xB280) != 0) {
                ((O4C9 *)p)->m2F8(0x17);
                break;
            }
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x54);
            func_00207480(3, 0x32B, *(char **)(func_004D2740(p)[1] + 0x104), 0x10);
        }
        break;
    case 1:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            FB(float, 0xB178) = D_005BDE14;
            FB(float, 0xB2B0) = func_004D32F0(p);
            ((O4C9 *)p)->m300(0x55);
        }
        break;
    case 2:
        v[0] = 0.0f;
        v[1] = D_005BDE04;
        v[2] = 100.0f;
        v[3] = 1.0f;
        if ((unsigned char)func_004D2890(D_005BDE10, p, v, 0) == 1) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            FB(short, 0x90) = (unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x84) / 6.283185f) + 0x8000;
            func_00207480(3, 0x32B, *(char **)(func_004D2740(p)[1] + 0x104), 0x10);
        }
        break;
    case 3:
        FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
        ((O4C9 *)p)->m300(0x6F);
        FB(float, 0x64) = D_005BDDEC;
        break;
    case 4:
        FB(float, 0x54) -= FB(float, 0x64) * FB(float, 0x10);
        f = FB(float, 0x64) + D_005BDDF0 * FB(float, 0x10);
        FB(float, 0x64) = f < D_005BDDFC ? f : D_005BDDFC;
        if ((unsigned char)func_0024E780(FB(char *, 0xAB00), 1, 4) == 2) {
            func_0024E7B0(FB(char *, 0xAB00), 1, 4);
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            FB(float, 0x64) = D_005BDDF4;
        }
        break;
    case 5:
        FB(float, 0x54) -= FB(float, 0x64) * FB(float, 0x10);
        f = FB(float, 0x64) + D_005BDDF8 * FB(float, 0x10);
        FB(float, 0x64) = f < D_005BDDFC ? f : D_005BDDFC;
        if ((unsigned char)func_0034B6B0(0.0f, p + 0x50, p + 0xACB8, p) == 1) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x70);
            func_001ACC30(D_005BE09C, 2, 0x32, 0x14, 0);
            func_0036DF10(D_005BE1A8, 0, 1, 0x78, 0x1E, 0);
        }
        break;
    case 6:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x71);
        }
        break;
    case 7:
        if (((O4C9 *)p)->m2EC() == 0x77)
            ((O4C9 *)p)->m2F8(0x17);
        break;
    }
}
}

extern "C" unsigned char D_005BDE20[8];

extern "C" float D_005BDE28;

extern "C" float D_005BDE2C;

extern "C" {
void func_004CA400(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_0024E780(char *, int, int);
    extern char **func_004D2740(char *);
    extern int func_004D2D90(char *);
    extern int func_004D2890(float, char *, float *, int);
    float v[4];
    float f;
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p)) {
            if (FB(unsigned char, 0xB2C8) != 2) {
                ((O4C9 *)p)->m2F8(0x17);
                break;
            }
            if (FB(int, 0xB280) != 0) {
                ((O4C9 *)p)->m2F8(0x17);
                break;
            }
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x54);
            func_00207480(3, 0x32B, *(char **)(func_004D2740(p)[1] + 0x104), 0x10);
            FB(int, 0xB184) = D_005BDE20[FB(int, 0xB2C0)];
            FB(float, 0xB170) = D_005BDE28;
        }
        break;
    case 1:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            FB(float, 0xB178) = D_005BDE14;
            FB(float, 0xB2B0) = func_004D32F0(p);
            ((O4C9 *)p)->m300(0x55);
        }
        break;
    case 2:
        v[0] = 0.0f;
        v[1] = FB(float, 0xB170);
        v[2] = 100.0f;
        v[3] = 1.0f;
        if ((unsigned char)func_004D2890(D_005BDE10, p, v, 1) == 1) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            FB(short, 0x90) = (unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x84) / 6.283185f) + 0x8000;
            func_00207480(3, 0x32B, *(char **)(func_004D2740(p)[1] + 0x104), 0x10);
        }
        break;
    case 3:
        FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
        ((O4C9 *)p)->m300(0x6F);
        FB(float, 0x64) = D_005BDDEC;
        break;
    case 4:
        FB(float, 0x54) -= FB(float, 0x64) * FB(float, 0x10);
        f = FB(float, 0x64) + D_005BDDF0 * FB(float, 0x10);
        FB(float, 0x64) = f < D_005BDDFC ? f : D_005BDDFC;
        if ((unsigned char)func_0024E780(FB(char *, 0xAB00), 1, 4) == 2) {
            func_0024E7B0(FB(char *, 0xAB00), 1, 4);
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            FB(float, 0x64) = D_005BDDF4;
        }
        break;
    case 5:
        FB(float, 0x54) -= FB(float, 0x64) * FB(float, 0x10);
        f = FB(float, 0x64) + D_005BDDF8 * FB(float, 0x10);
        FB(float, 0x64) = f < D_005BDDFC ? f : D_005BDDFC;
        if ((unsigned char)func_0034B6B0(0.0f, p + 0x50, p + 0xACB8, p) == 1) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x70);
            func_001ACC30(D_005BE09C, 2, 0x32, 0x14, 0);
            func_0036DF10(D_005BE1A8, 0, 1, 0x78, 0x1E, 0);
        }
        break;
    case 6:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            if (--FB(int, 0xB184) > 0) {
                FB(unsigned char, 0xB158) = 1;
                ((O4C9 *)p)->m300(0x54);
                FB(float, 0xB170) -= (D_005BDE28 - D_005BDE2C) / (float)(D_005BDE20[FB(int, 0xB2C0)] - 1);
            } else {
                FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
                ((O4C9 *)p)->m300(0x71);
            }
        }
        break;
    case 7:
        if (((O4C9 *)p)->m2EC() == 0x77)
            ((O4C9 *)p)->m2F8(0x17);
        break;
    }
}
}

extern "C" float D_005BDE00;

extern "C" {
void func_004C5CC0(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_0024E780(char *, int, int);
    extern char **func_004D2740(char *);
    extern int func_004D2D90(char *);
    extern void func_00105760(float, float *, float *);
    extern int func_004D2890(float, char *, float *, int);
    float v[4] __attribute__((aligned(16)));
    float n[16] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float f;
    float g;
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p)) {
            if (FB(int, 0xB280) != 0) {
                ((O4C9 *)p)->m2F8(0x17);
                break;
            }
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x18);
        }
        break;
    case 1:
        if ((unsigned char)func_0024E780(FB(char *, 0xAB00), 1, 0) == 1) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x19);
        }
        break;
    case 2:
        if ((unsigned char)func_0024E780(FB(char *, 0xAB00), 1, 0) == 1) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x1B);
        }
        break;
    case 3:
        if ((unsigned char)func_0024E780(FB(char *, 0xAB00), 1, 0) == 1) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x54);
            func_00207480(3, 0x32B, *(char **)(func_004D2740(p)[1] + 0x104), 0x10);
        }
        break;
    case 4:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            FB(float, 0xB178) = D_005BDE14;
            ((O4C9 *)p)->m300(0x55);
        }
        break;
    case 5:
        v[0] = 0.0f;
        v[1] = D_005BDE00;
        v[2] = 100.0f;
        v[3] = 1.0f;
        if ((unsigned char)func_004D2890(D_005BDE10, p, v, 0) == 1) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            FB(short, 0x90) = (unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x84) / 6.283185f) + 0x8000;
            func_00207480(3, 0x32B, *(char **)(func_004D2740(p)[1] + 0x104), 0x10);
        }
        break;
    case 6:
        FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
        ((O4C9 *)p)->m300(0x6F);
        FB(float, 0x64) = D_005BDDEC;
        break;
    case 7:
        FB(float, 0x54) -= FB(float, 0x64) * FB(float, 0x10);
        f = FB(float, 0x64) + D_005BDDF0 * FB(float, 0x10);
        if (f < D_005BDDFC) {
            g = f;
        } else {
            g = D_005BDDFC;
        }
        FB(float, 0x64) = g;
        if ((unsigned char)func_0024E780(FB(char *, 0xAB00), 1, 4) == 2) {
            func_0024E7B0(FB(char *, 0xAB00), 1, 4);
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            FB(float, 0x64) = D_005BDDF4;
        }
        break;
    case 8:
        FB(float, 0x54) -= FB(float, 0x64) * FB(float, 0x10);
        f = FB(float, 0x64) + D_005BDDF8 * FB(float, 0x10);
        if (f < D_005BDDFC) {
            g = f;
        } else {
            g = D_005BDDFC;
        }
        FB(float, 0x64) = g;
        if ((unsigned char)func_0034B6B0(0.0f, p + 0x50, p + 0xACB8, p) == 1) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x70);
            func_001ACC30(D_005BE09C, 2, 0x32, 0x14, 0);
            func_0036DF10(D_005BE1A8, 0, 1, 0x78, 0x1E, 0);
        }
        break;
    case 9:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m2F8(0x2E);
        }
        break;
    case 10:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x67);
            FB(float, 0xB170) = D_005BDE98;
            FB(float, 0xB174) = 0.0f;
        }
        break;
    case 11:
        f = FB(float, 0xB170) + D_005BDE9C;
        if (f < D_005BDEA0) {
            g = f;
        } else {
            g = D_005BDEA0;
        }
        FB(float, 0xB170) = g;
        FB(float, 0xB174) += g;
        FB(float, 0xB160) = 0.0f;
        FB(float, 0xB164) = 0.0f;
        FB(float, 0xB168) = FB(float, 0xB170);
        FB(float, 0xB16C) = 1.0f;
        __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(n), "r"(p + 0xB160) : "memory");
        func_00105760(6.283185f * ((float)FB(short, 0x90) / 65536.0f), m, n);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(p + 0xB160), "r"(m) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0xB160) : "memory");
        FB(float, 0x5C) = 1.0f;
        if (FB(float, 0x164) < D_005BDEA8) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x68);
        } else if (!(FB(float, 0xB174) < D_005BDEA4)) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x68);
        }
        break;
    case 12:
        if (((O4C9 *)p)->m2EC() == 0x77)
            ((O4C9 *)p)->m2F8(0x17);
        break;
    }
}
}

extern "C" float func_00132470(char *, char *);

extern "C" char D_0058ADC0[];

extern "C" float D_005BDD9C;

extern "C" float D_005BDE18;

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" {
void func_004CAD30(char *p) {
    extern void func_00104C00(char *, int, char *);
    extern char *func_00207480(int, int, char *, int);
    extern int func_004D2D90(char *);
    extern char **func_004D2740(char *);
    extern void func_00105760(float, float *, float *);
    extern int func_004D2890(float, char *, float *, int);
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p)) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x54);
            FB(short, 0x90) = FB(short, 0x160);
        }
        break;
    case 1:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            FB(float, 0xB178) = D_005BDE14;
            UNIT(m);
            func_00105760(3.1415925f, m, m);
            func_00104C00((char *)m, *(int *)(func_004D2740(p)[1] + 0x104), (char *)m);
            func_00207480(3, 0x338, (char *)m, 0x10);
            FB(float, 0xB2B0) = func_004D32F0(p);
            ((O4C9 *)p)->m300(0x55);
        }
        break;
    case 2:
        v[0] = 0.0f;
        v[1] = 0.0f;
        v[2] = D_005BDD9C;
        v[3] = 1.0f;
        if ((unsigned char)func_004D2890(D_005BDE0C, p, v, 1) == 1) {
            if (!(func_00132470(p + 0x50, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) <= D_005BDE18)) {
                FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
                func_00207480(3, 0x338, *(char **)(func_004D2740(p)[1] + 0x104), 0x10);
            } else {
                FB(unsigned char, 0xB158) = 10;
                FB(float, 0xB178) = D_005BDE14;
            }
        }
        break;
    case 3:
        FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
        ((O4C9 *)p)->m300(0x54);
        FB(short, 0x90) = (unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x84) / 6.283185f) + 0x8000;
        break;
    case 4:
        if (((O4C9 *)p)->m2EC() == 0x77) {
            if (FB(unsigned char, 0xB154) == 0x2B)
                ((O4C9 *)p)->m2F8(0x2F);
            else
                ((O4C9 *)p)->m2F8(0x17);
        }
        break;
    case 10:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(D_0058ADC0 + FB(unsigned char, 0xB2C8) * 16) : "memory");
        if ((unsigned char)func_004D2890(D_005BDE0C, p, v, 2) == 1) {
            FB(unsigned char, 0xB158) = 3;
            func_00207480(3, 0x338, *(char **)(func_004D2740(p)[1] + 0x104), 0x10);
        }
        break;
    }
}
}

extern "C" void func_00104B80(float *, char *, char *);

extern "C" float func_001324B0(char *, float *);

extern "C" float func_00131B50(float);

extern "C" short func_00131D10(float, float);

extern "C" void func_00131760(float *, float *, float *);

extern "C" short D_005BDDE4;

extern "C" short D_005BDDE8;

extern "C" float D_005BDDE0;

extern "C" {
void func_004CA980(char *p) {
    extern int func_004D2D90(char *);
    extern char **func_004D2740(char *);
    extern int func_0024E780(char *, int, int);
    float v[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float s[4] __attribute__((aligned(16)));
    float d;
    char *o;
    short a;
    switch (FB(unsigned char, 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p)) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x5F);
            FB(short, 0x90) = FB(short, 0x160);
            o = *(char **)(func_004D2740(p)[1] + 0x104);
            __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(o) : "memory");
            d = func_001324B0(p + 0x150, v);
            a = func_00131D10(func_00131B50(FB(float, 0x154) - FB(float, 0x54)), d);
            if (a < (unsigned short)(short)(int)(0.5f + 65536.0f * (float)D_005BDDE4 / 360.0f))
                a = (unsigned short)(short)(int)(0.5f + 65536.0f * (float)D_005BDDE4 / 360.0f);
            else if ((unsigned short)(short)(int)(0.5f + 65536.0f * (float)D_005BDDE8 / 360.0f) < a)
                a = (unsigned short)(short)(int)(0.5f + 65536.0f * (float)D_005BDDE8 / 360.0f);
            FB(float, 0x60) = 0.0f;
            FB(float, 0x64) = 0.0f;
            FB(float, 0x68) = D_005BDDE0;
            FB(float, 0x6C) = 1.0f;
            r[0] = 6.283185f * ((float)a / 65536.0f);
            r[1] = 6.283185f * ((float)FB(short, 0x90) / 65536.0f);
            r[2] = 0.0f;
            r[3] = 1.0f;
            UNIT(m);
            func_00131760(m, m, r);
            func_00104B80((float *)(p + 0x60), (char *)m, p + 0x60);
        }
        break;
    case 1:
        if ((unsigned char)func_0024E780(FB(char *, 0xAB00), 1, 0) == 1) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(s), "r"(p + 0x60), "f"(FB(float, 0x10)) : "t0", "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(s) : "memory");
            FB(float, 0x5C) = 1.0f;
        }
        if ((unsigned char)func_0034B6B0(0.0f, p + 0x50, p + 0xACB8, p) == 1) {
            FB(unsigned char, 0xB158) = FB(unsigned char, 0xB158) + 1;
            ((O4C9 *)p)->m300(0x60);
            func_001ACC30(D_005BE09C, 2, 0x32, 0x14, 0);
            func_0036DF10(D_005BE1A8, 0, 1, 0x78, 0x1E, 0);
        }
        break;
    case 2:
        if (((O4C9 *)p)->m2EC() == 0x77)
            ((O4C9 *)p)->m2F8(0x17);
        break;
    }
}
}

extern "C" char D_00587EA0[];

extern "C" int func_004CD2B0(char *, int);

extern "C" int func_004CD3C0(char *, int);

class Obj4CB {
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
    virtual void m1F0(int, char *);
};

extern "C" {
void func_004CBEF0(char *p, int x) {
    extern void func_001AD140(int);
    unsigned char ok;
    unsigned char f = 0;
    if (*(int *)(p + 0xB2DC) != 0) func_001AD140(*(int *)(p + 0xB2DC));
    if (*(int *)(p + 0xB2E0) != 0) func_001AD140(*(int *)(p + 0xB2E0));
    if (*(int *)(p + 0xB2F4) != 0) func_001AD140(*(int *)(p + 0xB2F4));
    if (*(int *)(p + 0xB2F8) != 0) func_001AD140(*(int *)(p + 0xB2F8));
    if (*(int *)(p + 0xB2FC) != 0) func_001AD140(*(int *)(p + 0xB2FC));
    if (*(int *)(p + 0xB304) != 0) func_001AD140(*(int *)(p + 0xB304));
    ok = 1;
    if ((unsigned int)(*(unsigned char *)(p + 0xB2C9) - 2) > 1) {
        ok = 0;
    }
    if (ok == 0 && *(unsigned char *)(p + 0xB2CC) == 0 && (unsigned char)func_004CD2B0(p, x) == 1) {
        *(unsigned char *)(p + 0xB2CC) = 1;
    }
    ok = 1;
    if ((unsigned int)(*(unsigned char *)(p + 0xB2C9) - 2) > 1) {
        ok = 0;
    }
    if (ok == 1) {
        if (*(unsigned char *)(p + 0xB2D3) == 0) {
            if ((unsigned char)func_004CD3C0(p, *(unsigned char *)(p + 0xB155)) == 1) {
                *(unsigned char *)(p + 0xB2CC) = 1;
            }
        } else if (*(float *)(p + 0xB2A4) <= 0.0f) {
            *(unsigned char *)(p + 0xB2CC) = 1;
            *(unsigned char *)(p + 0xB2D3) = 0;
            f = 1;
            if (*(unsigned char *)(p + 0xB2D9) == 1) {
                *(float *)(p + 0xB2A8) = D_0058AD80[*(int *)(p + 0xB2C0)];
            }
        }
    }
    *(signed char *)(p + 0xB155) = *(signed char *)(p + 0xB154);
    switch (x) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 0x12:
    case 0x13:
        switch ((unsigned char)func_004D1B90(p, 1)) {
        case 0:
            *(short *)(p + 0x90) = *(short *)(p + 0xB152);
            break;
        case 1:
            *(unsigned char *)(p + 0xB154) = 0x32;
            *(unsigned char *)(p + 0xB158) = 0;
            break;
        case 2:
            switch (x) {
            case 1:
            case 3:
                if (*(unsigned char *)(p + 0xB154) == 0x37) {
                    *(unsigned char *)(p + 0xB154) = 0x36;
                    *(unsigned char *)(p + 0xB158) = 0;
                } else {
                    *(unsigned char *)(p + 0xB154) = 0x37;
                    *(unsigned char *)(p + 0xB158) = 0;
                }
                break;
            case 0:
            case 2:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 0x12:
            case 0x13:
                *(unsigned char *)(p + 0xB154) = 0x36;
                *(unsigned char *)(p + 0xB158) = 0;
                break;
            case 0xD:
            case 0xE:
            case 0xF:
            case 0x10:
            case 0x11:
                break;
            }
            break;
        }
        break;
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
        break;
    case 0x14:
        *(unsigned char *)(p + 0xB154) = 0x18;
        *(unsigned char *)(p + 0xB158) = 0;
        ((Obj4CB *)p)->m1F0(*(int *)(p + 0x148), D_00587EA0 + *(unsigned char *)(p + 0xB2C8) * 0x54);
        break;
    case 0x15:
        *(unsigned char *)(p + 0xB154) = 0x18;
        *(unsigned char *)(p + 0xB158) = 0;
        ((Obj4CB *)p)->m1F0(*(int *)(p + 0x148), D_00587EA0 + *(unsigned char *)(p + 0xB2C8) * 0x54);
        break;
    default:
        *(unsigned char *)(p + 0xB154) = x;
        *(unsigned char *)(p + 0xB158) = 0;
        if (f == 1 && (unsigned char)func_004D1B90(p, 0)) {
            *(unsigned char *)(p + 0xB154) = 0x43;
            *(unsigned char *)(p + 0xB158) = 0;
        }
        break;
    }
}
}

class ObjA4 {
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
    virtual void mA4();
};

extern "C" {
void func_004CFCA0(char *p, int) {
    extern void func_001AD140(char *);
    ((ObjA4 *)(p + 0x130))->mA4();
    func_001AD140(p);
}
}

extern "C" {
int func_004C4930(char *p0) {
    extern char D_0058AAA0[];
    int func_0024E800(...);
    void func_004CBBE0(char *, float);
    int func_004CBD90(...);
    void func_004D1AF0(char *, char *, int);
    int func_004D2610(...);
    int v3;
    int v4;
    char *v1;
    int v0;
    int v2;
    int tmp0;
    int tmp1;
    v0 = *(unsigned char *)(p0 + 45400);
    v1 = p0;
    switch (v0) {
    case 0:
        *(char *)((0x10000 + v1) + -20136) = (v0 + 1);
        v3 = ((V300_1_ii *)p0)->m(0);
        break;
    case 1:
        tmp0 = func_004D2610(p0, v0);
        v2 = (int)v1;
        if (1 == (tmp0 & 255)) {
            v3 = func_004CBD90(v2);
        } else {
            func_004D1AF0(v1, D_0058AAA0, 0);
            tmp1 = ((V88_0_i *)(v1 + 304))->m();
            if (tmp1 != 0) {
                func_004CBBE0(v1, 3.0f);
            }
            v3 = func_0024E800(*(int *)((0x10000 + v1) + -21760));
            v4 = 1;
            if (v4 == (v3 & 255)) {
                v3 = ((V300_1_ii *)v1)->m(v4);
            }
        }
        break;
    }
    return v3;
}
}

class V2EC_0_i {
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
    virtual int m(void);
};

extern "C" {
void func_004C5590(char *p0) {
    extern char D_0058AAA0[];
    void func_004CBBE0(char *, float);
    int func_004CBD90(...);
    void func_004D1AF0(char *, char *, int);
    int func_004D2610(...);
    int v2;
    int v0;
    char *v1;
    int tmp0;
    int tmp1;
    v0 = *(unsigned char *)(p0 + 45400);
    v1 = p0;
    switch (v0) {
    case 0:
        *(char *)((0x10000 + v1) + -20136) = (v0 + 1);
        v2 = ((V300_1_ii *)p0)->m(20);
        break;
    case 1:
        tmp0 = func_004D2610();
        if ((tmp0 & 255) == 1) {
            v2 = func_004CBD90(v1);
        } else {
            func_004D1AF0(v1, D_0058AAA0, 0);
            tmp1 = ((V88_0_i *)(v1 + 304))->m();
            if (tmp1 != 0) {
                func_004CBBE0(v1, 3.0f);
            }
            v2 = ((V2EC_0_i *)v1)->m();
            if (119 == v2) {
                v2 = ((V2F8_1_ii *)v1)->m(23);
            }
        }
        break;
    }
}
}

class V2EC_2_iii {
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
    virtual int m(int, int);
};

extern "C" {
void func_004C56B0(char *p0, int p1) {
    int func_0024E780(...);
    int func_004D2D90(char *, int, int);
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 45400);
    v1 = p0;
    if (v0 != 4) {
        tmp0 = 3;
        if (v0 != tmp0) {
            switch (v0) {
            case 0:
                v3 = func_004D2D90(p0, 1, v0);
                v5 = 0x10000;
                if ((v3 & 255) != 0) {
                    *(char *)(v1 + 45400) = (*(unsigned char *)((v1 + v5) + -20136) + 1);
                    v3 = ((V300_1_ii *)v1)->m(24);
                }
                break;
            case 1:
                v3 = func_0024E780(*(int *)(v1 + 43776), 1, 0);
                v6 = 0x10000;
                if ((v3 & 255) == 1) {
                    *(char *)(v1 + 45400) = (*(unsigned char *)((v1 + v6) + -20136) + 1);
                    v3 = ((V300_1_ii *)v1)->m(25);
                }
                break;
            case 2:
                v3 = func_0024E780(*(int *)(v1 + 43776), 1, 0);
                v2 = 0x10000;
                if ((v3 & 255) == 1) {
                    *(char *)(v1 + 45400) = (*(unsigned char *)((v1 + v2) + -20136) + 1);
                    v3 = ((V300_1_ii *)v1)->m(26);
                }
                break;
            }
        } else {
            v3 = ((V2EC_2_iii *)p0)->m(p1, v0);
            v4 = 0x10000;
            if (v3 == 119) {
                *(char *)(v1 + 45400) = (*(unsigned char *)((v1 + v4) + -20136) + 1);
                v3 = ((V300_1_ii *)v1)->m(71);
            }
        }
    } else {
        v3 = ((V2EC_2_iii *)p0)->m(p1, v0);
        if (v3 == 119) {
            v3 = ((V2F8_1_ii *)v1)->m(23);
        }
    }
}
}

extern "C" {
int func_004D1F40(int);
}

extern "C" {
void func_004C5AD0(char *p0, int p1) {
    int func_0024E780(...);
    int func_004D2D90(char *, int, int);
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int tmp4;
    int tmp5;
    v0 = *(unsigned char *)(p0 + 45400);
    v1 = p0;
    switch (v0) {
    case 0:
        v3 = func_004D2D90(p0, 1, v0);
        v4 = 0x10000;
        if ((v3 & 255) != 0) {
            if (*(int *)((v1 + v4) + -19840) != 0) {
                v3 = ((V2F8_1_ii *)v1)->m(23);
            } else {
                *(char *)(v1 + 45400) = (*(unsigned char *)(v1 + 45400) + 1);
                v3 = ((V300_1_ii *)v1)->m(24);
            }
        }
        break;
    case 1:
        v3 = func_0024E780(*(int *)(v1 + 43776), 1, 0);
        v5 = 0x10000;
        if ((v3 & 255) == 1) {
            *(char *)(v1 + 45400) = (*(unsigned char *)((v1 + v5) + -20136) + 1);
            v3 = ((V300_1_ii *)v1)->m(25);
        }
        break;
    case 2:
        v3 = func_0024E780(*(int *)(v1 + 43776), 1, 0);
        tmp4 = (v3 & 255);
        v2 = (int)v1;
        if (tmp4 == 1) {
            tmp5 = func_004D1F40(v2);
            if ((tmp5 & 255) == 0) {
                v3 = ((V2F8_1_ii *)v1)->m(23);
            } else {
                *(char *)(v1 + 45400) = (*(unsigned char *)(v1 + 45400) + 1);
                v3 = ((V300_1_ii *)v1)->m(101);
            }
        }
        break;
    case 3:
        v3 = ((V2EC_2_iii *)p0)->m(p1, v0);
        if (v3 == 119) {
            v3 = ((V2F8_1_ii *)v1)->m(23);
        }
        break;
    }
}
}

extern "C" {
void func_004C6610(char *p0, int p1) {
    int func_0024E780(...);
    int func_004D2D90(char *, int, int);
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = *(unsigned char *)(p0 + 45400);
    v1 = p0;
    switch (v0) {
    case 0:
        v2 = func_004D2D90(p0, 1, v0);
        v3 = 0x10000;
        if ((v2 & 255) != 0) {
            *(char *)(v1 + 45400) = (*(unsigned char *)((v1 + v3) + -20136) + 1);
            v2 = ((V300_1_ii *)v1)->m(91);
        }
        break;
    case 1:
        v2 = func_0024E780(*(int *)(v1 + 43776), 1, 0);
        v4 = 0x10000;
        if ((v2 & 255) == 1) {
            *(char *)(v1 + 45400) = (*(unsigned char *)((v1 + v4) + -20136) + 1);
            v2 = ((V300_1_ii *)v1)->m(92);
        }
        break;
    case 2:
        v2 = func_0024E780(*(int *)(v1 + 43776), 1, 0);
        v5 = 0x10000;
        if ((v2 & 255) == 1) {
            *(char *)(v1 + 45400) = (*(unsigned char *)((v1 + v5) + -20136) + 1);
            v2 = ((V300_1_ii *)v1)->m(115);
        }
        break;
    case 3:
        v2 = ((V2EC_2_iii *)p0)->m(p1, v0);
        if (v2 == 119) {
            v2 = ((V2F8_1_ii *)v1)->m(23);
        }
        break;
    }
}
}

extern "C" {
int func_004C8660(char *p0) {
    char *v1;
    int v2;
    int v0;
    v0 = *(unsigned char *)(p0 + 45400);
    v1 = p0;
    switch (v0) {
    case 0:
        *(char *)(v1 + 45400) = (v0 + 1);
        v2 = ((V300_1_ii *)p0)->m(18);
        break;
    case 1:
        v2 = ((V2EC_0_i *)p0)->m();
        if (119 == v2) {
            v2 = ((V2F8_1_ii *)v1)->m(23);
        }
        break;
    }
    return v2;
}
}

extern "C" {
void func_004C8700(char *p0) {
    char *v1;
    int v2;
    int v0;
    v0 = *(unsigned char *)((0x10000 + p0) + -20136);
    v1 = p0;
    switch (v0) {
    case 0:
        *(char *)(v1 + 45400) = (v0 + 1);
        v2 = ((V300_1_ii *)p0)->m(19);
        break;
    case 1:
        v2 = ((V2EC_1_ii *)p0)->m(v0);
        if (v2 == 119) {
            v2 = ((V2F8_1_ii *)v1)->m(23);
        }
        break;
    }
}
}

class V2F8_1_iv {
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
    virtual void m(int);
};

class V300_1_iv {
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
    virtual void m(int);
};

extern "C" {
void func_004C8920(char *p0) {
    int func_004D1EF0(char *);
    int v0;
    char *v1;
    int v2;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 45400);
    v1 = p0;
    switch (v0) {
    case 0:
        *(char *)(v1 + 45400) = (v0 + 1);
        ((V300_1_iv *)p0)->m(3);
        break;
    case 1:
        tmp0 = ((V2EC_0_i *)p0)->m();
        if (tmp0 == 119) {
            ((V2F8_1_iv *)v1)->m(23);
        }
        break;
    }
    v2 = func_004D1EF0(v1);
    if ((v2 & 255) == 0) {
        v2 = ((V2F8_1_ii *)v1)->m(50);
    }
}
}

extern "C" {
int func_004C90E0(char *p0) {
    char *v1;
    int v2;
    int v0;
    v0 = *(unsigned char *)(p0 + 45400);
    v1 = p0;
    switch (v0) {
    case 0:
        *(char *)(v1 + 45400) = (v0 + 1);
        v2 = ((V300_1_ii *)p0)->m(82);
        break;
    case 1:
        v2 = ((V2EC_0_i *)p0)->m();
        if (119 == v2) {
            v2 = ((V2F8_1_ii *)v1)->m(23);
        }
        break;
    }
    return v2;
}
}

extern "C" {
int func_0013D5D0(...);
}

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
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
int func_004CFCE0(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 4544))->m();
    ((VD0_0_v *)(v0 + 6080))->m();
    ((VD0_0_v *)(v0 + 7616))->m();
    ((VD0_0_v *)(v0 + 9152))->m();
    ((VD0_0_v *)(v0 + 10688))->m();
    ((VD0_0_v *)(v0 + 12224))->m();
    ((VD0_0_v *)(v0 + 18368))->m();
    ((VD0_0_v *)(v0 + 19904))->m();
    ((VD0_0_v *)(v0 + 13760))->m();
    ((VD0_0_v *)(v0 + 16832))->m();
    ((VD0_0_v *)(v0 + 15296))->m();
    ((VD0_0_v *)(v0 + 21440))->m();
    v1 = ((V14_0_i *)(v0 + 29892))->m();
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
int func_004D4090(char *p0) {
    int v1;
    int v0;
    int tmp0;
    if (*(unsigned char *)(p0 + 333) != 3) {
        v0 = *(unsigned char *)(p0 + 45770);
        tmp0 = 2;
        if (v0 != tmp0) {
            switch (v0) {
            case 0:
                break;
            case 1:
                v1 = ((V2F8_1_ii *)p0)->m(52);
                break;
            }
        } else {
            v1 = ((V2F8_1_ii *)p0)->m(53);
        }
    }
    return v1;
}
}

extern "C" {
int func_004C5890(char *p0, int p1, int p2, int p3) {
    int func_0024E780(int, int, int);
    int func_004D2D90(void);
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    v0 = *(unsigned char *)((p0 + 0x10000) + -20136);
    v1 = p0;
    switch (v0) {
    case 0:
        v8 = func_004D2D90();
        v4 = 0x10000;
        if ((v8 & 255) != 0) {
            *(char *)((v1 + 0x10000) + -20136) = (*(unsigned char *)((v1 + v4) + -20136) + 1);
            v8 = ((V300_1_ii *)v1)->m(24);
        }
        break;
    case 1:
        v8 = func_0024E780(*(int *)((v1 + 0x10000) + -21760), 1, 0);
        v5 = 0x10000;
        if ((v8 & 255) == 1) {
            *(char *)((v1 + 0x10000) + -20136) = (*(unsigned char *)((v1 + v5) + -20136) + 1);
            v8 = ((V300_1_ii *)v1)->m(25);
        }
        break;
    case 2:
        v8 = func_0024E780(*(int *)((v1 + 0x10000) + -21760), 1, 0);
        v6 = 0x10000;
        if ((v8 & 255) == 1) {
            *(char *)((v1 + 0x10000) + -20136) = (*(unsigned char *)((v1 + v6) + -20136) + 1);
            v8 = ((V300_1_ii *)v1)->m(27);
        }
        break;
    case 3:
        v8 = func_0024E780(*(int *)((v1 + 0x10000) + -21760), 1, 0);
        v7 = 0x10000;
        if ((v8 & 255) == 1) {
            *(char *)((v1 + 0x10000) + -20136) = (*(unsigned char *)((v1 + v7) + -20136) + 1);
            v8 = ((V300_1_ii *)v1)->m(28);
        }
        break;
    case 4:
        v8 = ((V2EC_0_i *)p0)->m();
        v3 = 0x10000;
        if (v8 == 119) {
            *(char *)((v1 + 0x10000) + -20136) = (*(unsigned char *)((v1 + v3) + -20136) + 1);
            v8 = ((V300_1_ii *)v1)->m(71);
        }
        break;
    case 5:
        v8 = ((V2EC_0_i *)p0)->m();
        if (v8 == 119) {
            v8 = ((V2F8_1_ii *)v1)->m(23);
        }
        break;
    }
    return v8;
}
}

extern "C" {
int func_004C6490(char *p0, int p1, int p2, int p3) {
    int func_0024E780(int, int, int);
    int func_004D2D90(void);
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = *(unsigned char *)((p0 + 0x10000) + -20136);
    v1 = p0;
    switch (v0) {
    case 0:
        v2 = func_004D2D90();
        v3 = 0x10000;
        if ((v2 & 255) != 0) {
            *(char *)((v1 + 0x10000) + -20136) = (*(unsigned char *)((v1 + v3) + -20136) + 1);
            v2 = ((V300_1_ii *)v1)->m(27);
        }
        break;
    case 1:
        v2 = func_0024E780(*(int *)((v1 + 0x10000) + -21760), 1, 0);
        v4 = 0x10000;
        if ((v2 & 255) == 1) {
            *(char *)((v1 + 0x10000) + -20136) = (*(unsigned char *)((v1 + v4) + -20136) + 1);
            v2 = ((V300_1_ii *)v1)->m(28);
        }
        break;
    case 2:
        v2 = ((V2EC_0_i *)p0)->m();
        v5 = 0x10000;
        if (v2 == 119) {
            *(char *)((v1 + 0x10000) + -20136) = (*(unsigned char *)((v1 + v5) + -20136) + 1);
            v2 = ((V300_1_ii *)v1)->m(71);
        }
        break;
    case 3:
        v2 = ((V2EC_0_i *)p0)->m();
        if (v2 == 119) {
            v2 = ((V2F8_1_ii *)v1)->m(23);
        }
        break;
    }
    return v2;
}
}
