#include "game/mt_rand.h"
#include "game/mt_rand.h"
extern "C" char *func_00207480(int, int, int, int);

extern "C" void func_0034BA60(int, char *, int, int, int);

class ObjV134 {
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
    virtual void m130();
    virtual int m134(int);
};

extern "C" {
void func_004AE1D0(char *p) {
    extern int func_0024E800(char *);
    extern void func_00376E40(char *);
    extern void func_00376B80(char *, int);
    extern void func_00376B40(char *, int);
    extern char *func_004B9710(char *, int, char *, int, int, int);
    char *e;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 2;
    func_00376E40(p);
    *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x400000;
    *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x4000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0034BA60(0x4A, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        e = func_00207480(3, 0x322, 0, 0x10);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0xA70) + 0x104);
            e[0x9A] = 0;
            e[0x3A] = 1;
        }
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            e = func_004B9710(p + 0x9B0, *(int *)(p + 0x9F0), p, ((ObjV134 *)p)->m134(5), 1, 0);
            if (e != 0) {
                ((ObjV134 *)e)->m130();
            }
            func_00376B40(p, 3);
        }
    }
}
}

static inline char *up(char *q, int off) {
    if (q != 0) {
        q += off;
    }
    return q;
}

extern "C" {
void func_004AECE0(char *p) {
    extern void func_00376E40(char *);
    extern void func_00376B80(char *, int);
    extern void func_00376B40(char *, int);
    extern int func_0041D6B0(float *, float);
    extern void func_0041D6E0(char *, char *, int, float);
    float f;
    func_00376E40(p);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned int *)(p + 0x8FC) |= 0x800;
        *(unsigned char *)(p + 0x97A) = 2;
        *(float *)(p + 0x8F8) = 60.0f;
        func_00376B80(p, -1);
        f = 25.0f;
        if (*(int *)(p + 0x910) == 0) f *= 1.05f;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        *(short *)(p + 0x90) -= 382.0f * *(float *)(p + 0x10);
        func_0041D6E0(up(p, 0x40), p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0((float *)(p + 0x8F8), *(float *)(p + 0x10)) == 1) func_00376B40(p, 4);
        break;
    }
}
}

extern "C" {
void func_004AEE10(char *p) {
    extern void func_00376E40(char *);
    extern void func_00376B80(char *, int);
    extern void func_00376B40(char *, int);
    extern int func_0041D6B0(float *, float);
    extern void func_0041D6E0(char *, char *, int, float);
    float f;
    func_00376E40(p);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned int *)(p + 0x8FC) |= 0x800;
        *(unsigned char *)(p + 0x97A) = 1;
        *(float *)(p + 0x8F8) = 60.0f;
        func_00376B80(p, -1);
        f = 25.0f;
        if (*(int *)(p + 0x910) == 0) f *= 1.05f;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        *(short *)(p + 0x90) += 382.0f * *(float *)(p + 0x10);
        func_0041D6E0(up(p, 0x40), p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0((float *)(p + 0x8F8), *(float *)(p + 0x10)) == 1) func_00376B40(p, 4);
        break;
    }
}
}

extern "C" void func_0041D670(char *);

class WC04 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual float m28(int);
};

class WR130 {
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
    virtual void m130();
};

class WAD {
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
    virtual int m134(int);
};

