#include "game/mt_rand.h"
class V74_2_iiv {
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
    virtual void m(int, int);
};

extern "C" {
void func_004208F0(char *p0) {
    int func_0038F2C0(char *, int);
    void func_0038F300(char *, int);
    int func_0041E120(int, float);
    int v0;
    char *v1;
    int v2;
    int v3;
    float v4;
    int tmp2;
    int tmp3;
    v1 = p0;
    *(int *)(p0 + 1068) = (*(int *)(p0 + 1068) | 8192);
    *(int *)(p0 + 1068) = (*(int *)(p0 + 1068) | 32768);
    v2 = *(int *)(p0 + 1068);
    *(int *)(p0 + 1068) = (v2 | 0x4000000);
    v0 = *(unsigned char *)(p0 + 6);
    switch (v0) {
    case 0:
        ((V74_2_iiv *)(v1 + 1536))->m(0x80808080, v2);
        func_0038F300(v1, -1);
        *(char *)(v1 + 6) = 1;
        /* fall through */
    case 1:
        v3 = (int)v1;
        if (v1 != 0) {
            v3 = (v3 + 64);
        }
        tmp2 = func_0041E120(v3, 0.0f);
        v4 = 0.0f;
        if (*(float *)(v1 + 1096) <= v4) {
            tmp3 = func_0038F2C0(v1, 18);
        }
        break;
    }
}
}

class AnimF {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m28(int);
};

extern "C" void func_0041DAB0(char *, char *, int);

extern "C" void func_0041DBA0(char *, char *);

extern "C" void func_003FA440(char *, int);

extern "C" int func_003F9F90(char *);

extern "C" void func_003FA550(char *, float);

extern "C" float func_0041E060(char *);

extern "C" int func_004243B0(char *);

extern "C" void func_003FA3F0(char *, int);

extern "C" {
void func_00424990(char *p) {
    extern int func_0024E800(char *);
    float f;
    char *b;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x40000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        f = ((AnimF *)(p + 0x544))->m28(0);
        if (28.0f < f && f < 58.0f) {
            func_0041DAB0(p + 0x50, p + 0x90, func_003F9F90(p));
        } else if (58.0f < f && f < 60.0f) {
            func_003FA550(p, 5.0f);
        }
        func_0041DBA0(p, p + 0x540);
        if ((unsigned char)func_0024E800(p + 0xB60) == 1) {
            b = p;
            if (b != 0) {
                b += 0x40;
            }
            *(float *)(p + 0x54) = func_0041E060(b);
            if ((unsigned char)func_004243B0(p) == 1) {
                func_003FA3F0(p, 3);
            } else {
                func_003FA3F0(p, 0);
            }
        }
    }
}
}

extern "C" void func_0041D670(char *);

extern "C" {
void func_004245E0(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern int func_0024E800(char *);
    extern int func_0041D6B0(float *, float);
    float f;
    char *q;
    if (*(float *)(p + 0x478) <= 0.0f) {
        *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x40000000;
    }
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x3B8) = 30.0f - 9.0f * (float)(unsigned int)*(unsigned char *)(p + 0x3AB);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0041D6B0((float *)(p + 0x3B8), *(float *)(p + 0x10)) == 1) {
            func_003FA440(p, -1);
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        f = ((AnimF *)(p + 0x544))->m28(0);
        *(float *)(p + 0x3A4) = f;
        if (53.0f <= f) {
            if (*(int *)(p + 0x454) == 0) {
                *(char **)(p + 0x454) = func_00207480(3, 0x241, 0, 0x10);
                q = *(char **)(p + 0x454);
                if (q != 0) {
                    *(char **)(q + 0x90) = p + 0x360;
                    q[0x9A] = 0;
                    (*(char **)(p + 0x454))[0x3A] = 1;
                }
            }
            *(unsigned char *)(p + 6) = 3;
        }
    case 3:
        if ((unsigned char)func_0024E800(p + 0xB60) == 1) {
            func_0041D670(p + 0x454);
            func_003FA3F0(p, 0);
        }
        break;
    }
}
}

extern "C" float func_0041DB20(char *);

extern "C" int func_00423B90(char *);

extern "C" void func_003F85D0(char *);

extern "C" void func_00423BD0(char *);

