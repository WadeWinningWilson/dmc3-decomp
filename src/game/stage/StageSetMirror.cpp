extern "C" char D_005789A0[];

extern "C" int D_00578A50[];

extern "C" void func_00131700(float *, float *, float *);

class O450 {
public:
    virtual void d8();
    virtual void dC();
    virtual void m10(int);
};

extern "C" {
void func_00450B00(char *p) {
    extern void func_00105230(float *, float *, float *);
    extern char *func_00207480(int, int, float *, int);
    extern O450 *func_002F7C10(int, int);
    float v[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    int i;
    O450 *o;
    char *e;
    unsigned char *u;
    *(unsigned char *)(p + 0xEB) = 0;
    for (i = 0; i < 8; i++) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + i * 64 + 0x120) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(D_005789A0 + i * 16) : "memory");
        r[0] = 0.0f;
        r[1] = 6.283185f * (v[3] / 360.0f);
        r[2] = 0.0f;
        r[3] = 1.0f;
        v[3] = 1.0f;
        func_00131700((float *)(p + i * 64 + 0x120), (float *)(p + i * 64 + 0x120), r);
        func_00105230((float *)(p + i * 64 + 0x120), (float *)(p + i * 64 + 0x120), v);
        ((char **)(p + 0x320))[i] = func_00207480(1, 0x2E0, (float *)(p + i * 64 + 0x120), 0x40);
        e = ((char **)(p + 0x320))[i];
        e[0x7A3] = 0;
        e[0x7A4] = 1;
        u = ((unsigned char **)(p + 0x320))[i];
        u[0x9C] = 0x80;
        u[0x9D] = 0x80;
        u[0x9E] = 0x80;
        u[0x9B] = 2;
        ((float *)(p + 0xF0))[i] = 1000.0f;
    }
    for (i = 0; i < 8; i++) {
        o = func_002F7C10(D_00578A50[i], 0);
        if (o != 0) o->m10(0);
    }
    *(int *)(p + 0xC) |= 0x40;
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
}
}

extern "C" char D_01CAFF3D[];

extern "C" char D_01DFABA0[];

class E451 {
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
    virtual void m38(char *, char *);
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
    virtual void m64(char *, int, float, float, float);
    virtual float m68();
};

extern "C" {
void func_004511A0(char *p, char *a, E451 *e, char *w) {
    extern char *func_00207480(int, int, float *, int);
    extern void func_00105230(float *, float *, char *);
    extern void func_003305E0(char *, int, int, char *, int, int, int);
    float m[16] __attribute__((aligned(16)));
    float d;
    char *q;
    if (a == 0) return;
    if (e == 0) return;
    if (*(unsigned char *)(p + 0xEB) != 1) return;
    if (((unsigned char *)(p + 0xDD))[*(unsigned char *)(p + 0xEA)] == 1) return;
    d = *(float *)(a + 4) * e->m68();
    e->m64(a, 0, d, 1.0f, 1.0f);
    q = p;
    if (q != 0) q += 0x40;
    e->m38(a, q);
    ((float *)(p + 0xF0))[*(unsigned char *)(p + 0xEA)] -= d;
    if (*(unsigned char *)(a + 0x30) != 0 && ((float *)(p + 0xF0))[*(unsigned char *)(p + 0xEA)] <= 1.0f) {
        ((float *)(p + 0xF0))[*(unsigned char *)(p + 0xEA)] = 1.0f;
    }
    if (((float *)(p + 0xF0))[*(unsigned char *)(p + 0xEA)] < 0.0f || *(unsigned char *)D_01CAFF3D != 0) {
        ((float *)(p + 0xF0))[*(unsigned char *)(p + 0xEA)] = -1.0f;
        *(unsigned char *)(p + 0xE5) = 1;
    } else {
        *(unsigned char *)(p + 0xE6) = 1;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105230(m, m, w);
    func_00207480(3, 0x1C, m, 0x20);
    func_00207480(1, 0x573, (float *)(p + *(unsigned char *)(p + 0xEA) * 64 + 0x120), 0x40);
    func_003305E0(D_01DFABA0, 8, 0xB, w, 0x29, 0, 0);
}
}

extern "C" void func_001AD140(char *);

extern "C" void func_0028C790(char *, int);

extern "C" void func_0034C3E0(int);

class O451 {
public:
    virtual void d8();
    virtual void gC(int);
};

static inline void col451(unsigned char *o, int r, int g, int b) {
    o[0x9C] = r;
    o[0x9D] = g;
    o[0x9E] = b;
    o[0x9B] = 2;
}

extern "C" {
int func_004514E0(char *p) {
    extern char *func_002F7C10(int, int);
    extern char *func_00207480(int, int, char *, int);
    extern void func_003305E0(char *, int, int, float *, int, int, int);
    float v[4] __attribute__((aligned(16)));
    O451 *o;
    int i;
    if (*(unsigned char *)(p + 0xE5) != 0) {
        *(unsigned char *)(p + 0xE5) = 0;
        func_00207480(3, 0x1EA, p + *(unsigned char *)(p + 0xEA) * 64 + 0x120, 0x40);
        if (*(char **)((char *)(*(unsigned char *)(p + 0xEA) * 4) + (int)p + 0x320) != 0) {
            func_001AD140(*(char **)((char *)(*(unsigned char *)(p + 0xEA) * 4) + (int)p + 0x320));
            *(char **)((char *)(*(unsigned char *)(p + 0xEA) * 4) + (int)p + 0x320) = 0;
        }
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(p + *(unsigned char *)(p + 0xEA) * 64 + 0x120) : "memory");
        v[3] = 1.0f;
        func_003305E0(D_01DFABA0, 8, 0xA, v, 0x29, 0, 0);
        *(unsigned char *)((char *)*(unsigned char *)(p + 0xEA) + (int)p + 0xDD) = 1;
        o = (O451 *)func_002F7C10(D_00578A50[*(unsigned char *)(p + 0xEA)], 0);
        if (o != 0) o->gC(0);
        func_0028C790(p + 0x340, 0);
        func_0034C3E0(0);
        (*(unsigned char *)(p + 0xEC))++;
        if (*(unsigned char *)(p + 0xEC) >= 2) {
            for (i = 0; i < 8; i++) {
                if (*(unsigned char *)((char *)i + (int)p + 0xDD) == 0) {
                    char *a = (char *)(i * 4) + (int)p;
                    char *e = *(char **)(a + 0x320);
                    if (e != 0) {
                        e[0x7A3] = 0;
                        e[0x7A4] = 1;
                        col451(*(unsigned char **)(a + 0x320), 0x80, 0x80, 0x80);
                    }
                }
            }
            *(unsigned char *)(p + 0xEB) = 2;
            return 1;
        }
        for (i = 0; i < 8; i++) {
            if (*(unsigned char *)((char *)i + (int)p + 0xDD) == 0) *(float *)((char *)(i * 4) + (int)p + 0xF0) = 1000.0f;
        }
    }
    return 0;
}
}

extern "C" {
int func_001AD100(void);
}

extern "C" {
int func_00450CD0(char *);
}

class V130_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00450A90(int p0) {
    int v1;
    char *v0;
    int v2;
    v0 = (char *)p0;
    v2 = func_001AD100();
    if (*(unsigned char *)(v0 + 220) != 0) {
        v1 = *(unsigned char *)(v0 + 4);
        switch (v1) {
        case 0:
            v2 = ((V130_0_i *)v0)->m();
            break;
        case 1:
            v2 = func_00450CD0(v0);
            break;
        }
    }
    return v2;
}
}
