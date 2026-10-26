extern "C" void *func_00128488(void *, int, unsigned int);

extern "C" void func_0024DDF0(char *);

extern "C" void func_0024E860(char *);

class ObjCurve {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m28(int);
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual float m38(int);
};

extern "C" {
void func_0024DD30(char *p) {
    extern void func_0024E9B0(char *);
    *(float *)(p + 0x88) = *(float *)(p + 0x88) + 1.0f;
    func_00128488(p + 0xC4, 0, 5);
    func_0024DDF0(p);
    *(float *)(p + 0x28) = (*(ObjCurve **)(p + 0x44))->m28(*(int *)(p + 0x38));
    *(float *)(p + 0x2C) = (*(ObjCurve **)(p + 0x44))->m38(*(int *)(p + 0x38));
    if (*(unsigned char *)(p + 0x82) == 0) {
        if (*(unsigned char *)(p + 0x80) == 1) {
            *(short *)(p + 0x4C) = (int)*(float *)(p + 0x28);
            func_0024E860(p);
        }
        func_0024E9B0(p);
    }
}
}

class Mot24D {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual unsigned char m18(int, float);
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m28(int);
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual float m38(int);
};

extern "C" {
void func_0024DDF0(char *p) {
    extern void func_0024DBA0(char *);
    unsigned char done;
    unsigned char fl;
    *(unsigned char *)(p + 0x80) = 0;
    if (*(unsigned char *)(p + 0x81) == 1) return;
    if (*(unsigned char *)(p + 0x82) == 1) return;
    *(unsigned char *)(p + 0x83) = 0;
    done = 0;
    if (*(unsigned char *)(p + 0x5C)) return;
    *(float *)(p + 0x28) = (*(Mot24D **)(p + 0x44))->m28(*(int *)(p + 0x38));
    *(float *)(p + 0x2C) = (*(Mot24D **)(p + 0x44))->m38(*(int *)(p + 0x38));
    *(float *)(p + 0x28) += **(float **)(p + 0x48);
    fl = *(unsigned char *)(p + 0x7C);
    if (fl & 2) {
        if (*(short *)(p + 0x7A) == 0x7FFF) {
            if (!(*(float *)(p + 0x28) <= *(float *)(p + 0x2C))) {
                if (fl & 1) done = 1;
                else if (*(unsigned char *)(p + 0x7F) != 1) func_0024DBA0(p);
            }
        } else {
            if (!(*(float *)(p + 0x28) <= (float)*(short *)(p + 0x7A))) {
                if (fl & 1) *(unsigned char *)(p + 0x82) = 1;
                else func_0024DBA0(p);
            }
        }
    } else if (fl & 1) {
        if (*(short *)(p + 0x7A) == 0x7FFF) {
            if (!(*(float *)(p + 0x28) <= *(float *)(p + 0x2C))) done = 1;
        } else {
            if (!(*(float *)(p + 0x28) <= (float)*(short *)(p + 0x7A))) *(unsigned char *)(p + 0x82) = 1;
        }
    } else if (fl == 0) {
        if (*(short *)(p + 0x7A) == 0x7FFF) {
            if (!(*(float *)(p + 0x28) <= *(float *)(p + 0x2C)) && *(unsigned char *)(p + 0x7F) != 1) func_0024DBA0(p);
        } else {
            if (!(*(float *)(p + 0x28) <= (float)*(short *)(p + 0x7A))) func_0024DBA0(p);
        }
    }
    if (*(unsigned char *)(p + 0x82) == 0) {
        if (*(unsigned char *)(p + 0x83) == 0)
            *(unsigned char *)(p + 0x86) = (*(Mot24D **)(p + 0x44))->m18(*(int *)(p + 0x38), **(float **)(p + 0x48));
        if (*(unsigned char *)(p + 0x7E) == 0)
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(*(char **)(**(char ***)(p + 0x6C) + 0x100)) : "memory");
        if (*(unsigned char *)(p + 0x7F) == 1 && *(unsigned char *)(p + 0x86) == 4) {
            (*(int *)(p + 0x68))++;
            *(unsigned char *)(p + 0x80) = 1;
        }
    }
    if (done == 1) *(unsigned char *)(p + 0x82) = 1;
}
}

extern "C" void func_0024E530(char *, char *, unsigned char, unsigned char);

extern "C" void func_0028C740(char *);

class A24E {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C();
    virtual void m20(int, float);
    virtual void d24(); virtual void d28(); virtual void d2C();
    virtual float m30(int);
};

#define VUNIT(d) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(d) : "memory")

