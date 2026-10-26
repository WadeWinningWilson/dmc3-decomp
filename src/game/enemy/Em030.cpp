class Sub130x {
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
    virtual unsigned char m84();
};

extern "C" {
void func_002D2800(char *p) {
    extern void func_0031E570(char *);
    extern float D_00565278[];
    if (((Sub130x *)(p + 0x130))->m84() == 0) {
        *(float *)(p + 0x168) = *(float *)(p + 0x168) + *(float *)(p + 0x10) * D_00565278[*(unsigned char *)(p + 0x38D0)];
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0031E570(p + 0x1D0);
        break;
    case 1:
        break;
    }
}
}

extern "C" void func_00105760(float *, float *, float);

class ObjPosC4 {
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
    virtual float *mC4();
};

#define QCOPYA(d,s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define SETPOSA(m,s) __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(s) : "memory")

#define GETPOSA(d,m) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(m) : "memory")

#define VADDIPA(d,s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_002D6C60(char *p, int a) {
    float m2[16];
    float m[16];
    float *src = ((ObjPosC4 *)(p + 0x780))->mC4();
    QCOPYA(p + 0x60, src);
    SETPOSA(m2, p + 0x60);
    func_00105760(m, m2, 6.283185f * ((float)a / 65536.0f));
    GETPOSA(p + 0x60, m);
    VADDIPA(p + 0x50, p + 0x60);
}

class V10 {
public:
    virtual void d0();
    virtual void d1();
    virtual unsigned char m10();
};

class VE8 {
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
    virtual void mE8(int, int);
};

extern "C" void func_002D7650(char *p, unsigned char k, int a, int b) {
    bool ok;
    bool c;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    switch ((*(V10 **)(p + 0x13C))->m10()) {
    case 0:
        switch (k) {
        case 0:
        case 1:
        case 4:
            break;
        case 2:
        case 3:
            ok = true;
            if ((unsigned int)(*(unsigned char *)(p + 0x37DA) - 2) > 2) {
                c = *(unsigned char *)(p + 0x37DA) == 0x17;
                if (c) c = *(unsigned char *)(p + 5) == 1;
                if (!c) ok = false;
            }
            if (ok == true) ((VE8 *)p)->mE8(a, b);
            break;
        }
        break;
    case 1:
        break;
    }
}

extern "C" char D_00564E90[];

class V1F0 {
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
    virtual void m1F0(int, int);
};

extern "C" void func_002D2100(char *p, unsigned int k) {
    switch (k) {
    case 20:
        ((V1F0 *)p)->m1F0(*(int *)(p + 0x148), (int)D_00564E90);
        *(unsigned char *)(p + 0x37DB) = 9;
        break;
    case 21:
        ((V1F0 *)p)->m1F0(*(int *)(p + 0x148), (int)D_00564E90);
        *(unsigned char *)(p + 0x37DB) = 9;
        break;
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 22:
        break;
    }
}

extern "C" int func_0024E780(char *, int, int);

extern "C" void func_0024E7B0(char *, int, int);

extern "C" void func_002D26A0(char *, int, int);

extern "C" void func_0024DA80(char *, int, int);

extern "C" int func_002D65E0(char *);

extern "C" void func_002D6D30(char *);

extern "C" {
void func_002D5A70(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_0024E800(char *);
    extern char D_005BCD60[];
    extern void func_0031E570(char *);
    extern void func_002D2270(char *, int);
    char *e;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0031E570(p + 0x1D0);
        *(unsigned char *)(p + 0x1E2) = 3;
        *(unsigned char *)(p + 0x1E3) = 2;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_0031E570(p + 0x1D0);
            func_002D26A0(p, 3, 0xA);
            func_0024DA80(p + 0x31E0, 0, 3);
            *(unsigned char *)(p + 0x3900) = 1;
        }
        break;
    case 2:
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 0) == 1) {
            func_0024E7B0(p + 0x2F70, 0, 0);
            func_00207480(3, 0x144, p + 0x1EF0, 0x10);
        }
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 0) == 2) {
            func_0024E7B0(p + 0x2F70, 0, 0);
            e = *(char **)(p + 0x3914);
            if (e != 0) {
                e[0x3B] = 0;
            }
        }
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) {
            *(int *)(p + 0x38D4) = 0;
            *(int *)(p + 0x38D8) = 0;
            if (func_002D65E0(p) != 0) {
                func_002D2270(p, 0x17);
            } else {
                func_002D2270(p, ((signed char *)D_005BCD60)[*(unsigned char *)(p + 0x38D0)]);
            }
            func_002D6D30(p);
        }
        break;
    }
}
}

