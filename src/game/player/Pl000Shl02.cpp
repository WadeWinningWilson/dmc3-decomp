struct M207 { float m[16]; };

extern "C" {
char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
}

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" char D_01CAFF0C[];

extern "C" void func_001AD140(char *);

extern "C" void func_002F8FE0(char *);

class W2F8 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual float m24();
};

extern "C" void func_002F8AD0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    char *e;
    *(unsigned char *)(p + 0x459) = 1;
    func_002F8FE0(p);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    v[0] = 0.0f;
    v[1] = 6.283185f * ((float)*(short *)(p + 0x3F4) / 65536.0f);
    v[2] = 0.0f;
    v[3] = 1.0f;
    func_00131700((char *)m, (char *)m, (char *)v);
    func_00105230((char *)m, (char *)m, p + 0x50);
    func_00207480(3, 0x47, (M207 *)m, 8);
    switch (*(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x2928)) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        func_00207480(0, 0xF, (M207 *)m, 8);
        break;
    case 11:
        func_00207480(3, 0xF2, (M207 *)m, 8);
        break;
    case 12: case 13: case 14: case 15:
        break;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    e = func_00207480(3, 0x38, (M207 *)m, 8);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x410;
        *(unsigned char *)(e + 0x9A) = 0;
        *(unsigned char *)(e + 0x3A) = 1;
        *(char **)(p + 0x3D8) = e;
        *(unsigned char *)(p + 0x3D0) = 1;
        *(float *)(p + 0x450) = ((W2F8 *)e)->m24();
        *(float *)(p + 0x400) = 0.0f;
        *(float *)(p + 0x404) = 1.0f;
        *(float *)(p + 0x408) = 0.0f;
        *(float *)(p + 0x40C) = 1.0f;
        *(float *)(p + 0x3F8) = 1.0f;
    } else {
        func_001AD140(p);
    }
}

extern "C" {
int func_002F8800(void);
}

class V130_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_002F8120(char *p0) {
    int v0;
    int v2;
    char *v1;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    switch (v0) {
    case 0:
        v2 = ((V130_1_ii *)p0)->m(v0);
        *(char *)(v1 + 4) = (*(unsigned char *)(v1 + 4) + 1);
        break;
    case 1:
        v2 = func_002F8800();
        break;
    }
    return v2;
}
}
