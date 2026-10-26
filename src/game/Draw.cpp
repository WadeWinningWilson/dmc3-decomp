class Obj64 {
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
    virtual void m64();
};

static inline char *cur_key(char *p, int f, int n, int k) {
    if (*(unsigned char *)(p + f) != 0 && 0 < *(int *)(p + n)) {
        return **(char ***)(p + k);
    }
    return 0;
}

extern "C" void func_0027A120(char *p) {
    if (*(unsigned char *)(p + 0xB) != 0) {
        ((Obj64 *)(p + 0x400))->m64();
        *(float *)(p + 0x5A0) = *(float *)(cur_key(p, 0x4AC, 0x410, 0x414) + 0x10C);
        *(float *)(p + 0x5A4) = *(float *)(cur_key(p, 0x4AC, 0x410, 0x414) + 0x120);
        *(float *)(p + 0x5A8) = *(float *)(cur_key(p, 0x4AC, 0x410, 0x414) + 0x134);
        *(float *)(p + 0x5AC) = 1.0f;
        __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0
	sqc2 $vf20, 0x0(%0)" : : "r"(p + 0x5B0) : "memory");
    }
}

extern "C" void func_0027B450(char *p) {
    if (*(unsigned char *)(p + 0xB) != 0) {
        ((Obj64 *)(p + 0x270))->m64();
        *(float *)(p + 0x410) = *(float *)(cur_key(p, 0x31C, 0x280, 0x284) + 0x10C);
        *(float *)(p + 0x414) = *(float *)(cur_key(p, 0x31C, 0x280, 0x284) + 0x120);
        *(float *)(p + 0x418) = *(float *)(cur_key(p, 0x31C, 0x280, 0x284) + 0x134);
        *(float *)(p + 0x41C) = 1.0f;
        __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0
	sqc2 $vf20, 0x0(%0)" : : "r"(p + 0x420) : "memory");
    }
}

class Obj400 {
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
    virtual void m64(char *);
};

static inline char *seg_at(char *t, unsigned int i) {
    if (*(unsigned int *)(t + 4) < i + 1) {
        return 0;
    }
    if (((int *)(t + 8))[i] == 0) {
        return 0;
    }
    return t + ((int *)(t + 8))[i];
}

static inline char *cur_400(char *p) {
    if (*(unsigned char *)(p + 0x4AC) != 0 && 0 < *(int *)(p + 0x410)) {
        return **(char ***)(p + 0x414);
    }
    return 0;
}

extern "C" void func_00279980(char *p, unsigned int a1, int a2, int a3, char *t) {
    char *v;
    if (*(unsigned char *)(p + 0xB) != 0) {
        if (t == 0) {
            t = *(char **)(p + 0x10);
        }
        ((Obj400 *)(p + 0x400))->m64(seg_at(t, a1));
        *(float *)(p + 0x5A0) = *(float *)(cur_400(p) + 0x10C);
        *(float *)(p + 0x5A4) = *(float *)(cur_400(p) + 0x120);
        *(float *)(p + 0x5A8) = *(float *)(cur_400(p) + 0x134);
        *(float *)(p + 0x5AC) = 1.0f;
        v = p + 0x5B0;
        __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0
	sqc2 $vf20, 0x0(%0)" : : "r"(v) : "memory");
    }
}

static inline char *cur_270(char *p) {
    if (*(unsigned char *)(p + 0x31C) != 0 && 0 < *(int *)(p + 0x280)) {
        return **(char ***)(p + 0x284);
    }
    return 0;
}

extern "C" void func_0027ACE0(char *p, unsigned int a1, int a2, int a3, char *t) {
    char *v;
    if (*(unsigned char *)(p + 0xB) != 0) {
        if (t == 0) {
            t = *(char **)(p + 0x10);
        }
        ((Obj400 *)(p + 0x270))->m64(seg_at(t, a1));
        *(float *)(p + 0x410) = *(float *)(cur_270(p) + 0x10C);
        *(float *)(p + 0x414) = *(float *)(cur_270(p) + 0x120);
        *(float *)(p + 0x418) = *(float *)(cur_270(p) + 0x134);
        *(float *)(p + 0x41C) = 1.0f;
        v = p + 0x420;
        __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0
	sqc2 $vf20, 0x0(%0)" : : "r"(v) : "memory");
    }
}

