extern char D_00645A30[];

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00132540(char *, char *, float);

void func_0047F950(char *);

char *func_0047FA60(char *p0, float *p1, float *p2, unsigned char p3, int p4, int p5) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    float f;
    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0xA40, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_0047F950(t);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x8, *b.pp);
        r = *b.pp; r[0x18] = 1;
        goto ok;
    }
    *b.pp = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x9F0), "r"(p1) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xA00), "r"(p2) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(ret + 0x60), "r"(p2), "r"(p1) : "memory");
        switch (p3) {
        default: f = 13.0f; break;
        case 1: f = 20.0f; break;
        case 2: f = 30.0f; break;
        }
        func_00132540(ret + 0x60, ret + 0x60, f);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p1) : "memory");
        *(char *)(ret + 0x150) = p3;
        *(char **)(ret + 0x15C) = p0;
        *(char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p0 + 0x46);
        *(int *)(ret + 0x160) = p4;
        *(int *)(ret + 0x164) = p5;
    }
    return ret;
}

int func_0012B1A0(char *, char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BDCA8[8];

extern char D_005BDCB0[8];

extern char D_005BDCB8[8];

extern char D_005BDCC0[8];

typedef struct { short h0; short n; char pad4[0xC]; float v[64][4]; } S480;

int func_004804C0(char *, int *, int *, S480 *);

static inline int *ent480(int *q, int n) { if ((unsigned int)q[1] < n + 1) return 0; if (*(int *)((char *)q + n * 4 + 8) == 0) return 0; return (int *)((char *)q + *(int *)((char *)q + n * 4 + 8)); }

int func_004801E0(char *p, int *q, char *r) {
//P<
    char name[32];
    S480 s;
    int i;
    int j;
//P>
    s.h0 = -1;
    s.n = 0;
    for (i = 0; i < 64; i++) {
        s.v[i][0] = 0.0f;
        s.v[i][1] = 0.0f;
        s.v[i][2] = 0.0f;
        s.v[i][3] = 1.0f;
    }
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BDCA8) == 0) {
            return func_004804C0(p, ent480(q, s.h0 * 10), ent480(q, s.h0 * 10 + 1), &s);
        }
        if (func_0012B1A0(name, D_005BDCB0) == 0) {
            s.h0 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BDCB8) == 0) {
            s.n = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BDCC0) == 0) {
            for (j = 0; j < s.n; j++) {
                s.v[j][0] = (float)func_0022CD60(r);
                s.v[j][1] = (float)func_0022CD60(r);
                s.v[j][2] = (float)func_0022CD60(r);
            }
        }
    }
    return 0;
}

int func_001AD140();

int func_00480160(p0) char *p0; {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 360);
    if (v0 != 0) {
        *(char *)(v0 + 58) = 1;
        v1 = func_001AD140(*(int *)(p0 + 360));
    }
    return v1;
}

extern void func_004800E0();

void func_004801A0(char *p) { func_004800E0(p + -64); }

extern void func_00480100();

void func_004801B0(char *p) { func_00480100(p + -64); }

extern void func_0047F9C0();

void func_004801C0(char *p) { func_0047F9C0(p + -64); }

void func_004801D0(char *p) { func_0047F9C0(p + -160); }
