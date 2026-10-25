/* Hand-matched C++ (virtual calls), part 6: functions whose callee prototypes conflict
 * with declarations in vcalls.cpp .. vcalls5.cpp. */
#include "game/mt_rand.h"
extern "C" unsigned char D_01CAFF3C[];
extern "C" short D_00564468[];
extern "C" int func_004FD500(char *, int);
extern "C" void func_004FDDE0(char *);
extern "C" char *func_00207470(int, int, char *);
extern "C" void func_004FD550(char *, int);
extern "C" void func_004FD950(char *);
extern "C" void func_004FDA00(char *, int, float, float, float);
extern "C" int D_005785C0[];
extern "C" int D_005785C4[];
extern "C" char D_01DFABA0[];
extern "C" void func_003305E0(char *, int, int, float *, int, int, int);
extern "C" void func_00131700(char *, char *, char *);
extern "C" void func_00105230(char *, char *, char *);

static inline unsigned char st4FD(char *p) { unsigned char r; if (*(unsigned char *)(p + 0x2BE) != 0) r = 1; else r = 0; return r; }

extern "C" void func_004FD270(char *p, char *a, char *e, float *v) {
    float m[16] __attribute__((aligned(16)));
    unsigned char f;
    char *o;
    o = *(char **)(p + 0x2B4);
    f = 0;
    if (st4FD(p) == 1) return;
    if (*(unsigned char *)(p + 0x2BC) != 0) {
        if ((unsigned char)func_004FD500(p, 6) == 0 && *(signed char *)(a + 2) == 1 && *(signed char *)(e + 5) == 4) {
            *(unsigned char *)(p + 0x2BE) = 1;
            f = 3;
        }
    } else if (*(signed char *)(a + 2) == 0 && (*(signed char *)(e + 5) == 0 || *(signed char *)(e + 5) == 1)) {
        *(unsigned char *)(p + 0x2BE) = 1;
        f = 1;
        (*(short *)(p + 0x2C0))++;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(v) : "memory");
        if (o != 0) {
            if (!(*(short *)(p + 0x2C0) < D_00564468[D_01CAFF3C[0]])) {
                f |= 2;
                func_00207470(3, 0x1D, (char *)m);
            } else {
                func_004FDDE0(p);
                func_00207470(3, 0x1C, (char *)m);
            }
        } else {
            f |= 2;
            func_00207470(3, 0x1D, (char *)m);
        }
    }
    if (f & 2) {
        func_004FD550(p, 0);
        *(short *)(p + 0x2C0) = 0;
    }
    if (f & 1) {
        func_004FD950(p);
        func_004FDA00(p, 2, 18.0f, 2.0f, 3.0f);
    }
}

class O44C {
public:
    virtual void u8();
    virtual void uC();
    virtual void m10(int);
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual char *m24(int);
    virtual void u28();
    virtual void m2C(int, int);
};

extern "C" O44C *func_002F7C10(int, int);
extern "C" char *func_00207480(int, int, char *, int);
extern "C" void func_001AD140(char *);
extern "C" char *func_00279290(char *);
extern "C" void func_001A2180(char *, unsigned int, int);
extern "C" int func_0041D6B0(char *, float);
extern "C" void func_001A23D0(char *);
extern "C" void func_0034BA60(int, char *, int, int, int);
extern "C" void func_0028C740(char *);
extern "C" void func_0041D800(char *, float, float);
extern "C" void func_0041D6E0(char *, char *, int, float);
extern "C" float D_00564EBC[];
extern "C" float D_00564ED4[];
extern "C" float D_005BC238;
extern "C" float D_005BC23C;
extern "C" char D_01CAFF0C[];
extern "C" void func_0031E570(char *);
extern "C" void func_00330BD0(char *, int, char *, int, int);
extern "C" void func_002F2D30(char *, char *);
extern "C" int func_0024E780(char *, int, int);
extern "C" void func_0024E7B0(char *, int, int);
extern "C" void func_001A2840(char *, float, int);
extern "C" void func_001A29A0(char *);
extern "C" int func_0024E800(char *);
extern "C" char D_005BE098[8];
extern "C" void func_00206730(char *);
extern "C" void func_004F40D0(char *);
extern "C" void func_004F4400(char *);
extern "C" void func_004F4690(char *);
extern "C" void func_004F4A40(char *);
extern "C" void func_0028C8E0(char *, int);
extern "C" void func_0028C910(char *);
extern "C" char *func_0028C3A0(char *, int, int, char *);
extern "C" float func_0011DBE0(float, float);
extern "C" void func_004F50B0(char *);
extern "C" void func_0028C5C0(char *, int, float);
extern "C" void func_00195E20(char *, char *);
extern "C" void func_001AD100(char *);
extern "C" void func_003AD5C0(char *);
extern "C" void func_00450510(char *);
extern "C" void func_0044EBF0(char *);
extern "C" void func_0044EDA0(char *);
extern "C" void func_0044EE30(char *);
extern "C" void func_0044F0D0(char *);
extern "C" void func_0044F7B0(char *);
extern "C" void func_001318E0(char *, char *, char *);
extern "C" void func_002EF940(int, char *);
extern "C" void func_0044EB50(char *);
extern "C" char D_00577780[];
extern "C" char D_00577CB0[];
extern "C" float D_005BDA3C;
extern "C" int func_00437920(char *, char *, int *);
extern "C" int func_00437840(char *, char *, int *);
extern "C" int func_00433F50(char *, int, unsigned char);
extern "C" void func_00477690(char *, int);
extern "C" char *func_002FF750(int, char *, int);
extern "C" void func_003023F0(char *);
extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);
extern "C" void func_002530C0(char *, char *);

