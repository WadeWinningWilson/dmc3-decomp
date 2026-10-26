extern "C" char *func_00207480(int, int, char *, int);

extern "C" void func_003E6750(char *, int, int, int);

class ObjV2F8 {
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
    virtual void d200();
    virtual void d204();
    virtual void d208();
    virtual void d20C();
    virtual void d210();
    virtual void d214();
    virtual void d218();
    virtual void d21C();
    virtual void d220();
    virtual void d224();
    virtual void d228();
    virtual void d22C();
    virtual void d230();
    virtual void d234();
    virtual void d238();
    virtual void d23C();
    virtual void d240();
    virtual void d244();
    virtual void d248();
    virtual void d24C();
    virtual void d250();
    virtual void d254();
    virtual void d258();
    virtual void d25C();
    virtual void d260();
    virtual void d264();
    virtual void d268();
    virtual void d26C();
    virtual void d270();
    virtual void d274();
    virtual void d278();
    virtual void d27C();
    virtual void d280();
    virtual void d284();
    virtual void d288();
    virtual void d28C();
    virtual void d290();
    virtual void d294();
    virtual void d298();
    virtual void d29C();
    virtual void d2A0();
    virtual void d2A4();
    virtual void d2A8();
    virtual void d2AC();
    virtual void d2B0();
    virtual void d2B4();
    virtual void d2B8();
    virtual void d2BC();
    virtual void d2C0();
    virtual void d2C4();
    virtual void d2C8();
    virtual void d2CC();
    virtual void d2D0();
    virtual void d2D4();
    virtual void d2D8();
    virtual void d2DC();
    virtual void d2E0();
    virtual void d2E4();
    virtual void d2E8();
    virtual void d2EC();
    virtual void d2F0();
    virtual void d2F4();
    virtual void m2F8(int);
};

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" void func_003F0D00(char *p) {
    float m[16];
    char *e;
    ((ObjV2F8 *)p)->m2F8(0x43);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    func_003E6750(p, 0x22, 0, 0);
    UNIT(m);
    e = func_00207480(3, 0x2C0, (char *)m, 0x10);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x6E0;
        *(unsigned char *)(e + 0x9A) = 1;
    }
}

extern "C" char D_01CAFF0C[];

extern "C" float func_001324E0(float *);

extern "C" float func_0034C200(char *, int, float);

#define VSUBR(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

typedef struct { int w[4]; } __attribute__((aligned(16))) Q16;

extern "C" Q16 D_00569E80;

extern "C" void func_003F2150(char *p) {
    float d[4];
    Q16 q;
    ((ObjV2F8 *)p)->m2F8(0x52);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    func_003E6750(p, 0x29, 0, 0);
    q = D_00569E80;
    VSUBR(d, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x710);
    *(float *)(p + 0x3A18) = func_0034C200((char *)&q, 2, func_001324E0(d));
}

extern "C" int func_0034BBE0(int, char *);

class Sub7C {
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
    virtual float m7C();
};

static inline int speed_band(char *p) {
    int k = (int)(((Sub7C *)(p + 0x130))->m7C() / 300.0f);
    if (k > 3) {
        k = 3;
    }
    if (*(unsigned char *)(p + 0x1BD) != 0) {
        k = 4;
    }
    return k;
}

extern "C" float D_00572FE0[];

extern "C" char D_00572F50[];

extern "C" void func_003EC030(char *p) {
    int k;
    ((ObjV2F8 *)p)->m2F8(0xC);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    func_003E6750(p, 0xD, 1, 5);
    *(int *)(p + 0x3A84) = func_0034BBE0(4, D_00572F50);
    *(int *)(p + 0x3A84) = *(int *)(p + 0x3A84) + 1;
    k = speed_band(p);
    *(float *)(p + 0x3A10) = D_00572FE0[k];
    *(float *)(p + 0x3A18) = 0.0f;
}

extern "C" void func_003EC600(char *p) {
    int k;
    ((ObjV2F8 *)p)->m2F8(0xE);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    func_003E6750(p, 0xC, 1, 5);
    *(int *)(p + 0x3A84) = func_0034BBE0(4, D_00572F50);
    *(int *)(p + 0x3A84) = *(int *)(p + 0x3A84) + 1;
    k = speed_band(p);
    *(float *)(p + 0x3A10) = D_00572FE0[k];
    *(float *)(p + 0x3A18) = 0.0f;
}

