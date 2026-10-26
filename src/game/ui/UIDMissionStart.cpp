extern "C" char *func_00279290(char *);

static inline char *ch34E(char *c, unsigned int n) { if (*(unsigned int *)(c + 4) < n + 1) return 0; if (((int *)c)[n + 2] == 0) return 0; return c + ((int *)c)[n + 2]; }

static inline char *get34E(char *o, unsigned int n) { if (**(unsigned short **)(o + 8) == 0) return ch34E(*(char **)(o + 0xC), n); return *(char **)(o + 0xC); }

extern "C" void func_001A2F20(char *, int, int);

class O34E {
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
    virtual bool m2C(char *, char *);
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void m3C(int);
};

extern "C" void func_0034E200(char *p, char *o, int flag) {
    char *a;
    char *b;
    char *q;
    char *r;
    *(char **)(p + 0x74) = o;
    *(unsigned char *)(p + 0x1340) = 1;
    if (flag != 0) {
        q = *(char **)(p + 0x74);
        b = get34E(q, 2);
        a = get34E(q, 3);
        *(int *)(p + 0x1344) = 1;
        *(int *)(p + 0x1348) = 2;
    } else {
        r = *(char **)(p + 0x74);
        b = get34E(r, 0);
        a = get34E(r, 1);
        *(int *)(p + 0x1344) = 0;
        *(int *)(p + 0x1348) = 1;
    }
    if (((O34E *)(p + 0xCC0))->m2C(a, b) != 0) {
        ((O34E *)(p + 0xCC0))->m3C(0);
        if (flag != 0) func_001A2F20(func_00279290(p + 0xCC0), 1, 0x404040);
        return;
    } else {
        *(unsigned char *)(p + 0x1340) = 0;
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

class VD0_0_v {
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
    virtual void m(void);
};

extern "C" {
int func_0034E0D0(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 128))->m();
    ((VD0_0_v *)(v0 + 1728))->m();
    v1 = ((VD0_0_i *)(v0 + 3264))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 56))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 60));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 56)));
    }
    return v1;
}
}

class VCC_1_ii {
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
    virtual int m(int);
};

class VCC_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_0034E170(int p0) {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v1 = (int)(v0 + 4864);
    ((VCC_1_iv *)(v0 + 128))->m(v1);
    v2 = ((VCC_1_ii *)(v0 + 1728))->m(v1);
    if (!(*(unsigned char *)(v0 + 4) < 2)) {
        if (*(unsigned char *)(v0 + 4928) == 1) {
            v2 = ((VCC_1_ii *)(v0 + 3264))->m(v1);
        }
    }
    return v2;
}
}
