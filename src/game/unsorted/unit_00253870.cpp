#include "game/mt_rand.h"
extern "C" {
void func_002DBAA0(char *p, int a, float f);
}

extern "C" char D_01DF5D20[];

extern "C" char D_01DFABA0[];

extern "C" char D_00666710[];

extern "C" char D_0066671A[];

extern "C" int D_01DFAB74[];

extern "C" void func_0021CBB0(char *, int);

extern "C" void func_002DAF70(char *, int, int, int, float);

extern "C" void func_002490F0(char *, int, int, int, int, int, float);

extern "C" int func_002D9EB0(char *);

extern "C" void func_002F30B0(int, char *, char *);

extern "C" void func_002DB2C0(char *);

extern "C" void func_00330B50(char *, int, char *, int);

extern "C" void func_003305E0(char *, int, int, char *, int, int, int);

extern "C" unsigned short func_001AE770(char *, int);

extern "C" int func_002496D0(char *);

extern "C" void func_0026D0B0(char *);

extern "C" void func_004BC840(char *, char *, short, int);

extern "C" void func_0026FB70(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x4E4));
        func_002490F0(p, 0x10, 9, -1, 0, 0, -1.0f);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
        *(float *)(p + 0x2870) = 0.0f;
        *(float *)(p + 0x2874) = 0.0f;
        *(unsigned char *)(p + 0x2866) = 1;
        *(unsigned char *)(p + 0x2867) = 1;
        *(unsigned char *)(p + 0x2868) = 0;
        func_002F30B0(0x3A, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) + *(float *)(p + 0x10);
        if (!(*(float *)(p + 0x2870) <= *(float *)(*(char **)(p + 0x2844) + 0x4EC)) && *(unsigned char *)(p + 0x2868) == 0) {
            func_00330B50(D_01DFABA0, (mt_rand() & 1) + 0xB, p + 0x50, 3);
            *(unsigned char *)(p + 0x2868) = 1;
        }
        if (!(*(float *)(p + 0x2870) <= *(float *)(*(char **)(p + 0x2844) + 0x4F0))) {
            *(float *)(p + 0x2874) = *(float *)(p + 0x2874) - *(float *)D_01DF5D20;
            if (*(float *)(p + 0x2874) < 0.0f) {
                *(float *)(p + 0x2874) = 15.0f + (float)(mt_rand() % 5);
                func_003305E0(D_01DFABA0, 0, mt_rand() % 3 + 0x42, p + 0x50, 0, 0, 0);
            }
        }
        if (!(*(float *)(p + 0x2870) <= *(float *)(*(char **)(p + 0x2844) + 0x4E8)) &&
            !(*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x20)])) {
            *(unsigned char *)(p + 0x2866) = 0;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned char *)(p + 0x2866) == 0) {
                func_002490F0(p, 0x10, 0xA, -1, 0, 0, -1.0f);
                *(short *)(p + 0x2856) = 0;
                if (!(*(float *)(p + 0x2870) <= *(float *)(*(char **)(p + 0x2844) + 0x4EC))) {
                    *(short *)(p + 0x2856) = 1;
                }
                if (!(*(float *)(p + 0x2870) <= *(float *)(*(char **)(p + 0x2844) + 0x4F0))) {
                    *(short *)(p + 0x2856) = 2;
                }
                *(float *)(p + 0x2878) = 1.0f;
                *(unsigned char *)(p + 0x284D) = 0;
                *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
            } else {
                func_002490F0(p, 0x10, 0x16, -1, 0, 0, 51.0f);
                *(unsigned char *)(p + 0x2867) = 0;
            }
        } else {
            if (*(unsigned char *)(p + 0x2867) == 1) {
                func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
            }
            *(unsigned char *)(p + 0x2867) = 1;
        }
        break;
    case 2:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0026D0B0(p);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            *(float *)(p + 0x2878) = *(float *)(p + 0x2878) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2878) < 0.0f) {
                func_004BC840(p, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), *(short *)(p + 0x90), *(unsigned char *)(p + 0x2856));
                D_01DFAB74[0] = D_01DFAB74[0] | 0x4000000;
                switch (*(short *)(p + 0x2856)) {
                case 0:
                    break;
                case 1:
                    func_00330B50(D_01DFABA0, 0xD, p + 0x50, 3);
                    break;
                case 2:
                    func_00330B50(D_01DFABA0, 0xD, p + 0x50, 3);
                    func_00330B50(D_01DFABA0, 0xE, p + 0x50, 3);
                    break;
                }
                *(unsigned char *)(p + 0x284D) = *(unsigned char *)(p + 0x284D) + 1;
            }
            break;
        case 1:
            break;
        }
        break;
    }
}

extern "C" char *func_00279290(char *);

extern "C" void func_001A5C30(char *);

extern "C" void func_001A5D00(char *);

class ObjS18 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual int m18();
};

extern "C" void func_00259A60(char *p, unsigned char k) {
    unsigned int i;
    char *q;
    switch (k) {
    case 1:
    default:
        q = p;
        for (i = 0; i < 5; i++) {
            if ((unsigned char)((ObjS18 *)(q + 0x4A00))->m18() == 1) {
                func_001A5C30(func_00279290(q + 0x4A00));
            }
            q += 0x600;
        }
        break;
    case 2:
        q = p;
        for (i = 0; i < 5; i++) {
            if ((unsigned char)((ObjS18 *)(q + 0x4A00))->m18() == 1) {
                func_001A5D00(func_00279290(q + 0x4A00));
            }
            q += 0x600;
        }
        break;
    }
}

extern "C" int D_01CAFF14[];

extern "C" void func_001A29A0(char *);

extern "C" int func_00277EF0(char *, float);

extern "C" void func_00278060(char *, int);

extern "C" void func_002D9DF0(char *);

extern "C" void func_00259B30(char *);

class Obj17C {
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
    virtual void m17C();
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
    virtual void m1F0(int, int);
};

extern "C" void func_00259730(Obj17C *o) {
    char *p = (char *)o;
    unsigned int i;
    o->m17C();
    if ((unsigned char)func_00277EF0(p + 0x26C0, *(float *)(p + 0x10)) == 1) {
        func_00278060(p + 0x26C0, D_01CAFF14[0]);
    }
    if (*(unsigned char *)(p + 0x28A0) == 0) {
        func_002D9DF0(p);
    }
    func_00259B30(p);
    for (i = 0; i < 5; i++) {
        if ((unsigned char)((ObjS18 *)(p + 0x4A00))->m18() == 1) {
            func_001A29A0(func_00279290(p + 0x4A00));
        }
        p += 0x600;
    }
}

extern "C" float func_00132470(char *, char *);

class ObjGr12C {
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
    virtual void d60(); virtual void d61(); virtual void d62(); virtual int m104(int); virtual void d64(); virtual void d65();
    virtual void d66(); virtual void d67(); virtual void d68(); virtual void d69(); virtual void d70(); virtual void d71();
    virtual void m128(char *); virtual void m12C(float *);
};

extern "C" int func_002717F0(char *p) {
    float lim = 24.0f;
    ObjGr12C *o = *(ObjGr12C **)(p + 0x29D0);
    float v[4];
    signed char k;
    if (o == 0) {
        return 0;
    }
    if (*(unsigned char *)((char *)o + 0x18) != 2) {
        return 0;
    }
    if (*(unsigned char *)(p + 0x299B) == 0 && (unsigned char)o->m104(0) == 1) {
        (*(ObjGr12C **)(p + 0x29D0))->m12C(v);
        k = *(signed char *)(*(char **)(p + 0x29D0) + 0x46);
        if (k == 0x18 || (unsigned int)(k - 0xC) <= 2 || k == 0xF) {
            lim = 28.0f;
        }
        if (func_00132470(p + 0x29B0, (char *)v) < lim) {
            (*(ObjGr12C **)(p + 0x29D0))->m128(p + 0x29B0);
            return 1;
        }
    }
    return 0;
}

extern "C" void func_0013D5D0(char *);

