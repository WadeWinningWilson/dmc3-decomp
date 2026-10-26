int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

typedef struct { signed char b0; signed char b1; unsigned char b2; char pad3[0x1D]; int e0; int e4; int e8; } S46Fs;

typedef struct { int x0; int x4; short x8; char pad[2]; float xC; unsigned char x10; char pad11[3]; float x14; } S46Ft;

typedef struct { signed char a0; unsigned char a1; signed char a2; unsigned char a3; char pad4[0xC]; float f10[12]; S46Fs sub; S46Ft sub2; } S46F;

int func_0022CD60(char *);

float func_00131AB0(float);

extern char D_005BC440[8];

extern char D_005BC448[4];

extern char D_005BC44C[4];

extern char D_005BC450[4];

extern char D_005BC454[4];

extern char D_005BC458[8];

extern char D_005BC460[8];

extern char D_005BC468[8];

extern char D_00557590[];

extern char D_005BC470[8];

extern char D_005BC478[8];

extern char D_005BC480[4];

extern char D_005BC484[4];

extern char D_005BC488[4];

int func_002F6690(S46F *s, char *name, char *r) {
    void func_0022CBB0(char *, char *);
    char w[16];
    if (func_0012B1A0(name, D_005BC440) == 0) {
        s->a0 = func_0022CD60(r);
    } else if (func_0012B1A0(name, D_005BC448) == 0) {
        func_0022CBB0(r, w);
        if (func_0012B1A0(w, D_005BC44C) == 0) {
            s->a1 = func_0022CD60(r);
        } else if (func_0012B1A0(w, D_005BC450) == 0) {
            s->a1 = 0x1F;
        } else if (func_0012B1A0(w, D_005BC454) == 0) {
            s->a1 = 0x20;
        } else if (func_0012B1A0(w, D_005BC458) == 0) {
            s->a1 = 0x21;
        }
    } else if (func_0012B1A0(name, D_005BC460) == 0) {
        func_0022CBB0(r, w);
        if (func_0012B1A0(w, D_005BC454) == 0) {
            s->a2 = 0;
        } else if (func_0012B1A0(w, D_005BC468) == 0) {
            s->a2 = 1;
        }
    } else if (func_0012B1A0(name, D_00557590) == 0) {
        func_0022CBB0(r, w);
        if (func_0012B1A0(w, D_005BC470) == 0) {
            s->a3 = 1;
        } else if (func_0012B1A0(w, D_005BC478) == 0) {
            s->a3 = 0;
        }
    } else if (func_0012B1A0(name, D_005BC480) == 0) {
        s->f10[0] = func_0022CD90(r);
        s->f10[1] = func_0022CD90(r);
        s->f10[2] = func_0022CD90(r);
    } else if (func_0012B1A0(name, D_005BC484) == 0) {
        s->f10[4] = func_00131AB0(6.283185f * (func_0022CD90(r) / 360.0f));
        s->f10[5] = func_00131AB0(6.283185f * (func_0022CD90(r) / 360.0f));
        s->f10[6] = func_00131AB0(6.283185f * (func_0022CD90(r) / 360.0f));
    } else if (func_0012B1A0(name, D_005BC488) == 0) {
        s->f10[8] = func_0022CD90(r);
        s->f10[9] = func_0022CD90(r);
        s->f10[10] = func_0022CD90(r);
    } else {
        return 0;
    }
    return 1;
}

extern char D_01CAFF0C[];

void func_0022CB30(char *);

void func_0022CB50(char *, char *);

int func_0022CBA0(char *);

int func_002F64E0(char *, char *);

int func_002F6FC0(char *, char *);

void func_002F62C0(char *, char *);

short func_0020F9B0(char *);

extern char D_005BC3F0[4];

extern char D_005BC3F4[4];

char *func_002E3DE0(char *, char *, char *);

char *func_002EC460(char *, char *, char *);

char *func_00357900(char *, char *, char *);

