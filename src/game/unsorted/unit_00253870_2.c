#include "game/mt_rand.h"
int func_0023DF80(char *, float);

void func_002DA3A0(char *, int);

int func_002496D0(char *);

void func_0021CBB0(char *, int);

void func_0021B790(char *, int);

void func_002DBAA0(char *, short, float);

void func_002DBD20(char *, float, float);

void func_002DBD00(char *);

void func_002DBCC0(char *, int, float, float);

void func_0021C380(char *, int);

void func_0021CB50(char *, int);

void func_0021CB60(char *, int);

void func_0025DD40(char *p) {
    void func_002490F0(char *, int, int, int, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CB60(p, 0x10000);
        func_0021CB50(p, 2);
        func_0021CB60(p, 1);
        func_002490F0(p, 0, 0xE, -1, 0, 0, -1.0f);
        func_0021C380(p, 8);
        func_002DBD00(p);
        func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x38), 0.0f);
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x3C), *(float *)(*(char **)(p + 0x2844) + 0x40));
        *(float *)(p + 0x2870) = 300.0f;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        *(short *)(p + 0x2856) = 0;
        break;
    case 1:
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) < 0.0f || (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0)) {
            func_002490F0(p, 0, 0x23, -1, 0, 0, -1.0f);
            *(unsigned char *)(p + 0x2866) = 0;
            func_0021CB60(p, 2);
            func_0021CB50(p, 1);
            func_0021CBB0(p, 1);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
            break;
        }
        if (*(short *)(p + 0x2856) == 0) {
            func_002496D0(p);
            if (*(unsigned char *)(p + 0x24D5) == 1) {
                *(short *)(p + 0x2856) = 1;
            }
        }
        func_002DA3A0(p, *(short *)(p + 0x90));
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
            break;
        }
        if (*(unsigned char *)(p + 0x2866) != 0) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        *(unsigned char *)(p + 0x2866) = 1;
        break;
    }
}

void func_0021BFC0(char *);

void func_002DBD30(char *);

void func_0021C100(char *, int, int, float, float);

void func_002DB090(char *, int, int, float);

void func_0021CA00(char *, int);

extern unsigned char **D_00545DCC[];

float func_00131B50(float);

int func_003330C0(char *, int);

void func_00262050(char *, int, int, int, int);

void func_00262CA0(char *, int, int, char *);

static inline void hold_timer(char *p) {
    switch (*(unsigned char *)(p + 0x3C74)) {
    case 0:
        *(float *)(p + 0x2878) = *(float *)(*(char **)(p + 0x2844) + 0x690);
        break;
    case 1:
        *(float *)(p + 0x2878) = *(float *)(*(char **)(p + 0x2844) + 0x694);
        break;
    case 2:
    default:
        *(float *)(p + 0x2878) = *(float *)(*(char **)(p + 0x2844) + 0x698);
        break;
    }
}