extern "C" int func_0024E800(char *);

extern "C" void func_00133450(char *, float *, float *);

extern "C" void func_003EB3D0(char *);

extern "C" void func_003EA030(char *);

extern "C" void func_003EADB0(char *p) {
    float a[4];
    float b[4];
    *(float *)(p + 0x710) = *(float *)(p + 0x710) - 10.0f * *(float *)(p + 0x7A0);
    *(float *)(p + 0x718) = *(float *)(p + 0x718) - 10.0f * *(float *)(p + 0x7A8);
    b[0] = *(float *)(p + 0x700);
    b[1] = *(float *)(p + 0x704);
    b[2] = *(float *)(p + 0x708);
    a[0] = 0.8f * *(float *)(p + 0x6F0) + 0.2f * *(float *)(p + 0x7A0);
    a[1] = 0.8f * *(float *)(p + 0x6F4) + 0.2f * *(float *)(p + 0x7A4);
    a[2] = 0.8f * *(float *)(p + 0x6F8) + 0.2f * *(float *)(p + 0x7A8);
    func_00133450(p + 0x6E0, a, b);
    if (func_0024E800(p + 0x1FD0) != 0) {
        if (*(unsigned char *)(p + 0x35E0) != 0) {
            func_003EB3D0(p);
        } else {
            func_003EA030(p);
        }
    }
}

extern "C" char D_005730A0[];

struct Rate18 {
    float id;
    float v[5];
};

extern "C" void func_003ED110(char *p) {
    float w[256];
    int k;
    int n;
    Rate18 *e;
    ((ObjV2F8 *)p)->m2F8(0x13);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    if (*(int *)(p + 0x1F94) != 0) {
        func_003E6750(p, 0, 0, 0);
    }
    e = (Rate18 *)D_005730A0;
    k = speed_band(p);
    for (n = 0; !(e->v[0] < 0.0f); n++) {
        w[n] = e->v[k];
        e++;
    }
    *(float *)(p + 0x3A8C) = ((Rate18 *)D_005730A0)[func_0034BBE0(n, (char *)w)].id;
    *(unsigned char *)(p + 0x36C8) = 0;
}

extern "C" void func_003E9930(char *);

extern "C" void func_002F2FB0(char *);

extern "C" char *func_002F3080(char *);

extern "C" int func_004DD520(char *, int);

extern "C" void func_003EDA10(char *p) {
    unsigned char found = 0;
    char *o;
    float m[16];
    char *e;
    func_002F2FB0(*(char **)(*(char **)D_01CAFF0C + 0x20));
    for (;;) {
        o = func_002F3080(*(char **)(*(char **)D_01CAFF0C + 0x20));
        if (o == 0) {
            break;
        }
        if (*(signed char *)(o + 0x46) == 0x1B) {
            found = 1;
        }
    }
    if (found == 0) {
        ((ObjV2F8 *)p)->m2F8(0x18);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        if (*(unsigned char *)(p + 0x36E0) == 0) {
            *(unsigned char *)(p + 0x36E0) = 1;
            if (func_004DD520(p, 1) != 0) {
                func_003E6750(p, 0x24, 0, 0);
                UNIT(m);
                e = func_00207480(3, 0x307, (char *)m, 0x10);
                if (e != 0) {
                    *(char **)(e + 0x90) = p + 0x6E0;
                    *(unsigned char *)(e + 0x9A) = 1;
                }
            } else {
                func_003E9930(p);
            }
        } else {
            func_003E9930(p);
        }
    } else {
        func_003E9930(p);
    }
}

extern "C" char D_00573000[];

extern "C" void func_003F16F0(char *p) {
    float w[256];
    int k;
    int n;
    Rate18 *e;
    ((ObjV2F8 *)p)->m2F8(0x4D);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    if (*(int *)(p + 0x1F94) != 0) {
        func_003E6750(p, 0, 0, 0);
    }
    e = (Rate18 *)D_00573000;
    k = speed_band(p);
    for (n = 0; !(e->v[0] < 0.0f); n++) {
        w[n] = e->v[k];
        e++;
    }
    *(float *)(p + 0x3A8C) = ((Rate18 *)D_00573000)[func_0034BBE0(n, (char *)w)].id;
}