struct M207 { float m[16]; };

extern "C" float D_005BE1CC;

extern "C" float D_005BCDB8;

extern "C" short D_005BCDB0[4];

extern "C" char D_00565700[];

extern "C" int D_01CAFF14[];

extern "C" void func_00277DE0(char *, char *, int, int);

extern "C" void func_00277E70(char *);

extern "C" void func_00277ED0(char *);

extern "C" void func_00278060(char *, int);

extern "C" {
void func_002D4360(char *p) {
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    extern int func_0024E800(char *);
    extern void func_0034B8C0(char *, char *, int);
    extern signed char D_005BCD60[];
    extern void func_0031E570(char *);
    extern short func_002D6DB0(char *);
    extern void func_002D2270(char *, int);
    extern void func_002D6C50(char *);
    char *o;
    float a;
    float t;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
        break;
    case 1:
        *(float *)(p + 0x38DC) = *(float *)(p + 0x38DC) + *(float *)(p + 0x10);
        a = D_005BE1CC;
        t = *(float *)(p + 0x38DC);
        if (!(t < a) && t <= a + D_005BCDB8) {
            *(short *)(p + 0x37D8) = func_002D6DB0(p);
            *(short *)(p + 0x37D8) = *(short *)(p + 0x37D8) + 0x5B0;
            func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)(*(float *)(p + 0x10) * (float)D_005BCDB0[*(unsigned char *)(p + 0x38D0)]));
        }
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(int *)(*(char **)(p + 0x6C8) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x6C8) + 0x104);
            o[0x9A] = 3;
        }
    }
    func_002D6C50(p);
}
}

extern "C" int D_005BE09C;

extern "C" float D_005BE1E0;

extern "C" float D_005BCDFC;

extern "C" short D_005BCE00;

extern "C" char D_005BE1A8[4];

extern "C" int func_0034B6B0(char *, char *, char *, float);

extern "C" void func_001ACC30(int, int, int, int, int);

extern "C" void func_0036DF10(char *, int, int, int, int, int);

extern "C" {
void func_002D54E0(char *p) {
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    extern void func_0034B8C0(char *, char *, int);
    extern void func_0031E570(char *);
    extern short func_002D6DB0(char *);
    extern void func_002D2270(char *, int);
    extern void func_002D6C50(char *);
    float t;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
    case 1:
        *(float *)(p + 0x38DC) = *(float *)(p + 0x38DC) + *(float *)(p + 0x10);
        t = *(float *)(p + 0x38DC);
        if (!(t < D_005BE1E0) && t < D_005BCDFC) {
            *(short *)(p + 0x37D8) = func_002D6DB0(p);
            func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)((float)D_005BCE00 * *(float *)(p + 0x10)));
        }
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 1) p[0x1E1] = 1;
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 2) {
            if ((unsigned char)func_0034B6B0(p + 0x50, p + 0x32EC, p, 0.0f) == 1) {
                func_002D2270(p, 0x14);
                func_001ACC30(D_005BE09C, 2, 0x32, 0x14, 0);
                func_0036DF10(D_005BE1A8, 0, 1, 0x78, 0x1E, 0);
                func_00207480(3, 0x319, (M207 *)(p + 0x1EF0), 0x10);
            }
        }
        break;
    }
    func_002D6C50(p);
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00207480(3, 0x319, *(M207 **)(*(char **)(p + 0x674) + 0x104), 0x10);
    }
}
}

