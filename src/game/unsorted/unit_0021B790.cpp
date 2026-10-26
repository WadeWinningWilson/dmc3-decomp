extern "C" unsigned char func_0021C6D0(char *p) {
    unsigned char r = 0;
    unsigned int i;
    for (i = 0; i < 16; i++) {
        if (*(unsigned char *)(p + i + 0x24DB) == 2) {
            r = 1;
        }
    }
    if (r == 1) {
        *(int *)(p + 0x3E98) = 0;
    }
    for (i = 0; i < 16; i++) {
        (p + i)[0x24DB] = 0;
    }
    *(unsigned char *)(p + 0x299C) = 0;
    *(unsigned char *)(p + 0x2905) = 0;
    *(int *)(p + 0x2910) = 0;
    *(int *)(p + 0x29A8) = 0;
    return r;
}

extern "C" void func_0021CBB0(char *, int);

extern "C" void func_002490F0(char *, int, int, int, int, int, float);

extern "C" int func_002D9EB0(char *);

extern "C" int func_002496D0(char *);

extern "C" void func_0021B790(char *, int);

extern "C" void func_0021C100(char *, int, int, float, float);

extern "C" {
void func_002DAB90(char *p, unsigned char k);
}

extern "C" {
void func_00223E20(char *p) {
    extern char *func_00207480(int, int, int, int);
    char *o;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        if ((*(int *)(p + 0x2898) & 2) == 0) {
            func_002490F0(p, 0x19, 0, -1, 2, 5, -1.0f);
            func_0021CBB0(p, 1);
        } else {
            func_002490F0(p, 0x19, 1, -1, 2, 5, -1.0f);
        }
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((*(int *)(p + 0x2898) & 2) == 0) {
                func_0021B790(p, 5);
            } else {
                func_0021C100(p, 8, 5, 0.0f, -1.5f);
            }
            return;
        }
        if (*(unsigned char *)(p + 0x24D5)) {
            if (*(unsigned short *)(p + 0x24C6) == 0x1900) {
                o = func_00207480(3, 0x29B, 0, 8);
                if (o) {
                    *(int *)(o + 0x94) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x13A4) + 0x104);
                    o[0x99] = 0;
                }
            } else {
                o = func_00207480(3, 0x29B, 0, 8);
                if (o) {
                    *(int *)(o + 0x94) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x13A4) + 0x104);
                    o[0x99] = 0;
                }
                o = func_00207480(3, 0x29B, 0, 8);
                if (o) {
                    *(int *)(o + 0x94) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x13B4) + 0x104);
                    o[0x99] = 0;
                }
            }
        }
        func_002DAB90(p, 3);
        break;
    }
}
}

extern "C" char D_00666710[];

extern "C" char D_0066671A[];

extern "C" unsigned short func_001AE770(char *, int);

extern "C" int func_0023DF80(char *, float);

extern "C" void func_0021BFC0(char *);

extern "C" void func_00430EA0(char *, int);

extern "C" void func_002DA2A0(char *);

extern "C" void func_002DA540(char *);

extern "C" void func_002DA3A0(char *, int);

extern "C" void func_002DA650(char *);

typedef struct { float f[9]; } E21F;

typedef struct { E21F e[5]; } R21F;