extern "C" void func_00105300(char *, char *);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_003EF950(char *p) {
    float v[4];
    float len;
    ((ObjV2F8 *)p)->m2F8(0x38);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 3;
    *(unsigned char *)(p + 0x3436) = 8;
    *(unsigned char *)(p + 0x3A80) = 0;
    *(unsigned char *)(p + 0x3A81) = 0;
    *(float *)(p + 0x3A10) = 10.0f * *(float *)(p + 0x35B0);
    *(float *)(p + 0x3A14) = 10.0f * *(float *)(p + 0x35B4);
    *(float *)(p + 0x3A18) = 10.0f * *(float *)(p + 0x35B8);
    QCOPY(v, p + 0x6F0);
    len = func_001324E0(v);
    if (!(len <= 0.0f)) {
        v[0] = v[0] / len;
        v[1] = v[1] / len;
        v[2] = v[2] / len;
    }
    *(float *)(p + 0x710) = *(float *)(p + 0x710) + 150.0f * v[0];
    *(float *)(p + 0x714) = *(float *)(p + 0x714) + 150.0f * v[1];
    *(float *)(p + 0x718) = *(float *)(p + 0x718) + 150.0f * v[2];
    *(float *)(p + 0x6F0) = *(float *)(p + 0x6F0) * -1.0f;
    *(float *)(p + 0x6F4) = *(float *)(p + 0x6F4) * -1.0f;
    *(float *)(p + 0x6F8) = *(float *)(p + 0x6F8) * -1.0f;
    *(float *)(p + 0x700) = *(float *)(p + 0x700) * -1.0f;
    *(float *)(p + 0x704) = *(float *)(p + 0x704) * -1.0f;
    *(float *)(p + 0x708) = *(float *)(p + 0x708) * -1.0f;
    func_00105300(p + 0x3AB0, p + 0x6E0);
    *(float *)(p + 0x3A8C) = 0.0f;
    func_003E6750(p, 0x18, 0, 0);
}

extern "C" int func_00201770(char *, float *, char *, char *, int);

extern "C" void func_003EFDD0(char *p) {
    float pos[4];
    float hit[4];
    char buf[0x40];
    if (*(float *)(p + 0x3A94) < 0.0f && *(unsigned char *)(p + 0x3A9C) != 0) {
        QCOPY(pos, p + 0x710);
        pos[0] = pos[0] + 500.0f * *(float *)(p + 0x700);
        pos[1] = pos[1] + 500.0f * *(float *)(p + 0x704);
        pos[2] = pos[2] + 500.0f * *(float *)(p + 0x708);
        pos[1] = pos[1] + 10.0f;
        if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, pos, (char *)hit, buf, 0x10) == 1) {
            *(unsigned char *)(p + 0x3A9C) = 0;
            ((ObjV2F8 *)p)->m2F8(0x50);
            *(unsigned char *)(p + 0x3434) = 0;
            *(unsigned char *)(p + 0x3435) = 4;
            *(unsigned char *)(p + 0x3436) = 0;
            func_003E6750(p, 0x2E, 0, 0);
            *(unsigned char *)(p + 0x3437) = 0;
            *(unsigned char *)(p + 0x3438) = 0;
        }
    } else {
        ((ObjV2F8 *)p)->m2F8(0x27);
        *(unsigned char *)(p + 0x3434) = 1;
        *(unsigned char *)(p + 0x3435) = 3;
        *(unsigned char *)(p + 0x3436) = 3;
        func_003E6750(p, 0x19, 0, 0);
    }
}

extern "C" char *func_00279290(char *);

extern "C" void func_001A2180(char *, int, int);

static inline void node_clr(char *m, unsigned int i) {
    if (i < *(unsigned short *)(m + 0xA8)) {
        *(int *)(*(char **)(m + 0xBC) + i * 0x340 + 0x15C) = 0;
    }
}

