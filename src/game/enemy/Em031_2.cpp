extern "C" int func_003B55B0(char *, int);

extern "C" float func_003B5650(char *, int, int);

extern "C" unsigned char func_003B5780(char *, int);

extern "C" short func_003B5700(char *, int);

extern "C" float func_003B57C0(char *, int);

extern "C" unsigned char func_003B58D0(char *, int);

extern "C" short func_003B5850(char *, int);

class BaseD0 {
public:
    int x;
};

extern "C" BaseD0 *func_002F7C10(int, int);

class PadD0 {
public:
    char padD0[0xD0];
};

class DerD0 : public PadD0, public BaseD0 {
};

extern "C" void func_003B5470(char *p) {
    int i;
    DerD0 *e;
    *(short *)(p + 0x222E) = *(short *)(p + 0x222C);
    *(short *)(p + 0x222C) = 0;
    for (i = 0; i < 7; i++) {
        e = static_cast<DerD0 *>(func_002F7C10(i, 0x20));
        if (e != 0) {
            *(unsigned char *)(p + i + 0x221A) = *(unsigned char *)((char *)e + 0x2BC);
            *(char **)((char *)e + 0x2B4) = p;
            if (*(unsigned char *)(p + i + 0x221A) != 0) *(short *)(p + 0x222C) = *(short *)(p + 0x222C) + 1;
        }
    }
    *(int *)(p + 0x21FC) = func_003B55B0(p, 0);
    *(int *)(p + 0x2210) = func_003B55B0(p, 1);
    if ((bool)*(unsigned char *)(p + 0x2216) == true) {
        *(float *)(p + 0x2208) = func_003B57C0(p, *(int *)(p + 0x2200));
        *(unsigned char *)(p + 0x220C) = func_003B58D0(p, *(int *)(p + 0x2200));
        *(short *)(p + 0x220E) = func_003B5850(p, *(int *)(p + 0x2200));
    } else {
        *(float *)(p + 0x2208) = func_003B5650(p, *(int *)(p + 0x2200), 0);
        *(unsigned char *)(p + 0x220C) = func_003B5780(p, *(int *)(p + 0x2200));
        *(short *)(p + 0x220E) = func_003B5700(p, *(int *)(p + 0x2200));
    }
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" char *func_002792A0(char *);

extern "C" void func_003B3E70(char *);

class VB4c {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42(); virtual unsigned int f();
};

class VC8c {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47(); virtual void f(char *);
};

#define QCOPYR(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

#define VADDIP(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline unsigned char func_003AEC70_h(unsigned char c) {
    if (c == 1) return 1;
    return 0;
}

extern "C" void func_003AEC70(char *p) {
    float v[4] __attribute__((aligned(16)));
    unsigned int n;
    unsigned int i;
    if (func_003AEC70_h(*(unsigned char *)(p + 0x21C5)) == 1) {
        QCOPYR(v, p + 0x2070);
        v[3] = 1.0f;
        VADDIP(p + 0x50, v);
        QCOPY(p + 0xE0, v);
        QCOPYR(p + 0xF0, p + 0x20B0);
        n = ((VB4c *)func_002792A0(p + 0x700))->f();
        for (i = 0; i < n; i++) {
            if (*(char **)((char *)(i * 4) + (int)p + 0x664) != 0 && *(char **)(*(char **)((char *)(i * 4) + (int)p + 0x664) + 0x104) != 0) {
                VADDIP(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x664) + 0x104) + 0x30, v);
                *(float *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x664) + 0x104) + 0x3C) = 1.0f;
            }
        }
    }
    ((VC8c *)(p + 0xD00))->f(p + 0x440);
    func_003B3E70(p);
    ((VC8c *)(p + 0x1300))->f(p + 0x2140);
}

extern "C" int func_0024E800(char *);

extern "C" char D_01CAFF0C[];

extern "C" void func_0024DA80(char *, int, int);