extern "C" void func_0044CF70(char *p, unsigned char k, unsigned char f) {
    float v[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    O44C *o;
    ((unsigned char *)(p + 0xE0))[k] = 1;
    o = func_002F7C10(D_005785C0[k * 2], 0);
    if (o != 0) {
        if (f == 0) {
            o->m2C(1, 0);
            r[0] = -1.5707963f;
            r[1] = 0.0f;
            r[2] = 0.0f;
            r[3] = 1.0f;
            __asm__ volatile("lqc2 $vf4, 0x30(%0)
	lqc2 $vf5, 0x0(%1)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%1)" : : "r"(o->m24(0)), "r"(v) : "memory");
            v[3] = 1.0f;
            func_003305E0(D_01DFABA0, 8, 0xA, v, 0x25, 0, 0);
            __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x270) : "memory");
            func_00131700(p + 0x270, p + 0x270, (char *)r);
            func_00105230(p + 0x270, p + 0x270, (char *)v);
            *(unsigned char *)(p + 0x265) = 1;
            *(int *)(p + 0x268) = 0;
            *(int *)(p + 0x2B0) = 0;
        } else {
            o->m2C(1, 1);
        }
    }
    o = func_002F7C10(D_005785C4[k * 2], 0);
    if (o != 0) {
        o->m10(0);
    }
    if (f == 0) {
        ((unsigned char *)(p + 0xF4))[*(unsigned char *)(p + 0x264)] = 1;
        ((float *)(p + 0xFC))[*(unsigned char *)(p + 0x264)] = 60.0f;
    } else {
        ((unsigned char *)(p + 0xF4))[*(unsigned char *)(p + 0x264)] = 2;
        ((int *)(p + 0xFC))[*(unsigned char *)(p + 0x264)] = 0;
    }
    ((unsigned char *)(p + 0xE5))[*(unsigned char *)(p + 0x264)] = 1;
    *(unsigned char *)(p + 0x264) = *(unsigned char *)(p + 0x264) + 1;
}

class B0_3D29 {
public:
    char pad[0x40];
};

class B1_3D29 {
public:
    int x;
};

class D_3D29 : public B0_3D29, public B1_3D29 {
public:
    int y;
};

extern "C" void func_003D29C0(D_3D29 *self) {
    char *p = (char *)self;
    char *e;
    float f;
    switch (*(int *)(p + 0xB54)) {
    case 0:
        *(float *)(p + 0xB64) = 0.0f;
        *(float *)(p + 0xB60) = 110.0f + 3.0f * (float)*(unsigned int *)(p + 0xB5C);
        *(int *)(p + 0xB54) = 1;
    case 1:
        if (!((*(float *)(p + 0xB64) += 2.0f * *(float *)(p + 0x10)) <= 64.0f)) {
            *(float *)(p + 0xB64) = 64.0f;
            if (*(char **)(p + 0xB50) == 0) {
                *(char **)(p + 0xB50) = func_00207480(3, 0x147, 0, 0x10);
                if ((e = *(char **)(p + 0xB50)) != 0) {
                    *(char **)(e + 0x90) = p + 0x1F0;
                    e[0x9A] = 0;
                    (*(char **)(p + 0xB50))[0x3A] = 1;
                } else {
                    func_001AD140(p);
                    return;
                }
            }
        }
        func_001A2180(func_00279290(p + 0x240), (unsigned int)*(float *)(p + 0xB64), 1);
        if ((unsigned char)func_0041D6B0(p + 0xB60, *(float *)(p + 0x10)) == 1) {
            func_00207480(3, 0x31C, p + 0x1F0, 0x10);
            func_001A23D0(func_00279290(p + 0x240));
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 30.0f;
            *(float *)(p + 0x6C) = 1.0f;
            *(float *)(p + 0xB60) = 300.0f;
            *(int *)(p + 0xB54) = 2;
        }
        break;
    case 2:
        e = *(char **)(p + 0x94C);
        if (e != 0 && (*(int *)(e + 8) & 0x30000)) {
            e = func_00207480(3, 0x31D, 0, 0x10);
            if (e != 0) {
                *(char **)(e + 0x90) = p + 0x1F0;
                e[0x9A] = 0;
                e[0x3A] = 1;
            }
            func_0034BA60(0x4E, p + 0x50, 0x32, 0, 1);
            func_0028C740(p + 0x8D0);
            *(float *)(p + 0xB60) = 10.0f;
            *(int *)(p + 0xB54) = 3;
        }
        func_0041D800(p + 0x68, *(float *)(p + 0x10), 60.0f);
        func_0041D6E0((char *)(B1_3D29 *)self, p + 0x60, 1, *(float *)(p + 0x10));
        *(float *)(p + 0x5C) = 1.0f;
    case 3:
        if ((unsigned char)func_0041D6B0(p + 0xB60, *(float *)(p + 0x10)) == 1) {
            func_001AD140(p);
            return;
        }
        break;
    }
}

class O2D3 {
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
    virtual float m1E0(unsigned int);
};

extern "C" void func_002D3A40(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(unsigned char *)(p + 0x1E2) = 3;
        *(unsigned char *)(p + 0x1E3) = 2;
        func_00330BD0(D_01DFABA0, 0x41, p + 0x50, 0x1E, 0);
        *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) = (int)((O2D3 *)p)->m1E0((unsigned int)D_00564EBC[0]);
        *(float *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = D_00564ED4[0];
        if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
            func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
        }
        func_00207480(3, 0x2DC, *(char **)(*(char **)(p + 0x678) + 0x104), 0x10);
        *(unsigned char *)(p + 0x3901) = 0;
    case 1:
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 0) == 1) {
            func_0024E7B0(p + 0x2F70, 0, 0);
            func_001A2840(func_00279290(p + 0x780), 1.0f / D_005BC238, 0xFFFFFF);
            func_001A2840(func_00279290(p + 0xD80), 1.0f / D_005BC238, 0xFFFFFF);
            func_001A2840(func_00279290(p + 0x1380), 1.0f / D_005BC238, 0xFFFFFF);
            *(unsigned char *)(p + 0x3901) = 1;
        }
        if (*(unsigned char *)(p + 0x3901) == 1) {
            func_001A29A0(func_00279290(p + 0x780));
            func_001A29A0(func_00279290(p + 0xD80));
            func_001A29A0(func_00279290(p + 0x1380));
        }
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) {
            (*(unsigned char *)(p + 5))++;
            *(unsigned char *)(p + 0x3904) = 1;
            *(float *)(p + 0x38EC) = 128.0f;
        }
        break;
    case 2:
        func_001A29A0(func_00279290(p + 0x780));
        func_001A29A0(func_00279290(p + 0xD80));
        func_001A29A0(func_00279290(p + 0x1380));
        *(float *)(p + 0x38EC) = *(float *)(p + 0x38EC) - D_005BC23C * *(float *)(p + 0x10);
        if (*(float *)(p + 0x38EC) < D_005BC23C) {
            *(float *)(p + 0x38EC) = 0.0f;
            *(unsigned char *)(p + 4) = 2;
        }
        break;
    }
}