char *func_00311E70(char *, char *, char *);

char *func_002FBA30(char *, char *, char *);

char *func_003831D0(char *, char *, char *);

char *func_00384AC0(char *, char *, char *);

char *func_00385BF0(char *, char *, char *);

char *func_004DA480(char *, char *, char *);

char *func_0038A620(char *, char *, char *);

char *func_0038B410(char *, char *, char *);

char *func_003CF150(char *, char *, char *);

char *func_003D3E10(char *, char *, char *);

char *func_003DFF00(char *, char *, char *);

char *func_003E0B10(char *, char *, char *);

char *func_004011B0(char *, char *, char *);

char *func_0040E090(char *, char *, char *);

char *func_0043C580(char *, char *, char *);

char *func_0043DD20(char *, char *, char *);

char *func_0044C820(char *);

char *func_0044D7E0(char *, char *, char *);

char *func_00450770(char *);

char *func_00451C00(char *, char *, char *);

char *func_00454440(char *, char *, char *);

char *func_0046FDD0(char *, char *, char *);

char *func_00474450(char *, char *, char *);

char *func_0047C5A0(char *, char *, char *);

char *func_004801E0(char *, char *, char *);

char *func_00482A10(char *, char *, char *);

char *func_004D9280(char *, char *, char *);

char *func_004FC2E0(char *, char *, char *);

char *func_002E3A40(char *, char *, char *);

static inline char *ent2F5(int *q, unsigned int *c, int n) { if (*c < n + 1) return 0; if (*(int *)((char *)q + n * 4 + 8) == 0) return 0; return (char *)q + *(int *)((char *)q + n * 4 + 8); }