extern "C" void func_0021FF20(char *p) {
    float t;
    if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64))) {
        func_0021BFC0(p);
        return;
    }
    func_00430EA0(p, 0);
    func_002496D0(p);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        if (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[(unsigned short)func_001AE770(D_00666710, 0x40)]) {
            p[0x2903] = 1;
            func_002DA2A0(p);
            *(float *)(p + 0x2870) = 5.0f;
        }
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        *(float *)(p + 0x2870) -= *(float *)(p + 0x10);
        t = *(float *)(p + 0x2870);
        if (t <= 0.0f) {
            if ((*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[(unsigned short)func_001AE770(D_00666710, 0x40)]) == 0) {
                *(float *)(p + 0x74) = -10.0f;
            }
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        if (*(float *)(p + 0x64) < 18.5f) {
            *(float *)(p + 0x74) = -1.5f;
            *(float *)(p + 0x2870) = 14.0f;
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 3:
        *(float *)(p + 0x2870) -= *(float *)(p + 0x10);
        t = *(float *)(p + 0x2870);
        if (t < 0.0f) {
            *(float *)(p + 0x74) = (*(R21F **)(p + 0x2830))[*(unsigned char *)(p + 0x2903)].e[*(unsigned char *)(p + 0x2904)].f[20];
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 4:
        *(float *)(p + 0x150) = *(float *)(p + 0x150) * 0.95f;
        break;
    }
    func_002DA540(p);
    func_002DA3A0(p, *(short *)(p + 0x28DC));
    func_002DA650(p);
}

extern "C" int func_002242C0(char *);

extern "C" void func_002DBD30(char *);

extern "C" void func_002DBCC0(char *, int, float, float);

extern "C" void func_0021CB60(char *, int);

extern "C" void func_0021CB50(char *, int);

#define QCOPY224(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" {
void func_00224030(char *p) {
    extern char *func_00207480(int, int, int, int);
    char *o;
    if ((unsigned char)func_002242C0(p) == 0) {
        switch (*(unsigned char *)(p + 0x284C)) {
        case 0:
            if ((*(int *)(p + 0x2898) & 2) == 0) {
                func_002490F0(p, 0x1A, 1, -1, 2, 3, -1.0f);
                (*(unsigned char *)(p + 0x284C))++;
            } else {
                func_002490F0(p, 0x1A, 2, -1, 2, 5, -1.0f);
                func_002DBD30(p);
                func_002DBCC0(p, 1, -1.0f, 0.0f);
                p[0x284C] = 2;
            }
            QCOPY224(*(char **)(p + 0x3D44) + 0x50, p + 0x50);
            o = func_00207480(3, 0x2AA, 0, 8);
            if (o) {
                *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
                o[0x9A] = 0;
            }
            break;
        case 1:
            if ((unsigned char)func_002496D0(p) == 4) {
                func_0021B790(p, 5);
                break;
            }
            func_002DAB90(p, 3);
            break;
        case 2:
            func_002496D0(p);
            func_002DA3A0(p, *(short *)(p + 0x90));
            if (*(unsigned char *)(p + 0x24D5) == 1) func_002DBCC0(p, 1, *(float *)(p + 0x64), -1.5f);
            if (func_0023DF80(p, *(float *)(p + 0x64))) {
                func_002490F0(p, 0x1A, 1, -1, 0, 0, 32.0f);
                func_0021CB60(p, 2);
                func_0021CB50(p, 1);
                (*(unsigned char *)(p + 0x284C))++;
            }
            break;
        case 3:
            if ((unsigned char)func_002496D0(p) == 4) func_0021B790(p, 5);
            break;
        }
    } else if (func_0023DF80(p, 0.0f)) {
        func_0021B790(p, 0);
    } else {
        func_0021C100(p, 6, 0, 0.0f, -1.5f);
    }
}
}

extern "C" short func_002DAA60(char *, char *);

extern "C" char D_01DFAB70[];

extern "C" char D_01DFAB7C[];

class O222 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74();
    virtual void m78(float *);
};

extern "C" void func_00222D60(char *p) {
    float v[4] __attribute__((aligned(16)));
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        if (*(unsigned char *)(p + 0x3C82) != 1) {
            if ((*(int *)(p + 0x2898) & 2) == 0) {
                func_002490F0(p, 0x18, 4, -1, 0, 0, -1.0f);
                func_0021CBB0(p, 1);
                p[0x284C] = 1;
            } else {
                func_002490F0(p, 0x18, 9, -1, 0, 0, -1.0f);
                func_002DBD30(p);
                func_002DBCC0(p, 1, 0.0f, -1.5f);
                p[0x2866] = 0;
                p[0x284C] = 2;
            }
        } else {
            func_002490F0(p, 0x18, 0xE, -1, 0, 0, -1.0f);
            if ((unsigned char)func_002242C0(p) == 0) {
                *(unsigned int *)D_01DFAB70 |= 0x80000000;
            } else {
                *(unsigned int *)D_01DFAB7C |= 0x20000;
            }
            func_0021CBB0(p, 1);
            p[0x284C] = 1;
        }
        (*(O222 **)(p + 0x2AE8))->m78(v);
        *(short *)(p + 0x90) = func_002DAA60(p, (char *)v);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) func_0021B790(p, 0xA);
        func_002DAB90(p, 3);
        break;
    case 2:
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021BFC0(p);
            break;
        }
        if ((unsigned char)func_002496D0(p) == 4) func_0021C100(p, 8, 5, *(float *)(p + 0x64), -1.5f);
        if (*(unsigned char *)(p + 0x24D5) == 1) p[0x2866] = 1;
        func_002DAB90(p, 3);
        if (*(unsigned char *)(p + 0x2866) == 1) func_002DA3A0(p, *(short *)(p + 0x28DC));
        break;
    }
}