extern "C" char D_01CAFF0C[];

class VD0 {
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

class V14 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14();
};

extern "C" void func_00477DB0(char *);

extern "C" void func_00205370(char *);

class V154 {
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
    virtual unsigned char m154();
};

extern "C" {
void func_0025AD10(char *p) {
    extern void func_002052E0(char *);
    unsigned int i;
    char *f;
    for (i = 0; i < 5; i++) {
        f = p + i + 0x6800;
        if (*(unsigned char *)(p + i + 0x6800) != 0) {
            ((VD0 *)(p + i * 0x600 + 0x4A00))->mD0();
            *f = 0;
            if (((V154 *)p)->m154() == 1) ((V14 *)(p + i * 0x90 + 0x69C0))->m14();
        }
    }
    for (i = 0; i < 3; i++) {
        if (((V154 *)p)->m154() == 1) ((V14 *)(p + i * 0x90 + 0x6810))->m14();
    }
    func_00477DB0(p + 0x3D08);
    func_0013D5D0(p + 0x3D34);
    if (*(char **)(p + 0x3D44) != 0) {
        func_00205370(*(char **)(p + 0x3D44));
        *(char **)(p + 0x3D44) = 0;
        *(int *)(*(char **)D_01CAFF0C + 0x10) = 0;
    }
    func_002052E0(p);
}
}

extern "C" char *func_00207480(int, int, int, int);

extern "C" void func_0026F990(char *p) {
    char *o;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x484));
        func_002490F0(p, 0x10, 5, -1, 0, 0, -1.0f);
        o = func_00207480(3, 0x90, 0, 8);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
            o[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0026D0B0(p);
        } else {
            if (*(unsigned char *)(p + 0x24D5) == 1) {
                o = func_00207480(3, 0x38E, 0, 8);
                if (o) {
                    *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104);
                    o[0x9A] = 0;
                }
            }
            if (*(unsigned char *)(p + 0x24D5) == 2) {
                func_002F30B0(0x10, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1380) + 0x104), p);
            }
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

extern "C" void func_0021B790(char *, int);

extern "C" void func_0026A0B0(char *p) {
    char *o;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x3CC));
        func_002490F0(p, 4, 0x16, -1, 0, 0, -1.0f);
        o = func_00207480(3, 0x90, 0, 8);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
            o[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 4, 0x17, -1, 0, 0, -1.0f);
            (*(unsigned char *)(p + 0x284C))++;
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

extern "C" void func_0026F790(char *p) {
    char *o;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x484));
        func_002490F0(p, 0x10, 3, -1, 0, 0, -1.0f);
        *(short *)(p + 0x2856) = 2;
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            if (--*(short *)(p + 0x2856) < 0) {
                func_002490F0(p, 0x10, 4, -1, 0, 0, -1.0f);
                (*(unsigned char *)(p + 0x284C))++;
                break;
            }
            func_002490F0(p, 0x10, 0x15, -1, 0, 0, 31.0f);
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 2:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0026D0B0(p);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            o = func_00207480(3, 0x38E, 0, 8);
            if (o) {
                *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104);
                o[0x9A] = 0;
            }
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

extern "C" void func_0025EE70(char *, int, float, float, float);

extern "C" int func_003330C0(char *, int);

extern "C" void func_00264E20(char *, int, int);

extern "C" int func_0025EE90(char *);

extern "C" void func_00266830(char *p) {
    char *o;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 0x13, 5, -1, 0, 0, -1.0f);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x9C));
        func_0025EE70(p, 0x10, *(float *)(*(char **)(p + 0x2844) + 0x628), *(float *)(*(char **)(p + 0x2844) + 0x62C), *(float *)(*(char **)(p + 0x2844) + 0x630));
        if (*(signed char *)(p + 0x7D35) == 0) {
            if ((unsigned char)func_003330C0(p + 0x3D90, 0x260) == 1) {
                p[0x7D37] = 0;
            } else {
                p[0x7D37] = 1;
            }
        }
        func_00264E20(p, 8, 0);
        p[0x2866] = 0;
        o = func_00207480(3, 0x90, 0, 8);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
            o[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        p[0x3B9E] = 0;
        func_002DB2C0(p);
        if ((unsigned char)func_0025EE90(p) == 0) p[0x2866] = 1;
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned char *)(p + 0x2866)) {
                func_0021B790(p, 0xA);
            } else {
                func_002490F0(p, 0x13, 5, -1, 0, 0, -1.0f);
                func_00264E20(p, 8, 0);
            }
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

extern "C" void func_0025D300(char *p) {
    int d;
    short m;
    float t;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x14));
        func_002490F0(p, 3, 0x1D, -1, 0, 0, -1.0f);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        *(float *)(p + 0x29D4) -= *(float *)(p + 0x10);
        t = *(float *)(p + 0x29D4);
        if (t < 0.0f) {
            *(float *)(p + 0x29D4) = 0.0f;
        } else {
            d = (short)(*(short *)(p + 0x3BA2) - *(volatile short *)(p + 0x90));
            if (d < 0) d = (short)-d;
            m = *(short *)(p + 0x29A4);
            if (m < (short)d) d = m;
            *(short *)(p + 0x90) = *(short *)(p + 0x90) + d;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

class O25E {
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
    virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134();
    virtual int m138(int, int, char *);
};

static inline signed char free_25E(char *p) {
    unsigned int i;
    for (i = 0; i < 5; i++) {
        if (*(signed char *)(p + i + 0x3D4C) == 0) return (signed char)i;
    }
    return -1;
}

static inline O25E *obj_25E(char *p) {
    O25E *o;
    signed char k = free_25E(p);
    o = 0;
    if (k != -1) o = *(O25E **)((char *)(k * 4) + (int)p + 0x3D54);
    return o;
}

extern "C" void func_0025EFB0(char *p) {
    int k;
    int f;
    char *e;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0xA4));
        func_002490F0(p, 0xD, 0, -1, 2, 1, -1.0f);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0xA);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5)) {
            k = free_25E(p);
            if (k != -1) {
                if ((*(int *)(p + 0x2898) & 0x20000) && *(unsigned char *)(p + 0x3B9D) == 1) {
                    f = 1;
                } else {
                    f = 0;
                }
                if ((unsigned char)obj_25E(p)->m138(f, *(short *)(p + 0x90), p + 0x3C40) == 1) {
                    e = func_00207480(3, 0x8D, 0, 8);
                    if (e) {
                        *(int *)(e + 0x94) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
                        e[0x99] = 0;
                    }
                    *(float *)((char *)(k * 4) + (int)p + 0x3D74) = *(float *)(*(char **)(p + 0x2844) + 0xA8);
                    p[k + 0x3D68] = 1;
                    *(float *)(p + 0x7F60) = *(float *)(*(char **)(p + 0x2844) + 0xAC);
                }
            }
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

extern "C" void func_0026A860(char *p) {
    char *o;
    float t;
    float u;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 0xE, 3, -1, 0, 0, -1.0f);
        o = func_00207480(3, 0x90, 0, 8);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
            o[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0xE, 4, -1, 2, 5, -1.0f);
            *(float *)(p + 0x2878) = 40.0f;
            (*(unsigned char *)(p + 0x284C))++;
            p[0x284D] = 0;
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0xA);
            break;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            t = *(float *)(p + 0x2878);
            if (!(t <= 0.0f)) {
                u = t - *(float *)(p + 0x10);
                *(float *)(p + 0x2878) = u;
                if (u <= 0.0f) {
                    (*(unsigned char *)(p + 0x284D))++;
                    o = func_00207480(3, 0x252, 0, 8);
                    if (o) {
                        *(int *)(o + 0x94) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1380) + 0x104);
                        o[0x99] = 1;
                    }
                }
            }
            break;
        case 1:
            break;
        }
        break;
    }
}

extern "C" void func_0021C100(char *, int, int, float, float);

extern "C" int func_0023DF80(char *, float);

extern "C" void func_0021BFC0(char *);

