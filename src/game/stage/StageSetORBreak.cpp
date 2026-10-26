extern "C" char D_01DFABA0[];

extern "C" void func_003305E0(char *, int, int, float *, int, int, int);

extern "C" char D_01CAFF0C[];

extern "C" short D_0054A0C0[];

extern "C" short D_01CAFF38[];

extern "C" float D_0055E1E0[];

extern "C" void func_002EB8A0(int, float *, int, int, float, float, float);

extern "C" void func_003586F0(char *, int);

class V358 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual float g68();
};

extern "C" void func_00358420(char *p, char *s, V358 *o, int a3) {
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    char *g;
    int i;
    int k;
    unsigned short key;
    short k2;
    int n;
    unsigned short *e;
    if (s != 0 && o != 0 && *(signed char *)(s + 2) == 0) {
        if (*(unsigned char *)(p + 0x7E2) == 0) {
            *(unsigned char *)(p + 0x7E2) = 1;
            *(int *)(p + 0x7E8) = 0;
            k2 = D_01CAFF38[0];
            g = *(char **)((*(char **)D_01CAFF0C) + 0x18);
            key = (short)(k2 % 100 + D_0054A0C0[k2 / 100]) | 0x100;
            for (i = 0; i < 0x30; i++) {
                e = (unsigned short *)((char *)(i * 2) + (int)g);
                if (e[0x310] == key) break;
                if (e[0x310] == 0) {
                    e[0x310] = key;
                    break;
                }
            }
        }
        *(float *)(p + 0x7E4) = *(float *)(p + 0x7E4) + *(float *)(s + 4) * o->g68();
        if (*(float *)(p + 0x7EC) <= 0.0f) {
            k = *(float *)(p + 0x7E4) / 750.0f;
            if (k > 6) k = 6;
            n = 0.1f * *(float *)(p + 0x7E4) * D_0055E1E0[k];
            w[0] = *(float *)(p + 0x550);
            w[1] = 70.0f + *(float *)(p + 0x554);
            w[2] = *(float *)(p + 0x558);
            w[3] = 1.0f;
            func_002EB8A0(n, w, 0, 1, 120.0f, 50.0f, -100.0f + *(float *)(p + 0x554));
            *(float *)(p + 0x7EC) = 30.0f;
        }
        func_003586F0(p, a3);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(p + 0x520) : "memory");
        v[3] = 1.0f;
        func_003305E0(D_01DFABA0, 8, 0x14, v, 0x21, 0, 0);
    }
}

extern "C" {
int func_0028C740(...);
}

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
int func_00357EE0(int p0) {
    int tmp0;
    ((VD0_0_v *)(p0 + 224))->m();
    tmp0 = func_0028C740((p0 + 1376));
    return tmp0;
}
}

extern "C" {
int func_001AD100(void);
}

extern "C" {
int func_00358120(char *);
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
int func_00357F80(int p0) {
    int v1;
    char *v0;
    int v2;
    v0 = (char *)p0;
    v2 = func_001AD100();
    if (*(unsigned char *)(v0 + 2016) != 0) {
        v1 = *(unsigned char *)(v0 + 4);
        switch (v1) {
        case 0:
            v2 = ((V130_0_i *)v0)->m();
            *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
            break;
        case 1:
            v2 = func_00358120(v0);
            break;
        }
    }
    return v2;
}
}

class VCC_2_ppi {
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
    virtual int m(char *, char *);
};

extern "C" {
int func_00358820(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(unsigned char *)(p0 + 2017) == 0) {
        v1 = ((VCC_2_ppi *)(v0 + 224))->m((v0 + 1312), v0);
    }
    return v1;
}
}
