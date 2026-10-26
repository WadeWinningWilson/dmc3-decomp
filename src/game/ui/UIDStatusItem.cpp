class ObjSnd {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
    virtual void m18(unsigned int, int);
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual int m2C();
};

extern "C" ObjSnd *D_005BC1A8;

extern "C" char D_01DFABA0[];

extern "C" char D_01DFA340[];

extern "C" char D_006663C0[];

extern "C" char D_01C61820[];

extern "C" char D_01CAF2B0[];

extern "C" unsigned short func_001AE360(char *, int);

extern "C" void func_003303F0(char *, int, int, int, int);

extern "C" void func_001B69F0(char *, int, int, int, int, int, int, int);

extern "C" void func_001B6BD0(char *, int, int);

extern "C" void func_001ECFF0(char *, int, int, int);

extern "C" int func_001ED110(char *);

extern "C" void func_0030EA90(char *, int);

extern "C" int func_00416B00(char *);

extern "C" void func_00416D30(char *);

extern "C" unsigned int func_00417C30(char *, int);

extern "C" int func_00417B50(char *, int);

class ObjSnd24 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24(int, int);
};

extern "C" void func_00416470(char *p) {
    unsigned int r;
    if (*(signed char *)(p + 0x330C) == 0 || *(signed char *)(p + 0x330C) == 5) {
        if (*(unsigned char *)(p + 0x3311) == 0) {
            if (*(unsigned char *)(p + 0x330D) != *(signed char *)(p + 0x32F5) + *(int *)(p + 0x3300) || *(unsigned char *)(p + 0x3310) == 0) {
                *(unsigned char *)(p + 0x3311) = 1;
            }
        }
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        switch (func_00416B00(p)) {
        case -1:
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            break;
        case 0:
            *(unsigned char *)(p + 5) = 10;
            break;
        case 1:
            *(unsigned char *)(p + 5) = 0x14;
            break;
        }
        break;
    case 1:
        func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        break;
    case 10:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 11:
        r = func_00417C30(p, *(int *)(p + 0x3314));
        func_001B69F0(D_01C61820, 0x20, 0x8C, 0xFFFFF1, (short)(r >> 16), (short)(r & 0xFFFF), 0x80404040, *(int *)(p + 0x1D4));
        func_001B6BD0(D_01C61820, 0x20000000, 0xFFFFF0);
        if (func_001AE360(D_006663C0, 0) & 0xD0) {
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 12:
        if (*(int *)(p + 0x3314) == 0x4E52) {
            func_00416D30(p);
        }
        ((ObjSnd24 *)D_005BC1A8)->m24(0, 0);
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        break;
    case 0x14:
        func_001ECFF0(D_01CAF2B0, 0x20, 0x8C, *(int *)(p + 0x3314));
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 0x15:
        r = func_00417C30(p, *(int *)(p + 0x3314)) + 10;
        func_001B69F0(D_01C61820, 0x20, 0x8C, 0xFFFFF1, (short)(r >> 16), (short)(r & 0xFFFF), 0x80404040, *(int *)(p + 0x1D4));
        func_001B6BD0(D_01C61820, 0x20000000, 0xFFFFF0);
        if (func_001AE360(D_006663C0, 0) & 0x80) {
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
            *(unsigned char *)(p + 5) = 0x1E;
            break;
        }
        switch (func_001ED110(D_01CAF2B0)) {
        case 0:
            break;
        case 1:
            D_005BC1A8->m18(0x80808080, 4);
            func_003303F0(D_01DFABA0, 0, 0x19, 0, 0);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            break;
        case 2:
        case -1:
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            *(unsigned char *)(p + 5) = 0x18;
            break;
        }
        break;
    case 0x16:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            D_005BC1A8->m14(0x20000000, 8);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 0x17:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            func_00416D30(p);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 0x18:
        ((ObjSnd24 *)D_005BC1A8)->m24(0, 0);
        if (*(unsigned char *)(p + 0x32F4) == 1) {
            *(unsigned char *)(p + 4) = 5;
            *(unsigned char *)(p + 5) = 0;
        } else {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    case 0x1E:
        func_0030EA90(D_01DFA340, func_00417B50(p, *(int *)(p + 0x3300) + *(signed char *)(p + 0x32F5)));
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 0x1F:
        func_001B69F0(D_01C61820, 0x40, 0x84, 0xFFFFF1, 0x180, 0x34, 0x80404040, *(int *)(p + 0x1D4));
        func_001B6BD0(D_01C61820, 0x20000000, 0xFFFFF0);
        if (func_001AE360(D_006663C0, 0) & 0xD0) {
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            D_01DFA340[0] = 0;
            *(unsigned char *)(p + 5) = 0x14;
        }
        break;
    }
}

extern "C" char D_00666750[];

extern "C" void func_001AF080(char *, int);

extern "C" void func_0013D5D0(char *);

extern "C" void func_00196C40(char *, char *);

extern "C" char D_006480D0[];

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

extern "C" void func_00415C80(char *p) {
    int i;
    if (*(int *)(p + 0x1D0) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x1D0));
        *(int *)(p + 0x1D0) = 0;
    }
    if (*(int *)(p + 0x1D4) != 0) {
        func_00196C40(D_006480D0, *(char **)(p + 0x1D4));
        *(int *)(p + 0x1D4) = 0;
    }
    for (i = 0; i < 7; i++) {
        ((ObjD0 *)(p + i * 0x600 + 0x200))->mD0();
    }
    ((ObjD0 *)(p + 0x2C00))->mD0();
    {
        int j;
        for (j = 0; j < *(int *)(p + 0x38); j++) {
            func_0013D5D0(p + j * 16 + 0x3C);
        }
    }
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

class VCC {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47();virtual void d48(); virtual void f(char *);
};

static inline void func_00415D50_v(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

extern "C" void func_00415D50(char *p) {
    int i;
    for (i = 0; i < 7; i++) {
        ((VCC *)(p + i * 0x600 + 0x200))->f(p + 0x32B0);
    }
    if (*(unsigned char *)(p + 0x3310) == 1) {
        *(float *)(p + 0x3280) = -140.0f;
        *(float *)(p + 0x3284) = 0.0f;
        *(float *)(p + 0x3288) = 0.0f;
        *(float *)(p + 0x328C) = 1.0f;
        UNIT(p + 0x32B0);
        func_00131700(p + 0x32B0, p + 0x32B0, p + 0x3290);
        func_00105230(p + 0x32B0, p + 0x32B0, p + 0x3280);
        func_001318E0(p + 0x32B0, p + 0x32B0, p + 0x32A0);
        {
            char *m = p + 0x32B0;
            ((VCC *)(p + 0x2C00))->f(m);
        }
        func_00415D50_v((float *)(p + 0x3280), 0.0f, 0.0f, 0.0f, 1.0f);
        UNIT(p + 0x32B0);
        func_00131700(p + 0x32B0, p + 0x32B0, p + 0x3290);
        func_00105230(p + 0x32B0, p + 0x32B0, p + 0x3280);
        func_001318E0(p + 0x32B0, p + 0x32B0, p + 0x32A0);
    }
}

extern "C" int func_001AFB90(char *, int, int, int);

extern "C" int func_00417B70(char *, int);

extern "C" int func_00417270(char *);

class W2C00 {
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
    virtual void m84(int, int);
    virtual void d88();
    virtual void m8C();
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
    virtual void mD0();
};

static inline int ok1D0(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" int func_00416FD0(char *p) {
    switch (*(signed char *)(p + 0x330C)) {
    case 0:
        if (*(unsigned char *)(p + 0x3311) == 0) break;
        if (*(unsigned char *)(p + 0x330D) == *(int *)(p + 0x3300) + *(signed char *)(p + 0x32F5)) {
            *(unsigned char *)(p + 0x3311) = 0;
            break;
        }
        if (*(unsigned char *)(p + 0x3310) == 1) {
            *(unsigned char *)(p + 0x330E) = 0x40;
            *(unsigned char *)(p + 0x330C) = 1;
        } else {
            *(unsigned char *)(p + 0x330C) = 5;
        }
        break;
    case 1:
        *(unsigned char *)(p + 0x330E) = *(unsigned char *)(p + 0x330E) - 0x10;
        if (0 < *(unsigned char *)(p + 0x330E)) {
            ((W2C00 *)(p + 0x2C00))->m84(*(unsigned char *)(p + 0x330E), 1);
        } else {
            ((W2C00 *)(p + 0x2C00))->m8C();
            *(unsigned char *)(p + 0x3310) = 0;
            *(unsigned char *)(p + 0x330C) = 2;
        }
        break;
    case 2: case 3:
        *(signed char *)(p + 0x330C) = *(signed char *)(p + 0x330C) + 1;
        break;
    case 4:
        ((W2C00 *)(p + 0x2C00))->mD0();
        *(signed char *)(p + 0x330C) = *(signed char *)(p + 0x330C) + 1;
    case 5:
        if (*(unsigned char *)(p + 0x3311) == 0) break;
        *(unsigned char *)(p + 0x330D) = *(int *)(p + 0x3300) + *(signed char *)(p + 0x32F5);
        if (*(int *)(p + 0x1D0) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x1D0));
            *(int *)(p + 0x1D0) = 0;
        }
        *(int *)(p + 0x1D0) = func_001AFB90(D_00666750, func_00417B70(p, *(unsigned char *)(p + 0x330D)), 0, 8);
        *(unsigned char *)(p + 0x330C) = 6;
    case 6:
        if ((unsigned char)ok1D0(*(unsigned char **)(p + 0x1D0)) != 1) break;
        if (*(unsigned char *)(p + 0x3311) == 0) {
            *(unsigned char *)(p + 0x330C) = 5;
            break;
        }
        if ((unsigned char)func_00417270(p) == 0) return 0;
        *(unsigned char *)(p + 0x330E) = 0;
        ((W2C00 *)(p + 0x2C00))->m84(*(unsigned char *)(p + 0x330E), 1);
        *(unsigned char *)(p + 0x330C) = 7;
        break;
    case 7:
        if (*(unsigned char *)(p + 0x330E) < 0x40) {
            *(unsigned char *)(p + 0x330E) = *(unsigned char *)(p + 0x330E) + 8;
            ((W2C00 *)(p + 0x2C00))->m84(*(unsigned char *)(p + 0x330E), 1);
        }
        if (*(unsigned char *)(p + 0x330E) >= 0x40) {
            ((W2C00 *)(p + 0x2C00))->m8C();
            *(unsigned char *)(p + 0x3311) = 0;
            *(unsigned char *)(p + 0x330C) = 0;
        }
        break;
    default:
        return 0;
    }
    return 1;
}
