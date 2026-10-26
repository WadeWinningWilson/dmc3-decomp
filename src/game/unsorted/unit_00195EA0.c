#include "game/mt_rand.h"
/* Clamps a short to >= 0 before storing it (an if/else of two stores, short parameter). */
void func_001A5D70(char *p, short v) {
    if (v < 0) {
        *(short *)(p + 392) = 0;
    } else {
        *(short *)(p + 392) = v;
    }
    *(char *)(p + 394) = 1;
}

/* Smallest power of two (2^1..2^10) that reaches n; a `<= 10` loop test is what gives
 * MW's `slti $at`. */
int func_001971B0(int n) {
    int i;
    for (i = 1; i <= 10; i++) {
        if ((1 << i) >= n) {
            return i;
        }
    }
    return 1;
}

void func_001A9CA0(char *p0, void *src) {
    extern char *D_005BE0D8;
    char *e = p0 + (*(signed char *)(D_005BE0D8 + 14) << 7) + 448;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(src), "r"(e + 48) : "memory");
    *(float *)(e + 112) = 0.0f;
    *(float *)(e + 116) = 0.0f;
    *(float *)(e + 120) = 0.0f;
    *(float *)(e + 124) = 1.0f;
}

typedef struct Arr1A5 { int base; int n; int stride; } Arr1A5;

int func_00197B30(int);

int func_001A5AA0(int a, Arr1A5 *s) {
    int sum = 0;
    int i;
    for (i = 0; i < s->n; i++) {
        sum += func_00197B30(s->base + ((i * s->stride) << 6));
        sum = (sum + 15) & ~15;
    }
    return sum;
}

/* Bytes of a w x h image in a GS pixel format (PSMCT32/24/16, PSMT8, PSMT4). A small
 * switch: MW's compare chain runs in reverse source order. */
int func_00196A20(int w, int h, int psm) {
    switch (psm) {
    case 2:
        return w * h * 2;
    case 1:
        return w * h * 3;
    case 0:
        return w * h * 4;
    case 0x14:
        return (unsigned int)(w * h) >> 1;
    case 0x13:
        return w * h;
    }
    return 0;
}

/* Uploads 16 rows of a 0x400-wide image through the SDK. */
int func_001B0E10(void);

 void func_001038F8(char *, int, int, int, int, short, int, int);

void func_0010DF60(int);

 void func_00103AE0(char *, int);

 void func_001035E0(int, int);

 void func_001B0E50(void);

void func_00195EA0(void) {
    void func_00130990(int, int);
    char buf[96];
    int h = func_001B0E10();
    int i;
    func_00130990(h, 0x10000);
    for (i = 0; i < 16; i++) {
        func_001038F8(buf, 0, 16, 0, 0, i * 64, 0x400, 0x40);
        func_0010DF60(0);
        func_00103AE0(buf, h);
        func_001035E0(0, 0);
    }
    func_001B0E50();
}

typedef struct E380 { char pad[0xE]; unsigned char k; char pad2[0x380 - 0xF]; } E380;

typedef struct O1AA { char pad[0xA8]; unsigned short n; char pad2[0xBC - 0xAA]; E380 *ent; char pad3[0x108 - 0xC0]; char *tbl; } O1AA;

void func_001AA2D0(E380 *, int, char *, int, int);

void func_001AA690(O1AA *p, int a, int b, int c) {
    int i;
    if (a == 0) return;
    for (i = 0; i < p->n; i++) {
        func_001AA2D0(&p->ent[i], a, p->tbl + p->ent[i].k * 64, b, c);
    }
}

typedef struct {
    unsigned char on;
    signed char wrap;
    char pad[2];
    int head;
    int cur;
    int size;
    char *data;
} Ring198;

void func_00198380(char *p) {
    Ring198 *r = (Ring198 *)(p + 0xC);
    if (r->cur == r->head) return;
    do {
        r->cur = r->cur - 1;
        if (r->cur < 0) r->cur = r->size - 1;
        if (r->cur == r->head && r->wrap == 1) {
            r->cur = (r->cur = r->cur + 1) % r->size;
            break;
        }
        r->data[r->cur * 132] = 0;
    } while (r->cur != r->head);
    if (r->cur == r->head) r->on = 0;
}

typedef struct Ent340 {
    char pad[0xC];
    unsigned char cnt;
    char pad2[0x1C - 0xD];
    char *items;
    char pad3[0x340 - 0x20];
} Ent340;

typedef struct Obj1A4 {
    char pad[0xA8];
    unsigned short n;
    char pad2[0xBC - 0xAA];
    Ent340 *ent;
    char pad3[0x1B0 - 0xC0];
    float scale;
} Obj1A4;

void func_001A4350(Obj1A4 *p, unsigned int i, int a, int b) {
    void func_001A49D0(Ent340 *, int, int, int);
    Ent340 *e;
    int k;
    if (i >= p->n) {
        return;
    }
    if (p->scale != 1.0f) {
        if (a) {
            a = a * p->scale;
        }
        if (b) {
            b = b * p->scale;
        }
    }
    e = &p->ent[i];
    for (k = 0; k < e->cnt; k++) {
        func_001A49D0(e, *(int *)(e->items + k * 0x150 + 8), a, b);
    }
}

int func_0019E2D0(char *p) {
    *(float *)(p + 0x40) -= *(float *)(p + 0x70);
    if (*(float *)(p + 0x40) <= 0.0f) {
        *(float *)(p + 0x40) = *(float *)(p + 0x50);
        *(float *)(p + 0x10) += *(float *)(p + 0x20) * *(short *)(p + 0x58);
        if (*(int *)p & 2) {
            *(float *)(p + 0x10) += *(float *)(p + 0x60) +
                (*(float *)(p + 0x64) - *(float *)(p + 0x60)) * (2.3283064e-10f * mt_rand());
        }
        if (*(float *)(p + 0x10) > 1.0f) {
            *(float *)(p + 0x10) -= 1.0f;
        } else if (*(float *)(p + 0x10) < 0.0f) {
            *(float *)(p + 0x10) += 1.0f;
        }
        *(unsigned short *)(p + 0xC) = (unsigned int)(4096.0f * *(float *)(p + 0x10));
        return 1;
    }
    return 0;
}

int func_001A2170(char *);

int func_001A2120(char *p, unsigned int i) {
    int ok = i < *(unsigned short *)(p + 0xA8);
    if (ok == 0) {
        return 0;
    } else {
        return func_001A2170((*(char (**)[832])(p + 0xBC))[i]);
    }
}

int func_001A39C0(char *p, unsigned int i, unsigned int j, int a, int b) {
    int func_001A4050(char *, int, int, int);
    int r;
    if (i < *(unsigned short *)(p + 0xA8) && j < *(short *)(p + 0xAC)) {
        r = func_001A4050((*(char (**)[832])(p + 0xBC))[i], j, a, b);
    }
    return r;
}

extern char D_006480D0[];

int func_00197AC0(char *p) {
    int func_00196F20(char *, int, int, int);
    int a = *(short *)(p + 24);
    int r = 0;
    if (a < 0 || *(short *)(p + 56) > 0) {
        return 0;
    }
    if (*(short *)(p + 20) == 0) {
        r += func_00196F20(D_006480D0, a, *(short *)(p + 30), *(short *)(p + 32));
    }
    return r;
}

void func_0019DFF0(char *p) {
    int func_0019E7B0(char *);
    int func_0019EAA0(char *);
    *(float *)(p + 0x20) = 1.0f / *(float *)(p + 0x30) * *(float *)(p + 0x70);
    if ((unsigned char)func_0019E7B0(p) == 1) {
        *(float *)(p + 0x44) = *(float *)(p + 0x44) - *(float *)(p + 0x70);
        if (*(float *)(p + 0x44) <= 0.0f) {
            *(float *)(p + 0x44) = *(float *)(p + 0x34);
            *(short *)(p + 0x58) = -*(short *)(p + 0x58);
        }
    }
    *(float *)(p + 0x28) = 1.0f / *(float *)(p + 0x38) * *(float *)(p + 0x70);
    if ((unsigned char)func_0019EAA0(p) == 1) {
        *(float *)(p + 0x4C) = *(float *)(p + 0x4C) - *(float *)(p + 0x70);
        if (*(float *)(p + 0x4C) <= 0.0f) {
            *(float *)(p + 0x4C) = *(float *)(p + 0x3C);
            *(short *)(p + 0x5A) = -*(short *)(p + 0x5A);
        }
    }
}

int func_001980B0(char *p, short a, short b, int c, int k) {
    char *e = p + k * 20;
    char *q = e + 0xC;
    unsigned char *s = (unsigned char *)(*(char **)(e + 0x1C) + *(int *)(e + 0x14) * 132);
    if (*s > 0) {
        return 0;
    }
    s[0] = 1;
    *(short *)(s + 2) = a;
    *(short *)(s + 4) = b;
    *(int *)(s + 8) = c;
    q[0] = 1;
    {
        int t = *(int *)(q + 8);
        int c = *(int *)(q + 0xC);
        t++;
        *(int *)(q + 8) = t;
        *(int *)(q + 8) = t % c;
    }
    return 1;
}

void *func_00128488(void *, int, unsigned int);

void func_00197910(char *p, char *q) {
    extern char *D_005BE0D8;
    func_00128488(p, 0, 0x108);
    func_00128488(q, 0, 0x40);
    *(int *)(p + 0x100) = 1;
    *(int *)(p + 0x104) = 1;
    *(char **)p = q;
    *(short *)(q + 2) = -1;
    *(short *)(q + 0) = -1;
    *(short *)(q + 4) = 1;
    *(short *)(q + 8) = *(short *)(D_005BE0D8 + 0x20) / 64;
    *(short *)(q + 0xA) = *(short *)(D_005BE0D8 + 0x20);
    *(short *)(q + 0xC) = *(short *)(D_005BE0D8 + 0x22);
    if (*(signed char *)(D_005BE0D8 + 6) == 2) {
        *(unsigned short *)(q + 6) = *(unsigned short *)(D_005BE0D8 + 0x4C);
    } else {
        *(unsigned short *)(q + 6) = *(unsigned short *)(D_005BE0D8 + 0x48);
    }
    *(short *)(q + 0x18) = -1;
}

char *func_00277610(char *, float *, int, int);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_001AA4B0(char *p, char *m, char *src, int flags) {
    void *func_001282D0(void *, void *, unsigned int);
    float v[4];
    char *r;
    int i;
    if (m != 0) {
        func_00128488(p + 0x2C0, 0, 0xC0);
        QCOPY(v, src + 0x30);
        v[3] = 1.0f;
        r = func_00277610(m, v, flags | 4, 0);
        for (i = 0; i < *(int *)(m + 4); i++) {
            func_001282D0(p + i * 48 + 0x2C0, r + i * 48, 0x30);
        }
    }
}

static inline void set4(float *d, float a, float b, float c, float e) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
}

void func_001A9F90(char *p, float *v) {
    extern char *D_005BE0D8;
    float *m = (float *)(p + *(signed char *)(D_005BE0D8 + 0xE) * 128 + 0x1C0);
    m[0] = 0.0f;
    m[1] = 0.0f;
    m[2] = 0.0f;
    m[3] = 1.0f;
    m[4] = 0.0f;
    m[5] = 0.0f;
    m[6] = 0.0f;
    m[7] = 1.0f;
    m[8] = 0.0f;
    m[9] = 0.0f;
    m[10] = 0.0f;
    m[11] = 1.0f;
    QCOPY(m + 12, v);
    set4(m + 16, 0.0f, 0.0f, 0.0f, 0.0f);
    set4(m + 20, 0.0f, 0.0f, 0.0f, 0.0f);
    set4(m + 24, 0.0f, 0.0f, 0.0f, 0.0f);
    set4(m + 28, 0.0f, 0.0f, 0.0f, 1.0f);
}

void func_00198FE0(char *, int);

char *func_00199090(char *, char *);

void func_00199950(char *);

char *func_00198460(char *, char *);

char *func_00199100(char *, char *);

char *func_00199180(char *, char *);

char *func_00199BB0(char *, char *);

char *func_00199ED0(char *, char *);

char *func_0019AB70(char *, char *);

char *func_0019B530(char *, char *);

void func_0019A040(char *);

void func_00199740(char *p, char *buf, int a) {
    char *c;
    char *n;
    func_00198FE0(p, a);
    n = func_00199090(p, buf);
    func_00199950(p);
    c = func_00198460(p, n);
    c = func_00199100(p, c);
    c = func_00199180(p, c);
    c = func_00199BB0(p, c);
    c = func_00199ED0(p, c);
    switch (*(unsigned int *)(p + 0xA0) & 0xF0000000) {
    case 0x10000000:
        c = func_0019AB70(p, c);
        break;
    case 0x20000000:
        c = func_0019B530(p, c);
        break;
    }
    *(int *)(p + 0xB0) = ((int)(c + 15) & -16) - (int)buf;
    func_0019A040(p);
}

void func_00195F60(char *p) {
    extern char *D_005BE0D8;
    void func_00130990(char *, int);
    unsigned int i;
    unsigned int s;
    for (i = 0; i < (unsigned int)(*(int *)(p + 0xC318) / 32); i++) {
        *(unsigned char *)(p + i + 0x2000) = 0;
    }
    if (*(int *)(p + 0xC314) != 0) {
        s = (*(int *)(p + 0xC310) - *(unsigned short *)(D_005BE0D8 + 0x4C)) / 32;
        for (i = s; i < s + *(int *)(p + 0xC314) / 32; i++) {
            *(unsigned char *)(p + i + 0x2000) = 0xFF;
        }
    }
    func_00130990(p, 0x800);
}

void func_001A4770(char *p, unsigned int k, int x, int y) {
    void func_001A49D0(char *, int, int, int);
    char *e;
    int i;
    if (k < *(unsigned short *)(p + 0xA8)) {
        float s = *(float *)(p + 0x1B0);
        if (s != 1.0f) {
            if (x != 0) {
                x = (int)((float)x * s);
            }
            if (y != 0) {
                y = (int)((float)y * s);
            }
        }
        e = *(char **)(p + 0xBC) + k * 0x380;
        for (i = 0; i < *(unsigned char *)(e + 0xC); i++) {
            func_001A49D0(e, *(int *)(*(char **)(e + 0x1C) + i * 0x150 + 8), x, y);
        }
    }
}

char *func_00198710(char *, char *, int);