extern "C" void func_0024E0B0(char *p) {
    char *e;
    signed char a;
    signed char b;
    unsigned char c;
    unsigned char f;
    e = *(char **)(p + 0x14);
    *(char **)(p + 0x14) = e + 8;
    p[0x84] = *(unsigned char *)(e + 4);
    p[0x85] = *(unsigned char *)(e + 5);
    if ((a = *(signed char *)(p + 0x4E)) == -1) {
        a = *(signed char *)(e + 2);
    } else {
        p[0x4E] = -1;
    }
    if ((b = *(signed char *)(p + 0x4F)) == -1) {
        b = *(signed char *)(e + 1);
    } else {
        p[0x4F] = -1;
    }
    switch (b) {
    case 0:
        f = 0;
        break;
    case 1:
        f = 1;
        break;
    }
    if ((c = *(unsigned char *)(p + 0x50)) == 0xFF) {
        c = *(unsigned char *)(e + 3);
    } else {
        *(unsigned char *)(p + 0x50) = 0xFF;
    }
    if (a == 0) c = 0;
    func_0024E530(p, e, c, f);
    if (*(char **)(p + 0xCC)) {
        func_0028C740(*(char **)(p + 0xCC));
        *(int *)(*(char **)(p + 0xCC) + 0xD8) = 0;
    }
    if (*(short *)(p + 0x4C) == -1) {
        if (*(short *)(e + 6) == 0x7FFF) {
            *(short *)(p + 0x4C) = (int)(*(A24E **)(p + 0x44))->m30(*(int *)(p + 0x38));
        } else {
            *(short *)(p + 0x4C) = *(short *)(e + 6);
        }
    } else if (*(short *)(p + 0x4C) == 0x7FFF) {
        *(short *)(p + 0x4C) = (int)(*(A24E **)(p + 0x44))->m30(*(int *)(p + 0x38));
    }
    (*(A24E **)(p + 0x44))->m20(*(int *)(p + 0x38), (float)*(short *)(p + 0x4C));
    if (*(unsigned char *)(p + 0x7E) == 0) {
        VUNIT(*(char **)(**(char ***)(p + 0x6C) + 0x100));
    }
    *(int *)(p + 0x68) = 0;
    *(int *)(p + 0x88) = 0;
    func_0024E860(p);
}

extern "C" {
void func_002F2FB0(int);
}

extern "C" {
int func_002F3080(int);
}

class VD0_2_iiv {
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
    virtual void m(int, int);
};

extern "C" {
void func_0024C010(char *p0, int p1) {
    char *v0;
    int v1;
    int v2;
    char *v3;
    int v4;
    v0 = p0;
    v1 = p1;
    func_002F2FB0(*(int *)(p0 + 32));
    v2 = func_002F3080(*(int *)(v0 + 32));
    v3 = (char *)v2;
    if (v3 != 0) {
        do {
            v4 = (int)v3;
            if (*(unsigned char *)(v3 + 24) == 2) {
                if (v3 != 0) {
                    v4 = (v4 + 64);
                }
                ((VD0_2_iiv *)v3)->m(v1, v4);
            }
            v2 = func_002F3080(*(int *)(v0 + 32));
            v3 = (char *)v2;
        } while (v3 != 0);
    }
}
}

extern "C" {
void func_0024E440(void);
}

extern "C" {
void func_0024E7E0(char *);
}

class V28_1_if {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m(int);
};

class V38_1_if {
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
    virtual float m(int);
};

extern "C" {
int func_0024DA80(char *p0, int p1, int p2) {
    void func_0024DBA0(char *);
    int func_0024E9B0(char *);
    float tmp2;
    float tmp5;
    int tmp6;
    *(int *)(p0 + 48) = p1;
    *(int *)(p0 + 52) = p2;
    *(short *)(p0 + 76) = -1;
    *(char *)(p0 + 78) = -1;
    *(char *)(p0 + 79) = -1;
    *(unsigned char *)(p0 + 80) = 255;
    *(int *)(p0 + 152) = 0;
    func_0024E440();
    func_0024E7E0(p0);
    func_0024DBA0(p0);
    tmp2 = ((V28_1_if *)*(char **)(p0 + 68))->m(*(int *)(p0 + 56));
    *(float *)(p0 + 40) = tmp2;
    tmp5 = ((V38_1_if *)*(char **)(p0 + 68))->m(*(int *)(p0 + 56));
    *(float *)(p0 + 44) = tmp5;
    tmp6 = func_0024E9B0(p0);
    return tmp6;
}
}

extern "C" {
int func_0024DB10(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    void func_0024DBA0(char *);
    int func_0024E9B0(char *);
    float tmp2;
    float tmp5;
    int tmp6;
    *(int *)(p0 + 48) = p1;
    *(int *)(p0 + 52) = p2;
    *(short *)(p0 + 76) = p3;
    *(char *)(p0 + 78) = p5;
    *(char *)(p0 + 79) = p4;
    *(char *)(p0 + 80) = p6;
    *(int *)(p0 + 152) = 0;
    func_0024E440();
    func_0024E7E0(p0);
    func_0024DBA0(p0);
    tmp2 = ((V28_1_if *)*(char **)(p0 + 68))->m(*(int *)(p0 + 56));
    *(float *)(p0 + 40) = tmp2;
    tmp5 = ((V38_1_if *)*(char **)(p0 + 68))->m(*(int *)(p0 + 56));
    *(float *)(p0 + 44) = tmp5;
    tmp6 = func_0024E9B0(p0);
    return tmp6;
}
}