extern "C" void func_00423EB0(char *);

extern "C" void func_003F8E90(char *);

extern "C" void func_003F9080(char *);

extern "C" void func_003F94A0(char *);

extern "C" void func_003F9700(char *);

class ObjB40 {
public:
    virtual void d0();
    virtual void d1();
    virtual void m10(float);
};

extern "C" {
void func_004237C0(char *p) {
    extern int func_0041D6B0(float *, float);
    ((ObjB40 *)(p + 0xB40))->m10(*(float *)(p + 0x10));
    if (!(*(float *)(p + 0x3C4) <= *(float *)(p + 0xEA4))) {
        if (func_0041DB20(p + 0x50) < 500.0f) {
            *(unsigned char *)(p + 0x488) = 0x14;
            *(float *)(p + 0x478) = 120.0f;
        }
    } else if (*(unsigned char *)(p + 5) == 2) {
        if ((unsigned char)func_00423B90(p) == 1) {
            if ((unsigned char)func_0041D6B0((float *)(p + 0x478), *(float *)(p + 0x10)) == 1) {
                *(unsigned char *)(p + 0x488) = 0x14;
                *(float *)(p + 0x478) = 120.0f;
            }
        } else {
            *(float *)(p + 0x478) = 120.0f;
        }
    }
    if (*(unsigned char *)(p + 0x488) == 0x14) {
        if (*(unsigned char *)(p + 5) == 0) {
            func_003FA3F0(p, 3);
        } else if (*(unsigned char *)(p + 5) == 3) {
            *(unsigned char *)(p + 0x488) = 0;
        }
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_003F85D0(p);
        break;
    case 2:
        func_00423BD0(p);
        break;
    case 3:
        func_00423EB0(p);
        break;
    case 10:
        func_003F8E90(p);
        break;
    case 11:
        func_003F9080(p);
        break;
    case 12:
        func_003F94A0(p);
        break;
    case 13:
        func_003F9700(p);
        break;
    }
    *(int *)(p + 0x110) = *(int *)(p + 0x110) & 0xBFFFFFFF;
}
}

extern "C" int D_01CAFF38[];

extern "C" int func_00427DE0(char *);

extern "C" void func_00427E30(char *);

extern "C" void func_00428040(char *);

extern "C" void func_00428160(char *);

extern "C" void func_003F8B60(char *);

extern "C" void func_004284F0(char *);

extern "C" {
void func_004279F0(char *p) {
    extern int func_0041D6B0(float *, float);
    if (*(unsigned char *)(p + 0x48D) == 0) {
        ((ObjB40 *)(p + 0xB40))->m10(*(float *)(p + 0x10));
        if (*(unsigned char *)(p + 5) == 0 && (unsigned char)func_0041D6B0((float *)(p + 0x478), *(float *)(p + 0x10)) == 1 &&
            (unsigned char)func_00427DE0(p) == 1) {
            *(int *)(p + 0x3BC) = *(int *)(p + 0x3BC) | 0x2000;
            func_003FA3F0(p, 3);
            *(float *)(p + 0x478) = 120.0f - 20.0f * (float)(unsigned int)*(unsigned char *)(p + 0x3AB);
        }
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_003F85D0(p);
        break;
    case 2:
        func_00427E30(p);
        break;
    case 3:
        func_00428040(p);
        break;
    case 4:
        func_00428160(p);
        break;
    case 6:
        func_003F8B60(p);
        break;
    case 7:
        func_004284F0(p);
        break;
    case 10:
        func_003F8E90(p);
        break;
    case 12:
        func_003F94A0(p);
        break;
    case 13:
        func_003F9700(p);
        break;
    }
    if (D_01CAFF38[0] == 0x191 && *(float *)(p + 0x58) < 1950.0f) {
        *(int *)(p + 0x3BC) = *(int *)(p + 0x3BC) & ~0x800;
        *(unsigned char *)(p + 0x489) = 0;
    }
    *(short *)(p + 0x484) = *(short *)(p + 0x90);
}
}

extern "C" char D_01CAFF0C[];

extern "C" void func_0038F360(char *);

extern "C" int func_0038F490(char *);

static inline char *up(char *q, int off) {
    if (q != 0) {
        q += off;
    }
    return q;
}