extern "C" {
void func_004ADEA0(char *p) {
    extern int func_0024E800(char *);
    extern void func_00376E40(char *);
    extern void func_00376B80(char *, int);
    extern void func_00376B40(char *, int);
    extern WR130 *func_004AB260(char *, int, char *, int, int, int);
    char *q;
    WR130 *r;
    func_00376E40(p);
    *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x400000;
    *(float *)(p + 0x8E4) = ((WC04 *)(p + 0xC04))->m28(0);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (*(float *)(p + 0x8E4) < 60.0f) break;
        *(char **)(p + 0x944) = func_00207480(2, 0x215, 0, 0x10);
        q = *(char **)(p + 0x944);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0xA94) + 0x104);
            *(unsigned char *)(q + 0x9A) = 0;
            *(unsigned char *)(*(char **)(p + 0x944) + 0x3A) = 1;
        }
        *(unsigned char *)(p + 6) = 2;
        break;
    case 2:
        if (*(float *)(p + 0x8E4) < 107.0f) break;
        r = func_004AB260(p + 0x9B0, *(int *)(p + 0x9F0), p, ((WAD *)p)->m134(0xF), 0, 0);
        if (r != 0) r->m130();
        func_0041D670(p + 0x944);
        *(unsigned char *)(p + 6) = 3;
        break;
    case 3:
        if (*(float *)(p + 0x8E4) < 190.0f) break;
        *(char **)(p + 0x944) = func_00207480(2, 0x215, 0, 0x10);
        q = *(char **)(p + 0x944);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0xA84) + 0x104);
            *(unsigned char *)(q + 0x9A) = 0;
            *(unsigned char *)(*(char **)(p + 0x944) + 0x3A) = 1;
        }
        *(unsigned char *)(p + 6) = 4;
        break;
    case 4:
        if (*(float *)(p + 0x8E4) < 226.0f) break;
        r = func_004AB260(p + 0x9B0, *(int *)(p + 0x9F0), p, ((WAD *)p)->m134(0xB), 0, 0);
        if (r != 0) r->m130();
        func_0041D670(p + 0x944);
        *(unsigned char *)(p + 6) = 5;
        break;
    case 5:
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) func_00376B40(p, 3);
        break;
    }
}
}

class Self4AF {
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
    virtual int m134(int);
};

class Ef4AF {
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
    virtual void m130();
};

class Tm4AF {
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
};

extern "C" int D_005BE1AC;

extern "C" int D_005BE09C;

extern "C" unsigned char D_01CAFF3C[];

extern "C" void func_001ACC30(int, int, int, int, int);

#define SPAWN(k) func_004AB260(p + 0x9B0, *(int *)(p + 0x9F0), p, ((Self4AF *)p)->m134(0xF), k, 0)

extern "C" {
void func_004AFA50(char *p) {
    extern void func_00376E40(void);
    extern Ef4AF *func_004B9710(char *, int, char *, int, int, unsigned int);
    extern Ef4AF *func_004AB260(char *, int, char *, int, int, int);
    extern void func_00376B80(char *, int);
    extern void func_00376B40(char *, int);
    extern int func_0024E800(char *);
    extern int func_0041D6B0(float *, float);
    unsigned char n;
    unsigned int i;
    Ef4AF *o;
    char *q;
    D_005BE1AC |= 0xC0000000;
    func_00376E40();
    *(unsigned int *)(p + 0x8FC) |= 0x400000;
    *(float *)(p + 0x8E4) = ((Tm4AF *)(p + 0xC04))->m28(0);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        if (*(unsigned char *)(p + 0x974) < 0x28) {
            n = 5;
            if (*(unsigned char *)(p + 0x8EB) == 0) n = 3;
            for (i = 0; i < n; i++) {
                o = func_004B9710(p + 0x9B0, *(int *)(p + 0x9F0), p, ((Self4AF *)p)->m134(5), 3, i);
                if (o != 0) o->m130();
            }
        }
        *(short *)(p + 0x3C4C) = 0x280;
        *(float *)(p + 0x3C44) *= 0.05f;
        *(float *)(p + 0x3C40) *= 0.05f;
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        *(float *)(p + 0x3C44) *= 1.15f;
        *(float *)(p + 0x3C40) *= 1.15f;
        if (!(*(float *)(p + 0x3C44) <= 1e-08f)) {
            *(short *)(p + 0x3C4C) = 0x140;
            *(float *)(p + 0x3C44) = 1e-08f;
            *(float *)(p + 0x3C40) = 6.9444445e-07f;
        }
        if (!(*(float *)(p + 0x8E4) < 60.0f)) {
            *(char **)(p + 0x944) = func_00207480(2, 0x215, 0, 0x10);
            q = *(char **)(p + 0x944);
            if (q != 0) {
                *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0xA94) + 0x104);
                *(unsigned char *)(q + 0x9A) = 0;
                *(unsigned char *)(*(char **)(p + 0x944) + 0x3A) = 1;
            }
            *(unsigned char *)(p + 6) = 2;
        }
    case 2:
        if (!(*(float *)(p + 0x8E4) < 107.0f)) {
            if (D_01CAFF3C[0] == 4) {
                if (100.0f * (2.3283064e-10f * mt_rand()) < 66.6f) {
                    o = SPAWN(1);
                } else {
                    o = SPAWN(2);
                }
            } else if (*(unsigned char *)(p + 0x8EB) >= 2) {
                o = SPAWN(2);
            } else {
                o = SPAWN(1);
            }
            if (o != 0) o->m130();
            func_0041D670(p + 0x944);
            func_001ACC30(D_005BE09C, 3, 0x1E, 0x14, 0);
            *(unsigned char *)(p + 6) = 3;
        }
        break;
    case 3:
        if (!(*(float *)(p + 0x8E4) < 190.0f)) {
            *(char **)(p + 0x944) = func_00207480(2, 0x215, 0, 0x10);
            q = *(char **)(p + 0x944);
            if (q != 0) {
                *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0xA84) + 0x104);
                *(unsigned char *)(q + 0x9A) = 0;
                *(unsigned char *)(*(char **)(p + 0x944) + 0x3A) = 1;
            }
            *(unsigned char *)(p + 6) = 4;
        }
        break;
    case 4:
        if (!(*(float *)(p + 0x8E4) < 226.0f)) {
            if (D_01CAFF3C[0] == 4) {
                if (100.0f * (2.3283064e-10f * mt_rand()) < 66.6f) {
                    o = SPAWN(1);
                } else {
                    o = SPAWN(2);
                }
            } else if (*(unsigned char *)(p + 0x8EB) >= 2) {
                o = SPAWN(1);
            } else if (*(unsigned char *)(p + 0x8EB) == 1) {
                o = SPAWN(2);
            } else {
                o = SPAWN(1);
            }
            if (o != 0) o->m130();
            func_0041D670(p + 0x944);
            func_001ACC30(D_005BE09C, 3, 0x1E, 0x14, 0);
            *(unsigned char *)(p + 6) = 5;
        }
        break;
    case 5:
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            *(float *)(p + 0x8F8) = 120.0f;
            func_00376B80(p, 0);
            *(unsigned char *)(p + 6) = 6;
        }
        break;
    case 6:
        if ((unsigned char)func_0041D6B0((float *)(p + 0x8F8), *(float *)(p + 0x10)) == 1) {
            *(unsigned int *)(p + 0x8FC) |= 0x80;
            func_00376B40(p, 3);
        }
        break;
    }
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