void func_00199840(char *p, char *buf, int k, int a) {
    char *c;
    char *n;
    func_00198FE0(p, a);
    n = func_00199090(p, buf);
    func_00199950(p);
    c = func_00198710(p, n, k);
    c = func_00199100(p, c);
    c = func_00199180(p, c);
    c = func_00199BB0(p, c);
    c = func_00199ED0(p, c);
    switch (*(unsigned int *)(p + 0xA0) & 0xF0000000) {
    case 0x10000000:
        c = func_0019AB70(p, c);
        break;
    case 0x20000000:
        c = func_0019B530(p, c);
        break;
    }
    *(int *)(p + 0xB0) = ((int)(c + 15) & -16) - (int)buf;
    func_0019A040(p);
}

void func_0019C480(char *, char *);

void func_00199580(char *, int, int);

void func_001996C0(char *);

char *func_0019C360(char *p, char *buf) {
    int i;
    for (i = 0; i < *(unsigned short *)(p + 0xA8); i++) {
        char *e = *(char **)(p + 0xBC) + i * 0x380;
        int j;
        *(char **)(e + 0x1C) = buf;
        buf += *(unsigned char *)(e + 0xC) * 0x150;
        func_0019C480(p, e);
        for (j = 0; j < *(unsigned char *)(e + 0xC); j++) {
            char *s = *(char **)(e + 0x1C) + j * 0x150;
            *(int *)(e + 8) += *(int *)(s + 4);
            func_00199580(s, *(int *)(p + 0xC8), *(int *)(e + 0x14));
            func_001996C0(s);
        }
    }
    return buf;
}

void func_00197D10(char *p) {
    *(char **)(p + 0x1C) = p + 0x34;
    *(int *)(p + 0x18) = 0x100;
    func_00128488(*(char **)(p + 0x1C), 0, *(int *)(p + 0x18));
    *(unsigned char *)(p + 0xC) = 0;
    *(int *)(p + 0x14) = 0;
    *(int *)(p + 0x10) = 0;
    *(unsigned char *)(p + 0xD) = 0;
    *(char **)(p + 0x30) = p + 0x8434;
    *(int *)(p + 0x2C) = 0x10;
    func_00128488(*(char **)(p + 0x30), 0, *(int *)(p + 0x2C));
    *(unsigned char *)(p + 0x20) = 0;
    *(int *)(p + 0x28) = 0;
    *(int *)(p + 0x24) = 0;
    *(unsigned char *)(p + 0x21) = 0;
    *(int *)(p + 8) = 0;
}

void func_001A9CF0(char *p, char *a, float *b) {
    float func_00104D00(char *, char *);
    extern char *D_005BE0D8;
    void func_00105300(char *, float *);
    char *e;
    float t;
    e = p + D_005BE0D8[0xE] * 128 + 0x1C0;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(e), "r"(a) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(e + 0x10), "r"(a + 0x10) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(e + 0x20), "r"(a + 0x20) : "memory");
    func_00105300(e + 0x40, b);
    if (*(float *)(e + 0x4C) != 0.0f) {
        t = func_00104D00(e + 0x40, e + 0x40);
        t = 1.0f - *(float *)(e + 0x4C) * t;
        t = t > 0.0f ? t : 0.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	mfc1 $t0, %1
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(e), "f"(t) : "t0", "memory");
    }
    *(float *)(e + 0xC) = 0.0f;
    if (*(float *)(e + 0x5C) != 0.0f) {
        t = func_00104D00(e + 0x50, e + 0x50);
        t = 1.0f - *(float *)(e + 0x5C) * t;
        t = t > 0.0f ? t : 0.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(e + 0x10), "r"(e + 0x10), "f"(t) : "t0", "memory");
    }
    *(float *)(e + 0x1C) = 0.0f;
    if (*(float *)(e + 0x6C) != 0.0f) {
        t = func_00104D00(e + 0x60, e + 0x60);
        t = 1.0f - *(float *)(e + 0x6C) * t;
        t = t > 0.0f ? t : 0.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(e + 0x20), "r"(e + 0x20), "f"(t) : "t0", "memory");
    }
    *(float *)(e + 0x2C) = 0.0f;
    *(float *)(e + 0x4C) = *(float *)(e + 0x5C) = *(float *)(e + 0x6C) = 0.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	vmul.xyz $vf5, $vf4, $vf4
	vaddy.x $vf5, $vf5, $vf5y
	vaddz.x $vf5, $vf5, $vf5z
	vrsqrt $Q, $vf0w, $vf5x
	vsub.xyzw $vf6, $vf0, $vf0
	vwaitq
	vmulq.xyz $vf6, $vf4, $Q
	lqc2 $vf4, 0x10(%0)
	vmul.xyz $vf5, $vf4, $vf4
	vaddy.x $vf5, $vf5, $vf5y
	vaddz.x $vf5, $vf5, $vf5z
	vrsqrt $Q, $vf0w, $vf5x
	vsub.xyzw $vf7, $vf0, $vf0
	vwaitq
	vmulq.xyz $vf7, $vf4, $Q
	lqc2 $vf4, 0x20(%0)
	vmul.xyz $vf5, $vf4, $vf4
	vaddy.x $vf5, $vf5, $vf5y
	vaddz.x $vf5, $vf5, $vf5z
	vrsqrt $Q, $vf0w, $vf5x
	vsub.xyzw $vf8, $vf0, $vf0
	vwaitq
	vmulq.xyz $vf8, $vf4, $Q
	qmfc2.ni $t0, $vf6
	qmfc2.ni $t1, $vf7
	qmfc2.ni $t2, $vf8
	qmfc2.ni $t3, $vf0
	pextlw $t4, $t1, $t0
	pextuw $t5, $t1, $t0
	pextlw $t6, $t3, $t2
	pextuw $t7, $t3, $t2
	pcpyld $t0, $t6, $t4
	pcpyud $t1, $t4, $t6
	pcpyld $t2, $t7, $t5
	pcpyud $t3, $t5, $t7
	sq $t0, 0x0(%0)
	sq $t1, 0x10(%0)
	sq $t2, 0x20(%0)
	sq $t3, 0x30(%0)" : : "r"(e + 0x40) : "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7", "memory");
}

extern char D_0053F840[];

void func_001A0050(char *, int, int, unsigned int, char *);

void func_001A0020(char *p, int a, char *c) {
    if (c == 0) c = D_0053F840;
    func_001A0050(p, a, *(int *)(c + 0x38), *(int *)(c + 0x3C), c);
}

void func_00199270(char *p) {
    char *o = *(char **)(p + 0x10C);
    *(long long *)(o + 0) = 0;
    *(long long *)(o + 8) = 0;
}

extern long long D_0053F970[];

void func_001A99A0(long long *out, int i) {
    *out = D_0053F970[i];
}

void func_0019AA40(int a, char *o) {
    unsigned char n = 4;
    int f = *(int *)o;
    if ((f & 0x1000) || (f & 0x2000)) {
        n = 12;
    }
    *(char *)(o + 6) = n;
    *(char *)(o + 5) = n;
}

void func_001A2710(char *p, unsigned int c) {
    unsigned int g = (c >> 8) & 0xFF;
    unsigned int r = c & 0xFF;
    unsigned int b = (c >> 16) & 0xFF;
    *(unsigned int *)(p + 0x1A0) = r;
    *(unsigned int *)(p + 0x1A4) = g;
    *(unsigned int *)(p + 0x1A8) = b;
    *(unsigned long long *)(*(char **)(p + 0x10C) + 8) = ((unsigned long long)b << 16) | (r | ((unsigned long long)g << 8));
}

void func_001A26C0(char *p, short d) {
    short v = *(short *)(p + 0x15C) + d;
    if (v < 0) {
        v = 0;
    }
    if (v > 255) {
        v = 255;
    }
    *(int *)(p + 0x15C) = v;
}

void func_0019B3D0(int a, char *o) {
    unsigned char n = 5;
    int f = *(int *)o;
    if (f & 0x800) {
        if ((f & 0x1000) || (f & 0x2000)) {
            n = 8;
        } else {
            n = 7;
        }
    } else if ((f & 0x1000) || (f & 0x2000)) {
        n = 9;
    }
    *(char *)(o + 6) = n;
    *(char *)(o + 5) = n;
}

void func_001970E0(char *);

void func_00196C40(char *base, char *q) {
    void func_00130990(int, int);
    if (q != 0) {
        if (q < base || q > base + 0x1FC0) {
            return;
        }
        if (*(short *)(q + 0x3A) != 0) {
            func_001970E0(base);
        }
        func_00130990((int)q, 0x10);
    }
}

void func_00105230(char *, char *, float *);

void func_00131760(char *, char *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_0019BF40(char *p) {
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    char *e;
    char *s;
    unsigned int i;
    unsigned char *q;
    unsigned char *m;
    s = *(char **)(p + 0x10);
    for (i = 0; i < *(unsigned short *)(p + 0xAA); i++) {
        e = *(char **)p + i * 0x90;
        *(char *)(e + 0x85) = i;
        UNIT(e + 0x40);
        QCOPY(t, s);
        t[3] = 1.0f;
        s += 0x10;
        QCOPY(r, s);
        s += 0x10;
        r[3] = 0.0f;
        func_00131760(e + 0x40, e + 0x40, r);
        func_00105230(e + 0x40, e + 0x40, t);
    }
    m = *(unsigned char **)(p + 0x8);
    q = *(unsigned char **)(p + 0x4);
    for (i = 0; i < *(unsigned short *)(p + 0xAA); i++) {
        e = *(char **)p + m[i] * 0x90;
        *(unsigned char *)(e + 0x84) = *q++;
        if (*(unsigned char *)(e + 0x84) != 0xFF) {
            *(char **)(e + 0x80) = *(char **)(p + 0x108) + *(unsigned char *)(e + 0x84) * 0x40;
        } else {
            *(char **)(e + 0x80) = p + 0x120;
        }
    }
}

void func_001A0530(char *, int);

int func_001A0B50(char *, int);

int func_001A03D0(char *p, int k) {
    unsigned int *e = (unsigned int *)(*(char **)(p + 0xBC) + k * 0x340);
    int r = 0;
    if (e[0xB0] == 0) return -1;
    if ((e[0] & 4) == 0) {
        e[0] |= 4;
        e[0xB1] &= ~0xF;
        e[0xB1] |= 1;
    }
    switch (e[0xB1] & 0xF) {
    case 1:
        e[0xB1] &= ~0xF;
        e[0xB1] |= 2;
        func_001A0530(p, k);
    case 2:
        switch (e[0xB1] & 0x1000000) {
        case 0x1000000:
            r = func_001A0B50(p, k);
        }
        if (r <= 0) {
            e[0xB1] &= ~0xF;
            e[0xB1] |= 3;
        }
        break;
    case 3:
        break;
    }
    return r;
}

int func_001A97E0(signed char *s) {
    if (s[0] == 'M' && s[1] == 'O' && s[2] == 'D' && s[3] == ' ') return 0x10000000;
    if (s[0] == 'S' && s[1] == 'C' && s[2] == 'M' && s[3] == ' ') return 0x30000000;
    if (s[0] == 'E' && s[1] == 'F' && s[2] == 'M' && s[3] == ' ') return 0x20000000;
    if (s[0] == 'M' && s[1] == 'R' && s[2] == 'P' && s[3] == ' ') return 0x40000000;
    if (s[0] == 'M' && s[1] == 'C' && s[2] == 'V' && s[3] == ' ') return 0x50000000;
    if (s[0] == 'S' && s[1] == 'H' && s[2] == 'W' && s[3] == ' ') return 0x60000000;
    return 0;
}

void func_001A16B0(char *p, int idx) {
    char *o = *(char **)(p + 0xBC) + idx * 0x340;
    int i;
    char *t;
    unsigned int j;
    char *e;
    if (*(int *)(o + 0x2C0) != 0) {
        *(unsigned int *)o &= ~4;
        *(unsigned int *)(o + 0x2C4) &= ~0xF;
        for (i = 0; i < *(unsigned char *)(o + 0xC); i++) {
            t = *(char **)(*(char **)(o + 0x1C) + i * 0x150 + 0x13C);
            for (j = 0; j < *(unsigned int *)t; j++) {
                e = *(char **)(t + 4) + j * 0xC0;
                *(unsigned int *)(e + 0xB0) &= ~0xF;
                *(unsigned int *)(e + 0xB0) |= 1;
                *(unsigned int *)(e + 0xB0) &= 0xFDFFFFFF;
            }
        }
    }
}

void func_001A7230(int, int, int);

typedef struct { int n; int b4; int b8; int bc; unsigned int c0; } St1A7;

static inline unsigned short act_1A7(char *p) {
    if (*(int *)(p + 0xB4) == 0 && *(short *)(p + 0xB8) == 0) return 0;
    return 1;
}

extern St1A7 D_0065D4B0;

void func_001A7120(char *p, int n) {
    extern char *D_005BE0D8;
    if ((unsigned char)act_1A7(p)) {
        if (n < 0) {
            n = 30;
        } else {
            if (n > 30) n = 30;
        }
        func_001A7230(*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE0), *(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE8), n);
        D_0065D4B0.b4 += *(int *)(p + 0xB4);
        D_0065D4B0.b8 += *(short *)(p + 0xB8);
        D_0065D4B0.n++;
        D_0065D4B0.bc += *(unsigned short *)(p + 0xA8);
        D_0065D4B0.c0 += *(int *)(p + 0xB0);
    }
}

void func_001A7450(int, int, int);

typedef struct { int n; int b4; int b8; int bc; unsigned int c0; } StA7340;

static inline unsigned short act_A7340(char *p) {
    if (*(int *)(p + 0xB4) == 0 && *(short *)(p + 0xB8) == 0) return 0;
    return 1;
}

extern StA7340 D_0065E4D0;

void func_001A7340(char *p, int n) {
    extern char *D_005BE0D8;
    if ((unsigned char)act_A7340(p)) {
        if (n < 0) {
            n = 126;
        } else {
            if (n > 126) n = 126;
        }
        func_001A7450(*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE0), *(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE8), n);
        D_0065E4D0.b4 += *(int *)(p + 0xB4);
        D_0065E4D0.b8 += *(short *)(p + 0xB8);
        D_0065E4D0.n++;
        D_0065E4D0.bc += *(unsigned short *)(p + 0xA8);
        D_0065E4D0.c0 += *(int *)(p + 0xB0);
    }
}

void func_001A7840(int, int, int);

typedef struct { int n; int b4; int b8; int bc; unsigned int c0; } StA7730;

static inline unsigned short act_A7730(char *p) {
    if (*(int *)(p + 0xB4) == 0 && *(short *)(p + 0xB8) == 0) return 0;
    return 1;
}

extern StA7730 D_0065F550;