extern "C" {
void func_002D5300(char *p) {
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    extern int func_0024E800(char *);
    extern signed char D_005BCD60[];
    extern void func_0031E570(char *);
    extern void func_002D2270(char *, int);
    char *o;
    float t;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 40.0f;
    case 1:
        *(float *)(p + 0x38DC) -= *(float *)(p + 0x10);
        t = *(float *)(p + 0x38DC);
        if (t < 0.0f) {
            (*(unsigned char *)(p + 5))++;
            *(float *)(p + 0x38DC) = 30.0f;
        }
        break;
    case 2:
        *(short *)(p + 0x38FC) += 1092.2667f * *(float *)(p + 0x10);
        *(float *)(p + 0x38DC) -= *(float *)(p + 0x10);
        t = *(float *)(p + 0x38DC);
        if (t < 0.0f) (*(unsigned char *)(p + 5))++;
        break;
    case 3:
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(int *)(*(char **)(p + 0x6AC) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x6AC) + 0x104);
            o[0x9A] = 3;
        }
    }
}
}

extern "C" float D_005BE1DC;

extern "C" float D_005BCDF8;

extern "C" short D_005BCDF0[4];

extern "C" {
void func_002D4A20(char *p) {
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    extern int func_0024E800(char *);
    extern void func_0034B8C0(char *, char *, int);
    extern signed char D_005BCD60[];
    extern void func_0031E570(char *);
    extern short func_002D6DB0(char *);
    extern void func_002D2270(char *, int);
    extern void func_002D6C50(char *);
    char *o;
    float t;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
    case 1:
        *(float *)(p + 0x38DC) += *(float *)(p + 0x10);
        t = *(float *)(p + 0x38DC);
        if (!(t <= D_005BE1DC) && t < D_005BCDF8) {
            *(short *)(p + 0x37D8) = func_002D6DB0(p);
            func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)(*(float *)(p + 0x10) * (float)D_005BCDF0[*(unsigned char *)(p + 0x38D0)]));
        }
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 1) {
            func_0024E7B0(p + 0x2F70, 0, 1);
            func_001ACC30(D_005BE09C, 2, 0x28, 0x1E, 0);
            func_0036DF10(D_005BE1A8, 0, 1, 0x5A, 0xA, 0);
            func_00207480(3, 0x316, (M207 *)(p + 0x1EF0), 0x10);
        }
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(int *)(*(char **)(p + 0x6C8) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x6C8) + 0x104);
            o[0x9A] = 3;
        }
    }
    func_002D6C50(p);
}
}

extern "C" char D_01CAFF0C[];

extern "C" int func_0034B800(char *, char *, short, short, float);

extern "C" char *func_002D6540(char *);

extern "C" char D_00565634[];

extern "C" char D_00565636[];

extern "C" char D_00565638[];

extern "C" float D_005BE1C8;

extern "C" float D_005BCDA8;

extern "C" short D_005BCDA0[4];

extern "C" {
void func_002D40C0(char *p) {
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    extern int func_0024E800(char *);
    extern void func_0034B8C0(char *, char *, int);
    extern signed char D_005BCD60[];
    extern void func_0031E570(char *);
    extern short func_002D6DB0(char *);
    extern void func_002D2270(char *, int);
    extern void func_002D6C50(char *);
    char *o;
    float t;
    float a;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
    case 1:
        *(float *)(p + 0x38DC) = *(float *)(p + 0x38DC) + *(float *)(p + 0x10);
        a = D_005BE1C8;
        t = *(float *)(p + 0x38DC);
        if (!(t < a) && t <= a + D_005BCDA8) {
            *(short *)(p + 0x37D8) = func_002D6DB0(p);
            *(short *)(p + 0x37D8) = *(short *)(p + 0x37D8) + 0x5B0;
            func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)(*(float *)(p + 0x10) * (float)D_005BCDA0[*(unsigned char *)(p + 0x38D0)]));
        }
    if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 2) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 2);
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, *(short *)D_00565634 + *(short *)(p + 0x38FC), *(short *)D_00565636, *(float *)D_00565638) == 1) func_002D2270(p, 0xE);
        o = func_002D6540(p);
        if (o && (unsigned char)func_0034B800(o + 0x50, p + 0x50, *(short *)D_00565634 + *(short *)(p + 0x38FC), *(short *)D_00565636, *(float *)D_00565638) == 1) func_002D2270(p, 0xE);
        }
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(int *)(*(char **)(p + 0x6AC) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x6AC) + 0x104);
            o[0x9A] = 3;
        }
    }
    func_002D6C50(p);
}
}

extern "C" char D_00565644[];

extern "C" char D_00565646[];

extern "C" char D_00565648[];

extern "C" float D_005BE1D4;

