/* Emits two effects for every active entry pair (sub-object at +0x130 gives the rate). */
class Sub130 {
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
    virtual void m6C();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual float m7C();
    virtual int m80(float);
    virtual void d31();
    virtual int m88();
};

extern "C" Sub130 *func_002792A0(char *);

class ObjBlend34 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void m1C(float);
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual float m34();
};

extern "C" ObjBlend34 *func_0027A720(char *);

extern "C" char *func_00215A00(char *, short);

extern "C" short func_00211740(char *);

extern "C" char *func_002109C0(char *p, int i);

class VB4 {
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
    virtual void mB4();
};

extern "C" int func_0021AF30(char *a, short b, short k) {
    char *t;
    char *e;
    char *o;
    int r;
    int i;
    t = func_00215A00(a, b);
    r = 0;
    for (i = 0; i < func_00211740(t); i++) {
        e = func_002109C0(t, i);
        if (e != 0 && (o = *(char **)(e + 0x18)) != 0) {
            switch (*(signed char *)(o + 0x1000)) {
            case 0:
            case 1:
                ((VB4 *)func_002792A0(o + 0x40))->mB4();
                break;
            case 2:
                ((VB4 *)func_0027A720(o + 0x640))->mB4();
                break;
            }
            r = *(int *)((char *)(k * 4) + (int)o + 0xB10);
            break;
        }
    }
    return r;
}

extern "C" int func_0022CBA0(char *);

extern "C" void func_0022CBB0(char *, char *);

extern "C" int func_0012B1A0(char *, char *);

extern "C" void func_0022CB30(char *);

extern "C" int func_0012BA60(char *, char *);

extern "C" void func_0012ACE8(char *, char *, ...);

extern "C" void func_00230130(char *, char *, char *);

extern "C" char D_005BBC40[8];

extern "C" char D_005BBB40[8];

extern "C" char D_005BBC48[8];

extern "C" {
int func_00218050(char *p, char *f) {
    extern void func_0022CB50(char *, char *);
    extern char D_005BBB38[8];
    char r[16];
    char tok[256];
    char buf[256];
    func_0022CB30(r);
    func_0022CB50(r, f);
    while (!(bool)func_0022CBA0(r)) {
        func_0022CBB0(r, tok);
        if (func_0012BA60(tok, D_005BBC40) != 0) {
            func_0022CBB0(r, tok);
            if (func_0012BA60(tok, D_005BBB40) != 0) {
                for (;;) {
                    func_0022CBB0(r, tok);
                    if ((bool)func_0012BA60(tok, D_005BBC40)) {
                        func_0022CBB0(r, tok);
                        if (func_0012BA60(tok, D_005BBB38) != 0) break;
                    }
                    func_0012ACE8(buf, D_005BBC48);
                    func_00230130(p + 0x3308, buf, tok);
                }
            } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
                break;
            }
        }
    }
    return 1;
}
}

extern "C" char D_005BBB48[8];

extern "C" char D_005BBC50[8];

extern "C" void func_0022F9F0(char *, char *, char *);

extern "C" {
int func_00218190(char *p, char *f) {
    extern void func_0022CB50(char *, char *);
    extern char D_005BBB38[8];
    char r[16];
    char tok[256];
    char buf[256];
    func_0022CB30(r);
    func_0022CB50(r, f);
    while (!(bool)func_0022CBA0(r)) {
        func_0022CBB0(r, tok);
        if (func_0012BA60(tok, D_005BBC40) != 0) {
            func_0022CBB0(r, tok);
            if (func_0012BA60(tok, D_005BBB48) != 0) {
                for (;;) {
                    func_0022CBB0(r, tok);
                    if ((bool)func_0012BA60(tok, D_005BBC40)) {
                        func_0022CBB0(r, tok);
                        if (func_0012BA60(tok, D_005BBB38) != 0) break;
                    }
                    func_0012ACE8(buf, D_005BBC50, p + 0x18);
                    func_0022F9F0(p + 0x850C, buf, tok);
                }
            } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
                break;
            }
        }
    }
    return 1;
}
}

extern "C" char D_005BBB68[8];

extern "C" {
int func_00219FD0(char *p, char *f) {
    extern void func_0022CB50(char *, char *);
    extern char D_005BBB38[8];
    char r[16];
    char tok[256];
    char buf[256];
    func_0022CB30(r);
    func_0022CB50(r, f);
    while (!(bool)func_0022CBA0(r)) {
        func_0022CBB0(r, tok);
        if (func_0012BA60(tok, D_005BBC40) != 0) {
            func_0022CBB0(r, tok);
            if (func_0012BA60(tok, D_005BBB68) != 0) {
                for (;;) {
                    func_0022CBB0(r, tok);
                    if ((bool)func_0012BA60(tok, D_005BBC40)) {
                        func_0022CBB0(r, tok);
                        if (func_0012BA60(tok, D_005BBB38) != 0) break;
                    }
                    func_0012ACE8(buf, D_005BBC50, p + 0x18);
                    func_0022F9F0(p + 0x850C, buf, tok);
                }
            } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
                break;
            }
        }
    }
    return 1;
}
}

extern "C" char D_005BBB50[8];

