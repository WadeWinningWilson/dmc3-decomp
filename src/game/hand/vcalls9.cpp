/* Hand-matched C++ functions whose prototypes or classes conflict with vcalls-vcalls8. */

class B42F;
class V42F {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void m20(int, char *, B42F *);
};
class B42F {
public:
    int x;
};

class A42F {
public:
    char pad[0x40];
};

class P42F : public A42F, public B42F {
public:
    int y;
};

extern "C" int func_00430C20(char *, char *, V42F *, char *, unsigned char, unsigned char);

extern "C" int func_0042FCA0(P42F *q, char *e, V42F *o) {
    char *p = (char *)q;
    int r;
    float a;
    float b;
    float c;
    float t;
    char *m;
    char *x;
    r = 3;
    if (*(signed char *)(p + 0x46) != 0) return r;
    if (*(unsigned char *)(e + 0x3D) == 6) return r;
    switch (*(unsigned char *)(p + 0x3C74)) {
    case 0:
        m = *(char **)(p + 0x283C);
        a = *(float *)(m + 0x1A4);
        b = *(float *)(m + 0x1B0);
        c = *(float *)(m + 0x1BC);
        break;
    case 1:
        m = *(char **)(p + 0x283C);
        a = *(float *)(m + 0x1A8);
        b = *(float *)(m + 0x1B4);
        c = *(float *)(m + 0x1C0);
        break;
    case 2:
        m = *(char **)(p + 0x283C);
        a = *(float *)(m + 0x1AC);
        b = *(float *)(m + 0x1B8);
        c = *(float *)(m + 0x1C4);
        break;
    }
    if (*(unsigned char *)(p + 0x2848) == 0x11 && (*(unsigned char *)(p + 0x2998) == 0xBE || *(unsigned char *)(p + 0x2998) == 0xC2)) {
        t = *(float *)(p + 0x3C90);
        if (t <= c) r = 2;
        if (t <= b) r = 1;
        if (t <= a) r = 0;
        switch ((unsigned char)r) {
        case 0:
            if (*(int *)(p + 0x2898) & 2) o->m20(3, e, q);
            else o->m20(2, e, q);
            break;
        case 1:
            if (!(unsigned char)func_00430C20(p, e, o, x, 4, 0)) return 3;
            if (*(int *)(p + 0x2898) & 2) o->m20(1, e, q);
            else o->m20(0, e, q);
            break;
        case 2:
            if (!(unsigned char)func_00430C20(p, e, o, x, 0, 0)) return 3;
            if (*(int *)(p + 0x2898) & 2) o->m20(1, e, q);
            else o->m20(0, e, q);
            break;
        case 3:
            break;
        }
    }
    return r;
}