extern "C" void func_003F0D90(char *p) {
    float m[16];
    char *e;
    char *mdl;
    int i;
    ((ObjV2F8 *)p)->m2F8(0x46);
    func_003E6750(p, 0x22, 0, 0);
    *(unsigned char *)(p + 0x3437) = 2;
    *(unsigned char *)(p + 0x3438) = 2;
    UNIT(m);
    e = func_00207480(3, 0x2C0, (char *)m, 0x10);
    if (e != 0) {
        *(char **)(e + 0x90) = *(char **)(*(char **)(p + 0x850) + 0x104);
        *(unsigned char *)(e + 0x9A) = 1;
    }
    func_001A2180(func_00279290(p + 0x980), 0x40, 1);
    func_001A2180(func_00279290(p + 0xF80), 0x40, 1);
    mdl = func_00279290(p + 0x980);
    for (i = 0; i < *(unsigned short *)(mdl + 0xA8); i++) {
        node_clr(mdl, i);
    }
    mdl = func_00279290(p + 0xF80);
    for (i = 0; i < *(unsigned short *)(mdl + 0xA8); i++) {
        node_clr(mdl, i);
    }
}

static inline float fsqrt(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
}

extern "C" void func_003F2800(char *p) {
    float d[4];
    float t;
    float vy;
    float g;
    float disc;
    float r;
    float len;
    char *pl;
    float y;
    float py;
    ((ObjV2F8 *)p)->m2F8(0x56);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 4;
    *(unsigned char *)(p + 0x3436) = 0;
    func_003E6750(p, 0x2D, 0, 0);
    *(float *)(p + 0x3A8C) = 250.0f;
    *(float *)(p + 0x3A18) = 0.0f;
    *(unsigned char *)(p + 0x3437) = 0;
    *(unsigned char *)(p + 0x3438) = 0;
    *(unsigned char *)(p + 0x3A80) = 0;
    *(unsigned char *)(p + 0x3A81) = 1;
    g = -2.0f;
    vy = 40.0f;
    pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
    y = *(float *)(p + 0x714);
    py = *(float *)(pl + 0x54);
    if (!(py <= y)) {
        vy = 10.0f;
        t = vy;
    } else {
        {
            float k2 = 2.0f * g * (y - py);
            disc = vy * vy - k2;
        }
        if (disc < 0.0f) {
            vy = 15.0f;
            t = 10.0f;
        } else {
            t = (-vy - fsqrt(disc)) / g;
        }
    }
    VSUBR(d, pl + 0x50, p + 0x710);
    d[1] = 0.0f;
    len = func_001324E0(d);
    if (!(len <= 700.0f)) {
        d[0] = 700.0f * (d[0] / len);
        d[2] = 700.0f * (d[2] / len);
    }
    *(float *)(p + 0x3A10) = d[0] / t;
    *(float *)(p + 0x3A14) = vy;
    *(float *)(p + 0x3A18) = d[2] / t;
    *(unsigned char *)(p + 0x3B93) = 0;
}

extern "C" {
int func_001AD140(char *p);
}

extern "C" void func_003F2E90(char *);

extern "C" void func_003F2F60(char *);

extern "C" int func_0024E780(char *, int, int);

extern "C" void func_0024E7B0(char *, int, int);

class Self1F4 {
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
    virtual void m1F4(char *, int);
};

static inline void wing_step(char *p) {
    if (*(int *)(p + 0x7D8) == 0 && *(char **)(p + 0xC8) != 0) {
        func_001AD140(*(char **)(p + 0xC8));
    }
    func_001A2180(func_00279290(p + 0x980), *(unsigned char *)(p + 0x3BF8), 1);
    func_001A2180(func_00279290(p + 0xF80), *(unsigned char *)(p + 0x3BF8), 1);
}