extern "C" void func_002DA3A0(char *, int);

extern "C" void func_002DBCC0(char *, int, float, float);

extern "C" void func_002DBD20(char *, float, float);

extern "C" void func_00275690(char *p) {
    char *o;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 0x11, 4, -1, 0, 0, -1.0f);
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x4C8), *(float *)(*(char **)(p + 0x2844) + 0x4CC));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x4D0), *(float *)(*(char **)(p + 0x2844) + 0x4D4));
        func_0025EE70(p, 0x12, *(float *)(*(char **)(p + 0x2844) + 0x4D8), *(float *)(*(char **)(p + 0x2844) + 0x4DC), *(float *)(*(char **)(p + 0x2844) + 0x4E0));
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        p[0x2866] = 0;
        o = func_00207480(3, 0x90, 0, 8);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
            o[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        func_002F30B0(0x39, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), p);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if ((unsigned char)func_0025EE90(p) == 0) p[0x2866] = 1;
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned char *)(p + 0x2866) == 1) {
                func_002490F0(p, 0x11, 5, -1, 0, 0, -1.0f);
                (*(unsigned char *)(p + 0x284C))++;
            } else {
                func_002490F0(p, 0x11, 4, -1, 0, 0, -1.0f);
            }
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB74[0] |= 0x2000000;
            func_0021C100(p, 8, 5, 0.0f, -1.5f);
            return;
        }
        break;
    }
    if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64))) {
        func_0021BFC0(p);
        return;
    }
    func_002DA3A0(p, *(short *)(p + 0x28DC));
}

extern "C" {
void func_002DAB90(char *p, unsigned char k);
}

extern "C" void func_002DBD30(char *);

extern "C" void func_0021CB60(char *, int);

extern "C" void func_0021CB50(char *, int);

extern "C" int D_01DFAB78[];

extern "C" void func_0021C380(char *, int);

extern "C" void func_002DBD00(char *);

extern "C" int func_00249E20(char *, int);

extern "C" void func_0026CD00(char *p) {
    char *o;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CB50(p, 2);
        func_0021CB60(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002490F0(p, 0xF, 8, -1, 0, 0, -1.0f);
        func_0025EE70(p, 0, *(float *)(*(char **)(p + 0x2844) + 0x530), *(float *)(*(char **)(p + 0x2844) + 0x534), *(float *)(*(char **)(p + 0x2844) + 0x538));
        func_0021C380(p, 0);
        func_002DBD30(p);
        func_002DBD00(p);
        p[0x2866] = 0;
        p[0x2867] = 1;
        o = func_00207480(3, 0x90, 0, 8);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
            o[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        func_002F30B0(0x54, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), p);
        D_01DFAB74[0] |= 0x400;
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if ((unsigned char)func_0025EE90(p) == 0) p[0x2866] = 1;
        func_002496D0(p);
        if ((unsigned char)func_00249E20(p, 1) == 4) {
            if (*(unsigned char *)(p + 0x2866) == 1) {
                func_002490F0(p, 0xF, 9, -1, 0, 0, -1.0f);
                (*(unsigned char *)(p + 0x284C))++;
            } else {
                func_002490F0(p, 0xF, 0xA, -1, 0, 0, 68.0f);
                p[0x2867] = 0;
            }
        } else {
            if (*(unsigned char *)(p + 0x2867) == 1) func_002DAB90(p, 3);
            p[0x2867] = 1;
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(*(char **)(p + 0x2844) + 0x624) * *(float *)(p + 0x10);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB78[0] |= 0x100000;
            *(float *)(p + 0x64) = -6.0f;
            func_0021C100(p, 8, 5, *(float *)(p + 0x64), -1.5f);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

extern "C" short func_002DAA60(char *, char *);

extern "C" void func_0023FA00(char *, float);

extern "C" void func_00270800(char *, int);

extern "C" void func_0023D5B0(char *);

extern "C" void func_00226F20(char *, int);

static inline unsigned char both_270(char *p) {
    if (*(unsigned char *)(p + 0x28AE) == 1 && *(unsigned char *)(p + 0x28A9) == 1) return 1;
    return 0;
}

extern "C" void func_00270540(char *p) {
    unsigned char ok;
    ok = 1;
    if (*(unsigned char *)(p + 0x28AE) != 1 || *(unsigned char *)(p + 0x28A9) != 1) ok = 0;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        p[0x3D49] = p[*(unsigned char *)(p + 0x3D4A) + 0x3D4C];
        func_002490F0(p, 6, 0x17, -1, 0, 0, -1.0f);
        if (*(unsigned char *)(p + 0x3B9D) == 1) {
            *(short *)(p + 0x90) = func_002DAA60(p, p + 0x3C40);
            func_0023FA00(p, 40.0f);
        }
        p[0x2866] = 0;
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) func_00270800(p, 0);
        if (*(unsigned char *)(p + 0x24D5) == 2) func_00270800(p, 1);
        if (ok == 1) {
            if (*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x80)]) p[0x2866] = 1;
            if (*(unsigned char *)(p + 0x24D5) == 3 && *(unsigned char *)(p + 0x2866) == 1) {
                if (*(unsigned short *)(p + 0x24C6) == 0x617) {
                    func_002490F0(p, 6, 0x18, -1, 2, 5, -1.0f);
                } else {
                    func_002490F0(p, 6, 0x17, -1, 2, 5, 13.0f);
                }
                p[0x2866] = 0;
                if (*(unsigned char *)(p + 0x3B9D) == 1) {
                    *(short *)(p + 0x90) = func_002DAA60(p, p + 0x3C40);
                    func_0023FA00(p, 40.0f);
                }
            }
        }
        if ((unsigned char)func_00249E20(p, 1) == 4) {
            if (both_270(p) == 0) {
                func_0023D5B0(p);
                return;
            }
            func_0021B790(p, 5);
            return;
        }
        func_002DAB90(p, 3);
        break;
    }
    func_00226F20(p, 0);
}

extern "C" int func_002242C0(char *);

extern "C" char D_01DFAB7C[];

extern "C" void func_0026DA00(char *p) {
    char *o;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 6, 0xB, -1, 0, 0, -1.0f);
        func_0025EE70(p, 0xF, *(float *)(*(char **)(p + 0x2844) + 0x610), *(float *)(*(char **)(p + 0x2844) + 0x614), *(float *)(*(char **)(p + 0x2844) + 0x618));
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        p[0x2866] = 0;
        p[0x2867] = 1;
        *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x61C);
        o = func_00207480(3, 0x90, 0, 8);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
            o[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        if ((unsigned char)func_002242C0(p) == 0) {
            func_002F30B0(0x55, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1380) + 0x104), p);
        } else {
            func_002F30B0(0x7D, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1380) + 0x104), p);
        }
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if ((unsigned char)func_0025EE90(p) == 0) p[0x2866] = 1;
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned char *)(p + 0x2866) == 1) {
                func_002490F0(p, 6, 0xC, -1, 0, 0, -1.0f);
                (*(unsigned char *)(p + 0x284C))++;
                break;
            }
            func_002490F0(p, 6, 0x29, -1, 0, 0, 61.0f);
            p[0x2867] = 0;
        }
        if (*(unsigned char *)(p + 0x2867) == 1) func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB78[0] |= 0x200000;
            } else {
                *(unsigned int *)D_01DFAB7C |= 0x20000000;
            }
            func_0026D0B0(p);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

extern "C" int func_002D9BD0(char *, int);

extern "C" void func_0050DA50(char *, int, int);

extern "C" void func_0021BDB0(char *, int, int);