static inline float frand() {
    return 2.3283064e-10f * (float)mt_rand();
}

extern "C" {
void func_0041F360(char *p) {
    extern int func_0041D6B0(float *, float);
    extern void func_0041D6E0(char *, char *, int, float);
    extern void func_0038F300(char *, int);
    extern void func_0038F830(char *);
    extern void func_0038F2C0(char *, int);
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x2000;
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x10000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0: {
        float d;
        func_0038F300(p, -1);
        func_0038F360(p);
        d = func_0041DB20(p + 0x50);
        if (!(d <= 2500.0f)) {
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 12.0f;
            *(float *)(p + 0x6C) = 1.0f;
        } else if (!(d <= 1000.0f)) {
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 6.0f;
            *(float *)(p + 0x6C) = 1.0f;
        } else {
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 3.0f;
            *(float *)(p + 0x6C) = 1.0f;
        }
        *(unsigned char *)(p + 6) = 1;
    }
    case 1:
        func_0041DAB0(p + 0x50, p + 0x90, func_0038F490(p));
        func_0041D6E0(up(p, 0x40), p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0((float *)(p + 0x428), *(float *)(p + 0x10)) == 1) {
            func_0038F830(p);
            *(unsigned char *)(p + 6) = 0;
        }
        break;
    }
    if (*(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x284A) == 0x11 && func_0041DB20(p + 0x50) < 300.0f) {
        *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x4000;
        if (100.0f * frand() < 50.0f) {
            func_0038F2C0(p, 2);
        } else {
            func_0038F2C0(p, 3);
        }
    }
}
}

extern "C" void func_0041D7F0(char *, float);

class Obj600 {
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
    virtual void m74(unsigned int);
};

extern "C" {
void func_00420BD0(char *p) {
    extern void func_0041D6E0(char *, char *, int, float);
    extern int func_0041E120(char *, float);
    extern void func_0038F300(char *, int);
    extern void func_0038F2C0(char *, int);
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x2000;
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x8000;
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x8000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        ((Obj600 *)(p + 0x600))->m74(0x80808080);
        *(int *)(p + 0x80) = 0;
        *(int *)(p + 0x88) = 0;
        func_0038F300(p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 23.1f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = -0.7f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 1.0f;
        *(float *)(p + 0x428) = 0.0f;
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + 10.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (!(*(float *)(p + 0x428) <= 0.0f)) {
            if (!(*(float *)(p + 0x434) <= *(float *)(p + 0xF64))) {
                *(float *)(p + 0x438) = 10.0f;
            }
        } else {
            *(float *)(p + 0x428) = *(float *)(p + 0x428) + 1.0f;
        }
        if (*(float *)(p + 0x64) < 0.0f) {
            *(float *)(p + 0x74) = -1.0f;
        }
        func_0041D7F0(p + 0x64, *(float *)(p + 0x74) * *(float *)(p + 0x10));
        func_0041D6E0(up(p, 0x40), p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041E120(up(p, 0x40), 0.0f) == 1) {
            if (100.0f * frand() < 50.0f) {
                func_0038F2C0(p, 0x14);
            } else {
                func_0038F2C0(p, 0x18);
            }
        }
        break;
    }
}
}

extern "C" {
void func_00421150(char *p) {
    extern void func_0041D6E0(char *, char *, int, float);
    extern int func_0041E120(char *, float);
    extern void func_0038F300(char *, int);
    extern void func_0038F2C0(char *, int);
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x2000;
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x8000;
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x8000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        ((Obj600 *)(p + 0x600))->m74(0x80808080);
        func_0038F300(p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 15.1f;
        *(float *)(p + 0x68) = -20.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = -1.4f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 1.0f;
        *(float *)(p + 0x428) = 0.0f;
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + 10.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (!(*(float *)(p + 0x428) <= 0.0f)) {
            if (!(*(float *)(p + 0x434) <= *(float *)(p + 0xF64))) {
                *(float *)(p + 0x438) = 10.0f;
            }
        } else {
            *(float *)(p + 0x428) = *(float *)(p + 0x428) + 1.0f;
        }
        if (*(float *)(p + 0x64) < 0.0f) {
            *(float *)(p + 0x74) = -1.0f;
        }
        func_0041D7F0(p + 0x64, *(float *)(p + 0x74) * *(float *)(p + 0x10));
        func_0041D6E0(up(p, 0x40), p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041E120(up(p, 0x40), 0.0f) == 1) {
            if (100.0f * frand() < 50.0f) {
                func_0038F2C0(p, 0x16);
            } else {
                func_0038F2C0(p, 0x19);
            }
        }
        break;
    }
}
}