extern "C" void func_003F0790(char *p) {
    char *o;
    int n;
    func_003F2F60(p);
    func_003F2E90(p);
    if (*(unsigned char *)(p + 0x342C) == 0x3D) {
        switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 1)) {
        case 1:
            wing_step(p);
            *(float *)(p + 0x3BF4) = *(float *)(p + 0x3BF4) - (float)(0.0044 * *(float *)(p + 0x10));
            if (*(unsigned char *)(p + 0x3BF8) > 1) {
                *(unsigned char *)(p + 0x3BF8) = *(unsigned char *)(p + 0x3BF8) - 1;
            }
            break;
        case 3:
            func_0024E7B0(p + 0x1FD0, 0, 1);
            ((Self1F4 *)p)->m1F4(p + 0x7B0, 0);
            break;
        }
    }
    if (*(unsigned char *)(p + 0x342C) == 0x3E) {
        switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 1)) {
        case 1:
            wing_step(p);
            if (*(unsigned char *)(p + 0x3BF8) > 1) {
                *(unsigned char *)(p + 0x3BF8) = *(unsigned char *)(p + 0x3BF8) - 1;
            }
            break;
        case 2:
            func_0024E7B0(p + 0x1FD0, 0, 1);
            n = 0;
            func_002F2FB0(*(char **)(*(char **)D_01CAFF0C + 0x20));
            for (;;) {
                o = func_002F3080(*(char **)(*(char **)D_01CAFF0C + 0x20));
                if (o == 0) {
                    break;
                }
                if (*(signed char *)(o + 0x46) == 0x1B) {
                    n++;
                }
            }
            if (n <= 0) {
                func_004DD520(p, 2);
            }
            break;
        case 3:
            func_0024E7B0(p + 0x1FD0, 0, 1);
            ((Self1F4 *)p)->m1F4(p + 0x7B0, 0);
            break;
        }
    }
    if (func_0024E800(p + 0x1FD0) != 0) {
        func_001AD140(p);
    }
}

extern "C" void func_003F2D20(char *, float);

extern "C" void func_00104B80(float *, float *, float *);

extern "C" float func_00132630(float *, char *);

extern "C" float D_005702E0[];

extern "C" char D_00569E60[];

extern "C" unsigned int D_01DF8810[];

extern "C" unsigned int D_01DF7E50[];

extern "C" void func_00207A90(unsigned int *);

extern "C" void func_003F32B0(char *);

extern "C" char D_00572F60[];

static inline float frand2(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return 2.3283064e-10f * (float)y;
}

static inline void hop_pick(char *p, int fwd) {
    if (fwd) {
        ((ObjV2F8 *)p)->m2F8(0xE);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        func_003E6750(p, 0xC, 0, 0);
    } else {
        ((ObjV2F8 *)p)->m2F8(0xC);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        func_003E6750(p, 0xD, 0, 0);
    }
}

extern "C" void func_003EC110(char *p) {
    float a[4];
    float d[4];
    float w[256];
    int k;
    int n;
    float r;
    Rate18 *e;
    func_003F32B0(p);
    k = speed_band(p);
    r = D_005702E0[k];
    func_003F2D20(p, r * *(float *)(p + 0x10));
    if ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0) == 1) {
        *(float *)(p + 0x710) = *(float *)(p + 0x710) - *(float *)(p + 0x10) * (*(float *)(p + 0x6E0) * *(float *)(p + 0x3A10) + *(float *)(p + 0x700) * *(float *)(p + 0x3A18));
        *(float *)(p + 0x714) = *(float *)(p + 0x714) - *(float *)(p + 0x10) * (*(float *)(p + 0x6E4) * *(float *)(p + 0x3A10) + *(float *)(p + 0x704) * *(float *)(p + 0x3A18));
        *(float *)(p + 0x718) = *(float *)(p + 0x718) - *(float *)(p + 0x10) * (*(float *)(p + 0x6E8) * *(float *)(p + 0x3A10) + *(float *)(p + 0x708) * *(float *)(p + 0x3A18));
    }
    func_003F2F60(p);
    func_003F32B0(p);
    if (func_0024E800(p + 0x1FD0) == 0) {
        return;
    }
    *(int *)(p + 0x3A84) = *(int *)(p + 0x3A84) - 1;
    if (*(int *)(p + 0x3A84) <= 0) {
        ((ObjV2F8 *)p)->m2F8(0xF);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        *(int *)(p + 0x2170) = 0;
        e = (Rate18 *)D_00572F60;
        k = speed_band(p);
        n = 0;
        while (!(e->v[0] < 0.0f)) {
            w[n] = e->v[k];
            e++;
            n++;
        }
        *(float *)(p + 0x3A8C) = ((Rate18 *)D_00572F60)[func_0034BBE0(n, (char *)w)].id;
        return;
    }
    if (*(unsigned char *)(p + 0x3A33) < 2) {
        func_00104B80(a, (float *)(*(char **)(p + 0x3A40) + 0x6E0), (float *)(D_00569E60 + *(unsigned char *)(p + 0x3A33) * 16));
        VSUBR(d, (char *)a, p + 0x710);
        d[3] = 0.0f;
        if (!(func_00132630(d, p + 0x6F0) <= 0.0f)) {
            hop_pick(p, 1);
        } else {
            hop_pick(p, 0);
        }
    } else {
        if (!(frand2() <= 0.5f)) {
            hop_pick(p, 1);
        } else {
            hop_pick(p, 0);
        }
    }
}