void func_001A7730(char *p, int n) {
    extern char *D_005BE0D8;
    if ((unsigned char)act_A7730(p)) {
        if (n < 0) {
            n = 126;
        } else {
            if (n > 126) n = 126;
        }
        func_001A7840(*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE0), *(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE8), n);
        D_0065F550.b4 += *(int *)(p + 0xB4);
        D_0065F550.b8 += *(short *)(p + 0xB8);
        D_0065F550.n++;
        D_0065F550.bc += *(unsigned short *)(p + 0xA8);
        D_0065F550.c0 += *(int *)(p + 0xB0);
    }
}

void func_001A7DA0(int, int, int);

typedef struct { int n; int b4; int b8; int bc; unsigned int c0; } StA7C90;

static inline unsigned short act_A7C90(char *p) {
    if (*(int *)(p + 0xB4) == 0 && *(short *)(p + 0xB8) == 0) return 0;
    return 1;
}

extern StA7C90 D_00660620;

void func_001A7C90(char *p, int n) {
    extern char *D_005BE0D8;
    if ((unsigned char)act_A7C90(p)) {
        if (n < 0) {
            n = 126;
        } else {
            if (n > 126) n = 126;
        }
        func_001A7DA0(*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE0), *(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE8), n);
        D_00660620.b4 += *(int *)(p + 0xB4);
        D_00660620.b8 += *(short *)(p + 0xB8);
        D_00660620.n++;
        D_00660620.bc += *(unsigned short *)(p + 0xA8);
        D_00660620.c0 += *(int *)(p + 0xB0);
    }
}

void func_001A7B20(int, int, int);

void func_001A7B90(int, int, int);

typedef struct { int b4[2]; int b8[2]; int a8[2]; unsigned int b0[2]; } St1A79;

static inline unsigned short act_1A79(char *p) {
    if (*(int *)(p + 0xB4) == 0 && *(short *)(p + 0xB8) == 0) return 0;
    return 1;
}

void func_001A79A0(char *p, int n) {
    extern char *D_005BE0D8;
    extern St1A79 D_0065F5F8;
    int k;
    if ((unsigned char)act_1A79(p)) {
        if (n < 0) {
            n = 0;
        } else if (n > 0) {
            n = 0;
        }
        k = *(signed char *)(D_005BE0D8 + 0xE);
        if (*(int *)(p + 0xA0) & 0x20) {
            func_001A7B20(*(int *)((char *)(k * 4) + (int)p + 0xE0), *(int *)((char *)(k * 4) + (int)p + 0xE8), n);
            D_0065F5F8.b4[0] += *(int *)(p + 0xB4);
            D_0065F5F8.b8[0] += *(short *)(p + 0xB8);
            D_0065F5F8.a8[0] += *(unsigned short *)(p + 0xA8);
            D_0065F5F8.b0[0] += *(int *)(p + 0xB0);
        } else {
            func_001A7B90(*(int *)((char *)(k * 4) + (int)p + 0xE0), *(int *)((char *)(k * 4) + (int)p + 0xE8), n);
            D_0065F5F8.b4[1] += *(int *)(p + 0xB4);
            D_0065F5F8.b8[1] += *(short *)(p + 0xB8);
            D_0065F5F8.a8[1] += *(unsigned short *)(p + 0xA8);
            D_0065F5F8.b0[1] += *(int *)(p + 0xB0);
        }
    }
}

int func_001A9BE0(char *, int);

int func_001A99C0(char *p, int a) {
    int i;
    char *e;
    int j;
    if ((*(unsigned int *)(p + 0xA0) & 0xF0000000) != 0x30000000) {
        return 0;
    }
    for (i = 0; i < *(unsigned short *)(p + 0xA8); i++) {
        e = *(char **)(p + 0xBC) + i * 0x380;
        for (j = 0; j < *(unsigned char *)(e + 0xC); j++) {
            if ((unsigned char)func_001A9BE0(*(char **)(e + 0x1C) + j * 0x150, a) == 0) {
                return 0;
            }
        }
    }
    return 1;
}

int func_001A9AD0(char *p, int a) {
    int i;
    char *e;
    int j;
    if ((*(unsigned int *)(p + 0xA0) & 0xF0000000) != 0x20000000) {
        return 0;
    }
    for (i = 0; i < *(unsigned short *)(p + 0xA8); i++) {
        e = *(char **)(p + 0xBC) + i * 0x340;
        for (j = 0; j < *(unsigned char *)(e + 0xC); j++) {
            if ((unsigned char)func_001A9BE0(*(char **)(e + 0x1C) + j * 0x150, a) == 0) {
                return 0;
            }
        }
    }
    return 1;
}

void func_001A3BD0(char *p, unsigned int k, float x, float y) {
    int func_001A4050(char *, int, int, int);
    unsigned int u;
    unsigned int v;
    char *e;
    int i;
    if (k < *(unsigned short *)(p + 0xA8)) {
        u = (unsigned int)(4096.0f * x);
        v = (unsigned int)(4096.0f * y);
        e = *(char **)(p + 0xBC) + k * 0x340;
        for (i = 0; i < *(unsigned char *)(e + 0xC); i++) {
            func_001A4050(e, *(int *)(*(char **)(e + 0x1C) + i * 0x150 + 8), u, v);
        }
    }
}

#define ITOF0(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tvitof0.xyzw $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_001A3030(char *p, unsigned int c) {
    int v[4];
    if (*(unsigned int *)p & 0x200) {
        v[0] = c & 0xFF;
        v[1] = (c >> 8) & 0xFF;
        v[2] = (c >> 16) & 0xFF;
        v[3] = 0;
        ITOF0(p + 0x140, v);
    }
}

void func_00199620(char *p, int k) {
    char *e = p + k * 80;
    unsigned char m;
    *(unsigned long long *)(e + 0x40) = ((unsigned long long)0x40000000 << 32) | 0x8001;
    *(unsigned long long *)(e + 0x48) = 0xEEEE;
    *(unsigned long long *)(e + 0x58) = 6;
    *(unsigned long long *)(e + 0x68) = 0x14;
    *(unsigned long long *)(e + 0x78) = 8;
    *(unsigned long long *)(e + 0x88) = 0x34;
    *(unsigned long long *)(e + 0x50) = *(unsigned long long *)(p + 0x10);
    *(unsigned long long *)(e + 0x60) = *(unsigned long long *)(p + 0x18);
    *(unsigned long long *)(e + 0x70) = *(unsigned long long *)(p + 0x20);
    *(unsigned long long *)(e + 0x80) = *(unsigned long long *)(p + 0x28);
    {
        char *q = p + 0x10;
        int m = 1 << k;
        unsigned char b = *(unsigned char *)(q + 0x20);
        if (b & m) {
            *(unsigned char *)(q + 0x20) = b & (unsigned char)(m ^ 3);
        }
    }
}

void func_001A9730(char *p) {
    int i;
    char *e;
    char *q;
    int j;
    *(char **)(p + 0x1C) = *(char **)(p + 0x1C) + (int)p;
    for (i = 0; i < *(unsigned char *)(p + 0x10); i++) {
        e = p + i * 0x30 + 0x30;
        *(char **)(e + 4) = *(char **)(e + 4) + (int)p;
        q = *(char **)(e + 4);
        for (j = 0; j < *(unsigned char *)e; j++) {
            *(char **)(q + 0xC) = *(char **)(q + 0xC) + (int)p;
            *(char **)(q + 0x10) = *(char **)(q + 0x10) + (int)p;
            *(char **)(q + 0x14) = *(char **)(q + 0x14) + (int)p;
            *(char **)(q + 0x20) = *(char **)(q + 0x20) + (int)p;
            q += *(int *)(q + 0x18);
        }
    }
}

void func_001A95A0(char *p) {
    int i;
    char *e;
    int j;
    char *q;
    *(char **)(p + 0x1C) = *(char **)(p + 0x1C) + (int)p;
    for (i = 0; i < *(unsigned char *)(p + 0x10); i++) {
        e = p + i * 0x30 + 0x30;
        *(char **)(e + 4) = *(char **)(e + 4) + (int)p;
        for (j = 0; j < *(unsigned char *)e; j++) {
            q = *(char **)(e + 4) + j * 0x30;
            *(char **)(q + 0xC) = *(char **)(q + 0xC) + (int)p;
            *(char **)(q + 0x10) = *(char **)(q + 0x10) + (int)p;
            *(char **)(q + 0x14) = *(char **)(q + 0x14) + (int)p;
            *(char **)(q + 0x18) = *(char **)(q + 0x18) + (int)p;
            *(char **)(q + 0x1C) = *(char **)(q + 0x1C) + (int)p;
        }
    }
}

void func_001A35F0(char *p) {
    int i;
    char *e;
    int j;
    char *q;
    if (*(unsigned int *)(p + 0xA0) & 0x10) {
        *(unsigned int *)(p + 0xA0) &= ~0x70;
        for (i = 0; i < *(unsigned short *)(p + 0xA8); i++) {
            e = *(char **)(p + 0xBC) + i * 0x340;
            *(unsigned char *)(e + 5) = *(unsigned char *)(e + 6);
            for (j = 0; j < *(unsigned char *)(e + 0xC); j++) {
                q = *(char **)(e + 0x1C) + j * 0x150;
                *(unsigned long long *)(q + 0x10) = *(unsigned long long *)(*(char **)(p + 0xC8) + *(unsigned short *)(*(char **)(q + 0xC) + 2) * 48 + 0x10);
                *(unsigned char *)(q + 0x30) = 3;
            }
        }
    }
}

int func_001A9BE0(char *p, int c) {
    int n;
    int i;
    unsigned int j;
    int r;
    n = 1;
    if (*(int *)(p + 0x128) != *(int *)(p + 0x12C)) {
        n = 2;
    }
    for (i = 0; i < n; i++) {
        if (*(char **)(p + i * 4 + 0x128) == 0) {
            return 0;
        }
        for (j = 0; j < *(unsigned int *)(p + 4); j++) {
            unsigned char *d = (unsigned char *)(*(char **)(p + i * 4 + 0x128) + j * 4);
            d[0] = c & 0xFF;
            d[1] = ((unsigned int)c >> 8) & 0xFF;
            d[2] = ((unsigned int)c >> 16) & 0xFF;
        }
    }
    return 1;
}

int func_00196180(char *p) {
    int func_00196250(char *, int, int);
    int r = 1;
    int n = *(int *)(p + 0x100) * *(int *)(p + 0x104);
    int i;
    for (i = 0; i < n; i++) {
        char *o = *(char **)(p + i * 4);
        if (*(short *)(o + 0x18) < 0 || *(short *)(o + 0x38) != 0) {
            r &= func_00196250(o, 1, 0);
        } else if (*(short *)(o + 0x14) != 0) {
            r &= func_00196250(o, 1, 0);
        } else {
            r &= func_00196250(o, 0, 0);
        }
    }
    return r;
}

void func_00134DE0(char *, char *, int);

void func_00138160(int);

void func_00138200(int);

void func_00138260(int);

extern char D_0065F570[];

extern unsigned int D_0065F5F0[];

extern unsigned int D_0065F5F4[];

extern unsigned int D_0065F5FC[];

extern unsigned int D_0065F608[];

extern unsigned int D_0065F60C[];

extern unsigned int D_0065F610[];

extern unsigned int D_0065F614[];

void func_001A8C40(int a) {
    extern char *D_005BE0D8;
    extern unsigned int D_0065F5F8[];
    char *b;
    int k = *(signed char *)(D_005BE0D8 + 0xE);
    if (D_0065F5F0[0] != 0) {
        func_00138160(6);
        func_00138200(a);
        b = D_0065F570 + (k << 5);
        func_00134DE0(b + 0x10, b, a);
        func_00138260(a);
        *(int *)(D_005BE0D8 + 0x80) += D_0065F5F0[0];
        *(int *)(D_005BE0D8 + 0x84) += D_0065F5F8[0];
        *(int *)(D_005BE0D8 + 0x88) += D_0065F608[0];
        *(int *)(D_005BE0D8 + 0x8C) += D_0065F610[0];
    }
    if (D_0065F5F4[0] != 0) {
        func_00138160(a);
        func_00138200(a);
        b = D_0065F570 + (k << 5);
        func_00134DE0(b + 0x50, b + 0x40, a);
        func_00138260(a);
        *(int *)(D_005BE0D8 + 0x80) += D_0065F5F4[0];
        *(int *)(D_005BE0D8 + 0x84) += D_0065F5FC[0];
        *(int *)(D_005BE0D8 + 0x88) += D_0065F60C[0];
        *(int *)(D_005BE0D8 + 0x8C) += D_0065F614[0];
    }
}

void func_0019ED90(char *);

void func_0019F0A0(char *, char *, int);

void func_0019F0E0(char *, char *, int);

void func_0019EEE0(char *p) {
    int i;
    char *e;
    char *b;
    char *a;
    short *t;
    if (*(int *)(p + 0x20) == 0) return;
    func_0019ED90(p);
    for (i = 0; i < *(short *)(p + 0x28); i++) {
        e = *(char **)(p + 0x30) + i * 0x58;
        t = *(short **)(e + 0x20);
        if (*(unsigned int *)(p + 0xA0) & 0x30000000) {
            a = *(char **)(p + 0xBC) + *t * 0x380;
        } else {
            b = *(char **)(p + 0xBC) + *t * 0x340;
        }
        {
    int j;
    for (j = 0; j < 2; j++) {
            switch (((short *)e)[j]) {
            case 3:
            case 4:
                if (*(unsigned int *)(p + 0xA0) & 0x30000000) {
                    func_0019F0A0(a, e, j);
                } else {
                    func_0019F0A0(b, e, j);
                }
                break;
            case 1:
            case 2:
                if (*(unsigned int *)(p + 0xA0) & 0x30000000) {
                    func_0019F0E0(a, e, j);
                } else {
                    func_0019F0E0(b, e, j);
                }
                break;
            }
        }
    }
    }
}

void func_001A5BD0(char *p) {
    unsigned int t;
    *(unsigned char *)(p + 0x18A) = 0;
    t = *(unsigned int *)(p + 0xA0) & 0xF0000000;
    if (t == 0x10000000 || t == 0x20000000) {
        if (*(unsigned short *)(p + 0x184) != 2) {
            *(short *)(p + 0x186) = *(unsigned short *)(p + 0x184);
            *(short *)(p + 0x184) = 2;
        }
    } else {
        *(short *)(p + 0x184) = 0;
    }
}

extern char D_0065E4F0[];

void func_001A7620(unsigned int addr, unsigned long long *tag, int pri) {
    extern char *D_005BE0D8;
    unsigned long long *ot;
    unsigned long long old;
    if (pri < 0) {
        pri = 0;
    } else if (pri > 0) {
        pri = 0;
    }
    ot = (unsigned long long *)((char *)((pri + 1) * 16) + (int)(D_0065E4F0 + *(signed char *)(D_005BE0D8 + 0xE) * 32));
    old = *ot;
    *ot = ((unsigned long long)addr << 32) | 0x20000000;
    *tag = (((unsigned long long)(old >> 32)) << 32) | 0x20000000;
}