#define VZERO20(d) __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"(d) : "memory")

static inline char *list_item(char *o, int i) {
    char *r;
    if (*(unsigned char *)(o + 0xAC) != 0 && 0 <= i && i < *(int *)(o + 0x10)) {
        r = *(char **)(*(char **)(o + 0x14) + i * 4);
    } else {
        r = 0;
    }
    return r;
}

class ObjMd68 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void m68();
};

extern "C" void func_0027A220(char *p, int a) {
    if (*(unsigned char *)(p + 0xB) != 0) {
        ((ObjMd68 *)(p + 0x400))->m68();
        if (a == 0) {
            *(float *)(p + 0x5A0) = *(float *)(list_item(p + 0x400, 0) + 0x10C);
            *(float *)(p + 0x5A4) = *(float *)(list_item(p + 0x400, 0) + 0x120);
            *(float *)(p + 0x5A8) = *(float *)(list_item(p + 0x400, 0) + 0x134);
            *(float *)(p + 0x5AC) = 1.0f;
            VZERO20(p + 0x5B0);
        }
    }
}

extern "C" void func_0027B550(char *p, int a) {
    if (*(unsigned char *)(p + 0xB) != 0) {
        ((ObjMd68 *)(p + 0x270))->m68();
        if (a == 0) {
            *(float *)(p + 0x410) = *(float *)(list_item(p + 0x270, 0) + 0x10C);
            *(float *)(p + 0x414) = *(float *)(list_item(p + 0x270, 0) + 0x120);
            *(float *)(p + 0x418) = *(float *)(list_item(p + 0x270, 0) + 0x134);
            *(float *)(p + 0x41C) = 1.0f;
            VZERO20(p + 0x420);
        }
    }
}

class V68b {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23(); virtual void f(int, char *);
};

static inline char *func_00279AD0_t(char *t, int i) {
    int v;
    if (*(unsigned int *)(t + 4) < i + 1U) return 0;
    v = *(int *)((char *)(i * 4) + (int)t + 8);
    if (v == 0) return 0;
    return t + v;
}

static inline char *func_00279AD0_g(char *p) {
    if (*(unsigned char *)(p + 0x4AC) != 0 && 0 < *(int *)(p + 0x410)) return **(char ***)(p + 0x414);
    return 0;
}

extern "C" void func_00279AD0(char *p, int x, int i, int a3, int t0, char *t) {
    if (*(unsigned char *)(p + 0xB) == 0) return;
    if (t == 0) t = *(char **)(p + 0x10);
    ((V68b *)(p + 0x400))->f(x, func_00279AD0_t(t, i));
    if (x != 0) return;
    *(float *)(p + 0x5A0) = *(float *)(func_00279AD0_g(p) + 0x10C);
    *(float *)(p + 0x5A4) = *(float *)(func_00279AD0_g(p) + 0x120);
    *(float *)(p + 0x5A8) = *(float *)(func_00279AD0_g(p) + 0x134);
    *(float *)(p + 0x5AC) = 1.0f;
    VZERO20(p + 0x5B0);
}

class V68c {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23(); virtual void f(int, char *);
};

static inline char *func_0027AE30_t(char *t, int i) {
    int v;
    if (*(unsigned int *)(t + 4) < i + 1U) return 0;
    v = *(int *)((char *)(i * 4) + (int)t + 8);
    if (v == 0) return 0;
    return t + v;
}

static inline char *func_0027AE30_g(char *p) {
    if (*(unsigned char *)(p + 0x31C) != 0 && 0 < *(int *)(p + 0x280)) return **(char ***)(p + 0x284);
    return 0;
}

extern "C" void func_0027AE30(char *p, int x, int i, int a3, int t0, char *t) {
    if (*(unsigned char *)(p + 0xB) == 0) return;
    if (t == 0) t = *(char **)(p + 0x10);
    ((V68c *)(p + 0x270))->f(x, func_0027AE30_t(t, i));
    if (x != 0) return;
    *(float *)(p + 0x410) = *(float *)(func_0027AE30_g(p) + 0x10C);
    *(float *)(p + 0x414) = *(float *)(func_0027AE30_g(p) + 0x120);
    *(float *)(p + 0x418) = *(float *)(func_0027AE30_g(p) + 0x134);
    *(float *)(p + 0x41C) = 1.0f;
    VZERO20(p + 0x420);
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

class V279 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68();
    virtual int m6C();
    virtual int m70();
    virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90();
    virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual void dB4();
    virtual int mB8(int);
};