extern "C" float D_005BCDD8;

extern "C" short D_005BCDD0[4];

extern "C" {
void func_002D4520(char *p) {
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    extern int func_0024E800(char *);
    extern void func_0034B8C0(char *, char *, int);
    extern signed char D_005BCD60[];
    extern void func_0031E570(char *);
    extern short func_002D6DB0(char *);
    extern void func_002D2270(char *, int);
    extern void func_002D6C50(char *);
    char *o;
    float t;
    float a;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
    case 1:
        *(float *)(p + 0x38DC) += *(float *)(p + 0x10);
        t = *(float *)(p + 0x38DC);
        if (!(t <= D_005BE1D4) && t < D_005BCDD8) {
            *(short *)(p + 0x37D8) = func_002D6DB0(p);
            func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)(*(float *)(p + 0x10) * (float)D_005BCDD0[*(unsigned char *)(p + 0x38D0)]));
        }
    if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 1);
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, *(short *)D_00565644 + *(short *)(p + 0x38FC), *(short *)D_00565646, *(float *)D_00565648) == 1) func_002D2270(p, 0x19);
        o = func_002D6540(p);
        if (o && (unsigned char)func_0034B800(o + 0x50, p + 0x50, *(short *)D_00565644 + *(short *)(p + 0x38FC), *(short *)D_00565646, *(float *)D_00565648) == 1) func_002D2270(p, 0x19);
        }
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(int *)(*(char **)(p + 0x6C8) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x6C8) + 0x104);
            o[0x9A] = 3;
        }
    }
    func_002D6C50(p);
}
}

extern "C" char D_00565654[];

extern "C" char D_00565656[];

extern "C" char D_00565658[];

extern "C" float D_005BE1D8;

extern "C" float D_005BCDE8;

extern "C" short D_005BCDE0[4];

extern "C" {
void func_002D47A0(char *p) {
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    extern int func_0024E800(char *);
    extern void func_0034B8C0(char *, char *, int);
    extern signed char D_005BCD60[];
    extern void func_0031E570(char *);
    extern short func_002D6DB0(char *);
    extern void func_002D2270(char *, int);
    extern void func_002D6C50(char *);
    char *o;
    float t;
    float a;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
    case 1:
        *(float *)(p + 0x38DC) += *(float *)(p + 0x10);
        t = *(float *)(p + 0x38DC);
        if (!(t <= D_005BE1D8) && t < D_005BCDE8) {
            *(short *)(p + 0x37D8) = func_002D6DB0(p);
            func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)(*(float *)(p + 0x10) * (float)D_005BCDE0[*(unsigned char *)(p + 0x38D0)]));
        }
    if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 1);
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, *(short *)D_00565654 + *(short *)(p + 0x38FC), *(short *)D_00565656, *(float *)D_00565658) == 1) func_002D2270(p, 0x1A);
        o = func_002D6540(p);
        if (o && (unsigned char)func_0034B800(o + 0x50, p + 0x50, *(short *)D_00565654 + *(short *)(p + 0x38FC), *(short *)D_00565656, *(float *)D_00565658) == 1) func_002D2270(p, 0x1A);
        }
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(int *)(*(char **)(p + 0x6AC) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x6AC) + 0x104);
            o[0x9A] = 3;
        }
    }
    func_002D6C50(p);
}
}

extern "C" char *func_00279290(char *);

extern "C" void func_001A5CC0(char *);

extern "C" void func_001A5B90(char *);

extern "C" void func_00138340(int);

extern "C" void func_001A2000(char *, int);

extern "C" void func_001A1E70(char *, int);

class S2D6 {
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
    virtual int m200(unsigned char *, float *, char *);
};

class A2D6 {
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
    virtual void mCC(char *);
};

class B2D6 {
public:
    virtual void d8();
    virtual void dC();
    virtual void m10();
};