extern "C" char D_01CAFF0C[];

extern "C" int func_002DA0B0(char *, int);

static inline unsigned char busy2_21F(char *o) {
    if (*(int **)(o + 8) && **(int **)(o + 8)) return 1;
    if (*(int *)(o + 0x1C) - *(int *)(o + 0x20)) return 1;
    if (*(unsigned char *)(o + 0x1A) == 1) return 1;
    return 0;
}

static inline unsigned char busy_21F(char *g) {
    char *o = *(char **)(g + 0x20);
    if (o) return busy2_21F(o);
    return 0;
}

extern "C" void func_0021F440(char *p) {
    char *g;
    float t;
    float u;
    func_002496D0(p);
    if (*(signed char *)(p + 0x46) == 1) return;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        g = *(char **)D_01CAFF0C;
        if (*(unsigned char *)(g + 8) == 0 && *(unsigned short *)(p + 0x24C6) == 0 && *(unsigned char *)(p + 0x28A7) == 0) {
            *(float *)(p + 0x2874) -= *(float *)(p + 0x10);
            t = *(float *)(p + 0x2874);
            if (t <= 0.0f) {
                func_002490F0(p, 0, 3, -1, 2, 0, -1.0f);
                (*(unsigned char *)(p + 0x284C))++;
            }
        } else if (*(unsigned short *)(p + 0x24C6) == 0x604) {
            *(float *)(p + 0x2874) -= *(float *)(p + 0x10);
            t = *(float *)(p + 0x2874);
            if (t <= 0.0f) {
                func_002490F0(p, 0, 0, -1, 2, 0xA, -1.0f);
                (*(unsigned char *)(p + 0x284C))++;
            }
        } else {
            if (busy_21F(g) == 0) {
                t = *(float *)(p + 0x2870);
                if (!(0.0f == t)) {
                    u = t - *(float *)(p + 0x10);
                    *(float *)(p + 0x2870) = u;
                    if (u <= 0.0f) {
                        *(float *)(p + 0x2870) = 0.0f;
                        func_002490F0(p, 0, 0, -1, 2, 0xF, -1.0f);
                    }
                }
            }
            if (*(unsigned short *)(p + 0x24C6) == 0xD06 && (unsigned char)func_002DA0B0(p, 0) == 0) func_002490F0(p, 0, 0, -1, 2, 0xF, -1.0f);
            if (*(unsigned short *)(p + 0x24C6) == 0xD06 || *(unsigned short *)(p + 0x24C6) == 0x700) func_002DAB90(p, 3);
        }
        break;
    case 1:
        break;
    }
}

extern "C" {
void func_002DBAA0(char *p, int a, float f);
}

extern "C" char D_01DFABA0[];

extern "C" void func_003305E0(char *, int, int, char *, int, int, int);

