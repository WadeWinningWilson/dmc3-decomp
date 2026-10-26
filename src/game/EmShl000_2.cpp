class P30C {
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
    virtual void m118(float, float, float, char *, int);
};

extern "C" int D_005BE098;

extern "C" unsigned char D_005BCA88;

extern "C" unsigned char D_005BCA89;

extern "C" char D_01CAFF0C[];

extern "C" char D_01DFABA0[];

extern "C" char D_00561FE0[];

extern "C" char D_00562020[];

extern "C" void func_00206730(char *);

extern "C" void func_001AD140(char *);

extern "C" unsigned char func_0024E780(char *, int, int);

extern "C" unsigned char func_0030CD40(char *);

extern "C" void func_00195E20(char *, char *);

extern "C" float func_00132470(char *, char *);

extern "C" void func_00330BD0(char *, int, char *, int, int);

extern "C" char *func_002075D0(int, int, char *, int, int);

extern "C" char *func_00279290(char *);

extern "C" void func_001A2180(char *, unsigned int, int);

extern "C" void func_0030CE90(char *);

extern "C" void func_001A29A0(char *);

static inline void set30C(char *m, unsigned int i, unsigned char v) {
    if (i < *(unsigned short *)(m + 0xA8)) *(int *)(*(char **)(m + 0xBC) + i * 0x340 + 0x15C) = v;
}

#define G (*(char **)D_01CAFF0C)

static inline int fl30C(char *o) { int r = 0; if (o != 0) r = *(int *)(o + 8); return r; }

#define FLAGS(o) fl30C(*(char **)(p + (o)))

extern "C" void func_0030C5E0(char *p) {
    int f;
    char *e;
    char *m;
    unsigned char v;
    int i;
    unsigned char c0;
    unsigned char c1;
    P30C *o;
    func_00206730(p + 0xB90);
    if (!(*(float *)(p + 0x144) < 0.0f)) {
        *(float *)(p + 0x144) = *(float *)(p + 0x144) - *(float *)(p + 0x10);
        *(float *)(p + 0x12C) = *(float *)(p + 0x12C) - 1.0f;
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            if (*(char **)(p + 0xD0) == 0) {
                func_001AD140(p);
                return;
            }
            if (func_0024E780(*(char **)(p + 0xB9C), 0, 0) != 1) {
                func_001AD140(p);
                return;
            }
            if (func_0030CD40(p) == 0) {
                func_001AD140(p);
                return;
            }
            func_00195E20((char *)&D_005BE098, p);
            break;
        case 1:
            if (*(unsigned char *)(p + 0xB99) == 0 && func_00132470(*(char **)(G + 0xC) + 0x50, p + 0xB00) < 500.0f) {
                func_00330BD0(D_01DFABA0, 0x2C, p + 0x50, 0xD, 0);
                *(unsigned char *)(p + 0xB99) = 1;
            }
            f = 0;
            if (*(char **)(p + 0x7FC) != 0) f = *(int *)(*(char **)(p + 0x7FC) + 8);
            if (f & 0x40) {
                if (*(char **)(p + 0xD0) != 0) *(unsigned char *)(*(char **)(p + 0xD0) + 0x5AC) = 1;
                func_002075D0(3, 5, p + 0xB10, 3, 0x10);
                func_00330BD0(D_01DFABA0, 0x22, p + 0xB00, 0xD, 0);
                *(unsigned char *)(p + 4) = 2;
                break;
            }
            if (FLAGS(0x800) & 0x30000) {
                if (*(unsigned char *)(p + 0xB98) == 0) {
                    func_002075D0(3, 0x37, p + 0xB10, 3, 0x10);
                } else {
                    func_002075D0(3, 0x35E, p + 0xB10, 3, 0x10);
                }
                *(float *)(p + 0x144) = 25.0f;
                func_00330BD0(D_01DFABA0, 0x22, p + 0xB00, 0xD, 0);
                *(unsigned char *)(p + 5) = 2;
                if (*(char **)(p + 0xB90) != 0) func_001AD140(*(char **)(p + 0xB90));
                *(float *)(p + 0xAF4) = 128.0f;
                func_001A2180(func_00279290(p + 0x180), (unsigned int)*(float *)(p + 0xAF4), 1);
                break;
            }
            f = FLAGS(0x804);
            if (f & 3) {
                if (*(char **)(p + 0xD0) != 0) *(unsigned char *)(*(char **)(p + 0xD0) + 0x5AC) = 1;
                e = func_002075D0(3, 0x52, p + 0xB10, 3, 0x10);
                if (*(unsigned char *)(p + 0xB98) != 0 && e != 0) {
                    c1 = D_005BCA89;
                    c0 = D_005BCA88;
                    *(unsigned char *)(e + 0x9C) = c0;
                    *(unsigned char *)(e + 0x9D) = c1;
                    *(unsigned char *)(e + 0x9E) = c1;
                    *(unsigned char *)(e + 0x9B) = 2;
                }
                func_00330BD0(D_01DFABA0, 0x23, p + 0xB00, 0xD, 0);
                o = *(P30C **)(G + 0xC);
                if (f & 2) {
                    o->m118(0.0f, 1.0f, 1.0f, D_00561FE0, 0);
                } else {
                    o->m118(0.0f, 1.0f, 1.0f, D_00562020, 0);
                }
                *(unsigned char *)(p + 4) = 2;
                break;
            }
            func_0030CE90(p);
            func_00195E20((char *)&D_005BE098, p);
            break;
        case 2:
            if (!(*(float *)(p + 0x144) <= 0.0f)) {
                if (!(*(float *)(p + 0xAF4) < 5.12f)) {
                    *(float *)(p + 0xAF4) = *(float *)(p + 0xAF4) - 5.12f * *(float *)(p + 0x10);
                } else {
                    *(float *)(p + 0xAF4) = 0.0f;
                }
            }
            v = (unsigned int)*(float *)(p + 0xAF4);
            m = func_00279290(p + 0x180);
            for (i = 0; i < *(unsigned short *)(m + 0xA8); i++) set30C(m, i, v);
            func_00195E20((char *)&D_005BE098, p);
            break;
        }
    } else {
        *(unsigned char *)(p + 4) = 2;
    }
    if (*(unsigned char *)(p + 0xB98) != 0) func_001A29A0(func_00279290(p + 0x180));
}