void func_00263FF0(char *p) {
    void func_002490F0(char *, int, int, int, int, int, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0: {
        float d;
        func_002490F0(p, 0x12, 0xF, -1, 0, 0, -1.0f);
        func_002DB090(p, 0, 1, 0.0f);
        *(short *)(p + 0x90) = *(short *)(p + 0x3BA4);
        func_0021CA00(p, 0);
        if (func_00131B50(*(float *)(p + 0x150)) < 3.0f) {
            func_002DBD30(p);
        } else {
            func_002DBD20(p, 1.5f, 0.0f);
        }
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x194), *(float *)(*(char **)(p + 0x2844) + 0x198));
        *(unsigned char *)(p + 0x7D32) = 0;
        if ((unsigned char)func_003330C0(p + 0x3D90, 0x1F7) == 0) {
            *(unsigned char *)(p + 0x7D32) = 0x63;
        }
        *(short *)(p + 0x285C) = 0;
        *(float *)(p + 0x2878) = *(float *)(*(char **)(p + 0x2844) + 0x1B0);
        *(float *)(p + 0x2878) = 12.0f;
        d = *(float *)(p + 0x54) - *(float *)(p + 0x2924);
        if (d < *(float *)(*(char **)(p + 0x2844) + 0x1B4)) {
            *(short *)(p + 0x285A) = 0;
        } else if (d < *(float *)(*(char **)(p + 0x2844) + 0x1B8)) {
            *(short *)(p + 0x285A) = 1;
        } else {
            *(short *)(p + 0x285A) = 2;
        }
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    }
    case 1:
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        *(float *)(p + 0x2878) = *(float *)(p + 0x2878) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2878) <= 0.0f) {
            hold_timer(p);
            func_00262050(p, *(unsigned char *)(p + 0x285C), 3, *(unsigned char *)(p + 0x285A), 1);
            *(short *)(p + 0x285C) = *(short *)(p + 0x285C) + 1;
        }
        if (*(unsigned char *)(p + 0x24D5) != 0) {
            func_00262CA0(p, *(unsigned char *)(p + 0x285C), 3, p + 0x50);
            *(short *)(p + 0x285C) = *(short *)(p + 0x285C) + 1;
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 0x12, 0x10, -1, 0, 0, -1.0f);
            func_002DBD30(p);
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x2844) + 0x1A8), *(float *)(*(char **)(p + 0x2844) + 0x1AC));
            *(float *)(p + 0x2874) = *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x19C);
            *(short *)(p + 0x2856) = 0;
            *(short *)(p + 0x2858) = 0;
            *(float *)(p + 0x2870) = 0.0f;
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 2:
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        func_002496D0(p);
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) <= 0.0f) {
            int k;
            int w;
            int m;
            *(float *)(p + 0x2870) = 0.0f;
            k = D_00545DCC[0][*(unsigned char *)(p + 0x3D90)][*(short *)(p + 0x2856)];
            w = ((int *)(p + 0x49F0))[(unsigned int)k >> 5];
            m = 1 << (k % 32);
            if (!(w & m)) {
                *(short *)(p + 0x2858) = 1;
            }
            *(float *)(p + 0x2874) = *(float *)(p + 0x2874) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2874) < 0.0f) {
                *(float *)(p + 0x2874) = *(float *)(*(char **)(p + 0x2844) + 0x1A0);
                *(short *)(p + 0x2856) = *(short *)(p + 0x2856) + 1;
                if (!(*(short *)(p + 0x2856) < 6)) {
                    *(short *)(p + 0x2856) = 5;
                }
            }
        }
        *(float *)(p + 0x2878) = *(float *)(p + 0x2878) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2878) <= 0.0f) {
            hold_timer(p);
            *(short *)(p + 0x285C) = *(short *)(p + 0x285C) + 1;
            func_00262050(p, *(unsigned char *)(p + 0x285C), 3, *(unsigned char *)(p + 0x285A), 0);
        }
        if (*(short *)(p + 0x2858) != 0 || *(float *)(p + 0x54) - *(float *)(p + 0x2924) <= *(float *)(*(char **)(p + 0x2844) + 0x190)) {
            if (*(unsigned char *)(p + 0x2904) == 4 || *(unsigned char *)(p + 0x2904) == 2) {
                func_002490F0(p, 0x12, 0x11, -1, 0, 0, -1.0f);
            } else {
                func_002DBD20(p, 2.0f, 0.0f);
                func_002490F0(p, 0x12, 0x12, -1, 0, 0, -1.0f);
            }
            *(unsigned char *)(p + 0x284C) = 3;
        }
        break;
    case 3:
        if (func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 0xA, *(float *)(p + 0x64), -1.5f);
        }
        break;
    }
}

typedef struct { float v[4]; } V4F;

typedef struct { V4F a; V4F b; float c; int pad[3]; } E30;

typedef struct { char x[0x20]; E30 arr[5]; } P277;

void func_00277BC0(char *p, E30 *n) {
    E30 t;
    int i;
    if (*(float *)(p + 0x100) < n->c) {
        ((P277 *)p)->arr[4].a = n->a;
        ((P277 *)p)->arr[4].b = n->b;
        ((P277 *)p)->arr[4].c = n->c;
        for (i = 3; i > 0; i--) {
            if (((P277 *)p)->arr[i + 1].c < ((P277 *)p)->arr[i].c) break;
            t.a = ((P277 *)p)->arr[i].a;
            t.b = ((P277 *)p)->arr[i].b;
            t.c = ((P277 *)p)->arr[i].c;
            ((P277 *)p)->arr[i].a = ((P277 *)p)->arr[i + 1].a;
            ((P277 *)p)->arr[i].b = ((P277 *)p)->arr[i + 1].b;
            ((P277 *)p)->arr[i].c = ((P277 *)p)->arr[i + 1].c;
            ((P277 *)p)->arr[i + 1].a = t.a;
            ((P277 *)p)->arr[i + 1].b = t.b;
            ((P277 *)p)->arr[i + 1].c = t.c;
        }
    }
}

float func_00104D00(float *, float *);