extern "C" void func_002673E0(char *p) {
    char *o;
    float t;
    switch (*(unsigned char *)(p + 0x2850)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 0x14, 3, -1, 2, 5, -1.0f);
        func_0025EE70(p, 0x14, *(float *)(*(char **)(p + 0x2844) + 0x574), *(float *)(*(char **)(p + 0x2844) + 0x578), *(float *)(*(char **)(p + 0x2844) + 0x57C));
        p[0x2866] = 0;
        *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x580);
        *(int *)(p + 0x2874) = 0;
        p[0x2867] = 1;
        *(short *)(p + 0x2856) = 0;
        D_01DFAB78[0] |= 0x80000;
        o = func_00207480(3, 0x90, 0, 8);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
            o[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        (*(unsigned char *)(p + 0x2850))++;
        break;
    case 1:
        if ((unsigned char)func_0025EE90(p) == 0) p[0x2866] = 1;
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned char *)(p + 0x2866) == 0) {
                func_002490F0(p, 0x14, 3, -1, 0, 0, 69.0f);
                p[0x2867] = 0;
            } else {
                func_002490F0(p, 0x14, 4, -1, 0, 0, -1.0f);
                (*(unsigned char *)(p + 0x2850))++;
                break;
            }
        }
        *(float *)(p + 0x2870) -= *(float *)(p + 0x10);
        t = *(float *)(p + 0x2870);
        if (t <= 0.0f) {
            *(float *)(p + 0x2874) -= *(float *)(p + 0x10);
            t = *(float *)(p + 0x2874);
            if (t <= 0.0f) {
                func_0050DA50(p, func_002D9BD0(p, 7), (*(short *)(p + 0x2856))++);
                *(float *)(p + 0x2874) = *(float *)(*(char **)(p + 0x2844) + 0x584);
                func_00330B50(D_01DFABA0, 0xD, p + 0x50, 7);
            }
        }
        if (*(unsigned char *)(p + 0x2867) == 1) func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0023FA00(p, *(float *)(*(char **)(p + 0x2844) + 0x598));
            func_0021BDB0(p, 0xA, 1);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

extern "C" void func_0026B470(char *p) {
    char *o;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x37C));
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002490F0(p, 5, 0xB, -1, 0, 0, -1.0f);
        func_0025EE70(p, 0xA, *(float *)(*(char **)(p + 0x2844) + 0x650), *(float *)(*(char **)(p + 0x2844) + 0x654), *(float *)(*(char **)(p + 0x2844) + 0x658));
        p[0x2866] = 0;
        p[0x2867] = 1;
        o = func_00207480(3, 0x90, 0, 8);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
            o[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_0025EE90(p) == 0) p[0x2866] = 1;
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned char *)(p + 0x2866) == 0) {
                func_002490F0(p, 5, 0x1E, -1, 0, 0, 201.0f);
                p[0x2867] = 0;
                break;
            }
            func_002490F0(p, 5, 0x1A, -1, 0, 0, -1.0f);
            if ((unsigned char)func_002242C0(p) == 0) {
                func_002F30B0(0x5A, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), p);
            } else {
                func_002F30B0(0x5B, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), p);
            }
            (*(unsigned char *)(p + 0x284C))++;
            break;
        }
        if (*(unsigned char *)(p + 0x2867) == 1) func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        p[0x2867] = 1;
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB78[0] |= 0x4000000;
            } else {
                D_01DFAB78[0] |= 0x8000000;
            }
            func_0021B790(p, 0xA);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

extern "C" char D_01DFAB70[];

extern "C" char D_00545DCC[];

extern "C" void func_002F30C0(int, int, char *, char *);

typedef struct { short v[4]; } S265;

extern "C" S265 D_005BBFD8;

extern "C" void func_00265D50(char *p) {
    S265 t = D_005BBFD8;
    float f;
    int b;
    unsigned int *w;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 0x13, 0, -1, 2, 5, -1.0f);
        f = *(float *)(*(char **)(p + 0x2844) + 0x15C);
        *(float *)(p + 0x2870) = f;
        *(float *)(p + 0x2874) = f;
        *(float *)(p + 0x2878) = *(float *)(*(char **)(p + 0x2844) + 0x160);
        *(short *)(p + 0x2856) = 0;
        *(short *)(p + 0x2858) = 0;
        *(int *)(p + 0x287C) = 0;
        *(short *)(p + 0x28DE) = 0;
        *(short *)(p + 0x285A) = 0;
        p[0x7D36] = 0;
        if ((unsigned char)func_003330C0(p + 0x3D90, 0x25A) == 0) p[0x7D36] = 0x63;
        func_002F30C0(0x1B, *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), p + 0x26C0, p);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        *(float *)(p + 0x2870) -= *(float *)(p + 0x10);
        f = *(float *)(p + 0x2870);
        if (f <= 0.0f) {
            *(float *)(p + 0x2870) = 0.0f;
            *(float *)(p + 0x2878) -= *(float *)(p + 0x10);
            b = (*(unsigned char ***)D_00545DCC)[*(unsigned char *)(p + 0x3D90)][*(short *)(p + 0x2856)];
            w = (unsigned int *)((char *)((unsigned int)b / 32 * 4) + (int)p + 0x49F0);
            if ((*w & (1 << (b % 32))) == 0 || *(float *)(p + 0x2878) < 0.0f ||
                *(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C) != 6) {
                *(short *)(p + 0x2858) = 1;
            }
            *(float *)(p + 0x2874) -= *(float *)(p + 0x10);
            f = *(float *)(p + 0x2874);
            if (f < 0.0f) {
                *(float *)(p + 0x2874) = *(float *)(*(char **)(p + 0x2844) + 0x164);
                (*(short *)(p + 0x2856))++;
                if (!(*(short *)(p + 0x2856) < 6)) *(short *)(p + 0x2856) = 5;
            }
        }
        *(float *)(p + 0x287C) -= *(float *)(p + 0x10);
        f = *(float *)(p + 0x287C);
        if (f <= 0.0f) {
            switch (*(unsigned char *)(p + 0x3C74)) {
            case 0:
                *(float *)(p + 0x287C) = *(float *)(*(char **)(p + 0x2844) + 0x69C);
                break;
            case 1:
                *(float *)(p + 0x287C) = *(float *)(*(char **)(p + 0x2844) + 0x6A0);
                break;
            case 2:
                *(float *)(p + 0x287C) = *(float *)(*(char **)(p + 0x2844) + 0x6A4);
                break;
            }
            *(short *)(p + 0x28DE) = t.v[*(short *)(p + 0x285A)];
            (*(short *)(p + 0x285A))++;
            if (!(*(short *)(p + 0x285A) < 4)) *(short *)(p + 0x285A) = 0;
            func_00264E20(p, 2, *(short *)(p + 0x28DE));
        }
        if ((unsigned char)func_002496D0(p) == 4) func_002490F0(p, 0x13, 0, -1, 0, 0, -1.0f);
        if (*(short *)(p + 0x2858)) {
            func_0021B790(p, 5);
            *(unsigned int *)D_01DFAB70 |= 0x8000000;
        }
        break;
    }
}

extern "C" void func_00273030(char *p) {
    char *o;
    float t;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x26C));
        func_002490F0(p, 7, 0xA, -1, 0, 0, -1.0f);
        func_0025EE70(p, 0xC, *(float *)(*(char **)(p + 0x2844) + 0x270), *(float *)(*(char **)(p + 0x2844) + 0x274), *(float *)(*(char **)(p + 0x2844) + 0x278));
        p[0x2866] = 0;
        p[0x2867] = 0;
        if ((unsigned char)func_002242C0(p) == 0) {
            func_002F30B0(0x34, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), p);
        } else {
            func_002F30B0(0x77, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), p);
        }
        o = func_00207480(3, 0x90, 0, 8);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
            o[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_0025EE90(p) == 0) p[0x2866] = 1;
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned char *)(p + 0x2866) == 1) {
                func_002490F0(p, 7, 0xB, -1, 0, 0, -1.0f);
                if ((unsigned char)func_002242C0(p) == 0) {
                    D_01DFAB74[0] |= 0x100000;
                } else {
                    *(unsigned int *)D_01DFAB7C |= 0x800000;
                }
                *(float *)(p + 0x2870) = 17.0f;
                p[0x2868] = 0;
                (*(unsigned char *)(p + 0x284C))++;
                break;
            }
            func_002490F0(p, 7, 0x28, -1, 0, 0, 232.0f);
            p[0x2867] = 1;
            break;
        }
        if (*(unsigned char *)(p + 0x2867) == 0) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        } else {
            p[0x2867] = 0;
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        *(float *)(p + 0x2870) -= *(float *)(p + 0x10);
        t = *(float *)(p + 0x2870);
        if (t <= 0.0f && *(unsigned char *)(p + 0x2868) == 0) {
            func_00207480(3, 0x382, *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), 8);
            p[0x2868] = 1;
        }
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        break;
    }
}