extern "C" void func_0041D820(char *, float, float);

extern "C" {
void func_00420640(char *p) {
    extern int func_0024E800(char *);
    extern void func_0041D6E0(char *, char *, int, float);
    extern int func_0041E120(char *, float);
    extern void func_0038F300(char *, int);
    extern void func_0038F2C0(char *, int);
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x2000;
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x8000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        *(float *)(p + 0x80) = 0.5f * (frand() - 0.5f);
        *(float *)(p + 0x88) = 0.5f * (frand() - 0.5f);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            *(unsigned char *)(p + 6) = 2;
        }
    case 2:
        func_0041D820(p + 0x64, -9.0f * *(float *)(p + 0x10), -30.0f);
        func_0041D6E0(up(p, 0x40), p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041E120(up(p, 0x40), 0.0f) == 1) {
            func_0038F2C0(p, 0x11);
        }
        break;
    }
}
}

extern "C" {
void func_00421400(char *p) {
    extern int func_0024E800(char *);
    extern void func_0041D6E0(char *, char *, int, float);
    extern int func_0041E120(char *, float);
    extern void func_0038F300(char *, int);
    extern void func_0038F2C0(char *, int);
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x2000;
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x8000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x80) = frand() - 0.5f;
        *(float *)(p + 0x88) = frand() - 0.5f;
        func_0038F300(p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041DBA0(p, p + 0x600);
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            *(unsigned char *)(p + 6) = 2;
        }
    case 2:
        func_0041D820(p + 0x64, -9.0f * *(float *)(p + 0x10), -30.0f);
        func_0041D6E0(up(p, 0x40), p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041E120(up(p, 0x40), 0.0f) == 1) {
            func_0038F2C0(p, 0x11);
        }
        break;
    }
}
}

extern "C" {
void func_00420E80(char *p) {
    extern int func_0024E800(char *);
    extern void func_0041D6E0(char *, char *, int, float);
    extern int func_0041E120(char *, float);
    extern void func_0038F300(char *, int);
    extern void func_0038F2C0(char *, int);
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x2000;
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x8000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x80) = 0.5f * (frand() - 0.5f);
        *(float *)(p + 0x88) = 0.5f * (frand() - 0.5f);
        func_0038F300(p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041DBA0(p, p + 0x600);
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            *(unsigned char *)(p + 6) = 2;
        }
    case 2:
        func_0041D820(p + 0x64, -9.0f * *(float *)(p + 0x10), -30.0f);
        func_0041D6E0(up(p, 0x40), p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041E120(up(p, 0x40), 0.0f) == 1) {
            func_0038F2C0(p, 0x11);
        }
        break;
    }
}
}

extern "C" {
void func_0041E6B0(char *p) {
    extern int func_0024E800(char *);
    extern int func_0041D6B0(float *, float);
    extern void func_0038F300(char *, int);
    extern void func_0038F830(char *);
    extern void func_0038F2C0(char *, int);
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x2000;
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x10000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        if (100.0f * frand() < 70.0f) {
            func_0038F300(p, -1);
            *(unsigned char *)(p + 6) = 1;
        } else {
            func_0038F300(p, 0x1C);
            *(unsigned char *)(p + 6) = 2;
        }
        func_0038F360(p);
    case 1:
        func_0041DAB0(p + 0x50, p + 0x90, func_0038F490(p));
        if ((unsigned char)func_0041D6B0((float *)(p + 0x428), *(float *)(p + 0x10)) == 1) {
            func_0038F830(p);
            *(unsigned char *)(p + 6) = 0;
        }
        break;
    case 2:
        func_0041DAB0(p + 0x50, p + 0x90, func_0038F490(p));
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            func_0038F300(p, -1);
            *(unsigned char *)(p + 6) = 1;
        }
        break;
    }
    if (*(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x284A) == 0x11 && func_0041DB20(p + 0x50) < 500.0f) {
        *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x4000;
        if (100.0f * frand() < 50.0f) {
            func_0038F2C0(p, 2);
        } else {
            func_0038F2C0(p, 3);
        }
    }
}
}

