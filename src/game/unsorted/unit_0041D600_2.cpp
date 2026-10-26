extern "C" char D_01CAFF0C[];

extern "C" unsigned int D_01DF8810[];

extern "C" unsigned int D_01DF7E50[];

extern "C" void func_00207A90(unsigned int *);

extern "C" void func_0034BA60(int, char *, int, int, int);

extern "C" char D_0056F440[];

extern "C" void func_003FA770(char *, char *, char *, float *, float *);

extern "C" int func_003FA5B0(char *, float *);

extern "C" void func_003FA5F0(char *, int, char *);

extern "C" void func_003F9940(char *);

extern "C" int func_00424DE0(char *);

extern "C" void func_0041D7F0(char *, float);

class B0_424 {
public:
    char pad[0x40];
};

class B1_424 {
public:
    int x;
};

class D_424 : public B0_424, public B1_424 {
public:
    int y;
};

static inline float frand424(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return 2.3283064e-10f * (float)y;
}

extern "C" {
void func_00424EB0(D_424 *self) {
    extern void func_0041D6E0(char *, char *, int, float);
    extern int func_0041D6B0(char *, float);
    extern int func_0041E120(char *, float);
    extern void func_003FA550(char *, float);
    extern void func_003FA3F0(char *, int);
    extern void func_003FA440(char *, int);
    char *p = (char *)self;
    float r[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float *tb;
    float *rp;
    int k;
    unsigned char ok;
    tb = (float *)(D_0056F440 + *(unsigned char *)(p + 0x3AB) * 8);
    ok = 0;
    *(int *)(p + 0x110) |= 0x40000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(p, -1);
        *(float *)(p + 0x3B8) = tb[0];
        *(unsigned char *)(p + 6) = 1;
    case 1:
        *(float *)(p + 0x54) += tb[1] * *(float *)(p + 0x10);
        if ((unsigned char)func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) {
            rp = r;
            func_003FA770(p, p + 0x50, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, v, rp);
            if (100.0f * frand424() < 50.0f) {
                k = (unsigned char)func_003FA5B0(p, v);
            } else {
                k = (unsigned char)func_003FA5B0(p, rp);
            }
            func_003FA5F0(p, k, p + 0x60);
            *(float *)(p + 0x60) *= 1.0f + 0.15f * (float)*(unsigned char *)(p + 0x3AB);
            *(float *)(p + 0x60) *= 1.0f + 0.15f * (float)*(unsigned char *)(p + 0x3AB);
            func_003F9940(p);
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        func_0041D6E0((char *)(B1_424 *)self, p + 0x60, 0, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) ok = 1;
        if ((unsigned char)func_00424DE0(p) == 1) ok = 1;
        if (ok == 1) {
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 1.0f;
            *(unsigned char *)(p + 6) = 3;
        }
        break;
    case 3:
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        func_0041D6E0((char *)(B1_424 *)self, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041E120((char *)(B1_424 *)self, 0.0f) == 1) {
            func_003FA550(p, 5.0f);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            if ((unsigned char)func_00424DE0(p) == 1) {
                func_003FA3F0(p, 3);
            } else {
                func_003FA3F0(p, 0);
            }
        }
        break;
    }
}
}

extern "C" char D_0056F470[];

extern "C" void func_003FA730(char *, char *, char *, float *, float *);

extern "C" int func_00425D20(char *);

class B0_425 {
public:
    char pad[0x40];
};

class B1_425 {
public:
    int x;
};

class D_425 : public B0_425, public B1_425 {
public:
    int y;
};

static inline float frand425(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return 2.3283064e-10f * (float)y;
}

extern "C" {
void func_00425E60(D_425 *self) {
    extern void func_0041D6E0(char *, char *, int, float);
    extern int func_0041D6B0(char *, float);
    extern int func_0041E120(char *, float);
    extern void func_003FA550(char *, float);
    extern void func_003FA3F0(char *, int);
    extern void func_003FA440(char *, int);
    char *p = (char *)self;
    float r[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float *tb;
    float *rp;
    int k;
    unsigned char ok;
    tb = (float *)(D_0056F470 + *(unsigned char *)(p + 0x3AB) * 8);
    ok = 0;
    *(int *)(p + 0x110) |= 0x40000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(p, -1);
        *(float *)(p + 0x3B8) = tb[0];
        *(unsigned char *)(p + 6) = 1;
    case 1:
        *(float *)(p + 0x54) += tb[1] * *(float *)(p + 0x10);
        if ((unsigned char)func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) {
            rp = r;
            func_003FA730(p, p + 0x50, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, v, rp);
            if (100.0f * frand425() < 50.0f) {
                k = (unsigned char)func_003FA5B0(p, v);
            } else {
                k = (unsigned char)func_003FA5B0(p, rp);
            }
            func_003FA5F0(p, k, p + 0x60);
            *(float *)(p + 0x60) *= 1.0f + 0.15f * (float)*(unsigned char *)(p + 0x3AB);
            *(float *)(p + 0x60) *= 1.0f + 0.15f * (float)*(unsigned char *)(p + 0x3AB);
            func_003F9940(p);
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        func_0041D6E0((char *)(B1_425 *)self, p + 0x60, 0, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) ok = 1;
        if ((unsigned char)func_00425D20(p) == 1) ok = 1;
        if (ok == 1) {
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 1.0f;
            *(unsigned char *)(p + 6) = 3;
        }
        break;
    case 3:
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        func_0041D6E0((char *)(B1_425 *)self, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041E120((char *)(B1_425 *)self, 0.0f) == 1) {
            func_003FA550(p, 5.0f);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            if ((unsigned char)func_00425D20(p) == 1) {
                func_003FA3F0(p, 3);
            } else {
                func_003FA3F0(p, 0);
            }
        }
        break;
    }
}
}

extern "C" char D_0056F4A0[];

class B0_426 {
public:
    char pad[0x40];
};

class B1_426 {
public:
    int x;
};

class D_426 : public B0_426, public B1_426 {
public:
    int y;
};

static inline float frand426(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return 2.3283064e-10f * (float)y;
}

extern "C" {
void func_00426C50(D_426 *self) {
    extern void func_0041D6E0(char *, char *, int, float);
    extern int func_0041D6B0(char *, float);
    extern int func_0041E120(char *, float);
    extern void func_003FA550(char *, float);
    extern void func_003FA3F0(char *, int);
    extern void func_003FA440(char *, int);
    char *p = (char *)self;
    float d[4] __attribute__((aligned(16)));
    float c[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float *bp;
    float *cp;
    float *dp;
    float f;
    int k;
    unsigned char ok;
    float *tb;
    tb = (float *)(D_0056F4A0 + *(unsigned char *)(p + 0x3AB) * 8);
    ok = 0;
    *(int *)(p + 0x3BC) |= 0x2000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(p, -1);
        *(float *)(p + 0x3B8) = tb[0];
        *(unsigned char *)(p + 6) = 1;
    case 1:
        *(float *)(p + 0x54) += tb[1] * *(float *)(p + 0x10);
        if ((unsigned char)func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) {
            f = 100.0f * frand426();
            bp = b;
            func_003FA730(p, p + 0x50, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, a, bp);
            dp = d;
            cp = c;
            func_003FA770(p, p + 0x50, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, cp, dp);
            if (f < 25.0f) {
                k = (unsigned char)func_003FA5B0(p, a);
            } else if (f < 50.0f) {
                k = (unsigned char)func_003FA5B0(p, bp);
            } else if (f < 75.0f) {
                k = (unsigned char)func_003FA5B0(p, cp);
            } else {
                k = (unsigned char)func_003FA5B0(p, dp);
            }
            func_003FA5F0(p, k, p + 0x60);
            *(float *)(p + 0x60) *= 1.0f + 0.25f * (float)*(unsigned char *)(p + 0x3AB);
            *(float *)(p + 0x68) *= 1.0f + 0.25f * (float)*(unsigned char *)(p + 0x3AB);
            func_003F9940(p);
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        func_0041D6E0((char *)(B1_426 *)self, p + 0x60, 0, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) ok = 1;
        if (*(unsigned char *)(p + 0x488) == 0x14) ok = 1;
        if (ok == 1) {
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 1.0f;
            *(unsigned char *)(p + 6) = 3;
        }
        break;
    case 3:
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        func_0041D6E0((char *)(B1_426 *)self, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041E120((char *)(B1_426 *)self, 0.0f) == 1) {
            func_003FA550(p, 5.0f);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            func_003FA3F0(p, 0);
        }
        break;
    }
}
}

extern "C" char D_0056F4F0[];

extern "C" void func_0041DAB0(char *, char *, int);

class B0_427 {
public:
    char pad[0x40];
};

class B1_427 {
public:
    int x;
};

class D_427 : public B0_427, public B1_427 {
public:
    int y;
};

extern "C" {
void func_00427E30(D_427 *self) {
    extern void func_0041D6E0(char *, char *, int, float);
    extern int func_0041E120(char *, float);
    extern void func_003FA550(char *, float);
    extern void func_003FA3F0(char *, int);
    extern void func_003FA440(char *, int);
    extern int func_003F9F90(char *);
    extern int func_00427DE0(char *);
    char *p = (char *)self;
    float *tb;
    tb = (float *)(D_0056F4F0 + *(unsigned char *)(p + 0x3AB) * 12);
    *(int *)(p + 0x110) |= 0x40000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = tb[0];
        *(float *)(p + 0x68) = tb[1];
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (((*(int *)(p + 0x3BC) & 0x800) != 0) == 0) {
            func_0041DAB0(p + 0x50, p + 0x90, func_003F9F90(p));
        }
        func_0041D7F0(p + 0x64, tb[2] * *(float *)(p + 0x10));
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(float *)(p + 0x68) = 0.0f;
            *(unsigned char *)(p + 6) = 2;
        }
        func_0041D6E0((char *)(B1_427 *)self, p + 0x60, 1, *(float *)(p + 0x10));
        break;
    case 2:
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        func_0041D6E0((char *)(B1_427 *)self, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041E120((char *)(B1_427 *)self, 0.0f) == 1) {
            func_003FA550(p, 5.0f);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            if ((unsigned char)func_00427DE0(p) == 1) {
                func_003FA3F0(p, 3);
            } else {
                func_003FA3F0(p, 0);
            }
        }
        break;
    }
}
}

extern "C" char D_0056F3C0[];

class B0_423 {
public:
    char pad[0x40];
};

class B1_423 {
public:
    int x;
};

class D_423 : public B0_423, public B1_423 {
public:
    int y;
};

extern "C" {
void func_00423BD0(D_423 *self) {
    extern void func_0041D6E0(char *, char *, int, float);
    extern int func_0041D6B0(char *, float);
    extern int func_0041E120(char *, float);
    extern void func_003FA550(char *, float);
    extern void func_003FA3F0(char *, int);
    extern void func_003FA440(char *, int);
    char *p = (char *)self;
    float d[4] __attribute__((aligned(16)));
    float c[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float *bp;
    float *cp;
    float *dp;
    float f;
    int k;
    float *tb;
    unsigned char ok;
    tb = (float *)(D_0056F3C0 + *(unsigned char *)(p + 0x3AB) * 8);
    ok = 0;
    *(int *)(p + 0x3BC) |= 0x2000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(p, -1);
        *(float *)(p + 0x3B8) = tb[0];
        *(unsigned char *)(p + 6) = 1;
    case 1:
        *(float *)(p + 0x54) += tb[1] * *(float *)(p + 0x10);
        if ((unsigned char)func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) {
            k = (unsigned char)func_003FA5B0(p, (float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50));
            func_003FA5F0(p, k, p + 0x60);
            *(float *)(p + 0x60) *= 1.0f + 0.25f * (float)*(unsigned char *)(p + 0x3AB);
            *(float *)(p + 0x68) *= 1.0f + 0.25f * (float)*(unsigned char *)(p + 0x3AB);
            *(float *)(p + 0x3B8) = tb[0];
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        func_0041D6E0((char *)(B1_423 *)self, p + 0x60, 0, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) ok = 1;
        if (*(unsigned char *)(p + 0x488) == 0x14) ok = 1;
        if (ok == 1) {
            *(float *)(p + 0x60) = 0.0f;
            *(float *)(p + 0x64) = 0.0f;
            *(float *)(p + 0x68) = 0.0f;
            *(float *)(p + 0x6C) = 1.0f;
            *(unsigned char *)(p + 6) = 3;
        }
        break;
    case 3:
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        func_0041D6E0((char *)(B1_423 *)self, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041E120((char *)(B1_423 *)self, 0.0f) == 1) {
            func_003FA550(p, 5.0f);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            func_003FA3F0(p, 0);
        }
        break;
    }
}
}

extern "C" int func_0024E800(char *);

extern "C" void func_0048AFC0(char *, int);

extern "C" void func_0048B320(char *);

extern "C" void func_0041DBA0(char *, char *);

extern "C" float func_0041DB20(float *);

extern "C" int func_0021D260(char *, int, int);

extern "C" void func_0048AF80(char *, int);

class O422 {
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
    virtual void d128(); virtual void d12C(); virtual void d130();
    virtual char *m134(int);
};

#define QCOPYR422(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

extern "C" {
void func_00422620(char *p) {
    extern unsigned char func_0041D6B0(char *, float);
    float v[4] __attribute__((aligned(16)));
    char *pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
    *(int *)(p + 0x110) |= 1;
    *(float *)(p + 0x4B4) = *(float *)(p + 0x4B4) - 6.0f * *(float *)(p + 0x10);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        func_0048B320(p);
        p[0x4D0] = 0;
        *(float *)(p + 0x458) = 23.0f;
        p[6] = 1;
    case 1:
        func_0041DBA0(p, p + 0xA40);
        if (func_0041D6B0(p + 0x458, *(float *)(p + 0x10)) == 1 && *(unsigned char *)(p + 0x4D0) == 0) {
            QCOPYR422(v, *(char **)(((O422 *)p)->m134(1) + 0x104) + 0x30);
            v[1] = v[1] - 100.0f;
            if (func_0041DB20(v) < 150.0f) {
                *(unsigned char *)(p + 0x4D0) = func_0021D260(pl, 1, *(int *)(p + 0x554));
                if (*(unsigned char *)(p + 0x4D0)) {
                    p[0x4D1] = 1;
                    *(float *)(p + 0x4CC) = 15.0f;
                    *(float *)(p + 0x4C8) = 18.0f;
                    func_0048AF80(p, 0xE);
                    return;
                }
            }
        }
        if ((unsigned char)func_0024E800(p + 0x1060) == 1) func_0048AF80(p, 0xC);
        break;
    }
}
}

struct M207 { float m[16]; };

extern "C" {
char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
}

extern "C" void func_0038F300(char *, int);

extern "C" void func_0038F830(char *);

class O420 {
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

extern "C" void func_004209D0(char *p) {
    char *o;
    unsigned char a;
    unsigned char b;
    *(unsigned int *)(p + 0x42C) |= 0x2000;
    *(unsigned int *)(p + 0x42C) |= 0x8000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        o = func_00207480(3, 0x36D, 0, 0x10);
        if (o != 0) {
            *(char **)(o + 0x90) = *(char **)(*(char **)(p + 0x4E0) + 0x104);
            *(unsigned char *)(o + 0x9A) = 1;
        }
        *(int *)(p + 0x80) = 0;
        *(int *)(p + 0x88) = 0;
        *(float *)(p + 0x424) = 0.0f;
        func_0038F300(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        *(float *)(p + 0x424) = *(float *)(p + 0x424) + 1.0f;
        if (!(*(float *)(p + 0x424) <= 64.0f)) *(float *)(p + 0x424) = 64.0f;
        a = 0x80 - (unsigned char)(unsigned int)(0.5f * *(float *)(p + 0x424));
        b = (unsigned char)(unsigned int)*(float *)(p + 0x424) + 0x80;
        ((O420 *)(p + 0x600))->m74((a << 16) + (b + (a << 8)) + 0x80000000);
        func_0041DBA0(p, p + 0x600);
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            *(unsigned int *)(p + 0x42C) &= ~0x8000;
            func_0038F830(p);
            ((O420 *)(p + 0x600))->m74(0x80808080);
        }
        break;
    }
}

extern "C" char *func_0042F650(char *, unsigned int);

class B0_4262 {
public:
    char pad[0x40];
};

class B1_4262 {
public:
    int x;
};

class D_4262 : public B0_4262, public B1_4262 {
public:
    int y;
};

class A4262 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual float m28(int);
};