extern "C" {
void func_00227860(char *p) {
    extern char *func_00207480(int, int, int, int);
    char *o;
    float t;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            func_0021CBB0(p, 1);
            func_002490F0(p, 0, 0x13, -1, 0, 0, -1.0f);
            *(int *)(p + 0x2870) = 0;
            p[0x2866] = 1;
            (*(unsigned char *)(p + 0x284D))++;
            break;
        case 1:
            if ((unsigned char)func_002496D0(p) == 4) func_0021B790(p, 5);
            break;
        }
        break;
    case 1:
        switch (*(unsigned char *)(p + 0x284D)) {
        case 0:
            func_0021CBB0(p, 1);
            if (*(unsigned char *)(p + 0x2AE3) == 1) {
                func_002490F0(p, 1, 9, -1, 0, 0, -1.0f);
                *(short *)(p + 0x2856) = 10;
            } else {
                func_002490F0(p, 1, 7, -1, 0, 0, -1.0f);
                *(short *)(p + 0x2856) = 6;
            }
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
            *(int *)(p + 0x2870) = 0;
            p[0x2866] = 1;
            (*(unsigned char *)(p + 0x284D))++;
            break;
        case 1:
            *(float *)(p + 0x2870) += *(float *)(p + 0x10);
            t = *(float *)(p + 0x2870);
            if (!(t <= 0.0f) && *(unsigned char *)(p + 0x2866) == 1) {
                o = func_00207480(3, 0x373, 0, 8);
                if (o) {
                    *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1380) + 0x104);
                    o[0x9A] = 0;
                }
                o = func_00207480(3, 0x388, 0, 8);
                if (o) {
                    *(int *)(o + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104);
                    o[0x9A] = 0;
                }
                p[0x2866] = 0;
                func_003305E0(D_01DFABA0, 0, 0x52, p + 0x50, 0, 0, 0);
            }
            if ((unsigned char)func_002496D0(p) == 4) {
                func_0021B790(p, *(unsigned char *)(p + 0x2856));
            } else {
                func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
            }
            break;
        }
        break;
    }
}
}

extern "C" float func_00132470(char *, char *);

extern "C" char *func_002F2EF0(char *, char *, float);

extern "C" int func_003330C0(char *, int);

extern "C" void func_002F30C0(int, int, char *, char *);

extern "C" void func_00332AE0(char *, int, float, float);

extern "C" void func_002DFFA0(char *, float);

extern "C" int func_002DAD40(char *);

extern "C" short func_002DACC0(char *);

extern "C" void func_002DBCA0(char *, int);

extern "C" void func_0021CA00(char *, int);

extern "C" void func_002DB940(char *, short, float);

class V223 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4(); virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4(); virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104(); virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124(); virtual void d128(); 
    virtual void f12C(float *);
};

extern "C" {
void func_00223510(char *p) {
    extern short func_00131B60(int);
    float v[4] __attribute__((aligned(16)));
    char *o;
    char *q;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        if ((unsigned char)func_003330C0(p + 0x3D90, 0x143) == 1) {
            o = func_002F2EF0(*(char **)(*(char **)D_01CAFF0C + 0x20), p + 0x50, 10000.0f);
            if (o) {
                ((V223 *)o)->f12C(v);
                q = *(char **)(p + 0x283C);
                if (func_00132470((char *)v, p + 0x50) < *(float *)(q + 0x6C)) {
                    *(float *)(p + 0x3E98) = *(float *)(q + 0x80);
                    func_00332AE0(p + 0x3D90, 0x143, *(float *)(*(char **)(p + 0x283C) + 0x7C), *(float *)(*(char **)(p + 0x283C) + 0x74));
                    func_002DFFA0(p, *(float *)(*(char **)(p + 0x283C) + 0x140));
                }
            }
        }
        func_002490F0(p, 0x17, 0xB, -1, 2, 3, -1.0f);
        if ((unsigned char)func_002DAD40(p) != 2) {
            *(short *)(p + 0x90) = *(short *)(p + 0x28DC) = func_002DACC0(p);
            if (*(unsigned char *)(p + 0x3B9D) == 1) {
                if (func_00131B60(*(short *)(p + 0x3BA2) - *(short *)(p + 0x90)) < 0x71C &&
                    func_00131B60(*(short *)(p + 0x3BA2) - *(short *)(p + 0x90)) > 0xF8E5) {
                    *(short *)(p + 0x90) = *(short *)(p + 0x28DC) = *(short *)(p + 0x3BA2);
                }
            } else {
                *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
            }
        } else if ((*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 8) * 2)) &&
                   *(unsigned char *)(p + 0x3B9D) == 1) {
            *(short *)(p + 0x90) = *(short *)(p + 0x28DC) = *(short *)(p + 0x3BA2);
        } else {
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        }
        (*(unsigned char *)(p + 0x284C))++;
        *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
        *(unsigned char *)(p + 0x2998) = 0;
        func_002DBCA0(p, 1);
        func_0021CA00(p, 0);
        *(unsigned char *)(p + 0x2866) = 0;
        if ((unsigned char)func_002242C0(p) == 0) {
            func_002F30C0(0x2E, *(int *)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), 0, p);
        } else {
            func_002F30C0(0x6E, *(int *)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), 0, p);
        }
        break;
    case 1:
        func_002496D0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021BFC0(p);
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            func_002DBCC0(p, 1, *(float *)(p + 0x64), *(float *)(*(char **)(p + 0x283C) + 0x288));
            *(unsigned char *)(p + 0x2866) = 1;
            *(float *)(p + 0x154) = *(float *)(*(char **)(p + 0x283C) + 0x28C);
        }
        if (*(unsigned char *)(p + 0x2866) == 0) {
            func_002DB940(p, *(short *)(p + 0x28DC), 1.0f);
            break;
        }
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        if (*(float *)(p + 0x150) < 1.0f) func_002DBD30(p);
        func_002DA650(p);
        break;
    }
}
}

