#include "game/mt_rand.h"
class V6C_0_v {
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
    virtual void m(void);
};

class V70_0_v {
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
    virtual void m(void);
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
extern char D_01CAFF0C[];
}

extern "C" {
float func_00131BA0(int);
}

extern "C" {
float func_00131C20(...);
}

extern "C" {
float func_00132470(char *, char *);
}

extern "C" {
float func_001324E0(char *);
}

extern "C" {
void func_00132540(char *, char *, float);
}

extern "C" {
void func_00335EF0(char *, int);
}

extern "C" {
void func_00335FC0(char *, float);
}

extern "C" {
void func_0033A660(int, int);
}

extern "C" void func_003369C0(int p0) {
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    float v3;
    float v4;
    int v5;
    int tmp0;
    int tmp2;
    int tmp3;
    char *tmp4;
    float tmp7;
    float tmp12;
    float tmp19;
    float tmp22;
    float tmp23;
    int tmp30;
    float tmp34;
    v0 = (char *)p0;
    func_0033A660(p0, 1);
    v1 = *(unsigned char *)(v0 + 5);
    switch (v1) {
    case 0:
        *(char *)(v0 + 5) = (v1 + 1);
        *(char *)(v0 + 6) = 0;
        *(char *)(v0 + 7) = 0;
        *(int *)(v0 + 4928) = 0;
        *(short *)(v0 + 4932) = 0;
        *(short *)(v0 + 4934) = 0;
        /* fall through */
    case 1:
        v5 = *(unsigned char *)(v0 + 6);
        tmp0 = 3;
        if (v5 != tmp0) {
            switch (v5) {
            case 0:
                *(char *)(v0 + 6) = (v5 + 1);
                *(char *)(v0 + 7) = 0;
                /* fall through */
            case 1:
                *(char *)(v0 + 6) = (*(unsigned char *)(v0 + 6) + 1);
                ((V6C_0_v *)(v0 + 304))->m();
                ((V70_0_v *)(v0 + 304))->m();
                if (*(unsigned char *)(v0 + 7) != 0) {
                    tmp2 = mt_rand();
                    v2 = (short)((tmp2 & 4095) + 12288);
                } else {
                    tmp3 = mt_rand();
                    v2 = (short)-((tmp3 & 4095) + 12288);
                }
                tmp4 = *(char **)(*(char **)D_01CAFF0C + 12);
                tmp7 = func_00131BA0((short)(*(short *)(*(char **)(*(char **)D_01CAFF0C + 12) + 144) + (short)v2));
                { float k = 400.0f; *(float *)(v0 + 4912) = *(float *)(v0 + 336) + k * tmp7; }
                tmp12 = func_00131C20((short)(*(short *)(tmp4 + 144) + (short)v2));
                { float k = 400.0f; *(float *)(v0 + 4920) = *(float *)(v0 + 344) + k * tmp12; }
                *(float *)(v0 + 4916) = *(float *)(v0 + 340);
                break;
            case 2:
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(((stk + -64) + 64)), "r"((v0 + 4912)), "r"((v0 + 80)) : "memory");
                v3 = *(float *)((stk + -64) + 68);
                if (v3 > 0.0f) {
                    *(float *)((stk + -64) + 68) = ((v3 / 1000.0f) * *(float *)(v0 + 16));
                } else {
                    *(float *)((stk + -64) + 68) = ((v3 / 30.0f) * *(float *)(v0 + 16));
                }
                *(float *)((stk + -64) + 64) = ((*(float *)((stk + -64) + 64) / 30.0f) * *(float *)(v0 + 16));
                *(float *)((stk + -64) + 72) = ((*(float *)((stk + -64) + 72) / 30.0f) * *(float *)(v0 + 16));
                tmp22 = func_001324E0(((stk + -64) + 64));
                v4 = 10.0f;
                if (tmp22 > v4) {
                    func_00132540(((stk + -64) + 64), ((stk + -64) + 64), v4);
                }
                __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((v0 + 80)), "r"(((stk + -64) + 64)) : "memory");
                tmp23 = func_00132470((v0 + 80), (v0 + 4912));
                if (tmp23 <= 40.0f) {
                    *(char *)(v0 + 6) = (*(unsigned char *)(v0 + 6) + 1);
                    *(int *)(v0 + 4968) = 0x40a00000;
                }
                break;
            }
        } else {
            *(float *)(v0 + 4968) -= *(float *)(v0 + 16);
            if (*(float *)(v0 + 4968) < 0.0f) {
                *(char *)(v0 + 6) = 1;
                *(char *)(v0 + 7) = (*(unsigned char *)(v0 + 7) ^ 1);
            }
        }
        *(float *)(v0 + 360) += (0.75f * *(float *)(v0 + 16));
        tmp30 = ((V88_0_i *)(v0 + 304))->m();
        if (tmp30 != 0) {
            func_00335FC0(v0, 3.0f);
        }
        func_00335EF0(v0, 1024);
        break;
    }
    *(short *)(v0 + 4936) += 256.0f * *(float *)(v0 + 16);
    tmp34 = func_00131BA0(*(short *)(v0 + 4936));
    *(float *)(v0 + 84) += (*(float *)(v0 + 16) * (2.0f * tmp34));
}

