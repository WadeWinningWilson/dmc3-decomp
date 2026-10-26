#include "game/mt_rand.h"
/* Steps a 0..15 value up or down with wrap-around. */
int func_00433F50(int a, int v, int dir) {
    if ((unsigned char)dir == 0) {
        return v < 15 ? v + 1 : 0;
    }
    return v > 0 ? v - 1 : 15;
}

/* Struct fields, not pointer arithmetic: MW recomputes &p->pos after each call
 * (it would keep p + 0x50 in a saved register). */
typedef struct Obj4377 {
    char pad0[0x50];
    float pos[4];
    char pad1[0x47E0 - 0x60];
    int x47E0;
    char pad2[0x4859 - 0x47E4];
    unsigned char sel;
    char pad3[4];
    unsigned char busy;
} Obj4377;

void func_004377A0(Obj4377 *, float *, unsigned char *);

void func_004376E0(Obj4377 *, float *, int, unsigned char);

int func_00437B60(Obj4377 *p) {
    float func_001324B0(float *, float *);
    float buf[4];
    if (p->busy == 1) {
        return 0;
    }
    func_004377A0(p, p->pos, &p->sel);
    func_004376E0(p, buf, p->x47E0, p->sel);
    if (func_001324B0(buf, p->pos) <= 200.0f) {
        return 1;
    }
    return 0;
}

void func_00207470(int, int, float *);

void func_0043BEC0(char *p) {
    void func_00105230(float *, float *, float *);
    float *func_004361D0(char *);
    float *func_00437250(char *);
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float *a;
    float *b;
    float *c;
    float r;
    a = func_004361D0(p);
    b = func_00437250(p);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(a), "r"(b) : "memory");
    r = 2.3283064e-10f * (float)mt_rand();
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(v), "f"(0.1f + 0.20000002f * r) : "t0", "memory");
    c = func_004361D0(p);
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%0)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%1)" : : "r"(c), "r"(v), "r"(v) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105230(m, m, v);
    func_00207470(3, 0x1D9, m);
}

extern char D_01CAFF0C[];

extern char D_01DFABA0[];

float func_00132D80(float *, float *);

void func_00131650(float *, float *);

extern float D_005BD9EC;

int func_004722C0(char *, float *, int);

void func_00330BD0(char *, int, char *, int, int);

void func_0043BCD0(char *p, unsigned char k) {
    extern unsigned char D_01CAFF3C[];
    void func_0043A150(char *, float *, char *);
    char *func_004361D0(char *);
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    char *o;
    float sc;
    float *dst;
    float *src;
    if (*(int *)(p + 0x47DC) > 0) {
        v[1] = 0.0f;
        v[0] = -1.0f;
        v[2] = 0.0f;
        v[3] = 1.0f;
        func_0043A150(p, v, *(char **)(*(char **)(p + 0x568) + 0x104));
        if (k == 0) {
            o = *(char **)D_01CAFF0C;
            w[0] = *(float *)(*(char **)(o + 0xC) + 0x50) - *(float *)(p + 0x50);
            w[1] = *(float *)(*(char **)(o + 0xC) + 0x54) - *(float *)(p + 0x54);
            w[2] = *(float *)(*(char **)(o + 0xC) + 0x58) - *(float *)(p + 0x58);
            w[3] = 1.0f;
            if (!(func_00132D80(v, w) <= 0.866025f)) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(w) : "memory");
            }
        }
        func_00131650(v, v);
        sc = D_005BD9EC;
        src = v;
        dst = v;
        asm {
            lqc2 vf4, 0x0(src)
            mfc1 t0, sc
            nop
            qmtc2.ni t0, vf5
            vmulx.xyzw vf6, vf4, vf5x
            sqc2 vf6, 0x0(dst)
        }
        if (func_004722C0(func_004361D0(p), v, *(unsigned char *)(p + 0x485E)) != 0) {
            if (D_01CAFF3C[0] != 4 && *(unsigned char *)(p + 0x485E) != 1) {
                *(int *)(p + 0x47DC) = *(int *)(p + 0x47DC) - 1;
            }
            if (!(*(float *)(p + 0x4834) < 4.0f)) {
                *(float *)(p + 0x4834) = 0.0f;
                func_00330BD0(D_01DFABA0, 0x3E, func_004361D0(p), 0x22, 0);
            }
        }
    } else if (!(*(float *)(p + 0x4834) < 4.0f)) {
        *(float *)(p + 0x4834) = 0.0f;
        func_00330BD0(D_01DFABA0, 0x3C, func_004361D0(p), 0x22, 0);
    }
}