char *func_001972B0(char *p) {
    extern char *D_005BE0D8;
    int e = *(signed char *)(D_005BE0D8 + 0xE);
    int n = (*(int *)((char *)(e * 4) + (int)p + 0xC300))++;
    *(unsigned char *)((char *)n + (int)((char *)(e * 128) + (int)p) + 0xC200) = 1;
    return p + e * 0x5000 + n * 0xA0 + 0x2200;
}

extern char D_00645EB0[];

void func_00286440(char *);

int func_001960F0(char *p, int n) {
    extern char *D_005BE0D8;
    *(int *)(p + 0xC314) = n * 32;
    *(int *)(p + 0xC310) = *(int *)(p + 0xC30C) = *(unsigned short *)(D_005BE0D8 + 0x4E) - *(int *)(p + 0xC314);
    *(int *)(p + 0xC318) = *(int *)(p + 0xC310) - *(unsigned short *)(D_005BE0D8 + 0x4C);
    func_00286440(D_00645EB0);
    return 1;
}

void func_001A9660(char *p) {
    int i;
    char *t;
    char *e;
    int j;
    *(int *)(p + 0x1C) = *(int *)(p + 0x1C) + (int)p;
    for (i = 0; i < *(unsigned char *)(p + 0x10); i++) {
        e = p + i * 0x30 + 0x30;
        *(int *)(e + 4) = *(int *)(e + 4) + (int)p;
        for (j = 0; j < *(unsigned char *)e; j++) {
            t = *(char **)(e + 4) + j * 0x30;
            *(int *)(t + 0xC) = *(int *)(t + 0xC) + (int)p;
            *(int *)(t + 0x10) = *(int *)(t + 0x10) + (int)p;
            *(int *)(t + 0x14) = *(int *)(t + 0x14) + (int)p;
            *(int *)(t + 0x18) = *(int *)(t + 0x18) + (int)p;
            *(int *)(t + 0x1C) = *(int *)(t + 0x1C) + (int)p;
            *(int *)(t + 0x20) = *(int *)(t + 0x20) + (int)p;
        }
    }
}

void func_00197000(char *p, char *q) {
    int n;
    char *s;
    *(short *)(q + 0x3A) = 1;
    s = p + (*(short *)(q + 6) - *(int *)(p + 0xC308)) / 32 + 0x2000;
    n = *(short *)(q + 0xE);
    do {
        *s = 1;
        n--;
        s++;
    } while (n != 0);
    if (*(short *)(q + 0x18) >= 0 && *(short *)(q + 0x14) == 0 && *(short *)(q + 0x38) == 0) {
        s = p + (*(short *)(q + 0x1A) - *(int *)(p + 0xC308)) / 32 + 0x2000;
        n = *(short *)(q + 0x22);
        do {
            *s = 1;
            n--;
            s++;
        } while (n != 0);
    }
}

void func_00199710(char *);

void func_0019B440(char *p, char *q) {
    int i;
    char *e;
    char *s;
    for (i = 0; i < *(unsigned char *)(q + 0xC); i++) {
        e = *(char **)(q + 0x1C) + i * 0x150;
        s = *(char **)(*(char **)(q + 0x18) + 4) + i * 0x30;
        *(char **)(e + 0xC) = s;
        *(int *)(e + 4) = *(unsigned short *)(s + 0);
        *(int *)(e + 8) = *(unsigned short *)(s + 2);
        *(int *)(e + 0x138) = *(int *)(e + 0x100) = *(int *)(e + 0x104) = *(int *)(s + 0xC);
        *(int *)(e + 0x108) = *(int *)(e + 0x10C) = *(int *)(s + 0x10);
        *(int *)(e + 0x110) = *(int *)(e + 0x114) = *(int *)(s + 0x14);
        *(int *)(e + 0x118) = *(int *)(e + 0x11C) = *(int *)(s + 0x18);
        *(int *)(e + 0x120) = *(int *)(e + 0x124) = *(int *)(s + 0x1C);
        *(int *)(e + 0x128) = *(int *)(e + 0x12C) = *(int *)(s + 0x20);
        func_00199710(e);
    }
}

void func_0019AA80(char *p, char *q) {
    int i;
    char *e;
    char *s;
    for (i = 0; i < *(unsigned char *)(q + 0xC); i++) {
        e = *(char **)(q + 0x1C) + i * 0x150;
        s = *(char **)(*(char **)(q + 0x18) + 4) + i * 0x30;
        *(char **)(e + 0xC) = s;
        *(int *)(e + 4) = *(unsigned short *)(s + 0);
        *(int *)(e + 8) = *(unsigned short *)(s + 2);
        *(int *)(e + 0x138) = *(int *)(e + 0x100) = *(int *)(e + 0x104) = *(int *)(s + 0xC);
        *(int *)(e + 0x10C) = *(int *)(e + 0x108) = *(int *)(s + 0x10);
        *(int *)(e + 0x110) = *(int *)(e + 0x114) = *(int *)(s + 0x14);
        *(int *)(e + 0x118) = *(int *)(e + 0x11C) = *(int *)(s + 0x18);
        *(int *)(e + 0x120) = *(int *)(e + 0x124) = *(int *)(s + 0x1C);
        *(int *)(e + 0x128) = *(int *)(e + 0x12C) = 0;
        func_00199710(e);
    }
}

void func_001A7FD0(unsigned int, unsigned long long *, int);

typedef struct { int n; int b4; int b8; int bc; unsigned int c0; } StA7EC0;

static inline unsigned short act_A7EC0(char *p) {
    if (*(int *)(p + 0xB4) == 0 && *(short *)(p + 0xB8) == 0) return 0;
    return 1;
}

extern StA7EC0 D_00661640;

void func_001A7EC0(char *p, int n) {
    extern char *D_005BE0D8;
    if ((unsigned char)act_A7EC0(p)) {
        if (n < 0) {
            n = 126;
        } else {
            if (n > 126) n = 126;
        }
        func_001A7FD0(*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE0), (unsigned long long *)*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE8), n);
        D_00661640.b4 += *(int *)(p + 0xB4);
        D_00661640.b8 += *(short *)(p + 0xB8);
        D_00661640.n++;
        D_00661640.bc += *(unsigned short *)(p + 0xA8);
        D_00661640.c0 += *(int *)(p + 0xB0);
    }
}

void func_001A81F0(unsigned int, unsigned long long *, int);

typedef struct { int n; int b4; int b8; int bc; unsigned int c0; } StA80E0;

static inline unsigned short act_A80E0(char *p) {
    if (*(int *)(p + 0xB4) == 0 && *(short *)(p + 0xB8) == 0) return 0;
    return 1;
}

extern StA80E0 D_00661AC0;

void func_001A80E0(char *p, int n) {
    extern char *D_005BE0D8;
    if ((unsigned char)act_A80E0(p)) {
        if (n < 0) {
            n = 0;
        } else {
            if (n > 0) n = 0;
        }
        func_001A81F0(*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE0), (unsigned long long *)*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE8), n);
        D_00661AC0.b4 += *(int *)(p + 0xB4);
        D_00661AC0.b8 += *(short *)(p + 0xB8);
        D_00661AC0.n++;
        D_00661AC0.bc += *(unsigned short *)(p + 0xA8);
        D_00661AC0.c0 += *(int *)(p + 0xB0);
    }
}

void func_001A8420(unsigned int, unsigned long long *, int);

typedef struct { int n; int b4; int b8; int bc; unsigned int c0; } StA8310;

static inline unsigned short act_A8310(char *p) {
    if (*(int *)(p + 0xB4) == 0 && *(short *)(p + 0xB8) == 0) return 0;
    return 1;
}

extern StA8310 D_00661A60;

void func_001A8310(char *p, int n) {
    extern char *D_005BE0D8;
    if ((unsigned char)act_A8310(p)) {
        if (n < 0) {
            n = 30;
        } else {
            if (n > 30) n = 30;
        }
        func_001A8420(*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE0), (unsigned long long *)*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE8), n);
        D_00661A60.b4 += *(int *)(p + 0xB4);
        D_00661A60.b8 += *(short *)(p + 0xB8);
        D_00661A60.n++;
        D_00661A60.bc += *(unsigned short *)(p + 0xA8);
        D_00661A60.c0 += *(int *)(p + 0xB0);
    }
}

void func_001A8650(unsigned int, unsigned long long *, int);

typedef struct { int n; int b4; int b8; int bc; unsigned int c0; } StA8540;

static inline unsigned short act_A8540(char *p) {
    if (*(int *)(p + 0xB4) == 0 && *(short *)(p + 0xB8) == 0) return 0;
    return 1;
}

extern StA8540 D_00661EE0;

void func_001A8540(char *p, int n) {
    extern char *D_005BE0D8;
    if ((unsigned char)act_A8540(p)) {
        if (n < 0) {
            n = 30;
        } else {
            if (n > 30) n = 30;
        }
        func_001A8650(*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE0), (unsigned long long *)*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE8), n);
        D_00661EE0.b4 += *(int *)(p + 0xB4);
        D_00661EE0.b8 += *(short *)(p + 0xB8);
        D_00661EE0.n++;
        D_00661EE0.bc += *(unsigned short *)(p + 0xA8);
        D_00661EE0.c0 += *(int *)(p + 0xB0);
    }
}

void func_001A8880(unsigned int, unsigned long long *, int);

typedef struct { int n; int b4; int b8; int bc; unsigned int c0; } StA8770;

static inline unsigned short act_A8770(char *p) {
    if (*(int *)(p + 0xB4) == 0 && *(short *)(p + 0xB8) == 0) return 0;
    return 1;
}

extern StA8770 D_00662300;

void func_001A8770(char *p, int n) {
    extern char *D_005BE0D8;
    if ((unsigned char)act_A8770(p)) {
        if (n < 0) {
            n = 30;
        } else {
            if (n > 30) n = 30;
        }
        func_001A8880(*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE0), (unsigned long long *)*(int *)((char *)(*(signed char *)(D_005BE0D8 + 0xE) * 4) + (int)p + 0xE8), n);
        D_00662300.b4 += *(int *)(p + 0xB4);
        D_00662300.b8 += *(short *)(p + 0xB8);
        D_00662300.n++;
        D_00662300.bc += *(unsigned short *)(p + 0xA8);
        D_00662300.c0 += *(int *)(p + 0xB0);
    }
}

void func_001A2970(char *);

void func_001A29A0(char *p) {
    if (!(*(int *)(p + 0xA0) & 0x10000)) return;
    switch (*(unsigned char *)(p + 0x70)) {
    case 0xA:
    case 0xB:
        *(float *)(p + 0x7C) = *(float *)(p + 0x7C) + *(float *)(p + 0x78);
        if (*(float *)(p + 0x7C) < 1.0f) break;
        *(unsigned char *)(p + 0x72) = 1;
        *(float *)(p + 0x7C) = 1.0f;
        if (*(unsigned char *)(p + 0x70) == 0xB) {
            if (!(*(float *)(p + 0x74) <= 0.0f)) {
                *(unsigned char *)(p + 0x70) = 0x14;
                *(float *)(p + 0x90) = *(float *)(p + 0x74);
            } else {
                *(unsigned char *)(p + 0x70) = 0x28;
            }
        } else {
            *(unsigned char *)(p + 0x70) = 0;
        }
        break;
    case 0x14:
        *(float *)(p + 0x90) = *(float *)(p + 0x90) - 1.0f;
        if (*(float *)(p + 0x90) <= 0.0f) *(unsigned char *)(p + 0x70) = 0x28;
        break;
    case 0x1E:
    case 0x28:
        *(float *)(p + 0x7C) = *(float *)(p + 0x7C) - *(float *)(p + 0x78);
        if (!(*(float *)(p + 0x7C) <= 0.0f)) break;
        *(unsigned char *)(p + 0x72) = 2;
        *(float *)(p + 0x7C) = 0.0f;
        if (*(unsigned char *)(p + 0x70) == 0x28) {
            if (!(*(float *)(p + 0x74) <= 0.0f)) {
                *(unsigned char *)(p + 0x70) = 0x29;
                *(float *)(p + 0x90) = *(float *)(p + 0x74);
            } else {
                *(unsigned char *)(p + 0x70) = 0xB;
            }
        } else {
            func_001A2970(p);
        }
        break;
    case 0x29:
        *(float *)(p + 0x90) = *(float *)(p + 0x90) - 1.0f;
        if (*(float *)(p + 0x90) <= 0.0f) *(unsigned char *)(p + 0x70) = 0xB;
        break;
    case 0x32:
        break;
    }
}

