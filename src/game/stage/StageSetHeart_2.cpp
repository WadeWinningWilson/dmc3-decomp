extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" char *func_00279290(char *);

extern "C" char D_01CAFF0C[];

extern "C" char D_005BE098[8];

extern "C" void func_00206730(char *);

extern "C" void func_0028C5C0(char *, int, float);

extern "C" void func_00195E20(char *, char *);

extern "C" void func_001AD100(char *);

extern "C" void func_003AD5C0(char *);

extern "C" void func_00450510(char *);

extern "C" void func_0044EBF0(char *);

extern "C" void func_0044EDA0(char *);

extern "C" void func_0044EE30(char *);

extern "C" void func_0044F0D0(char *);

extern "C" void func_0044F7B0(char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" void func_002EF940(int, char *);

extern "C" void func_0044EB50(char *);

class O44E {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void m60(int, int, int, int);
};

extern "C" void func_0044E780(char *p) {
    float v[4] __attribute__((aligned(16)));
    func_001AD100(p);
    func_003AD5C0(p + 0x83C);
    func_00206730(p + 0xCE0);
    func_00206730(p + 0xCE4);
    if (*(unsigned char *)(p + 0x805) == 0) return;
    func_00450510(p);
    func_0044EBF0(p);
    switch (*(unsigned char *)(p + 0x800)) {
    case 0:
        func_0044EDA0(p);
        break;
    case 1:
        func_0044EE30(p);
        break;
    case 2:
        func_0044F0D0(p);
        break;
    case 3:
        func_0044F7B0(p);
        break;
    }
    __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x1E0) + 0x104)) : "memory");
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x8D0), "r"(v) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x1E4) + 0x104)) : "memory");
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x950), "r"(v) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x880) : "memory");
    func_00131700(p + 0x880, p + 0x880, p + 0x860);
    func_00105230(p + 0x880, p + 0x880, p + 0x850);
    func_001318E0(p + 0x880, p + 0x880, p + 0x870);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x900) : "memory");
    func_00131700(p + 0x900, p + 0x900, p + 0x8E0);
    func_00105230(p + 0x900, p + 0x900, p + 0x8D0);
    func_001318E0(p + 0x900, p + 0x900, p + 0x8F0);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x980) : "memory");
    func_00131700(p + 0x980, p + 0x980, p + 0x960);
    func_00105230(p + 0x980, p + 0x980, p + 0x950);
    func_001318E0(p + 0x980, p + 0x980, p + 0x970);
    func_0028C5C0(p + 0xA10, 0, *(float *)(p + 0x10));
    if (*(unsigned char *)(p + 0x806) != 0) {
        *(float *)(func_00279290(p + 0x200) + 0x1B0) = *(float *)(p + 0x10);
        if (*(int *)(p + 0x814) != -1) {
            ((O44E *)(p + 0x200))->m60(*(int *)(p + 0x814), *(int *)(p + 0x818), (int)((float)*(int *)(p + 0x81C) * *(float *)(p + 0x10)), (int)((float)*(int *)(p + 0x820) * *(float *)(p + 0x10)));
        }
    }
    if (*(unsigned char *)(p + 0x807) != 0 && *(unsigned char *)(p + 0x800) != 3) {
        func_002EF940(*(int *)D_01CAFF0C, p + 0x9C0);
    }
    func_0044EB50(p);
    func_00195E20(D_005BE098, p);
}

extern "C" {
extern char D_0057895C[];
}

extern "C" {
void func_0044E5C0(char *, int, int);
}

extern "C" {
int func_0044E700(char *, int, int);
}

extern "C" {
void func_0044FCA0(char *, int);
}

extern "C" {
void func_0044FDF0(char *);
}

class V58_4_iiiiv {
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
    virtual void m(int, int, int, int);
};

extern "C" {
int func_0044E430(char *p0) {
    char *v0;
    int v1;
    int v2;
    char *v3;
    int tmp2;
    int tmp3;
    v0 = p0;
    *(char *)(p0 + 69) = 6;
    func_0044FCA0(p0, 1);
    func_0044FDF0(v0);
    v1 = *(int *)(v0 + 2068);
    if (v1 != -1) {
        ((V58_4_iiiiv *)(v0 + 512))->m(v1, *(int *)(v0 + 2072), 0, 0);
    }
    v2 = 0;
    *(float *)(v0 + 2096) = *(float *)D_0057895C;
    v3 = *(char **)(*(char **)(v0 + 484) + 260);
    *(char *)(v0 + 2496) = 0;
    *(char *)(v0 + 2497) = 0;
    *(short *)(v0 + 2498) = 0;
    *(int *)(v0 + 2504) = 0;
    *(int *)(v0 + 2508) = 0;
    *(int *)(v0 + 2512) = 0;
    *(int *)(v0 + 2528) = 0;
    *(int *)(v0 + 2532) = 0;
    *(int *)(v0 + 2536) = 0;
    *(int *)(v0 + 2540) = 0x3f800000;
    *(int *)(v0 + 2544) = 0x47c35000;
    *(char *)(v0 + 2548) = 0;
    *(char *)(v0 + 2549) = 0;
    *(short *)(v0 + 2550) = 0;
    while ((v2 < 10)) {
        tmp2 = ((v2 << 1) + (int)v0);
        v2 = (v2 + 1);
        *(short *)((char *)tmp2 + 2552) = -1;
    }
    *(char *)(v0 + 2496) = 0;
    *(char *)(v0 + 2497) = 0;
    *(short *)(v0 + 2498) = 0;
    *(short *)(v0 + 2500) = 0;
    *(char **)(v0 + 2504) = v0;
    *(int *)(v0 + 2508) = 0;
    *(char **)(v0 + 2512) = v3;
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(v3), "r"((v0 + 2528)) : "memory");
    func_0044E5C0(v0, 1, v2);
    func_0044E700(v0, 0, 1);
    func_0044E700(v0, 1, 1);
    tmp3 = func_0044E700(v0, 2, 1);
    *(char *)(v0 + 68) = -1;
    *(char *)(v0 + 69) = 3;
    *(char *)(v0 + 70) = 60;
    *(char *)(v0 + 71) = 42;
    *(int *)(v0 + 12) = (*(int *)(v0 + 12) | 16);
    return tmp3;
}
}
