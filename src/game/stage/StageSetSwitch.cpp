extern "C" void func_001AD140(char *);

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" char D_00645A30[];

extern "C" char *func_0028C3A0(char *, int, int, char *);

extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern "C" void func_001AAD30(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" char *func_001B1610(int, char *);

extern "C" void func_002FBF20(char *);

extern "C" void func_001B1440(char *, char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_001B1430(char *, int);

extern "C" void func_0013D240(char *, int);

extern "C" void func_002FD2A0(char *);

class ObjF2C {

public:

    virtual void u0();

    virtual void u1();

    virtual void u2();

    virtual void u3();

    virtual void u4();

    virtual void u5();

    virtual void u6();

    virtual void u7();

    virtual void u8();

    virtual int m2C(char *, char *);

    virtual void u10();

    virtual void u11();

    virtual void u12();

    virtual void u13();

    virtual void u14();

    virtual void u15();

    virtual void u16();

    virtual void u17();

    virtual void u18();

    virtual void u19();

    virtual void u20();

    virtual void u21();

    virtual void u22();

    virtual void u23();

    virtual void u24();

    virtual void u25();

    virtual void u26();

    virtual void u27();

    virtual void u28();

    virtual void u29();

    virtual void u30();

    virtual void u31();

    virtual void u32();

    virtual void u33();

    virtual void u34();

    virtual void u35();

    virtual void u36();

    virtual void u37();

    virtual void u38();

    virtual void u39();

    virtual void u40();

    virtual void u41();

    virtual void u42();

    virtual void u43();

    virtual void u44();

    virtual void u45();

    virtual void u46();

    virtual void u47();

    virtual void u48();

    virtual void u49();

    virtual void u50();

    virtual void mD4(int);

    virtual void u52();

    virtual void u53();

    virtual void u54();

    virtual void u55();

    virtual void u56();

    virtual void u57();

    virtual void u58();

    virtual void u59();

    virtual void u60();

    virtual void u61();

    virtual void u62();

    virtual void u63();

    virtual void u64();

    virtual void u65();

    virtual void u66();

    virtual void u67();

    virtual void u68();

    virtual void u69();

    virtual void u70();

    virtual void u71();

    virtual void u72();

    virtual void u73();

    virtual void m130();

};

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" char *func_002FBC30(char *p, char *s, char *d) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char *o;
    char *e;
    if (s == 0) {
        return 0;
    }
    if (p == 0) {
        return 0;
    }
    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_001AAD30(a);
    *b.pp = func_001B0FD0(a, 0xA10, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0xA10, t);
        if (r != 0) {
            func_002FBF20(r);
        }
        func_001B1440((char *)&b, *b.pp, a);
        func_001959E0(D_00645A30, 0x3, *b.pp);
        func_001B1430(*b.pp, 1);
        goto ok;
    }
    *b.pp = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        if ((unsigned char)((ObjF2C *)(ret + 0xE0))->m2C(s, p) == 0) {
            func_001AD140(ret);
            return 0;
        }
        ((ObjF2C *)(ret + 0xE0))->mD4(1);
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(ret + 0x520) : "memory");
        func_001318E0(ret + 0x520, ret + 0x520, d + 0x30);
        func_00131700(ret + 0x520, ret + 0x520, d + 0x20);
        func_00105230(ret + 0x520, ret + 0x520, d + 0x10);
        *(unsigned char *)(ret + 0x7C0) = 6;
        *(unsigned char *)(ret + 0x7C1) = 0;
        *(short *)(ret + 0x7C2) = 0;
        *(unsigned char *)(ret + 0x7D0) = 2;
        *(int *)(ret + 0x7E0) = 0;
        *(int *)(ret + 0x7E4) = 0;
        *(float *)(ret + 0x7E8) = -20.0f;
        *(float *)(ret + 0x7EC) = 1.0f;
        *(float *)(ret + 0x7F0) = 60.0f;
        o = ret;
        func_0028C200(o + 0x5A0, o + 0x7C0, o + 0x7D0, 4, 0, o, 0);
        func_0028C3A0(ret + 0x5A0, 0, -1, ret + 0x560);
        if ((e = *(char **)(ret + 0x61C)) != 0) {
            *(unsigned char *)(e + 5) = 0xD;
            *(int *)(e + 0xC) = 0xF001;
        }
        *(unsigned char *)(ret + 0x827) = *(int *)(d + 0x4C);
        *(unsigned char *)(ret + 0x82A) = *(unsigned char *)(d + 0x40);
        *(int *)(ret + 0x82C) = *(int *)(d + 0x44);
        *(int *)(ret + 0x830) = *(int *)(d + 0x48);
        func_002FD2A0(ret);
        *(unsigned char *)(ret + 0x820) = 1;
    }
    return ret;
}

