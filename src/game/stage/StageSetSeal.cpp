#include "game/mt_rand.h"
extern "C" void func_00312980(char *);

extern "C" void func_00312A50(char *p) {
    *(float *)(p + 0xD54) = *(float *)(p + 0xD54) - *(float *)(p + 0x10);
    if (*(float *)(p + 0xD54) < 0.0f) {
        float s;
        if (mt_rand() & 1) {
            s = 1.0f;
        } else {
            s = -1.0f;
        }
        if (!(s <= 0.0f) && !(*(float *)(p + 0xD60) <= 0.0f)) {
            *(unsigned char *)(p + 0xD68) = *(unsigned char *)(p + 0xD68) + 1;
        } else if (s < 0.0f && *(float *)(p + 0xD60) < 0.0f) {
            *(unsigned char *)(p + 0xD68) = *(unsigned char *)(p + 0xD68) + 1;
        } else {
            *(unsigned char *)(p + 0xD68) = 0;
        }
        if (*(unsigned char *)(p + 0xD68) > 0) {
            s = s * -1.0f;
        }
        *(float *)(p + 0xD60) = s;
        if (mt_rand() % 10 == 0) {
            *(float *)(p + 0xD64) = 15.0f;
        } else {
            if (mt_rand() & 1) {
                *(float *)(p + 0xD64) = *(float *)(p + 0xD64) + 2.0f * *(float *)(p + 0x10);
            } else {
                *(float *)(p + 0xD64) = *(float *)(p + 0xD64) - 2.0f * *(float *)(p + 0x10);
            }
            if (!(*(float *)(p + 0xD64) < 15.0f)) {
                *(float *)(p + 0xD64) = 15.0f;
            }
            if (*(float *)(p + 0xD64) < 5.0f) {
                *(float *)(p + 0xD64) = 5.0f;
            }
        }
        *(float *)(p + 0xD54) = *(float *)(p + 0xD58) = 60.0f + (float)(mt_rand() % 300);
    }
    *(float *)(p + 0xD5C) = *(float *)(p + 0xD5C) + *(float *)(p + 0xD60) * *(float *)(p + 0x10);
    if (!(*(float *)(p + 0xD5C) < 180.0f)) {
        *(float *)(p + 0xD5C) = *(float *)(p + 0xD5C) - 360.0f;
    }
    if (*(float *)(p + 0xD5C) < -180.0f) {
        *(float *)(p + 0xD5C) = *(float *)(p + 0xD5C) + 360.0f;
    }
    func_00312980(p);
}

extern "C" void func_0013D5D0(char *);

class ObjD0 {
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

class Obj24v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24();
};

extern "C" void func_00312740(char *p) {
    int i;
    ((ObjD0 *)(p + 0x250))->mD0();
    if (*(unsigned char *)(p + 0xD6F) != 0) {
        ((ObjD0 *)(p + 0x6C0))->mD0();
        for (i = 0; i < *(int *)(p + 0xDC); i++) {
            func_0013D5D0(p + i * 16 + 0xE0);
        }
        ((Obj24v *)(p + 0xCC0))->m24();
    }
}

extern "C" {
void func_00312870(void);
}

class V54_3_iiii {
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
    virtual int m(int, int, int);
};

extern "C" {
int func_003127E0(char *p0) {
    int tmp0;
    *(char *)(p0 + 3363) = 0;
    *(char *)(p0 + 3364) = 0;
    func_00312870();
    tmp0 = ((V54_3_iiii *)(p0 + 592))->m(0, 0, 0);
    *(char *)(p0 + 3361) = 0;
    *(char *)(p0 + 3362) = 0;
    *(int *)(p0 + 3400) = 0;
    *(char *)(p0 + 3434) = 0;
    *(char *)(p0 + 3435) = 0;
    *(char *)(p0 + 3436) = 0;
    *(int *)(p0 + 3392) = 0;
    *(int *)(p0 + 3396) = 0;
    *(char *)(p0 + 3437) = 0;
    *(char *)(p0 + 3438) = 0;
    *(char *)(p0 + 3440) = 1;
    *(char *)(p0 + 69) = 6;
    *(int *)(p0 + 12) = (*(int *)(p0 + 12) | 16);
    return tmp0;
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
void func_003136B0(char *p0) {
    float v0;
    int tmp2;
    v0 = 0.0f;
    *(float *)(p0 + 3400) -= *(float *)(p0 + 16);
    if (*(float *)(p0 + 3400) > v0) {
        tmp2 = ((V20_0_i *)(p0 + 3264))->m();
        return;
    } else {
        *(char *)(p0 + 3362) = 6;
        *(char *)(p0 + 3435) = 0;
        *(int *)(p0 + 3400) = 0x41f00000;
        return;
    }
}
}

class VC8_1_pv {
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
    virtual void m(char *);
};

class VCC_1_pi {
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
    virtual int m(char *);
};

extern "C" {
int func_00313720(char *p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 3361);
    v2 = 6;
    if (v1 != 0) {
        if (v1 != v2) {
            if (v1 != 7) {
                v5 = ((VCC_1_pi *)(v0 + 592))->m((v0 + 3296));
            }
        }
    }
    if (*(unsigned char *)(v0 + 3439) != 0) {
        v3 = *(unsigned char *)(v0 + 3362);
        v4 = 6;
        if (v3 != 0) {
            if (v3 != v4) {
                if (v3 != 7) {
                    ((VC8_1_pv *)(v0 + 1728))->m((v0 + 3296));
                    v5 = ((VCC_1_pi *)(v0 + 1728))->m((v0 + 3296));
                }
            }
        }
    }
    return v5;
}
}

