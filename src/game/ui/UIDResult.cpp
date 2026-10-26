extern "C" char D_00666750[];

extern "C" void func_001AF080(char *, int);

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

extern "C" void func_00356670(char *p) {
    int i;
    for (i = 0; i < 20; i++) {
        ((ObjD0 *)(p + i * 0x600 + 0xC0))->mD0();
    }
    {
        int j;
        for (j = 0; j < *(int *)(p + 0x38); j++) {
            func_0013D5D0(p + j * 16 + 0x3C);
        }
    }
    func_001AF080(D_00666750, *(int *)(p + 0x9C));
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

extern "C" char D_006663C0[];

extern "C" char D_01DFABA0[];

extern "C" char D_006011CC[];

extern "C" unsigned short func_001AE360(char *, int);

extern "C" unsigned short func_001AE1E0(char *, int);

extern "C" void func_003303F0(char *, int, int, int, int);

extern "C" float func_0011DA38(float);

extern "C" void func_0013E020(char *, int, int);

#define C ((Col355 *)(p + 0x4EC0))
extern "C" {
void func_00355F70(char *p) {
    extern ObjSnd *D_005BC1A8;
    unsigned int u;
    int c;
    if (*(unsigned char *)(p + 0x7962) == 0) {
        if (func_001AE360(D_006663C0, 0) & 0x2000) {
            if (*(int *)(p + 0x796C) < 2) {
                (*(int *)(p + 0x796C))++;
            } else {
                *(int *)(p + 0x796C) = 0;
            }
            func_003303F0(D_01DFABA0, 0, 2, 0, 0);
            *(float *)(p + 0x798C) = 90.0f;
        }
        if (func_001AE360(D_006663C0, 0) & 0x8000) {
            if (*(int *)(p + 0x796C) > 0) {
                (*(int *)(p + 0x796C))--;
            } else {
                *(int *)(p + 0x796C) = 2;
            }
            func_003303F0(D_01DFABA0, 0, 2, 0, 0);
            *(float *)(p + 0x798C) = 90.0f;
        }
    }
    if (!((*(float *)(p + 0x798C) += 3.0f) <= 360.0f)) *(float *)(p + 0x798C) = 0.0f;
    u = (unsigned int)(96.0f + 160.0f * ((1.0f + func_0011DA38(6.283185f * (*(float *)(p + 0x798C) / 360.0f))) / 2.0f));
    if (u > 0xFF) u = 0xFF;
    c = (u << 16) | (u | (u << 8));
    switch (*(int *)(p + 0x796C)) {
    case 0:
        C->m78(0, c);
        C->m78(1, 0x404040);
        C->m78(2, 0x404040);
        break;
    case 1:
        C->m78(0, 0x404040);
        C->m78(1, c);
        C->m78(2, 0x404040);
        break;
    case 2:
        C->m78(0, 0x404040);
        C->m78(1, 0x404040);
        C->m78(2, c);
        break;
    }
    if (func_001AE1E0(D_006663C0, 0) & 0x40) {
        switch (*(int *)(p + 0x796C)) {
        case 0:
            *(unsigned char *)(p + 5) = 8;
            D_005BC1A8->m18(0x80000000, 0x1E);
            break;
        case 1:
            *(unsigned char *)(p + 5) = 8;
            D_005BC1A8->m18(0x80000000, 0x1E);
            func_0013E020(D_006011CC, 0x1E, 0);
            break;
        case 2:
            *(unsigned char *)(p + 5) = 8;
            D_005BC1A8->m18(0x80000000, 0x1E);
            func_0013E020(D_006011CC, 0x1E, 0);
            break;
        }
        func_003303F0(D_01DFABA0, 0, 4, 0, 0);
    }
}
}
#undef C

class Col35C {
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
    virtual void m74(unsigned int);
    virtual void m78(int, int);
};

extern "C" char D_01DF5D20[];

extern "C" char *func_00279290(char *);

extern "C" void func_001A1E10(char *);

extern "C" void func_001A1E70(char *, int);

extern "C" void func_001A2000(char *, int);

extern "C" float func_001F9C40(char *, int);

#define A ((Col35C *)(p + 0x48C0))

#define B ((Col35C *)(p + 0x4EC0))

#define C ((Col355 *)(p + 0x4EC0))
extern "C" void func_00355C60(char *p) {
    unsigned char f = 0;
    if (*(unsigned char *)(p + 0x7963) == 0) return;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        *(float *)(p + 0x7980) = 60.0f;
        func_001A1E10(func_00279290(p + 0x48C0));
        *(unsigned int *)(p + 0x7B44) = 0;
        A->m74((*(unsigned int *)(p + 0x7B44) << 16) + (*(unsigned int *)(p + 0x7B44) + (*(unsigned int *)(p + 0x7B44) << 8)) + 0x80000000);
    case 1:
        f = 0;
        if (*(unsigned int *)(p + 0x7B44) < 0x80) {
            *(unsigned int *)(p + 0x7B44) += (unsigned int)(8.0f * *(float *)(p + 0x10));
            A->m74((*(unsigned int *)(p + 0x7B44) << 16) + (*(unsigned int *)(p + 0x7B44) + (*(unsigned int *)(p + 0x7B44) << 8)) + 0x80000000);
        } else {
            f = 1;
        }
        if ((*(float *)(p + 0x7980) -= func_001F9C40(D_01DF5D20, 0x87)) < 0.0f && f == 1) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0x7980) = 60.0f;
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x7962) == 1) {
            func_001A2000(func_00279290(p + 0x4EC0), 0);
            func_001A2000(func_00279290(p + 0x4EC0), 1);
            func_001A1E70(func_00279290(p + 0x4EC0), 2);
        } else {
            func_001A1E10(func_00279290(p + 0x4EC0));
        }
        B->m78(0, 0x404040);
        B->m78(1, 0x404040);
        B->m78(2, 0x808080);
        if (func_001AE1E0(D_006663C0, 0) & 0x40) f = 1;
        if ((*(float *)(p + 0x7980) -= func_001F9C40(D_01DF5D20, 0x87)) < 0.0f || f == 1) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0x7980) = 0.0f;
        }
        break;
    case 3:
        *(unsigned char *)(p + 5) = 7;
        *(unsigned char *)(p + 6) = 0;
        break;
    }
}
#undef C