class V10492 {
public:
    virtual void d0();
    virtual void d1();
    virtual void m10(float);
    virtual void m14(float);
};
class VC8492 {
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

class A492 {
public:
    char pad[0x40];
};

class B492 {
public:
    int x;
};

class P492 : public A492, public B492 {
public:
    int y;
};

extern "C" char D_01CAFF0C[];
extern "C" char D_005BE098[8];
extern "C" void func_00376780(P492 *);
extern "C" void func_004930F0(P492 *);
extern "C" void func_00492E60(P492 *);
extern "C" void func_00493290(P492 *, int, char *, char *);
extern "C" void func_0041D840(B492 *, char *, float);
extern "C" void func_0028C740(char *);
extern "C" void func_0028C910(char *);
extern "C" void func_0028C3A0(char *, int, int, int);
extern "C" void func_0028C5C0(char *, float, unsigned char);
extern "C" void func_00195E20(char *, char *);

static inline int gt492(float x) { return x > 0.0f; }
static inline unsigned char fl492(char *p, unsigned int m) { return (*(unsigned int *)(*(char **)(p + 0x90C) + 0x8FC) & m) != 0; }

extern "C" void func_004921A0(P492 *q) {
    char *p = (char *)q;
    unsigned short h;
    char *e;
    unsigned int i;
    unsigned short t;
    char *o;
    char *r;
    char *g;
    unsigned char u;
    char *w;
    func_00376780(q);
    func_004930F0(q);
    func_00492E60(q);
    ((V10492 *)(p + 0x2A90))->m10(*(float *)(p + 0x10));
    ((V10492 *)(p + 0x3850))->m14(*(float *)(p + 0x10));
    func_00493290(q, 4, p + 0x3C80, p + 0x3C88);
    func_00493290(q, 6, p + 0x3C82, p + 0x3C8A);
    func_00493290(q, 8, p + 0x3C84, p + 0x3C8C);
    func_00493290(q, 10, p + 0x3C86, p + 0x3C8E);
    if (fl492(p, 0x10) == 1) {
        *(unsigned char *)(p + 0x2F3C) = 0;
        func_0041D840(q, p + 0x860, 1.0f);
        *(short *)(p + 0x96E) = *(short *)(p + 0x90);
        ((VC8492 *)(p + 0xC00))->mC8(p + 0x8A0);
    } else {
        *(unsigned char *)(p + 0x2F3C) = 1;
        ((VC8492 *)(p + 0xC00))->mC8(*(char **)(p + 0x90C) + 0x8A0);
    }
    if (fl492(p, 0x2000000) == 1) func_0028C740(p + 0x3580);
    if (fl492(p, 0x1000000) == 1) {
        func_0028C910(p + 0x3580);
        func_0028C3A0(p + 0x3580, 0, -1, *(int *)(*(char **)(p + 0xA60) + 0x104));
        if ((o = *(char **)(p + 0x35FC)) != 0) {
            *(unsigned char *)(o + 2) = 1;
            *(unsigned char *)(o + 4) = 1;
        }
        if ((o = *(char **)(p + 0x35FC)) != 0) {
            *(unsigned char *)(o + 0xC4) = 3;
            *(unsigned char *)(o + 0xC5) = u;
            *(unsigned char *)(o + 0xC6) = 8;
            *(unsigned char *)(o + 0xC7) = 0;
        }
    }
    if (!fl492(p, 0x80000000) && !fl492(p, 0x40000000)) {
        func_0028C5C0(p + 0x3580, *(float *)(p + 0x10), gt492(*(float *)(p + 0x908)));
        func_0028C5C0(p + 0x3360, *(float *)(p + 0x10), gt492(*(float *)(p + 0x908)));
    }
    g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    e = *(char **)(p + 0x35FC);
    t = *(unsigned short *)(*(char **)(p + 0x90C) + 0x970) & 0xFF00;
    *(unsigned short *)(*(char **)(p + 0x90C) + 0x970) &= 0xFF;
    *(unsigned short *)(*(char **)(p + 0x90C) + 0x970) |= (unsigned short)(t << 1);
    if (e != 0 && (*(int *)(e + 8) & 0x1000) && !(*(float *)(g + 0x54) <= 400.0f + *(float *)(p + 0x54))) {
        *(unsigned short *)(*(char **)(p + 0x90C) + 0x970) |= 0x100;
    }
    if (!fl492(p, 0x80000000)) {
        func_00195E20(D_005BE098, p);
        for (i = 0, r = p; i < 8; i++, r += 4) {
            if ((o = *(char **)(r + 0x914)) != 0) *(unsigned char *)(o + 0x3B) = 0;
        }
        if (*(char **)(p + 0x938) != 0) *(unsigned char *)(*(char **)(p + 0x938) + 0x3B) = 0;
        if (*(char **)(p + 0x934) != 0) *(unsigned char *)(*(char **)(p + 0x934) + 0x3B) = 0;
        if (*(char **)(p + 0x940) != 0) *(unsigned char *)(*(char **)(p + 0x940) + 0x3B) = 0;
    } else {
        for (i = 0, w = p; i < 8; i++, w += 4) {
            if ((o = *(char **)(w + 0x914)) != 0) *(unsigned char *)(o + 0x3B) = 1;
        }
        if (*(char **)(p + 0x938) != 0) *(unsigned char *)(*(char **)(p + 0x938) + 0x3B) = 1;
        if (*(char **)(p + 0x934) != 0) *(unsigned char *)(*(char **)(p + 0x934) + 0x3B) = 1;
        if (*(char **)(p + 0x940) != 0) *(unsigned char *)(*(char **)(p + 0x940) + 0x3B) = 1;
    }
}

class VO49A;
class A49A {
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
    virtual void d93();
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
    virtual void d122();
    virtual void d123();
    virtual void d124();
    virtual void d125();
    virtual void d126();
    virtual void d127();
    virtual void d128();
    virtual void d129();
    virtual void d130();
    virtual void d131();
    virtual void d132();
    virtual void d133();
    virtual void d134();
    virtual void d135();
    virtual void d136();
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual void d184();
    virtual void d185();
    virtual void d186();
    virtual void d187();
    virtual void d188();
    virtual void d189();
    virtual void d190();
    virtual void d191();
    virtual void d192();
    virtual void d193();
    virtual void d194();
    virtual void d195();
    virtual void d196();
    virtual void d197();
    virtual void d198();
    virtual void d199();
    virtual void d200();
    virtual void d201();
    virtual void d202();
    virtual void d203();
    virtual void d204();
    virtual void d205();
    virtual void d206();
    virtual void d207();
    virtual void d208();
    virtual void d209();
    virtual void d210();
    virtual void d211();
    virtual void m358(char *, VO49A *);
    char pad[0x3C];
};

class B49A {
public:
    int x;
};

class VO49A {
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
    virtual void m34(char *, B49A *);
    virtual void m38(char *, B49A *);
};

class P49A : public A49A, public B49A {
public:
    int y;
};

class V1D049A {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual unsigned char m1C();
};

class V3A9449A {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int, char *, char *, VO49A *, char *);
};