extern "C" unsigned char func_00376F40(char *);

extern "C" {
void func_004AE3F0(Hit40 *h) {
    extern void func_00376E40(char *);
    extern void func_00376B80(char *, int);
    extern void func_00376B40(char *, int);
    extern void func_0041D6E0(Sub40 *, char *, int, float);
    char *p = (char *)h;
    func_00376E40(p);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00376B80(p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 50.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041D6E0(h, p + 0x60, 1, *(float *)(p + 0x10));
        if (func_00376F40(p) == 1) {
            func_00376B40(p, 8);
            return;
        }
        break;
    }
}
}

extern "C" float func_00132470(char *, char *);

extern "C" void func_0034B8C0(char *, short *, int);

extern "C" int func_0024E780(char *, int, int);

extern "C" void func_0024E7B0(char *, int, int);

class B0_4B0 {
public:
    char pad[0x40];
};

class B1_4B0 {
public:
    int x;
};

class D_4B0 : public B0_4B0, public B1_4B0 {
public:
    int y;
};

extern "C" {
void func_004B0820(D_4B0 *self) {
    extern char D_00562AA0[];
    extern short func_0034B940(char *, char *);
    extern void func_0041D6E0(char *, char *, int, float);
    extern void func_00376E40(char *);
    extern void func_00376B80(char *, int);
    extern void func_00376B40(char *, int);
    char *p = (char *)self;
    short s;
    float f;
    float d;
    unsigned char r;
    func_00376E40(p);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 0x97A) = 2;
        func_00376B80(p, -1);
        f = 25.0f;
        if (*(int *)(p + 0x910) == 0) f = f * 1.05f;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        s = func_0034B940(p + 0x50, D_00562AA0);
        d = func_00132470(p + 0x50, D_00562AA0);
        if (!(d <= 1800.0f)) *(short *)(p + 0x96C) = -0x42D7;
        if (d < 1700.0f) *(short *)(p + 0x96C) = -0x3E93;
        s += *(short *)(p + 0x96C);
        s -= *(short *)(p + 0x90);
        if (!(d <= 1900.0f)) {
            func_0034B8C0(p + 0x90, &s, (int)(728.0f * *(float *)(p + 0x10)));
        } else {
            func_0034B8C0(p + 0x90, &s, (int)(182.0f * *(float *)(p + 0x10)));
        }
        func_0041D6E0((char *)(B1_4B0 *)self, p + 0x60, 1, *(float *)(p + 0x10));
        r = func_0024E780(p + 0x2B20, 0, 0);
        func_0024E7B0(p + 0x2B20, 0, 0);
        if (r == 1) {
            if (*(unsigned short *)(p + 0x970) != 0 && *(signed char *)(p + 0x973) > 5) {
                *(signed char *)(p + 0x973) -= 2;
            }
            (*(signed char *)(p + 0x973))--;
            if (!(*(signed char *)(p + 0x973) > 0)) {
                *(int *)(p + 0x8FC) &= ~0x400;
                func_00376B40(p, 5);
            }
        }
        break;
    }
}
}