void func_002F5AC0(char *p, int *h, unsigned char mode) {
    char *func_0022CBB0(char *, char *);
    char r[16];
    char w[32];
    char *tp;
    int t;
    int k;
    char *a;
    char *b;
    int st;
    char *o;
    unsigned int *c;
    c = (unsigned int *)(h + 1);
    if (*c <= 4) return;
    *(char **)p = ent2F5(h, c, 4);
    *(unsigned char *)(p + 4) = mode;
    a = ent2F5(h, c, 1);
    b = ent2F5(h, c, 5);
    func_0022CB30(r);
    st = 0;
    *(unsigned char *)(p + 0x10) = 1;
    *(float *)(p + 0x14) = -1.0f;
    *(float *)(p + 0x18) = -1.0f;
    *(float *)(p + 0x1C) = -1.0f;
    *(float *)(p + 0x20) = -1.0f;
    *(unsigned char *)(p + 0xB0) = 0;
    func_0022CB50(r, *(char **)p);
    while (!func_0022CBA0(r)) {
        switch (st) {
        case 0:
            if (func_002F64E0(p, r)) st = 1;
            break;
        case 1:
            func_0022CBB0(r, w);
            if (func_0012B1A0(w, D_005BC3F0) == 0) st = 2;
            break;
        case 2:
            func_0022CBB0(r, w);
            if (func_0012B1A0(w, D_005BC3F4) == 0) {
                k = func_0022CD60(r);
                t = func_002F6FC0(p, func_0022CBB0(r, w));
                if ((unsigned char)t == 1 || (unsigned char)t == 0) {
                    st = 1;
                } else if (*(unsigned char *)(p + 4) == 0) {
                    switch ((unsigned char)t) {
                    case 2:
                        tp = func_002E3DE0(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 3:
                        tp = func_002EC460(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 4:
                        tp = func_00357900(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 5:
                        tp = func_00311E70(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 6:
                        tp = func_002FBA30(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 7:
                        tp = func_003831D0(a, b, r);
                        if (tp != 0) tp += 0x38;
                        o = tp;
                        break;
                    case 8:
                        tp = func_00384AC0(a, b, r);
                        if (tp != 0) tp += 0x38;
                        o = tp;
                        break;
                    case 9:
                        tp = func_00385BF0(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 10:
                        tp = func_004DA480(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 11:
                        tp = func_0038A620(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 12:
                        tp = func_0038B410(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 13:
                        tp = func_003CF150(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 14:
                        tp = func_003D3E10(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 15:
                        tp = func_003DFF00(a, b, r);
                        if (tp != 0) tp += 0x38;
                        o = tp;
                        break;
                    case 16:
                        tp = func_003E0B10(a, b, r);
                        if (tp != 0) tp += 0x38;
                        o = tp;
                        break;
                    case 17:
                        tp = func_004011B0(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 18:
                        tp = func_0040E090(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 19:
                        tp = func_0043C580(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 20:
                        tp = func_0043DD20(a, b, r);
                        if (tp != 0) tp += 0x130;
                        o = tp;
                        break;
                    case 21:
                        tp = func_0044C820(r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 22:
                        tp = func_0044D7E0(a, b, r);
                        if (tp != 0) tp += 0x130;
                        o = tp;
                        break;
                    case 23:
                        tp = func_00450770(r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 24:
                        tp = func_00451C00(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 25:
                        tp = func_00454440(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 26:
                        tp = func_0046FDD0(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 27:
                        tp = func_00474450(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 28:
                        tp = func_0047C5A0(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 29:
                        tp = func_004801E0(a, b, r);
                        if (tp != 0) tp += 0x130;
                        o = tp;
                        break;
                    case 30:
                        tp = func_00482A10(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 31:
                        tp = func_004D9280(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 32:
                        tp = func_004FC2E0(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 33:
                        func_002F62C0(p, r);
                        o = 0;
                        break;
                    }
                    if (o != 0) {
                        *(int *)(o + 8) = k;
                        *(unsigned char *)(o + 4) = t;
                    }
                } else if (*(unsigned char *)(p + 4) == 1) {
                    switch ((unsigned char)t) {
                    case 2:
                    case 3:
                        if (*(unsigned char *)(p + 5) != 0) {
                            tp = func_002E3A40(a, b, r);
                            if (tp != 0) tp += 0xD0;
                            if (tp != 0) {
                                *(int *)(tp + 8) = k;
                                *(unsigned char *)(tp + 4) = t;
                            }
                        }
                        break;
                    case 4:
                        func_0020F9B0(*(char **)(*(char **)D_01CAFF0C + 0x18));
                        break;
                    case 0:
                    case 1:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                    case 13:
                    case 14:
                    case 15:
                    case 16:
                    case 17:
                    case 18:
                    case 19:
                    case 20:
                    case 21:
                    case 22:
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                    case 28:
                    case 29:
                    case 30:
                    case 31:
                    case 32:
                    case 33:
                        break;
                    }
                }
            } else {
                st = 0;
            }
            break;
        }
    }
}

extern char D_00598570[];

extern char D_00599090[];

extern int D_005BC5F8;

extern char D_00645A30[];

char *func_002F7D10(void) {
    char *func_001005E0(int, int, char *, char *, int);
    int func_00195D90(char *);
    int v;
    char *o;
    v = func_00195D90(D_00645A30);
    if (v != 0) {
        do {
            o = func_001005E0(v, 0, D_00599090, D_00598570, 0);
            if (o != 0 && D_005BC5F8 == *(int *)(o + 8)) {
                return o;
            }
            v = func_00195D90(D_00645A30);
        } while (v != 0);
    }
    return 0;
}

char *func_002F7C10(int a, unsigned char b) {
    char *func_001005E0(int, int, char *, char *, int);
    int func_00195D90(char *);
    void func_00195D70(char *, int);
    int e;
    char *r;
    func_00195D70(D_00645A30, 3);
    while ((e = func_00195D90(D_00645A30)) != 0) {
        r = func_001005E0(e, 0, D_00599090, D_00598570, 0);
        if (r != 0) {
            if (b == 0 && a == *(int *)(r + 8)) {
                return r;
            }
            if (b == *(unsigned char *)(r + 4) && a == *(int *)(r + 8)) {
                return r;
            }
        }
    }
    return 0;
}

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_002F8090(char *);

char *func_002F7F10(char *p, char *s, short h, unsigned char c) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x460, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x460, t);
        if (r != 0) {
            func_002F8090(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x8, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x3F0) = s;
        *(short *)(ret + 0x3F4) = h;
        *(char **)(ret + 0x45C) = p;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
        *(unsigned char *)(ret + 0x458) = c;
    }
    return ret;
}

char *func_002F7DC0(void) {
    extern unsigned char D_005BE148;
    char *func_001005E0(int, int, char *, char *, int);
    int func_00195D90(char *);
    int v;
    char *o;
    v = func_00195D90(D_00645A30);
    if (v != 0) {
        do {
            o = func_001005E0(v, 0, D_00599090, D_00598570, 0);
            if (o != 0 && D_005BE148 == *(unsigned char *)(o + 4)) {
                return o;
            }
            v = func_00195D90(D_00645A30);
        } while (v != 0);
    }
    return 0;
}

extern char *D_005BE09C;

float func_00132470(char *, float *);

extern char D_005BE0C8[4];

int func_001BE6F0(char *, float *, char *, float *);

int func_001BE780(char *, float *, char *, float *, int);

int func_001BE9F0(char *, float *, char *, float *);

int func_001BEAA0(char *, float *, char *, float *);

unsigned int func_002F7950(char *o, float *pos) {
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float buf[4] __attribute__((aligned(16)));
    unsigned char hit;
    float d;
    if (o == 0) return 0x80;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(a), "r"(*(char **)(D_005BE09C + 0x23C) + 0x70) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
    b[1] = b[1] + 100.0f;
    hit = 0;
    switch (*(unsigned char *)(o + 0x110)) {
    case 2:
        hit = func_001BE6F0(D_005BE0C8, a, o + 0x120, buf);
        break;
    case 3:
        hit = func_001BE780(D_005BE0C8, a, o + 0x120, buf, 0);
        break;
    case 4:
        hit = func_001BE9F0(D_005BE0C8, a, o + 0x120, buf);
        break;
    case 6:
        hit = func_001BEAA0(D_005BE0C8, a, o + 0x120, buf);
        break;
    }
    if (hit == 0) return 0x80;
    d = func_00132470((char *)a, pos);
    if (!(d < 500.0f)) return 0x40;
    if (d <= 100.0f) return 0;
    return (unsigned int)(64.0f * (d - 100.0f) / 400.0f);
}

extern char D_005BC5F0[4];

extern char D_00557630[];

extern char D_00557640[];

extern char D_00557650[];

extern char D_00557660[];

extern char D_00557670[];

extern char D_00557680[];

extern char D_00557690[];

extern char D_005576A0[];

extern char D_005576B0[];

extern char D_005576C0[];

extern char D_005576D8[];

extern char D_005576E8[];

extern char D_005576F8[];

extern char D_00557708[];

int func_002F7460(char *s) {
    if (func_0012B1A0(s, D_005BC5F0) == 0) {
        return 0;
    }
    if (func_0012B1A0(s, D_00557630) == 0) {
        return 0xA;
    }
    if (func_0012B1A0(s, D_00557640) == 0) {
        return 0xB;
    }
    if (func_0012B1A0(s, D_00557650) == 0) {
        return 0xC;
    }
    if (func_0012B1A0(s, D_00557660) == 0) {
        return 0xD;
    }
    if (func_0012B1A0(s, D_00557670) == 0) {
        return 0xE;
    }
    if (func_0012B1A0(s, D_00557680) == 0) {
        return 0xF;
    }
    if (func_0012B1A0(s, D_00557690) == 0) {
        return 5;
    }
    if (func_0012B1A0(s, D_005576A0) == 0) {
        return 7;
    }
    if (func_0012B1A0(s, D_005576B0) == 0) {
        return 8;
    }
    if (func_0012B1A0(s, D_005576C0) == 0) {
        return 9;
    }
    if (func_0012B1A0(s, D_005576D8) == 0) {
        return 0x10;
    }
    if (func_0012B1A0(s, D_005576E8) == 0) {
        return 0x11;
    }
    if (func_0012B1A0(s, D_005576F8) == 0) {
        return 0x12;
    }
    return func_0012B1A0(s, D_00557708) == 0 ? 0x13 : 0;
}

char *func_002790E0(char *);

int func_001A97E0(char *);

char *func_0027A570(char *);

char *func_002F7B50(char *a, char *m) {
    char *r = 0;
    switch (func_001A97E0(m)) {
    case 0x10000000:
    case 0x20000000:
        func_001B0FD0(a, 0x600, 1);
        {
            char *t = *(char **)(a + 4);
            if (t != 0) {
                t = func_002790E0(t);
            }
            r = t;
        }
        break;
    case 0x30000000:
        func_001B0FD0(a, 0x440, 1);
        {
            char *t = *(char **)(a + 4);
            if (t != 0) {
                t = func_0027A570(t);
            }
            r = t;
        }
        break;
    }
    return r;
}

int func_002F7400(signed char *s) {
    int r;
    if (s[0] == 'P') {
        r = 0;
    } else if (s[0] == 'E') {
        r = 1;
    } else if (s[0] == 'G') {
        r = 2;
    } else {
        r = 3;
    }
    return r;
}

extern char D_005575C0[];

extern char D_005575D0[];

extern char D_005575E0[];

extern char D_005575F0[];

extern char D_005BC4C0[8];

extern char D_005BC4C8[8];

extern char D_005BC4D0[8];

extern char D_005BC4D8[8];

extern char D_005BC4E0[8];

extern char D_005BC4E8[8];

extern char D_005BC4F0[8];

extern char D_005BC4F8[8];

typedef struct { int x0; unsigned int x4; unsigned short x8; } S2F6D;

int func_002F6D40(S2F6D *s, char *name, char *r) {
    void func_0022CBB0(char *, char *);
    char w[16];
    int m;
    unsigned char on;
    if (func_0012B1A0(name, D_005575C0) == 0) {
        s->x0 = func_0022CD60(r) + 0x10;
    } else if (func_0012B1A0(name, D_005BC4C8) == 0) {
        m = 0;
        on = 0;
        func_0022CBB0(r, w);
        if (func_0012B1A0(w, D_005BC4D0) == 0) {
            on = 1;
            func_0022CBB0(r, w);
        } else if (func_0012B1A0(w, D_005BC4C0) == 0) {
            func_0022CBB0(r, w);
        } else if (func_0012B1A0(w, D_005BC4D8) == 0) {
            func_0022CBB0(r, w);
            if (func_0012B1A0(w, D_005BC4E0) == 0) {
                s->x4 = 0;
                s->x8 = 0x1806;
            }
            return 1;
        }
        if (func_0012B1A0(w, D_005BC4E8) == 0) {
            m = 0;
            if (on) {
                s->x4 &= ~0x5000;
            } else {
                s->x4 |= 0x5000;
            }
        } else if (func_0012B1A0(w, D_005BC4F0) == 0) {
            m = 8;
        } else if (func_0012B1A0(w, D_005575D0) == 0) {
            m = 2;
            if (on) {
                s->x4 &= ~0xA000;
            } else {
                s->x4 |= 0xA000;
            }
        } else if (func_0012B1A0(w, D_005575E0) == 0) {
            m = 0x800;
        } else if (func_0012B1A0(w, D_005575F0) == 0) {
            m = 0x1000;
        } else if (func_0012B1A0(w, D_005BC4F8) == 0) {
            m = 4;
        }
        if (on) {
            s->x8 |= (unsigned short)m;
        } else {
            s->x8 &= (unsigned short)~m;
        }
    } else {
        return 0;
    }
    return 1;
}

void func_002F7660(p0, p1) char *p0; char *p1; {
    int v0;
    float v1;
    v0 = *(signed char *)(p1 + 0);
    switch (v0) {
    case 0:
        *(char *)(p0 + 0) = 2;
        *(float *)(p0 + 16) = *(float *)(p1 + 4);
        *(float *)(p0 + 20) = *(float *)(p1 + 8);
        *(float *)(p0 + 24) = *(float *)(p1 + 12);
        *(int *)(p0 + 28) = 0x3f800000;
        v1 = *(float *)(p1 + 16);
        *(float *)(p0 + 32) = v1;
        break;
    case 1:
        *(char *)(p0 + 0) = 3;
        *(float *)(p0 + 16) = *(float *)(p1 + 4);
        *(float *)(p0 + 20) = *(float *)(p1 + 8);
        *(float *)(p0 + 24) = *(float *)(p1 + 12);
        *(float *)(p0 + 40) = *(float *)(p1 + 16);
        *(float *)(p0 + 44) = *(float *)(p1 + 20);
        *(float *)(p0 + 48) = *(float *)(p1 + 24);
        *(float *)(p0 + 28) = *(float *)(p1 + 32);
        *(float *)(p0 + 32) = *(float *)(p1 + 36);
        v1 = *(float *)(p1 + 40);
        *(float *)(p0 + 36) = v1;
        break;
    case 2:
        *(char *)(p0 + 0) = 6;
        *(float *)(p0 + 16) = *(float *)(p1 + 4);
        *(float *)(p0 + 20) = *(float *)(p1 + 8);
        *(float *)(p0 + 24) = *(float *)(p1 + 12);
        *(int *)(p0 + 28) = 0x3f800000;
        *(float *)(p0 + 32) = *(float *)(p1 + 16);
        v1 = *(float *)(p1 + 20);
        *(float *)(p0 + 36) = v1;
        break;
    case 3:
        *(char *)(p0 + 0) = 4;
        *(float *)(p0 + 16) = *(float *)(p1 + 4);
        *(float *)(p0 + 20) = *(float *)(p1 + 8);
        *(float *)(p0 + 24) = *(float *)(p1 + 12);
        *(int *)(p0 + 28) = 0x3f800000;
        *(float *)(p0 + 32) = *(float *)(p1 + 16);
        *(float *)(p0 + 36) = *(float *)(p1 + 20);
        *(float *)(p0 + 40) = *(float *)(p1 + 24);
        *(int *)(p0 + 44) = 0x3f800000;
        v1 = *(float *)(p1 + 28);
        *(float *)(p0 + 48) = v1;
        break;
    }
}

void func_002F7DA0(p0) int p0; {
    extern char D_005BE148;
    void func_00195D70();
    D_005BE148 = p0;
    D_005BC5F8 = -1;
    func_00195D70(D_00645A30, 3);
}

int func_002F7E50() {
    char *func_001005E0();
    void func_00195D70();
    int func_00195D90();
    char *v0;
    int v1;
    int v2;
    v1 = 0;
    func_00195D70(D_00645A30, 3);
    v2 = func_00195D90(D_00645A30);
    if (v2 != 0) {
        do {
            v0 = func_001005E0(v2, 0, D_00599090, D_00598570, 0);
            if (v0 != 0) {
                if (*(unsigned char *)(v0 + 4) == 3) {
                    if (v0 != 0) {
                        v0 = (v0 + -208);
                    }
                    if (*(unsigned char *)(v0 + 1174) == 0) {
                        v1 = (v1 + 1);
                    }
                }
            }
            v2 = func_00195D90(D_00645A30);
        } while (v2 != 0);
    }
    return v1;
}

void *func_002F7B40(void *p) { return p; }

void func_002F7CF0(int p0) {
    extern char D_005BE148;
    void func_00195D70();
    D_005BC5F8 = p0;
    D_005BE148 = 0;
    func_00195D70(D_00645A30, 3);
}