extern "C" void func_0026EF20(char *p) {
    char *o;
    float f;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 6, 0xF, -1, 2, 3, -1.0f);
        *(short *)(p + 0x28DE) = *(short *)(p + 0x28DC);
        p[0x7F95] = 1;
        p[0x7F96] = 3;
        p[0x2866] = 1;
        *(short *)(p + 0x2856) = (int)*(float *)(*(char **)(p + 0x2844) + 0x5C8);
        *(short *)(p + 0x2858) = (int)*(float *)(*(char **)(p + 0x2844) + 0x5CC);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x440));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x444), *(float *)(*(char **)(p + 0x2844) + 0x448));
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x44C), *(float *)(*(char **)(p + 0x2844) + 0x450));
        func_002DBD00(p);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x10)]) == 0) p[0x2866] = 0;
        if ((unsigned char)func_002496D0(p) == 4) {
            (*(short *)(p + 0x2856))--;
            (*(short *)(p + 0x2858))--;
            if (*(short *)(p + 0x2858) <= 0 && (*(short *)(p + 0x2856) <= 0 || *(unsigned char *)(p + 0x2866) == 0)) {
                func_002490F0(p, 6, 0x22, -1, 0, 0, -1.0f);
                p[0x2867] = 0;
                (*(unsigned char *)(p + 0x284C))++;
            } else {
                func_002490F0(p, 6, 0x2A, -1, 0, 0, 7.0f);
            }
        }
        func_002DA3A0(p, *(short *)(p + 0x28DE));
        if (*(float *)(p + 0x150) < 0.0f) func_002DBD30(p);
        f = *(float *)(*(char **)(p + 0x2844) + 0x454);
        if (*(float *)(p + 0x64) < f) {
            *(float *)(p + 0x64) = f;
            *(int *)(p + 0x74) = 0;
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4 || *(unsigned char *)(p + 0x24D5) == 1) {
            *(float *)(p + 0x74) = -1.5f;
            (*(unsigned char *)(p + 0x284C))++;
            break;
        }
        if (*(unsigned char *)(p + 0x2867) == 0 && (*(unsigned char *)(p + 0x24D1) & 1)) {
            o = func_00207480(3, 0x38E, 0, 8);
            if (o) {
                *(int *)(o + 0x94) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104);
                o[0x99] = 0;
            }
            p[0x2867] = 1;
        }
        break;
    case 3:
        func_002DA3A0(p, *(short *)(p + 0x28DE));
        break;
    }
    if (*(float *)(p + 0x64) <= 0.0f && func_0023DF80(p, 0.0f)) func_0021BFC0(p);
}

extern "C" void func_0025EAD0(char *p) {
    char *o;
    float t;
    float u;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 3, 8, -1, 0, 0, -1.0f);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x9C));
        func_0025EE70(p, 0, *(float *)(*(char **)(p + 0x2844) + 0x90), *(float *)(*(char **)(p + 0x2844) + 0x94), *(float *)(*(char **)(p + 0x2844) + 0x98));
        *(float *)(p + 0x2870) = 10.0f;
        p[0x2866] = 0;
        o = func_00207480(3, 0x90, 0, 8);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
            o[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_0025EE90(p) == 0) p[0x2866] = 1;
        t = *(float *)(p + 0x2870);
        if (!(t <= 0.0f)) {
            u = t - *(float *)(p + 0x10);
            *(float *)(p + 0x2870) = u;
            if (u <= 0.0f) {
                if ((unsigned char)func_002242C0(p) == 0) {
                    func_002F30B0(0xA, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), p);
                } else {
                    func_002F30B0(0x60, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), p);
                }
            }
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 3, 8, -1, 0, 0, 104.0f);
            func_002496D0(p);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        if (*(unsigned char *)(p + 0x2866) && *(unsigned char *)(p + 0x24D5)) {
            func_002490F0(p, 3, 9, -1, 0, 0, -1.0f);
            if ((unsigned char)func_002242C0(p) == 0) {
                *(unsigned int *)D_01DFAB70 |= 0x400;
            } else {
                *(unsigned int *)D_01DFAB7C |= 1;
            }
            *(float *)(p + 0x29D4) = *(float *)(*(char **)(p + 0x2844) + 0xA0);
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                *(unsigned int *)D_01DFAB70 |= 0x400;
            } else {
                *(unsigned int *)D_01DFAB7C |= 1;
            }
            func_0021B790(p, 0xA);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

extern "C" float func_001324B0(float *, char *);

extern "C" float func_00131B50(float);

extern "C" int func_002D9A10(char *, int, int);

extern "C" void func_0021C7E0(char *, int, int, int);

extern "C" void func_0025DD40(char *);

extern "C" void func_0025F3A0(char *p) {
    float d = 10000.0f;
    float t;
    if (*(unsigned char *)(p + 0x3B9D) == 1 && func_00131B50(*(float *)(p + 0x54) - *(float *)(p + 0x3C44)) < 200.0f) {
        d = func_001324B0((float *)(p + 0x50), p + 0x3C40);
    }
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x56C));
        func_002490F0(p, 0xD, 0x11, -1, 0, 0, -1.0f);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        p[0x2866] = 0;
        *(float *)(p + 0x2870) = 23.0f;
        p[0x2867] = 0;
        func_002F30C0(0x25, *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), p + 0x26C0, p);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        *(float *)(p + 0x2870) -= *(float *)(p + 0x10);
        t = *(float *)(p + 0x2870);
        if (t <= 0.0f && *(unsigned char *)(p + 0x2867) == 0) {
            D_01DFAB74[0] |= 0x20;
            p[0x2867] = 1;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0xA);
            break;
        }
        if (!(d <= *(float *)(*(char **)(p + 0x2844) + 0x34))) func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        if (*(unsigned char *)(p + 0x24D5) == 1) p[0x2866] = 1;
        break;
    }
    if (*(unsigned char *)(p + 0x2866) == 1 && (unsigned char)func_002D9A10(p, *(short *)(p + 0x90), 0) == 1) {
        p[0x2999] = *(unsigned char *)(p + 0x2998);
        p[0x2998] = 9;
        func_0021C7E0(p, 0x11, -1, -1);
        func_0025DD40(p);
        return;
    }
}

extern "C" int func_002DB3E0(char *, int);

extern "C" float func_00132510(char *);

