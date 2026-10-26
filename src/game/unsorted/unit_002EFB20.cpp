class Obj114 {
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
    virtual void m114(unsigned char);
};

static inline Obj114 *it_next(char *p) {
    Obj114 *o;
    char *n = *(char **)(p + 0x83C);
    bool e = !(n != 0);
    o = 0;
    if (!e) {
        o = *(Obj114 **)n;
        *(char **)(p + 0x83C) = *(char **)(n + 4);
    }
    return o;
}

extern "C" void func_002F2260(char *p, unsigned char k) {
    Obj114 *o;
    if (*(unsigned char *)(p + 0x19) != k) {
        *(char **)(p + 0x83C) = *(char **)(p + 0x834);
        while ((o = it_next(p)) != 0) {
            o->m114(k);
        }
        *(unsigned char *)(p + 0x19) = k;
    }
}

extern "C" signed char D_0054A041[];

extern "C" char *func_002871E0(int, int, int);

extern "C" void func_002A4DA0(char *);

extern "C" void func_002A4DE0(char *, int);

class ObjEn198 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void d49(); virtual void d50(); virtual void d51(); virtual void d52(); virtual void d53();
    virtual void d54(); virtual void d55(); virtual void d56(); virtual void d57(); virtual void d58(); virtual void d59();
    virtual void d60(); virtual void d61(); virtual void d62(); virtual void d63(); virtual void d64(); virtual void d65();
    virtual void d66(); virtual void m114(int); virtual void d68(); virtual void d69(); virtual void d70(); virtual void d71();
    virtual void d72(); virtual void d73(); virtual void d74(); virtual void d75(); virtual void d76(); virtual void d77();
    virtual void d78(); virtual void d79(); virtual void d80(); virtual void d81(); virtual void d82(); virtual void d83();
    virtual void d84(); virtual void d85(); virtual void d86(); virtual void d87(); virtual void d88(); virtual void d89();
    virtual void d90(); virtual void d91(); virtual void d92(); virtual void d93(); virtual void d94(); virtual void d95();
    virtual void d96(); virtual void d97(); virtual void d98(); virtual void d99(); virtual void m198();
};

extern "C" ObjEn198 *func_002A4E40(char *, signed char *, int);

extern "C" ObjEn198 *func_002F2850(char *p, signed char *a) {
    char it[4];
    char *r;
    ObjEn198 *o;
    r = func_002871E0(*(int *)p, 5, D_0054A041[*a * 2]);
    func_002A4DA0(it);
    o = func_002A4E40(it, a, *(int *)(r + 0xC));
    if (o != 0) {
        if (*(unsigned char *)(p + 0x18) != 0) {
            o->m198();
        }
        o->m114(*(unsigned char *)(p + 0x19));
        *(float *)(p + 0x898) = *(float *)(p + 0x898) + 1.0f;
    }
    func_002A4DE0(it, -1);
    return o;
}

extern "C" void func_00228300(char *);

static inline char *list_next(char *p) {
    int *n = *(int **)(p + 0x1020);
    bool e = !(n != 0);
    char *o = 0;
    if (!e) {
        o = (char *)n[0];
        *(int *)(p + 0x1020) = n[1];
    }
    return o;
}

extern "C" void func_002F0650(char *p) {
    char *o;
    *(int *)(p + 0x1020) = *(int *)(p + 0x1018);
    while ((o = list_next(p)) != 0) {
        func_00228300(o + 8);
        if (*(int *)(o + 8) == 0) {
            int *a = *(int **)(p + 0x1018);
            if (a != 0) {
                if ((char *)a[0] == o) {
                    *(int *)(p + 0x1018) = a[1];
                    a[1] = *(int *)(p + 0x101C);
                    *(int **)(p + 0x101C) = a;
                } else {
                    int *c = (int *)a[1];
                    while (c != 0) {
                        if ((char *)c[0] == o) {
                            a[1] = c[1];
                            c[1] = *(int *)(p + 0x101C);
                            *(int **)(p + 0x101C) = c;
                            break;
                        }
                        a = c;
                        c = (int *)c[1];
                    }
                }
            }
        }
    }
}

extern "C" unsigned int func_002F1EF0(void);

extern "C" char *func_002F14E0(char *);

extern "C" int func_002F1B20(char *, char *, int, bool);

static inline char *list_next2(char *p) {
    int *n = *(int **)(p + 0x1020);
    char *o = 0;
    if (n != 0) {
        o = (char *)n[0];
        *(int *)(p + 0x1020) = n[1];
    }
    return o;
}

extern "C" {
int func_002F1900(char *p, int a) {
    extern char D_01CAFF0C[];
    char *e;
    char *o;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) {
        return 0;
    }
    if (func_002F1EF0() >= 10) {
        return 0;
    }
    e = func_002F14E0(p);
    if (e != 0 && (unsigned char)func_002F1B20(p, e, a, 0) == 1) {
        return 1;
    }
    *(int *)(p + 0x1020) = *(int *)(p + 0x1018);
    while ((o = list_next2(p)) != 0) {
        if ((unsigned char)func_002F1B20(p, o, a, 0) == 1) {
            return 1;
        }
    }
    return 0;
}
}