extern "C" void func_002DBD20(char *, float, float);

extern "C" void func_0021C380(char *, int);

extern "C" void func_002DBCE0(char *);

extern "C" void func_002DB880(char *, short);

extern "C" int func_002458A0(char *);

extern "C" void func_002F42B0(char *, char *);

class V224 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4(); virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4(); virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104(); virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124(); virtual void d128(); 
    virtual void f12C(float *);
};

extern "C" void func_00224610(char *p) {
    float v[4] __attribute__((aligned(16)));
    char *o;
    char *q;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        if ((unsigned char)func_003330C0(p + 0x3D90, 0x148) == 1) {
            o = func_002F2EF0(*(char **)(*(char **)D_01CAFF0C + 0x20), p + 0x50, 10000.0f);
            if (o) {
                ((V224 *)o)->f12C(v);
                q = *(char **)(p + 0x283C);
                if (func_00132470((char *)v, p + 0x50) < *(float *)(q + 0x5C)) {
                    *(float *)(p + 0x3E98) = *(float *)(q + 0x68);
                    func_00332AE0(p + 0x3D90, 0x148, *(float *)(*(char **)(p + 0x283C) + 0x64), *(float *)(*(char **)(p + 0x283C) + 0x60));
                    func_002DFFA0(p, *(float *)(*(char **)(p + 0x283C) + 0x138));
                }
            }
        }
        switch (*(unsigned char *)(p + 0x3C6D)) {
        case 2:
            func_002490F0(p, 0x17, 5, -1, 2, 5, -1.0f);
            *(float *)(p + 0x2870) = 20.0f;
            *(short *)(p + 0x90) = *(short *)(p + 0x28DC);
            *(unsigned char *)(p + 0x284C) = 1;
            break;
        case 0:
            func_002490F0(p, 0x17, 7, -1, 2, 5, -1.0f);
            *(float *)(p + 0x2870) = 120.0f;
            *(short *)(p + 0x90) = *(short *)(p + 0x28DC);
            *(unsigned char *)(p + 0x284C) = 4;
            break;
        case 1:
            func_002490F0(p, 0x17, 9, -1, 2, 5, -1.0f);
            *(float *)(p + 0x2870) = 120.0f;
            *(short *)(p + 0x90) = *(short *)(p + 0x28DC);
            *(unsigned char *)(p + 0x284C) = 4;
            break;
        }
        func_002DBCE0(p);
        func_002DBD20(p, 10.0f, 0.0f);
        func_002DB880(p, *(short *)(p + 0x90));
        func_002DBD20(p, 2.0f, 0.0f);
        *(unsigned char *)(p + 0x29A2) = 0;
        func_0021CA00(p, 0);
        func_002242C0(p);
        *(int *)D_01DFAB70 = *(int *)D_01DFAB70 | 0x10000000;
        break;
    case 1:
        if ((unsigned char)func_002458A0(p) == 0 || (unsigned char)func_002496D0(p) == 4) {
            *(unsigned char *)(p + 0x2904) = 2;
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
            func_002490F0(p, 0x17, 6, -1, 0, 0, -1.0f);
            *(unsigned char *)(p + 0x284C) = 2;
            break;
        }
        func_002DAB90(p, 3);
        func_002DB880(p, *(short *)(p + 0x90));
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            *(unsigned char *)(p + 0x2904) = 0;
            *(unsigned char *)(p + 0x2903) = 0xA;
            func_002DA2A0(p);
            func_0021CBB0(p, 0x408);
            func_0021C380(p, 7);
            func_002490F0(p, 0, 0x28, -1, 2, 5, -1.0f);
            *(unsigned char *)(p + 0x284C) = 3;
            func_002F42B0(p, p + 0x2960);
            break;
        }
        func_002DAB90(p, 3);
        break;
    case 3:
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021BFC0(p);
            break;
        }
        func_002496D0(p);
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        func_002DA650(p);
        break;
    case 4:
        if ((unsigned char)func_002458A0(p) == 0 || (unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned char *)(p + 0x3C6D) == 0) {
                func_002490F0(p, 0x17, 8, -1, 0, 0, -1.0f);
            } else {
                func_002490F0(p, 0x17, 0xA, -1, 0, 0, -1.0f);
            }
            *(unsigned char *)(p + 0x284C) = 5;
            break;
        }
        func_002DAB90(p, 3);
        if (*(unsigned char *)(p + 0x3C6D) == 0) {
            func_002DB880(p, *(short *)(p + 0x90) + 0x4000);
            break;
        }
        func_002DB880(p, *(short *)(p + 0x90) - 0x4000);
        break;
    case 5:
        func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) {
            if (*(unsigned char *)(p + 0x3C6D) == 0) {
                *(short *)(p + 0x28DC) = *(short *)(p + 0x90) - 0x4000;
            } else {
                *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x4000;
            }
            *(unsigned char *)(p + 0x2904) = 0;
            *(unsigned char *)(p + 0x2903) = 0xA;
            func_002DA2A0(p);
            func_0021CBB0(p, 0x408);
            func_0021C380(p, 7);
            func_002F42B0(p, p + 0x2960);
            *(unsigned char *)(p + 0x284C) = 6;
        }
        func_002DAB90(p, 3);
        break;
    case 6:
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021BFC0(p);
            break;
        }
        func_002496D0(p);
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        func_002DA650(p);
        break;
    }
}