extern "C" void func_003B61B0(char *);

extern "C" void func_003B6450(char *);

extern "C" float D_005644A0[];

extern "C" char *D_005BD0CC;

extern "C" void func_003B5F50(char *);

extern "C" void func_003B60C0(char *);

extern "C" void func_003B6670(char *);

extern "C" void func_003B66A0(char *);

extern "C" void func_003B6740(char *);

extern "C" void func_003B6AE0(char *, int);

class V3B3 {
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

static inline bool sl3B3(void) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    return g != 0 && *(unsigned char *)(g + 0x3C78) == 1;
}

static inline unsigned char bo3B3(char *p) {
    unsigned char r;
    if ((unsigned char)func_0024E800(p + 0x1D00) == 1 && (unsigned char)func_0024E800(p + 0x1DD0) == 1) r = 1;
    else r = 0;
    return r;
}

static inline void an3B3(char *p, int k) {
    *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
    *(short *)(p + 0x21C2) = k;
    func_0024DA80(p + 0x1D00, 0, k);
    func_0024DA80(p + 0x1DD0, 0, k);
}

extern "C" {
int func_003B3480(char *p, int f) {
    extern unsigned char D_01CAFF3C[];
    *(unsigned char *)(p + 0x21CA) = 0;
    if (f == 0) {
        if (sl3B3()) {
            *(float *)(p + 0x540) = *(float *)(D_005BD0CC + 0x20);
            *(float *)(p + 0x544) = *(float *)(D_005BD0CC + 0x24);
            *(float *)(p + 0x530) = *(float *)(D_005BD0CC + 0x10);
        } else {
            *(float *)(p + 0x540) = 2.0f * *(float *)(D_005BD0CC + 0x20);
            *(float *)(p + 0x544) = 1.5f * *(float *)(D_005BD0CC + 0x24);
            *(float *)(p + 0x530) = 100.0f;
        }
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        an3B3(p, 0x30);
        (*(unsigned char *)(p + 5))++;
        if (f != 0) *(float *)(p + 0x20C4) = 1.0f;
        else *(float *)(p + 0x20C4) = D_005644A0[D_01CAFF3C[0]];
        func_003B61B0(p);
        func_003B6450(p);
        func_003B5F50(p);
        func_003B60C0(p);
        func_003B6670(p);
        func_003B66A0(p);
        func_003B6740(p);
        func_003B6AE0(p, 0x20);
        break;
    case 1:
        if (bo3B3(p) == 1) {
            an3B3(p, 0x31);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 2:
        if (((V3B3 *)(p + 0x704))->m28(0) < 119.0f) break;
        if ((*(float *)(p + 0x20C4) -= 1.0f) <= 0.0f) {
            an3B3(p, 0x32);
            *(unsigned char *)(p + 5) = 10;
        } else {
            *(unsigned char *)(p + 5) = 3;
        }
        break;
    case 3:
        if (((V3B3 *)(p + 0x704))->m28(0) <= 32.0f) *(unsigned char *)(p + 5) = 2;
        break;
    case 10:
        if (bo3B3(p) == 1) {
            if (f == 0) {
                *(float *)(p + 0x540) = *(float *)(D_005BD0CC + 0x20);
                *(float *)(p + 0x544) = *(float *)(D_005BD0CC + 0x24);
                *(float *)(p + 0x530) = *(float *)(D_005BD0CC + 0x10);
            }
            *(int *)(p + 0x2200) = 6;
            *(float *)(p + 0x2208) = func_003B5650(p, *(int *)(p + 0x2200), 0);
            *(unsigned char *)(p + 0x220C) = func_003B5780(p, *(int *)(p + 0x2200));
            *(short *)(p + 0x220E) = func_003B5700(p, *(int *)(p + 0x2200));
            return 1;
        }
        break;
    }
    return 0;
}
}

extern "C" void func_003B4B60(char *, int);

extern "C" void func_003B4F60(char *);

extern "C" void func_003B5910(char *, int, int);

extern "C" void func_003B6060(char *);

extern "C" unsigned char *D_005644E0[];

extern "C" float D_005644C0[];

extern "C" void func_003B6140(char *);

extern "C" int func_003B5E50(char *);

extern "C" void func_003B61F0(char *);

extern "C" int func_003B5DC0(char *, char *, float, float);

extern "C" int func_00124EC0(int);

static inline unsigned char both_done(char *p) {
    if ((unsigned char)func_0024E800(p + 0x1D00) == 1 && (unsigned char)func_0024E800(p + 0x1DD0) == 1) {
        return 1;
    }
    return 0;
}

class AnimF {
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

static inline float fsqrt(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
}

extern "C" {
void func_003B24B0(char *p) {
    extern char D_01CAFF3C[];
    float d[4] __attribute__((aligned(16)));
    float h;
    unsigned char *t;
    bool b;
    *(unsigned short *)(p + 0x20CC) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x2B;
        func_0024DA80(p + 0x1D00, 0, 0x2B);
        func_0024DA80(p + 0x1DD0, 0, 0x2B);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(int *)(p + 0x68) = 0;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0x21A0) = 0;
        *(int *)(p + 0x21A4) = 0;
        *(int *)(p + 0x21A8) = 0;
        *(int *)(p + 0x21AC) = 0;
        func_003B6060(p);
        *(int *)(p + 0x2200) = *(int *)(p + 0x2204);
        *(float *)(p + 0x2208) = func_003B5650(p, *(int *)(p + 0x2200), 0);
        *(unsigned char *)(p + 0x220C) = func_003B5780(p, *(int *)(p + 0x2200));
        *(short *)(p + 0x220E) = func_003B5700(p, *(int *)(p + 0x2200));
        func_003B5910(p, 0xFFFF, 1);
        func_003B6140(p);
        t = D_005644E0[(unsigned char)D_01CAFF3C[0]];
        *(unsigned char *)(p + 0x2214) = t[func_003B5E50(p)];
        *(unsigned char *)(p + 0x2230) = 1;
        *(float *)(p + 0x20C4) = D_005644C0[(unsigned char)D_01CAFF3C[0]];
    case 1:
        if (both_done(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x2C;
            func_0024DA80(p + 0x1D00, 0, 0x2C);
            func_0024DA80(p + 0x1DD0, 0, 0x2C);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        if (both_done(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x2D;
            func_0024DA80(p + 0x1D00, 0, 0x2D);
            func_0024DA80(p + 0x1DD0, 0, 0x2D);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 3:
        break;
    case 10:
        if (both_done(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x33;
            func_0024DA80(p + 0x1D00, 0, 0x33);
            func_0024DA80(p + 0x1DD0, 0, 0x33);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 11:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 34.0f)) {
            func_003B61F0(p);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 12:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 36.0f)) {
            func_003B61B0(p);
            if (*(unsigned char *)(p + 0x2214) == 0) {
                *(unsigned char *)(p + 5) = 0x1E;
            } else {
                *(unsigned char *)(p + 5) = 0x14;
            }
        }
        break;
    case 20:
        if (*(unsigned char *)(p + 0x2230) == 0 || *(int *)(p + 0x21F8) == 0) {
            func_003B4B60(p, 2);
            *(int *)(p + 0x21F8) = 0;
            *(unsigned char *)(p + 0x2230) = 0;
            return;
        }
        if (both_done(p) == 1 && *(short *)(p + 0x21C2) != 0) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0;
            func_0024DA80(p + 0x1D00, 0, 0);
            func_0024DA80(p + 0x1DD0, 0, 0);
        }
        if (*(unsigned char *)(p + 0x2230) == 2) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            if ((int)*(unsigned char *)(p + 0x2214) > 0) {
                *(unsigned char *)(p + 0x2214) = *(unsigned char *)(p + 0x2214) - 1;
            }
        }
        break;
    case 21:
        if (*(unsigned char *)(p + 0x2230) == 0 || *(int *)(p + 0x21F8) == 0) {
            func_003B4B60(p, 2);
            *(int *)(p + 0x21F8) = 0;
            *(unsigned char *)(p + 0x2230) = 0;
            return;
        }
        if (both_done(p) == 1 && *(short *)(p + 0x21C2) != 0) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0;
            func_0024DA80(p + 0x1D00, 0, 0);
            func_0024DA80(p + 0x1DD0, 0, 0);
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(*(char **)(p + 0x21F8) + 0x50) : "memory");
        h = (float)func_00124EC0((int)*(float *)(*(char **)(p + 0x21F8) + 0x68));
        __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(d), "r"(p + 0x50) : "memory");
        if (!(200.0f * *(float *)(p + 0x20E0) + 14.0f * h < (float)func_00124EC0((int)fsqrt(d[0] * d[0] + d[2] * d[2])))) {
            b = false;
            if (*(short *)(p + 0x21C2) == 0x2F) {
                if (!(((AnimF *)(p + 0x704))->m28(0) < 50.0f)) {
                    b = true;
                }
            } else {
                b = true;
            }
            if (b) {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0x2F;
                func_0024DA80(p + 0x1D00, 0, 0x2F);
                func_0024DA80(p + 0x1DD0, 0, 0x2F);
                *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            }
        }
        break;
    case 22:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 50.0f)) {
            if (*(unsigned char *)(p + 0x2214) == 0) {
                *(unsigned char *)(p + 5) = 0x1E;
            } else {
                *(unsigned char *)(p + 5) = 0x14;
            }
        }
        break;
    case 30:
        if ((*(unsigned char *)(p + 0x2230) == 0 || *(int *)(p + 0x21F8) == 0) && (both_done(p) == 1 || *(short *)(p + 0x21C2) == 0)) {
            func_003B4B60(p, 2);
            *(int *)(p + 0x21F8) = 0;
            *(unsigned char *)(p + 0x2230) = 0;
            return;
        }
        if (both_done(p) == 1 && *(short *)(p + 0x21C2) != 0) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0;
            func_0024DA80(p + 0x1D00, 0, 0);
            func_0024DA80(p + 0x1DD0, 0, 0);
        }
        break;
    }
    func_003B4F60(p);
    if (*(unsigned char *)(p + 5) >= 1 && *(unsigned char *)(p + 5) < 4) {
        if ((unsigned char)func_003B5DC0(p, p + 0x20C4, 1.0f, 0.0f) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x2E;
            func_0024DA80(p + 0x1D00, 0, 0x2E);
            func_0024DA80(p + 0x1DD0, 0, 0x2E);
            *(unsigned char *)(p + 5) = 10;
        }
    }
}
}