class V97C49A {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(char *, VO49A *, int);
};

extern "C" char D_01CAFF0C[];
extern "C" void func_0034BA60(int, char *, int, int, int);

static inline int fl49A(void) { return (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x2898) & 2) != 0; }

extern "C" void func_00492A10(P49A *q, char *e, VO49A *o, char *pos) {
    char *p = (char *)q;
    float a;
    float b;
    unsigned char f;
    char *m;
    f = 0;
    a = *(float *)(*(char **)(p + 0x90C) + 0x99C);
    b = *(float *)(*(char **)(p + 0x90C) + 0x9A0);
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    if (*(float *)(*(char **)(p + 0x90C) + 0x998) <= 0.0f) return;
    *(float *)(p + 0x3B00) = 5.0f;
    *(unsigned char *)(p + 0x3ABC) = 1;
    *(float *)(p + 0x964) = 60.0f;
    switch (*(signed char *)(e + 2)) {
    case 0:
        switch (((V1D049A *)(p + 0x1D0))->m1C()) {
        case 0:
            func_0034BA60(*(int *)(e + 0x34) + 10, pos, *(signed char *)(p + 0x46), 0, 1);
            ((V3A9449A *)(p + 0x3A94))->m18(0, pos, e, o, *(char **)(p + 0x90C) + 0x8A0);
            if (*(char **)(p + 0x90C) != 0) ((V97C49A *)(*(char **)(p + 0x90C) + 0x97C))->m14(e, o, *(int *)(p + 0x11C));
            m = *(char **)(p + 0x90C);
            if (*(unsigned short *)(m + 0x970) != 0) f = 1;
            else if (*(float *)(m + 0x68) < 5.0f) f = 1;
            else if (!fl49A()) f = 1;
            if (f == 1) o->m38(e, q);
            else o->m34(e, q);
            break;
        case 2:
            func_0034BA60(*(int *)(e + 0x34) + 10, pos, *(signed char *)(p + 0x46), 0, 1);
            ((V3A9449A *)(p + 0x3A94))->m18(2, pos, e, o, *(char **)(p + 0x90C) + 0x8A0);
            q->m358(e, o);
            break;
        }
        break;
    case 1:
        switch (((V1D049A *)(p + 0x1D0))->m1C()) {
        case 0:
            func_0034BA60(*(int *)(e + 0x34) + 10, pos, *(signed char *)(p + 0x46), 0, 1);
            ((V3A9449A *)(p + 0x3A94))->m18(0, pos, e, o, *(char **)(p + 0x90C) + 0x8A0);
            if (*(char **)(p + 0x90C) != 0) ((V97C49A *)(*(char **)(p + 0x90C) + 0x97C))->m14(e, o, *(int *)(p + 0x11C));
            o->m38(e, q);
            break;
        case 2:
            func_0034BA60(*(int *)(e + 0x34) + 10, pos, *(signed char *)(p + 0x46), 0, 1);
            ((V3A9449A *)(p + 0x3A94))->m18(2, pos, e, o, *(char **)(p + 0x90C) + 0x8A0);
            q->m358(e, o);
            break;
        }
        break;
    }
    *(float *)(*(char **)(p + 0x90C) + 0x99C) = a;
    *(float *)(*(char **)(p + 0x90C) + 0x9A0) = b;
}

class P39A {
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
    virtual void d93();
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
    virtual unsigned char m1BC();
};