extern "C" void func_0021C7A0(char *, int);

class V12C {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47();virtual void d48();virtual void d49();virtual void d50();virtual void d51();virtual void d52();virtual void d53();virtual void d54();virtual void d55();virtual void d56();virtual void d57();virtual void d58();virtual void d59();virtual void d60();virtual void d61();virtual void d62();virtual void d63();virtual void d64();virtual void d65();virtual void d66();virtual void d67();virtual void d68();virtual void d69();virtual void d70();virtual void d71();virtual void d72(); virtual void f(float *);
};

extern "C" void func_002219D0(char *p) {
    float v[4] __attribute__((aligned(16)));
    V12C *o;
    char *e;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
    switch (*(unsigned char *)(p + 0x2904)) {
    case 1:
        func_002490F0(p, 0, 7, -1, 2, 3, -1.0f);
        func_0021C7A0(p, 0x10);
        break;
    case 3:
        func_002490F0(p, 0, 8, -1, 2, 3, -1.0f);
        func_0021C7A0(p, 0x10);
        break;
    }
    func_0021C380(p, 1);
    if ((unsigned char)func_003330C0(p + 0x3D90, 0x13B) == 1) {
        o = (V12C *)func_002F2EF0(*(char **)(*(char **)D_01CAFF0C + 0x20), p + 0x50, 10000.0f);
        if (o == 0) return;
        o->f(v);
        e = *(char **)(p + 0x283C);
        if (func_00132470((char *)v, p + 0x50) < *(float *)(e + 0x84)) {
            *(float *)(p + 0x3E98) = *(float *)(e + 0x90);
            func_00332AE0(p + 0x3D90, 0x13B, *(float *)(*(char **)(p + 0x283C) + 0x8C), *(float *)(*(char **)(p + 0x283C) + 0x88));
            func_002DFFA0(p, *(float *)(*(char **)(p + 0x283C) + 0x158));
        }
    }
    }
}