class W4F3E {
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
    virtual void mC8(char *);
};

extern "C" void func_004F3E10(char *p) {
    func_00206730(p + 0x480);
    if (*(unsigned char *)(p + 0xBEC) == 1 && *(unsigned char *)(p + 0xBEE) != *(unsigned char *)(*(char **)(p + 0x484) + 0xB2CF)) {
        func_00207480(3, 0x34A, p + 0x170, 0x10);
        func_00330BD0(D_01DFABA0, 0x70, p + 0x50, 0x23, 0);
    }
    *(unsigned char *)(p + 0xBEE) = *(unsigned char *)(*(char **)(p + 0x484) + 0xB2CF);
    if (*(unsigned char *)(p + 0xBEC) == 1 && *(unsigned char *)(*(char **)(p + 0x484) + 0xB2CF) == 0) return;
    *(unsigned char *)(p + 0xBEC) = 0;
    *(int *)(p + 0xBC8) = 0;
    if (*(char **)(p + 0x22C) != 0) {
        *(int *)(p + 0xBC8) |= *(int *)(*(char **)(p + 0x22C) + 8);
    }
    if (*(char **)(p + 0x230) != 0) {
        *(int *)(p + 0xBC8) |= *(int *)(*(char **)(p + 0x230) + 8);
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_004F40D0(p);
        break;
    case 1:
        func_004F4400(p);
        break;
    case 2:
        func_004F4690(p);
        break;
    case 3:
        func_004F4A40(p);
        break;
    }
    if (!(*(int *)(p + 0xBCC) < 4)) {
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
    }
    if ((*(int *)(p + 0xBC8) & 0x40) && *(unsigned char *)(p + 0xBEF) == 0) {
        *(unsigned char *)(p + 0xBEF) = 1;
        *(float *)(p + 0xBE4) = 60.0f;
    }
    if (*(unsigned char *)(p + 0xBEF) == 1 && (*(float *)(p + 0xBE4) -= *(float *)(p + 0x10)) <= 0.0f) {
        func_0028C740(p + 0x1B0);
        *(unsigned char *)(p + 0xBEF) = 0;
        func_0028C8E0(p + 0x1B0, 0x12);
        func_0028C910(p + 0x1B0);
        func_0028C3A0(p + 0x1B0, 0, -1, p + 0x170);
        func_0028C3A0(p + 0x1B0, 1, -1, p + 0x170);
    }
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    func_004F50B0(p);
    ((W4F3E *)(p + 0x4C0))->mC8(p + 0x170);
    if (*(unsigned char *)(p + 0xBED) == 1) {
        func_0028C5C0(p + 0x1B0, 0, *(float *)(p + 0x10));
        func_00195E20(D_005BE098, p);
    }
}

class O44E {
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
    virtual void m60(int, int, int, int);
};

extern "C" void func_0044E780(char *p) {
    float v[4] __attribute__((aligned(16)));
    func_001AD100(p);
    func_003AD5C0(p + 0x83C);
    func_00206730(p + 0xCE0);
    func_00206730(p + 0xCE4);
    if (*(unsigned char *)(p + 0x805) == 0) return;
    func_00450510(p);
    func_0044EBF0(p);
    switch (*(unsigned char *)(p + 0x800)) {
    case 0:
        func_0044EDA0(p);
        break;
    case 1:
        func_0044EE30(p);
        break;
    case 2:
        func_0044F0D0(p);
        break;
    case 3:
        func_0044F7B0(p);
        break;
    }
    __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x1E0) + 0x104)) : "memory");
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x8D0), "r"(v) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x1E4) + 0x104)) : "memory");
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x950), "r"(v) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x880) : "memory");
    func_00131700(p + 0x880, p + 0x880, p + 0x860);
    func_00105230(p + 0x880, p + 0x880, p + 0x850);
    func_001318E0(p + 0x880, p + 0x880, p + 0x870);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x900) : "memory");
    func_00131700(p + 0x900, p + 0x900, p + 0x8E0);
    func_00105230(p + 0x900, p + 0x900, p + 0x8D0);
    func_001318E0(p + 0x900, p + 0x900, p + 0x8F0);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x980) : "memory");
    func_00131700(p + 0x980, p + 0x980, p + 0x960);
    func_00105230(p + 0x980, p + 0x980, p + 0x950);
    func_001318E0(p + 0x980, p + 0x980, p + 0x970);
    func_0028C5C0(p + 0xA10, 0, *(float *)(p + 0x10));
    if (*(unsigned char *)(p + 0x806) != 0) {
        *(float *)(func_00279290(p + 0x200) + 0x1B0) = *(float *)(p + 0x10);
        if (*(int *)(p + 0x814) != -1) {
            ((O44E *)(p + 0x200))->m60(*(int *)(p + 0x814), *(int *)(p + 0x818), (int)((float)*(int *)(p + 0x81C) * *(float *)(p + 0x10)), (int)((float)*(int *)(p + 0x820) * *(float *)(p + 0x10)));
        }
    }
    if (*(unsigned char *)(p + 0x807) != 0 && *(unsigned char *)(p + 0x800) != 3) {
        func_002EF940(*(int *)D_01CAFF0C, p + 0x9C0);
    }
    func_0044EB50(p);
    func_00195E20(D_005BE098, p);
}

class O503 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void m24(int);
    virtual void u28();
    virtual int m2C(char *, char *);
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void m3C(int);
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
    virtual void m84(int, int);
    virtual void u88();
    virtual void m8C();
};