extern "C" char D_01DFABA0[];

extern "C" void func_003305E0(char *, int, int, char *, int, int, int);

extern "C" float func_0034C160(float, float, float);

extern "C" void func_002FD5F0(char *);

extern "C" void func_002FD660(char *);

extern "C" void func_002FDDD0(char *, int);

class V68 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual float f();
};

#define GETPOS(d,m) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(m) : "memory")

extern "C" void func_002FD140(char *p, char *h, V68 *o) {
    float v[4] __attribute__((aligned(16)));
    float s;
    if (h != 0 && o != 0 && *(signed char *)(h + 2) == 0 && *(unsigned char *)(p + 0x821) == 0) {
        s = *(float *)(h + 4) * o->f();
        if (*(float *)(p + 0x844) < 300.0f) {
            *(float *)(p + 0x844) = func_0034C160(*(float *)(p + 0x844), 301.0f, s);
            if (*(float *)(p + 0x844) > 100.0f) {
                *(float *)(p + 0x848) = func_0034C160(*(float *)(p + 0x848), 201.0f, s);
            }
        } else {
            *(float *)(p + 0x84C) = func_0034C160(*(float *)(p + 0x84C), 561.0f, s);
        }
        *(float *)(p + 0x834) = 120.0f;
        *(unsigned char *)(p + 0x823) = 0;
        func_002FD5F0(p);
        func_002FD660(p);
        func_002FDDD0(p, 3);
        GETPOS(v, p + 0x560);
        v[3] = 1.0f;
        func_003305E0(D_01DFABA0, 8, 0x14, (char *)v, 0x20, 0, 0);
    }
}

extern "C" {
void func_002FC180(void);
}

class VD0_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_002FC140(int p0) {
    int tmp0;
    func_002FC180();
    tmp0 = ((VD0_0_i *)(p0 + 224))->m();
    return tmp0;
}
}

extern "C" {
int func_001AD100(void);
}

extern "C" {
int func_002FC2B0(char *);
}

extern "C" {
int func_002FC4F0(char *);
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
int func_002FC220(char *p0) {
    int v2;
    char *v0;
    int v1;
    int tmp0;
    v0 = p0;
    if (*(unsigned char *)(p0 + 2080) != 0) {
        v2 = func_001AD100();
        v1 = *(unsigned char *)(v0 + 4);
        tmp0 = 2;
        if (tmp0 != v1) {
            switch (v1) {
            case 0:
                v2 = func_002FC2B0(v0);
                break;
            case 1:
                v2 = ((V130_0_i *)v0)->m();
                *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
                break;
            }
        } else {
            v2 = func_002FC4F0(v0);
        }
    }
    return v2;
}
}

/* AUTO-GENERATED by tools/gen_clones.py: copies of functions in src/game/stage/Stage.cpp
 * with their constants and symbols substituted, verified byte-for-byte. */
class SubCCc {
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
    virtual int mCC(char *);
};

extern "C" {
extern "C" void func_002FDFD0(char *p) {
    ((SubCCc *)(p + 0xE0))->mCC(p + 0x560);
}
}