extern "C" void func_00105230(char *, char *, char *);

extern "C" float func_00131B50(float);

extern "C" void func_002DBD00(char *);

#define VMOVE227(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

#define VUNIT227(d) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(d) : "memory")

extern "C" {
void func_00227470(char *p) {
    extern char *func_00207480(int, int, char *, int);
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *o;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 0, 0x12, -1, 0, 0, -1.0f);
        *(short *)(p + 0x28DC) = func_002DACC0(p);
        *(int *)(p + 0x150) = 0;
        *(int *)(p + 0x154) = 0;
        *(float *)(p + 0x64) = *(float *)(*(char **)(p + 0x283C) + 0x15C);
        *(float *)(p + 0x74) = *(float *)(*(char **)(p + 0x283C) + 0x160);
        func_002DBD00(p);
        func_0021C380(p, 0xB);
        p[0x2903] = 0xB;
        p[0x2904] = 4;
        p[0x2866] = 0;
        if (*(signed char *)(p + 0x46) == 0) {
            VMOVE227(v, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1384) + 0x104));
            VUNIT227(m);
            func_00105230((char *)m, (char *)m, (char *)v);
            o = func_00207480(3, 0x83, (char *)m, 8);
            if (o) {
                *(unsigned char *)(o + 0x9C) = 0x8F;
                o[0x9D] = 0x70;
                o[0x9E] = 0x30;
                o[0x9B] = 2;
            }
        }
        func_003305E0(D_01DFABA0, 8, 0x3B, p + 0x50, 0x26, 0, 0);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021BFC0(p);
            break;
        }
        func_002496D0(p);
        func_002DA540(p);
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        if (*(unsigned char *)(p + 0x2866) == 0 && func_00131B50(*(float *)(p + 0x64) / *(float *)(p + 0x74)) < 30.0f) {
            p[0x2866] = 1;
            func_002490F0(p, 0, 0x26, -1, 2, 0x1E, -1.0f);
        }
        break;
    }
}
}

extern "C" void func_0028C740(char *);

extern "C" void func_00248BB0(char *, int);

extern "C" void func_002D8BA0(char *);

extern "C" void func_002E0000(char *, int);

extern "C" void func_00249560(char *, int, int, int, int, int, float);

extern "C" void func_00249610(char *, int, int, int, int, int, float);

class V226 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4(); virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4(); virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104(); virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124(); virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144(); virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158(); virtual void d15C(); virtual void d160(); 
    virtual void f164();
};

extern "C" unsigned char func_00226820(char *p, unsigned char a, int b, int c) {
    if (*(unsigned short *)(p + 0x24C6) == 0x619 || *(unsigned short *)(p + 0x24C6) == 0x61A) return 0;
    if (*(unsigned char *)(p + 0x28A0) != *(unsigned char *)(p + 0x28A1)) {
    *(signed char *)(p + 0x28A0) = *(signed char *)(p + 0x28A1);
    *(unsigned char *)(p + 0x28B7) = 1;
    if (*(unsigned char *)(p + 0x28A0) == 0) {
        *(float *)(p + 0x4884) = 1.0f;
    } else {
        *(float *)(p + 0x4884) = 1.03f;
    }
    func_00248BB0(p, 3);
    if (*(unsigned char *)(p + 0x28AA) != 2) func_002D8BA0(p);
    func_0028C740(p + 0x47A0);
    if (*(unsigned char *)(p + 0x28AE) == 1) {
        *(unsigned char *)(p + 0x2AE0) = *(signed char *)(p + 0x28A8) + 1;
    } else {
        *(unsigned char *)(p + 0x2AE0) = 0;
    }
    func_002E0000(p, *(unsigned char *)(p + 0x2AE0));
    if (*(unsigned char *)(p + 0x28A0) == 0) {
        if (!(*(float *)(p + 0x2AD8) <= *(float *)(p + 0x2AAC))) *(float *)(p + 0x2AD8) = *(float *)(p + 0x2AAC);
        if (!(*(float *)(p + 0x2ADC) <= *(float *)(p + 0x2AB0))) *(float *)(p + 0x2ADC) = *(float *)(p + 0x2AB0);
    } else {
        *(float *)(p + 0x2AD8) = *(float *)(p + 0x2AAC);
        *(float *)(p + 0x2ADC) = *(float *)(p + 0x2AB0);
    }
    if (a == 1) {
        func_00249560(p, b, c, -1, 0, 0, -1.0f);
        func_00249610(p, b, c, -1, 0, 0, -1.0f);
    }
    ((V226 *)p)->f164();
    return 1;
    }
    return 0;
}