static inline char *ent503(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch503(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent503(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" void func_00503C10(char *p) {
    char *a;
    char *b;
    float f;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 0x640) = 0;
        *(float *)(p + 0x650) = 0.0f;
        *(float *)(p + 0x654) = 0.0f;
        *(float *)(p + 0x658) = 0.0f;
        *(float *)(p + 0x65C) = 1.0f;
        *(float *)(p + 0x660) = 0.0f;
        *(float *)(p + 0x664) = 0.0f;
        *(float *)(p + 0x668) = 0.0f;
        *(float *)(p + 0x66C) = 1.0f;
        *(float *)(p + 0x670) = 1.0f;
        *(float *)(p + 0x674) = 1.0f;
        *(float *)(p + 0x678) = 1.0f;
        *(float *)(p + 0x67C) = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x680) : "memory");
        func_00131700(p + 0x680, p + 0x680, p + 0x660);
        func_00105230(p + 0x680, p + 0x680, p + 0x650);
        func_001318E0(p + 0x680, p + 0x680, p + 0x670);
        a = gch503(*(char **)(p + 0x38), 0);
        b = gch503(*(char **)(p + 0x38), 1);
        ((O503 *)(p + 0x40))->m24(1);
        if (!(unsigned char)((O503 *)(p + 0x40))->m2C(a, b)) goto fail;
        ((O503 *)(p + 0x40))->m3C(0);
        *(unsigned char *)(p + 0x6C8) = 4;
        *(unsigned char *)(p + 4) = 1;
    case 1:
        *(unsigned char *)(p + 0x6C8) += 4;
        if (*(unsigned char *)(p + 0x6C8) < 0x40) {
            ((O503 *)(p + 0x40))->m84(*(unsigned char *)(p + 0x6C8), 1);
        } else {
            ((O503 *)(p + 0x40))->m8C();
            *(unsigned char *)(p + 4) = 2;
        }
        break;
    case 2:
        f = *(float *)(p + 0x6C0);
        if (!(f < 0.0f)) {
            if ((*(float *)(p + 0x6C0) = f - 1.0f) < 0.0f) {
                *(float *)(p + 0x6C0) = 0.0f;
                *(unsigned char *)(p + 0x6C8) = 0x40;
                ((O503 *)(p + 0x40))->m84(*(unsigned char *)(p + 0x6C8), 1);
                *(unsigned char *)(p + 4) = 3;
            }
        }
        break;
    case 3:
        *(unsigned char *)(p + 0x6C8) -= 4;
        if (0 < *(unsigned char *)(p + 0x6C8)) {
            ((O503 *)(p + 0x40))->m84(*(unsigned char *)(p + 0x6C8), 1);
        } else {
            *(unsigned char *)(p + 4) = 4;
        }
        break;
    case 4:
        break;
    }
    if (*(unsigned char *)(p + 4) != 4) {
        func_00195E20(D_005BE098, p);
    }
    return;
fail:
    func_001AD140(p);
    *(unsigned char *)(p + 4) = 4;
}

typedef struct { float f[4]; } __attribute__((aligned(16))) Q476;

extern "C" Q476 D_0057BB60;
extern "C" void func_00133890(char *, char *, Q476 *);
extern "C" char *func_0027A710(char *);
extern "C" char *func_002D9F00(char *, int);
extern "C" void func_00104C00(char *, char *, char *);
extern "C" float func_001324E0(float *);
extern "C" int func_0024D850(char *);
extern "C" void func_00133450(char *, float *, char *);
extern "C" char *D_005BD0D8;
extern "C" int func_004F8EB0(char *);
extern "C" void func_00332AE0(char *, char *, float, float);
extern "C" void func_004F92D0(char *, int);
extern "C" void func_004F8FB0(char *);
extern "C" void func_004F8F20(char *);
extern "C" void func_004F8BB0(char *);
extern "C" float D_005786B0[];
extern "C" float D_005786E0[];
extern "C" void func_0044E700(char *, int, int);
extern "C" void func_00450550(char *, int);
extern "C" void func_0044FCA0(char *, int);
extern "C" short D_0054A0C0[];
extern "C" short D_01CAFF38[];
extern "C" float D_0055E1E0[];
extern "C" void func_002EB8A0(int, float *, int, int, float, float, float);
extern "C" void func_003586F0(char *, int);
extern "C" void func_001316B0(float, char *, float *, float *);
extern "C" float func_001324B0(void *, void *);
extern "C" int func_002018A0(char *, char *, char *, char *, char *, int);
extern "C" void func_002019D0(char *, float *, char *);
extern "C" void func_00316F30(char *, float *, int);
extern "C" void func_003176C0(char *, char *, char *);
extern "C" void func_0034B8C0(char *, short *, short);
extern "C" short func_0034B940(void *, void *);
extern "C" float D_0058C290[];
extern "C" char *D_005BE190[];

static inline float frand476(void) { return 2.3283064e-10f * (float)mt_rand(); }

extern "C" void func_00476EC0(char *p) {
    int t;
    Q476 q;
    char *g;
    char *e;
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 0x48F) = 0;
    *(unsigned char *)(p + 0x48E) = 0;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    if (*(unsigned char *)(p + 0x48D) == 1) {
        *(int *)(p + 0x484) = func_00437920(*(char **)(p + 0x468), p + 0x50, &t);
    } else {
        *(int *)(p + 0x484) = func_00437840(*(char **)(p + 0x468), p + 0x50, &t);
    }
    *(int *)(p + 0x484) = func_00433F50(*(char **)(p + 0x468), *(int *)(p + 0x484), *(unsigned char *)(p + 0x48C));
    func_00477690(p, *(int *)(p + 0x484));
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0x470), "r"(p + 0x50) : "memory");
    *(float *)(p + 0xFC) = 1.0f;
    q = D_0057BB60;
    func_00133890(p + 0x150, p + 0xF0, &q);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(char **)(p + 0x460) = func_00207470(3, 0x1DA, 0);
    if ((e = *(char **)(p + 0x460)) != 0) {
        *(char **)(e + 0x90) = p + 0x150;
        e[0x9A] = 3;
        g = *(char **)(p + 0x460);
        g[0x3A] = 1;
    }
    *(char **)(p + 0x464) = func_002FF750(0xB, p + 0x150, 1);
    if (*(char **)(p + 0x464) != 0) {
        func_003023F0(*(char **)(p + 0x464));
    }
    *(unsigned char *)(p + 0x3B0) = 5;
    *(unsigned char *)(p + 0x3B1) = 0;
    *(short *)(p + 0x3B2) = 0;
    *(unsigned char *)(p + 0x3B4) = 2;
    *(unsigned char *)(p + 0x3B5) = 0;
    *(short *)(p + 0x3B6) = 1;
    *(unsigned char *)(p + 0x3C0) = 2;
    *(float *)(p + 0x3D0) = 0.0f;
    *(float *)(p + 0x3D4) = 0.0f;
    *(float *)(p + 0x3D8) = 0.0f;
    *(float *)(p + 0x3DC) = 1.0f;
    *(float *)(p + 0x3E0) = 18.0f;
    *(unsigned char *)(p + 0x410) = 2;
    *(float *)(p + 0x420) = 0.0f;
    *(float *)(p + 0x424) = 0.0f;
    *(float *)(p + 0x428) = 0.0f;
    *(float *)(p + 0x42C) = 1.0f;
    *(float *)(p + 0x430) = 30.0f;
    func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 3, D_00577780, p, 0);
    *(int *)(p + 0x268) = 0x30443;
    func_0028C8E0(p + 0x190, 1);
    func_0028C910(p + 0x190);
    func_0028C3A0(p + 0x190, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x190, 1, -1, p + 0x150);
    *(int *)(p + 0x488) = 0;
    func_002530C0(p, D_00577CB0);
    *(float *)(p + 0x480) = D_005BDA3C + 10.0f * frand476();
}