extern "C" void func_0041D800(char *, float, float);

extern "C" {
void func_0041EB00(char *p) {
    extern int func_0041D6B0(float *, float);
    extern void func_0041D6E0(char *, char *, int, float);
    extern void func_0038F300(char *, int);
    extern void func_0038F830(char *);
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x10000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x2000;
        if (*(unsigned int *)(p + 0x42C) & 0x4000) {
            func_0038F300(p, -1);
            *(float *)(p + 0x60) = -32.0f + 8.0f * frand();
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 1.0f;
            *(float *)(p + 0x70) = 1.0f;
            *(float *)(p + 0x74) = 0.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 1.0f;
        } else if (100.0f * frand() < 50.0f) {
            *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) & ~0x2000;
            func_0038F300(p, 4);
            *(float *)(p + 0x60) = -6.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 1.0f;
            *(float *)(p + 0x70) = 0.2f;
            *(float *)(p + 0x74) = 0.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 1.0f;
        } else {
            func_0038F300(p, -1);
            *(float *)(p + 0x60) = -20.0f + 2.0f * frand();
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 1.0f;
            *(float *)(p + 0x70) = 0.44f;
            *(float *)(p + 0x74) = 0.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 1.0f;
        }
        *(float *)(p + 0x428) = 79.0f;
        *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) & ~0x4000;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041D800(p + 0x60, *(float *)(p + 0x70) * *(float *)(p + 0x10), 0.0f);
        func_0041D6E0(up(p, 0x40), p + 0x60, 1, *(float *)(p + 0x10));
        func_0041DAB0(p + 0x50, p + 0x90, func_0038F490(p));
        if ((unsigned char)func_0041D6B0((float *)(p + 0x428), *(float *)(p + 0x10)) == 1) {
            func_0038F830(p);
            *(unsigned char *)(p + 6) = 0;
        }
        break;
    }
}
}

extern "C" {
void func_0041EF30(char *p) {
    extern int func_0041D6B0(float *, float);
    extern void func_0041D6E0(char *, char *, int, float);
    extern void func_0038F300(char *, int);
    extern void func_0038F830(char *);
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x2000;
    *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) | 0x10000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        if (*(unsigned int *)(p + 0x42C) & 0x4000) {
            func_0038F300(p, -1);
            *(float *)(p + 0x60) = 32.0f - 8.0f * frand();
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 1.0f;
            *(float *)(p + 0x70) = -1.0f;
            *(float *)(p + 0x74) = 0.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 1.0f;
        } else if (100.0f * frand() < 50.0f) {
            func_0038F300(p, 4);
            *(float *)(p + 0x60) = 6.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 1.0f;
            *(float *)(p + 0x70) = -0.2f;
            *(float *)(p + 0x74) = 0.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 1.0f;
        } else {
            func_0038F300(p, -1);
            *(float *)(p + 0x60) = 20.0f - 2.0f * frand();
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 1.0f;
            *(float *)(p + 0x70) = -0.44f;
            *(float *)(p + 0x74) = 0.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 1.0f;
        }
        *(float *)(p + 0x428) = 79.0f;
        *(unsigned int *)(p + 0x42C) = *(unsigned int *)(p + 0x42C) & ~0x4000;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041D820(p + 0x60, *(float *)(p + 0x70) * *(float *)(p + 0x10), 0.0f);
        func_0041D6E0(up(p, 0x40), p + 0x60, 1, *(float *)(p + 0x10));
        func_0041DAB0(p + 0x50, p + 0x90, func_0038F490(p));
        if ((unsigned char)func_0041D6B0((float *)(p + 0x428), *(float *)(p + 0x10)) == 1) {
            func_0038F830(p);
            *(unsigned char *)(p + 6) = 0;
        }
        break;
    }
}
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" int func_00201770(char *, float *, float *, float *, int);

static inline unsigned char stage_ok() {
    unsigned char r;
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0) {
        r = 0;
    } else {
        r = 1;
    }
    return r;
}