extern "C" float func_0024CBB0(char *, int);

extern "C" short func_00221710(char *);

static inline unsigned char act221(char *o) {
    if (*(int **)(o + 8) != 0 && **(int **)(o + 8) != 0) return 1;
    if (*(int *)(o + 0x1C) - *(int *)(o + 0x20) != 0) return 1;
    if (*(unsigned char *)(o + 0x1A) == 1) return 1;
    return 0;
}

static inline unsigned char busy221(void) {
    char *o = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (o != 0) return act221(o);
    return 0;
}

extern "C" {
unsigned short func_002213A0(char *p, int mode) {
    extern int func_00131B60(int);
    unsigned short r;
    short a;
    float f;
    if (*(unsigned char *)(p + 0x299F) != 0 || busy221() == 1
        || (*(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C) == 7 && !(func_0024CBB0(p, 9) <= 0.0f))
        || (*(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C) == 7 && !(func_0024CBB0(p, 10) <= 0.0f))) {
        a = func_00221710(p);
        if (a < 0x4000) {
            r = 0;
            if (a < 0x1554) a = 0x1554;
            f = func_00131B50((float)(short)func_00131B60(a - 0x4000) / 10924.0f);
        } else {
            r = 4;
            if (a > 0x6000) a = 0x6000;
            f = func_00131B50((float)(short)func_00131B60(a - 0x4000) / 8192.0f);
        }
        if (!(f <= 1.0f)) f = 1.0f;
        *(float *)(p + 0x2430) = f;
        if (mode == 1) r++;
    } else {
        r = 6;
        *(float *)(p + 0x2430) = 1.0f;
    }
    return r;
}
}

extern "C" {
int func_0021D1D0(char *);
}

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

class V18_1_fv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m(float);
};

extern "C" {
int func_0021D120(int p0, float f0) {
    char *v0;
    float v1;
    int tmp0;
    int tmp1;
    int tmp2;
    v0 = (char *)p0;
    v1 = f0;
    tmp0 = ((V14_0_i *)(v0 + 11008))->m();
    if ((tmp0 & 255) == 0) {
        return 0;
    } else {
        tmp1 = func_0021D1D0(v0);
        if ((tmp1 & 255) == 0) {
            return 0;
        } else {
            tmp2 = 43;
            if (*(unsigned char *)(v0 + 10312) == tmp2) {
                return 0;
            } else {
                ((V18_1_fv *)(v0 + 11008))->m(v1);
                return 1;
            }
        }
    }
}
}

extern "C" {
void func_00240520(char *, int);
}

extern "C" {
void func_002405C0(char *, int);
}

extern "C" {
int func_0024C0B0(char *);
}

extern "C" {
void func_002D9300(char *, int);
}

class V164_0_v {
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
    virtual void m(void);
};

extern "C" {
int func_0021DC70(char *p0) {
    char *v0;
    int tmp0;
    *(int *)(p0 + 10428) = 0;
    v0 = p0;
    *(int *)(p0 + 10432) = 0;
    *(char *)(p0 + 10422) = 0;
    *(char *)(p0 + 10424) = 0;
    *(char *)(p0 + 10409) = 0;
    func_00240520(p0, 1);
    func_002D9300(v0, 1);
    func_002405C0(v0, 1);
    if (*(unsigned char *)(v0 + 10400) == 0) {
        ((V164_0_v *)v0)->m();
    }
    *(char *)(v0 + 15470) = 0;
    *(char *)(v0 + 15477) = 0;
    *(int *)(v0 + 10448) = 0;
    *(int *)(v0 + 10452) = 0;
    tmp0 = func_0024C0B0(v0);
    return tmp0;
}
}