class X4262 {
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
    virtual void m130();
};

static inline float frand4262(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return 2.3283064e-10f * (float)y;
}

extern "C" {
void func_00426280(D_4262 *self) {
    extern void func_003FA440(char *, int);
    extern void func_0041D6E0(char *, char *, int, float);
    extern int func_0041E120(char *, float);
    extern void func_003FA3F0(char *, int);
    char *p = (char *)self;
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float *bp;
    float t;
    float f;
    unsigned int i;
    char *o;
    int k;
    t = ((A4262 *)(p + 0x544))->m28(0);
    *(unsigned int *)(p + 0x110) |= 0x40000001;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        func_003FA440(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (1.0f < t && t < 3.0f) {
            for (i = 0; i < 4; i++) {
                o = func_0042F650(p, i);
                if (o != 0) {
                    ((X4262 *)o)->m130();
                }
            }
            if (*(unsigned char *)(p + 0x3AB) > 0) {
                bp = b;
                func_003FA730(p, p + 0x50, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, a, bp);
                if (100.0f * frand4262() < 50.0f) {
                    k = (unsigned char)func_003FA5B0(p, a);
                } else {
                    k = (unsigned char)func_003FA5B0(p, bp);
                }
                func_003FA5F0(p, k, p + 0x60);
                f = 0.2f * (float)*(unsigned char *)(p + 0x3AB);
                *(float *)(p + 0x60) *= f;
                *(float *)(p + 0x68) *= f;
                *(unsigned char *)(p + 6) = 2;
            }
        }
    case 2:
        if (*(unsigned char *)(p + 0x3AB) > 0 && 90.0f < t && t < 120.0f) {
            func_0041D6E0((char *)(B1_4262 *)self, p + 0x60, 0, *(float *)(p + 0x10));
            func_0041E120((char *)(B1_4262 *)self, 0.0f);
        }
        if ((unsigned char)func_0024E800(p + 0xB60) == 1) {
            func_003FA3F0(p, 0);
        }
        break;
    }
}
}

