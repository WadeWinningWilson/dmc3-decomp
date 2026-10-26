extern "C" int D_005785C0[];

extern "C" void func_0028C200(char *, char *, char *, int, int, char *, int);

extern "C" void func_0028C8E0(char *, int);

extern "C" void func_0028C910(char *);

extern "C" int func_0028C3A0(char *, int, int, int);

class V44D {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20();
    virtual int m24(int);
};

extern "C" {
void func_0044D560(char *p) {
    extern V44D *func_002F7C10(int, int);
    int i;
    V44D *o;
    func_0028C200(p + 0x2C0, p + 0x4E0, p + 0x500, 4, 0, p, 0);
    func_0028C8E0(p + 0x2C0, 0);
    func_0028C910(p + 0x2C0);
    *(unsigned char *)(p + 0x2C3) = 0xD;
    for (i = 0; i < 5; i++) {
        *(unsigned char *)(p + i * 4 + 0x4E0) = 6;
        *(unsigned char *)(p + i * 4 + 0x4E1) = 0;
        *(short *)(p + i * 4 + 0x4E2) = i;
        *(unsigned char *)(p + i * 0x50 + 0x500) = 2;
        *(int *)(p + i * 0x50 + 0x510) = 0;
        *(int *)(p + i * 0x50 + 0x514) = 0;
        *(int *)(p + i * 0x50 + 0x518) = 0;
        *(float *)(p + i * 0x50 + 0x51C) = 1.0f;
        *(float *)(p + i * 0x50 + 0x520) = 100.0f;
        o = func_002F7C10(D_005785C0[i * 2], 0);
        if (o != 0) {
            func_0028C3A0(p + 0x2C0, i, -1, o->m24(0));
        }
    }
}
}

extern "C" int D_005785C4[];

extern "C" char D_01DFABA0[];

extern "C" void func_003305E0(char *, int, int, float *, int, int, int);

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

class O44C {
public:
    virtual void u8();
    virtual void uC();
    virtual void m10(int);
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual char *m24(int);
    virtual void u28();
    virtual void m2C(int, int);
};

extern "C" {
void func_0044CF70(char *p, unsigned char k, unsigned char f) {
    extern O44C *func_002F7C10(int, int);
    float v[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    O44C *o;
    ((unsigned char *)(p + 0xE0))[k] = 1;
    o = func_002F7C10(D_005785C0[k * 2], 0);
    if (o != 0) {
        if (f == 0) {
            o->m2C(1, 0);
            r[0] = -1.5707963f;
            r[1] = 0.0f;
            r[2] = 0.0f;
            r[3] = 1.0f;
            __asm__ volatile("lqc2 $vf4, 0x30(%0)
	lqc2 $vf5, 0x0(%1)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%1)" : : "r"(o->m24(0)), "r"(v) : "memory");
            v[3] = 1.0f;
            func_003305E0(D_01DFABA0, 8, 0xA, v, 0x25, 0, 0);
            __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x270) : "memory");
            func_00131700(p + 0x270, p + 0x270, (char *)r);
            func_00105230(p + 0x270, p + 0x270, (char *)v);
            *(unsigned char *)(p + 0x265) = 1;
            *(int *)(p + 0x268) = 0;
            *(int *)(p + 0x2B0) = 0;
        } else {
            o->m2C(1, 1);
        }
    }
    o = func_002F7C10(D_005785C4[k * 2], 0);
    if (o != 0) {
        o->m10(0);
    }
    if (f == 0) {
        ((unsigned char *)(p + 0xF4))[*(unsigned char *)(p + 0x264)] = 1;
        ((float *)(p + 0xFC))[*(unsigned char *)(p + 0x264)] = 60.0f;
    } else {
        ((unsigned char *)(p + 0xF4))[*(unsigned char *)(p + 0x264)] = 2;
        ((int *)(p + 0xFC))[*(unsigned char *)(p + 0x264)] = 0;
    }
    ((unsigned char *)(p + 0xE5))[*(unsigned char *)(p + 0x264)] = 1;
    *(unsigned char *)(p + 0x264) = *(unsigned char *)(p + 0x264) + 1;
}
}