void func_001AA220(char *p, float *a, float *m) {
    extern char *D_005BE0D8;
    char *o = ((char **)(p + 0x40))[D_005BE0D8[0xE]];
    __asm__ volatile("mfc1 $t0, %4
	nop
	qmtc2.ni $t0, $vf5
	lqc2 $vf4, 0x0(%0)
	vmulx.xyz $vf4, $vf4, $vf5x
	sqc2 $vf4, 0x0(%3)
	lqc2 $vf4, 0x10(%0)
	vmulx.xyz $vf4, $vf4, $vf5x
	sqc2 $vf4, 0x10(%3)
	lqc2 $vf4, 0x20(%0)
	vmulx.xyz $vf4, $vf4, $vf5x
	sqc2 $vf4, 0x20(%3)
	lqc2 $vf4, 0x30(%0)
	vmulx.xyz $vf4, $vf4, $vf5x
	sqc2 $vf4, 0x30(%3)
	lq $t0, 0x0(%1)
	lq $t1, 0x10(%1)
	lq $t2, 0x20(%1)
	lq $t3, 0x30(%1)
	pextlw $t4, $t1, $t0
	pextuw $t5, $t1, $t0
	pextlw $t6, $t3, $t2
	pextuw $t7, $t3, $t2
	pcpyld $t0, $t6, $t4
	pcpyud $t1, $t4, $t6
	pcpyld $t2, $t7, $t5
	pcpyud $t3, $t5, $t7
	sq $t0, 0x0(%2)
	sq $t1, 0x10(%2)
	sq $t2, 0x20(%2)
	sq $t3, 0x30(%2)" : : "r"(a), "r"(m), "r"(o + 0xF0), "r"(o + 0xB0), "f"(1.0f / 255.0f) : "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7", "memory");
}

int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BB8B8[8];

extern char D_005BB8C0[8];

extern char D_005BB8C8[8];

extern char D_005BB8D0[8];

extern char D_005BB8D8[8];

extern char D_005BB8E0[8];

extern char D_005BB8E8[8];

extern char D_005BB8F0[8];

extern char D_005BB8F8[8];

extern char D_005BB900[8];

extern char D_005BB908[8];

extern char D_005BB910[8];

extern char D_005BB918[8];

extern char D_005BB920[8];

extern char D_0053F8B0[];

extern char D_0053F8C0[];

extern char D_0053F8D0[];

#define E19D(t, o) (*(t *)(e + (o)))

static inline int nt19D(int x) { return !x; }

void func_0019D590(char *p, char *r) {
    char tok[64];
    int k;
    int t;
    char *e;
    func_0022CBB0(r, tok);
    if (func_0012B1A0(tok, D_005BB8B8) == 0)
        k = func_0022CD60(r);
    else
        return;
    func_0022CBB0(r, tok);
    if (func_0012B1A0(tok, D_0053F8B0) == 0) {
        t = func_0022CD60(r);
        if (t == 10) *(int *)(p + 0x40) |= 2;
    } else {
        return;
    }
    e = *(char **)(p + 0x4C) + k * 0x74;
    E19D(unsigned int, 0) = 0x80000000;
    E19D(unsigned char, 4) = k;
    E19D(unsigned char, 6) = t;
    E19D(unsigned char, 7) = *(unsigned short *)(p + 0xBA);
    E19D(short, 0xA) = 0;
    E19D(short, 8) = -1;
    E19D(char *, 0x5C) = p;
    E19D(float, 0x30) = E19D(float, 0x38) = E19D(float, 0x34) = E19D(float, 0x3C) = 1.0f;
    E19D(float, 0x60) = E19D(float, 0x64) = E19D(float, 0x68) = E19D(float, 0x6C) = 0.0f;
    E19D(float, 0x40) = E19D(float, 0x44) = E19D(float, 0x48) = E19D(float, 0x4C) = 0.0f;
    E19D(float, 0x10) = E19D(float, 0x14) = E19D(float, 0x18) = E19D(float, 0x1C) = 0.0f;
    E19D(float, 0x20) = E19D(float, 0x24) = E19D(float, 0x28) = E19D(float, 0x2C) = 0.0f;
    E19D(float, 0x50) = E19D(float, 0x54) = 0.0f;
    E19D(short, 0xC) = E19D(short, 0xE) = 0;
    E19D(short, 0x58) = E19D(short, 0x5A) = 0;
    for (;;) {
        func_0022CBB0(r, tok);
        if (!nt19D(func_0022CBA0(r))) return;
        if (func_0012B1A0(tok, D_005BB8C0) == 0) return;
        if (func_0012B1A0(tok, D_005BB8C8) == 0) {
            E19D(short, 8) = func_0022CD60(r);
        } else if (func_0012B1A0(tok, D_005BB8D0) == 0) {
            E19D(unsigned char, 7) = func_0022CD60(r);
            if (E19D(unsigned char, 7) > *(unsigned short *)(p + 0xAA))
                E19D(unsigned char, 7) = *(unsigned short *)(p + 0xBA);
        } else if (func_0012B1A0(tok, D_005BB8D8) == 0) {
            func_0022CBB0(r, tok);
            if (func_0012B1A0(tok, D_005BB8E0) == 0) E19D(short, 0x58) = 0;
            else if (func_0012B1A0(tok, D_005BB8E8) == 0) E19D(short, 0x58) = 1;
            else if (func_0012B1A0(tok, D_005BB8F0) == 0) E19D(short, 0x58) = -1;
            else E19D(short, 0x58) = 0;
            func_0022CBB0(r, tok);
            if (func_0012B1A0(tok, D_005BB8E0) == 0) E19D(short, 0x5A) = 0;
            else if (func_0012B1A0(tok, D_005BB8F8) == 0) E19D(short, 0x5A) = 1;
            else if (func_0012B1A0(tok, D_005BB900) == 0) E19D(short, 0x5A) = -1;
            else E19D(short, 0x58) = 0;
        } else if (func_0012B1A0(tok, D_005BB908) == 0) {
            E19D(float, 0x20) = func_0022CD90(r);
            E19D(float, 0x28) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005BB910) == 0) {
            E19D(float, 0x30) = func_0022CD90(r);
            E19D(float, 0x38) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005BB918) == 0) {
            E19D(float, 0x50) = E19D(float, 0x40) = func_0022CD90(r);
            E19D(float, 0x54) = E19D(float, 0x48) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_0053F8C0) == 0) {
            E19D(float, 0x34) = E19D(float, 0x44) = func_0022CD90(r);
            E19D(float, 0x3C) = E19D(float, 0x4C) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_0053F8D0) == 0) {
            E19D(float, 0x24) = func_0022CD90(r);
            E19D(float, 0x2C) = func_0022CD90(r);
            E19D(unsigned int, 0) |= 4;
        } else if (func_0012B1A0(tok, D_005BB920) == 0) {
            E19D(float, 0x60) = func_0022CD90(r);
            E19D(float, 0x64) = func_0022CD90(r);
            E19D(float, 0x68) = func_0022CD90(r);
            E19D(float, 0x6C) = func_0022CD90(r);
            E19D(unsigned int, 0) |= 2;
        }
    }
}

short func_00197670(char *, char *);

int func_00197730(char *e, char *q) {
    char *d = *(char **)(e + 0x24);
    char *s;
    int i;
    short k;
    if (*(short *)(e + 4) == 0x14) {
        if (*(short *)(e + 0x16) < 0) {
            if (*(unsigned short *)(q + 0xA) < *(unsigned short *)(q + 0xE)) {
                k = (*(unsigned short *)(q + 0xA))++;
                *(short *)(e + 0x16) = k;
            } else {
                return 0;
            }
        }
        s = *(char **)(*(char **)(q + 4) + 0x10);
        s += (k / 8) * 0x800 + (k % 8) * 0x20;
        for (i = 0; i < 2; i++) {
            func_00130930(d, s, 2);
            d += 0x20;
            s += 0x100;
        }
    } else if (*(short *)(e + 4) == 0x13) {
        if (*(short *)(e + 0x16) < 0) {
            if (*(unsigned short *)(q + 8) < *(unsigned short *)(q + 0xC)) {
                k = (*(unsigned short *)(q + 8))++;
                *(short *)(e + 0x16) = k;
            } else {
                return 0;
            }
        }
        s = *(char **)(*(char **)(q + 0) + 0x10);
        s += (k / 4) * 0x1000 + (k % 4) * 0x40;
        for (i = 0; i < 16; i++) {
            func_00130930(d, s, 4);
            d += 0x40;
            s += 0x100;
        }
    }
    *(short *)(e + 0x1A) = func_00197670(e, q);
    return 1;
}

static inline int nt196(int x) { return !x; }

int func_00196CB0(char *m, char *e, int pos, int flag) {
    extern char *D_005BE0D8;
    int func_00196F20(char *, short, short, short);
    char *q;
    int v;
    int n;
    int n2 = 0;
    int i;
    int lim;
    int lo;
    int total;
    if (flag == 0) {
        *(short *)(e + 0xE) = n = func_00196F20(m, *(short *)(e + 4), *(short *)(e + 0xA), *(short *)(e + 0xC));
        if (*(short *)(e + 0x18) >= 0 && *(short *)(e + 0x38) == 0 && *(short *)(e + 0x14) == 0) {
            *(short *)(e + 0x22) = n2 = func_00196F20(m, *(short *)(e + 0x18), *(short *)(e + 0x1E), *(short *)(e + 0x20));
        }
    } else {
        n = *(short *)(e + 0xE);
        if (*(short *)(e + 0x18) >= 0 && *(short *)(e + 0x38) == 0 && *(short *)(e + 0x14) == 0) {
            n2 = *(short *)(e + 0x22);
        }
    }
    if (pos == 0) {
        v = *(int *)(m + 0xC308) / 32;
        i = 0;
        q = m + (*(int *)(m + 0xC308) - *(unsigned short *)(D_005BE0D8 + 0x4C)) / 32 + 0x2000;
        total = n + n2;
        for (;;) {
            if (!nt196(*(unsigned char *)q)) {
                lim = *(int *)(m + 0xC30C) / 32;
                do {
                    i++;
                    q++;
                    if (v + i >= lim) return 0;
                } while (*(unsigned char *)q);
                v += i;
                i = 0;
            } else {
                i++;
                q++;
                if (i == total) break;
            }
        }
        *(short *)(e + 6) = v << 5;
        if (*(short *)(e + 0x14) == 0) *(short *)(e + 0x1A) = (v + n) << 5;
        return 1;
    }
    lo = *(int *)(m + 0xC308) / 32;
    if (pos < lo && pos >= *(int *)(m + 0xC30C) / 32) return 0;
    q = m + pos + 0x2000;
    do {
        if (!nt196(*(unsigned char *)q)) return 0;
        q++;
    } while (--n != 0);
    q = (char *)(pos + lo);
    *(short *)(e + 6) = (int)q << 5;
    *(short *)(e + 0x1A) = ((int)q + *(short *)(e + 0xE)) << 5;
    return 1;
}

void func_0019D410();

int func_0019D340(char *p, int buf) {
    int start;
    int n;
    int i;
    int off;
    if (*(int *)(p + 72) == 0) return 0;
    start = buf;
    i = 0;
    *(short *)(p + 80) = *(unsigned char *)(*(char **)(p + 192) + 24);
    *(int *)(p + 76) = buf;
    n = *(unsigned short *)(p + 80);
    buf = (*(int *)(p + 76) + n * 116 + 15) & -16;
    if (0 < n) {
        off = 0;
        do {
            i = i + 1;
            *(int *)(*(char **)(p + 76) + off) = 0;
            off = off + 116;
        } while (i < *(unsigned short *)(p + 80));
    }
    func_0019D410(p, n, i);
    *(int *)(p + 68) = buf - start;
    return *(int *)(p + 68);
}

void func_00197630(char *p0) {
    void func_00196250();
    char *t0;
    char *t1;
    t0 = *(char **)(p0 + 0);
    func_00196250(*(char **)(p0 + 0), 1, 0);
    t1 = *(char **)(p0 + 4);
    func_00196250(*(char **)(p0 + 4), 1, 0);
}

void func_0013CBE0();

int func_00197C30(char *p0, int p1, int p2, int p3) {
    int t0;
    *(int *)(p0 + 8) = p1;
    *(int *)(p0 + 0) = p1;
    *(char *)(p0 + 20) = p3;
    func_0013CBE0((p0 + 8), p3);
    t0 = (*(int *)(p0 + 0) + p2);
    *(int *)(p0 + 4) = (*(int *)(p0 + 0) + p2);
    *(int *)(p0 + 12) = p2;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 24) = 0;
    return 1;
}

int func_00145A80();

void func_00145B90();

int func_00146448();

int func_00198320(int p0, int p1, int p2) {
    int t0;
    int t1;
    t0 = func_00145A80(p1, p2);
    t1 = func_00146448(t0);
    func_00145B90(t0);
    return (t1 << 11);
}

extern int D_005BE09C;

void func_0019A9F0(int p0, int p1) {
    void func_00105300();
    int t0;
    int t1;
    int t2;
    int t3;
    t0 = (D_005BE09C + 384);
    t1 = D_005BE09C;
    func_00105300(((p0 + (p1 << 7)) + 704), (D_005BE09C + 384));
    t2 = (D_005BE09C + 320);
    t3 = D_005BE09C;
    func_00105300(((p0 + (p1 << 7)) + 768), (D_005BE09C + 320));
}

void func_0019DE60(int p0) {
    void func_0019E6B0();
    void func_0019E730();
    func_0019E6B0();
    func_0019E730(p0);
}

void func_0019DE90(int p0) {
    void func_0019E7B0();
    void func_0019EAA0();
    func_0019E7B0();
    func_0019EAA0(p0);
}

void func_001A5DE0();

void func_001A6FD0();

void func_001A5DB0(int p0) {
    func_001A6FD0();
    func_001A5DE0(p0);
}

void func_001A6260();

void func_001A6230(int p0) {
    func_001A6FD0();
    func_001A6260(p0);
}

int func_0019E4C0(char *p) {
    *(float *)(p + 0x48) -= *(float *)(p + 0x70);
    if (*(float *)(p + 0x48) <= 0.0f) {
        *(float *)(p + 0x48) = *(float *)(p + 0x54);
        *(float *)(p + 0x18) += *(float *)(p + 0x28) * *(short *)(p + 0x5A);
        if (*(int *)p & 2) {
            *(float *)(p + 0x18) += *(float *)(p + 0x68) +
                (*(float *)(p + 0x6C) - *(float *)(p + 0x68)) * (2.3283064e-10f * mt_rand());
        }
        if (*(float *)(p + 0x18) > 1.0f) {
            *(float *)(p + 0x18) -= 1.0f;
        } else if (*(float *)(p + 0x18) < 0.0f) {
            *(float *)(p + 0x18) += 1.0f;
        }
        *(unsigned short *)(p + 0xE) = (unsigned int)(4096.0f * *(float *)(p + 0x18));
        return 1;
    }
    return 0;
}

int func_00195F50();

int func_00196070(p0) int p0; {
    extern char * D_005BE0D8;
    int tmp0;
    tmp0 = func_00195F50();
    *(int *)((char *)p0 + 49940) = 0;
    *(int *)((char *)p0 + 49928) = *(unsigned short *)(D_005BE0D8 + 76);
    *(int *)((char *)p0 + 49936) = *(unsigned short *)(D_005BE0D8 + 78);
    *(int *)((char *)p0 + 49944) = (*(unsigned short *)(D_005BE0D8 + 78) - *(unsigned short *)(D_005BE0D8 + 76));
    return tmp0;
}

int func_00196AB0(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    v0 = (short)p0;
    v1 = 0;
    switch (v0) {
    case 2:
        v1 = (short)(0x70000 / ((short)p1 << 1));
        break;
    case 1:
        v1 = (short)(0x70000 / ((short)p1 * 3));
        break;
    case 0:
        v1 = (short)(0x70000 / ((short)p1 << 2));
        break;
    case 20:
        v1 = (short)(0x70000 / ((short)p1 >> 1));
        break;
    case 19:
        v1 = (short)(0x70000 / (short)p1);
        break;
    }
    return v1;
}

int func_00196BF0(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    v1 = 0;
    do {
        v0 = 1;
        if (*(short *)(p0 + 0) == 0) {
            v2 = (int)p0;
            *(short *)(p0 + 0) = v0;
            *(short *)(p0 + 2) = v1;
            return v2;
        }
        v1 = (v1 + 1);
        p0 = (p0 + 64);
    } while ((v1 < 128));
    v2 = 0;
    return v2;
}