class B0_4B0a {
public:
    char pad[0x40];
};

class B1_4B0a {
public:
    int x;
};

class D_4B0a : public B0_4B0a, public B1_4B0a {
public:
    int y;
};

extern "C" {
void func_004B0A70(D_4B0a *self) {
    extern char D_00562AA0[];
    extern short func_0034B940(char *, char *);
    extern void func_0041D6E0(char *, char *, int, float);
    extern void func_00376E40(char *);
    extern void func_00376B80(char *, int);
    extern void func_00376B40(char *, int);
    char *p = (char *)self;
    short s;
    float f;
    float d;
    unsigned char r;
    func_00376E40(p);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 0x97A) = 1;
        func_00376B80(p, -1);
        f = 25.0f;
        if (*(int *)(p + 0x910) == 0) f = f * 1.05f;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        s = func_0034B940(p + 0x50, D_00562AA0);
        d = func_00132470(p + 0x50, D_00562AA0);
        if (!(d <= 1800.0f)) *(short *)(p + 0x96C) = 0x42D8;
        if (d < 1700.0f) *(short *)(p + 0x96C) = 0x3E94;
        s += *(short *)(p + 0x96C);
        s -= *(short *)(p + 0x90);
        if (!(d <= 1900.0f)) {
            func_0034B8C0(p + 0x90, &s, (int)(728.0f * *(float *)(p + 0x10)));
        } else {
            func_0034B8C0(p + 0x90, &s, (int)(182.0f * *(float *)(p + 0x10)));
        }
        func_0041D6E0((char *)(B1_4B0a *)self, p + 0x60, 1, *(float *)(p + 0x10));
        r = func_0024E780(p + 0x2B20, 0, 0);
        func_0024E7B0(p + 0x2B20, 0, 0);
        if (r == 1) {
            if (*(unsigned short *)(p + 0x970) != 0 && *(signed char *)(p + 0x973) > 5) {
                *(signed char *)(p + 0x973) -= 2;
            }
            (*(signed char *)(p + 0x973))--;
            if (!(*(signed char *)(p + 0x973) > 0)) {
                *(int *)(p + 0x8FC) &= ~0x400;
                func_00376B40(p, 6);
            }
        }
        break;
    }
}
}

extern "C" {
void func_0041DBA0(char *, char *);
}

extern "C" {
char *func_004F5D20(char *, int, char *, int, int, int);
}

class V130_0_v {
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
    virtual void m(void);
};

class V134_1_ii {
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
    virtual int m(int);
};

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