extern "C" float func_0041E060(char *p) {
    float v[4];
    float out[4];
    float buf[16];
    float r;
    if (stage_ok()) {
        QCOPY(v, p + 0x10);
        v[1] = v[1] + 130.0f;
        v[3] = 1.0f;
        if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, out, buf, 0) == 1) {
            return out[1];
        }
    }
    return 0.0f;
}

extern "C" void func_00105760(float *, float *, float);

class ObjPosC4 {
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
    virtual float *mC4();
};

#define QCOPYA(d,s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define SETPOSA(m,s) __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(s) : "memory")

#define GETPOSA(d,m) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(m) : "memory")

#define VADDIPA(d,s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_0041DBA0(char *p, char *ob) {
    ObjPosC4 *o = (ObjPosC4 *)ob;
    float m2[16];
    float m[16];
    float a[4];
    float *src = o->mC4();
    QCOPYA(p + 0x60, src);
    SETPOSA(m2, p + 0x60);
    func_00105760(m, m2, 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f));
    GETPOSA(a, m);
    VADDIPA(p + 0x50, a);
    *(float *)(p + 0x5C) = 1.0f;
}

class V28f {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m28(int);
};

class V130 {
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
    virtual void m130();
};

extern "C" V130 *func_0042D2B0(char *, int, int);

extern "C" {
void func_00423EB0(char *p) {
    extern int func_0024E800(char *);
    float f;
    f = ((V28f *)(p + 0x544))->m28(0);
    *(unsigned int *)(p + 0x110) |= 1;
    *(unsigned int *)(p + 0x3BC) |= 0x2000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(p, -1);
        *(int *)(p + 0x3B4) = 0;
        *(unsigned char *)(p + 0x488) = 0;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (100.0f < f && f < 102.0f) {
            *(V130 **)(p + 0x464) = func_0042D2B0(p, 0, 0);
            if (*(V130 **)(p + 0x464) != 0) (*(V130 **)(p + 0x464))->m130();
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        break;
    }
    if ((unsigned char)func_0024E800(p + 0xB60) == 1) func_003FA3F0(p, 0);
}
}

extern "C" void func_0048AFC0(char *, int);

extern "C" void func_0048AF80(char *, int);

extern "C" void func_0048BF50(char *, float);

extern "C" {
void func_00422F50(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern int func_0024E800(char *);
    float f = 0.2f;
    char *e;
    *(unsigned int *)(p + 0x45C) |= 0x8000000;
    *(unsigned int *)(p + 0x110) |= 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (30.0f < (*(float *)(p + 0x444) = ((V28f *)(p + 0xA44))->m28(0))) {
            *(char **)(p + 0x4E0) = func_00207480(3, 0x24B, 0, 0x10);
            if ((e = *(char **)(p + 0x4E0)) != 0) {
                *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x560) + 0x104);
                *(unsigned char *)(e + 0x9A) = 0;
                *(unsigned char *)(*(char **)(p + 0x4E0) + 0x3A) = 1;
            }
            *(unsigned char *)(p + 6) = 2;
        }
    case 2:
        if ((unsigned char)func_0024E800(p + 0x1060) == 1) {
            f = 1.0f;
            func_0048AF80(p, 7);
        }
        break;
    }
    func_0048BF50(p, f);
}
}

extern "C" void func_002A4DA0(char *);

extern "C" void func_002A4DE0(char *, int);

class ObjEn198 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void d49(); virtual void d50(); virtual void d51(); virtual void d52(); virtual void d53();
    virtual void d54(); virtual void d55(); virtual void d56(); virtual void d57(); virtual void d58(); virtual void d59();
    virtual void d60(); virtual void d61(); virtual void d62(); virtual void d63(); virtual void d64(); virtual void d65();
    virtual void d66(); virtual void m114(int); virtual void d68(); virtual void d69(); virtual void d70(); virtual void d71();
    virtual void d72(); virtual void d73(); virtual void d74(); virtual void d75(); virtual void d76(); virtual void d77();
    virtual void d78(); virtual void d79(); virtual void d80(); virtual void d81(); virtual void d82(); virtual void d83();
    virtual void d84(); virtual void d85(); virtual void d86(); virtual void d87(); virtual void d88(); virtual void d89();
    virtual void d90(); virtual void d91(); virtual void d92(); virtual void d93(); virtual void d94(); virtual void d95();
    virtual void d96(); virtual void d97(); virtual void d98(); virtual void d99(); virtual void m198();
};

