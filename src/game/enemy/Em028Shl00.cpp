extern "C" float D_005647AC[];

extern "C" unsigned char D_01CAFF3D[];

class Sub40 {
public:
    int x;
};

class Hit64 {
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
    virtual void m38(char *, Sub40 *);
    virtual void e13();
    virtual void e14();
    virtual void e15();
    virtual void e16();
    virtual void e17();
    virtual void e18();
    virtual void e19();
    virtual void e20();
    virtual void e21();
    virtual void e22();
    virtual void m64(char *, int, float, float, float);
};

class Pad40 {
public:
    virtual void p0();
    char pad40[0x3C];
};

class Hit40 : public Pad40, public Sub40 {
};

extern "C" {
void func_003B9790(Hit40 *h, char *a, Hit64 *q) {
    extern char *func_00207480(int, int, char *, int);
    extern void func_0034BA60(int, char *, int, int, int);
    char *p = (char *)h;
    float f;
    if (a != 0 && q != 0) {
        func_00207480(3, 0x15E, p + 0x250, 0x20);
        if (*(unsigned char *)(p + 0x1B4) != 0) func_0034BA60(0x32, p + 0x50, *(signed char *)(*(char **)(p + 0x1DC) + 0x46), 0, 1);
        f = *(float *)(a + 4) * (D_005647AC[0] / 100.0f);
        q->m64(a, 0, f, 1.0f, 1.0f);
        q->m38(a, h);
        f = *(float *)(p + 0x1C4) = *(float *)(p + 0x1C4) - f;
        if (f <= 0.0f || D_01CAFF3D[0] != 0) {
            *(float *)(p + 0x1C4) = -1.0f;
            *(unsigned char *)(p + 0x1B0) = 1;
        }
    }
}
}

extern "C" float D_005647B0[];

class Q3B9 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34();
    virtual void m38(char *, Sub40 *);
    virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58();
    virtual void d5C(); virtual void d60();
    virtual void m64(char *, int, float, float, float);
    virtual float m68();
};

extern "C" {
void func_003B99E0(Hit40 *h, char *a, Q3B9 *q) {
    extern char *func_00207480(int, int, char *, int);
    extern void func_0034BA60(int, char *, int, int, int);
    char *p = (char *)h;
    float f;
    if (a != 0 && q != 0) {
        func_00207480(3, 0x15E, p + 0x250, 0x20);
        if (*(unsigned char *)(p + 0x1B4) != 0) func_0034BA60(0x32, p + 0x50, *(signed char *)(*(char **)(p + 0x1DC) + 0x46), 0, 1);
        f = q->m68();
        f = *(float *)(a + 4) * f * D_005647B0[*(signed char *)(a + 2)] / 100.0f;
        q->m64(a, 0, f, 1.0f, *(signed char *)(a + 2) != 0 ? 0.7f : 0.3f);
        q->m38(a, h);
        *(float *)(p + 0x1C4) = *(float *)(p + 0x1C4) - f;
        if (*(unsigned char *)(a + 0x30) != 0 && *(float *)(p + 0x1C4) <= 1.0f) {
            *(float *)(p + 0x1C4) = 1.0f;
        }
        if (*(float *)(p + 0x1C4) <= 0.0f || D_01CAFF3D[0] != 0) {
            *(float *)(p + 0x1C4) = -1.0f;
            *(unsigned char *)(p + 0x1B0) = 1;
        }
    }
}
}

struct M207 { float m[16]; };

class V3B9 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34();
    virtual void m38(char *, char *);
    virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58();
    virtual void d5C(); virtual void d60();
    virtual void m64(char *, int, float, float, float);
};

extern "C" {
void func_003B98C0(char *p, char *a, V3B9 *o, float dt) {
    extern void func_0034BA60(int, char *, signed char, int, int);
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    char *b;
    if (a != 0 && o != 0) {
        func_00207480(3, 0x386, (M207 *)(p + 0x250), 0x20);
        if (*(unsigned char *)(p + 0x1B4) != 0) {
            func_0034BA60(0x32, p + 0x50, *(signed char *)(*(char **)(p + 0x1DC) + 0x46), 0, 1);
        }
        o->m64(a, 0, dt, 1.0f, *(signed char *)(a + 2) ? 0.7f : 0.3f);
        b = p;
        if (b != 0) b += 0x40;
        o->m38(a, b);
        *(float *)(p + 0x1C4) = *(float *)(p + 0x1C4) - dt;
        if (*(float *)(p + 0x1C4) <= 0.0f) {
            *(unsigned char *)(p + 0x1B0) = 1;
        }
    }
}
}

extern "C" {
int func_003B8AF0(char *);
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

extern "C" {
int func_003B89E0(char *p0) {
    int v0;
    char *v1;
    int v2;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    switch (v0) {
    case 0:
        ((V130_0_v *)p0)->m();
        *(char *)(v1 + 4) = (*(unsigned char *)(v1 + 4) + 1);
        /* fall through */
    case 1:
        v2 = func_003B8AF0(v1);
        break;
    }
    return v2;
}
}
