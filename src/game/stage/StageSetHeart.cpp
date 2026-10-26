class ObjBC {
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
    virtual void mBC(float);
};

extern "C" void func_0044E700(char *, int, int);

extern "C" void func_0044EDA0(char *p) {
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        func_0044E700(p, 0, 1);
        func_0044E700(p, 1, 1);
        func_0044E700(p, 2, 1);
    case 1:
        ((ObjBC *)(p + 0x200))->mBC(*(float *)(p + 0x10));
    }
}

extern "C" char D_00666750[];

class ObjT1C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

extern "C" char D_01CAFF0C[];

extern "C" void func_0044E5C0(char *, int);

extern "C" int func_001AEA60(char *, int, int);

extern "C" int func_0031B860(int, char *, int, float);

extern "C" float D_0057895C[];

extern "C" int D_00578690[];

extern "C" void func_002F2E30(char *, char *);

extern "C" void func_0034B270(int, char *, int);

extern "C" void func_0044FB70(char *p) {
    char *g;
    float t;
    int i;
    int *q;
    func_0044E5C0(p, 0);
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0 && *(ObjT1C **)(g + 0x10) != 0) {
        t = (*(ObjT1C **)(g + 0x10))->m1C();
    } else {
        t = 0.0f;
    }
    *(float *)(p + 0x82C) = t;
    *(unsigned char *)(p + 0x802) = 4;
    for (i = 0, q = D_00578690; i < 4; i++, q++) {
        if (*(float *)(p + 0x82C) < (float)*q) {
            *(unsigned char *)(p + 0x802) = i;
            break;
        }
    }
    *(unsigned char *)(p + 0x803) = 0;
    *(int *)(p + 0x83C) = func_0031B860(func_001AEA60(D_00666750, 6, 3), p + 0x830, 3, D_0057895C[0]);
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2E30(g, p);
    }
    func_0034B270(8, p, 0);
}

class SubC8CC {
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
    virtual void mC8(char *);
    virtual void mCC(char *);
};

extern "C" void func_0044FB10(char *p) {
    char *q = p + 0x880;
    ((SubC8CC *)(p + 0x200))->mC8(q);
    ((SubC8CC *)(p + 0x200))->mCC(q);
}

extern "C" char *func_00279290(char *);

extern "C" void func_001A1E70(char *, int);

extern "C" void func_001A2000(char *, int);

extern "C" char *func_002F7C10(int, int);

extern "C" int D_00578640[];

class V0C18 {
public:
    virtual void d0();
    virtual void m0C(int);
    virtual void m10(int);
    virtual void m14(int);
    virtual void m18(int);
};

extern "C" void func_0044E5C0(char *p, int f) {
    int *u;
    int j;
    int i;
    int *t;
    V0C18 *o;
    if ((unsigned char)f == 1) {
        func_001A2000(func_00279290(p + 0x200), 0);
        for (i = 0, t = D_00578640; i < 6; i++, t += 2) {
            o = (V0C18 *)func_002F7C10(t[0], 0);
            if (o != 0) {
                if (t[1] != -1) o->m18(t[1]);
                else o->m10(0);
            }
        }
    } else {
        func_001A1E70(func_00279290(p + 0x200), 0);
        for (j = 0, u = D_00578640; j < 6; j++, u += 2) {
            o = (V0C18 *)func_002F7C10(u[0], 0);
            if (o != 0) {
                if (u[1] != -1) o->m14(u[1]);
                else o->m0C(0);
            }
        }
    }
}

extern "C" char D_01DFABA0[];

extern "C" void func_003305E0(char *, int, int, float *, int, int, int);

extern "C" float D_005786B0[];

extern "C" float D_005786E0[];

extern "C" void func_00450550(char *, int);

extern "C" void func_0044FCA0(char *, int);

class V44E {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8();
    virtual int gBC(float);
};

extern "C" void func_0044EE30(char *p) {
    float v[4] __attribute__((aligned(16)));
    unsigned char r;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        (*(unsigned char *)(p + 4))++;
        func_0044E700(p, 0, 1);
        func_0044E700(p, 1, 1);
        func_0044E700(p, 2, 0);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x1E4) + 0x104)) : "memory");
        func_003305E0(D_01DFABA0, 8, 0x7F, v, 0x2D, 0, 0);
        *(float *)(p + 0x838) = 55.0f;
        *(unsigned char *)(p + 5) = 0;
        break;
    case 1:
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            if ((*(float *)(p + 0x838) -= *(float *)(p + 0x10)) < 0.0f) {
                *(unsigned char *)(p + 0x80F) = 1;
                (*(unsigned char *)(p + 5))++;
            }
            break;
        case 1:
            break;
        }
        r = ((V44E *)(p + 0x200))->gBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            if (*(unsigned char *)(p + 0x804) == 0) *(float *)(p + 0x834) = D_005786B0[*(unsigned char *)(p + 0x803) + *(unsigned char *)(p + 0x802) * 2];
            else *(float *)(p + 0x834) = D_005786E0[*(unsigned char *)(p + 0x803) + *(unsigned char *)(p + 0x802) * 2];
            *(unsigned char *)(p + 0x804) = 0;
            (*(unsigned char *)(p + 4))++;
        }
        break;
    case 2:
        ((V44E *)(p + 0x200))->gBC(*(float *)(p + 0x10));
        if ((*(float *)(p + 0x834) -= *(float *)(p + 0x10)) < 0.0f) {
            func_00450550(p, 3);
            __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x1E4) + 0x104)) : "memory");
            func_003305E0(D_01DFABA0, 8, 0x80, v, 0x2D, 0, 0);
            (*(unsigned char *)(p + 4))++;
        }
        break;
    case 3:
        r = ((V44E *)(p + 0x200))->gBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            *(unsigned char *)(p + 0x80F) = 0;
            func_0044FCA0(p, 0);
        }
        break;
    }
}

extern "C" {
int func_0013D5D0(...);
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
int func_0044E3B0(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 512))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 316))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 320));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 316)));
    }
    return v1;
}
}