extern "C" {
extern char D_01DFABA0[];
}

extern "C" {
int func_003137D0(char *);
}

extern "C" {
void func_003303F0(char *, int, int, int, int);
}

class V7C_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_00313930(char *p0, int p1, int p2) {
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    v0 = p0;
    *(char *)(p0 + 3441) = p2;
    v1 = *(signed char *)(p0 + 3441);
    v2 = p1;
    switch (v1) {
    case 0:
        ((V7C_1_iv *)(v0 + 592))->m(0x40100280);
        break;
    case 1:
        ((V7C_1_iv *)(v0 + 592))->m(0x40804030);
        break;
    case 2:
        ((V7C_1_iv *)(v0 + 592))->m(0x40800080);
        break;
    }
    if (*(unsigned char *)(v0 + 3439) != 0) {
        v3 = *(signed char *)(v0 + 3441);
        tmp0 = 2;
        if (v3 != tmp0) {
            switch (v3) {
            case 0:
                ((V7C_1_iv *)(v0 + 1728))->m(0x40100260);
                break;
            case 1:
                ((V7C_1_iv *)(v0 + 1728))->m(0x40804030);
                break;
            }
        } else {
            ((V7C_1_iv *)(v0 + 1728))->m(0x40800080);
        }
    }
    if (v2 != 0) {
        *(char *)(v0 + 3361) = 2;
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(((stk + -48) + 48)), "r"((v0 + 3296)) : "memory");
        func_003303F0(D_01DFABA0, 0, 5, 0, 0);
    } else {
        *(char *)(v0 + 3361) = 1;
        *(char *)(v0 + 3363) = 64;
    }
    tmp1 = func_003137D0(v0);
    *(char *)(v0 + 3437) = 0;
    return tmp1;
}
}

extern "C" {
int func_0028C740(...);
}

class VB4_4_iiiiv {
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
    virtual void m(int, int, int, int);
};

extern "C" {
int func_00313AE0(int p0, int p1) {
    char *v0;
    int tmp0;
    v0 = (char *)p0;
    if (p1 != 0) {
        *(char *)(v0 + 3361) = 4;
        *(char *)(v0 + 3362) = 4;
        if (*(unsigned char *)(v0 + 3439) != 0) {
            ((VB4_4_iiiiv *)(v0 + 1728))->m(0, 0, 0, 0);
            *(int *)(v0 + 3400) = 0;
        }
    } else {
        *(char *)(v0 + 3361) = 6;
        *(char *)(v0 + 3362) = 6;
        *(char *)(v0 + 3363) = 0;
        *(char *)(v0 + 3364) = 0;
    }
    tmp0 = func_0028C740((v0 + 3456));
    *(char *)(v0 + 3437) = 1;
    return tmp0;
}
}

class VB4_4_iiiii {
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
    virtual int m(int, int, int, int);
};

extern "C" {
int func_00313B70(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(unsigned char *)(p0 + 3439) != 0) {
        *(char *)(v0 + 3362) = 0;
        v1 = ((VB4_4_iiiii *)(v0 + 1728))->m(0, 0, 0, 0);
        *(char *)(v0 + 3364) = 0;
        *(int *)(v0 + 3400) = 0;
        *(int *)(v0 + 3396) = 0x42960000;
        *(char *)(v0 + 3436) = 0;
    }
    return v1;
}
}

class V24_1_ii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual int m(int);
};

extern "C" {
int func_00313C10(char *p0) {
    int v0;
    int v1;
    v0 = *(unsigned char *)(p0 + 3437);
    if (v0 == 1) {
        *(char *)(p0 + 3433) = 0;
        v1 = ((V24_1_ii *)(p0 + 3264))->m(v0);
    }
    return v1;
}
}
