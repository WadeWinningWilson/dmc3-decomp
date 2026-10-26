class Obj0D0 {
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

extern "C" char D_00666750[];

extern "C" void func_001AF080(char *, int);

/* Releases the handle at +0x38 back to the pool, then notifies the sub-object at +0x40. */
extern "C" void func_00503F40(char *p) {
    if (*(int *)(p + 0x38) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x38));
        *(int *)(p + 0x38) = 0;
    }
    ((Obj0D0 *)(p + 0x40))->mD0();
}

extern "C" void func_0013D6A0(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_0013D240(char *, int);

extern "C" char D_00645A30[];

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" void func_005039C0(char *);

extern "C" char *func_00503AE0(int p0, int p1, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x700, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_005039C0(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x2C, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(int *)(ret + 0x38) = p0;
        *(float *)(ret + 0x6C0) = f;
        *(int *)(ret + 0x6C4) = p1;
    }
    return ret;
}

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001AD140(char *);

extern "C" char D_005BE098[8];

extern "C" void func_00195E20(char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

class O503 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void m24(int);
    virtual void u28();
    virtual int m2C(char *, char *);
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void m3C(int);
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
    virtual void m84(int, int);
    virtual void u88();
    virtual void m8C();
};

static inline char *ent503(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch503(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent503(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" void func_00503C10(char *p) {
    char *a;
    char *b;
    float f;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 0x640) = 0;
        *(float *)(p + 0x650) = 0.0f;
        *(float *)(p + 0x654) = 0.0f;
        *(float *)(p + 0x658) = 0.0f;
        *(float *)(p + 0x65C) = 1.0f;
        *(float *)(p + 0x660) = 0.0f;
        *(float *)(p + 0x664) = 0.0f;
        *(float *)(p + 0x668) = 0.0f;
        *(float *)(p + 0x66C) = 1.0f;
        *(float *)(p + 0x670) = 1.0f;
        *(float *)(p + 0x674) = 1.0f;
        *(float *)(p + 0x678) = 1.0f;
        *(float *)(p + 0x67C) = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x680) : "memory");
        func_00131700(p + 0x680, p + 0x680, p + 0x660);
        func_00105230(p + 0x680, p + 0x680, p + 0x650);
        func_001318E0(p + 0x680, p + 0x680, p + 0x670);
        a = gch503(*(char **)(p + 0x38), 0);
        b = gch503(*(char **)(p + 0x38), 1);
        ((O503 *)(p + 0x40))->m24(1);
        if (!(unsigned char)((O503 *)(p + 0x40))->m2C(a, b)) goto fail;
        ((O503 *)(p + 0x40))->m3C(0);
        *(unsigned char *)(p + 0x6C8) = 4;
        *(unsigned char *)(p + 4) = 1;
    case 1:
        *(unsigned char *)(p + 0x6C8) += 4;
        if (*(unsigned char *)(p + 0x6C8) < 0x40) {
            ((O503 *)(p + 0x40))->m84(*(unsigned char *)(p + 0x6C8), 1);
        } else {
            ((O503 *)(p + 0x40))->m8C();
            *(unsigned char *)(p + 4) = 2;
        }
        break;
    case 2:
        f = *(float *)(p + 0x6C0);
        if (!(f < 0.0f)) {
            if ((*(float *)(p + 0x6C0) = f - 1.0f) < 0.0f) {
                *(float *)(p + 0x6C0) = 0.0f;
                *(unsigned char *)(p + 0x6C8) = 0x40;
                ((O503 *)(p + 0x40))->m84(*(unsigned char *)(p + 0x6C8), 1);
                *(unsigned char *)(p + 4) = 3;
            }
        }
        break;
    case 3:
        *(unsigned char *)(p + 0x6C8) -= 4;
        if (0 < *(unsigned char *)(p + 0x6C8)) {
            ((O503 *)(p + 0x40))->m84(*(unsigned char *)(p + 0x6C8), 1);
        } else {
            *(unsigned char *)(p + 4) = 4;
        }
        break;
    case 4:
        break;
    }
    if (*(unsigned char *)(p + 4) != 4) {
        func_00195E20(D_005BE098, p);
    }
    return;
fail:
    func_001AD140(p);
    *(unsigned char *)(p + 4) = 4;
}

extern "C" void func_00503FB0(void) {}

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
extern "C" void func_00503F90(char *p) {
    ((SubCCc *)(p + 0x40))->mCC(p + 0x680);
}
}