static inline float frand4E0(void) { return 2.3283064e-10f * (float)mt_rand(); }

static inline int chk4E0(void) { char *o = *(char **)(*(char **)D_01CAFF0C + 0xC); unsigned char r; if (o == 0) return 0; if (*(unsigned char *)(o + 0x28A7) == 0) r = 0; else r = 1; return r; }

extern "C" void func_004E01F0(char *p, int i) {
    float v[4];
    float d[4] __attribute__((aligned(16)));
    char *o;
    char *m;
    float f;
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    m = *(char **)(func_0027A710(p + 0x180) + 0x108) + i * 64;
    func_00104C00(m, func_002D9F00(o, 2), p + i * 64 + 0x18B0);
    *(float *)(m + 0x3C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(m + 0x30), "r"(o + 0x50) : "memory");
    d[1] = 0.0f;
    if (!(func_001324E0(d) <= 50.0f)) {
        ((unsigned char *)(p + 0x5EC))[i] = 9;
        return;
    }
    ((signed char *)(p + 0x2187))[i] -= (signed char)func_0024D850(o);
    if (((signed char *)(p + 0x2187))[i] < 0) {
        v[1] = 1.0f;
        v[0] = 0.0f;
        v[2] = 0.0f;
        v[3] = 0.0f;
        func_00133450(m, v, m + 0x20);
        ((float *)(p + 0x16B4))[i] = 1.0f + frand4E0();
        ((unsigned char *)(p + 0x5EC))[i] = 8;
        return;
    }
    ((float *)(p + 0x1540))[i] -= *(float *)(p + 0x10);
    f = ((float *)(p + 0x1540))[i];
    if (f < 0.0f) {
        func_0028C910(p + 0x1320);
        if (func_0028C3A0(p + 0x1320, 0, -1, *(char **)(func_0027A710(p + 0x180) + 0x108) + i * 64) != 0) {
            ((float *)(p + 0x1638))[i] -= 10.0f;
            func_00207470(3, 0x226, *(char **)(func_0027A710(p + 0x180) + 0x108) + i * 64);
            func_0034BA60(0x3C, m + 0x30, 0x1C, 0, 1);
        } else {
            ((unsigned char *)(p + 0x5EC))[i] = 9;
        }
    }
    if (chk4E0() != 0) {
        ((unsigned char *)(p + 0x5EC))[i] = 9;
    }
}

extern "C" void func_004F7EB0(char *p) {
    char *o = *(char **)(p + 0x608);
    unsigned char st;
    func_00206730(p + 0x138);
    st = 0;
    if ((unsigned char)func_004F8EB0(p) == 1) st = 2;
    else if (*(unsigned char *)(p + 0x617) != 0) st = 1;
    if (st) {
        if (st == 1) func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005BD0D8 + 0xC0, 1.0f, 800.0f);
        if (o != 0) *(unsigned char *)(o + 0x2230) = 0;
        func_00207480(3, 0x362, p + 0x5B0, 0x10);
        func_004F92D0(p, 0x1E);
        if (*(char **)(p + 0x138) != 0) func_001AD140(*(char **)(p + 0x138));
        func_001AD140(p);
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(unsigned char *)(p + 0x618) != 0) {
            *(unsigned char *)(p + 5) = 1;
            *(unsigned char *)(p + 0x618) = 0;
            *(short *)(p + 0x90) = *(short *)(p + 0x90) - 0x8000;
            *(float *)(p + 0x68) = *(float *)(p + 0x68) * 1.05f;
            if (o != 0) *(unsigned char *)(o + 0x2230) = 2;
            func_0028C740(p + 0x140);
            func_004F8FB0(p);
            func_00207480(3, 0x18E, p + 0x5B0, 0x10);
            func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005BD0D8 + 0x80, 1.0f, 800.0f);
            func_004F92D0(p, 0x1F);
        }
        break;
    case 1:
        if (*(unsigned char *)(p + 0x618) != 0) {
            *(unsigned char *)(p + 5) = 0;
            *(unsigned char *)(p + 0x618) = 0;
            *(short *)(p + 0x90) = *(short *)(p + 0x90) - 0x8000;
            *(float *)(p + 0x68) = *(float *)(p + 0x68) * 1.05f;
            if (o != 0) *(unsigned char *)(o + 0x2230) = 1;
            func_0028C740(p + 0x140);
            func_004F8F20(p);
            func_00207480(3, 0x18E, p + 0x5B0, 0x10);
            func_004F92D0(p, 0x1F);
        }
        break;
    }
    func_004F8BB0(p);
}

class V44E {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8();
    virtual int gBC(float);
};

