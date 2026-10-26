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

class Obj14 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14();
};

extern "C" void func_00231650(char *p) {
    int i;
    if (*(signed char *)(p + 0x1000) == 2) {
        ((ObjD0 *)(p + 0x640))->mD0();
    } else {
        ((ObjD0 *)(p + 0x40))->mD0();
    }
    for (i = 0; i < 16; i++) {
        func_0013D5D0(p + i * 16 + 0x38B0);
    }
    ((Obj14 *)(p + 0xA80))->m14();
    {
        int j;
        for (j = 0; j < *(int *)(p + 0x1008); j++) {
            func_0013D5D0(p + j * 16 + 0x100C);
        }
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

extern "C" Sub130 *func_002792A0(char *);

extern "C" char *func_00210240(char *);

class ObjBlend34 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void m1C(float);
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual float m34();
};

extern "C" ObjBlend34 *func_0027A720(char *);

extern "C" char *func_00215A30(char *, int, short);

extern "C" int func_00210810(char *, float);

extern "C" char *func_00210830(char *, int, float);

class VB4i {
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
    virtual int mB4();
};

extern "C" int func_00231CC0(char *p, int id, int k) {
    int r = 0;
    char *t;
    char *e;
    char *o;
    int n;
    float f;
    t = func_00210240(*(char **)(p + 0x200C));
    f = *(float *)(t + 0xC) + *(float *)(t + 0x10);
    t = func_00215A30(func_00210240(*(char **)(p + 0x200C)), 2, id);
    if (func_00210810(t, f) > 0 && (e = func_00210830(t, 0, f)) != 0 && (o = *(char **)(e + 0x18)) != 0) {
        if (*(signed char *)(o + 0x1000) == 2) {
            n = ((VB4i *)func_0027A720(o + 0x640))->mB4();
        } else {
            n = ((VB4i *)func_002792A0(o + 0x40))->mB4();
        }
        if (k >= n) k = n - 1;
        if (k < 0) k = 0;
        r = *(int *)((char *)(k * 4) + (int)o + 0xB10);
    }
    return r;
}

extern "C" {
extern char D_00543CD0[];
}

class V94_5_iiiihv {
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
    virtual void m(int, int, int, int, unsigned char);
};

class V98_2_iiv {
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
    virtual void m(int, int);
};

class V9C_2_ihv {
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
    virtual void m(int, unsigned char);
};

class VA0_2_ihi {
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
    virtual int m(int, unsigned char);
};

extern "C" {
int func_002355E0(int p0, int p1) {
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int tmp2;
    int tmp14;
    v0 = (char *)p0;
    v1 = (D_00543CD0 + (p1 * 24));
    v2 = *(int *)(v1 + 0);
    if (v2 >= 0) {
        tmp2 = ((*(unsigned char *)(v1 + 9) << 16) + (*(unsigned char *)(v1 + 5) + (*(unsigned char *)(v1 + 7) << 8)));
        ((V94_5_iiiihv *)(v0 + 64))->m(v2, ((*(unsigned char *)(v1 + 8) << 16) + (*(unsigned char *)(v1 + 4) + (*(unsigned char *)(v1 + 6) << 8))), (*(unsigned char *)(v1 + 9) << 16), (*(unsigned char *)(v1 + 5) + (*(unsigned char *)(v1 + 7) << 8)), *(unsigned char *)(v1 + 5));
        ((V98_2_iiv *)(v0 + 64))->m(*(int *)(v1 + 0), tmp2);
        ((V9C_2_ihv *)(v0 + 64))->m(*(int *)(v1 + 0), *(unsigned char *)(v1 + 10));
        v4 = ((VA0_2_ihi *)(v0 + 64))->m(*(int *)(v1 + 0), *(unsigned char *)(v1 + 11));
    }
    v3 = *(int *)(v1 + 12);
    if (v3 > 0) {
        tmp14 = ((*(unsigned char *)(v1 + 21) << 16) + (*(unsigned char *)(v1 + 17) + (*(unsigned char *)(v1 + 19) << 8)));
        ((V94_5_iiiihv *)(v0 + 64))->m(v3, ((*(unsigned char *)(v1 + 20) << 16) + (*(unsigned char *)(v1 + 16) + (*(unsigned char *)(v1 + 18) << 8))), (*(unsigned char *)(v1 + 21) << 16), (*(unsigned char *)(v1 + 17) + (*(unsigned char *)(v1 + 19) << 8)), *(unsigned char *)(v1 + 17));
        ((V98_2_iiv *)(v0 + 64))->m(*(int *)(v1 + 12), tmp14);
        ((V9C_2_ihv *)(v0 + 64))->m(*(int *)(v1 + 12), *(unsigned char *)(v1 + 22));
        v4 = ((VA0_2_ihi *)(v0 + 64))->m(*(int *)(v1 + 12), *(unsigned char *)(v1 + 23));
    }
    return v4;
}
}