extern "C" ObjEn198 *func_002A4E40(char *, signed char *, int);

extern "C" char D_0056CB60[];

class X4266 {
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
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void u70();
    virtual void u74();
    virtual void u78();
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void m198();
};

typedef struct { unsigned char b; char pad1[0xF]; float v[4] __attribute__((aligned(16))); short h; char pad2[6]; int i58; int i5C; unsigned int i60; int i64; } S4266;

static inline float frand4266(void) { return 2.3283064e-10f * (float)mt_rand(); }

extern "C" {
void func_00426650(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern int func_0024E800(char *);
    extern void func_0034BA60(int, char *, int, int, int);
    int ctx;
    S4266 s;
    float *tb;
    float r;
    char *o;
    *(unsigned int *)(p + 0x110) |= 0x40000001;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        if (*(char **)(p + 0x450) == 0) {
            *(char **)(p + 0x450) = func_00207480(3, 0x1EE, 0, 0x10);
            if ((o = *(char **)(p + 0x450)) != 0) {
                *(char **)(o + 0x90) = p + 0x360;
                *(unsigned char *)(o + 0x9A) = 0;
            }
        }
        func_0034BA60(0x2C, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        func_003FA440(p, -1);
        func_002A4DA0((char *)&ctx);
        tb = (float *)(D_0056CB60 + *(unsigned char *)(p + 0x3AB) * 36);
        r = 100.0f * frand4266();
        if (!(tb[5] <= r)) {
            s.b = 0x23;
        } else if (!(tb[6] <= r)) {
            s.b = 0x24;
        } else if (!(tb[7] <= r)) {
            s.b = 0x25;
        } else {
            s.b = 0x26;
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(s.v), "r"(p + 0x50) : "memory");
        s.h = *(short *)(p + 0x90);
        s.i58 = 4;
        s.i5C = 1;
        s.i60 = (unsigned int)*(float *)(p + 0xEA4);
        s.i64 = *(short *)(p + 0x482);
        o = (char *)func_002A4E40((char *)&ctx, (signed char *)&s, *(int *)(p + 0x4E0));
        if (o != 0) {
            ((X4266 *)o)->m198();
        }
        func_002A4DE0((char *)&ctx, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0xB60) == 1) {
            func_003FA3F0(p, 0);
        }
        break;
    }
}
}

class AnimF2 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m28(int);
};

extern "C" {
/* Arms the hit window once the clip passes frame 149, then exits through state 8 on motion end. */
void func_00421B00(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_0024E800(char *);
    extern void func_0038F300(char *, int);
    extern void func_0038F2C0(char *, int);
    *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x2000;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x80000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (149.0f <= (*(float *)(p + 0x414) = ((AnimF2 *)(p + 0x604))->m28(0))) {
            func_00207480(3, 0x194, p + 0x3D0, 16);
            *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x1000;
            *(unsigned char *)(p + 6) = 2;
        }
    case 2:
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            func_0038F2C0(p, 8);
        }
    }
}
}

extern "C" void func_0038F540(char *);

static inline unsigned char f1000(char *p) {
    return (*(int *)(p + 0x42C) & 0x1000) != 0;
}

extern "C" {
void func_0041F950(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_0024E800(char *);
    extern void func_0038F300(char *, int);
    extern void func_0041D6E0(char *, char *, int, float);
    extern void func_0038F830(char *);
    float f;
    char *b;
    *(int *)(p + 0x42C) = *(int *)(p + 0x42C) | 0x2000;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x80000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x454) = 300.0f;
        func_0038F300(p, -1);
        if (!f1000(p)) {
            func_00207480(3, 0x194, p + 0x3D0, 0x10);
        }
        *(int *)(p + 0x42C) = *(int *)(p + 0x42C) & ~0x1000;
        func_0038F540(p);
        *(float *)(p + 0x60) = 10.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        f = ((AnimF *)(p + 0x604))->m28(0);
        *(float *)(p + 0x414) = f;
        if (11.0f < f && f < 40.0f) {
            b = p;
            if (b != 0) {
                b += 0x40;
            }
            func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        }
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            func_0038F830(p);
        }
    }
}
}