int func_00437A00(int p0, int a) {
    extern float D_00577D10[][3];
    float func_001324B0(float *, int);
    float v[4] __attribute__((aligned(16)));
    int i;
    int best;
    float m = 0.0f;
    for (i = 0; i < 16; i++) {
        v[0] = D_00577D10[i][0];
        v[1] = D_00577D10[i][1];
        v[2] = D_00577D10[i][2];
        v[3] = 1.0f;
        {
            float d = func_001324B0(v, a);
            if (d > m) {
                m = d;
                best = i;
            }
        }
    }
    return best;
}

extern float D_00577D14[];

extern float D_00577D18[];

extern float D_00577DD0[];

extern float D_00577DD4[];

extern float D_00577DD8[];

extern float D_005BD9CC;

extern float D_005BD9D0;

static inline float frand437(void) { return 2.3283064e-10f * (float)mt_rand(); }

void func_004372D0(char *p, int k) {
    extern float D_00577D10[];
    if (*(unsigned char *)(p + 0x4859) == 1) {
        *(float *)(p + 0x47F0) = D_00577D10[k * 3] + D_005BD9CC * (frand437() - 0.5f);
        *(float *)(p + 0x47F4) = D_00577D14[k * 3];
        *(float *)(p + 0x47F8) = D_00577D18[k * 3] + D_005BD9CC * (frand437() - 0.5f);
        *(float *)(p + 0x47FC) = 1.0f;
    } else {
        *(float *)(p + 0x47F0) = D_00577DD0[k * 3] + D_005BD9D0 * (frand437() - 0.5f);
        *(float *)(p + 0x47F4) = D_00577DD4[k * 3];
        *(float *)(p + 0x47F8) = D_00577DD8[k * 3] + D_005BD9D0 * (frand437() - 0.5f);
        *(float *)(p + 0x47FC) = 1.0f;
    }
}

void func_0024DA80(char *, int, int);

void func_0043A750(char *, int, int, int);

void func_0043A1A0(char *);

void func_0043B970(char *, int, int);

#define FB(t, o) (*(t *)(p + (o)))

