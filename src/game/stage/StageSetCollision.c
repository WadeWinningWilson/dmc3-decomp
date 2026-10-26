extern char D_00645A30[];

void func_001AAD30(char *);

char *func_001B0FD0(char *, int, int);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

void func_0013D240(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0038ACB0(char *);

typedef struct { float f[4]; } SF4;

 typedef struct { float f[3]; } SF3;

char *func_0038AA80(char *sc) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    if (*(unsigned char *)(sc + 0x3A) == 1 && *(short *)(sc + 0x3E) < 0) {
        return 0;
    }
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x420, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x420, t);
        if (r != 0) {
            func_0038ACB0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x3, **q);
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
    o = ret;
    if (o == 0) {
        return 0;
    }
    *(SF4 *)(o + 0xDC) = *(SF4 *)sc;
    *(SF4 *)(o + 0xEC) = *(SF4 *)(sc + 0x10);
    *(SF3 *)(o + 0xFC) = *(SF3 *)(sc + 0x20);
    *(SF3 *)(o + 0x108) = *(SF3 *)(sc + 0x2C);
    *(unsigned char *)(o + 0x114) = *(unsigned char *)(sc + 0x38);
    *(unsigned char *)(o + 0x115) = *(unsigned char *)(sc + 0x39);
    *(unsigned char *)(o + 0x116) = *(unsigned char *)(sc + 0x3A);
    *(unsigned char *)(o + 0x117) = *(unsigned char *)(sc + 0x3B);
    *(unsigned char *)(o + 0x118) = *(unsigned char *)(sc + 0x3C);
    *(short *)(o + 0x11A) = *(short *)(sc + 0x3E);
    *(float *)(o + 0x11C) = *(float *)(sc + 0x40);
    *(SF3 *)(o + 0x120) = *(SF3 *)(sc + 0x44);
    *(unsigned char *)(o + 0x12C) = *(unsigned char *)(sc + 0x50);
    *(int *)(o + 0x130) = *(int *)(sc + 0x54);
    *(int *)(o + 0x134) = *(int *)(sc + 0x58);
    *(unsigned char *)(ret + 0x180) = 1;
    return ret;
}

void func_001AD140(char *);

void func_0028C200(char *, char *, char *, int, char *, char *, char *);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

extern char D_00562DB0[];

void func_0038B130(char *);

void func_002F7660(char *, char *);

static inline void col38A(char *o, unsigned char a, unsigned short h) { unsigned char d = (h >> 8) & 0xFF; unsigned char c = h & 0xFF; if (o != 0) { o[0xC4] = a; o[0xC5] = 0; o[0xC6] = c; o[0xC7] = d; } }

void func_0038AE40(char *p) {
    int m;
    char *o;
    func_0038B130(p);
    *(unsigned char *)(p + 0x3B0) = 0;
    m = 0;
    if (*(unsigned char *)(p + 0x114) != 0) {
        m |= 0xF000;
        *(unsigned char *)(p + 0x3B0) |= 4;
    }
    if (*(unsigned char *)(p + 0x115) != 0) {
        *(unsigned char *)(p + 0x3B0) |= 4;
        m |= 0x10000;
    }
    if (*(unsigned char *)(p + 0x116) != 0) {
        *(unsigned char *)(p + 0x3B0) |= 1;
        if (*(unsigned char *)(p + 0x117) == 1) {
            if (*(unsigned char *)(p + 0x118) == 1) {
                m |= 0x3C0;
            } else {
                m |= 0xC0;
            }
        } else if (*(unsigned char *)(p + 0x118) == 1) {
            m |= 0x300;
        } else {
            func_001AD140(p);
            return;
        }
    }
    if (*(unsigned char *)(p + 0x3B0) == 0) {
        func_001AD140(p);
        return;
    }
    *(unsigned char *)(p + 0x3B1) = 0;
    *(short *)(p + 0x3B2) = 0;
    func_002F7660(p + 0x3C0, p + 0xDC);
    if (*(unsigned char *)(p + 0x116) != 0) {
        func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 4, D_00562DB0 + *(short *)(p + 0x11A) * 64, p, 0);
    } else {
        func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 4, 0, p, 0);
    }
    func_0028C8E0(p + 0x190, 0);
    func_0028C910(p + 0x190);
    *(unsigned char *)(p + 0x193) = 0xD;
    if (*(unsigned char *)(p + 0xDE) != 0) *(unsigned char *)(p + 0x190) = 1;
    *(int *)(p + 0x268) = m;
    func_0028C3A0(p + 0x190, 0, -1, p + 0x140);
    o = *(char **)(p + 0x20C);
    *(int *)(p + 0x410) = *(int *)(p + 0x108);
    col38A(o, *(unsigned char *)(p + 0x410), *(unsigned short *)(p + 0x110));
    *(unsigned char *)(p + 0x45) = 6;
    *(int *)(p + 0xC) |= 0x40;
}

void func_0038ADD0(char *p) {
    if (*(unsigned char *)(p + 0x12C) == 0) {
        *(unsigned char *)(p + 4) += 1;
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
    case 1:
        *(unsigned char *)(p + 5) += 1;
        break;
    case 2:
        *(unsigned char *)(p + 4) += 1;
        break;
    }
}

void func_0028C5C0(char *, int, float);

void func_0028C790(char *, int);

void func_0038B050(char *p) {
    char *q;
    unsigned short v;
    unsigned char c;
    unsigned char lo;
    unsigned char hi;
    if (*(unsigned char *)(p + 0x180) != 0) {
        func_0038B130(p);
        if (*(unsigned char *)(p + 0x181) != 1) {
            func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
            return;
        }
        if (*(unsigned char *)(p + 0x116) != 0) {
            *(float *)(p + 0x184) = *(float *)(p + 0x184) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x184) < 0.0f) {
                *(unsigned char *)(p + 0x181) = 0;
                func_0028C790(p + 0x190, 0);
                func_0028C910(p + 0x190);
                func_0028C3A0(p + 0x190, 0, -1, p + 0x140);
                v = *(unsigned short *)(p + 0x110);
                q = *(char **)(p + 0x20C);
                c = *(unsigned char *)(p + 0x410);
                hi = (v >> 8) & 0xFF;
                lo = v & 0xFF;
                if (q != 0) {
                    q[0xC4] = c;
                    q[0xC5] = 0;
                    q[0xC6] = lo;
                    q[0xC7] = hi;
                }
            }
        }
    }
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005AADD0[];

extern char D_005AED40[];

extern char D_005AED64[];

extern char D_005AEDE4[];

extern char D_005AEE78[];

void func_0024F810();

void func_0028C1A0();

char *func_0038B2F0(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005AED40;
        *(char * *)(p + 64) = D_005AED64;
        *(char * *)(p + 160) = D_005AEDE4;
        *(char * *)(p + 208) = D_005AEE78;
        func_0028C1A0(p + 400, -1);
        if (p + 208 != 0) {
            *(char * *)(p + 208) = D_005AADD0;
        }
        func_0024F810(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_0038B290(p0) char *p0; {
    *(char *)(p0 + 385) = 1;
    *(float *)(p0 + 388) = *(float *)(p0 + 284);
}

extern void func_0038B2D0();

void func_0038B3E0(char *p) { func_0038B2D0(p + -208); }

extern void func_0038B2C0();

void func_0038B3F0(char *p) { func_0038B2C0(p + -208); }

void func_0038AD30(void) {}

void func_0038B2B0(void) {}

void func_0038B2E0(void) {}