extern "C" void func_0044EE30(char *p) {
    float v[4] __attribute__((aligned(16)));
    unsigned char r;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        (*(unsigned char *)(p + 4))++;
        func_0044E700(p, 0, 1);
        func_0044E700(p, 1, 1);
        func_0044E700(p, 2, 0);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x1E4) + 0x104)) : "memory");
        func_003305E0(D_01DFABA0, 8, 0x7F, v, 0x2D, 0, 0);
        *(float *)(p + 0x838) = 55.0f;
        *(unsigned char *)(p + 5) = 0;
        break;
    case 1:
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            if ((*(float *)(p + 0x838) -= *(float *)(p + 0x10)) < 0.0f) {
                *(unsigned char *)(p + 0x80F) = 1;
                (*(unsigned char *)(p + 5))++;
            }
            break;
        case 1:
            break;
        }
        r = ((V44E *)(p + 0x200))->gBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            if (*(unsigned char *)(p + 0x804) == 0) *(float *)(p + 0x834) = D_005786B0[*(unsigned char *)(p + 0x803) + *(unsigned char *)(p + 0x802) * 2];
            else *(float *)(p + 0x834) = D_005786E0[*(unsigned char *)(p + 0x803) + *(unsigned char *)(p + 0x802) * 2];
            *(unsigned char *)(p + 0x804) = 0;
            (*(unsigned char *)(p + 4))++;
        }
        break;
    case 2:
        ((V44E *)(p + 0x200))->gBC(*(float *)(p + 0x10));
        if ((*(float *)(p + 0x834) -= *(float *)(p + 0x10)) < 0.0f) {
            func_00450550(p, 3);
            __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x1E4) + 0x104)) : "memory");
            func_003305E0(D_01DFABA0, 8, 0x80, v, 0x2D, 0, 0);
            (*(unsigned char *)(p + 4))++;
        }
        break;
    case 3:
        r = ((V44E *)(p + 0x200))->gBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            *(unsigned char *)(p + 0x80F) = 0;
            func_0044FCA0(p, 0);
        }
        break;
    }
}

class V358 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual float g68();
};

extern "C" void func_00358420(char *p, char *s, V358 *o, int a3) {
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    char *g;
    int i;
    int k;
    unsigned short key;
    short k2;
    int n;
    unsigned short *e;
    if (s != 0 && o != 0 && *(signed char *)(s + 2) == 0) {
        if (*(unsigned char *)(p + 0x7E2) == 0) {
            *(unsigned char *)(p + 0x7E2) = 1;
            *(int *)(p + 0x7E8) = 0;
            k2 = D_01CAFF38[0];
            g = *(char **)((*(char **)D_01CAFF0C) + 0x18);
            key = (short)(k2 % 100 + D_0054A0C0[k2 / 100]) | 0x100;
            for (i = 0; i < 0x30; i++) {
                e = (unsigned short *)((char *)(i * 2) + (int)g);
                if (e[0x310] == key) break;
                if (e[0x310] == 0) {
                    e[0x310] = key;
                    break;
                }
            }
        }
        *(float *)(p + 0x7E4) = *(float *)(p + 0x7E4) + *(float *)(s + 4) * o->g68();
        if (*(float *)(p + 0x7EC) <= 0.0f) {
            k = *(float *)(p + 0x7E4) / 750.0f;
            if (k > 6) k = 6;
            n = 0.1f * *(float *)(p + 0x7E4) * D_0055E1E0[k];
            w[0] = *(float *)(p + 0x550);
            w[1] = 70.0f + *(float *)(p + 0x554);
            w[2] = *(float *)(p + 0x558);
            w[3] = 1.0f;
            func_002EB8A0(n, w, 0, 1, 120.0f, 50.0f, -100.0f + *(float *)(p + 0x554));
            *(float *)(p + 0x7EC) = 30.0f;
        }
        func_003586F0(p, a3);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(p + 0x520) : "memory");
        v[3] = 1.0f;
        func_003305E0(D_01DFABA0, 8, 0x14, v, 0x21, 0, 0);
    }
}

typedef struct { float v[4]; float r; } V508;
extern "C" void func_004CBBE0(float, char *);
extern "C" void func_004CBD90(char *);
extern "C" int func_004D2610(char *);
extern "C" char **func_004D2740(char *);
extern "C" int func_004D2BB0(char *);
extern "C" unsigned char D_005BDF38;
extern "C" int func_004D2D90(char *);
extern "C" void func_00105760(float, float *, float *);
extern "C" int func_0034B800(float, char *, char *, short, short);
extern "C" int func_002D9EB0(char *);
extern "C" void func_004E8DB0(float *, float *, int);
extern "C" float D_0058ADF0[];
extern "C" float D_005BDE34;
extern "C" short D_005BDE30;
extern "C" short D_005BDE32;
extern "C" float func_004D32F0(char *);
extern "C" int func_004D2890(float, char *, float *, int);
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
extern "C" float D_005BDE10;
extern "C" float D_005BDE14;
extern "C" unsigned char D_005BDE20[8];
extern "C" float D_005BDE28;
extern "C" float D_005BDE2C;
extern "C" float D_005BDE00;
extern "C" float D_005BDE98;
extern "C" float D_005BDE9C;
extern "C" float D_005BDEA0;
extern "C" float D_005BDEA4;
extern "C" float D_005BDEA8;
extern "C" int func_004321F0(char *);
extern "C" int func_001AEA60(char *, int, int);
extern "C" int func_0031B860(float, int, char *, int);
extern "C" void func_00208050(char *, int);
extern "C" void func_0034B270(int, char *, int);
extern "C" char D_00666750[];
extern "C" float D_005BD9E8;
extern "C" int D_005BD9F0;
extern "C" int D_005BD9F4;
extern "C" void func_002D90A0(float, char *);
extern "C" void func_002EB840(int, float *, float);
extern "C" void func_00440170(char *);
extern "C" float D_00575A84[];
extern "C" float D_00575AE4[];
extern "C" float D_00575A6C[];
extern "C" float D_00575860[];
extern "C" float D_005758A0[];
extern "C" char *func_002792A0(char *);
extern "C" int func_001AED80(char *, int, int, int);
extern "C" void func_0024D9F0(char *, int, int, int, char *, char *, char *, char *, char *);
extern "C" void func_001FEBA0(char *, int);
extern "C" void func_001FBC70(char *, char *, char *);
extern "C" void func_0024E820(char *, int);