extern "C" {
int func_004AF8A0(int p0) {
    int func_0024E800(...);
    int func_00376B40(...);
    void func_00376B80(char *, int);
    int func_00376E40(void);
    int func_0041D6B0(char *, float);
    char *v0;
    int v1;
    int v2;
    char *v3;
    float tmp4;
    int tmp6;
    int tmp8;
    v0 = (char *)p0;
    v1 = func_00376E40();
    *(int *)(v0 + 2300) |= 0x4000000;
    v2 = *(unsigned char *)(v0 + 6);
    switch (v2) {
    case 0:
        *(int *)(v0 + 2300) &= -2049;
        func_00376B80(v0, -1);
        *(int *)(v0 + 2292) = 0x42200000;
        *(char *)(v0 + 6) = 1;
        /* fall through */
    case 1:
        tmp4 = ((V28_1_if *)(v0 + 3076))->m(0);
        *(float *)(v0 + 2276) = tmp4;
        if (tmp4 <= 100.0f) {
            if (*(unsigned char *)(v0 + 2283) > 0) {
                tmp6 = func_0041D6B0((v0 + 2292), *(float *)(v0 + 16));
                if ((tmp6 & 255) == 1) {
                    tmp8 = ((V134_1_ii *)*(char **)(v0 + 2320))->m(1);
                    v3 = func_004F5D20((v0 + 2480), *(int *)(v0 + 2544), v0, tmp8, 0, 0);
                    if (v3 != 0) {
                        ((V130_0_v *)v3)->m();
                    }
                    *(int *)(v0 + 2292) = 0x40e00000;
                }
            }
        }
        func_0041DBA0(v0, (v0 + 3072));
        v1 = func_0024E800((v0 + 11040));
        if ((v1 & 255) == 1) {
            *(short *)(v0 + 144) += -32768;
            *(float *)(v0 + 132) = (6.283185005187988f * ((float)*(short *)(v0 + 144) / 65536.0f));
            func_00376B80(v0, 0);
            v1 = func_00376B40(v0, 11);
        }
        break;
    }
    return v1;
}
}

extern "C" {
int func_004B0200(int p0) {
    int func_0024E800(...);
    int func_00376B40(...);
    void func_00376B80(char *, int);
    int func_00376E40(void);
    int func_0041D6B0(char *, float);
    char *v4;
    int v2;
    int v1;
    char *v0;
    int v3;
    float tmp2;
    int tmp4;
    int tmp6;
    int tmp8;
    v0 = (char *)p0;
    v2 = func_00376E40();
    *(int *)(v0 + 2300) |= 0x4000000;
    v1 = *(unsigned char *)(v0 + 6);
    switch (v1) {
    case 0:
        *(int *)(v0 + 2292) = 0x43020000;
        func_00376B80(v0, -1);
        *(char *)(v0 + 6) = 1;
        /* fall through */
    case 1:
        tmp2 = ((V28_1_if *)(v0 + 3076))->m(0);
        *(float *)(v0 + 2276) = tmp2;
        if (*(float *)(v0 + 2276) <= 260.0f) {
            if (*(unsigned char *)(v0 + 2283) > 0) {
                tmp4 = func_0041D6B0((v0 + 2292), *(float *)(v0 + 16));
                if ((tmp4 & 255) == 1) {
                    tmp6 = ((V134_1_ii *)*(char **)(v0 + 2320))->m(1);
                    v4 = func_004F5D20((v0 + 2480), *(int *)(v0 + 2544), v0, tmp6, 0, 0);
                    if (v4 != 0) {
                        ((V130_0_v *)v4)->m();
                    }
                    *(int *)(v0 + 2292) = 0x40c00000;
                }
            }
        }
        v2 = func_0024E800((v0 + 11040));
        tmp8 = (v2 & 255);
        v3 = (int)v0;
        if (tmp8 == 1) {
            v2 = func_00376B40(v3, 3);
        }
        break;
    }
    return v2;
}
}

extern "C" {
void func_004B0740(int p0) {
    int func_0024E800(...);
    int func_00376B40(...);
    void func_00376B80(char *, int);
    int func_00376E40(void);
    char *func_004B9710(char *, int, char *, int, int, int);
    int v1;
    int v4;
    int v3;
    char *v2;
    char *v0;
    int tmp2;
    int tmp4;
    v0 = (char *)p0;
    v3 = func_00376E40();
    *(int *)(v0 + 2300) = (0x400000 | *(int *)(v0 + 2300));
    v1 = *(unsigned char *)(v0 + 6);
    switch (v1) {
    case 0:
        tmp2 = ((V134_1_ii *)v0)->m(5);
        v2 = func_004B9710((v0 + 2480), *(int *)(v0 + 2544), v0, tmp2, 2, 0);
        if (v2 != 0) {
            ((V130_0_v *)v2)->m();
        }
        func_00376B80(v0, -1);
        *(char *)(v0 + 6) = 1;
        /* fall through */
    case 1:
        v3 = func_0024E800((v0 + 11040));
        tmp4 = (v3 & 255);
        v4 = (int)v0;
        if (tmp4 == 1) {
            v3 = func_00376B40(v4, 19);
        }
        break;
    }
}
}