typedef struct { short s[5]; } S39A;
extern "C" S39A D_00563E60;
extern "C" unsigned char D_01CAFF3C[];
extern "C" void func_0024DA80(char *, int, int);
extern "C" int func_0024E800(char *);
extern "C" void func_003A0CD0(char *, int);
extern "C" void func_003A02B0(char *, int);
extern "C" void func_00207480(int, int, char *, int);
extern "C" void func_003A0F20(char *);
extern "C" void func_003A1180(char *);

static inline unsigned char bo39A(char *p) {
    unsigned char r;
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) r = 1;
    else r = 0;
    return r;
}

static inline void an39A(char *p, int k) {
    *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
    *(short *)(p + 0x2DDC) = k;
    func_0024DA80(p + 0x29D0, 0, k);
    func_0024DA80(p + 0x2AA0, 0, k);
}

extern "C" void func_0039A570(char *p, int f) {
    S39A t;
    float v;
    *(unsigned char *)(p + 0x2DE8) = 0;
    *(unsigned short *)(p + 0x2DD8) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        an39A(p, 0x4A);
        *(unsigned char *)(p + 5) = 10;
    case 10:
        if (f != 0 || bo39A(p) == 1) {
            an39A(p, 0x4B);
            *(unsigned char *)(p + 5) = 20;
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 45.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 0.0f;
            *(float *)(p + 0x70) = 0.0f;
            *(float *)(p + 0x74) = -2.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f;
            *(float *)(p + 0x2E04) = 0.0f;
            *(float *)(p + 0x2E08) = 0.0f;
            *(float *)(p + 0x2E0C) = 0.0f;
            *(unsigned char *)(p + 0x2DE0) = 0;
            *(unsigned char *)(p + 0x2DE3) = 0;
            *(unsigned char *)(p + 0x2DE4) = 0;
        } else {
            *(unsigned char *)(p + 0x2DE8) = 1;
        }
        func_003A0CD0(p, 0x800);
        break;
    case 20:
        if (bo39A(p) == 1) {
            an39A(p, 0x4C);
            *(unsigned char *)(p + 5) = 21;
        }
        break;
    case 21:
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(unsigned char *)(p + 5) = 30;
            *(float *)(p + 0x70) = 0.0f;
            *(float *)(p + 0x74) = -3.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f;
            *(float *)(p + 0x2E04) = -30.0f;
            *(float *)(p + 0x2E08) = 0.0f;
            *(float *)(p + 0x2E0C) = 0.0f;
        }
        t = D_00563E60;
        func_003A0CD0(p, t.s[D_01CAFF3C[0]] + 0x100);
        break;
    case 30:
        if ((unsigned char)((P39A *)p)->m1BC() == 1) {
            an39A(p, 0x4D);
            *(unsigned char *)(p + 5) = 40;
            func_00207480(3, 0x2E5, p + 0x450, 0x10);
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 0.0f;
            *(float *)(p + 0x70) = 0.0f;
            *(float *)(p + 0x74) = 0.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f;
            *(float *)(p + 0x2E04) = 0.0f;
            *(float *)(p + 0x2E08) = 0.0f;
            *(float *)(p + 0x2E0C) = 0.0f;
            *(unsigned char *)(p + 0x2DE3) = 1;
            *(unsigned char *)(p + 0x2DE4) = 1;
        }
        break;
    case 40:
        *(unsigned char *)(p + 5) = 41;
        break;
    case 41:
        *(unsigned char *)(p + 0x2DE8) = 1;
        if (bo39A(p) == 1) func_003A02B0(p, 2);
        break;
    }
    if (*(unsigned char *)(p + 5) >= 20 && *(unsigned char *)(p + 5) < 31) {
        if (!(*(unsigned char *)(p + 0x2DF5) & 1)) {
            v = 10.0f + (*(float *)(p + 0x164) - 350.0f) / 10.0f;
            if (v < 10.0f) v = 10.0f;
            else if (!(v <= 30.0f)) v = 30.0f;
            *(float *)(p + 0x68) = v;
            *(float *)(p + 0x78) = v;
            *(float *)(p + 0x2E08) = v;
        } else {
            *(float *)(p + 0x68) = 10.0f;
            *(float *)(p + 0x78) = 10.0f;
            *(float *)(p + 0x2E08) = 10.0f;
        }
        func_003A0F20(p);
        func_003A1180(p);
    }
}