extern "C" int func_003215A0(char *);

class V41F {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C();
    virtual void m130();
};

extern "C" V41F *func_0042EED0(char *, int);

extern "C" {
void func_0041FF10(char *p) {
    extern void func_0038F300(char *, int);
    extern int func_0024E800(char *);
    extern void func_0038F2C0(char *, int);
    *(unsigned int *)(p + 0x42C) |= 0x2000;
    *(unsigned int *)(p + 0x110) |= 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        *(V41F **)(p + 0x43C) = func_0042EED0(p, *(unsigned char *)(p + 0x41B));
        if (*(V41F **)(p + 0x43C) != 0) {
            (*(V41F **)(p + 0x43C))->m130();
        }
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            if ((unsigned char)func_003215A0(p + 0x130) == 1) {
                func_0038F2C0(p, 0);
            } else {
                func_0038F2C0(p, 0xF);
            }
        }
        break;
    }
}
}

struct M207 { float m[16]; };

class O425 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C();
    virtual void m130();
};

extern "C" O425 *func_0042E520(char *, unsigned int, int);

extern "C" {
void func_004252D0(char *p) {
    extern void func_0034BA60(int, char *, signed char, int, int);
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    extern unsigned char func_0041D6B0(char *, float);
    unsigned int i;
    O425 *o;
    char *e;
    *(int *)(p + 0x110) |= 0x40000001;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        for (i = 0; i < 4; i++) {
            o = func_0042E520(p, i, *(unsigned char *)(p + 0x3AB));
            if (o) o->m130();
        }
        func_0034BA60(0x23, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        *(float *)(p + 0x3B8) = 80.0f;
        p[6] = 1;
    case 1:
        if (func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) {
            func_0034BA60(0x2E, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            *(float *)(p + 0x3B8) = 20.0f;
            p[6] = 2;
        }
        break;
    case 2:
        if (func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) {
            func_003FA440(p, -1);
            if (*(char **)(p + 0x450) == 0) {
                *(char **)(p + 0x450) = func_00207480(3, 0x1F8, 0, 0x10);
                if (*(char **)(p + 0x450)) {
                    e = *(char **)(p + 0x450);
                    *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x520) + 0x104);
                    e[0x9A] = 0;
                    (*(char **)(p + 0x450))[0x3A] = 1;
                }
            }
            *(float *)(p + 0x3B8) = 220.0f;
            p[6] = 3;
        }
        break;
    case 3:
        if (func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) func_003FA3F0(p, 0);
        break;
    }
}
}

class V28_1_if {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m(int);
};

extern "C" {
void func_0041FAA0(char *p0) {
    int func_0024E800(...);
    void func_0038F300(char *, int, int);
    int func_0038F830(int);
    void func_0041D6E0(int, char *, int, float);
    int v0;
    int v1;
    char *v2;
    int v3;
    float v4;
    int v5;
    int v6;
    int tmp2;
    *(int *)(p0 + 1068) = (*(int *)(p0 + 1068) | 8192);
    v0 = *(int *)(p0 + 272);
    *(int *)(p0 + 272) = (0x80000000 | v0);
    v1 = *(unsigned char *)(p0 + 6);
    v2 = p0;
    switch (v1) {
    case 0:
        *(int *)(v2 + 1108) = 0x43960000;
        func_0038F300(p0, -1, v0);
        *(int *)(v2 + 96) = 0xc1200000;
        *(int *)(v2 + 100) = 0;
        *(int *)(v2 + 104) = 0;
        *(int *)(v2 + 108) = 0x3f800000;
        *(char *)(v2 + 6) = 1;
        /* fall through */
    case 1:
        v4 = ((V28_1_if *)(v2 + 1540))->m(0);
        *(float *)(v2 + 1044) = v4;
        if (11.0f < v4) {
            v5 = (int)v2;
            if (v4 < 40.0f) {
                if (v2 != 0) {
                    v5 = (v5 + 64);
                }
                func_0041D6E0(v5, (v2 + 96), 1, *(float *)(v2 + 16));
            }
        }
        v3 = func_0024E800((v2 + 3104));
        tmp2 = (v3 & 255);
        v6 = (int)v2;
        if (1 == tmp2) {
            v3 = func_0038F830(v6);
        }
        break;
    }
}
}