void func_002779F0(int u, char *o, unsigned char *l, float *pos) {
    float v[4] __attribute__((aligned(16)));
    float t;
    v[0] = *(float *)(l + 0x10) - pos[0];
    v[1] = *(float *)(l + 0x14) - pos[1];
    v[2] = *(float *)(l + 0x18) - pos[2];
    v[3] = 0.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(o), "r"(v) : "memory");
    if ((unsigned char)l[2] == 0) {
        *(float *)(o + 0xC) = *(float *)(l + 0x1C);
        t = func_00104D00(v, v);
        t = 1.0f - t * *(float *)(l + 0x20);
        *(float *)(o + 0x20) = t > 0.0f ? t : 0.0f;
    } else {
        *(float *)(o + 0x20) = 1.0f;
    }
    *(float *)(o + 0x10) = *(unsigned short *)(l + 0x24);
    *(float *)(o + 0x14) = *(unsigned short *)(l + 0x26);
    *(float *)(o + 0x18) = *(unsigned short *)(l + 0x28);
    if (l[2] == 0) *(float *)(o + 0x1C) = *(float *)(l + 0x20);
    else *(float *)(o + 0x1C) = 1.0f;
    if (l[1]) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	lqc2 $vf6, 0x0(%0)
	vmulx.xyz $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(o + 0x10), "r"(o + 0x10), "f"(-1.0f) : "t0", "memory");
    }
}

void func_002788D0(char *, signed char);

void func_00278870(char *p, signed char k) {
    switch (*(unsigned char *)(p + 0x2998)) {
    case 1:
    switch (k) {
    case 0:
        break;
    case 1:
        func_002788D0(p, k);
        break;
    }
        break;
    }
}

void func_0021C7E0();

void func_0026D100();

void func_0026D0B0(char *p0) {
    unsigned char t0;
    t0 = *(unsigned char *)(p0 + 10648);
    *(char *)(p0 + 10649) = *(unsigned char *)(p0 + 10648);
    *(char *)(p0 + 10648) = 99;
    func_0021C7E0(p0, 17, 0, -1);
    func_0026D100(p0);
}

void func_0026DD00(p0) int p0; {
    int func_002490F0(int, int, int, int, int, int, float);
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v2 = mt_rand();
    v1 = (v2 & 3);
    switch (v1) {
    case 0:
        v2 = func_002490F0(v0, 6, 5, -1, 2, 10, -1.0f);
        break;
    case 1:
        v2 = func_002490F0(v0, 6, 6, -1, 2, 10, -1.0f);
        break;
    case 2:
        v2 = func_002490F0(v0, 6, 7, -1, 2, 10, -1.0f);
        break;
    case 3:
        v2 = func_002490F0(v0, 6, 8, -1, 2, 10, -1.0f);
        break;
    }
}

void func_00277E70(p0) char *p0; {
    *(float *)(p0 + 0) = *(float *)(p0 + 20);
    *(char *)(p0 + 176) = *(signed char *)(p0 + 16);
    *(char *)(p0 + 177) = *(unsigned char *)(p0 + 17);
    *(float *)(p0 + 192) = *(float *)(p0 + 32);
    *(float *)(p0 + 196) = *(float *)(p0 + 36);
    *(float *)(p0 + 200) = *(float *)(p0 + 40);
    *(short *)(p0 + 212) = *(unsigned short *)(p0 + 52);
    *(short *)(p0 + 214) = *(unsigned short *)(p0 + 54);
    *(short *)(p0 + 216) = *(unsigned short *)(p0 + 56);
    *(float *)(p0 + 204) = *(float *)(p0 + 44);
    *(float *)(p0 + 208) = *(float *)(p0 + 48);
}

extern void func_00277350();

void func_002775E0(char *p) { func_00277350(p + -64); }

void func_002775F0(char *p) { func_00277350(p + -160); }

void func_00277600(char *p) { func_00277350(p + -208); }

extern void func_00278A40();

void func_00278C70(char *p) { func_00278A40(p + -64); }

void func_00278C80(char *p) { func_00278A40(p + -160); }

void func_00278C90(char *p) { func_00278A40(p + -208); }

void func_0025EE70(char *p0, int p1, float f0, float f1, float f2) {
    *(char *)(p0 + 32693) = p1;
    *(float *)(p0 + 32676) = f0;
    *(float *)(p0 + 32680) = f2;
    *(float *)(p0 + 32684) = f1;
    *(float *)(p0 + 32688) = f2;
    *(char *)(p0 + 32692) = 0;
}