class W490 {
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
    virtual void m84(unsigned char, int);
    virtual void d32();
    virtual void m8C();
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

extern "C" char D_00666750[];
extern "C" int D_005867E0[];
extern "C" void func_001AF080(char *, int);
extern "C" int func_001AFB90(char *, int, int, int);
extern "C" float D_0058AD80[];
extern "C" char D_00587EA0[];
extern "C" void func_001AD140(int);
extern "C" int func_004CD2B0(char *, int);
extern "C" int func_004CD3C0(char *, int);
extern "C" int func_004D1B90(char *, int);

static inline int ok490(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

static inline char *en490(char *t, int i) {
    char *r;
    if (*(unsigned int *)(t + 4) < i + 1) {
        r = 0;
    } else if (*(int *)(t + i * 4 + 8) == 0) {
        r = 0;
    } else {
        r = t + *(int *)(t + i * 4 + 8);
    }
    return r;
}

static inline char *gc490(char *h, int i) {
    char *r;
    if (**(unsigned short **)(h + 8) == 0) {
        r = en490(*(char **)(h + 0xC), i);
    } else {
        r = *(char **)(h + 0xC);
    }
    return r;
}

#define WP490 ((W490 *)(p + *(int *)(d + 4) * 0x600 + 0x3680))

extern "C" int func_004908E0(char *p, char *d) {
    char *h;
    char *a;
    char *b;
    int k;
    switch (*(int *)d) {
    case 0:
        if (*(unsigned char *)(d + 0xA) == 0) break;
        if (*(signed char *)(p + 0x431C) == *(signed char *)(d + 8)) {
            *(unsigned char *)(d + 0xA) = 0;
            break;
        }
        *(signed char *)(d + 8) = *(signed char *)(p + 0x431C);
        if (*(unsigned char *)(d + 9) == 1) *(int *)d = 1;
        else *(int *)d = 6;
        break;
    case 1:
        if (*(unsigned char *)(p + 0x431B) != 3) break;
        *(unsigned char *)(d + 0xB) = 0x40;
        WP490->m84(*(unsigned char *)(d + 0xB), 1);
        *(int *)d = 2;
        break;
    case 2:
        *(unsigned char *)(d + 0xB) -= 2;
        if (0 < *(unsigned char *)(d + 0xB)) {
            WP490->m84(*(unsigned char *)(d + 0xB), 1);
        } else {
            WP490->m8C();
            *(unsigned char *)(d + 9) = 0;
            *(int *)d = 5;
        }
        break;
    case 3:
    case 4:
        (*(int *)d)++;
        break;
    case 5:
        if (*(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C) != 0) {
            func_001AF080(D_00666750, *(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C));
            *(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C) = 0;
        }
        WP490->mD0();
        *(unsigned char *)(d + 0xA) = 0;
        *(int *)d = 0;
        break;
    case 6:
        if (*(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C) != 0) {
            func_001AF080(D_00666750, *(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C));
            *(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C) = 0;
        }
        *(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C) = func_001AFB90(D_00666750, D_005867E0[*(signed char *)(d + 8)], 0, 8);
        *(int *)d = 7;
    case 7:
        if ((unsigned char)ok490(*(unsigned char **)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C)) != 1) break;
        h = *(char **)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C);
        a = gc490(h, 1);
        b = gc490(h, 0);
        WP490->m24(1);
        if (!(unsigned char)WP490->m2C(b, a)) return 0;
        WP490->m3C(3);
        *(unsigned char *)(d + 9) = 1;
        if (*(unsigned char *)(p + 0x431B) == 0) {
            *(int *)d = 9;
            break;
        }
        *(unsigned char *)(p + 0x431B) = 3;
        *(unsigned char *)(d + 0xB) = 0;
        WP490->m84(*(unsigned char *)(d + 0xB), 1);
        *(int *)d = 8;
        break;
    case 8:
        *(unsigned char *)(d + 0xB) += 2;
        if (*(unsigned char *)(d + 0xB) < 0x40) {
            WP490->m84(*(unsigned char *)(d + 0xB), 1);
        } else {
            WP490->m8C();
            *(int *)d = 9;
        }
        break;
    case 9:
        *(unsigned char *)(d + 0xA) = 0;
        *(unsigned char *)(p + 0x431B) = 1;
        *(int *)d = 0;
        break;
    }
    return 1;
}