extern "C" void func_00508AB0(char *p) {
    short d;
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    char c[0x40];
    V508 w __attribute__((aligned(16)));
    short k;
    unsigned char f;
    float l;
    char *g = D_005BE190[0];
    f = 0;
    *(float *)(p + 0x210) = 0.08726646f;
    func_00316F30(p, a, 0);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b), "r"(g + 0x50) : "memory");
    b[1] += 100.0f;
    b[3] = 1.0f;
    func_001316B0(0.4f, p + 0x190, b, a);
    *(float *)(p + 0x19C) = 1.0f;
    l = func_001324B0(a, p + 0x190) / 0.4142129f;
    *(float *)(p + 0x238) = l;
    if (l < 450.0f) *(float *)(p + 0x238) = 450.0f;
    func_003176C0(p, p + 0x1A0, p + 0x190);
    if ((unsigned char)func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, p + 0x190, p + 0x1A0, p + 0x1A0, c, 8) == 1) {
        f = 1;
    } else if (func_001324B0(p + 0x190, p + 0x1A0) < 200.0f) {
        f = 1;
    } else if (!(*(float *)(p + 0x238) <= 800.0f)) {
        f = 1;
    }
    if (f == 1) {
        if (!(func_001324B0(a, D_0058C290) <= 800.0f)) {
            d = func_0034B940(a, D_0058C290);
        } else {
            d = *(short *)(p + 0x24A);
        }
        d = d - *(short *)(p + 0x24A);
        k = d;
        if (k < 0) k = -k;
        if (k > 0xB6) k = 0xB6;
        func_0034B8C0(p + 0x24A, &d, k);
        *(float *)(p + 0x214) = 6.283185f * ((float)*(short *)(p + 0x24A) / 65536.0f);
        func_003176C0(p, p + 0x1A0, p + 0x190);
        w.r = 100.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(w.v), "r"(p + 0x1A0) : "memory");
        func_002019D0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, w.v, p + 0x1B0);
        *(float *)(p + 0x1A0) = w.v[0];
        *(float *)(p + 0x1A8) = w.v[2];
        *(float *)(p + 0x1AC) = 1.0f;
    }
}

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

#define FB(t, o) (*(t *)(p + (o)))

static inline void attach4C9(char *e, char *t) {
    *(char **)(e + 0x90) = t;
    *(unsigned char *)(e + 0x9A) = 3;
}

extern "C" void func_004C9AB0(char *p) {
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

extern "C" void func_004C7130(char *p) {
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

extern "C" void func_004C9F50(char *p) {
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

extern "C" void func_004CA400(char *p) {
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

extern "C" void func_004C5CC0(char *p) {
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

static inline char *seg_n(char *t, unsigned int i) {
    if (*(unsigned int *)(t + 4) < i + 1) {
        return 0;
    }
    if (((int *)(t + 8))[i] == 0) {
        return 0;
    }
    return t + ((int *)(t + 8))[i];
}

static inline char *motion_at(char *o, unsigned int i) {
    if (**(unsigned short **)(o + 8) == 0) {
        return seg_n(*(char **)(o + 0xC), i);
    }
    return *(char **)(o + 0xC);
}

static inline void tgtInit(char *t) {
    int i;
    *(unsigned char *)(t + 0) = 0;
    *(unsigned char *)(t + 1) = 0;
    *(short *)(t + 2) = 0;
    *(int *)(t + 8) = 0;
    *(int *)(t + 0xC) = 0;
    *(int *)(t + 0x10) = 0;
    *(int *)(t + 0x20) = 0;
    *(int *)(t + 0x24) = 0;
    *(int *)(t + 0x28) = 0;
    *(float *)(t + 0x2C) = 1.0f;
    *(float *)(t + 0x30) = 100000.0f;
    *(unsigned char *)(t + 0x34) = 0;
    *(unsigned char *)(t + 0x35) = 0;
    *(short *)(t + 0x36) = 0;
    for (i = 0; i < 10; i++)
        *(short *)(t + i * 2 + 0x38) = -1;
}

static inline void tgtSet(char *t, char *p, char *x, char *o) {
    tgtInit(t);
    *(unsigned char *)(t + 0) = 0;
    *(unsigned char *)(t + 1) = 0;
    *(short *)(t + 2) = 0x10;
    *(short *)(t + 4) = 0;
    *(char **)(t + 8) = p;
    *(char **)(t + 0xC) = x;
    *(char **)(t + 0x10) = o;
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(o), "r"(t + 0x20) : "memory");
}

static inline void sub431(char *o, char *s) { *(char **)(o + 0xFC) = s; }

extern "C" void func_00431EE0(char *p) {
    FB(signed char, 0x44) = -1;
    FB(signed char, 0x45) = 3;
    FB(signed char, 0x46) = FB(signed char, 0x480);
    FB(signed char, 0x47) = 0x25;
    FB(short, 0x4850) = FB(short, 0x4A0);
    if ((unsigned char)func_004321F0(p) == 0) {
        func_001AD140(p);
        return;
    }
    if (FB(unsigned char, 0x485E) == 0)
        FB(int, 0x47AC) = func_0031B860(FB(float, 0x4624), func_001AEA60(D_00666750, 6, 3), p + 0x4624, 0);
    func_00208050(motion_at(FB(char *, 0x4C0), 0x1C), 2);
    tgtSet(p + 0x45D0, p, p + 0x4620, *(char **)(FB(char *, 0x4D0) + 0x104));
    sub431(FB(char *, 0x4CC), p + 0x34B0);
    FB(unsigned char, 0x34BC) = 0;
    FB(float, 0x34E0) = 0.17453292f;
    FB(float, 0x34E4) = 0.17453292f;
    FB(float, 0x34E8) = 0.0f;
    FB(float, 0x34EC) = 0.0f;
    FB(float, 0x34D0) = 0.0f;
    FB(float, 0x34D4) = 0.0f;
    FB(float, 0x34D8) = 0.0f;
    FB(float, 0x34DC) = 0.0f;
    FB(float, 0x34F0) = 0.0f;
    FB(float, 0x34F4) = 0.0f;
    FB(float, 0x34F8) = 0.0f;
    FB(float, 0x34FC) = 0.0f;
    FB(unsigned char, 0x4857) = 1;
    FB(unsigned char, 0x4858) = 0;
    FB(unsigned char, 0x4859) = 1;
    FB(unsigned char, 0x485A) = 0;
    FB(unsigned char, 0x485B) = 1;
    FB(unsigned char, 0x485C) = 0;
    FB(unsigned char, 0x4860) = 0;
    FB(unsigned char, 0x4861) = 0;
    FB(float, 0x4820) = D_005BD9E8;
    FB(int, 0x47C4) = D_005BD9F0;
    FB(int, 0x47C8) = 0;
    FB(int, 0x47CC) = 0;
    FB(int, 0x47D0) = 0;
    FB(int, 0x47D4) = 0;
    FB(int, 0x47D8) = 0;
    FB(int, 0x47DC) = D_005BD9F4;
    FB(int, 0x47E0) = 0;
    FB(unsigned char, 0x4863) = 0;
    FB(float, 0x34A0) = 1.0f;
    FB(float, 0x47A4) = 0.0f;
    FB(float, 0x4834) = 0.0f;
    FB(float, 0x47A8) = 0.0f;
    FB(float, 0x4838) = 0.0f;
    FB(float, 0x483C) = 0.0f;
    FB(float, 0x4840) = 0.0f;
    FB(int, 0x47C0) = 0;
    if (FB(unsigned char, 0x485E) == 0)
        func_0034B270(10, p, 0);
    FB(unsigned char, 4)++;
}

struct V43F {
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
    virtual int mBC(float);
};

extern "C" void func_0043F600(char *p) {
    float v[4] __attribute__((aligned(16)));
    char *q;
    int r;
    int j;
    float f;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        (*(unsigned char *)(p + 4))++;
        if (*(signed char *)(p + 0x7C1) == 0) {
            f = D_00575A84[0];
            func_002D90A0(f, *(char **)(*(char **)D_01CAFF0C + 0xC));
            v[0] = 5710.0f;
            v[1] = 100.0f;
            v[2] = 3354.0f;
            v[3] = 1.0f;
        } else {
            f = D_00575AE4[0];
            func_002D90A0(f, *(char **)(*(char **)D_01CAFF0C + 0xC));
            __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x1B0) + 0x104)) : "memory");
            *(volatile float *)D_00575A6C;
        }
        func_002EB840((int)D_00575860[*(unsigned char *)(p + 0x7C2)], v, 100.0f);
        func_003305E0(D_01DFABA0, 8, 0x7B, v, 0x2D, 0, 0);
        break;
    case 1:
        r = (unsigned char)((V43F *)(p + 0x1C0))->mBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            j = *(unsigned char *)(*(char **)(p + 0x804) + 0x803);
            r = *(unsigned char *)(p + 0x7C2) * 2;
            *(float *)(p + 0x7F8) = D_005758A0[r + j];
            q = *(char **)(p + 0x804);
            if (*(unsigned char *)(q + 0x80A) == 0) {
                *(unsigned char *)(q + 0x80A) = 1;
            } else {
                *(unsigned char *)(q + 0x80B) = 1;
            }
            (*(unsigned char *)(p + 4))++;
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x7C5) != 0) {
            if ((*(float *)(p + 0x7F8) = *(float *)(p + 0x7F8) - *(float *)(p + 0x10)) < 0.0f) func_00440170(p);
        }
        break;
    }
}

