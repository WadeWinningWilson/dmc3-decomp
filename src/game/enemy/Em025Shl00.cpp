struct B322a { char pad[0x40]; };

struct B322b { int x; };

struct D322 : B322a, B322b {};

extern "C" char D_0055FF30[];

extern "C" float D_00561DA0[][3];

extern "C" float *D_00561D50[][3];

extern "C" int D_00561D80[][2];

extern "C" int func_00207480(int, int, int, int);

extern "C" void func_00105300(char *, int);

extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, char *);

extern "C" void func_0028C8E0(char *, int);

extern "C" void func_002E7920(char *, int, int, int, B322b *, int);

extern "C" void func_0028C910(char *);

extern "C" char *func_0028C3A0(char *, int, int, char *);

extern "C" int func_002A4A40(char *);

extern "C" int func_0034BBE0(int, int *);

extern "C" void func_00322320(char *p) {
    D322 *d;
    *(unsigned char *)(p + 0x447) = 0;
    *(unsigned char *)(p + 0x446) = 0;
    *(unsigned char *)(p + 0x445) = 0;
    *(unsigned char *)(p + 0x444) = 0;
    *(int *)(p + 0x448) = func_00207480(3, 0x65, *(int *)(*(char **)(*(char **)(p + 0x1A4) + 0x1AD8) + 0x104), 0x10);
    if (*(int *)(p + 0x448) != 0) *(unsigned char *)(p + 0x444) = 1;
    func_00105300(p + 0x150, *(int *)(*(char **)(*(char **)(p + 0x1A4) + 0x1AD8) + 0x104));
    *(unsigned char *)(p + 0x3D0) = 3;
    *(unsigned char *)(p + 0x3D1) = 0;
    *(short *)(p + 0x3D2) = 0;
    *(unsigned char *)(p + 0x3E0) = 2;
    *(float *)(p + 0x3F0) = 0.0f;
    *(float *)(p + 0x3F4) = 0.0f;
    *(float *)(p + 0x3F8) = 0.0f;
    *(float *)(p + 0x3FC) = 1.0f;
    *(float *)(p + 0x400) = 150.0f;
    func_0028C200(p + 0x1B0, p + 0x3D0, p + 0x3E0, 3, D_0055FF30, p, p + 0x4B0);
    func_0028C8E0(p + 0x1B0, 0);
    d = (D322 *)p;
    func_002E7920(p + 0x4B0, 0, 0, 0, d, 0);
    func_0028C910(p + 0x1B0);
    func_0028C3A0(p + 0x1B0, 0, -1, p + 0x150);
    *(unsigned char *)(*(char **)(p + 0x22C) + 2) = 1;
    *(float *)(p + 0x43C) = 160.0f / D_00561DA0[func_002A4A40(*(char **)(p + 0x1A4))][*(int *)(*(char **)(p + 0x1A4) + 0x8928)];
    *(float *)(p + 0x440) = 270.0f / D_00561DA0[func_002A4A40(*(char **)(p + 0x1A4))][*(int *)(*(char **)(p + 0x1A4) + 0x8928)];
    if (*(int *)(*(char **)(p + 0x1A4) + 0x8928) == 0) {
        *(float *)(p + 0x438) = *(float *)(p + 0x434) = *D_00561D50[func_002A4A40(*(char **)(p + 0x1A4))][*(int *)(p + 0x4F4)];
    } else {
        *(int *)(p + 0x4F8) = func_0034BBE0(2, D_00561D80[func_002A4A40(*(char **)(p + 0x1A4))]);
        *(float *)(p + 0x438) = *(float *)(p + 0x434) = *D_00561D50[func_002A4A40(*(char **)(p + 0x1A4))][*(int *)(p + 0x4F4) + *(int *)(p + 0x4F8)];
    }
    *(unsigned char *)(p + 0x430) = 0;
    *(short *)(p + 0x90) = 0x7FFF;
}

extern "C" {
int func_001AD140(...);
}

extern "C" {
int func_003225B0(char *);
}

extern "C" {
int func_00322C20(void);
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
void func_00322270(int p0) {
    char *v0;
    int v1;
    float v2;
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp4;
    v0 = (char *)p0;
    tmp0 = func_00322C20();
    if ((tmp0 & 255) == 0) {
        tmp1 = func_001AD140(v0);
        return;
    } else {
        v1 = *(unsigned char *)(v0 + 4);
        switch (v1) {
        case 0:
            tmp2 = ((V130_0_i *)v0)->m();
            *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
            break;
        case 1:
            tmp4 = func_003225B0(v0);
            break;
        }
        *(float *)(v0 + 80) = *(float *)(v0 + 384);
        *(float *)(v0 + 84) = *(float *)(v0 + 388);
        v2 = *(float *)(v0 + 392);
        *(float *)(v0 + 88) = v2;
        *(int *)(v0 + 92) = 0x3f800000;
        *(short *)(v0 + 144) = 32767;
        return;
    }
}
}