class V14_7_iiiiiiiv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(int, int, int, int, int, int, int);
};

extern "C" {
extern char * D_005BC1A8;
}

extern "C" {
extern char D_01CAFF0C[];
}

extern "C" {
int func_0041E190(char *, char *, int, float);
}

extern "C" {
void func_0046EC00(int, int, int, char *, int, int, int, int, float, float);
}

extern "C" {
void func_004B0E20(char *p0) {
    extern char D_00562AA0[];
    int func_0034B940(int, char *);
    int func_00376B40(char *, int);
    void func_00376B80(char *, int);
    int func_0041D6B0(char *, float);
    char stk[0x10] __attribute__((aligned(16)));
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    char *v6;
    int v7;
    int tmp9;
    short tmp10;
    v6 = p0;
    *(int *)(p0 + 2300) = (*(int *)(p0 + 2300) | 0x40000000);
    *(int *)(p0 + 2300) = (*(int *)(p0 + 2300) | 0x2000000);
    v0 = *(int *)(p0 + 2300);
    *(int *)(p0 + 2300) = (v0 | 0x4000000);
    v1 = *(int *)(p0 + 2300);
    *(int *)(p0 + 2300) = (v1 | 0x20000000);
    v2 = *(int *)(p0 + 2300);
    *(int *)(p0 + 2300) = (v2 | 0x10000000);
    v3 = *(int *)(p0 + 2300);
    *(int *)(p0 + 2300) = (v3 | 0x8000000);
    v4 = *(int *)(p0 + 2300);
    *(int *)(p0 + 2300) = (v4 | 0x800000);
    *(int *)(p0 + 2300) = (*(int *)(p0 + 2300) | 0x80000000);
    v5 = *(unsigned char *)(p0 + 6);
    switch (v5) {
    case 0:
        ((V14_7_iiiiiiiv *)D_005BC1A8)->m(0x80ffffff, 60, v4, v3, v2, v1, v0);
        func_00376B80(v6, -1);
        *(int *)(v6 + 2396) = 0;
        *(int *)(v6 + 96) = 0;
        *(int *)(v6 + 100) = 0;
        *(int *)(v6 + 104) = 0x40000000;
        *(int *)(v6 + 108) = 0x3f800000;
        tmp9 = func_0034B940((*(int *)(*(char **)D_01CAFF0C + 12) + 80), D_00562AA0);
        *(short *)(v6 + 144) = tmp9;
        tmp10 = *(short *)(v6 + 144);
        *(float *)(v6 + 132) = (6.283185005187988f * ((float)*(short *)(v6 + 144) / 65536.0f));
        *(int *)((stk + -32) + 40) = 0xc4fa0000;
        *(int *)((stk + -32) + 44) = 0x3f800000;
        *(int *)((stk + -32) + 32) = 0;
        *(int *)((stk + -32) + 36) = 0;
        v7 = func_0041E190(((stk + -32) + 32), ((stk + -32) + 32), tmp10, *(float *)(v6 + 132));
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"((v6 + 80)), "r"(D_00562AA0), "r"(((stk + -32) + 32)) : "memory");
        *(float *)(v6 + 84) = (*(float *)(v6 + 84) + 470.0f);
        *(char *)(v6 + 6) = 1;
        break;
    case 1:
        func_0046EC00((*(int *)(*(char **)D_01CAFF0C + 12) + 15584), 1, (*(int *)(*(char **)D_01CAFF0C + 12) + 80), v6, 0, v2, v1, v0, 60.0f, 90.0f);
        *(int *)(v6 + 2296) = 0x42700000;
        *(char *)(v6 + 6) = 2;
        /* fall through */
    case 2:
        v7 = func_0041D6B0((v6 + 2296), *(float *)(v6 + 16));
        if ((v7 & 255) == 1) {
            *(int *)(v6 + 2300) = (*(int *)(v6 + 2300) & -129);
            *(int *)(v6 + 2300) = (*(int *)(v6 + 2300) | 512);
            *(int *)(v6 + 2300) = (*(int *)(v6 + 2300) | 256);
            v7 = func_00376B40(v6, 9);
        }
        break;
    }
}
}
