#include "game/mt_rand.h"
extern "C" char *func_00207470(int, int, char *);

extern "C" void func_0028C8E0(char *, int);

extern "C" void func_0028C910(char *);

extern "C" char *func_0028C3A0(char *, int, int, char *);

extern "C" char D_00577780[];

extern "C" char D_00577CB0[];

extern "C" float D_005BDA3C;

extern "C" int func_00437920(char *, char *, int *);

extern "C" int func_00437840(char *, char *, int *);

extern "C" int func_00433F50(char *, int, unsigned char);

extern "C" void func_00477690(char *, int);

extern "C" char *func_002FF750(int, char *, int);

extern "C" void func_003023F0(char *);

extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern "C" void func_002530C0(char *, char *);

typedef struct { float f[4]; } __attribute__((aligned(16))) Q476;

extern "C" Q476 D_0057BB60;

extern "C" void func_00133890(char *, char *, Q476 *);

static inline float frand476(void) { return 2.3283064e-10f * (float)mt_rand(); }

extern "C" void func_00476EC0(char *p) {
    int t;
    Q476 q;
    char *g;
    char *e;
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 0x48F) = 0;
    *(unsigned char *)(p + 0x48E) = 0;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    if (*(unsigned char *)(p + 0x48D) == 1) {
        *(int *)(p + 0x484) = func_00437920(*(char **)(p + 0x468), p + 0x50, &t);
    } else {
        *(int *)(p + 0x484) = func_00437840(*(char **)(p + 0x468), p + 0x50, &t);
    }
    *(int *)(p + 0x484) = func_00433F50(*(char **)(p + 0x468), *(int *)(p + 0x484), *(unsigned char *)(p + 0x48C));
    func_00477690(p, *(int *)(p + 0x484));
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0x470), "r"(p + 0x50) : "memory");
    *(float *)(p + 0xFC) = 1.0f;
    q = D_0057BB60;
    func_00133890(p + 0x150, p + 0xF0, &q);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(char **)(p + 0x460) = func_00207470(3, 0x1DA, 0);
    if ((e = *(char **)(p + 0x460)) != 0) {
        *(char **)(e + 0x90) = p + 0x150;
        e[0x9A] = 3;
        g = *(char **)(p + 0x460);
        g[0x3A] = 1;
    }
    *(char **)(p + 0x464) = func_002FF750(0xB, p + 0x150, 1);
    if (*(char **)(p + 0x464) != 0) {
        func_003023F0(*(char **)(p + 0x464));
    }
    *(unsigned char *)(p + 0x3B0) = 5;
    *(unsigned char *)(p + 0x3B1) = 0;
    *(short *)(p + 0x3B2) = 0;
    *(unsigned char *)(p + 0x3B4) = 2;
    *(unsigned char *)(p + 0x3B5) = 0;
    *(short *)(p + 0x3B6) = 1;
    *(unsigned char *)(p + 0x3C0) = 2;
    *(float *)(p + 0x3D0) = 0.0f;
    *(float *)(p + 0x3D4) = 0.0f;
    *(float *)(p + 0x3D8) = 0.0f;
    *(float *)(p + 0x3DC) = 1.0f;
    *(float *)(p + 0x3E0) = 18.0f;
    *(unsigned char *)(p + 0x410) = 2;
    *(float *)(p + 0x420) = 0.0f;
    *(float *)(p + 0x424) = 0.0f;
    *(float *)(p + 0x428) = 0.0f;
    *(float *)(p + 0x42C) = 1.0f;
    *(float *)(p + 0x430) = 30.0f;
    func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 3, D_00577780, p, 0);
    *(int *)(p + 0x268) = 0x30443;
    func_0028C8E0(p + 0x190, 1);
    func_0028C910(p + 0x190);
    func_0028C3A0(p + 0x190, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x190, 1, -1, p + 0x150);
    *(int *)(p + 0x488) = 0;
    func_002530C0(p, D_00577CB0);
    *(float *)(p + 0x480) = D_005BDA3C + 10.0f * frand476();
}

extern "C" {
int func_001AD100(void);
}

extern "C" {
int func_004771F0(char *);
}

extern "C" {
int func_00477550(char *);
}

extern "C" {
int func_00477600(char *);
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
int func_00476E20(int p0) {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    v2 = func_001AD100();
    v1 = *(unsigned char *)(v0 + 4);
    tmp0 = 3;
    if (v1 != tmp0) {
        switch (v1) {
        case 0:
            v2 = ((V130_0_i *)v0)->m();
            break;
        case 1:
            v2 = func_004771F0(v0);
            break;
        case 2:
            v2 = func_00477550(v0);
            break;
        }
    } else {
        v2 = func_00477600(v0);
    }
    return v2;
}
}