void func_00439970(char *p, unsigned char m, int x) {
    FB(unsigned char, 0x47BE) = m;
    FB(unsigned char, 5) = 0;
    switch (FB(unsigned char, 0x47BE)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 8:
    case 9:
    case 10:
    case 11:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 2;
        FB(unsigned char, 0x47B8) = 2;
        func_0043A750(p, 0, FB(unsigned char, 0x47BE), x);
        func_0043A1A0(p);
        break;
    case 4:
    case 5:
    case 6:
    case 12:
    case 13:
    case 14:
        FB(unsigned char, 0x47B4) = 1;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 0;
        FB(unsigned char, 0x47B8) = 0;
        func_0043A750(p, 0, FB(unsigned char, 0x47BE), x);
        func_0043A1A0(p);
        break;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 22:
    case 24:
    case 25:
    case 26:
    case 35:
    case 40:
    case 41:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 3;
        FB(unsigned char, 0x47B6) = 2;
        FB(unsigned char, 0x47B7) = 2;
        FB(unsigned char, 0x47B8) = 2;
        func_0043A750(p, 1, FB(unsigned char, 0x47BE) - 0xF, x);
        func_0043A1A0(p);
        break;
    case 123:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 3;
        FB(unsigned char, 0x47B6) = 2;
        FB(unsigned char, 0x47B7) = 0;
        FB(unsigned char, 0x47B8) = 0;
        FB(unsigned char, 0x4857) = 1;
        func_0043A750(p, 4, FB(unsigned char, 0x47BE) - 0x53, x);
        func_0043A1A0(p);
        FB(unsigned char, 0x314C) = 0;
        func_0024DA80(p + 0x4270, 4, FB(unsigned char, 0x47BE) - 0x53);
        break;
    case 124:
    case 125:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 3;
        FB(unsigned char, 0x47B6) = 2;
        FB(unsigned char, 0x47B7) = 0;
        FB(unsigned char, 0x47B8) = 0;
        FB(unsigned char, 0x4857) = 1;
        func_0043A750(p, 4, FB(unsigned char, 0x47BE) - 0x53, x);
        func_0043A1A0(p);
        func_0043B970(p, 0, 1);
        FB(unsigned char, 0x314C) = 0;
        func_0024DA80(p + 0x4270, 4, FB(unsigned char, 0x47BE) - 0x53);
        break;
    case 128:
    case 130:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 3;
        FB(unsigned char, 0x47B6) = 2;
        FB(unsigned char, 0x47B7) = 2;
        FB(unsigned char, 0x47B8) = 2;
        func_0043A750(p, 4, FB(unsigned char, 0x47BE) - 0x53, x);
        func_0043A1A0(p);
        break;
    case 38:
    case 39:
        FB(unsigned char, 0x47B4) = 1;
        FB(unsigned char, 0x47B5) = 3;
        FB(unsigned char, 0x47B6) = 3;
        FB(unsigned char, 0x47B7) = 2;
        FB(unsigned char, 0x47B8) = 2;
        func_0043A750(p, 1, FB(unsigned char, 0x47BE) - 0xF, x);
        func_0043A1A0(p);
        break;
    case 126:
        FB(unsigned char, 0x47B4) = 1;
        FB(unsigned char, 0x47B5) = 3;
        FB(unsigned char, 0x47B6) = 3;
        FB(unsigned char, 0x47B7) = 2;
        FB(unsigned char, 0x47B8) = 2;
        func_0043A750(p, 4, FB(unsigned char, 0x47BE) - 0x53, x);
        func_0043A1A0(p);
        break;
    case 42:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 0;
        FB(unsigned char, 0x47B8) = 0;
        func_0043A750(p, 2, FB(unsigned char, 0x47BE) - 0x2A, x);
        func_0043A1A0(p);
        break;
    case 43:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 0;
        FB(unsigned char, 0x47B8) = 0;
        func_0043A750(p, 2, FB(unsigned char, 0x47BE) - 0x2A, x);
        func_0043A1A0(p);
        break;
    case 44:
    case 45:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 0;
        FB(unsigned char, 0x47B8) = 0;
        func_0043A750(p, 2, FB(unsigned char, 0x47BE) - 0x2A, x);
        func_0043A1A0(p);
        break;
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 2;
        FB(unsigned char, 0x47B8) = 2;
        FB(unsigned char, 0x4857) = 1;
        func_0043A750(p, 3, FB(unsigned char, 0x47BE) - 0x2E, 1);
        func_0043A750(p, 0, 1, 0);
        func_0043A1A0(p);
        func_0043B970(p, 1, 1);
        break;
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 2;
        FB(unsigned char, 0x47B8) = 2;
        FB(unsigned char, 0x4857) = 1;
        func_0043A750(p, 3, FB(unsigned char, 0x47BE) - 0x2E, 1);
        func_0043A750(p, 3, 0x10, 0);
        func_0043A1A0(p);
        func_0043B970(p, 1, 1);
        break;
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 2;
        FB(unsigned char, 0x47B8) = 2;
        FB(unsigned char, 0x4857) = 1;
        func_0043A750(p, 3, FB(unsigned char, 0x47BE) - 0x2E, 1);
        func_0043A750(p, 3, 0x17, 0);
        func_0043A1A0(p);
        func_0043B970(p, 1, 1);
        break;
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 2;
        FB(unsigned char, 0x47B8) = 2;
        FB(unsigned char, 0x4857) = 1;
        func_0043A750(p, 3, FB(unsigned char, 0x47BE) - 0x2E, 1);
        func_0043A750(p, 3, 0x1E, 0);
        func_0043A1A0(p);
        func_0043B970(p, 1, 1);
        break;
    case 46:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 2;
        FB(unsigned char, 0x47B8) = 2;
        FB(unsigned char, 0x4857) = 1;
        func_0043A750(p, 3, FB(unsigned char, 0x47BE) - 0x2E, x);
        func_0043A1A0(p);
        func_0043B970(p, 1, 1);
        break;
    case 96:
    case 99:
        FB(unsigned char, 0x47B4) = 1;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 0;
        FB(unsigned char, 0x47B8) = 0;
        FB(unsigned char, 0x4857) = 0;
        FB(int, 0x4834) = 0;
        func_0043A750(p, 4, FB(unsigned char, 0x47BE) - 0x53, x);
        func_0043A1A0(p);
        func_0043B970(p, 0, 1);
        FB(unsigned char, 0x314C) = 1;
        func_0043B970(p, 4, 1);
        break;
    case 95:
    case 98:
        FB(unsigned char, 0x47B4) = 1;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 0;
        FB(unsigned char, 0x47B8) = 0;
        FB(unsigned char, 0x4857) = 1;
        func_0043A750(p, 4, FB(unsigned char, 0x47BE) - 0x53, x);
        func_0043A1A0(p);
        func_0043B970(p, 0, 1);
        FB(unsigned char, 0x314C) = 1;
        break;
    case 90:
    case 91:
    case 92:
    case 93:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 0;
        FB(unsigned char, 0x47B8) = 0;
        FB(unsigned char, 0x4857) = 1;
        func_0043A750(p, 4, FB(unsigned char, 0x47BE) - 0x53, x);
        func_0043A1A0(p);
        FB(unsigned char, 0x314C) = 0;
        func_0024DA80(p + 0x4270, 4, FB(unsigned char, 0x47BE) - 0x53);
        break;
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 94:
    case 97:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 0;
        FB(unsigned char, 0x47B8) = 0;
        FB(unsigned char, 0x4857) = 1;
        func_0043A750(p, 4, FB(unsigned char, 0x47BE) - 0x53, x);
        func_0043A1A0(p);
        func_0043B970(p, 0, 1);
        FB(unsigned char, 0x314C) = 1;
        break;
    case 127:
        FB(unsigned char, 0x47B4) = 1;
        FB(unsigned char, 0x47B5) = 3;
        FB(unsigned char, 0x47B6) = 3;
        FB(unsigned char, 0x47B7) = 2;
        FB(unsigned char, 0x47B8) = 2;
        func_0043A750(p, 4, FB(unsigned char, 0x47BE) - 0x53, x);
        func_0043A1A0(p);
        func_0043B970(p, 1, 1);
        func_0043B970(p, 2, 1);
        break;
    case 129:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 3;
        FB(unsigned char, 0x47B6) = 3;
        FB(unsigned char, 0x47B7) = 2;
        FB(unsigned char, 0x47B8) = 2;
        FB(unsigned char, 0x4857) = 1;
        func_0043A750(p, 4, FB(unsigned char, 0x47BE) - 0x53, x);
        func_0043A1A0(p);
        func_0043B970(p, 3, 1);
        break;
    case 133:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 0;
        FB(unsigned char, 0x47B8) = 0;
        FB(int, 0x4834) = 0;
        FB(unsigned char, 0x4857) = 0;
        func_0043A750(p, 4, FB(unsigned char, 0x47BE) - 0x53, x);
        func_0043A1A0(p);
        break;
    case 143:
        FB(unsigned char, 0x47B4) = 0;
        FB(unsigned char, 0x47B5) = 0;
        FB(unsigned char, 0x47B6) = 0;
        FB(unsigned char, 0x47B7) = 0;
        FB(unsigned char, 0x47B8) = 0;
        func_0043A750(p, 4, FB(unsigned char, 0x47BE) - 0x53, x);
        func_0043A1A0(p);
        break;
    case 7:
    case 21:
    case 23:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 36:
    case 37:
    case 47:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 131:
    case 132:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 141:
    case 142:
    case 144:
        break;
    }
}