class Obj1E0 {
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
    virtual float m1E0(int);
};

static inline unsigned char kill_remove(char *p, char *o) {
    int *a = *(int **)(p + 0x834);
    if (a != 0) {
        int *c;
        if ((char *)a[0] == o) {
            *(int *)(p + 0x834) = a[1];
            a[1] = *(int *)(p + 0x838);
            *(int **)(p + 0x838) = a;
            return 1;
        }
        for (c = (int *)a[1]; c != 0; c = (int *)c[1]) {
            if ((char *)c[0] == o) {
                a[1] = c[1];
                c[1] = *(int *)(p + 0x838);
                *(int **)(p + 0x838) = c;
                return 1;
            }
            a = c;
        }
    }
    return 0;
}

extern "C" void func_002F2D30(char *p, Obj1E0 *ob) {
    char *o = (char *)ob;
    if (kill_remove(p, o) == 1) {
        *(int *)(p + 0x1C) -= 1;
        if (*(signed char *)(o + 0x46) == 0x1B) {
            *(int *)(p + 0x20) -= 1;
        }
        *(float *)(p + 0x898) = *(float *)(p + 0x898) - 1.0f;
        if (*(int *)(p + 0x1C) == 0) {
            *(float *)(p + 0x898) = 0.0f;
        }
        *(int *)(p + 0x8A0) += 1;
    }
}

extern "C" {
int func_002F1A00(char *p, int a) {
    extern char D_01CAFF0C[];
    bool f = false;
    unsigned int n;
    char *e;
    char *o;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1) {
        return 0;
    }
    n = func_002F1EF0();
    if (n >= 10) {
        return 0;
    }
    if (n != 0) {
        f = true;
    } else {
        e = func_002F14E0(p);
        if (e != 0 && (unsigned char)func_002F1B20(p, e, a, false) == 1) {
            return 1;
        }
    }
    *(int *)(p + 0x1020) = *(int *)(p + 0x1018);
    while ((o = list_next2(p)) != 0) {
        if ((unsigned char)func_002F1B20(p, o, a, f) == 1) {
            return 1;
        }
    }
    return 0;
}
}

static inline bool push2F2(char *p, char *e) {
    char *n = *(char **)(p + 0x838);
    if (n != 0) {
        *(char **)(p + 0x838) = *(char **)(n + 4);
        *(char **)n = e;
        *(char **)(n + 4) = *(char **)(p + 0x834);
        *(char **)(p + 0x834) = n;
        return true;
    }
    return false;
}

extern "C" {
void func_002F2E30(char *p, char *e) {
    extern char *D_01CAFF0C[];
    if (push2F2(p, e) != 0) {
        char *b;
        int k;
        *(int *)(p + 0x1C) = *(int *)(p + 0x1C) + 1;
        b = *(char **)(D_01CAFF0C[0] + 4);
        k = *(signed char *)(e + 0x46);
        ((int *)(b + 0x64))[k / 32] |= 1 << (k & 0x1F);
        if (*(signed char *)(e + 0x46) == 0x1B) *(int *)(p + 0x20) = *(int *)(p + 0x20) + 1;
    }
}
}

class V2F21 {
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
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194();
    virtual void m198();
};

static inline char *nx_2F21(char *p) {
    char *r = 0;
    char *n = *(char **)(p + 0x83C);
    if (((n != 0) ^ 1) == 0) {
        r = *(char **)n;
        *(char **)(p + 0x83C) = *(char **)(n + 4);
    }
    return r;
}

extern "C" void func_002F21E0(char *p) {
    char *e;
    *(char **)(p + 0x83C) = *(char **)(p + 0x834);
    while ((e = nx_2F21(p)) != 0) {
        ((V2F21 *)e)->m198();
    }
    *(unsigned char *)(p + 0x18) = 1;
}

extern "C" {
int func_002F2AA0(void);
}

class VC_1_ii {
public:
    virtual void d0();
    virtual int m(int);
};

extern "C" {
int func_002F2130(char *p0, int p1, int p2) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    v1 = p1;
    v2 = p2;
    if (*(int *)(p0 + 4) != 0) {
        v3 = func_002F2AA0();
        if ((v3 & 255) != 0) {
            *(int *)(v0 + 12) = v1;
            v4 = 1;
            *(char *)(v0 + 27) = v4;
            if ((v2 & 255) == v4) {
                *(char *)(v0 + 24) = 0;
            } else {
                *(char *)(v0 + 24) = v4;
            }
            v3 = ((VC_1_ii *)(v0 + 2112))->m(10);
            *(int *)(v0 + 2208) = 0;
            *(int *)(v0 + 36) = 0;
        }
    }
    return v3;
}
}
