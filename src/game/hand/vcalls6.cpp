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