extern "C" float D_005702F4[];

extern "C" void func_003EC6E0(char *p) {
    float a[4];
    float d[4];
    float w[256];
    int k;
    int n;
    float r;
    Rate18 *e;
    func_003F32B0(p);
    k = speed_band(p);
    r = D_005702F4[k];
    func_003F2D20(p, r * *(float *)(p + 0x10));
    if ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0) == 1) {
        *(float *)(p + 0x710) = *(float *)(p + 0x710) + *(float *)(p + 0x10) * (*(float *)(p + 0x6E0) * *(float *)(p + 0x3A10) + *(float *)(p + 0x700) * *(float *)(p + 0x3A18));
        *(float *)(p + 0x714) = *(float *)(p + 0x714) + *(float *)(p + 0x10) * (*(float *)(p + 0x6E4) * *(float *)(p + 0x3A10) + *(float *)(p + 0x704) * *(float *)(p + 0x3A18));
        *(float *)(p + 0x718) = *(float *)(p + 0x718) + *(float *)(p + 0x10) * (*(float *)(p + 0x6E8) * *(float *)(p + 0x3A10) + *(float *)(p + 0x708) * *(float *)(p + 0x3A18));
    }
    func_003F2F60(p);
    func_003F32B0(p);
    if (func_0024E800(p + 0x1FD0) == 0) {
        return;
    }
    *(int *)(p + 0x3A84) = *(int *)(p + 0x3A84) - 1;
    if (*(int *)(p + 0x3A84) <= 0) {
        ((ObjV2F8 *)p)->m2F8(0xF);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        *(int *)(p + 0x2170) = 0;
        e = (Rate18 *)D_00572F60;
        k = speed_band(p);
        n = 0;
        while (!(e->v[0] < 0.0f)) {
            w[n] = e->v[k];
            e++;
            n++;
        }
        *(float *)(p + 0x3A8C) = ((Rate18 *)D_00572F60)[func_0034BBE0(n, (char *)w)].id;
        return;
    }
    if (*(unsigned char *)(p + 0x3A33) < 2) {
        func_00104B80(a, (float *)(*(char **)(p + 0x3A40) + 0x6E0), (float *)(D_00569E60 + *(unsigned char *)(p + 0x3A33) * 16));
        VSUBR(d, (char *)a, p + 0x710);
        d[3] = 0.0f;
        if (!(func_00132630(d, p + 0x6F0) <= 0.0f)) {
            hop_pick(p, 1);
        } else {
            hop_pick(p, 0);
        }
    } else {
        if (!(frand2() <= 0.5f)) {
            hop_pick(p, 1);
        } else {
            hop_pick(p, 0);
        }
    }
}

extern "C" void func_00320F30(char *, char *, int);

extern "C" int func_003F3830(char *);

class O3E5 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144();
    virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158(); virtual void d15C(); virtual void d160(); virtual void d164();
    virtual void d168(); virtual void d16C(); virtual void d170(); virtual void d174(); virtual void d178(); virtual void d17C(); virtual void d180(); virtual void d184();
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194(); virtual void d198(); virtual void d19C(); virtual void d1A0(); virtual void d1A4();
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8(); virtual void d1BC(); virtual void d1C0(); virtual void d1C4();
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC(); virtual void d1E0(); virtual void d1E4();
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC();
    virtual void m2F0(int);
    virtual void d2F4(); virtual void d2F8(); virtual void d2FC(); virtual void d300(); virtual void d304(); virtual void d308(); virtual void d30C(); virtual void d310();
    virtual void m314(char *, char *);
};

