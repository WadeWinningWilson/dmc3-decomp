typedef union { float f[4]; int i[4]; } V4BB __attribute__((aligned(16)));

extern char *D_005BC2E0;

extern char D_00587160[];

extern char D_01CAFF0C[];

extern int D_01CAFF38[];

void func_00131700(float *, float *, float *);

void func_00104B80(float *, float *, float *);

unsigned char func_00201770(char *, float *, float *, float *, int);

void func_001AD140(char *);

unsigned char func_002D9FA0(char *, float *);

float func_00132D80(float *, float *);

void func_00131650(char *, char *);

void func_004BC0C0(char *);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

#define VSUB(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

#define G (*(char **)D_01CAFF0C)

static inline unsigned char on4BB(char *pl) { unsigned char r; if (*(unsigned char *)(pl + 0x28A6) != 0) r = 1; else r = 0; return r; }

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
#define q qq.f
#define tmp tt.f
void func_004BBA90(char *p) {
    extern int D_005BDD78;
    V4BB qq;
    float r2[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float o[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    V4BB tt;
    float r[4] __attribute__((aligned(16)));
    float s[16] __attribute__((aligned(16)));
    float s2[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float x;
    float dy;
    char *pl;
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(*(char **)(p + 0x370)), "r"(q) : "memory");
    UNIT(m);
    v[0] = 0.0f;
    v[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    v[2] = 0.0f;
    v[3] = 1.0f;
    func_00131700(m, m, v);
    w[0] = 0.0f;
    w[1] = 0.0f;
    w[2] = 100.0f;
    w[3] = 1.0f;
    func_00104B80(o, m, w);
    q[0] += o[0];
    q[1] += o[1];
    q[2] += o[2];
    q[3] = 1.0f;
    switch (D_01CAFF38[0]) {
    case 0x67:
    case 0x70:
    case 0x71:
    case 0xD8:
    case 0xD4:
        q[1] = *(float *)(*(char **)(G + 0xC) + 0x2924);
        break;
    default:
        tt = qq;
        tmp[1] = tmp[1] + 20.0f;
        if (func_00201770(*(char **)(G + 0x14) + 0x548, tmp, r, s, 2) == 1) {
            q[1] = -10.0f + r[1];
        } else {
            func_001AD140(p);
            return;
        }
        break;
    }
    *(float *)(p + 0x50) = q[0];
    *(float *)(p + 0x54) = q[1];
    *(float *)(p + 0x58) = q[2];
    *(float *)(p + 0x5C) = 1.0f;
    w[0] = 0.0f;
    w[1] = 0.0f;
    w[2] = 300.0f;
    w[3] = 1.0f;
    func_00104B80(o, m, w);
    pl = *(char **)(G + 0xC);
    r2[0] = *(float *)(pl + 0x50) + o[0];
    r2[1] = *(float *)(p + 0x54);
    r2[2] = *(float *)(pl + 0x58) + o[2];
    r2[3] = 1.0f;
    if (on4BB(pl) == 1 && func_002D9FA0(pl, s2) == 1) {
        VSUB(a, r2, p + 0x50);
        a[3] = 1.0f;
        VSUB(b, s2, p + 0x50);
        b[3] = 1.0f;
        x = func_00132D80(a, b);
        if (!(x <= 0.0f) && !(x <= 0.866025f)) {
            r2[0] = s2[0];
            r2[1] = *(float *)(p + 0x54);
            r2[2] = s2[2];
        }
    }
    VSUB(p + 0x3C0, r2, q);
    func_00131650(p + 0x3C0, p + 0x3C0);
    *(float *)(p + 0x3D0) = 3.0f;
    dy = *(float *)(*(char **)(p + 0x3E0) + 0x54) - *(float *)(p + 0x54);
    dy = dy < 0.0f ? -dy : dy;
    if (!(dy <= 50.0f)) {
        func_001AD140(p);
        return;
    }
    func_0028C200(p + 0x150, (char *)&D_005BDD78, D_00587160, 1, D_005BC2E0 + 0x700, p, 0);
    func_0028C8E0(p + 0x150, 0);
    func_0028C910(p + 0x150);
    func_0028C3A0(p + 0x150, 0, -1, p + 0x380);
    *(int *)(p + 0x228) = 0x30F3F;
    func_004BC0C0(p);
    *(int *)(p + 0x3D8) = 0;
    *(float *)(p + 0x3D4) = 30.0f;
    *(unsigned char *)(p + 0x3DC) = 0;
}
#undef UNIT
#undef q
#undef tmp

void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_004BCA90(char *);

char *func_004BC900(char *p, char *s, short h, unsigned char c, float f) {
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
    **q = func_001B0FD0(a, 0x400, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x400, t);
        if (r != 0) {
            func_004BCA90(r);
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
        *(char **)(ret + 0x3F0) = p;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
        *(char **)(ret + 0x3F4) = s;
        *(short *)(ret + 0x90) = h;
        *(unsigned char *)(ret + 0x370) = c;
        *(float *)(ret + 0x3E8) = f;
    }
    return ret;
}

char *func_00207480(int, int, float *, int);

void func_00104C00(char *, char *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")
void func_004BC390(char *p) {
    float r[4];
    float m[16];
    *(float *)(p + 0x3B0) = 3.0f;
    func_00207480(3, 0x251, (float *)(p + 0x370), 8);
    {
        float a = (float)(unsigned int)*(unsigned char *)(p + 0x3B4);
        r[1] = 0.0f;
        r[2] = 0.0f;
        r[0] = 6.283185f * ((20.0f * a) / 360.0f);
        r[3] = 1.0f;
    }
    UNIT(m);
    func_00131700(m, m, r);
    func_00104C00(p + 0x370, p + 0x370, m);
    func_00207480(3, 0x391, (float *)(p + 0x370), 8);
    *(unsigned char *)(p + 4) += 1;
    *(unsigned char *)(p + 5) = 0;
}
#undef UNIT

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

void func_004BC510(char *);

void func_004BC5C0(char *);

void func_004BC4A0(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_004BC510(p);
        break;
    case 1:
        func_004BC5C0(p);
        break;
    }
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

void func_004BC510(char *p) {
    extern char D_005BDD78[4];
    *(float *)(p + 0x3B0) = *(float *)(p + 0x3B0) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x3B0) < 0.0f) {
        func_0028C200(p + 0x150, D_005BDD78, D_00587160, 1, D_005BC2E0 + 0x700, p, 0);
        func_0028C8E0(p + 0x150, 0);
        func_0028C910(p + 0x150);
        func_0028C3A0(p + 0x150, 1, -1, p + 0x370);
        *(int *)(p + 0x228) = 0x30F3F;
        *(float *)(p + 0x3B0) = 10.0f;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    }
}

float func_0034C160(float, float, float);

void func_004BC190(char *, int, int, int);

static inline float fabBB(float x) { return x < 0.0f ? -x : x; }

void func_004BBED0(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    float t;
    float y;
    float d;
    unsigned int f;
    unsigned char k;
    float *dst;
    float *src;
    func_001AD100(p);
    *(float *)(p + 0x3D4) = *(float *)(p + 0x3D4) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x3D4) < 0.0f) {
        func_001AD140(p);
        return;
    }
    f = 0;
    if (*(char **)(p + 0x1CC) != 0) {
        f = *(unsigned int *)(*(char **)(p + 0x1CC) + 8);
    }
    if (f & 0x30000) {
        func_001AD140(p);
        return;
    }
    t = func_0034C160(*(float *)(p + 0x3D0), 3.0f, 3.0f * *(float *)(p + 0x10));
    *(float *)(p + 0x3D0) = t;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x3C0), "f"(t * t) : "t0", "memory");
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + tmp[0] * *(float *)(p + 0x10);
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + tmp[2] * *(float *)(p + 0x10);
    switch (D_01CAFF38[0]) {
    case 0x67:
    case 0x70:
    case 0x71:
    case 0xD8:
    case 0xD4:
        y = *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x2924);
        d = fabBB(y - *(float *)(p + 0x54));
        if (d < 100.0f) {
            *(float *)(p + 0x54) = y;
        }
        break;
    }
    *(float *)(p + 0x3D8) = *(float *)(p + 0x3D8) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x3D8) < 0.0f) {
        k = *(unsigned char *)(p + 0x3DC);
        *(unsigned char *)(p + 0x3DC) = k + 1;
        func_004BC190(p + 0x380, *(short *)(p + 0x90), k, *(int *)(p + 0x3E0));
        *(float *)(p + 0x3D8) = 7.0f;
    }
    func_004BC0C0(p);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

extern void func_004BC730();

void func_004BC7D0(char *p) { func_004BC730(p + -64); }

void func_004BC7E0(char *p) { func_004BC730(p + -160); }

extern void func_004BC600();

void func_004BC800(char *p) { func_004BC600(p + -64); }

extern void func_004BC620();

void func_004BC810(char *p) { func_004BC620(p + -64); }

extern void func_004BC670();

void func_004BC820(char *p) { func_004BC670(p + -64); }

void func_004BC830(char *p) { func_004BC670(p + -160); }

void func_004BC650(void) {}

void func_004BC660(void) {}

void func_004BC700(void) {}

void func_004BC710(void) {}

void func_004BC720(void) {}