extern "C" void func_00266490(char *p) {
    float e;
    float d = 10000.0f;
    float t;
    if (*(unsigned char *)(p + 0x3B9D) == 1 && func_00131B50(*(float *)(p + 0x54) - *(float *)(p + 0x3C44)) < 200.0f) {
        d = func_001324B0((float *)(p + 0x50), p + 0x3C40);
    }
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x470));
        func_002490F0(p, 0x13, 2, -1, 0, 0, -1.0f);
        p[0x2866] = 0;
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0x13, 3, -1, 0, 0, -1.0f);
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x474);
            *(float *)(p + 0x150) = *(float *)(*(char **)(p + 0x2844) + 0x478) / *(float *)(p + 0x2870);
            *(int *)(p + 0x154) = 0;
            func_002F30C0(0x3E, *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104), p + 0x26C0, p);
            (*(unsigned char *)(p + 0x284C))++;
            break;
        }
        if (!(d <= *(float *)(*(char **)(p + 0x2844) + 0x34))) func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        if (*(unsigned char *)(p + 0x24D5) == 1) p[0x2866] = 1;
        break;
    case 2:
        func_002DB2C0(p);
        func_002496D0(p);
        e = func_00132510(p + 0x4970);
        func_002DB3E0(p, *(short *)(p + 0x90));
        *(float *)(p + 0x2870) -= *(float *)(p + 0x10);
        t = *(float *)(p + 0x2870);
        if (t < 0.0f || !(e <= *(float *)(*(char **)(p + 0x2844) + 0x47C)) || d < *(float *)(*(char **)(p + 0x2844) + 0x480)) {
            func_002490F0(p, 0x13, 4, -1, 0, 0, -1.0f);
            D_01DFAB74[0] |= 0x40000000;
            p[0x2866] = 0;
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 3:
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        if (*(unsigned char *)(p + 0x24D5) == 1) func_00264E20(p, 7, 0);
        if ((unsigned char)func_002496D0(p) == 4) {
            D_01DFAB74[0] |= 0x40000000;
            func_0021B790(p, 0xA);
            return;
        }
        break;
    }
    if (*(unsigned char *)(p + 0x2866) == 1 && (unsigned char)func_002D9A10(p, *(short *)(p + 0x90), 0) == 1) {
        p[0x2999] = *(unsigned char *)(p + 0x2998);
        p[0x2998] = 9;
        func_0021C7E0(p, 0x11, -1, -1);
        func_0025DD40(p);
        return;
    }
}

extern "C" char *func_002F2EF0(char *, char *, float);

extern "C" void func_002DBCE0(char *);

extern "C" void func_002DB1C0(char *, short);

extern "C" int func_00244DF0(char *, int);

extern "C" float func_00249DD0(char *, int);

extern "C" void func_00332AE0(char *, int, float, float);

extern "C" void func_002DFFA0(char *, float);

class V276 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4(); virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4(); virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104(); virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124(); virtual void d128(); 
    virtual void f12C(float *);
};

extern "C" void func_00276D20(char *p) {
    float v[4] __attribute__((aligned(16)));
    char *o;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002DBCE0(p);
        *(unsigned char *)(p + 0x2866) = 0;
        *(unsigned char *)(p + 0x2867) = 0;
        *(unsigned char *)(p + 0x2868) = 0;
        if ((unsigned char)func_003330C0(p + 0x3D90, 0x13E) == 1) {
            o = func_002F2EF0(*(char **)(*(char **)D_01CAFF0C + 0x20), p + 0x50, 10000.0f);
            if (o) {
                ((V276 *)o)->f12C(v);
                if (func_00132470((char *)v, p + 0x50) < *(float *)(*(char **)(p + 0x283C) + 0x94)) {
                    *(unsigned char *)(p + 0x2866) = 1;
                    *(unsigned char *)(p + 0x2867) = 1;
                }
            }
        }
        switch (*(unsigned char *)(p + 0x3D90)) {
        default:
        case 0: case 1: case 2:
            func_002490F0(p, 2, 0, -1, 2, 5, -1.0f);
            *(short *)(p + 0x2856) = 0;
            (*(unsigned char *)(p + 0x284C))++;
            break;
        case 3: case 4:
            func_002490F0(p, 2, 1, -1, 2, 5, -1.0f);
            *(short *)(p + 0x2856) = 1;
            (*(unsigned char *)(p + 0x284C))++;
            break;
        case 5: case 6:
            func_002490F0(p, 2, 2, -1, 2, 5, -1.0f);
            *(short *)(p + 0x2856) = 2;
            (*(unsigned char *)(p + 0x284C))++;
            break;
        case 7:
            func_002490F0(p, 2, 3, -1, 2, 5, -1.0f);
            *(short *)(p + 0x2856) = 3;
            *(short *)(p + 0x2858) = 0;
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        *(short *)(p + 0x29A4) = 0xE39;
        *(float *)(p + 0x29D4) = 10.0f;
        *(short *)(p + 0x28DC) = *(short *)(p + 0x3BA2);
        break;
    case 1:
        func_002DB1C0(p, *(short *)(p + 0x28DC));
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0xA);
            break;
        }
        if ((unsigned char)func_00244DF0(p, 0x8000000F) == 1) func_0021CBB0(p, 0xC1B);
        func_002DAB90(p, 3);
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) != 4) {
            func_002DB1C0(p, *(short *)(p + 0x28DC));
            if (*(unsigned char *)(p + 0x2868) == 0) func_002DAB90(p, 3);
        } else {
            func_0021CBB0(p, 0x40A);
            func_002490F0(p, 2, 3, -1, 0, 0, 124.0f);
            *(unsigned char *)(p + 0x2868) = 1;
            *(unsigned char *)(p + 0x2866) = 0;
        }
        if (*(short *)(p + 0x2858) == 0 && 124.0f <= func_00249DD0(p, 1)) {
            func_002490F0(p, 2, 3, -1, 0, 0, 124.0f);
            (*(short *)(p + 0x2858))++;
            *(unsigned char *)(p + 0x2868) = 1;
            *(unsigned char *)(p + 0x2866) = 0;
        }
        if ((unsigned char)func_00244DF0(p, 0x8000000F) == 1) func_0021CBB0(p, 0xC1B);
        break;
    }
    if (*(unsigned char *)(p + 0x24D5) == 1 && *(unsigned char *)(p + 0x2866) == 1) {
        switch (*(short *)(p + 0x2856)) {
        case 0:
            func_00332AE0(p + 0x3D90, 0x13E, *(float *)(*(char **)(p + 0x2844) + 0x228), *(float *)(*(char **)(p + 0x2844) + 0x22C));
            func_002DFFA0(p, *(float *)(*(char **)(p + 0x2844) + 0x310));
            break;
        case 1:
            func_00332AE0(p + 0x3D90, 0x13E, *(float *)(*(char **)(p + 0x2844) + 0x228), *(float *)(*(char **)(p + 0x2844) + 0x230));
            func_002DFFA0(p, *(float *)(*(char **)(p + 0x2844) + 0x314));
            break;
        case 2:
            func_00332AE0(p + 0x3D90, 0x13E, *(float *)(*(char **)(p + 0x2844) + 0x228), *(float *)(*(char **)(p + 0x2844) + 0x234));
            func_002DFFA0(p, *(float *)(*(char **)(p + 0x2844) + 0x318));
            break;
        case 3:
            func_00332AE0(p + 0x3D90, 0x13E, *(float *)(*(char **)(p + 0x2844) + 0x228), *(float *)(*(char **)(p + 0x2844) + 0x238));
            func_002DFFA0(p, *(float *)(*(char **)(p + 0x2844) + 0x31C));
            break;
        }
        *(unsigned char *)(p + 0x2867) = 0;
    }
    if (*(unsigned char *)(p + 0x2867) == 1 && *(unsigned char *)(p + 0x3B9D) == 1) *(float *)(p + 0x3E98) = 1.0f;
}

extern "C" float func_00131BA0(int);

extern "C" float func_00131C20(int);

extern "C" void func_00228300(char *);

extern "C" {
int func_002717F0(char *p);
}

extern "C" unsigned char **D_00545DC4[];

extern "C" void func_00262050(char *, int, int, int, int);

extern "C" void func_0024CC60(char *, int);

class V271 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C();
    virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34();
    virtual float m38(int);
};