extern "C" void func_00105300(char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" void func_001A1F90(char *);

extern "C" void func_00356470(char *);

class Obj600 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24(int);
    virtual void d8();
    virtual int m2C(char *, char *);
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void m3C(int);
};

class ObjB0 {
public:
    virtual void x0();
    virtual void x1();
    virtual void x2();
    virtual void x3();
    virtual void x4();
    virtual void x5();
    virtual void x6();
    virtual void x7();
    virtual void x8();
    virtual void x9();
    virtual void x10();
    virtual void x11();
    virtual void x12();
    virtual void x13();
    virtual void x14();
    virtual void x15();
    virtual void x16();
    virtual void x17();
    virtual void x18();
    virtual void x19();
    virtual void x20();
    virtual void x21();
    virtual void x22();
    virtual void x23();
    virtual void x24();
    virtual void x25();
    virtual void x26();
    virtual void x27();
    virtual void x28();
    virtual void x29();
    virtual void x30();
    virtual void x31();
    virtual void x32();
    virtual void x33();
    virtual void x34();
    virtual void x35();
    virtual void x36();
    virtual void x37();
    virtual void x38();
    virtual void x39();
    virtual void x40();
    virtual void x41();
    virtual void mB0(int, char *);
};

static inline char *ent600(char *q, unsigned short i) { char *r; if (*(unsigned int *)(q + 4) < i + 1) { r = 0; } else if (((int *)(q + 8))[i] == 0) { r = 0; } else { r = q + ((int *)(q + 8))[i]; } return r; }