extern "C" float D_0056F520[];

class A428 {
public:
    char pad[0x40];
};

class B428 {
public:
    int x;
};

class P428 : public A428, public B428 {
public:
    int y;
};

static inline int f428(char *p) { return (*(int *)(p + 0x3BC) & 0x800) != 0; }

extern "C" {
void func_00428160(P428 *q) {
    extern void func_003FA440(P428 *, int);
    extern int func_003F9F90(P428 *);
    extern void func_0041D6E0(B428 *, char *, float, int);
    extern int func_0041E120(B428 *, float);
    extern void func_003FA550(P428 *, float);
    extern int func_00427DE0(P428 *);
    extern void func_003FA3F0(P428 *, int);
    char *p = (char *)q;
    float *t;
    t = &D_0056F520[*(unsigned char *)(p + 0x3AB) * 3];
    *(int *)(p + 0x110) |= 0x40000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(q, -1);
        *(int *)(p + 0x60) = 0;
        *(float *)(p + 0x64) = t[0];
        *(float *)(p + 0x68) = t[1];
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041D7F0(p + 0x64, t[2] * *(float *)(p + 0x10));
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(float *)(p + 0x68) = 0.0f;
            *(unsigned char *)(p + 6) = 2;
        }
        if (!f428(p)) func_0041DAB0(p + 0x50, p + 0x90, func_003F9F90(q));
        func_0041D6E0(q, p + 0x60, *(float *)(p + 0x10), 1);
        break;
    case 2:
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        func_0041D6E0(q, p + 0x60, *(float *)(p + 0x10), 1);
        if ((unsigned char)func_0041E120(q, 0.0f) == 1) {
            func_003FA550(q, 5.0f);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            if ((unsigned char)func_00427DE0(q) == 1) func_003FA3F0(q, 3);
            else *(unsigned char *)(p + 6) = 3;
        }
        break;
    case 3:
        *(int *)(p + 0x60) = 0;
        *(float *)(p + 0x64) = t[0];
        *(float *)(p + 0x68) = t[1];
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 4;
    case 4:
        func_0041D7F0(p + 0x64, t[2] * *(float *)(p + 0x10));
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(float *)(p + 0x68) = 0.0f;
            *(unsigned char *)(p + 6) = 5;
        }
        if (!f428(p)) func_0041DAB0(p + 0x50, p + 0x90, func_003F9F90(q));
        func_0041D6E0(q, p + 0x60, *(float *)(p + 0x10), 1);
        break;
    case 5:
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        func_0041D6E0(q, p + 0x60, *(float *)(p + 0x10), 1);
        if ((unsigned char)func_0041E120(q, 0.0f) == 1) {
            func_003FA550(q, 5.0f);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            if ((unsigned char)func_00427DE0(q) == 1) func_003FA3F0(q, 3);
            else func_003FA3F0(q, 0);
        }
        break;
    }
}
}
