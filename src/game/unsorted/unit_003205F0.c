void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_003221A0(char *);

char *func_00322030(char *p, char *s) {
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
    **q = func_001B0FD0(a, 0x500, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x500, t);
        if (r != 0) {
            func_003221A0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
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
        *(char **)(ret + 0x1A4) = p;
        *(unsigned char *)(ret + 0x45) = 4;
        *(char **)(ret + 0x4F4) = s;
        *(int *)(ret + 0x448) = 0;
        *(int *)(ret + 0x44C) = 0;
        *(int *)(ret + 0x450) = 0;
        *(int *)(ret + 0x454) = 0;
    }
    return ret;
}

float func_003216D0(char *p) {
    float v = *(float *)(p + 0x14);
    if (*(unsigned char *)(p + 0x8C) != 0) {
        v += *(float *)(*(char **)(*(char **)(p + 8) + 0x1C) + 0x1C) * (float)*(unsigned int *)(p + 0x90);
    }
    if (!(v <= 1199.0f)) {
        v = 1199.0f;
    }
    if (v < 0.0f) {
        v = 0.0f;
    }
    return v;
}

short func_00131D10(float, float);

#define VSUBR(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

void func_003215F0(char *p) {
    float v[4];
    VSUBR(v, p + 0x20, *(char **)(p + 0x10) + 0x10);
    *(short *)(p + 0x30) = func_00131D10(v[0], v[2]);
}

float func_00131B80(float);

void func_00321640(char *p) {
    float v[4];
    VSUBR(v, p + 0x20, *(char **)(p + 0x10) + 0x10);
    *(float *)(p + 0x34) = func_00131B80(v[0] * v[0] + v[2] * v[2]);
}

int func_003216B0(p0, p1, p2) int p0; int p1; int p2; {
    return (short)((short)p1 - (short)p2);
}

extern char D_01CAFF3C[];

void func_00321D50(p0, p1) char *p0; char *p1; {
    int v0;
    int tmp1;
    int tmp2;
    *(float *)(p0 + 124) = *(float *)(p1 + 0);
    v0 = *(unsigned char *)D_01CAFF3C;
    tmp1 = 4;
    if (v0 != tmp1) {
        if (v0 != 3) {
            tmp2 = 2;
            if (v0 != tmp2) {
                switch (v0) {
                case 0:
                    *(float *)(p0 + 128) = *(float *)(*(char **)(*(char **)(p0 + 8) + 28) + 8);
                    break;
                case 1:
                    *(float *)(p0 + 128) = *(float *)(*(char **)(*(char **)(p0 + 8) + 28) + 12);
                    break;
                }
            } else {
                *(float *)(p0 + 128) = *(float *)(*(char **)(*(char **)(p0 + 8) + 28) + 16);
            }
        } else {
            *(float *)(p0 + 128) = *(float *)(*(char **)(*(char **)(p0 + 8) + 28) + 20);
        }
    } else {
        *(float *)(p0 + 128) = *(float *)(*(char **)(*(char **)(p0 + 8) + 28) + 24);
    }
    *(int *)(p0 + 132) = 0;
    *(float *)(p0 + 136) = *(float *)(p1 + 4);
    *(char *)(p0 + 140) = 0;
    *(char *)(p0 + 141) = 0;
    *(char *)(p0 + 142) = 0;
    *(char *)(p0 + 143) = 0;
    *(int *)(p0 + 144) = 0;
}

int func_00321F50(p0) char *p0; {
    int v0;
    if (*(float *)(p0 + 132) > *(float *)(p0 + 136)) {
        *(int *)(p0 + 132) = 0;
        v0 = 1;
        *(char *)(p0 + 140) = v0;
        *(int *)(p0 + 144) = (*(int *)(p0 + 144) + 1);
    } else {
        v0 = 0;
    }
    return v0;
}

void func_00320690(void) {}

void func_003206A0(void) {}

void func_003206B0(void) {}

int func_00321570(void) { return 0; }

void func_00321580(void) {}

int func_00321590(void) { return 0; }

unsigned char func_003215A0(char *p) { return *(unsigned char *)(p + 141); }

void func_003215B0(char *p, char v) { *(char *)(p + 142) = v; }

void func_003215C0(void) {}

void func_00321970(char *p) { *(int *)(p + 56) = 0; }

void func_00322000(void) {}

void func_00322010(void) {}

void func_00322020(void) {}

void func_003206C0(char *p0) {
    *(char *)(p0 + 28) = 1;
}

void func_003206D0(char *p0) {
    *(char *)(p0 + 28) = 2;
}

extern char D_01CAFF0C[];

void func_003215D0(char *p0) {
    char *t0;
    t0 = (*(char **)(*(char **)D_01CAFF0C + 12) + 80);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((*(char **)(*(char **)D_01CAFF0C + 12) + 80)), "r"((p0 + 32)) : "memory");
}

float func_00321D40(char *p0, float f0) {
    float t0;
    t0 = (*(float *)(p0 + 132) + f0);
    *(float *)(p0 + 132) = (*(float *)(p0 + 132) + f0);
    return t0;
}

void func_003206F0(char *p) {
    if (*(unsigned char *)(p + 0x1D) == 3) return;
}

void func_00320700(char *p) {
    if (*(unsigned char *)(p + 0x1D) == 3) return;
}