extern "C" void func_003E5550(char *p, char *a, char *b) {
    if (*(unsigned char *)(p + 0x14D) != 3) {
        *(signed char *)(p + 0x3B94) = *(signed char *)(a + 0x0);
        *(signed char *)(p + 0x3B95) = *(signed char *)(a + 0x1);
        *(signed char *)(p + 0x3B96) = *(signed char *)(a + 0x2);
        *(float *)(p + 0x3B98) = *(float *)(a + 0x4);
        *(float *)(p + 0x3B9C) = *(float *)(a + 0x8);
        *(float *)(p + 0x3BA0) = *(float *)(a + 0xC);
        *(float *)(p + 0x3BA4) = *(float *)(a + 0x10);
        *(float *)(p + 0x3BA8) = *(float *)(a + 0x14);
        *(signed char *)(p + 0x3BAC) = *(signed char *)(a + 0x18);
        *(float *)(p + 0x3BB0) = *(float *)(a + 0x1C);
        *(signed char *)(p + 0x3BB4) = *(signed char *)(a + 0x20);
        *(float *)(p + 0x3BB8) = *(float *)(a + 0x24);
        *(float *)(p + 0x3BBC) = *(float *)(a + 0x28);
        *(float *)(p + 0x3BC0) = *(float *)(a + 0x2C);
        *(unsigned char *)(p + 0x3BC4) = *(unsigned char *)(a + 0x30);
        *(int *)(p + 0x3BC8) = *(int *)(a + 0x34);
        *(float *)(p + 0x3BCC) = *(float *)(a + 0x38);
        *(signed char *)(p + 0x3BD0) = *(signed char *)(a + 0x3C);
        *(signed char *)(p + 0x3BD1) = *(signed char *)(a + 0x3D);
        *(signed char *)(p + 0x3BD2) = *(signed char *)(a + 0x3E);
        func_00320F30(p + 0x130, a, (int)b);
        *(float *)(p + 0x3A98) = 10.0f;
        *(float *)(p + 0x3990) = 5.0f;
        *(unsigned char *)(p + 0x394C) = 1;
        *(float *)(p + 0x39F0) = 5.0f;
        *(unsigned char *)(p + 0x39AC) = 1;
        if (*(unsigned char *)(p + 0x35E0) == 0 && (unsigned char)func_003F3830(p) == 0 &&
            *(unsigned char *)(p + 0x3435) == 0 && *(unsigned char *)(p + 0x342C) != 0x10) {
            ((O3E5 *)p)->m2F0(0x6C);
        }
        ((O3E5 *)p)->m314(a, b);
    }
}

extern "C" char *func_002075D0(int, int, char *, int, int);

class V3EE {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144();
    virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158(); virtual void d15C(); virtual void d160(); virtual void d164();
    virtual void d168(); virtual void d16C(); virtual void d170(); virtual void d174(); virtual void d178(); virtual void d17C(); virtual void d180(); virtual void d184();
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194(); virtual void d198(); virtual void d19C(); virtual void d1A0(); virtual void d1A4();
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8(); virtual void d1BC(); virtual void d1C0(); virtual void d1C4();
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC(); virtual void d1E0(); virtual void d1E4();
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4();
    virtual void m2F8(int);
};

extern "C" void func_003EEA50(char *p) {
    float m[16] __attribute__((aligned(16)));
    char *o;
    if (*(unsigned char *)(p + 0x342C) == 0x4F) return;
    ((V3EE *)p)->m2F8(0x20);
    *(unsigned char *)(p + 0x3A80) = 0;
    *(unsigned char *)(p + 0x3A81) = 1;
    if (*(int *)(p + 0x1F94) == 6) return;
    func_003E6750(p, 6, 0, 0);
    if (*(char **)(p + 0x3BD4) != 0) return;
    UNIT(m);
    *(char **)(p + 0x3BD4) = func_002075D0(3, 0x2A1, (char *)m, 0, 0x10);
    o = *(char **)(p + 0x3BD4);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x6E0;
        *(unsigned char *)(o + 0x9A) = 0;
        char *o2 = *(char **)(p + 0x3BD4);
        *(unsigned char *)(o2 + 0x3A) = 1;
    }
}