void func_00197320(p0) int p0; {
    extern char * D_005BE0D8;
    int v1;
    int v0;
    int v2;
    v0 = 0;
    v1 = *(signed char *)(D_005BE0D8 + 14);
    v2 = (p0 + (v1 << 7));
    do {
        v0 = (v0 + 8);
        *(char *)((char *)v2 + 49664) = 0;
        *(char *)((char *)v2 + 49665) = 0;
        *(char *)((char *)v2 + 49666) = 0;
        *(char *)((char *)v2 + 49667) = 0;
        *(char *)((char *)v2 + 49668) = 0;
        *(char *)((char *)v2 + 49669) = 0;
        *(char *)((char *)v2 + 49670) = 0;
        *(char *)((char *)v2 + 49671) = 0;
        v2 = (v2 + 8);
    } while ((v0 < 128));
    *(int *)((char *)((v1 << 2) + p0) + 49920) = 0;
}

int func_001979E0(p0) int p0; {
    extern char * D_005BE0D8;
    char *v0;
    int v1;
    v0 = D_005BE0D8;
    if (2 != *(signed char *)(v0 + 6)) {
        v1 = (*(signed char *)(v0 + 11) == 0) ? *(unsigned short *)(v0 + 68) : *(unsigned short *)(v0 + 66);
        v1 = (v1 & 65535);
    } else {
        v1 = *(unsigned short *)(v0 + 66);
    }
    if (p0 == 0) {
        v1 = ((unsigned int)v1 >> 5);
    }
    return v1;
}

int func_00197A40(p0) int p0; {
    extern char * D_005BE0D8;
    char *v0;
    int v1;
    v0 = D_005BE0D8;
    if (*(signed char *)(v0 + 6) != 2) {
        v1 = (*(signed char *)(v0 + 11) == 0) ? *(unsigned short *)(v0 + 66) : *(unsigned short *)(v0 + 68);
        v1 = (v1 & 65535);
    } else {
        v1 = *(unsigned short *)(v0 + 68);
    }
    if (p0 == 0) {
        v1 = ((unsigned int)v1 >> 5);
    }
    return v1;
}

void func_00197E00();

void func_00197DA0(p0) char *p0; {
    int v0;
    int tmp0;
    if (*(unsigned char *)(p0 + 32) != 0) {
        if (*(int *)(p0 + 8) == 0) {
            tmp0 = *(signed char *)(p0 + 13);
            v0 = 1;
            if (tmp0 == 0) {
                *(int *)(p0 + 8) = v0;
            }
        }
    } else {
        *(int *)(p0 + 8) = 0;
    }
    func_00197E00(p0, ((p0 + (*(int *)(p0 + 8) * 20)) + 12));
}

int func_001967F0();

int func_00198F50(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char *v2;
    int v1;
    char *v0;
    int v3;
    int v4;
    int tmp3;
    v3 = 0;
    v0 = *(char **)(p0 + 204);
    v1 = (*(int *)(v0 + 4) * *(int *)(v0 + 8));
    v2 = p0;
    if ((0 < v1)) {
        v4 = 0;
        do {
            tmp3 = func_001967F0((*(int *)(v0 + 0) + v4), p1, *(unsigned char *)(v2 + 174));
            p1 = tmp3;
            v4 = (v4 + 64);
            v3 = (v3 + 1);
        } while ((v3 < v1));
    }
    return p1;
}

int func_00199490();

int func_00199530(p0) int p0; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = 0;
    do {
        v2 = func_00199490(v0, v1);
        v1 = (v1 + 1);
    } while ((v1 < 2));
    return v2;
}

void func_0019C330(p0, p1) int p0; char *p1; {
    int v0;
    int tmp0;
    *(char *)(p1 + 6) = 3;
    tmp0 = (*(int *)(p1 + 0) & 32);
    v0 = 2;
    if (tmp0 != 0) {
        *(char *)(p1 + 5) = v0;
    } else {
        *(char *)(p1 + 5) = *(unsigned char *)(p1 + 6);
    }
}

int func_0019DA00(p0) char *p0; {
    int v0;
    int v2;
    int v1;
    v0 = *(unsigned char *)(*(char **)(p0 + 192) + 24);
    v1 = 0;
    if (v0 == 0) {
        v2 = 0;
    } else {
        v1 = (v1 + ((v0 * 29) << 2));
        v2 = ((v1 + 15) & -16);
    }
    return v2;
}

int func_0019DEC0(p0) char *p0; {
    void func_0019E7B0();
    int func_0019EAA0();
    int tmp4;
    *(float *)(p0 + 32) = ((1.0f / *(float *)(p0 + 48)) * *(float *)(p0 + 112));
    func_0019E7B0();
    *(float *)(p0 + 40) = ((1.0f / *(float *)(p0 + 56)) * *(float *)(p0 + 112));
    tmp4 = func_0019EAA0(p0);
    return tmp4;
}

void func_0019DF30(p0) int p0; {
    int func_0019E6B0();
    int func_0019E730();
    char *v0;
    float v1;
    int tmp0;
    int tmp5;
    v0 = (char *)p0;
    tmp0 = func_0019E6B0();
    if ((tmp0 & 255) == 1) {
        *(float *)(v0 + 68) -= *(float *)(v0 + 112);
        if (*(float *)(v0 + 68) <= 0.0f) {
            *(float *)(v0 + 68) = *(float *)(v0 + 52);
            *(short *)(v0 + 88) = -*(short *)(v0 + 88);
        }
    }
    tmp5 = func_0019E730(v0);
    if ((tmp5 & 255) == 1) {
        v1 = 0.0f;
        *(float *)(v0 + 76) -= *(float *)(v0 + 112);
        if (*(float *)(v0 + 76) <= v1) {
            v1 = *(float *)(v0 + 60);
            *(float *)(v0 + 76) = v1;
            *(short *)(v0 + 90) = -*(short *)(v0 + 90);
        }
    }
}

int func_0019FFC0(p0, p1) char *p0; int p1; {
    char *v0;
    int tmp0;
    v0 = (char *)(*(int *)(p0 + 188) + (p1 * 832));
    tmp0 = *(int *)(v0 + 704);
    if (tmp0 == 0) {
        return 1;
    } else {
        *(int *)(v0 + 704) = 0;
        *(int *)(v0 + 708) = 0;
        *(int *)(v0 + 712) = 0;
        *(int *)(v0 + 720) = 0;
        *(int *)(v0 + 724) = 0;
        *(int *)(v0 + 728) = 0;
        *(int *)(v0 + 732) = 0x3f800000;
        return 1;
    }
}

int func_001A01C0(p0, p1, p2, p3, p4) char *p0; int p1; int p2; int p3; int p4; {
    int func_001282D0();
    int v0;
    char *v1;
    int v2;
    int v3;
    v0 = p2;
    v1 = (char *)(*(int *)(p0 + 188) + (p1 * 832));
    v2 = p3;
    if (*(int *)(v1 + 704) != 0) {
        if (p4 == 0) {
            p4 = (int)D_0053F840;
        }
        v3 = func_001282D0((v1 + 736), p4, 64);
        *(int *)(v1 + 708) = (*(int *)(v1 + 708) & 0xfe000fff);
        *(int *)(v1 + 708) = (*(int *)(v1 + 708) | (v2 & 0x1fff000));
        *(int *)(v1 + 712) = v0;
    }
    return v3;
}

int func_001A0270(p0, p1, p2, p3, p4) char *p0; int p1; int p2; int p3; int p4; {
    int func_001282D0();
    char *v0;
    int v1;
    char *v2;
    int tmp0;
    v0 = (char *)p2;
    v1 = p3;
    v2 = (char *)(*(int *)(p0 + 188) + (p1 * 832));
    if (p4 == 0) {
        p4 = (int)D_0053F840;
    }
    tmp0 = func_001282D0((v2 + 736), p4, 64);
    *(int *)(v2 + 708) = (*(int *)(v2 + 708) & 0xfe000fff);
    *(int *)(v2 + 708) = (*(int *)(v2 + 708) | (v1 & 0x1fff000));
    *(int *)(v2 + 708) = (*(int *)(v2 + 708) | 0x200000);
    *(int *)(v2 + 712) = -1;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(v0), "r"((v2 + 720)) : "memory");
    return tmp0;
}

char *func_001AE4B0();

int func_001AE4F0();

int func_001A0A30(p0, p1, p2, p3, p4, p5) int p0; int p1; int p2; int p3; int p4; int p5; {
    char *tmp0;
    int tmp1;
    tmp0 = func_001AE4B0(1);
    *(int *)(tmp0 + 0) = 0x3c000000;
    *(int *)(tmp0 + 4) = 0x3b800000;
    *(int *)(tmp0 + 8) = 0x3b842108;
    *(int *)(tmp0 + 12) = 0x437f0000;
    __asm__ volatile("lqc2 $vf19, 0x0(%0)\n\tlqc2 $vf5, 0x40(%1)\n\tlqc2 $vf6, 0x50(%1)\n\tlqc2 $vf7, 0x60(%1)\n\tlqc2 $vf9, 0x0(%1)\n\tlqc2 $vf10, 0x10(%1)\n\tlqc2 $vf11, 0x20(%1)\n\tlqc2 $vf12, 0x30(%1)\n\tlqc2 $vf18, 0x0(%2)\n\tlqc2 $vf13, 0x0(%3)\n\tlqc2 $vf14, 0x10(%3)\n\tlqc2 $vf15, 0x20(%3)\n\tlqc2 $vf16, 0x0(%4)\n\tvitof0.xyz $vf25, $vf16\n\tlqc2 $vf17, 0x0(%5)\n\tvitof0.xyz $vf26, $vf17\n\tvmulax.xyzw $ACC, $vf13, $vf18x\n\tvmadday.xyzw $ACC, $vf14, $vf18y\n\tvmaddz.xyzw $vf18, $vf15, $vf18z\n\tvmulx.xyz $vf25, $vf25, $vf19x\n\tvmuly.xyz $vf26, $vf26, $vf19y\n\tvmulax.xyzw $ACC, $vf5, $vf18x\n\tvmadday.xyzw $ACC, $vf6, $vf18y\n\tvmaddz.xyzw $vf30, $vf7, $vf18z\n\tvmaxx.xyzw $vf30, $vf30, $vf0x\n\tvmulax.xyzw $ACC, $vf9, $vf30x\n\tvmadday.xyzw $ACC, $vf10, $vf30y\n\tvmaddaz.xyzw $ACC, $vf11, $vf30z\n\tvmaddw.xyzw $vf27, $vf12, $vf0w\n\tvmul.xyz $vf27, $vf27, $vf25\n\tvmul.xyz $vf27, $vf27, $vf26\n\tvminiw.xyzw $vf28, $vf27, $vf19w\n\tvftoi0.xyzw $vf28, $vf28\n\tsqc2 $vf28, 0x0(%6)" : : "r"(tmp0), "r"(p0), "r"(p2), "r"(p3), "r"(p1), "r"(p4), "r"(p5) : "memory");
    tmp1 = func_001AE4F0(1);
    return tmp1;
}

int func_001A1D60(p0, p1, p2) char *p0; int p1; int p2; {
    return (p2 - (int)*(char **)((*(char **)(p0 + 188) + (p1 * 832)) + 704));
}

void func_001A1D90(p0) char *p0; {
    if (*(int *)(p0 + 276) != 0) {
        *(int *)(p0 + 160) = (*(int *)(p0 + 160) | 0x20000);
    }
}

void func_001A1DC0(p0) char *p0; {
    if (*(int *)(p0 + 276) != 0) {
        *(int *)(p0 + 160) = (*(int *)(p0 + 160) & 0xfffdffff);
    }
}

int func_001A1E70();

int func_001A1E10(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v2 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v1 = func_001A1E70(v0, v2);
            v2 = (v2 + 1);
        } while ((v2 < *(unsigned short *)(v0 + 168)));
    }
    return v1;
}

int func_001A1F80();

int func_001A1E70(p0, p1) char *p0; int p1; {
    int v0;
    int tmp0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        tmp0 = *(int *)(p0 + 160);
        *(int *)(p0 + 160) = (*(int *)(p0 + 160) | 1);
        v0 = func_001A1F80((*(int *)(p0 + 188) + (p1 * 832)), p1, tmp0);
    }
    return v0;
}

int func_001A1F30();

int func_001A1ED0(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v2 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v1 = func_001A1F30(v0, v2);
            v2 = (v2 + 1);
        } while ((v2 < *(unsigned short *)(v0 + 168)));
    }
    return v1;
}

int func_001A1F30(p0, p1) char *p0; int p1; {
    int v0;
    int tmp0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        tmp0 = *(int *)(p0 + 160);
        *(int *)(p0 + 160) = (*(int *)(p0 + 160) | 1);
        v0 = func_001A1F80((*(int *)(p0 + 188) + (p1 * 896)), p1, tmp0);
    }
    return v0;
}

int func_001A2000();

int func_001A1F90(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = 0;
    *(int *)(p0 + 160) = (*(int *)(p0 + 160) & -2);
    v1 = p0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v2 = func_001A2000(v1, v0);
            v0 = (v0 + 1);
        } while ((v0 < *(unsigned short *)(v1 + 168)));
    }
    return v2;
}

int func_001A2100();

int func_001A2000(p0, p1) char *p0; int p1; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A2100((*(int *)(p0 + 188) + (p1 * 832)));
    }
    return v0;
}

int func_001A20C0();

int func_001A2050(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = 0;
    *(int *)(p0 + 160) = (*(int *)(p0 + 160) & -2);
    v1 = p0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v2 = func_001A20C0(v1, v0);
            v0 = (v0 + 1);
        } while ((v0 < *(unsigned short *)(v1 + 168)));
    }
    return v2;
}

int func_001A20C0(p0, p1) char *p0; int p1; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A2100((*(int *)(p0 + 188) + (p1 * 896)));
    }
    return v0;
}

int func_001A2210();

int func_001A2180(p0, p1, p2) char *p0; int p1; int p2; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    v1 = p1;
    v2 = p2;
    *(int *)(p0 + 160) = (*(int *)(p0 + 160) | 2);
    v4 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v3 = func_001A2210(v0, v4, v1, v2);
            v4 = (v4 + 1);
        } while ((v4 < *(unsigned short *)(v0 + 168)));
    }
    return v3;
}

int func_001A2340();

int func_001A2210(p0, p1, p2, p3) char *p0; int p1; int p2; int p3; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A2340((*(int *)(p0 + 188) + (p1 * 832)), p2, p3);
    }
    return v0;
}

int func_001A22F0();