extern "C" short D_005643E0[];

extern "C" int *D_00564550[];

extern "C" int func_003B5A20(char *);

extern "C" int func_003B5A00(char *, short);

static inline unsigned char both28(char *o) { if (*(unsigned char *)(o + 0x28AE) == 1 && *(unsigned char *)(o + 0x28A9) == 1) { return 1; } return 0; }

extern "C" {
unsigned char func_003B4030(char *p) {
    extern char D_01CAFF3C[];
    unsigned char found;
    int i;
    short *t;
    char *o;
    int *tbl;
    if ((*(unsigned char *)(p + 0x21C9) != 0) == 0) {
        return 0;
    }
    if ((unsigned char)func_003B5A20(p) == 0) {
        if (*(short *)(p + 0x222C) == 1) {
            *(short *)(p + 0x20CE) = 0xF;
            return 1;
        }
        found = 0;
        if ((unsigned char)func_003B5A00(p, *(int *)(p + 0x2210)) == 1) {
            if ((unsigned char)func_003B5A00(p, D_005643E0[*(int *)(p + 0x2210)]) == 0) {
                found = 1;
                *(int *)(p + 0x2200) = D_005643E0[*(int *)(p + 0x2210)];
                *(int *)(p + 0x2204) = *(int *)(p + 0x2210);
            }
        }
        if (!found) {
            for (i = 0, t = D_005643E0; i < 6; i++, t++) {
                if ((unsigned char)func_003B5A00(p, i) == 0) {
                    if ((unsigned char)func_003B5A00(p, *t) == 1) {
                        found = 1;
                        *(int *)(p + 0x2200) = i;
                        *(int *)(p + 0x2204) = D_005643E0[i];
                        break;
                    }
                }
            }
        }
        if (!found) {
            if ((unsigned char)func_003B5A00(p, *(int *)(p + 0x2210)) == 1) {
                found = 1;
                *(int *)(p + 0x2200) = 6;
                *(int *)(p + 0x2204) = *(int *)(p + 0x2210);
            }
        }
        if (found) {
            *(float *)(p + 0x2208) = func_003B57C0(p, *(int *)(p + 0x2200));
            *(unsigned char *)(p + 0x220C) = func_003B58D0(p, *(int *)(p + 0x2200));
            *(short *)(p + 0x220E) = func_003B5850(p, *(int *)(p + 0x2200));
            if (*(int *)(p + 0x2200) == *(int *)(p + 0x21FC) && *(float *)(p + 0x2208) <= 100.0f) {
                *(short *)(p + 0x20CE) = 0x1D;
            } else {
                *(unsigned char *)(p + 0x2216) = 1;
                if (*(unsigned char *)(p + 0x220C) & 1) {
                    *(short *)(p + 0x20CE) = 0xE;
                } else {
                    *(short *)(p + 0x20CE) = 0xD;
                }
            }
            return 1;
        }
    }
    if (*(unsigned char *)(p + 0x2190) == 1) {
        o = *(char **)(*(char **)D_01CAFF0C + 0xC);
        if (o != 0 && both28(o) == 1) {
            *(short *)(p + 0x20CE) = 0x25;
            return 1;
        }
    }
    if (*(unsigned char *)(p + 0x218E) < 2) {
        if (*(unsigned char *)(p + 0x218F) & 1) {
            *(short *)(p + 0x20CE) = 0x26;
            return 1;
        }
        tbl = D_00564550[(unsigned char)D_01CAFF3C[0]];
        *(short *)(p + 0x20CE) = tbl[func_003B5E50(p)];
        return 1;
    }
    if (*(unsigned char *)(p + 0x218E) < 3) {
        if (*(short *)(p + 0x20D0) == 0x1E || *(short *)(p + 0x20D0) == 0x1F) {
            *(short *)(p + 0x20CE) = 0x1C;
        } else {
            *(short *)(p + 0x20CE) = 0x1B;
        }
        return 1;
    }
    if (!(*(unsigned char *)(p + 0x218E) < 3)) {
        *(short *)(p + 0x20CE) = 0x17;
        return 1;
    }
    return 0;
}
}

#define IN_ARC(a, base, len) ((unsigned short)((a) - (base)) != 0 && (unsigned short)((a) - (base)) < (unsigned int)((len) + 1))

extern "C" {
extern "C" unsigned char func_003B4A30(char *p, short a) {
    unsigned char r;
    if (IN_ARC(a, 0x1000, 0x3000)) {
        r = 2;
    } else if (IN_ARC(a, 0x4000, 0x3000)) {
        r = 3;
    } else if (IN_ARC(a, 0x7000, 0x2000)) {
        r = 1;
    } else if (IN_ARC(a, 0x9000, 0x3000)) {
        r = 5;
    } else if (IN_ARC(a, 0xC000, 0x3000)) {
        r = 4;
    } else {
        r = 0;
    }
    return r;
}
}