extern "C" void func_001A5CC0(char *);

extern "C" void func_001A5B90(char *);

extern "C" void func_00138340(int);

extern "C" int D_005BE09C;

extern "C" void func_00138330(void);

extern "C" int func_001ACCF0(int, float, float, float, float);

class S3E5 {
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
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual int m1FC(unsigned char *, float *);
};

class A3E5 {
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
    virtual void mCC(char *);
};

class B3E5 {
public:
    virtual void u8();
    virtual void uC();
    virtual void m10();
};

extern "C" void func_003E5060(char *p) {
    unsigned char c;
    float x;
    unsigned char ok;
    switch (*(unsigned char *)(p + 0x342C)) {
    case 0x49:
    case 0x4A:
    case 0x4B:
        ok = 1;
        break;
    default:
        if ((unsigned char)((S3E5 *)p)->m1FC(&c, &x) == 1) {
            func_001A5CC0(func_00279290(p + 0x980));
            func_001A5CC0(func_00279290(p + 0xF80));
            func_00138340(0x40);
        } else {
            func_001A5B90(func_00279290(p + 0x980));
            func_001A5B90(func_00279290(p + 0xF80));
            func_00138330();
        }
        ok = func_001ACCF0(D_005BE09C, *(float *)(p + 0x710), 100.0f + *(float *)(p + 0x714), *(float *)(p + 0x718), 150.0f);
        break;
    }
    if (ok) {
        ((A3E5 *)(p + 0x980))->mCC(p + 0x6E0);
        ((A3E5 *)(p + 0xF80))->mCC(p + 0x6E0);
        switch (*(int *)(p + 0x7D8)) {
        case 1:
            ((B3E5 *)(p + 0x1580))->m10();
            ((B3E5 *)(p + 0x1610))->m10();
            break;
        }
    }
    switch (*(int *)(p + 0x35E4)) {
    case 1:
    case 2:
    case 3:
    case 4:
        ((A3E5 *)(p + 0x16C0))->mCC(p + 0x6E0);
        break;
    }
    if (*(unsigned char *)(p + 0x36E1)) {
        ((A3E5 *)(p + 0x16C0))->mCC(p + 0x6E0);
    }
}

extern "C" void func_003EAF00(char *);

extern "C" void func_003E9EB0(char *);

class O3EB {
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
    virtual int m88();
};

typedef struct { unsigned char b[4]; } A3EB;

typedef struct { float f[9]; } M3EB;

typedef struct { float x; float y; float z; } V3EB;

typedef struct { A3EB a; M3EB m; V3EB v; float w; } T3EB;

extern "C" int func_002018A0(char *, float *, float *, float *, T3EB *, int);

extern "C" void func_003EBE40(char *p) {
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float c[4] __attribute__((aligned(16)));
    T3EB t;
    char *e;
    func_003F32B0(p);
    func_003F2E90(p);
    *(float *)(p + 0x710) = *(float *)(p + 0x710) - 20.0f * *(float *)(p + 0x35B0);
    *(float *)(p + 0x718) = *(float *)(p + 0x718) - 20.0f * *(float *)(p + 0x35B8);
    e = *(char **)(p + 0x21FC);
    if (e != 0 && (*(int *)(e + 8) & 0x1000)) {
        func_003EAF00(p);
        return;
    }
    if ((unsigned char)func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, a, b, c, &t, 0x10) == 1) {
        *(T3EB *)(p + 0x3588) = t;
        if (((unsigned char)((*(unsigned char *)(p + 0x358B) << 8) | *(unsigned char *)(p + 0x358A)) & 0x1000) | 0x800) {
            func_003E9930(p);
            return;
        }
    } else {
        func_003E9930(p);
        return;
    }
    if (func_0024E800(p + 0x1FD0) != 0) {
        if (((O3EB *)(p + 0x130))->m88() != 0) {
            func_003E9EB0(p);
        } else {
            func_003EAF00(p);
        }
    }
}