extern "C" void func_00271290(char *p) {
    char *g;
    int b;
    int w;
    int m;
    float f;
    *(unsigned char *)(p + 0x3B9E) = 0;
    func_00228300(p + 0x29D0);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002490F0(p, 8, 0x21, -1, 0, 0, -1.0f);
        *(short *)(p + 0x90) = func_002DAA60(p, p + 0x29B0);
        *(float *)(p + 0x2870) = ((V271 *)(p + 0x184))->m38(1);
        g = func_00207480(3, 0x90, 0, 8);
        if (g) {
            *(int *)(g + 0x90) = *(int *)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104);
            g[0x9A] = 0;
        }
        func_003305E0(D_01DFABA0, 0, 0x50, p + 0x50, 0, 0, 0);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if ((unsigned char)func_002717F0(p) == 1) {
            if (func_00132470(p + 0x29B0, p + 0x50) < 100.0f) {
                func_002DAA60(p, p + 0x29B0);
                *(float *)(p + 0x50) = *(float *)(p + 0x29B0) - 50.0f * func_00131BA0(*(short *)(p + 0x90));
                *(float *)(p + 0x58) = *(float *)(p + 0x29B8) - 50.0f * func_00131C20(*(short *)(p + 0x90));
            }
            if ((unsigned char)func_002496D0(p) == 4) {
                func_002490F0(p, 8, 0x22, -1, 0, 0, -1.0f);
                func_00262050(p, 0, 2, 0, 0);
                *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x1E0);
                *(short *)(p + 0x2856) = 0;
                *(float *)(p + 0x2874) = 0.0f;
                *(short *)(p + 0x2858) = 0;
                (*(unsigned char *)(p + 0x284C))++;
            }
        } else {
            func_0024CC60(p, *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x80) * 2));
            func_0021B790(p, 0xA);
        }
        break;
    case 2:
        if ((unsigned char)func_002717F0(p) == 1) {
            if (func_00132470(p + 0x29B0, p + 0x50) < 100.0f) {
                *(float *)(p + 0x50) = *(float *)(p + 0x29B0) - 50.0f * func_00131BA0(*(short *)(p + 0x90));
                *(float *)(p + 0x58) = *(float *)(p + 0x29B8) - 50.0f * func_00131C20(*(short *)(p + 0x90));
            }
            *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2870) < 0.0f) {
                *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x1E4);
                if (++*(short *)(p + 0x2856) >= 6) *(short *)(p + 0x2856) = 5;
            }
            if (!((*(float *)(p + 0x2874) += *(float *)(p + 0x10)) < *(float *)(*(char **)(p + 0x2844) + 0x1E8) - 5.0f) &&
                (*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x80) * 2))) {
                *(short *)(p + 0x2858) = 1;
            }
            if ((unsigned char)func_002496D0(p) == 4 ||
                (!(*(float *)(p + 0x2874) < *(float *)(*(char **)(p + 0x2844) + 0x1E8)) && *(short *)(p + 0x2858) != 0)) {
                b = D_00545DC4[0][*(unsigned char *)(p + 0x3D90)][*(short *)(p + 0x2856)];
                w = *(int *)((char *)(((unsigned int)b >> 5) * 4) + (int)p + 0x49F0);
                if (w & (1 << (b % 32))) {
                    func_002490F0(p, 8, 0x22, -1, 0, 0, -1.0f);
                    func_00262050(p, 0, 2, 0, 0);
                    *(float *)(p + 0x2874) = 0.0f;
                    *(short *)(p + 0x2858) = 0;
                } else {
                    func_002490F0(p, 8, 0x27, -1, 0, 0, -1.0f);
                    *(unsigned char *)(p + 0x284C) = 4;
                }
            }
        } else {
            func_002490F0(p, 8, 0x27, -1, 0, 0, -1.0f);
            *(unsigned char *)(p + 0x284C) = 4;
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) func_0021B790(p, 0xA);
        break;
    case 4:
        if ((unsigned char)func_002496D0(p) == 4) func_0021B790(p, 0xA);
        break;
    }
}

extern "C" int D_01CAFF38[];

extern "C" void func_002E0000(char *, int, char *);

extern "C" int func_003331B0(char *, float, float);

class VC_4_ppiiv {
public:
    virtual void d0();
    virtual void m(char *, char *, int, int);
};

extern "C" int D_005BC2E4;

class V148_0_v {
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
    virtual void m(void);
};

typedef struct { float f[4]; } F4_253;

typedef struct { float f[2]; } F2_253;

typedef struct { unsigned char b[2]; } B2_253;

extern "C" {
void func_00253D10(char *p0, char *p1) {
    extern void func_002E7920(char *, char *, char *, char *, int, int);
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int tmp36;
    float tmp37;
    float tmp38;
    float tmp39;
    float tmp43;
    float tmp44;
    float tmp45;
    float tmp47;
    unsigned char tmp49;
    int tmp68;
    v1 = p0;
    *(char *)(p0 + 10407) = *(signed char *)(p1 + 13);
    *(char *)(p0 + 10414) = *(unsigned char *)(p1 + 14);
    *(char *)(p0 + 10410) = *(signed char *)(p1 + 15);
    v0 = p1;
    if (D_01CAFF38[0] == 403) {
        *(char *)(v1 + 10410) = 2;
        *(char *)(v1 + 10407) = 0;
        *(char *)(v1 + 10414) = 0;
    }
    *(char *)(v1 + 15692) = *(signed char *)(v0 + 0);
    *(char *)(v1 + 15725) = *(signed char *)(v0 + 5);
    *(char *)(v1 + 15693) = *(signed char *)(v0 + 1);
    *(char *)(v1 + 15726) = *(signed char *)(v0 + 6);
    *(char *)(v1 + 15694) = *(signed char *)(v0 + 2);
    *(char *)(v1 + 15727) = *(signed char *)(v0 + 7);
    *(char *)(v1 + 15695) = *(signed char *)(v0 + 3);
    *(char *)(v1 + 15728) = *(signed char *)(v0 + 8);
    *(char *)(v1 + 15696) = *(signed char *)(v0 + 4);
    *(char *)(v1 + 15729) = *(signed char *)(v0 + 9);
    *(char *)(v1 + 15690) = *(signed char *)(v0 + 10);
    *(char *)(v1 + 15691) = *(signed char *)(v0 + 11);
    *(char *)(v1 + 15689) = *(signed char *)(v0 + 12);
    *(char *)(v1 + 10416) = *(unsigned char *)(v0 + 16);
    v2 = *(unsigned char *)(v1 + 10416);
    if ((unsigned int)(v2 - 3) <= 1 || v2 == 5) {
        *(char *)(v1 + 10417) = 1;
    } else {
        *(char *)(v1 + 10417) = 0;
    }
    *(char *)(v1 + 15468) = *(signed char *)(v0 + 18);
    *(char *)(v1 + 15476) = *(signed char *)(v0 + 19);
    *(float *)(v1 + 15484) = *(float *)(v0 + 52);
    *(int *)(v1 + 10712) = *(int *)(v0 + 20);
    *(int *)(v1 + 10744) = *(int *)(v0 + 20);
    *(int *)(v1 + 10716) = *(int *)(v0 + 24);
    *(int *)(v1 + 10748) = *(int *)(v0 + 24);
    *(int *)(v1 + 10720) = *(int *)(v0 + 28);
    *(int *)(v1 + 10752) = *(int *)(v0 + 28);
    *(int *)(v1 + 10724) = *(int *)(v0 + 32);
    *(int *)(v1 + 10756) = *(int *)(v0 + 32);
    *(int *)(v1 + 10728) = *(int *)(v0 + 36);
    *(int *)(v1 + 10760) = *(int *)(v0 + 36);
    *(int *)(v1 + 10732) = *(int *)(v0 + 40);
    *(int *)(v1 + 10764) = *(int *)(v0 + 40);
    *(int *)(v1 + 10736) = *(int *)(v0 + 44);
    *(int *)(v1 + 10768) = *(int *)(v0 + 44);
    *(int *)(v1 + 10740) = *(int *)(v0 + 48);
    *(int *)(v1 + 10772) = *(int *)(v0 + 48);
    ((V148_0_v *)v1)->m();
    tmp36 = (D_005BC2E4 + (*(unsigned char *)(v1 + 10976) * 84));
    *(F4_253 *)(v1 + 10876) = *(F4_253 *)((char *)tmp36 + 0);
    *(F4_253 *)(v1 + 10892) = *(F4_253 *)((char *)tmp36 + 16);
    *(F2_253 *)(v1 + 10908) = *(F2_253 *)((char *)tmp36 + 32);
    *(B2_253 *)(v1 + 10916) = *(B2_253 *)((char *)tmp36 + 40);
    *(float *)(v1 + 10920) = *(float *)((char *)tmp36 + 44);
    *(float *)(v1 + 10924) = *(float *)((char *)tmp36 + 48);
    *(float *)(v1 + 10928) = *(float *)((char *)tmp36 + 52);
    *(float *)(v1 + 10932) = *(float *)((char *)tmp36 + 56);
    *(float *)(v1 + 10936) = *(float *)((char *)tmp36 + 60);
    *(float *)(v1 + 10940) = *(float *)((char *)tmp36 + 64);
    *(float *)(v1 + 10944) = *(float *)((char *)tmp36 + 68);
    *(float *)(v1 + 10948) = *(float *)((char *)tmp36 + 72);
    *(float *)(v1 + 10952) = *(float *)((char *)tmp36 + 76);
    *(float *)(v1 + 10956) = *(float *)((char *)tmp36 + 80);
    *(float *)(v1 + 10920) = *(float *)(v0 + 60);
    func_002E0000(v1, 0, (char *)tmp36);
    v3 = (int)v1;
    if (v1 != 0) {
        v3 = (v3 + 64);
    }
    func_002E7920((v1 + 10784), (v1 + 10876), (v1 + 10960), (v1 + 10852), v3, 0);
    v4 = (int)v1;
    if (v1 != 0) {
        v4 = (v4 + 64);
    }
    ((VC_4_ppiiv *)(v1 + 10852))->m((v1 + 10876), (v1 + 10960), v4, 1);
    *(float *)(v1 + 10964) = *(float *)(v0 + 56);
    *(char *)(v1 + 10415) = *(unsigned char *)(v0 + 17);
    *(float *)(v1 + 10436) = *(float *)(v0 + 64);
    *(float *)(v1 + 10440) = *(float *)(v0 + 68);
    tmp68 = func_003331B0((v1 + 15760), *(float *)(v0 + 72), *(float *)(v0 + 76));
    *(float *)(v1 + 15496) = *(float *)(v0 + 80);
}
}