float func_00132470(char *, char *);

extern short D_005BDA40;

extern short D_005BDA42;

extern float D_005BDA44;

extern short D_005BD9E0;

extern short D_005BD9E2;

extern float D_005BD9E4;

unsigned int func_002F0A40(char *);

char *func_002F15D0(char *, unsigned int);

int func_0034B800(char *, char *, short, int, float);

char *func_0043B1B0(char *p, char *a) {
    char *q = *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x2B58;
    unsigned int n = func_002F0A40(q);
    char *best = 0;
    unsigned int i;
    char *e;
    float d = 1000000.0f;
    for (i = 0; i < n; i++) {
        e = func_002F15D0(q, i);
        if (e == 0) continue;
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, D_005BDA40 + *(short *)(p + 0x4850), D_005BDA42, D_005BDA44) == 1) {
            *(unsigned char *)(p + 0x4861) = 1;
            if ((unsigned char)func_0034B800(e + 0x50, p + 0x50, D_005BD9E0 + *(short *)(p + 0x4850), D_005BD9E2, D_005BD9E4) == 0 && best != 0) continue;
        } else {
            *(unsigned char *)(p + 0x4861) = 0;
        }
        if (func_00132470(a, e + 0x50) <= d) {
            best = e;
            d = func_00132470(a, e + 0x50);
        }
    }
    return best;
}