struct V248 {
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
    virtual void mB0(char *, char *);
};

static inline void wsw248(char *p, int k, int i, char *w) {
    char *o = p + k * 0x600 + 0x180;
    ((V248 *)o)->mB0(w, p + (i * 0x60 + 0x1380));
    *(unsigned char *)(func_002792A0(o) + 0x104) = 0;
    *(char **)(*(char **)(p + i * 4 + 0x1384) + 0xFC) = p + (i * 0x60 + 0x25A0);
    *(unsigned char *)(p + (i * 0x60 + 0x25AC)) = 0;
    *(int *)(p + (i * 0x60 + 0x25C0)) = 0;
    *(int *)(p + (i * 0x60 + 0x25C4)) = 0;
    *(int *)(p + (i * 0x60 + 0x25C8)) = 0;
    *(int *)(p + (i * 0x60 + 0x25CC)) = 0;
    *(int *)(p + (i * 0x60 + 0x25D0)) = 0;
    *(int *)(p + (i * 0x60 + 0x25D4)) = 0;
    *(int *)(p + (i * 0x60 + 0x25D8)) = 0;
    *(int *)(p + (i * 0x60 + 0x25DC)) = 0;
    func_0024D9F0(p + (i * 0x1A0 + 0x41F0), func_001AED80(D_00666750, 0, (unsigned short)*(signed char *)(p + 0x46), 5), 1, 0, p + 0x243C,
                  p + (i * 0x600 + 0x184), p + (i * 0x60 + 0x1380), p + 0x2434, p + 0x47A0);
    func_0024D9F0(p + (i * 0x1A0 + 0x4120), func_001AED80(D_00666750, 0, (unsigned short)*(signed char *)(p + 0x46), 5), 0, 0, p + 0x243C,
                  p + (i * 0x600 + 0x184), p + (i * 0x60 + 0x1380), p + 0x2434, 0);
    func_001FEBA0(func_002792A0(p + (i * 0x600 + 0x180)), 0);
}

extern "C" void func_00248BB0(char *p, int k) {
    char *w = *(char **)(p + 0x243C);
    switch (k) {
    case 0:
        wsw248(p, k, 0, w);
        break;
    case 1:
        wsw248(p, k, 1, w);
        break;
    case 2:
        wsw248(p, k, 2, w);
        break;
    case 3:
        func_001FBC70(p + 0x2214, func_00279290(p + *(unsigned char *)(p + 0x28A0) * 0x600 + 0x180), p + 0x14A0);
        *(unsigned char *)(p + 0x2318) = 0;
        func_0024D9F0(p + 0x46D0, func_001AED80(D_00666750, 0, (unsigned short)*(signed char *)(p + 0x46), 5), 1, 0, p + 0x243C, p + 0x2214,
                      p + 0x14A0, p + 0x2434, 0);
        func_0024D9F0(p + 0x4600, func_001AED80(D_00666750, 0, (unsigned short)*(signed char *)(p + 0x46), 5), 0, 0, p + 0x243C, p + 0x2214,
                      p + 0x14A0, p + 0x2434, 0);
        func_0024E820(p + 0x46D0, 0);
        func_0024E820(p + 0x4600, 0);
        break;
    }
}
