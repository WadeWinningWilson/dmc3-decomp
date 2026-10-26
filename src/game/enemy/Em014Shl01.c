void func_0034BA60(int, char *, signed char, int, int);

void func_00206730(char *);

void func_001AD140(char *);

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

int func_0041D600(char *);

void func_0041D6E0(char *, float *, int, float);

int func_0041DC70(float *, char *, int);

void func_0041D840(char *, char *, float);

void func_00448940(char *p) {
    float v[4];
    if ((unsigned char)func_0041D600(p) != 0) {
        func_001AD100(p);
        func_00206730(p + 0x460);
        *(float *)(p + 0x464) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x464) < 0.0f) {
            func_001AD140(p);
        } else {
            char *b;
            QCOPY(v, p + 0x50);
            b = p;
            if (b != 0) {
                b += 0x40;
            }
            func_0041D6E0(b, (float *)(p + 0x60), 1, *(float *)(p + 0x10));
            if ((unsigned char)func_0041DC70(v, p + 0x50, 1) == 1) {
                func_0034BA60(0x2F, p + 0x50, 0x20, 0, 1);
                func_001AD140(p);
            } else {
                b = p;
                if (b != 0) {
                    b += 0x40;
                }
                func_0041D840(b, p + 0x150, 1.0f);
                func_0028C5C0(p + 0x1E0, 0, 1.0f);
            }
        }
    }
}

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

char *func_00207480(int, int, int, int);

extern char D_0056BB30[];

static inline char *mt448(char *p) { return p + 0x190; }

void func_00448770(char *p) {
    char *q;
    char *o;
    char *e;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x1D0), "r"(p + 0x50) : "memory");
    *(short *)(p + 0x90) = (unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 30.0f;
    *(float *)(p + 0x6C) = 1.0f;
    q = p;
    if (q != 0) q += 0x40;
    func_0041D840(q, p + 0x150, 1.0f);
    *(char **)(p + 0x460) = func_00207480(1, 0x1A7, 0, 0x10);
    if ((o = *(char **)(p + 0x460)) != 0) {
        *(char **)(o + 0x90) = p + 0x190;
        *(unsigned char *)(o + 0x9A) = 3;
        e = *(char **)(p + 0x460);
        *(unsigned char *)(e + 0x3A) = 1;
    } else {
        func_001AD140(p);
        return;
    }
    *(unsigned char *)(p + 0x400) = 1;
    *(unsigned char *)(p + 0x401) = 0;
    *(short *)(p + 0x402) = 0;
    *(unsigned char *)(p + 0x410) = 2;
    *(float *)(p + 0x420) = 0.0f;
    *(float *)(p + 0x424) = 0.0f;
    *(float *)(p + 0x428) = 20.0f;
    *(float *)(p + 0x42C) = 1.0f;
    *(float *)(p + 0x430) = 0.0f;
    func_0028C200(p + 0x1E0, p + 0x400, p + 0x410, 3, D_0056BB30, p, 0);
    *(int *)(p + 0x2B8) = 0x30441;
    func_0028C8E0(p + 0x1E0, 1);
    func_0028C910(p + 0x1E0);
    func_0028C3A0(p + 0x1E0, 0, -1, mt448(p));
    *(float *)(p + 0x464) = 30.0f;
    *(unsigned char *)(p + 4) = 1;
}

extern char D_00645A30[];

void func_0028C110(char *);

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00252FA0(char *);

extern char D_005B4780[];

extern char D_005B47A4[];

extern char D_005B4824[];

char *func_00448600(int p0, float *p1, float *p2) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x470, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B4780;
            *(char **)(t + 0x40) = D_005B47A4;
            *(char **)(t + 0xA0) = D_005B4824;
            *(char *)(t + 0x150) = 0;
            func_0028C110(t + 0x1E0);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
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
        *(int *)(ret + 0xD0) = p0;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p1) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x80), "r"(p2) : "memory");
    }
    return ret;
}

void func_0028C740();

void func_0041D670();

void func_00448A60(int p0) {
    func_0028C740((p0 + 480));
    func_0041D670((p0 + 1120));
}

extern void func_00448A90();

void func_00448B30(char *p) { func_00448A90(p + -64); }

void func_00448B40(char *p) { func_00448A90(p + -160); }
