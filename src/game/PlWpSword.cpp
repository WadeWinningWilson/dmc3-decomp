extern "C" void func_003023F0(int);

extern "C" int func_0028B8E0(char *);

extern "C" int func_0028B620(char *);

extern "C" void func_0028B980(char *, char *, int);

class Obj180 {
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
    virtual void mB0(int, char *);
    virtual void d43();
    virtual void mB8(int, int, int, int, int);
    virtual void mBC(float);
};

extern "C" void func_0028D3D0(char *p) {
    char *e;
    if ((unsigned char)func_0028B8E0(p) == 0) {
        return;
    }
    if ((unsigned char)func_0028B620(p) == 0) {
        *(unsigned char *)(p + 0xD8) = 1;
    } else {
        *(unsigned char *)(p + 0xD8) = *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2);
    }
    if (*(float *)(*(char **)(p + 0xE0) + 0x29A8) <= 0.0f) {
        func_0028B980(p, p + 0x890, *(unsigned char *)(p + 0xD8));
        if (*(unsigned char *)(p + 0xDC) == 1) {
            ((Obj180 *)(p + 0x180))->mBC(*(float *)(p + 0x10));
        }
        switch (*(signed char *)(p + 0xDA)) {
        case 0:
            e = *(char **)(p + 0xE0);
            if (*(unsigned char *)(e + 0x24EC) != *(unsigned char *)(e + 0x24D2) || *(unsigned char *)(p + 0xDC) == 1) {
                ((Obj180 *)(p + 0x180))->mB0(*(int *)(p + 0x8D0), p + 0x100);
            }
            *(unsigned char *)(p + 0xDC) = 0;
            break;
        case 1:
            e = *(char **)(p + 0xE0);
            if (*(unsigned char *)(e + 0x24EC) != *(unsigned char *)(e + 0x24D2)) {
                ((Obj180 *)(p + 0x180))->mB8(0, 0, 0, 0, 0);
                *(unsigned char *)(p + 0xDC) = 1;
            }
            break;
        }
        if (*(unsigned char *)(p + 0xD8) != 1 && *(unsigned char *)(*(char **)(p + 0xE0) + 0x24EB) != 0 &&
            *(char **)(p + 0x8D4) != 0) {
            func_003023F0(*(int *)(p + 0x8D4));
        }
    }
}

class O28D {
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
    virtual void mC8(char *);
};

extern "C" {
void func_00131700(char *, char *, char *);
}

extern "C" {
void func_00105230(char *, char *, char *);
}

extern "C" {
void func_001318E0(char *, char *, char *);
}

extern "C" {
void func_00105300(char *, char *);
}

extern "C" {
int func_002D9F00(char *, unsigned char);
}

extern "C" {
void func_00104C00(char *, int, char *);
}

extern "C" void func_0028D610(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        {
            unsigned char k = *(unsigned char *)(p + 0xD4);
            func_00104C00(p + 0x130, func_002D9F00(*(char **)(p + 0xE0), k), p + 0x890);
        }
        ((O28D *)(p + 0x180))->mC8(p + 0x130);
        break;
    case 1:
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x850) : "memory");
        func_00131700(p + 0x850, p + 0x850, p + 0x830);
        func_00105230(p + 0x850, p + 0x850, p + 0x820);
        func_001318E0(p + 0x850, p + 0x850, p + 0x840);
        {
            char *m = p + 0x850;
            func_00105300(p + 0x130, m);
        }
        break;
    }
}

extern "C" {
int func_0028BFE0(char *);
}

class V10_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(void);
};

class VCC_1_pv {
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
    virtual void m(char *);
};

extern "C" {
int func_0028D6E0(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(signed char *)(p0 + 218) != -1) {
        ((VCC_1_pv *)(v0 + 384))->m((v0 + 304));
        v1 = func_0028BFE0(v0);
        if ((v1 & 255) == 1) {
            v1 = ((V10_0_i *)(v0 + 1920))->m();
        }
    }
    return v1;
}
}

extern "C" {
int func_0013D5D0(...);
}

extern "C" {
int func_001AD140(...);
}

extern "C" {
int func_00286040(char *);
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
int func_0028D750(int p0) {
    int v1;
    int v4;
    int v3;
    char *v0;
    int v2;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 384))->m();
    if (*(unsigned char *)(v0 + 221) == 1) {
        ((V14_0_v *)(v0 + 1920))->m();
    }
    v2 = func_00286040((v0 + 2260));
    v1 = *(int *)(v0 + 2260);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
    }
    v4 = 0;
    if ((0 < *(int *)(v0 + 264))) {
        v3 = (int)v0;
        do {
            v2 = func_0013D5D0((v3 + 268));
            v4 = (v4 + 1);
            v3 = (v3 + 16);
        } while ((v4 < *(int *)(v0 + 264)));
    }
    return v2;
}
}