extern "C" {
int func_0021A650(char *p, char *f) {
    extern void func_0022CB50(char *, char *);
    extern char D_005BBB38[8];
    char r[16];
    char tok[256];
    char buf[256];
    func_0022CB30(r);
    func_0022CB50(r, f);
    while (!(bool)func_0022CBA0(r)) {
        func_0022CBB0(r, tok);
        if (func_0012BA60(tok, D_005BBC40) != 0) {
            func_0022CBB0(r, tok);
            if (func_0012B1A0(tok, D_005BBB50) == 0) {
                for (;;) {
                    func_0022CBB0(r, tok);
                    if ((bool)func_0012BA60(tok, D_005BBC40)) {
                        func_0022CBB0(r, tok);
                        if (func_0012BA60(tok, D_005BBB38) != 0) break;
                    }
                    func_0012ACE8(buf, D_005BBC50, p + 0x18);
                    func_0022F9F0(p + 0x850C, buf, tok);
                }
            } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
                break;
            }
        }
    }
    return 1;
}
}

extern "C" char *func_00210A40(int);

extern "C" int func_0022CD60(char *);

extern "C" float func_0022CD90(char *);

extern "C" char D_00542358[];

extern "C" char D_00542398[];

extern "C" char D_005423A8[];

extern "C" char D_005423B8[];

extern "C" char D_005424D0[];

extern "C" char D_005424E0[];

extern "C" char D_005424F0[];

extern "C" char D_00542500[];

extern "C" char D_005BBBC8[4];

extern "C" char D_005BBBD0[4];

extern "C" {
int func_00216DC0(char *unused, int f, int id) {
    extern void func_0022CB50(char *, int);
    extern char D_005BBB38[4];
    char r[0x10];
    char tok[0x100];
    bool done;
    char *s;
    float v;
    func_0022CB30(r);
    func_0022CB50(r, f);
    done = false;
    do {
        func_0022CBB0(r, tok);
        if (tok[0] == 0x23) {
            func_0022CBB0(r, tok);
            if (func_0012B1A0(tok, D_005BBBC8) == 0) {
                if (!(s = func_00210A40(id))) return 0;
            } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
                done = true;
            } else {
                return 0;
            }
        } else if (func_0012B1A0(tok, D_00542358) == 0) {
            v = (float)(int)func_0022CD90(r);
            *(float *)(s + 4) = v > 0.0f ? v : 0.0f;
        } else if (func_0012B1A0(tok, D_00542398) == 0) {
            *(float *)(s + 8) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005423A8) == 0) {
            *(float *)(s + 0xC) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005423B8) == 0) {
            *(float *)(s + 0x10) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005424D0) == 0) {
            *(float *)(s + 0x20) = func_0022CD60(r);
        } else if (func_0012B1A0(tok, D_005424E0) == 0) {
            *(float *)(s + 0x28) = func_0022CD60(r);
        } else if (func_0012B1A0(tok, D_005424F0) == 0) {
            *(float *)(s + 0x24) = func_0022CD60(r);
        } else if (func_0012B1A0(tok, D_00542500) == 0) {
            *(float *)(s + 0x2C) = func_0022CD60(r);
        } else if (func_0012B1A0(tok, D_005BBBD0) == 0) {
            *(float *)(s + 0x30) = func_0022CD90(r);
        }
    } while (!done);
    return 1;
}
}

extern "C" char D_005424B0[];

extern "C" char D_005424C0[];

extern "C" {
int func_00216440(char *unused, int f, int id) {
    extern void func_0022CB50(char *, int);
    extern char D_005BBB38[4];
    char r[0x10];
    char tok[0x100];
    int c[4];
    bool done;
    char *s;
    int i;
    float v;
    func_0022CB30(r);
    func_0022CB50(r, f);
    done = false;
    do {
        func_0022CBB0(r, tok);
        if (tok[0] == 0x23) {
            func_0022CBB0(r, tok);
            if (func_0012B1A0(tok, D_005BBBC8) == 0) {
                if (!(s = func_00210A40(id))) return 0;
            } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
                done = true;
            } else {
                return 0;
            }
        } else if (func_0012B1A0(tok, D_00542358) == 0) {
            v = (float)(int)func_0022CD90(r);
            *(float *)(s + 4) = v > 0.0f ? v : 0.0f;
        } else if (func_0012B1A0(tok, D_00542398) == 0) {
            *(float *)(s + 8) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005423A8) == 0) {
            *(float *)(s + 0xC) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005423B8) == 0) {
            *(float *)(s + 0x10) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005424B0) == 0) {
            func_0022CBB0(r, tok);
            switch (tok[0]) {
            case 0x49:
                *(signed char *)(s + 0x20) = 0;
                break;
            case 0x4F:
                *(signed char *)(s + 0x20) = 1;
                break;
            case 0x4E:
                *(signed char *)(s + 0x20) = 2;
                break;
            }
        } else if (func_0012B1A0(tok, D_005424C0) == 0) {
            for (i = 0; i < 4; i++) c[i] = func_0022CD60(r);
            *(signed char *)(s + 0x21) = c[0];
            *(signed char *)(s + 0x22) = c[1];
            *(signed char *)(s + 0x23) = c[2];
            *(unsigned char *)(s + 0x24) = 0x80;
        } else if (func_0012B1A0(tok, D_005BBBD0) == 0) {
            *(float *)(s + 0x28) = func_0022CD90(r);
        }
    } while (!done);
    return 1;
}
}