static inline char *chunk600(char *h, unsigned short i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent600(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }

extern "C" void func_00353580(char *p) {
    int i;
    char *b;
    char *a;
    int j;
    for (i = 0; i < 20; i++) {
        a = chunk600(*(char **)(p + 0x9C), i * 2);
        b = chunk600(*(char **)(p + 0x9C), i * 2 + 1);
        ((Obj600 *)(p + i * 0x600 + 0xC0))->m24(1);
        if ((unsigned char)((Obj600 *)(p + i * 0x600 + 0xC0))->m2C(b, a) == 0) {
            func_00356470(p);
            return;
        }
        ((Obj600 *)(p + i * 0x600 + 0xC0))->m3C(2);
        func_001A1F90(func_00279290(p + i * 0x600 + 0xC0));
        if (i == 0x13) {
            ((ObjB0 *)(p + i * 0x600 + 0xC0))->mB0(0, p + 0x78C0);
            for (j = 0; j < 6; j++) {
                func_00105300(p + j * 0x40 + 0x7B50, *(char **)(((char **)(p + 0x78C0))[j] + 0x100));
            }
        }
    }
    *(unsigned char *)(p + 0x78E0) = 0;
    *(int *)(p + 0x78F0) = 0;
    *(int *)(p + 0x78F4) = 0;
    *(int *)(p + 0x78F8) = 0;
    *(float *)(p + 0x78FC) = 1.0f;
    *(int *)(p + 0x7900) = 0;
    *(int *)(p + 0x7904) = 0;
    *(int *)(p + 0x7908) = 0;
    *(float *)(p + 0x790C) = 1.0f;
    *(float *)(p + 0x7910) = 1.0f;
    *(float *)(p + 0x7914) = 1.0f;
    *(float *)(p + 0x7918) = 1.0f;
    *(float *)(p + 0x791C) = 1.0f;
    UNIT(p + 0x7920);
    func_00131700(p + 0x7920, p + 0x7920, p + 0x7900);
    func_00105230(p + 0x7920, p + 0x7920, p + 0x78F0);
    func_001318E0(p + 0x7920, p + 0x7920, p + 0x7910);
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 5) = 0;
    *(int *)(p + 0x796C) = 2;
}

class O356 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void mC8(char *);
    virtual void mCC(char *);
};

extern "C" void func_00356710(char *p) {
    char *q = p + 0x7920;
    ((O356 *)(p + 0x72C0))->mC8(q);
    ((O356 *)(p + 0x72C0))->mCC(q);
    ((O356 *)(p + 0x42C0))->mCC(q);
    ((O356 *)(p + 0xC0))->mCC(q);
    ((O356 *)(p + 0x6C0))->mCC(q);
    ((O356 *)(p + 0xCC0))->mCC(q);
    ((O356 *)(p + 0x12C0))->mCC(q);
    ((O356 *)(p + 0x18C0))->mCC(q);
    ((O356 *)(p + 0x1EC0))->mCC(q);
    ((O356 *)(p + 0x24C0))->mCC(q);
    ((O356 *)(p + 0x2AC0))->mCC(q);
    ((O356 *)(p + 0x30C0))->mCC(q);
    ((O356 *)(p + 0x3CC0))->mCC(q);
    ((O356 *)(p + 0x4EC0))->mCC(q);
    ((O356 *)(p + 0x48C0))->mCC(q);
    ((O356 *)(p + 0x36C0))->mCC(q);
    ((O356 *)(p + 0x54C0))->mCC(q);
    ((O356 *)(p + 0x5AC0))->mCC(q);
    ((O356 *)(p + 0x60C0))->mCC(q);
    ((O356 *)(p + 0x66C0))->mCC(q);
    ((O356 *)(p + 0x6CC0))->mCC(q);
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
int func_003563A0(int p0) {
    extern char * D_005BC1A8;
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = ((V2C_0_i *)D_005BC1A8)->m();
    if ((v1 & 255) == 1) {
        if (*(int *)(v0 + 31084) == 0) {
            *(char *)(v0 + 31076) = 0;
            *(char *)(v0 + 5) = 9;
        } else {
            *(char *)(v0 + 5) = 10;
        }
    }
    return v1;
}
}