class Obj4CB {
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
    virtual void d93();
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
    virtual void m1F0(int, char *);
};

extern "C" void func_004CBEF0(char *p, int x) {
    unsigned char ok;
    unsigned char f = 0;
    if (*(int *)(p + 0xB2DC) != 0) func_001AD140(*(int *)(p + 0xB2DC));
    if (*(int *)(p + 0xB2E0) != 0) func_001AD140(*(int *)(p + 0xB2E0));
    if (*(int *)(p + 0xB2F4) != 0) func_001AD140(*(int *)(p + 0xB2F4));
    if (*(int *)(p + 0xB2F8) != 0) func_001AD140(*(int *)(p + 0xB2F8));
    if (*(int *)(p + 0xB2FC) != 0) func_001AD140(*(int *)(p + 0xB2FC));
    if (*(int *)(p + 0xB304) != 0) func_001AD140(*(int *)(p + 0xB304));
    ok = 1;
    if ((unsigned int)(*(unsigned char *)(p + 0xB2C9) - 2) > 1) {
        ok = 0;
    }
    if (ok == 0 && *(unsigned char *)(p + 0xB2CC) == 0 && (unsigned char)func_004CD2B0(p, x) == 1) {
        *(unsigned char *)(p + 0xB2CC) = 1;
    }
    ok = 1;
    if ((unsigned int)(*(unsigned char *)(p + 0xB2C9) - 2) > 1) {
        ok = 0;
    }
    if (ok == 1) {
        if (*(unsigned char *)(p + 0xB2D3) == 0) {
            if ((unsigned char)func_004CD3C0(p, *(unsigned char *)(p + 0xB155)) == 1) {
                *(unsigned char *)(p + 0xB2CC) = 1;
            }
        } else if (*(float *)(p + 0xB2A4) <= 0.0f) {
            *(unsigned char *)(p + 0xB2CC) = 1;
            *(unsigned char *)(p + 0xB2D3) = 0;
            f = 1;
            if (*(unsigned char *)(p + 0xB2D9) == 1) {
                *(float *)(p + 0xB2A8) = D_0058AD80[*(int *)(p + 0xB2C0)];
            }
        }
    }
    *(signed char *)(p + 0xB155) = *(signed char *)(p + 0xB154);
    switch (x) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 0x12:
    case 0x13:
        switch ((unsigned char)func_004D1B90(p, 1)) {
        case 0:
            *(short *)(p + 0x90) = *(short *)(p + 0xB152);
            break;
        case 1:
            *(unsigned char *)(p + 0xB154) = 0x32;
            *(unsigned char *)(p + 0xB158) = 0;
            break;
        case 2:
            switch (x) {
            case 1:
            case 3:
                if (*(unsigned char *)(p + 0xB154) == 0x37) {
                    *(unsigned char *)(p + 0xB154) = 0x36;
                    *(unsigned char *)(p + 0xB158) = 0;
                } else {
                    *(unsigned char *)(p + 0xB154) = 0x37;
                    *(unsigned char *)(p + 0xB158) = 0;
                }
                break;
            case 0:
            case 2:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 0x12:
            case 0x13:
                *(unsigned char *)(p + 0xB154) = 0x36;
                *(unsigned char *)(p + 0xB158) = 0;
                break;
            case 0xD:
            case 0xE:
            case 0xF:
            case 0x10:
            case 0x11:
                break;
            }
            break;
        }
        break;
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
        break;
    case 0x14:
        *(unsigned char *)(p + 0xB154) = 0x18;
        *(unsigned char *)(p + 0xB158) = 0;
        ((Obj4CB *)p)->m1F0(*(int *)(p + 0x148), D_00587EA0 + *(unsigned char *)(p + 0xB2C8) * 0x54);
        break;
    case 0x15:
        *(unsigned char *)(p + 0xB154) = 0x18;
        *(unsigned char *)(p + 0xB158) = 0;
        ((Obj4CB *)p)->m1F0(*(int *)(p + 0x148), D_00587EA0 + *(unsigned char *)(p + 0xB2C8) * 0x54);
        break;
    default:
        *(unsigned char *)(p + 0xB154) = x;
        *(unsigned char *)(p + 0xB158) = 0;
        if (f == 1 && (unsigned char)func_004D1B90(p, 0)) {
            *(unsigned char *)(p + 0xB154) = 0x43;
            *(unsigned char *)(p + 0xB158) = 0;
        }
        break;
    }
}