class V2F0_1_iv {
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
    virtual void m(int);
};

extern "C" void func_00336E60(int p0) {
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    float v3;
    float v4;
    float v5;
    int v6;
    int tmp0;
    int tmp2;
    int tmp3;
    char *tmp4;
    float tmp7;
    float tmp12;
    float tmp19;
    float tmp22;
    float tmp23;
    int tmp30;
    float tmp36;
    v0 = (char *)p0;
    func_0033A660(p0, 1);
    v1 = *(unsigned char *)(v0 + 5);
    switch (v1) {
    case 0:
        *(char *)(v0 + 5) = (v1 + 1);
        *(char *)(v0 + 6) = 0;
        *(char *)(v0 + 7) = 0;
        *(int *)(v0 + 4928) = 0;
        *(short *)(v0 + 4932) = 0;
        *(short *)(v0 + 4934) = 0;
        /* fall through */
    case 1:
        v6 = *(unsigned char *)(v0 + 6);
        tmp0 = 3;
        if (v6 != tmp0) {
            switch (v6) {
            case 0:
                *(char *)(v0 + 6) = (v6 + 1);
                *(char *)(v0 + 7) = 0;
                /* fall through */
            case 1:
                *(char *)(v0 + 6) = (*(unsigned char *)(v0 + 6) + 1);
                ((V6C_0_v *)(v0 + 304))->m();
                ((V70_0_v *)(v0 + 304))->m();
                if (*(unsigned char *)(v0 + 7) != 0) {
                    tmp2 = mt_rand();
                    v2 = (short)((tmp2 & 4095) + 24576);
                } else {
                    tmp3 = mt_rand();
                    v2 = (short)-((tmp3 & 4095) + 24576);
                }
                tmp4 = *(char **)(*(char **)D_01CAFF0C + 12);
                tmp7 = func_00131BA0((short)(*(short *)(*(char **)(*(char **)D_01CAFF0C + 12) + 144) + (short)v2));
                { float k = 400.0f; *(float *)(v0 + 4912) = *(float *)(v0 + 336) + k * tmp7; }
                tmp12 = func_00131C20((short)(*(short *)(tmp4 + 144) + (short)v2));
                { float k = 400.0f; *(float *)(v0 + 4920) = *(float *)(v0 + 344) + k * tmp12; }
                *(float *)(v0 + 4916) = *(float *)(v0 + 340);
                break;
            case 2:
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(((stk + -64) + 64)), "r"((v0 + 4912)), "r"((v0 + 80)) : "memory");
                v3 = *(float *)((stk + -64) + 68);
                if (v3 > 0.0f) {
                    *(float *)((stk + -64) + 68) = ((v3 / 1000.0f) * *(float *)(v0 + 16));
                } else {
                    *(float *)((stk + -64) + 68) = ((v3 / 60.0f) * *(float *)(v0 + 16));
                }
                *(float *)((stk + -64) + 64) = ((*(float *)((stk + -64) + 64) / 30.0f) * *(float *)(v0 + 16));
                *(float *)((stk + -64) + 72) = ((*(float *)((stk + -64) + 72) / 30.0f) * *(float *)(v0 + 16));
                tmp22 = func_001324E0(((stk + -64) + 64));
                v4 = 3.0f;
                if (tmp22 > v4) {
                    func_00132540(((stk + -64) + 64), ((stk + -64) + 64), v4);
                }
                __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((v0 + 80)), "r"(((stk + -64) + 64)) : "memory");
                tmp23 = func_00132470((v0 + 80), (v0 + 4912));
                if (tmp23 <= 40.0f) {
                    *(char *)(v0 + 6) = (*(unsigned char *)(v0 + 6) + 1);
                    *(int *)(v0 + 4968) = 0x41f00000;
                }
                break;
            }
        } else {
            *(float *)(v0 + 4968) -= *(float *)(v0 + 16);
            if (*(float *)(v0 + 4968) < 0.0f) {
                *(char *)(v0 + 6) = 1;
                *(char *)(v0 + 7) = (*(unsigned char *)(v0 + 7) ^ 1);
            }
        }
        *(float *)(v0 + 360) += *(float *)(v0 + 16);
        tmp30 = ((V88_0_i *)(v0 + 304))->m();
        if (tmp30 != 0) {
            func_00335FC0(v0, 3.0f);
        }
        func_00335EF0(v0, 1024);
        break;
    }
    *(float *)(v0 + 4984) -= *(float *)(v0 + 16);
    if (*(float *)(v0 + 4984) < 0.0f) {
        *(float *)(v0 + 4984) = 0.0f;
        if (*(unsigned char *)(v0 + 5018) != 31) {
            ((V2F0_1_iv *)v0)->m(31);
        }
    }
    *(short *)(v0 + 4936) += 256.0f * *(float *)(v0 + 16);
    tmp36 = func_00131BA0(*(short *)(v0 + 4936));
    *(float *)(v0 + 84) += (*(float *)(v0 + 16) * (2.0f * tmp36));
}
