class ObjCC {
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
    virtual int mCC(int);
};

extern "C" void func_003196C0(char *p) {
    float m[16] __attribute__((aligned(16)));
    if (*(unsigned char *)(p + 0x28A0) == 0) {
        ((ObjCC *)(p + 0x4A00))->mCC(*(int *)(*(char **)(p + 0x138C) + 0x104));
        return;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    switch (*(signed char *)(p + 0x28A8)) {
    case 1:
        ((ObjCC *)(p + *(int *)(p + 0x7AA0) * 1536 + 0x4A00))->mCC((int)m);
        break;
    case 0:
        if (*(int *)(p + 0x2898) & 2) {
            ((ObjCC *)(p + *(int *)(p + 0x7A78) * 1536 + 0x4A00))->mCC(*(int *)(((char **)(p + 0x13B8))[*(int *)(p + 0x7A74)] + 0x104));
        } else {
            ((ObjCC *)(p + *(int *)(p + 0x7A84) * 1536 + 0x4A00))->mCC(*(int *)(((char **)(p + 0x138C))[*(int *)(p + 0x7A74)] + 0x104));
        }
        ((ObjCC *)(p + *(int *)(p + 0x7A90) * 1536 + 0x4A00))->mCC((int)m);
        break;
    }
}

extern "C" int func_002242C0(char *);

extern "C" char * D_005BC2EC;

extern "C" void func_002E0000(char *, int, char *);

extern "C" void func_002E7920(char *, char *, char *, char *, int, int);

extern "C" int func_003331B0(char *, float, float);

class VC_4_ppiiv {
public:
    virtual void d0();
    virtual void m(char *, char *, int, int);
};

typedef struct { float f[4]; } F4_317;

typedef struct { float f[2]; } F2_317;

typedef struct { unsigned char b[2]; } B2_317;

extern "C" int func_00317D80(char *p0, char *p1) {
    char *v0;
    char *v1;
    int v2;
    int v3;
    unsigned char tmp1;
    signed char tmp2;
    int tmp3;
    char *tmp22;
    float tmp23;
    float tmp24;
    float tmp25;
    float tmp27;
    float tmp28;
    float tmp29;
    float tmp31;
    unsigned char tmp33;
    int tmp52;
    v0 = p0;
    v1 = p1;
    *(char *)(p0 + 10407) = *(signed char *)(p1 + 13);
    tmp1 = *(unsigned char *)(p1 + 14);
    *(char *)(p0 + 10414) = *(unsigned char *)(p1 + 14);
    tmp2 = *(signed char *)(p1 + 15);
    *(char *)(p0 + 10410) = *(signed char *)(p1 + 15);
    *(char *)(p0 + 15692) = 14;
    *(char *)(p0 + 15693) = -1;
    *(char *)(p0 + 15694) = -1;
    *(char *)(p0 + 15695) = -1;
    *(char *)(p0 + 15696) = -1;
    *(char *)(p0 + 15725) = 0;
    *(char *)(p0 + 15726) = 0;
    *(char *)(p0 + 15727) = 0;
    *(char *)(p0 + 15728) = 0;
    *(char *)(p0 + 15729) = 0;
    tmp3 = func_002242C0(p0);
    if ((tmp3 & 255) == 1) {
        *(char *)(v0 + 15690) = 0;
        *(char *)(v0 + 15691) = 2;
    } else {
        *(char *)(v0 + 15690) = *(signed char *)(v1 + 10);
        *(char *)(v0 + 15691) = *(signed char *)(v1 + 11);
    }
    *(char *)(v0 + 10416) = 0;
    *(char *)(v0 + 15468) = 2;
    *(char *)(v0 + 15476) = 0;
    *(int *)(v0 + 15484) = 0;
    *(int *)(v0 + 10712) = *(int *)(v1 + 20);
    *(int *)(v0 + 10744) = *(int *)(v1 + 20);
    *(int *)(v0 + 10716) = *(int *)(v1 + 24);
    *(int *)(v0 + 10748) = *(int *)(v1 + 24);
    *(int *)(v0 + 10720) = *(int *)(v1 + 28);
    *(int *)(v0 + 10752) = *(int *)(v1 + 28);
    *(int *)(v0 + 10724) = *(int *)(v1 + 32);
    *(int *)(v0 + 10756) = *(int *)(v1 + 32);
    *(int *)(v0 + 10728) = *(int *)(v1 + 36);
    *(int *)(v0 + 10760) = *(int *)(v1 + 36);
    *(int *)(v0 + 10732) = *(int *)(v1 + 40);
    *(int *)(v0 + 10764) = *(int *)(v1 + 40);
    *(int *)(v0 + 10736) = *(int *)(v1 + 44);
    *(int *)(v0 + 10768) = *(int *)(v1 + 44);
    *(int *)(v0 + 10740) = *(int *)(v1 + 48);
    *(int *)(v0 + 10772) = *(int *)(v1 + 48);
    *(int *)(v0 + 10712) = -1;
    *(int *)(v0 + 10716) = -1;
    *(int *)(v0 + 10720) = -1;
    *(int *)(v0 + 10724) = -1;
    *(int *)(v0 + 10728) = -1;
    *(int *)(v0 + 10732) = -1;
    *(int *)(v0 + 10736) = -1;
    *(int *)(v0 + 10740) = -1;
    tmp22 = D_005BC2EC;
    *(F4_317 *)(v0 + 10876) = *(F4_317 *)(tmp22 + 0);
    *(F4_317 *)(v0 + 10892) = *(F4_317 *)(tmp22 + 16);
    *(F2_317 *)(v0 + 10908) = *(F2_317 *)(tmp22 + 32);
    *(B2_317 *)(v0 + 10916) = *(B2_317 *)(tmp22 + 40);
    *(float *)(v0 + 10920) = *(float *)(tmp22 + 44);
    *(float *)(v0 + 10924) = *(float *)(tmp22 + 48);
    *(float *)(v0 + 10928) = *(float *)(tmp22 + 52);
    *(float *)(v0 + 10932) = *(float *)(tmp22 + 56);
    *(float *)(v0 + 10936) = *(float *)(tmp22 + 60);
    *(float *)(v0 + 10940) = *(float *)(tmp22 + 64);
    *(float *)(v0 + 10944) = *(float *)(tmp22 + 68);
    *(float *)(v0 + 10948) = *(float *)(tmp22 + 72);
    *(float *)(v0 + 10952) = *(float *)(tmp22 + 76);
    *(float *)(v0 + 10956) = *(float *)(tmp22 + 80);
    *(float *)(v0 + 10920) = *(float *)(v1 + 60);
    func_002E0000(v0, 0, tmp22);
    v2 = (int)v0;
    if (v0 != 0) {
        v2 = (v2 + 64);
    }
    func_002E7920((v0 + 10784), (v0 + 10876), (v0 + 10960), (v0 + 10852), v2, 0);
    v3 = (int)v0;
    if (v0 != 0) {
        v3 = (v3 + 64);
    }
    ((VC_4_ppiiv *)(v0 + 10852))->m((v0 + 10876), (v0 + 10960), v3, 1);
    *(float *)(v0 + 10964) = *(float *)(v1 + 56);
    *(float *)(v0 + 10436) = *(float *)(v1 + 64);
    *(float *)(v0 + 10440) = *(float *)(v1 + 68);
    *(char *)(v0 + 10415) = *(unsigned char *)(v1 + 17);
    tmp52 = func_003331B0((v0 + 15760), *(float *)(v1 + 72), *(float *)(v1 + 76));
    *(float *)(v0 + 15496) = *(float *)(v1 + 80);
    return tmp52;
}

extern "C" void func_00105300(char *, char *);

extern "C" void func_0022C520(char *, char *, char *, char *);

class V319 {
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
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void mC8(char *);
};

extern "C" void func_00319380(char *p) {
    int i;
    if (*(unsigned char *)(p + 0x28A0) == 0) {
        for (i = 0; i < 2; i++) func_0022C520(p + i * 0xC0 + 0x6D40, p + 0x4A00, *(char **)(*(char **)(p + 0x1380) + 0x104), p + 0x7D80);
        ((V319 *)(p + 0x4A00))->mC8(*(char **)(*(char **)(p + 0x138C) + 0x104));
        func_00105300(p + 0x7D80, *(char **)(*(char **)(p + 0x1380) + 0x104));
        return;
    }
    switch (*(signed char *)(p + 0x28A8)) {
    case 1:
        func_0022C520(p + *(int *)(p + 0x7AA8) * 0xC0 + 0x6FF0, p + *(int *)(p + 0x7AA0) * 0x600 + 0x4A00, *(char **)(*(char **)((char *)(*(int *)(p + 0x7A9C) * 4) + (int)p + 0x1380) + 0x104), p + (*(int *)(p + 0x7AA8) << 6) + 0x7230);
        ((V319 *)(p + *(int *)(p + 0x7AA0) * 0x600 + 0x4A00))->mC8(*(char **)(*(char **)((char *)(*(int *)(p + 0x7A9C) * 4) + (int)p + 0x1388) + 0x104));
        func_00105300(p + (*(int *)(p + 0x7AA8) << 6) + 0x7230, *(char **)(*(char **)((char *)(*(int *)(p + 0x7A9C) * 4) + (int)p + 0x1380) + 0x104));
        break;
    case 0:
        if (*(int *)(p + 0x2898) & 2) {
            func_0022C520(p + *(int *)(p + 0x7A80) * 0xC0 + 0x6FF0, p + *(int *)(p + 0x7A78) * 0x600 + 0x4A00, *(char **)(*(char **)((char *)(*(int *)(p + 0x7A74) * 4) + (int)p + 0x1380) + 0x104), p + (*(int *)(p + 0x7A80) << 6) + 0x7230);
            ((V319 *)(p + *(int *)(p + 0x7A78) * 0x600 + 0x4A00))->mC8(*(char **)(*(char **)((char *)(*(int *)(p + 0x7A74) * 4) + (int)p + 0x1388) + 0x104));
            func_00105300(p + (*(int *)(p + 0x7A80) << 6) + 0x7230, *(char **)(*(char **)((char *)(*(int *)(p + 0x7A74) * 4) + (int)p + 0x1380) + 0x104));
        } else {
            func_0022C520(p + *(int *)(p + 0x7A8C) * 0xC0 + 0x6FF0, p + *(int *)(p + 0x7A84) * 0x600 + 0x4A00, *(char **)(*(char **)((char *)(*(int *)(p + 0x7A74) * 4) + (int)p + 0x1380) + 0x104), p + (*(int *)(p + 0x7A8C) << 6) + 0x7230);
            ((V319 *)(p + *(int *)(p + 0x7A84) * 0x600 + 0x4A00))->mC8(*(char **)(*(char **)((char *)(*(int *)(p + 0x7A74) * 4) + (int)p + 0x1388) + 0x104));
            func_00105300(p + (*(int *)(p + 0x7A8C) << 6) + 0x7230, *(char **)(*(char **)((char *)(*(int *)(p + 0x7A74) * 4) + (int)p + 0x1380) + 0x104));
        }
        ((V319 *)(p + *(int *)(p + 0x7A90) * 0x600 + 0x4A00))->mC8(*(char **)(*(char **)((char *)(*(int *)(p + 0x7A74) * 4) + (int)p + 0x13B0) + 0x104));
        break;
    }
}

extern "C" {
extern char D_01CAFF14[];
}

extern "C" {
int func_00277EF0(char *, float);
}

extern "C" {
int func_00278060(char *, int);
}

extern "C" {
int func_002D9DF0(int);
}

class V17C_0_v {
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
    virtual void m(void);
};

extern "C" {
int func_00319310(char *p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    ((V17C_0_v *)p0)->m();
    v1 = func_00277EF0((v0 + 31408), *(float *)(v0 + 16));
    if ((v1 & 255) == 1) {
        v1 = func_00278060((v0 + 31408), *(int *)D_01CAFF14);
    }
    v3 = (int)v0;
    if (*(unsigned char *)(v0 + 10400) == 0) {
        v1 = func_002D9DF0(v3);
    }
    return v1;
}
}

extern "C" {
int func_002052E0(int);
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
int func_00319820(int p0) {
    int v3;
    int v0;
    char *v1;
    char *v2;
    int tmp0;
    v0 = p0;
    v3 = 0;
    v1 = (char *)v0;
    do {
        v2 = (char *)((v0 + v3) + 26624);
        if (*(unsigned char *)((char *)(v0 + v3) + 26624) != 0) {
            ((VD0_0_v *)(v1 + 18944))->m();
            *(char *)(v2 + 0) = 0;
        }
        v3 = (v3 + 1);
        v1 = (v1 + 1536);
    } while (((unsigned int)v3 < (unsigned int)5));
    tmp0 = func_002052E0(v0);
    return tmp0;
}
}