int func_001A2260(p0, p1, p2) char *p0; int p1; int p2; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    v1 = p1;
    v2 = p2;
    *(int *)(p0 + 160) = (*(int *)(p0 + 160) | 2);
    v4 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v3 = func_001A22F0(v0, v4, v1, v2);
            v4 = (v4 + 1);
        } while ((v4 < *(unsigned short *)(v0 + 168)));
    }
    return v3;
}

int func_001A22F0(p0, p1, p2, p3) char *p0; int p1; int p2; int p3; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A2340((*(int *)(p0 + 188) + (p1 * 896)), p2, p3);
    }
    return v0;
}

int func_001992F0();

int func_001A2340(p0, p1, p2) char *p0; int p1; int p2; {
    char *v0;
    int v1;
    int tmp7;
    v0 = p0;
    v1 = p1;
    *(int *)(p0 + 0) = (*(int *)(p0 + 0) | 256);
    *(int *)(p0 + 20) = (*(int *)(p0 + 20) & -16);
    if (p2 == 0) {
        *(int *)(v0 + 20) = (*(int *)(v0 + 20) | *(int *)(v0 + 16));
    } else {
        *(int *)(v0 + 20) = (*(int *)(v0 + 20) | p2);
    }
    tmp7 = func_001992F0(v0, *(int *)(v0 + 20));
    *(char *)(v0 + 128) = 3;
    *(int *)(v0 + 348) = (v1 & 255);
    return tmp7;
}

int func_001A2440();

int func_001A23D0(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = 0;
    *(int *)(p0 + 160) = (*(int *)(p0 + 160) & -3);
    v1 = p0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v2 = func_001A2440(v1, v0);
            v0 = (v0 + 1);
        } while ((v0 < *(unsigned short *)(v1 + 168)));
    }
    return v2;
}

int func_001A2540();

int func_001A2440(p0, p1) char *p0; int p1; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A2540((*(int *)(p0 + 188) + (p1 * 832)));
    }
    return v0;
}

int func_001A2500();

int func_001A2490(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = 0;
    *(int *)(p0 + 160) = (*(int *)(p0 + 160) & -3);
    v1 = p0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v2 = func_001A2500(v1, v0);
            v0 = (v0 + 1);
        } while ((v0 < *(unsigned short *)(v1 + 168)));
    }
    return v2;
}

int func_001A2500(p0, p1) char *p0; int p1; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A2540((*(int *)(p0 + 188) + (p1 * 896)));
    }
    return v0;
}

int func_001A2540(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp6;
    v0 = p0;
    if ((*(int *)(p0 + 16) & 15) != 0) {
        tmp0 = *(int *)(v0 + 20);
        *(int *)(v0 + 20) = (*(int *)(v0 + 20) & 0xffeffff0);
        *(int *)(v0 + 20) = (*(int *)(v0 + 20) | (*(int *)(v0 + 16) & 0x10000f));
        v1 = func_001992F0(p0, *(int *)(v0 + 20), tmp0);
        *(char *)(v0 + 128) = 3;
        *(int *)(v0 + 348) = 128;
    } else {
        v2 = *(int *)(v0 + 0);
        tmp6 = (v2 & 256);
        v3 = -257;
        if (tmp6 != 0) {
            *(int *)(v0 + 0) = (v2 & v3);
            *(int *)(v0 + 20) = (*(int *)(v0 + 20) & -16);
            v1 = func_001992F0(p0, *(int *)(v0 + 20));
            *(char *)(v0 + 128) = 3;
            *(int *)(v0 + 348) = *(unsigned char *)(v0 + 7);
        }
    }
    return v1;
}

int func_001A2670();

int func_001A2600(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v1 = p1;
    v2 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v3 = func_001A2670(v0, v2, v1);
            v2 = (v2 + 1);
        } while ((v2 < *(unsigned short *)(v0 + 168)));
    }
    return v3;
}

void func_001A2750(char *p0, float f0, float f1) {
    *(int *)(p0 + 408) = (unsigned int)f0;
    *(int *)(p0 + 412) = (unsigned int)f1;
}

void func_001A2900(char *p0, float f0) {
    *(int *)(p0 + 160) = (*(int *)(p0 + 160) | 0x10000);
    *(char *)(p0 + 112) = 30;
    *(char *)(p0 + 113) = 0;
    *(char *)(p0 + 114) = 0;
    if (f0 >= 0.0f) {
        *(float *)(p0 + 120) = f0;
        *(int *)(p0 + 124) = 0x3f800000;
    }
}

void func_001A2940(p0) char *p0; {
    if ((*(int *)(p0 + 160) & 0x10000) != 0) {
        *(char *)(p0 + 113) = *(unsigned char *)(p0 + 112);
        *(char *)(p0 + 112) = 50;
    }
}

int func_001A2D70();

int func_001A2D00(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v1 = p1;
    v2 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v3 = func_001A2D70(v0, v2, v1);
            v2 = (v2 + 1);
        } while ((v2 < *(unsigned short *)(v0 + 168)));
    }
    return v3;
}

int func_001A2E80();

int func_001A2D70(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A2E80((*(int *)(p0 + 188) + (p1 * 832)), p2);
    }
    return v0;
}

int func_001A2E30();

int func_001A2DC0(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v1 = p1;
    v2 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v3 = func_001A2E30(v0, v2, v1);
            v2 = (v2 + 1);
        } while ((v2 < *(unsigned short *)(v0 + 168)));
    }
    return v3;
}

int func_001A2E30(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A2E80((*(int *)(p0 + 188) + (p1 * 896)), p2);
    }
    return v0;
}

int func_001A2F20();

int func_001A2EB0(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v1 = p1;
    v2 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v3 = func_001A2F20(v0, v2, v1);
            v2 = (v2 + 1);
        } while ((v2 < *(unsigned short *)(v0 + 168)));
    }
    return v3;
}

int func_001A2FE0();

int func_001A2F70(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v1 = p1;
    v2 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v3 = func_001A2FE0(v0, v2, v1);
            v2 = (v2 + 1);
        } while ((v2 < *(unsigned short *)(v0 + 168)));
    }
    return v3;
}

int func_001A2EB0();

int func_001A30F0();

int func_001A3080(p0) char *p0; {
    char *v0;
    int v1;
    int tmp0;
    v0 = p0;
    v1 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            func_001A30F0(v0, v1);
            v1 = (v1 + 1);
        } while ((v1 < *(unsigned short *)(v0 + 168)));
    }
    tmp0 = func_001A2EB0(v0, 0x808080);
    return tmp0;
}

int func_001A31F0();

int func_001A30F0(p0, p1) char *p0; int p1; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A31F0((*(int *)(p0 + 188) + (p1 * 832)));
    }
    return v0;
}

int func_001A2F70();

int func_001A31B0();

int func_001A3140(p0) char *p0; {
    char *v0;
    int v1;
    int tmp0;
    v0 = p0;
    v1 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            func_001A31B0(v0, v1);
            v1 = (v1 + 1);
        } while ((v1 < *(unsigned short *)(v0 + 168)));
    }
    tmp0 = func_001A2F70(v0, 0x808080);
    return tmp0;
}

int func_001A31B0(p0, p1) char *p0; int p1; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A31F0((*(int *)(p0 + 188) + (p1 * 896)));
    }
    return v0;
}

int func_001A3270();

int func_001A3210(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v2 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v1 = func_001A3270(v0, v2);
            v2 = (v2 + 1);
        } while ((v2 < *(unsigned short *)(v0 + 168)));
    }
    return v1;
}

int func_001A3360();

int func_001A3270(p0, p1) char *p0; int p1; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A3360((*(int *)(p0 + 188) + (p1 * 832)));
    }
    return v0;
}

int func_001A3320();

int func_001A32C0(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v2 = 0;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        do {
            v1 = func_001A3320(v0, v2);
            v2 = (v2 + 1);
        } while ((v2 < *(unsigned short *)(v0 + 168)));
    }
    return v1;
}

int func_001A3320(p0, p1) char *p0; int p1; {
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = func_001A3360((*(int *)(p0 + 188) + (p1 * 896)));
    }
    return v0;
}

int func_001A3A20(char *p0, int p1, int p2, float f0, float f1) {
    int func_001A4050();
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        if (((unsigned int)p2 < (unsigned int)*(short *)(p0 + 172))) {
            v0 = func_001A4050((*(int *)(p0 + 188) + (p1 * 832)), p2, (unsigned int)(4096.0f * f0), (unsigned int)(4096.0f * f1), (unsigned int)(4096.0f * f0));
        }
    }
    return v0;
}

int func_001A3B20(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int func_001A4050();
    int v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    v0 = p2;
    v1 = p3;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v2 = (char *)(*(int *)(p0 + 188) + (p1 * 832));
        v3 = 0;
        if ((0 < *(unsigned char *)(v2 + 12))) {
            v4 = 0;
            do {
                v5 = func_001A4050(v2, *(int *)((*(char **)(v2 + 28) + v4) + 8), v0, v1);
                v3 = (v3 + 1);
                v4 = (v4 + 336);
            } while ((v3 < *(unsigned char *)(v2 + 12)));
        }
    }
    return v5;
}

int func_001A3D10(p0, p1, p2, p3, p4) char *p0; int p1; int p2; int p3; int p4; {
    int func_001A4050();
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        if (((unsigned int)p2 < (unsigned int)*(short *)(p0 + 172))) {
            v0 = func_001A4050((*(int *)(p0 + 188) + (p1 * 896)), p2, p3, p4);
        }
    }
    return v0;
}

int func_001A3D70(char *p0, int p1, int p2, float f0, float f1) {
    int func_001A4050();
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        if (((unsigned int)p2 < (unsigned int)*(short *)(p0 + 172))) {
            v0 = func_001A4050((*(int *)(p0 + 188) + (p1 * 896)), p2, (unsigned int)(4096.0f * f0), (unsigned int)(4096.0f * f1), (unsigned int)(4096.0f * f0));
        }
    }
    return v0;
}

int func_001A3E60(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int func_001A4050();
    int v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    v0 = p2;
    v1 = p3;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v2 = (char *)(*(int *)(p0 + 188) + (p1 * 896));
        v3 = 0;
        if ((0 < *(unsigned char *)(v2 + 12))) {
            v4 = 0;
            do {
                v5 = func_001A4050(v2, *(int *)((*(char **)(v2 + 28) + v4) + 8), v0, v1);
                v3 = (v3 + 1);
                v4 = (v4 + 336);
            } while ((v3 < *(unsigned char *)(v2 + 12)));
        }
    }
    return v5;
}

int func_001A3F10(char *p0, int p1, float f0, float f1) {
    int func_001A4050();
    char *v2;
    int v0;
    int v1;
    int v4;
    int v5;
    int v3;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v2 = (char *)(*(int *)(p0 + 188) + ((p1 * 7) << 7));
        v0 = (unsigned int)(4096.0f * f0);
        v1 = (unsigned int)(4096.0f * f1);
        if ((0 < *(unsigned char *)(v2 + 12))) {
            v5 = 0;
            v3 = 0;
            do {
                v4 = func_001A4050(v2, *(int *)((*(char **)(v2 + 28) + v3) + 8), v0, v1);
                v5 = (v5 + 1);
                v3 = (v3 + 336);
            } while ((v5 < *(unsigned char *)(v2 + 12)));
        }
    }
    return v4;
}

int func_001A4140();

int func_001A40B0(p0, p1, p2) char *p0; int p1; int p2; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = p0;
    v1 = p1;
    v2 = p2;
    v3 = 0;
    if ((0 < *(unsigned char *)(p0 + 12))) {
        v5 = 0;
        do {
            v4 = func_001A4140((*(int *)(v0 + 28) + v5), v1, v2);
            v3 = (v3 + 1);
            v5 = (v5 + 336);
        } while ((v3 < *(unsigned char *)(v0 + 12)));
    }
    return v4;
}

int func_001A4170(p0, p1, p2, p3, p4) char *p0; int p1; int p2; int p3; int p4; {
    int func_001A49D0();
    float v0;
    int v1;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        if (((unsigned int)p2 < (unsigned int)*(short *)(p0 + 172))) {
            v0 = *(float *)(p0 + 432);
            if (1.0f != v0) {
                if (p3 != 0) {
                    p3 = (int)((float)p3 * v0);
                }
                if (p4 != 0) {
                    p4 = (int)((float)p4 * v0);
                }
            }
            v1 = func_001A49D0((*(int *)(p0 + 188) + (p1 * 832)), p2, p3, p4, p4);
        }
    }
    return v1;
}

int func_001A4240(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int func_001A49D0();
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        if (((unsigned int)p2 < (unsigned int)*(short *)(p0 + 172))) {
            v0 = func_001A49D0((*(int *)(p0 + 188) + (p1 * 832)), p2, (unsigned int)((4096.0f * f0) * *(float *)(p0 + 432)), (unsigned int)((4096.0f * f1) * *(float *)(p0 + 432)), (unsigned int)((4096.0f * f0) * *(float *)(p0 + 432)));
        }
    }
    return v0;
}

int func_001A4460(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int func_001A49D0();
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        p1 = (p1 * 13);
        p1 = (p1 << 6);
        v0 = (char *)(*(int *)(p0 + 188) + p1);
        v1 = (unsigned int)((4096.0f * f0) * *(float *)(p0 + 432));
        v2 = (unsigned int)((4096.0f * f1) * *(float *)(p0 + 432));
        v3 = 0;
        if ((0 < *(unsigned char *)(v0 + 12))) {
            v4 = 0;
            do {
                v5 = func_001A49D0(v0, *(int *)((*(char **)(v0 + 28) + v4) + 8), v1, v2);
                v3 = (v3 + 1);
                v4 = (v4 + 336);
            } while ((v3 < *(unsigned char *)(v0 + 12)));
        }
    }
    return v5;
}

int func_001A45B0(p0, p1, p2, p3, p4) char *p0; int p1; int p2; int p3; int p4; {
    int func_001A49D0();
    float v0;
    int v1;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        if (((unsigned int)p2 < (unsigned int)*(short *)(p0 + 172))) {
            v0 = *(float *)(p0 + 432);
            if (1.0f != v0) {
                if (p3 != 0) {
                    p3 = (int)((float)p3 * v0);
                }
                if (p4 != 0) {
                    p4 = (int)((float)p4 * v0);
                }
            }
            v1 = func_001A49D0((*(int *)(p0 + 188) + (p1 * 896)), p2, p3, p4, p4);
        }
    }
    return v1;
}

