class V1E4 {
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
    virtual void m1E4(int, unsigned int);
    virtual void d120();
    virtual void m1EC(float);
};

extern "C" {
void func_00250240(V1E4 *o, int a, int k) {
    extern char D_01CAFF0C[];
    char *p = (char *)o;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 10) != 0) return;
    if (*(signed char *)(p + 0x120) == -1) return;
    switch ((signed char)k) {
    case 0:
        o->m1E4(a, (unsigned int)*(float *)(*(char **)(p + 0x11C) + 0x2C));
        o->m1EC(*(float *)(*(char **)(p + 0x11C) + 0x44));
        break;
    case 1:
        break;
    case 2:
        *(unsigned char *)(p + 0x100) = 4;
        o->m1E4(a, (unsigned int)*(float *)(*(char **)(p + 0x11C) + 0x2C));
        break;
    }
}
}

extern "C" int D_005BE09C;

extern "C" float func_00132470(char *, char *);

extern "C" bool func_00252B90(char *p, unsigned char *oc, float *of, char *pos) {
    char *g = *(char **)((char *)D_005BE09C + 0x23C);
    float d;
    float t;
    bool r;
    float hi;
    float lo;
    if (g == 0) return false;
    d = func_00132470(g + 0x70, pos);
    r = false;
    hi = *(float *)(p + 0x124);
    if (d < hi) {
        r = true;
        lo = *(float *)(p + 0x128);
        if (!(d <= lo)) {
            *of = (d - lo) / (hi - lo);
            t = *of;
            *oc = (unsigned int)((float)(unsigned int)*(unsigned char *)(p + 0x12D) + t * (float)(*(unsigned char *)(p + 0x12C) - *(unsigned char *)(p + 0x12D)));
        } else {
            *of = 0.0f;
            *oc = *(unsigned char *)(p + 0x12D);
        }
    }
    return r;
}

class V10_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(void);
};

extern "C" {
int func_0024FF40(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V10_0_i *)v0)->m();
    }
    return v1;
}
}

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

extern "C" {
int func_0024FF80(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V14_0_i *)v0)->m();
    }
    return v1;
}
}

extern "C" {
int func_0024BFA0(int, int);
}

class V1DC_0_i {
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
    virtual int m(void);
};

class V1E8_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_002501C0(char *p0, int p1, int p2) {
    extern char D_01CAFF0C[];
    char *v0;
    int v1;
    v0 = p0;
    ((V1E8_1_iv *)p0)->m(p2);
    v1 = func_0024BFA0(*(int *)D_01CAFF0C, p1);
    *(char *)(v0 + 288) = v1;
    if (*(signed char *)(v0 + 288) != -1) {
        v1 = ((V1DC_0_i *)v0)->m();
    }
    return v1;
}
}

class V64_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_002525C0(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V64_0_i *)v0)->m();
    }
    return v1;
}
}

class VC_0_i {
public:
    virtual void d0();
    virtual int m(void);
};

extern "C" {
int func_00252600(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 280);
    if (v0 != 0) {
        v1 = ((VC_0_i *)v0)->m();
    }
    return v1;
}
}

class V20_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual int m(void);
};

extern "C" {
int func_00252640(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V20_0_i *)v0)->m();
    }
    return v1;
}
}

extern "C" {
int func_00252680(char *p0, int p1, int p2) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 280);
    if (v0 != 0) {
        if (p1 != 0) {
            if (p2 != 0) {
                if (v0 != 0) {
                    v1 = ((V14_0_i *)v0)->m();
                }
            }
        }
    }
    return v1;
}
}

class V24_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual int m(void);
};

extern "C" {
int func_002526D0(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V24_0_i *)v0)->m();
    }
    return v1;
}
}

class V28_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual int m(void);
};

extern "C" {
int func_00252710(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V28_0_i *)v0)->m();
    }
    return v1;
}
}

class V2C_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00252750(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V2C_0_i *)v0)->m();
    }
    return v1;
}
}

class V30_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00252790(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V30_0_i *)v0)->m();
    }
    return v1;
}
}

class V34_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_002527D0(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V34_0_i *)v0)->m();
    }
    return v1;
}
}

class V38_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00252810(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V38_0_i *)v0)->m();
    }
    return v1;
}
}

class V3C_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00252850(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V3C_0_i *)v0)->m();
    }
    return v1;
}
}

class V40_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00252890(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V40_0_i *)v0)->m();
    }
    return v1;
}
}

class V44_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_002528D0(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V44_0_i *)v0)->m();
    }
    return v1;
}
}

class V48_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00252910(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V48_0_i *)v0)->m();
    }
    return v1;
}
}

class V4C_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00252950(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V4C_0_i *)v0)->m();
    }
    return v1;
}
}

class V50_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00252A40(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        return ((V50_0_i *)v0)->m();
    }
    return 0;
}
}

class V54_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00252A70(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V54_0_i *)v0)->m();
    }
    return v1;
}
}

class V58_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00252AB0(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        return ((V58_0_i *)v0)->m();
    }
    return 0;
}
}

class V5C_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00252AE0(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        return ((V5C_0_i *)v0)->m();
    }
    return 0;
}
}

class V60_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00252B10(char *p0) {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 276);
    if (v0 != 0) {
        v1 = ((V60_0_i *)v0)->m();
    }
    return v1;
}
}

class V200_3_iipi {
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
    virtual int m(int, int, char *);
};

extern "C" {
int func_00252B70(char *p0, int p1, int p2) {
    int tmp0;
    tmp0 = ((V200_3_iipi *)p0)->m(p1, p2, (p0 + 80));
    return tmp0;
}
}