#define VSUB3I(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tlqc2 $vf6, 0x0(%0)\n\tvsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

static inline char *list_item279(char *o, int i) {
    char *r;
    if (*(unsigned char *)(o + 0xAC) != 0 && 0 <= i && i < *(int *)(o + 0x10)) {
        r = *(char **)(*(char **)(o + 0x14) + i * 4);
    } else {
        r = 0;
    }
    return r;
}

extern "C" int func_00279C40(char *p) {
    float v[4] __attribute__((aligned(16)));
    int r;
    if (*(unsigned char *)(p + 0xB) == 0) return 0;
    r = ((V279 *)(p + 0x400))->m6C();
    if ((unsigned char)r == 4 && (unsigned char)((V279 *)(p + 0x400))->mB8(0) == 1) {
        VZERO20(p + 0x5A0);
    }
    v[0] = *(float *)(list_item279(p + 0x400, 0) + 0x10C);
    v[1] = *(float *)(list_item279(p + 0x400, 0) + 0x120);
    v[2] = *(float *)(list_item279(p + 0x400, 0) + 0x134);
    v[3] = 1.0f;
    VSUB3I(p + 0x5B0, v, p + 0x5A0);
    QCOPY(p + 0x5A0, v);
    return r;
}

extern "C" int func_00279DD0(char *p, int k) {
    float v[4] __attribute__((aligned(16)));
    int r;
    if (*(unsigned char *)(p + 0xB) == 0) return 0;
    r = ((V279 *)(p + 0x400))->m70();
    if (k == 0) {
    if ((unsigned char)r == 4 && (unsigned char)((V279 *)(p + 0x400))->mB8(k) == 1) {
        VZERO20(p + 0x5A0);
    }
    v[0] = *(float *)(list_item279(p + 0x400, 0) + 0x10C);
    v[1] = *(float *)(list_item279(p + 0x400, 0) + 0x120);
    v[2] = *(float *)(list_item279(p + 0x400, 0) + 0x134);
    v[3] = 1.0f;
    VSUB3I(p + 0x5B0, v, p + 0x5A0);
    QCOPY(p + 0x5A0, v);
    }
    return r;
}

extern "C" int func_0027AFA0(char *p) {
    float v[4] __attribute__((aligned(16)));
    int r;
    if (*(unsigned char *)(p + 0xB) == 0) return 0;
    r = ((V279 *)(p + 0x270))->m6C();
    if ((unsigned char)r == 4 && (unsigned char)((V279 *)(p + 0x270))->mB8(0) == 1) {
        VZERO20(p + 0x410);
    }
    v[0] = *(float *)(list_item279(p + 0x270, 0) + 0x10C);
    v[1] = *(float *)(list_item279(p + 0x270, 0) + 0x120);
    v[2] = *(float *)(list_item279(p + 0x270, 0) + 0x134);
    v[3] = 1.0f;
    VSUB3I(p + 0x420, v, p + 0x410);
    QCOPY(p + 0x410, v);
    return r;
}

extern "C" int func_0027B130(char *p, int k) {
    float v[4] __attribute__((aligned(16)));
    int r;
    if (*(unsigned char *)(p + 0xB) == 0) return 0;
    r = ((V279 *)(p + 0x270))->m70();
    if (k == 0) {
    if ((unsigned char)r == 4 && (unsigned char)((V279 *)(p + 0x270))->mB8(k) == 1) {
        VZERO20(p + 0x410);
    }
    v[0] = *(float *)(list_item279(p + 0x270, 0) + 0x10C);
    v[1] = *(float *)(list_item279(p + 0x270, 0) + 0x120);
    v[2] = *(float *)(list_item279(p + 0x270, 0) + 0x134);
    v[3] = 1.0f;
    VSUB3I(p + 0x420, v, p + 0x410);
    QCOPY(p + 0x410, v);
    }
    return r;
}