extern "C" void func_002D6770(char *p) {
    unsigned char c;
    float x;
    char *w;
    if (*(unsigned char *)(p + 0x3904) == 0) {
        if ((unsigned char)((S2D6 *)p)->m200(&c, &x, *(char **)(*(char **)(p + 0x678) + 0x104) + 0x30) == 1) {
            func_001A5CC0(func_00279290(p + 0x780));
            func_001A5CC0(func_00279290(p + 0xD80));
            func_001A5CC0(func_00279290(p + 0x1380));
            func_00138340(c);
        } else {
            func_001A5B90(func_00279290(p + 0x780));
            func_001A5B90(func_00279290(p + 0xD80));
            func_001A5B90(func_00279290(p + 0x1380));
        }
    } else {
        func_001A5CC0(func_00279290(p + 0x780));
        func_001A5CC0(func_00279290(p + 0xD80));
        func_001A5CC0(func_00279290(p + 0x1380));
        func_00138340((int)*(float *)(p + 0x38EC));
    }
    w = p + 0x1EF0;
    ((A2D6 *)(p + 0x780))->mCC(w);
    ((B2D6 *)(p + 0x1980))->m10();
    ((A2D6 *)(p + 0xD80))->mCC(*(char **)(*(char **)(p + 0x6CC) + 0x104));
    ((B2D6 *)(p + 0x1A10))->m10();
    ((A2D6 *)(p + 0x1380))->mCC(w);
    if (*(unsigned char *)(p + 0x3900) == 0) {
        func_001A2000(func_00279290(p + 0x1380), 0);
    } else {
        ((B2D6 *)(p + 0x1AA0))->m10();
        func_001A1E70(func_00279290(p + 0x1380), 0);
    }
}

extern "C" void func_001AD140(char *);

extern "C" int func_001F9A70(int, char *, float);

static inline int get8_2D6(char *q) { return *(int *)(q + 8); }

extern "C" void func_002D6A10(char *p) {
    float v[4] __attribute__((aligned(16)));
    int i;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(p + 0x3500), "r"(v) : "memory");
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    for (i = 0; i < 38; i++) {
        if (((char **)(p + 0x674))[i] != 0 && *(char **)(((char **)(p + 0x674))[i] + 0x104) != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 0x674))[i] + 0x104) + 0x30), "r"(v) : "memory");
            *(float *)(*(char **)(((char **)(p + 0x674))[i] + 0x104) + 0x3C) = 1.0f;
        }
    }
    for (i = 0; i < 8; i++) {
        if (((char **)(p + 0x70C))[i] != 0 && *(char **)(((char **)(p + 0x70C))[i] + 0x104) != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 0x70C))[i] + 0x104) + 0x30), "r"(v) : "memory");
            *(float *)(*(char **)(((char **)(p + 0x70C))[i] + 0x104) + 0x3C) = 1.0f;
        }
    }
    for (i = 0; i < 19; i++) {
        if (((char **)(p + 0x72C))[i] != 0 && *(char **)(((char **)(p + 0x72C))[i] + 0x104) != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 0x72C))[i] + 0x104) + 0x30), "r"(v) : "memory");
            *(float *)(*(char **)(((char **)(p + 0x72C))[i] + 0x104) + 0x3C) = 1.0f;
        }
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(v) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(p + 0x3540), "r"(p + 0xF0) : "memory");
    if ((unsigned char)func_001F9A70(get8_2D6(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548), p + 0x50, 1000.0f) == 0) {
        *(unsigned char *)(p + 4) = 3;
        func_001AD140(p);
    }
}

extern "C" char D_01DFABA0[];

extern "C" float D_00564EBC[];

extern "C" float D_00564ED4[];

extern "C" float D_005BC238;

extern "C" float D_005BC23C;

extern "C" void func_00330BD0(char *, int, char *, int, int);

extern "C" void func_002F2D30(char *, char *);

extern "C" void func_001A2840(char *, float, int);

extern "C" void func_001A29A0(char *);

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