int func_001A4670(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int func_001A49D0();
    int v0;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        if (((unsigned int)p2 < (unsigned int)*(short *)(p0 + 172))) {
            v0 = func_001A49D0((*(int *)(p0 + 188) + (p1 * 896)), p2, (unsigned int)((4096.0f * f0) * *(float *)(p0 + 432)), (unsigned int)((4096.0f * f1) * *(float *)(p0 + 432)), (unsigned int)((4096.0f * f0) * *(float *)(p0 + 432)));
        }
    }
    return v0;
}

int func_001A4880(char *p0, int p1, float f0, float f1) {
    int func_001A49D0();
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    if (((unsigned int)p1 < (unsigned int)*(unsigned short *)(p0 + 168))) {
        v0 = (char *)(*(int *)(p0 + 188) + (p1 * 896));
        v1 = (unsigned int)((4096.0f * f0) * *(float *)(p0 + 432));
        v2 = (unsigned int)((4096.0f * f1) * *(float *)(p0 + 432));
        if ((0 < *(unsigned char *)(v0 + 12))) {
            v3 = 0;
            v4 = 0;
            do {
                v5 = func_001A49D0(v0, *(int *)((char *)(*(int *)(v0 + 28) + v4) + 8), v1, v2);
                v3 = (v3 + 1);
                v4 = (v4 + 336);
            } while ((v3 < *(unsigned char *)(v0 + 12)));
        }
    }
    return v5;
}

void func_001A4DB0(p0, p1, p2) char *p0; int p1; int p2; {
    char *v0;
    int v1;
    if (((unsigned int)p1 < (unsigned int)*(short *)(p0 + 172))) {
        if ((*(unsigned short *)(p0 + 174) & 2) != 0) {
            v0 = (char *)(*(int *)(*(char **)(p0 + 204) + 12) + (p1 << 5));
            v1 = ((*(unsigned char *)(v0 + 3) << 24) + (((((unsigned int)p2 >> 16) & 255) << 16) + ((p2 & 255) + ((((unsigned int)p2 >> 8) & 255) << 8))));
            if (*(int *)(v0 + 0) != v1) {
                *(int *)(v0 + 0) = v1;
                *(char *)(v0 + 28) = 3;
            }
        }
    }
}

void func_001A4E30(p0, p1, p2) char *p0; int p1; int p2; {
    char *v0;
    int v1;
    if (((unsigned int)p1 < (unsigned int)*(short *)(p0 + 172))) {
        if ((*(unsigned short *)(p0 + 174) & 2) != 0) {
            v0 = (char *)(*(int *)(*(char **)(p0 + 204) + 12) + (p1 << 5));
            v1 = ((*(unsigned char *)(v0 + 7) << 24) + (((((unsigned int)p2 >> 16) & 255) << 16) + ((p2 & 255) + ((((unsigned int)p2 >> 8) & 255) << 8))));
            if (*(int *)(v0 + 4) != v1) {
                *(int *)(v0 + 4) = v1;
                *(char *)(v0 + 28) = 3;
            }
        }
    }
}

int func_001A5B50(p0) char *p0; {
    int v0;
    v0 = *(int *)(p0 + 272);
    if (v0 != 0) {
        return v0;
    } else {
        return 0;
    }
}

void func_001A5BA0(p0, p1) char *p0; int p1; {
    int v0;
    int v1;
    v0 = *(unsigned short *)(p0 + 388);
    v1 = 1;
    if (v0 != v1) {
        *(short *)(p0 + 390) = v0;
        *(short *)(p0 + 388) = v1;
    }
    *(char *)(p0 + 394) = 1;
    *(short *)(p0 + 392) = p1;
}

void func_001A5C30(p0) char *p0; {
    int v0;
    int v1;
    *(char *)(p0 + 394) = 0;
    if ((*(int *)(p0 + 160) & 0xf0000000) == 0x30000000) {
        v0 = *(unsigned short *)(p0 + 388);
        v1 = 4;
        if (v0 != v1) {
            *(short *)(p0 + 390) = v0;
            *(short *)(p0 + 388) = v1;
        }
    } else {
        *(short *)(p0 + 388) = 0;
    }
}

void func_001A5C80(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(unsigned short *)(p0 + 388);
    v1 = 8;
    if (v0 != v1) {
        *(short *)(p0 + 390) = v0;
        *(short *)(p0 + 388) = v1;
    }
    *(char *)(p0 + 394) = 0;
}

void func_001A5CA0(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(unsigned short *)(p0 + 388);
    v1 = 16;
    if (v0 != v1) {
        *(short *)(p0 + 390) = v0;
        *(short *)(p0 + 388) = v1;
    }
    *(char *)(p0 + 394) = 0;
}

void func_001A5CC0(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(unsigned short *)(p0 + 388);
    v1 = 32;
    if (v0 != v1) {
        *(short *)(p0 + 390) = v0;
        *(short *)(p0 + 388) = v1;
    }
    *(char *)(p0 + 394) = 0;
}

void func_001A5CE0(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(unsigned short *)(p0 + 388);
    v1 = 64;
    if (v0 != v1) {
        *(short *)(p0 + 390) = v0;
        *(short *)(p0 + 388) = v1;
    }
    *(char *)(p0 + 394) = 0;
}

void func_001A5D00(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(unsigned short *)(p0 + 388);
    v1 = 128;
    if (v0 != v1) {
        *(short *)(p0 + 390) = v0;
        *(short *)(p0 + 388) = v1;
    }
    *(char *)(p0 + 394) = 0;
}

void func_001A5D20(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(unsigned short *)(p0 + 388);
    v1 = 256;
    if (v0 != v1) {
        *(short *)(p0 + 390) = v0;
        *(short *)(p0 + 388) = v1;
    }
}

void func_001A5D40(p0, p1) char *p0; int p1; {
    int v0;
    int v1;
    v0 = *(unsigned short *)(p0 + 388);
    v1 = 256;
    if (v0 != v1) {
        *(short *)(p0 + 390) = v0;
        *(short *)(p0 + 388) = v1;
    }
    *(char *)(p0 + 394) = 1;
    *(short *)(p0 + 392) = p1;
}

int func_001A8910(p0, p1, p2) int p0; int p1; int p2; {
    extern char * D_005BE0D8;
    int v0;
    int v1;
    v0 = (p0 * 12);
    if (p0 <= 0) {
        v1 = 0;
    } else {
        v1 = (p1 - (v0 >> (((*(signed char *)(D_005BE0D8 + 5) + 2) << 3) - p2)));
        if ((p1 < v1)) {
            v1 = p1;
        }
        if (v1 < 0) {
            v1 = 0;
        }
    }
    return v1;
}

int func_001AA1F0(p0, p1) int p0; char *p1; {
    extern char * D_005BE0D8;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p1), "r"((*(int *)((char *)((*(signed char *)(D_005BE0D8 + 14) << 2) + p0) + 64) + 320)) : "memory");
}

int func_001AA1F0();

int func_001AA580(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v3 = 0;
    v0 = p0;
    v1 = p1;
    if ((0 < *(unsigned short *)(p0 + 168))) {
        v4 = 0;
        do {
            v2 = func_001AA1F0((*(int *)(v0 + 188) + v4), v1);
            v3 = (v3 + 1);
            v4 = (v4 + 896);
        } while ((v3 < *(unsigned short *)(v0 + 168)));
    }
    return v2;
}

extern void func_0019BDD0();

void func_0019BDB0(void) { func_0019BDD0(); }

extern void func_0019BE80();

void func_0019BDC0(void) { func_0019BE80(); }

unsigned char func_00198370(char *p) { return *(unsigned char *)(p + 12); }

void func_0019D320(char *p, int v) { *(int *)(p + 72) = v; }

void func_0019D330(char *p) { *(int *)(p + 72) = 0; }

short func_001A5DA0(char *p) { return *(short *)(p + 392); }

void *func_001AA7E0(void *p) { return p; }

int func_00197C90(char *p0) {
    return ((*(int *)(p0 + 24) ^ 0) == 0);
}

void func_00197CA0(char *p0) {
    *(int *)(p0 + 0) = 0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 16) = 0;
    *(char *)(p0 + 20) = 0;
    *(int *)(p0 + 24) = 0;
}

void func_00198450(char *p0, int p1, int p2, int p3) {
    *(int *)(p0 + 192) = p1;
    *(int *)(p0 + 196) = p2;
    *(short *)(p0 + 174) = p3;
}

void func_0019A9E0(char *p0, char *p1) {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p1), "r"(p0) : "memory");
}

int func_0019DA50(char *p0, int p1) {
    return (p1 - *(int *)(p0 + 68));
}

int func_001A1DF0(char *p0) {
    return ((unsigned int)0 < (unsigned int)(*(int *)(p0 + 160) & 0x20000));
}

void func_001A27E0(char *p0, int p1, float f0, float f1) {
    int t0;
    int t1;
    t0 = (*(int *)(p0 + 160) | 0x10000);
    t1 = *(int *)(p0 + 160);
    *(int *)(p0 + 160) = (*(int *)(p0 + 160) | 0x10000);
    *(char *)(p0 + 112) = 11;
    *(char *)(p0 + 113) = 0;
    *(char *)(p0 + 114) = 0;
    *(float *)(p0 + 120) = f0;
    *(int *)(p0 + 124) = 0;
    *(float *)(p0 + 116) = f1;
    *(int *)(p0 + 144) = 0;
    *(int *)(p0 + 128) = (p1 & 255);
    *(int *)(p0 + 132) = (((unsigned int)p1 >> 8) & 255);
    *(int *)(p0 + 136) = (((unsigned int)p1 >> 16) & 255);
    *(int *)(p0 + 140) = (((unsigned int)p1 >> 24) & 255);
}

void func_001A2840(char *p0, int p1, float f0) {
    int t0;
    int t1;
    t0 = (*(int *)(p0 + 160) | 0x10000);
    t1 = *(int *)(p0 + 160);
    *(int *)(p0 + 160) = (*(int *)(p0 + 160) | 0x10000);
    *(char *)(p0 + 112) = 10;
    *(char *)(p0 + 113) = 0;
    *(char *)(p0 + 114) = 0;
    *(float *)(p0 + 120) = f0;
    *(int *)(p0 + 124) = 0;
    *(int *)(p0 + 128) = (p1 & 255);
    *(int *)(p0 + 132) = (((unsigned int)p1 >> 8) & 255);
    *(int *)(p0 + 136) = (((unsigned int)p1 >> 16) & 255);
    *(int *)(p0 + 140) = (((unsigned int)p1 >> 24) & 255);
}

void func_001A28A0(char *p0, int p1, float f0) {
    int t0;
    int t1;
    t0 = (*(int *)(p0 + 160) | 0x10000);
    t1 = *(int *)(p0 + 160);
    *(int *)(p0 + 160) = (*(int *)(p0 + 160) | 0x10000);
    *(char *)(p0 + 112) = 30;
    *(char *)(p0 + 113) = 0;
    *(char *)(p0 + 114) = 0;
    *(float *)(p0 + 120) = f0;
    *(int *)(p0 + 124) = 0x3f800000;
    *(int *)(p0 + 128) = (p1 & 255);
    *(int *)(p0 + 132) = (((unsigned int)p1 >> 8) & 255);
    *(int *)(p0 + 136) = (((unsigned int)p1 >> 16) & 255);
    *(int *)(p0 + 140) = (((unsigned int)p1 >> 24) & 255);
}

void func_001A4A30(char *p0, int p1, int p2) {
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    t0 = (*(int *)(p0 + 224) + p1);
    t1 = *(int *)(p0 + 224);
    *(int *)(p0 + 224) = (*(int *)(p0 + 224) + p1);
    t2 = (*(int *)(p0 + 228) + p2);
    *(int *)(p0 + 228) = (*(int *)(p0 + 228) + p2);
    t3 = (*(int *)(p0 + 224) & 4095);
    *(int *)(p0 + 224) = (*(int *)(p0 + 224) & 4095);
    t4 = (*(int *)(p0 + 228) & 4095);
    *(int *)(p0 + 228) = (*(int *)(p0 + 228) & 4095);
    *(char *)(p0 + 232) = 3;
}

int func_001A5B30(char *p0, int p1) {
    return (p1 - *(int *)(p0 + 176));
}

int func_001A5B40(char *p0, int p1) {
    *(int *)(p0 + 272) = p1;
    return 1;
}

extern char D_01DF5D20[];

float func_001A5B70(char *p0) {
    float t0;
    t0 = *(float *)D_01DF5D20;
    *(float *)(p0 + 432) = *(float *)D_01DF5D20;
    return t0;
}

void func_001A5B80(char *p0) {
    *(short *)(p0 + 388) = 0;
    *(char *)(p0 + 394) = 0;
}

void func_00197AA0(char *p0) {
    void func_00196F20();
    func_00196F20(D_006480D0, *(short *)(p0 + 4), *(short *)(p0 + 10), *(short *)(p0 + 12));
}

/*
 * The nine PoC functions that match, at their USA (SLUS_209.64) addresses.
 * These are not yet assigned to their original translation units; move each
 * one to its real TU once TU boundaries are known (DMC3_DECOMP_ROADMAP.md).
 * Struct layouts are offset-only placeholders: unkXXX = field at offset XXX.
 */
typedef unsigned char u8;

typedef unsigned short u16;

typedef struct { u8 pad[0x184]; u16 unk184; u16 unk186; } Obj1A5B90;

void func_001A5B90(Obj1A5B90 *p) { p->unk184 = p->unk186; }

void func_00131650(float *, float *);

void func_0019E0F0(char *p) {
    float func_00104D00(float *, float *);
    char *q = *(char **)(p + 0x5C);
    float v[4] __attribute__((aligned(16)));
    float t;
    func_00131650(v, (float *)(*(char **)(q + 0x108) + *(unsigned char *)(p + 7) * 64 + 0x20));
    t = func_00104D00(v, (float *)(q + 0x60));
    t += 1.0f;
    t *= 0.5f;
    if (!(t < 0.0f)) t = 1.0f - t;
    else t = t + 1.0f;
    if (0.0f == *(float *)(p + 0x20) || 0.0f == (float)*(short *)(p + 0x58)) {
        *(unsigned short *)(p + 0xC) = 0;
    } else {
        *(float *)(p + 0x10) = (float)*(short *)(p + 0x58) * (t * *(float *)(p + 0x20));
        *(unsigned short *)(p + 0xC) = (unsigned int)(4096.0f * *(float *)(p + 0x10));
    }
    if (0.0f == *(float *)(p + 0x28) || 0.0f == (float)*(short *)(p + 0x5A)) {
        *(unsigned short *)(p + 0xE) = 0;
    } else {
        *(float *)(p + 0x18) = (float)*(short *)(p + 0x5A) * (t * *(float *)(p + 0x28));
        *(unsigned short *)(p + 0xE) = (unsigned int)(4096.0f * *(float *)(p + 0x18));
    }
}