void func_00131760();

void func_0043BC30(int p0, int p1, int p2, int p3) {
    void func_00105230();
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p1) : "memory");
    func_00131760(p1, p1, p3);
    func_00105230(p1, p1, p2);
}

void func_0043C3C0(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005A77A0[];

extern char D_005A78F8[];

extern char D_005AAA98[];

extern char D_005AFA60[];

extern char D_005B0890[];

extern char D_005B4070[];

extern char D_005B4094[];

extern char D_005B4114[];

extern char D_005B41A8[];

extern char D_005B4274[];

extern char D_005B432C[];

void func_001003E0();

void func_0013D240();

void func_00204C70();

void func_0024D9A0();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_002E83B0();

void func_002E8A50();

void func_00313E60();

void func_0031DD00();

void func_0031E440();

void func_00320590();

char *func_0043C0E0(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005B4070;
        *(char * *)(p + 64) = D_005B4094;
        *(char * *)(p + 160) = D_005B4114;
        *(char * *)(p + 208) = D_005B41A8;
        *(char * *)(p + 304) = D_005B4274;
        *(char * *)(p + 464) = D_005B432C;
        if (p + 18192 != 0) {
            *(char * *)(p + 18208) = D_005AAA98;
            if (p + 18192 != 0) {
                *(char * *)(p + 18208) = D_005A77A0;
            }
        }
        if (p + 18096 != 0) {
            *(char * *)(p + 18112) = D_005B0890;
            if (p + 18096 != 0) {
                *(char * *)(p + 18112) = D_005A77A0;
            }
        }
        func_00313E60(p + 18060, -1);
        func_002E8A50(p + 18036, -1);
        func_002E83B0(p + 17968, -1);
        func_0028C1A0(p + 17328, -1);
        func_0024D9A0(p + 17008, -1);
        func_001003E0(p + 16592, (void *)func_0024D9A0, 208, 2);
        if (p + 13648 != 0) {
            *(char * *)(p + 13664) = D_005A78F8;
            if (p + 13648 != 0) {
                *(char * *)(p + 13664) = D_005A77A0;
            }
        }
        if (p + 13488 != 0) {
            *(char * *)(p + 13504) = D_005B0890;
            if (p + 13488 != 0) {
                *(char * *)(p + 13504) = D_005A77A0;
            }
        }
        if (p + 13248 != 0) {
            *(char * *)(p + 13264) = D_005AFA60;
            if (p + 13248 != 0) {
                *(char * *)(p + 13264) = D_005A77A0;
            }
        }
        if (p + 13088 != 0) {
            *(char * *)(p + 13104) = D_005AFA60;
            if (p + 13088 != 0) {
                *(char * *)(p + 13104) = D_005A77A0;
            }
        }
        func_001003E0(p + 12768, (void *)func_00204C70, 160, 2);
        if (p + 12608 != 0) {
            *(char * *)(p + 12624) = D_005AFA60;
            if (p + 12608 != 0) {
                *(char * *)(p + 12624) = D_005A77A0;
            }
        }
        if (p + 12448 != 0) {
            *(char * *)(p + 12464) = D_005AFA60;
            if (p + 12448 != 0) {
                *(char * *)(p + 12464) = D_005A77A0;
            }
        }
        func_0031DD00(p + 12304, -1);
        func_0031DD00(p + 12160, -1);
        func_002791E0(p + 10624, -1);
        func_002791E0(p + 9088, -1);
        func_001003E0(p + 6016, (void *)func_002791E0, 1536, 2);
        func_002791E0(p + 4480, -1);
        func_002791E0(p + 2944, -1);
        func_002791E0(p + 1408, -1);
        func_001003E0(p + 472, (void *)func_0013D240, 16, 42);
        func_0031E440(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern char D_00577EA0[];

int func_00437AD0(p0, p1) int p0; int p1; {
    float func_001324B0();
    int v0;
    int v1;
    float v2;
    float v3;
    int v4;
    int v5;
    v0 = p1;
    v1 = 0;
    v3 = 1000000.0f;
    v5 = (int)D_00577EA0;
    do {
        v2 = func_001324B0(v5, v0);
        if (v2 < v3) {
            v3 = v2;
            v4 = v1;
        }
        v1 = (v1 + 1);
        v5 = (v5 + 16);
    } while ((v1 < 5));
    return v4;
}

int func_002018A0();

int func_00437E00(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int func_00437250();
    char stk[0x50] __attribute__((aligned(16)));
    int tmp0;
    int tmp4;
    tmp0 = func_00437250();
    tmp4 = func_002018A0((*(int *)(*(char **)D_01CAFF0C + 20) + 1352), p1, tmp0, ((stk + -32) + 32), ((stk + -32) + 48), 16);
    return ((tmp4 & 255) == 0);
}

extern char D_00577E90[];

extern char D_00577E98[];

int func_00437E60(p0) char *p0; {
    char stk[0x30] __attribute__((aligned(16)));
    float tmp0;
    float tmp1;
    float tmp2;
    float tmp3;
    float tmp4;
    float tmp5;
    tmp0 = *(float *)(p0 + 336);
    tmp1 = *(float *)D_00577E90;
    *(int *)((stk + 0) + 36) = 0;
    *(float *)((stk + 0) + 32) = (tmp0 - tmp1);
    tmp2 = *(float *)(p0 + 344);
    tmp3 = *(float *)D_00577E98;
    *(int *)((stk + 0) + 44) = 0x3f800000;
    *(float *)((stk + 0) + 40) = (tmp2 - tmp3);
    tmp4 = (*(float *)(p0 + 80) - tmp1);
    *(int *)((stk + 0) + 20) = 0;
    *(float *)((stk + 0) + 16) = tmp4;
    tmp5 = (*(float *)(p0 + 88) - tmp3);
    *(int *)((stk + 0) + 28) = 0x3f800000;
    *(float *)((stk + 0) + 24) = tmp5;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tlqc2 $vf6, 0x0(%0)\n\tvopmula.xyz $ACC, $vf4, $vf5\n\tvopmsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%2)" : : "r"(((stk + 0) + 32)), "r"(((stk + 0) + 16)), "r"(((stk + 0) + 0)) : "memory");
    if (*(float *)((stk + 0) + 4) >= 0.0f) {
        return 1;
    } else {
        return 0;
    }
}

void func_0043A130(p0, p1) char *p0; char *p1; {
    void func_0043A150();
    *(int *)(p1 + 0) = 0x3f800000;
    *(int *)(p1 + 4) = 0;
    *(int *)(p1 + 8) = 0;
    *(int *)(p1 + 12) = 0x3f800000;
    func_0043A150(p0, p1, *(int *)(*(char **)(p0 + 1348) + 260));
}

int func_001AD140();

int func_002F2D30();

int func_0043AF60(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = (int)p0;
    v1 = *(int *)(p0 + 18348);
    if (v1 != 0) {
        v4 = func_001AD140(v1);
    }
    v2 = *(int *)(*(char **)D_01CAFF0C + 32);
    v3 = v0;
    if (v2 != 0) {
        v4 = func_002F2D30(v2, v3);
    }
    return v4;
}

void func_0043B170(p0) char *p0; {
    extern char D_01CAFF3C[];
    if (*(unsigned char *)D_01CAFF3C != 4) {
        if (*(unsigned char *)(p0 + 18526) != 1) {
            *(int *)(p0 + 18372) = (*(int *)(p0 + 18372) + -1);
        }
    }
}

int func_00494810();

int func_0043BC90(p0, p1, p2) int p0; int p1; int p2; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = func_00494810(p1, p2);
    if (v1 != 0) {
        *(int *)(v0 + 18388) = (*(int *)(v0 + 18388) + -1);
    }
    return v1;
}

int func_0043C060(p0, p1) int p0; int p1; {
    char *v0;
    v0 = 0;
    if ((p1 < 23)) {
        v0 = (char *)(p1 << 2);
        v0 = (v0 + p0);
        v0 = *(char **)(v0 + 1220);
    }
    return (int)v0;
}

extern void func_00431EE0();

void func_0043C410(char *p) { func_00431EE0(p + -64); }

extern void func_0043C080();

void func_0043C420(char *p) { func_0043C080(p + -64); }

extern void func_0043C090();

void func_0043C430(char *p) { func_0043C090(p + -64); }

extern void func_0043C0A0();

void func_0043C440(char *p) { func_0043C0A0(p + -64); }

extern void func_0043B330();

void func_0043C450(char *p) { func_0043B330(p + -64); }

extern void func_0043B540();

void func_0043C460(char *p) { func_0043B540(p + -64); }

extern void func_00437F10();

void func_0043C4A0(char *p) { func_00437F10(p + -304); }

extern void func_0043B530();

void func_0043C4B0(char *p) { func_0043B530(p + -304); }

void func_0043C4C0(char *p) { func_0043B330(p + -304); }

extern void func_00433650();

void func_0043C4D0(char *p) { func_00433650(p + -304); }

extern void func_0043B520();

void func_0043C4F0(char *p) { func_0043B520(p + -464); }

extern void func_0043B960();

void func_0043C500(char *p) { func_0043B960(p + -464); }

extern void func_0043C0B0();

void func_0043C510(char *p) { func_0043C0B0(p + -464); }

extern void func_0043C0C0();

void func_0043C520(char *p) { func_0043C0C0(p + -464); }

extern void func_0043C0D0();

void func_0043C530(char *p) { func_0043C0D0(p + -464); }

extern void func_004348B0();

void func_0043C540(char *p) { func_004348B0(p + -464); }

extern void func_00439960();

void func_0043C550(char *p) { func_00439960(p + -464); }

extern void func_004381A0();

void func_0043C560(char *p) { func_004381A0(p + -464); }

void func_00435510(int p0, char *p1) {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p1), "r"((p0 + 80)) : "memory");
}

void func_00438170(char *p0, int p1, int p2, int p3) {
    *(int *)(p0 + 308) = p1;
    *(int *)(p0 + 18352) = p2;
    *(int *)(p0 + 320) = p3;
    *(char *)(p0 + 18356) = 0;
    *(char *)(p0 + 18357) = 0;
    *(char *)(p0 + 18358) = 0;
    *(char *)(p0 + 18359) = 2;
    *(char *)(p0 + 18360) = 2;
}

void func_00439700();

void func_004396F0(int p0, int p1) {
    func_00439700(p0, p1, -1);
}