extern "C" {
void func_002D3A40(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern void func_0031E570(char *);
    extern int func_0024E800(char *);
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
}

class ObjA4 {
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
    virtual void mA4();
};

extern "C" {
extern "C" void func_002D6640(char *p, int) {
    ((ObjA4 *)(p + 0x130))->mA4();
    func_001AD140(p);
}
}

extern "C" {
extern float D_005BCD64;
}

extern "C" {
extern char D_005BCD70;
}

class V84_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_002D28A0(int p0) {
    extern char D_00565278[];
    int func_0024E800(...);
    void func_002D2270(int, int);
    int func_002D6C50(char *);
    int func_002D6DB0(char *);
    void func_0031E570(char *);
    void func_0034B8C0(char *, char *, int);
    char *v0;
    int v1;
    int v2;
    int tmp0;
    int tmp6;
    int tmp12;
    int tmp13;
    v0 = (char *)p0;
    tmp0 = ((V84_0_i *)(v0 + 304))->m();
    if ((tmp0 & 255) == 0) {
        *(float *)(v0 + 360) += *(float *)((D_00565278 + (*(unsigned char *)(v0 + 14544) << 2)) + 0);
    }
    v1 = *(unsigned char *)(v0 + 5);
    switch (v1) {
    case 0:
        *(char *)(v0 + 5) = (v1 + 1);
        func_0031E570((v0 + 464));
        *(float *)(v0 + 14556) = D_005BCD64;
        *(char *)(v0 + 14593) = 0;
        /* fall through */
    case 1:
        tmp6 = func_002D6DB0(v0);
        *(short *)(v0 + 14296) = tmp6;
        func_0034B8C0((v0 + 14588), (v0 + 14296), (int)(*(float *)(v0 + 16) * (float)*(short *)((&D_005BCD70 + (*(unsigned char *)(v0 + 14544) << 1)) + 0)));
        *(float *)(v0 + 14556) -= *(float *)(v0 + 16);
        if (*(float *)(v0 + 14556) < 0.0f) {
            *(char *)(v0 + 14593) = 1;
        }
        tmp12 = func_0024E800((v0 + 12144));
        if ((tmp12 & 255) == 1) {
            v2 = (int)v0;
            if (*(unsigned char *)(v0 + 14593) == 1) {
                func_002D2270(v2, 0);
            }
        }
        break;
    }
    tmp13 = func_002D6C50(v0);
    return tmp13;
}
}

extern "C" {
int func_0013D5D0(...);
}

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

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
int func_002D6680(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 1920))->m();
    ((VD0_0_v *)(v0 + 3456))->m();
    ((VD0_0_v *)(v0 + 4992))->m();
    ((V14_0_v *)(v0 + 6528))->m();
    ((V14_0_v *)(v0 + 6672))->m();
    ((V14_0_v *)(v0 + 6816))->m();
    ((V14_0_v *)(v0 + 12976))->m();
    v1 = ((V14_0_i *)(v0 + 13004))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 528))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 532));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 528)));
    }
    return v1;
}
}

class V354_3_piii {
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
    virtual int m(char *, int, int);
};

extern "C" {
int func_002D7570(char *p0, char *p1, int p2) {
    int v0;
    int v1;
    v0 = *(unsigned char *)(p0 + 333);
    if (v0 != 3) {
        *(char *)(p0 + 364) = *(signed char *)(p1 + 0);
        *(char *)(p0 + 365) = *(signed char *)(p1 + 1);
        *(char *)(p0 + 366) = *(signed char *)(p1 + 2);
        *(float *)(p0 + 368) = *(float *)(p1 + 4);
        *(float *)(p0 + 372) = *(float *)(p1 + 8);
        *(float *)(p0 + 376) = *(float *)(p1 + 12);
        *(float *)(p0 + 380) = *(float *)(p1 + 16);
        *(float *)(p0 + 384) = *(float *)(p1 + 20);
        *(char *)(p0 + 388) = *(signed char *)(p1 + 24);
        *(float *)(p0 + 392) = *(float *)(p1 + 28);
        *(char *)(p0 + 396) = *(signed char *)(p1 + 32);
        *(float *)(p0 + 400) = *(float *)(p1 + 36);
        *(float *)(p0 + 404) = *(float *)(p1 + 40);
        *(float *)(p0 + 408) = *(float *)(p1 + 44);
        *(char *)(p0 + 412) = *(unsigned char *)(p1 + 48);
        *(int *)(p0 + 416) = *(int *)(p1 + 52);
        *(float *)(p0 + 420) = *(float *)(p1 + 56);
        *(char *)(p0 + 424) = *(signed char *)(p1 + 60);
        *(char *)(p0 + 425) = *(signed char *)(p1 + 61);
        *(char *)(p0 + 426) = *(signed char *)(p1 + 62);
        *(char *)(p0 + 14299) = 8;
        v1 = ((V354_3_piii *)p0)->m(p1, p2, v0);
    }
    return v1;
}
}