class V18b {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual unsigned char m18();
};

extern "C" void func_001A2840(char *, int, float);

extern "C" void func_001A27E0(char *, int, float, float);

extern "C" void func_001A28A0(char *, int, float);

extern "C" void func_001A2940(char *);

extern "C" void func_001A2900(char *, float);

extern "C" void func_001A2970(char *);

extern "C" void func_00259810(char *p, unsigned char k) {
    unsigned int i;
    switch (k) {
    case 0: case 1: case 2: case 3:
        for (i = 0; i < 5; i++) {
            if (((V18b *)(p + 0x4A00 + i * 0x600))->m18() == 1)
                func_001A2840(func_00279290(p + 0x4A00 + i * 0x600), *(int *)(p + 0x24F8), 1.0f);
        }
        break;
    case 4:
        for (i = 0; i < 5; i++) {
            if (((V18b *)(p + 0x4A00 + i * 0x600))->m18() == 1)
                func_001A27E0(func_00279290(p + 0x4A00 + i * 0x600), *(int *)(p + 0x24F8), 0.05f, 0.0f);
        }
        break;
    case 6:
        for (i = 0; i < 5; i++) {
            if (((V18b *)(p + 0x4A00 + i * 0x600))->m18() == 1) {
                func_001A28A0(func_00279290(p + 0x4A00 + i * 0x600), *(int *)(p + 0x24F8), 1.0f);
                func_001A2940(func_00279290(p + 0x4A00 + i * 0x600));
            }
        }
        break;
    case 5:
        for (i = 0; i < 5; i++) {
            if (((V18b *)(p + 0x4A00 + i * 0x600))->m18() == 1)
                func_001A2900(func_00279290(p + 0x4A00 + i * 0x600), 1.0f / *(float *)(p + 0x24F4));
        }
        break;
    case 7:
        for (i = 0; i < 5; i++) {
            if (((V18b *)(p + 0x4A00 + i * 0x600))->m18() == 1)
                func_001A2970(func_00279290(p + 0x4A00 + i * 0x600));
        }
        break;
    case 8: case 9:
        break;
    }
}

class Sub40 {
public:
    int x;
};

class Pad40 {
public:
    virtual void p0();
    char pad40[0x3C];
};

class Hit40 : public Pad40, public Sub40 {
};

extern "C" void func_00204FB0(char *);

extern int D_005BBEF0[];

extern int D_005BBEE0[];

extern char D_00557220[];

class C278 {
public:
    virtual void d8();
    virtual void mC(char *, char *, Sub40 *, int);
};

struct V4_278 { float x, y, z, w; };

struct F2_278 { float a, b; };

struct B2_278 { unsigned char a, b; };

struct P278 {
    V4_278 a;
    V4_278 b;
    F2_278 c;
    B2_278 d;
    float e0, e1, e2, e3, e4, e5, e6, e7, e8, e9;
};

extern P278 *D_005BC2EC;

extern "C" {
void func_002780D0(Hit40 *h, char *q) {
    extern void func_002E7920(char *, char *, char *, char *, Sub40 *, int);
    char *p = (char *)h;
    func_00204FB0(p);
    *(unsigned char *)(p + 0x3D4C) = 0xC;
    *(unsigned char *)(p + 0x3D4D) = 0xD;
    *(unsigned char *)(p + 0x3D4E) = 9;
    *(unsigned char *)(p + 0x3D4F) = 0xA;
    *(unsigned char *)(p + 0x3D50) = 0xB;
    *(signed char *)(p + 0x3C6C) = *(signed char *)(q + 0x12);
    *(unsigned char *)(p + 0x28B0) = 0;
    *(int *)(p + 0x2830) = D_005BBEF0[0];
    *(int *)(p + 0x2834) = D_005BBEE0[0];
    *(char **)(p + 0x2838) = D_00557220;
    *(P278 *)(p + 0x2A7C) = *D_005BC2EC;
    func_002E7920(p + 0x2A20, p + 0x2A7C, p + 0x2AD0, p + 0x2A64, h, 0);
    ((C278 *)(p + 0x2A64))->mC(p + 0x2A7C, p + 0x2AD0, h, 1);
    *(float *)(p + 0x28C4) = 10000.0f;
    *(float *)(p + 0x28C8) = 10000.0f;
    *(signed char *)(q + 0xA) = *(signed char *)(p + 0x3D4A);
    *(signed char *)(q + 0xB) = *(signed char *)(p + 0x3D4B);
    *(signed char *)(q + 0xC) = *(signed char *)(p + 0x3D49);
}
}

extern "C" {
int func_00430AD0(char *);
}

extern "C" {
int func_00253CA0(int p0) {
    char *v0;
    int v1;
    int tmp1;
    v0 = (char *)p0;
    v1 = (int)v0;
    if (v0 != 0) {
        v1 = (v1 + 64);
    }
    ((VC_4_ppiiv *)(v0 + 10852))->m((v0 + 10876), (v0 + 10960), v1, 1);
    *(float *)(v0 + 10964) = *(float *)(v0 + 10920);
    *(int *)(v0 + 15496) = 0;
    tmp1 = func_00430AD0(v0);
    *(char *)(v0 + 10412) = 0;
    return tmp1;
}
}

class VC8_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_002787A0(char *p0) {
    int tmp2;
    tmp2 = ((VC8_1_ii *)(p0 + 18944))->m(*(int *)(*(char **)(p0 + 5012) + 260));
    return tmp2;
}
}

class V10_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(void);
};

class VCC_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_002787C0(char *p0) {
    int tmp2;
    ((VCC_1_iv *)(p0 + 18944))->m(*(int *)(*(char **)(p0 + 5012) + 260));
    tmp2 = ((V10_0_i *)(p0 + 20480))->m();
    return tmp2;
}
}

class V14_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(void);
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
int func_00278810(int p0) {
    int func_002052E0(int);
    int tmp0;
    ((VD0_0_v *)(p0 + 18944))->m();
    ((V14_0_v *)(p0 + 20480))->m();
    tmp0 = func_002052E0(p0);
    return tmp0;
}
}
