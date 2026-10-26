#include "game/mt_rand.h"
extern char D_01CAFF0C[];

extern unsigned char D_00569788[];

void func_00131700(float *, float *, float *);

void func_0024E7B0(char *, int, int);

char *func_004083D0(char *, float *);

short func_0034B940(char *, char *);

#define G (*(char **)D_01CAFF0C)

#define AIM(m, v, w, o) \
    UNIT(m); \
    v[0] = 0.0f; \
    v[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f); \
    v[2] = 0.0f; \
    v[3] = 1.0f; \
    func_00131700(m, m, v); \
    w[0] = 0.0f; \
    w[1] = 150.0f; \
    w[2] = 100.0f; \
    w[3] = 1.0f; \
    func_00104B80(o, m, w); \
    o[0] += *(float *)(p + 0x50); \
    o[1] += *(float *)(p + 0x54); \
    o[2] += *(float *)(p + 0x58); \
    o[3] = 1.0f;

#define MARK() \
    UNIT(p + 0x4BA0); \
    func_00131700((float *)(p + 0x4BA0), (float *)(p + 0x4BA0), v); \
    func_00105230(p + 0x4BA0, p + 0x4BA0, o);

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
void func_003A7B80(char *p) {
    void func_00104B80(float *, float *, float *);
    void func_00105230(char *, char *, float *);
    char *func_00207480(int, int, int, int);
    void func_003A5C70(char *);
    void func_003A5D20(char *, int);
    unsigned char func_0024E780(char *, int, int);
    void func_0034BA60(int, char *, signed char, int, int);
    unsigned char func_0024E800(char *);
    int func_003ACB40(char *);
    void func_003AA8F0(char *);
    void func_002EF940(char *, char *);
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float o[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float v2[4] __attribute__((aligned(16)));
    float w2[4] __attribute__((aligned(16)));
    float o2[4] __attribute__((aligned(16)));
    float m2[16] __attribute__((aligned(16)));
    char *e;
    int i;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        AIM(m, v, w, o)
        MARK()
        e = func_00207480(3, 0x199, 0, 0x10);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x4BA0;
            e[0x9A] = 0;
        }
        func_003A5C70(p);
    case 1:
        AIM(m, v, w, o)
        MARK()
        func_003A5D20(p, 0);
        if (func_0024E780(p + 0x4BF0, 0, 0) == 1) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            AIM(m2, v2, w2, o2)
            for (i = 0; i < (D_00569788 + *(unsigned char *)(p + 0x4E18))[*(unsigned char *)(p + 0x4E17) * 3]; i++) {
                e = func_004083D0(p, o2);
                if (e != 0) *(float *)(e + 0x434) = 8.0f * (float)i;
                func_0034BA60(0x1C, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            }
        }
        if (func_0024E800(p + 0x4BF0) == 1) {
            *(float *)(p + 0x4E08) = 40.0f;
            (*(unsigned char *)(p + 6))++;
        }
        break;
    case 2:
        *(float *)(p + 0x4E08) = *(float *)(p + 0x4E08) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x4E08) < 0.0f && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
        func_003A5D20(p, 1);
        break;
    }
    func_002EF940(G, p + 0x5080);
    *(short *)(p + 0x90) = func_0034B940(*(char **)(G + 0xC) + 0x50, p + 0x50);
}
#undef UNIT

extern float D_00569830[];

extern float D_00569890[];

extern float D_005698C0[];

void func_003AB5D0(char *);

float func_001324B0(char *, char *);

unsigned char func_0021D260(char *, int, int);

unsigned char func_0021D320(char *, int, unsigned char, int, int);

void func_003AA990(char *, int);

void func_00131650(char *, char *);

float func_0034C160(float, float, float);

#define IDX (*(unsigned char *)(p + 0x4E18) + *(unsigned char *)(p + 0x4E17) * 3)

void func_003A9350(char *p) {
    unsigned char func_0024E780(char *, int, int);
    unsigned char func_0024E800(char *);
    int func_003ACB40(char *);
    void func_003AA8F0(char *);
    void func_002EF940(char *, char *);
    char *pl = *(char **)(G + 0xC);
    unsigned char done = 0;
    float dy;
    float t;
    float tmp[4] __attribute__((aligned(16)));
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        *(unsigned char *)(p + 0x5162) = 0;
        func_003AB5D0(p);
        *(unsigned char *)(p + 0x5164) = 0;
    case 1:
        if (func_0024E780(p + 0x4BF0, 0, 0) == 8) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            *(unsigned char *)(p + 0x5164) = 1;
        }
        if (func_0024E780(p + 0x4BF0, 0, 0) == 9) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            (*(unsigned char *)(p + 6))++;
            *(unsigned char *)(p + 0x5164) = 0;
        } else if (*(unsigned char *)(p + 0x5162) == 0 && *(unsigned char *)(p + 0x5164) == 1) {
            if (func_001324B0(*(char **)(G + 0xC) + 0x50, p + 0x50) < D_00569830[IDX]) {
                *(float *)(p + 0x4D94) = 0.0f;
                t = *(float *)(*(char **)(G + 0xC) + 0x54) - *(float *)(p + 0x54);
                dy = t < 0.0f ? -t : t;
                if (dy < 50.0f) {
                    *(unsigned char *)(p + 0x5162) = func_0021D260(pl, 2, *(int *)(p + 0x2158));
                    if (*(unsigned char *)(p + 0x5162) != 0) {
                        if (func_0021D320(pl, 2, *(unsigned char *)(p + 0x5162), 0, 0x14) == 0) {
                            (*(unsigned char *)(p + 6))++;
                            *(unsigned char *)(p + 0x5164) = 0;
                        } else {
                            func_003AA990(p, 0x24);
                            *(short *)(p + 0x90) = func_0034B940(*(char **)(G + 0xC) + 0x50, p + 0x50);
                        }
                    } else {
                        (*(unsigned char *)(p + 6))++;
                        *(unsigned char *)(p + 0x5164) = 0;
                    }
                }
                done = 1;
            }
        } else {
            done = 1;
        }
        if (done == 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x4DA0), "r"(p + 0x50), "r"(*(char **)(G + 0xC) + 0x50) : "memory");
            *(float *)(p + 0x4DA4) = 0.0f;
            func_00131650(p + 0x4DA0, p + 0x4DA0);
            *(float *)(p + 0x4DAC) = 1.0f;
            *(float *)(p + 0x4D94) = func_0034C160(*(float *)(p + 0x4D94), D_005698C0[IDX], *(float *)(p + 0x10) * D_00569890[IDX]);
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x4DA0), "f"(*(float *)(p + 0x4D94)) : "t0", "memory");
            *(float *)(p + 0x50) = *(float *)(p + 0x50) + tmp[0] * *(float *)(p + 0x10);
            *(float *)(p + 0x58) = *(float *)(p + 0x58) + tmp[2] * *(float *)(p + 0x10);
        }
        *(short *)(p + 0x90) = func_0034B940(*(char **)(G + 0xC) + 0x50, p + 0x50);
        break;
    case 2:
        if (func_0024E800(p + 0x4BF0) == 1 && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
        break;
    }
    func_002EF940(G, p + 0x5080);
}

extern float D_00569370[];

void func_003A5120(unsigned char *p) {
    int func_003ACB40(char *);
    void func_002EF940(int, char *);
    *(float *)(p + 0x4BE0) += *(float *)(p + 0x10);
    switch (p[6]) {
    case 0:
        p[6]++;
    case 1:
        if (!(*(float *)(p + 0x4BE0) <= D_00569370[p[0x4E17] * 12 + p[0x4E18] * 4])) {
            p[0x4E15] = 1;
        }
        if (p[0x4E15] == 1 && (unsigned char)func_003ACB40((char *)p) == 1) {
            p[0x4E15] = 0;
        }
        func_002EF940(*(int *)D_01CAFF0C, (char *)p + 0x5080);
        *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, (char *)p + 0x50);
        break;
    }
}

/* Pushes flagged entries up along their velocity once the player is above them. */
extern char D_01CAFF0C[];

extern float D_005695B0[];

void func_003A5B10(unsigned char *p) {
    int func_003ACB40(char *);
    void func_002EF940(int, char *);
    void func_003A5C70(unsigned char *);
    void func_003A5D20(unsigned char *, int);
    *(float *)(p + 0x4BE0) += *(float *)(p + 0x10);
    switch (p[6]) {
    case 0:
        p[6]++;
        func_003A5C70(p);
    case 1:
        if (*(float *)(p + 0x4BE0) > D_005695B0[p[0x4E17] * 12 + p[0x4E18] * 4]) {
            *(float *)(p + 0x4E08) = 40.0f;
            p[6]++;
        }
        func_003A5D20(p, 0);
        break;
    case 2:
        *(float *)(p + 0x4E08) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x4E08) < 0.0f) {
            p[0x4E15] = 1;
        }
        func_003A5D20(p, 1);
        if (p[0x4E15] == 1 && (unsigned char)func_003ACB40((char *)p) == 1) {
            p[0x4E15] = 0;
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, (char *)p + 0x5080);
    *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, (char *)p + 0x50);
}

extern float D_00569400[];

extern float D_00569404[];

void func_003A53F0(unsigned char *, int);

void func_003A5220(unsigned char *p) {
    int func_003ACB40(char *);
    void func_002EF940(int, char *);
    unsigned char go;
    int k;
    *(float *)(p + 0x4BE0) += *(float *)(p + 0x10);
    switch (p[6]) {
    case 0:
        p[6]++;
    case 1:
        k = p[0x4E17] * 12 + p[0x4E18] * 4;
        go = 0;
        if (*(float *)(p + 0x4BE0) > D_00569400[k]) {
            go = 1;
        }
        if (*(float *)(p + 0x4E20) < D_00569404[k]) {
            go = 1;
        }
        func_003A53F0(p, 0);
        if (p[0x4E15] == 1) {
            if ((unsigned char)func_003ACB40((char *)p) == 1) {
                p[0x4E15] = 0;
            }
        } else if (go == 1) {
            *(float *)(p + 0x4E08) = 40.0f;
            p[6]++;
        }
        break;
    case 2:
        *(float *)(p + 0x4E08) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x4E08) < 0.0f) {
            p[0x4E15] = 1;
        }
        func_003A53F0(p, 1);
        if (p[0x4E15] == 1 && (unsigned char)func_003ACB40((char *)p) == 1) {
            p[0x4E15] = 0;
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, (char *)p + 0x5080);
    *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, (char *)p + 0x50);
}

extern float D_00569640[];

extern float D_00569644[];

void func_003A60E0(unsigned char *, int);

void func_003A5F10(unsigned char *p) {
    int func_003ACB40(char *);
    void func_002EF940(int, char *);
    void func_003A5C70(unsigned char *);
    unsigned char go;
    int k;
    *(float *)(p + 0x4BE0) += *(float *)(p + 0x10);
    switch (p[6]) {
    case 0:
        p[6]++;
        func_003A5C70(p);
    case 1:
        k = p[0x4E17] * 12 + p[0x4E18] * 4;
        go = 0;
        if (*(float *)(p + 0x4BE0) > D_00569640[k]) {
            go = 1;
        }
        if (*(float *)(p + 0x4E20) < D_00569644[k]) {
            go = 1;
        }
        func_003A60E0(p, 0);
        if (p[0x4E15] == 1) {
            if ((unsigned char)func_003ACB40((char *)p) == 1) {
                p[0x4E15] = 0;
            }
        } else if (go == 1) {
            *(float *)(p + 0x4E08) = 40.0f;
            p[6]++;
        }
        break;
    case 2:
        *(float *)(p + 0x4E08) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x4E08) < 0.0f) {
            p[0x4E15] = 1;
        }
        func_003A60E0(p, 1);
        if (p[0x4E15] == 1 && (unsigned char)func_003ACB40((char *)p) == 1) {
            p[0x4E15] = 0;
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, (char *)p + 0x5080);
    *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, (char *)p + 0x50);
}

extern float D_005696D0[];

extern float D_005696D4[];

void func_003A6510(unsigned char *, int);

void func_003A6340(unsigned char *p) {
    int func_003ACB40(char *);
    void func_002EF940(int, char *);
    void func_003A5C70(unsigned char *);
    unsigned char go;
    int k;
    *(float *)(p + 0x4BE0) += *(float *)(p + 0x10);
    switch (p[6]) {
    case 0:
        p[6]++;
        func_003A5C70(p);
    case 1:
        k = p[0x4E17] * 12 + p[0x4E18] * 4;
        go = 0;
        if (*(float *)(p + 0x4BE0) > D_005696D0[k]) {
            go = 1;
        }
        if (*(float *)(p + 0x4E20) > D_005696D4[k]) {
            go = 1;
        }
        func_003A6510(p, 0);
        if (p[0x4E15] == 1) {
            if ((unsigned char)func_003ACB40((char *)p) == 1) {
                p[0x4E15] = 0;
            }
        } else if (go == 1) {
            *(float *)(p + 0x4E08) = 40.0f;
            p[6]++;
        }
        break;
    case 2:
        *(float *)(p + 0x4E08) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x4E08) < 0.0f) {
            p[0x4E15] = 1;
        }
        func_003A6510(p, 1);
        if (p[0x4E15] == 1 && (unsigned char)func_003ACB40((char *)p) == 1) {
            p[0x4E15] = 0;
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, (char *)p + 0x5080);
    *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, (char *)p + 0x50);
}

extern unsigned char D_00569230[];

extern char D_00569120[];

extern float D_00569280[];

void func_003B9E90(char *, char *, unsigned char, float);

static inline int state_is(unsigned char *o, int st) {
    return o[0x1B5] == st;
}

/* Wakes up to the level's count of idle slot objects with random presets and staggered delays. */
void func_003AB360(unsigned char *p) {
    int i;
    int cnt = 0;
    float delay = 0.0f;
    int k;
    for (i = 0; i < 16; i++) {
        switch (p[0x4E16]) {
        case 0xB:
            if (cnt < D_00569230[p[0x4E17] * 3 + p[0x4E18]]) {
                if (p[0x4DF0 + i] == 1 && state_is(*(unsigned char **)(p + 0x4DB0 + i * 4), 0) == 1) {
                    k = mt_rand() & 0xF;
                    if (k == 0) {
                        k++;
                        if (k > 15) {
                            k = 0;
                        }
                    }
                    func_003B9E90(*(char **)(p + 0x4DB0 + i * 4), D_00569120 + k * 16, i, delay);
                    cnt++;
                    delay += D_00569280[p[0x4E17] * 3 + p[0x4E18]];
                }
            } else {
                return;
            }
            break;
        case 0xA:
        case 0xC:
        case 0xD:
            break;
        }
    }
}

typedef struct PickRow {
    signed char id0[8];
    float w0[8];
    signed char id1[8];
    float w1[8];
} PickRow;

extern PickRow D_0056E190[][3];

/* Picks the next attack (weights in percent) for the current level and difficulty. */
void func_003AC910(unsigned char *p) {
    void func_003ACB40(unsigned char *);
    unsigned char ok = 1;
    float r = mt_rand() % 100;
    float acc = 0.0f;
    int i;
    for (i = 0; i < 8; i++) {
        if (p[0x4E1E] == 0) {
            PickRow *row = &D_0056E190[p[0x4E17]][p[0x4E18]];
            acc += row->w0[i];
            if (!(acc <= r)) {
                p[0x4E1A] = row->id0[i];
                if (*(signed char *)(p + 0x4E1A) == -1) {
                    p[0x4E1A] = 0;
                    ok = 0;
                }
                break;
            }
        } else {
            acc += D_0056E190[p[0x4E17]][p[0x4E18]].w1[i];
            if (!(acc <= r)) {
                p[0x4E1A] = D_0056E190[p[0x4E17]][p[0x4E18]].id1[i];
                if (*(signed char *)(p + 0x4E1A) == -1) {
                    p[0x4E1A] = 0;
                    ok = 0;
                }
                break;
            }
        }
    }
    if (ok == 1) {
        p[0x4E1B] = 0;
        func_003ACB40(p);
    } else {
        func_003ACB40(p);
    }
}

unsigned char func_003AC650(void);

unsigned char func_003AC6B0(char *);

int func_003AC6C0(char *p) {
    if (func_003AC650() == 1) {
        return 0;
    }
    if (func_003AC6B0(p) == 0 && *(unsigned short *)(p + 0x4E00) != 0) {
        return 0;
    }
    return 1;
}

int func_003AC6C0(char *p);

void func_003AA4C0(char *p) {
    void func_0034BA60(int, char *, signed char, int, int);
    void func_001AD140(char *);
    char *func_00207480(int, int, float *, int);
    unsigned char on = 0;
    if ((unsigned char)func_003AC6C0(p) == 1) {
        on = 1;
    } else if (*(unsigned short *)(p + 0x4E00) == 0) {
        on = 1;
    }
    if (on) {
        if (*(char **)(p + 0x4AE4) != 0) {
            char *e;
            func_001AD140(*(char **)(p + 0x4AE4));
            *(int *)(p + 0x4AE4) = 0;
            e = func_00207480(3, 0x330, 0, 0x10);
            if (e != 0) {
                *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x71C) + 0x104);
                *(unsigned char *)(e + 0x9A) = 0;
            }
            func_0034BA60(0x36, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        }
    } else if (*(char **)(p + 0x4AE4) == 0) {
        char *e;
        *(char **)(p + 0x4AE4) = func_00207480(3, 0x32F, 0, 0x20);
        e = *(char **)(p + 0x4AE4);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x71C) + 0x104);
            *(unsigned char *)(e + 0x9A) = 0;
            *(unsigned char *)(*(char **)(p + 0x4AE4) + 0x3A) = 1;
        }
    }
}

int func_0024E810(char *);

void func_00406F20(char *, float *);

extern unsigned char D_005692D8[];

void func_003A8C70(char *p) {
    void func_002EF940(int, char *);
    unsigned char func_0024E780(char *, int, int);
    void func_00105300(float *, char *);
    float m[16];
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) += 1;
        *(signed char *)(p + 0x4E19) = 0;
    case 1:
        if (func_0024E780(p + 0x4BF0, 0, 0) == 6) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            func_00105300(m, *(char **)(*(char **)(p + 0x718) + 0x104));
            m[13] = *(float *)(p + 0x4E24) + 5.0f;
            func_00406F20(p, m);
        }
        if ((unsigned char)func_0024E810(p + 0x4BF0) == 1) {
            if (*(signed char *)(p + 0x4E19) == D_005692D8[*(unsigned char *)(p + 0x4E17) * 3 + *(unsigned char *)(p + 0x4E18)]) {
                func_003AA990(p, 0x1F);
            } else {
                *(signed char *)(p + 0x4E19) += 1;
            }
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

extern float D_00568A20[], D_00568A24[], D_00568A28[], D_00568A30[], D_00568A34[], D_00568A38[], D_00568A40[], D_00568A44[], D_00568A48[];

void func_001318E0(float *, float *, float *);

void func_003AA6C0(char *p) {
    void func_00105230(float *, float *, float *);
    char *func_00207480(int, int, float *, int);
    float v90[4] __attribute__((aligned(16)));
    float v80[4] __attribute__((aligned(16)));
    float v70[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    int i;
    for (i = 0; i < 8; i++) {
        v90[0] = *(float *)((char *)D_00568A20 + i * 48);
        v90[1] = *(float *)((char *)D_00568A24 + i * 48);
        v90[2] = *(float *)((char *)D_00568A28 + i * 48);
        v90[3] = 1.0f;
        v80[0] = 6.283185f * (*(float *)((char *)D_00568A30 + i * 48) / 360.0f);
        v80[1] = 6.283185f * (*(float *)((char *)D_00568A34 + i * 48) / 360.0f);
        v80[2] = 6.283185f * (*(float *)((char *)D_00568A38 + i * 48) / 360.0f);
        v80[3] = 1.0f;
        v70[0] = *(float *)((char *)D_00568A40 + i * 48);
        v70[1] = *(float *)((char *)D_00568A44 + i * 48);
        v70[2] = *(float *)((char *)D_00568A48 + i * 48);
        v70[3] = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00131700(m, m, v80);
        func_00105230(m, m, v90);
        func_001318E0(m, m, v70);
        if (*(int *)((char *)(i * 4) + (int)p + 0x4AF4) == 0) {
            switch (i) {
            case 0: case 4: case 6:
                *(char **)((char *)(i * 4) + (int)p + 0x4AF4) = func_00207480(1, 0x143, m, 0x40);
                break;
            case 1: case 5: case 7:
                *(char **)((char *)(i * 4) + (int)p + 0x4AF4) = func_00207480(1, 0x159, m, 0x40);
                break;
            case 2: case 3: case 8: case 9:
                *(char **)((char *)(i * 4) + (int)p + 0x4AF4) = func_00207480(1, 0x15A, m, 0x40);
                break;
            }
        }
    }
}

extern float D_00568F20[], D_00568F24[], D_00568F28[], D_00569020[], D_00569024[], D_00569028[];

void func_003AAB30(char *p, unsigned char b, float *out, unsigned char c) {
    void func_00104B80(float *, char *, float *);
    float va0[4] __attribute__((aligned(16)));
    float v90[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    short a;
    a = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    va0[0] = 0.0f;
    va0[1] = 6.283185f * ((float)a / 65536.0f);
    va0[2] = 0.0f;
    va0[3] = 1.0f;
    func_00131700(m, m, va0);
    switch (*(unsigned char *)(p + 0x4BE4)) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 27: case 33: case 34:
        v90[0] = *(float *)((char *)D_00568F20 + b * 16);
        v90[1] = *(float *)((char *)D_00568F24 + b * 16);
        v90[2] = *(float *)((char *)D_00568F28 + b * 16);
        v90[3] = 1.0f;
        break;
    case 22: case 23: case 24: case 25: case 26: case 28: case 29: case 30: case 31: case 32: case 35: case 36: case 37: case 38:
        if (c == 0) {
            v90[0] = *(float *)((char *)D_00569020 + b * 16);
            v90[1] = *(float *)((char *)D_00569024 + b * 16);
            v90[2] = *(float *)((char *)D_00569028 + b * 16);
            v90[3] = 1.0f;
        } else {
            v90[0] = *(float *)((char *)D_00568F20 + b * 16);
            v90[1] = *(float *)((char *)D_00568F24 + b * 16);
            v90[2] = *(float *)((char *)D_00568F28 + b * 16);
            v90[3] = 1.0f;
        }
        break;
    }
    func_00104B80(out, (char *)m, v90);
    out[0] = out[0] + *(float *)(p + 0x50);
    out[1] = out[1] + *(float *)(p + 0x54);
    out[2] = out[2] + *(float *)(p + 0x58);
    out[3] = 1.0f;
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")
void func_003A9A80(char *p) {
    void func_00104B80(char *, float *, float *);
    float v[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    v[0] = -2.457f;
    v[2] = -39.76f;
    v[1] = 0.0f;
    v[3] = 1.0f;
    r[0] = 0.0f;
    r[1] = 6.283185f * (*(short *)(p + 0x90) / 65536.0f);
    r[3] = 1.0f;
    r[2] = 0.0f;
    UNIT(m);
    func_00131700(m, m, r);
    func_00104B80((char *)v, m, v);
    *(float *)(p + 0x50) = *(float *)(g + 0x50) + v[0];
    *(float *)(p + 0x54) = *(float *)(g + 0x54) + v[1];
    *(float *)(p + 0x58) = *(float *)(g + 0x58) + v[2];
    *(float *)(p + 0x5C) = 1.0f;
    *(short *)(g + 0x90) = *(short *)(p + 0x90) + 0x8001;
    *(float *)(g + 0x84) = 6.283185f * (*(short *)(g + 0x90) / 65536.0f);
}
#undef UNIT

char *func_00279290(char *);

void func_001A1E70(char *, int);

void func_001A2000(char *, int);

void func_003ABE80(char *p, unsigned char k) {
    if (k == 1) {
        func_001A2000(func_00279290(p + 0x880), 1);
    } else {
        func_001A1E70(func_00279290(p + 0x880), 1);
    }
}

typedef struct { float x, y, z, w; } V4i;

int func_003AC490(char *p, int k, V4i *out, float *r) {
    switch (k) {
    case 0:
        switch (*(unsigned char *)(p + 0x4BE4)) {
        case 0x23:
            return 0;
        }
        *out = *(V4i *)(p + 0x50);
        out->y += 100.0f;
        *r = 100.0f;
        return 1;
    }
    return 0;
}

extern char D_01DFABA0[];

void func_003305E0(char *, int, int, int, int, int, int);

void func_00206730(char *);

void func_003AC510(char *p) {
    char *func_00207480(int, int, char *, int);
    char *q;
    func_00206730(p + 0x4B14);
    if (*(char **)(p + 0x4B14) == 0) {
        *(char **)(p + 0x4B14) = func_00207480(3, 0xDC, 0, 16);
        q = *(char **)(p + 0x4B14);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x71C) + 0x104);
            q[0x9A] = 1;
            *(*(char **)(p + 0x4B14) + 0x3A) = 1;
        }
    }
    func_003305E0(D_01DFABA0, 0, 0x5B, (int)(p + 0x50), 0, 0, 0);
}

void func_003AC5B0(char *p) {
    void func_001AD140(char *);
    char *func_00207480(int, int, char *, int);
    char *q;
    func_00206730(p + 0x4B14);
    if (*(char **)(p + 0x4B14) != 0) {
        func_001AD140(*(char **)(p + 0x4B14));
        *(char **)(p + 0x4B14) = 0;
    }
    q = func_00207480(3, 0xDC, 0, 16);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x71C) + 0x104);
        q[0x9A] = 1;
        q[0x3A] = 1;
    }
    func_003305E0(D_01DFABA0, 0, 0x5D, (int)(p + 0x50), 0, 0, 0);
}

void func_003A71F0(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    *(float *)(p + 0x516C) = *(float *)(p + 0x516C) + *(float *)(p + 0x10);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            func_003AA990(p, 15);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003A88A0(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    int func_003ACB40(char *);
    void func_003AA8F0(char *);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1 && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            *(signed char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003A7110(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    *(float *)(p + 0x516C) = *(float *)(p + 0x516C) + *(float *)(p + 0x10);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        func_0024E800(p + 0x4BF0);
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003A7550(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    void func_003AA8F0(char *);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            *(signed char *)(p + 0x4E16) = 9;
            func_003AA8F0(p);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003ABEE0(char *p, int k) {
    if ((unsigned char)k == 1) {
        func_001A2000(func_00279290(p + 0x1480), 2);
        func_001A2000(func_00279290(p + 0x1480), 3);
    } else {
        func_001A1E70(func_00279290(p + 0x1480), 2);
        func_001A1E70(func_00279290(p + 0x1480), 3);
    }
}

void func_003A74C0(char *p) {
    void func_002EF940(int, char *);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0x5178) = 120.0f;
    case 1:
        *(float *)(p + 0x5178) = *(float *)(p + 0x5178) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x5178) < 0.0f) {
            func_003AA990(p, 0x12);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003A7420(char *p) {
    void func_002EF940(int, char *);
    void func_003AA8F0(char *);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0x5170) = 120.0f;
    case 1:
        *(float *)(p + 0x5170) = *(float *)(p + 0x5170) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x5170) < 0.0f) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            *(signed char *)(p + 0x4E16) = 9;
            func_003AA8F0(p);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003AB180(char *);

void func_003A8940(char *p) {
    char *func_00207480(int, int, char *, int);
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    void func_003AA8F0(char *);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        func_00207480(2, 0x97, *(char **)(*(char **)(p + 0x724) + 0x104), 16);
        func_003AB180(p);
    case 1:
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            switch (*(unsigned char *)(p + 0x4E1E)) {
            case 0:
                *(signed char *)(p + 0x4E16) = 0x11;
                break;
            case 1:
                *(signed char *)(p + 0x4E16) = 0;
                break;
            }
            func_003AA8F0(p);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003AA5E0(char *p) {
    void func_001AD140(char *);
    char *func_00207480(int, int, char *, int);
    char *q;
    if ((*(unsigned char *)(p + 0x4BE4) == 0x23 || *(unsigned char *)(p + 0x4BE4) == 0x24) && *(unsigned char *)(p + 0x5164) == 1) {
        if (*(char **)(p + 0x4AF0) == 0) {
            *(char **)(p + 0x4AF0) = func_00207480(3, 0x35C, 0, 16);
            q = *(char **)(p + 0x4AF0);
            if (q != 0) {
                *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x71C) + 0x104);
                q[0x9A] = 0;
                *(*(char **)(p + 0x4AF0) + 0x3A) = 1;
            }
        }
    } else if (*(char **)(p + 0x4AF0) != 0) {
        func_001AD140(*(char **)(p + 0x4AF0));
        *(char **)(p + 0x4AF0) = 0;
        q = func_00207480(3, 0x365, 0, 16);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x71C) + 0x104);
            q[0x9A] = 0;
        }
    }
}

void func_0042C9B0(char *, char *, int);

void func_003AB550(char *);

#define VGET3_30(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")
void func_003A8AC0(char *p) {
    char *func_00207480(int, int, char *, int);
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    int func_003ACB40(char *);
    void func_003AA8F0(char *);
    int func_0024E780(char *, int, int);
    void func_00105230(char *, char *, float *);
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    char *g;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        g = *(char **)D_01CAFF0C;
        v[0] = *(float *)(*(char **)(g + 0xC) + 0x50);
        v[1] = 10.0f + *(float *)(*(char **)(g + 0xC) + 0x2924);
        v[2] = *(float *)(*(char **)(g + 0xC) + 0x58);
        v[3] = 1.0f;
        UNIT(m);
        func_00105230((char *)m, (char *)m, v);
        func_00207480(3, 0x175, (char *)m, 0x10);
        VGET3_30(v, *(char **)(*(char **)(p + 0x724) + 0x104));
        v[3] = 1.0f;
        UNIT(m);
        func_00105230((char *)m, (char *)m, v);
        func_0042C9B0(p, (char *)m, *(int *)(p + 0x5190));
    case 1:
        if ((unsigned char)func_0024E780(p + 0x4BF0, 0, 0) == 5) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            func_003AB550(p);
        }
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1 && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}
#undef UNIT

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")
void func_003AA450(char *p) {
    void func_00105230(char *, char *, float *);
    float v[4] __attribute__((aligned(16)));
    UNIT(p + 0x4B60);
    QCOPY(v, p + 0x50);
    v[1] = 5.0f + *(float *)(p + 0x4E24);
    v[3] = 1.0f;
    func_00105230(p + 0x4B60, p + 0x4B60, v);
}
#undef UNIT

void func_0024DA80(char *, int, int);

void func_003AAAD0(char *p, int a, int b) {
    if (a >= 0 && b >= 0) {
        func_0024DA80(p + 0x4BF0, a, b);
        func_0024DA80(p + 0x4CC0, a, b);
    }
}

int func_003AC850(char *p) {
    int r;
    if (*(unsigned char *)(p + 0x5188) == 1) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x5189) == 1) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x518A) == 1) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x518B) == 1) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x518C) == 1) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x518D) == 1) {
        r = 1;
    } else if (*(unsigned char *)(p + 0x518E) == 1) {
        r = 1;
    } else {
        r = *(unsigned char *)(p + 0x518F) == 1;
    }
    return r;
}

void func_0044C030(float, char *, int);

extern unsigned char D_00569270[][3];

void func_003A81F0(char *p) {
    int func_0024E780(char *, int, int);
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    int func_003ACB40(char *);
    void func_003AA8F0(char *);
    int i;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
    case 1:
        if ((unsigned char)func_0024E780(p + 0x4BF0, 0, 0) == 3) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            for (i = 0; i < (D_00569270[0] + *(unsigned char *)(p + 0x4E18))[*(unsigned char *)(p + 0x4E17) * 3]; i++) {
                func_0044C030((float)i * 30.0f, p, *(int *)(*(char **)(p + 0x73C) + 0x104));
            }
        }
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1 && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

int func_00201770(char *, float *, float *, char *, int);

int func_003ABB60(char *p) {
    float v[4] __attribute__((aligned(16)));
    float h[4] __attribute__((aligned(16)));
    float t;
    QCOPY(v, p + 0x50);
    v[1] = v[1] + 100.0f;
    v[3] = 1.0f;
    if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, h, p + 0x4E28, 0x10) == 1) {
        *(float *)(p + 0x4E24) = h[1];
        if (*(unsigned char *)(p + 0x4BE4) == 0x24) return 0;
        t = *(float *)(p + 0x4E24);
        t += (float)(unsigned int)*(unsigned short *)(p + 0x4E00) * 10.0f;
        if (*(float *)(p + 0x54) > t) {
            if (*(float *)(p + 0x54) - t > 10.0f) {
                *(float *)(p + 0x54) = *(float *)(p + 0x54) - 5.0f;
            } else {
                *(float *)(p + 0x54) = t;
            }
        } else if (t - *(float *)(p + 0x54) > 10.0f) {
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + 5.0f;
        } else {
            *(float *)(p + 0x54) = t;
        }
    }
    return 1;
}

int func_003AD2F0(char *p) {
    switch (*(unsigned char *)(p + 0x4BE4)) {
    case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
        return 1;
    }
    return 0;
}

extern float D_00569490[];

extern float D_00569494[];

extern float D_00569498[];

extern float D_0056949C[];

void func_003A55B0(char *p) {
    void func_002EF940(int, char *);
    int func_003ACB40(char *);
    float tmp[4] __attribute__((aligned(16)));
    float t;
    float v;
    float d;
    float *dst;
    float *src;
    *(float *)(p + 0x4BE0) = *(float *)(p + 0x4BE0) + *(float *)(p + 0x10);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if (!(*(float *)(p + 0x4BE0) <= D_00569490[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4])) {
            *(unsigned char *)(p + 0x4E15) = 1;
        }
        if (*(float *)(p + 0x4E20) < D_00569494[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4]) {
            *(unsigned char *)(p + 0x4E15) = 1;
        }
        if (*(unsigned char *)(p + 0x4E15) == 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x4DA0), "r"(p + 0x50), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
            *(float *)(p + 0x4DA4) = 0.0f;
            func_00131650(p + 0x4DA0, p + 0x4DA0);
            *(float *)(p + 0x4DAC) = 1.0f;
            v = func_0034C160(*(float *)(p + 0x4D94), D_0056949C[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4], *(float *)(p + 0x10) * D_00569498[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4]);
            *(float *)(p + 0x4D94) = v;
            t = v * v;
            d = *(float *)(p + 0x4E20) - D_00569494[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4];
            if (!(d <= 0.0f)) {
                if (d < t) {
                    t = d;
                    *(unsigned char *)(p + 0x4E15) = 1;
                }
            } else {
                t = 0.0f;
                *(unsigned char *)(p + 0x4E15) = 1;
            }
            src = (float *)(p + 0x4DA0);
            dst = tmp;
            asm {
                lqc2 vf4, 0x0(src)
                mfc1 t0, t
                nop
                qmtc2.ni t0, vf5
                vmulx.xyzw vf6, vf4, vf5x
                sqc2 vf6, 0x0(dst)
            }
            *(float *)(p + 0x50) = *(float *)(p + 0x50) + tmp[0] * *(float *)(p + 0x10);
            *(float *)(p + 0x58) = *(float *)(p + 0x58) + tmp[2] * *(float *)(p + 0x10);
        }
        if (*(unsigned char *)(p + 0x4E15) == 1 && (unsigned char)func_003ACB40(p) == 1) {
            *(unsigned char *)(p + 0x4E15) = 0;
        }
        func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
        *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
        break;
    }
}

extern float D_00569520[];

extern float D_00569524[];

extern float D_00569528[];

extern float D_0056952C[];

void func_003A5860(char *p) {
    void func_002EF940(int, char *);
    int func_003ACB40(char *);
    float tmp[4] __attribute__((aligned(16)));
    float t;
    float v;
    float d;
    float *dst;
    float *src;
    *(float *)(p + 0x4BE0) = *(float *)(p + 0x4BE0) + *(float *)(p + 0x10);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if (!(*(float *)(p + 0x4BE0) <= D_00569520[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4])) {
            *(unsigned char *)(p + 0x4E15) = 1;
        }
        if (!(*(float *)(p + 0x4E20) <= D_00569524[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4])) {
            *(unsigned char *)(p + 0x4E15) = 1;
        }
        if (*(unsigned char *)(p + 0x4E15) == 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x4DA0), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50), "r"(p + 0x50) : "memory");
            *(float *)(p + 0x4DA4) = 0.0f;
            func_00131650(p + 0x4DA0, p + 0x4DA0);
            *(float *)(p + 0x4DAC) = 1.0f;
            v = func_0034C160(*(float *)(p + 0x4D94), D_0056952C[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4], *(float *)(p + 0x10) * D_00569528[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4]);
            *(float *)(p + 0x4D94) = v;
            t = v * v;
            d = D_00569524[*(unsigned char *)(p + 0x4E17) * 12 + *(unsigned char *)(p + 0x4E18) * 4] - *(float *)(p + 0x4E20);
            if (!(d <= 0.0f)) {
                if (d < t) {
                    t = d;
                    *(unsigned char *)(p + 0x4E15) = 1;
                }
            } else {
                t = 0.0f;
                *(unsigned char *)(p + 0x4E15) = 1;
            }
            src = (float *)(p + 0x4DA0);
            dst = tmp;
            asm {
                lqc2 vf4, 0x0(src)
                mfc1 t0, t
                nop
                qmtc2.ni t0, vf5
                vmulx.xyzw vf6, vf4, vf5x
                sqc2 vf6, 0x0(dst)
            }
            *(float *)(p + 0x50) = *(float *)(p + 0x50) + tmp[0] * *(float *)(p + 0x10);
            *(float *)(p + 0x58) = *(float *)(p + 0x58) + tmp[2] * *(float *)(p + 0x10);
        }
        if (*(unsigned char *)(p + 0x4E15) == 1 && (unsigned char)func_003ACB40(p) == 1) {
            *(unsigned char *)(p + 0x4E15) = 0;
        }
        func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
        *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
        break;
    }
}

void func_00407D80(char *, char *);

void func_003A6F20(char *);

void func_003A90A0(char *p) {
    void func_001AD140(char *);
    void func_00105300(char *, char *);
    void func_0034BA60(int, char *, int, int, int);
    char *func_00207480(int, int, int, int);
    void func_002EF940(int, char *);
    void func_003AA8F0(char *);
    char m[64] __attribute__((aligned(16)));
    char *e;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        func_00105300(m, *(char **)(*(char **)(p + 0x718) + 0x104));
        *(float *)(m + 0x34) = 5.0f + *(float *)(p + 0x4E24);
        func_00407D80(p, m);
        *(char **)(p + 0x4AE8) = func_00207480(3, 0x30E, 0, 0x10);
        if ((e = *(char **)(p + 0x4AE8)) != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x72C) + 0x104);
            *(unsigned char *)(e + 0x9A) = 0;
        }
        *(float *)(p + 0x4BE0) = 75.0f;
        *(float *)(p + 0x5180) = 40.0f;
        *(float *)(p + 0x5184) = 4.0f;
        *(unsigned char *)(p + 7) = 0;
    case 1:
        switch (*(unsigned char *)(p + 7)) {
        case 0:
            *(float *)(p + 0x5184) = *(float *)(p + 0x5184) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x5184) < 0.0f) {
                func_0034BA60(0x55, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
                *(float *)(p + 0x5184) = 4.0f;
                *(unsigned char *)(p + 7) = *(unsigned char *)(p + 7) + 1;
            }
            break;
        case 1:
            *(float *)(p + 0x5184) = *(float *)(p + 0x5184) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x5184) < 0.0f) {
                func_0034BA60(0x22, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
                *(float *)(p + 0x5184) = 52.0f;
                *(unsigned char *)(p + 7) = *(unsigned char *)(p + 7) + 1;
            }
            break;
        case 2:
            *(float *)(p + 0x5184) = *(float *)(p + 0x5184) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x5184) < 0.0f) {
                func_0034BA60(0x23, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
                func_0034BA60(0x24, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
                *(unsigned char *)(p + 7) = *(unsigned char *)(p + 7) + 1;
            }
            break;
        case 3:
            break;
        }
        *(float *)(p + 0x5180) = *(float *)(p + 0x5180) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x5180) < 0.0f && *(unsigned char *)(p + 0x5166) == 0) {
            *(unsigned char *)(p + 0x5166) = 1;
            func_003A6F20(p);
        }
        *(float *)(p + 0x4BE0) = *(float *)(p + 0x4BE0) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x4BE0) < 0.0f) {
            if (*(char **)(p + 0x4AE8) != 0) {
                *(unsigned char *)(*(char **)(p + 0x4AE8) + 0x3A) = 1;
                func_001AD140(*(char **)(p + 0x4AE8));
                *(char **)(p + 0x4AE8) = 0;
            }
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 9;
            func_003AA8F0(p);
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003AD570(char **h) {
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

void func_003AD5C0(char **h) {
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

void func_003A7290(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    *(float *)(p + 0x516C) = *(float *)(p + 0x516C) + *(float *)(p + 0x10);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            func_003AA990(p, 15);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003A7330(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    *(float *)(p + 0x516C) = *(float *)(p + 0x516C) + *(float *)(p + 0x10);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            func_003AA990(p, 15);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003A8A20(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    int func_003ACB40(char *);
    void func_003AA8F0(char *);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1 && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            *(signed char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003A8D90(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    int func_003ACB40(char *);
    void func_003AA8F0(char *);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1 && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(signed char *)(p + 0x4E1B) = 0;
            *(signed char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

void func_003A7180(char *p) {
    int func_0024E800(char *);
    void func_002EF940(int, char *);
    *(float *)(p + 0x516C) = *(float *)(p + 0x516C) + *(float *)(p + 0x10);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        func_0024E800(p + 0x4BF0);
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005AF6F0[];

extern char D_005AF714[];

extern char D_005AF794[];

extern char D_005AF828[];

extern char D_005AF8F4[];

extern char D_005AF9AC[];

void func_001003E0();

void func_0013D240();

void func_00204A70();

void func_00204C70();

void func_0024D9A0();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_002E7C40();

void func_002E8A50();

void func_00313E60();

void func_0031E4E0();

void func_00320590();

void func_00401030();

char *func_003AD390(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005AF6F0;
        *(char * *)(p + 64) = D_005AF714;
        *(char * *)(p + 160) = D_005AF794;
        *(char * *)(p + 208) = D_005AF828;
        *(char * *)(p + 304) = D_005AF8F4;
        *(char * *)(p + 464) = D_005AF9AC;
        func_00313E60(p + 20804, -1);
        func_002E8A50(p + 20780, -1);
        func_002E7C40(p + 20704, -1);
        func_0028C1A0(p + 20064, -1);
        func_001003E0(p + 19440, (void *)func_0024D9A0, 208, 2);
        func_001003E0(p + 14944, (void *)func_00204A70, 192, 20);
        func_001003E0(p + 11104, (void *)func_00204A70, 192, 20);
        func_001003E0(p + 10304, (void *)func_00204C70, 160, 5);
        func_001003E0(p + 9024, (void *)func_00204C70, 160, 8);
        func_001003E0(p + 8544, (void *)func_00204C70, 160, 3);
        func_001003E0(p + 8320, (void *)func_00401030, 28, 2);
        func_002791E0(p + 6784, -1);
        func_002791E0(p + 5248, -1);
        func_002791E0(p + 3712, -1);
        func_002791E0(p + 2176, -1);
        func_001003E0(p + 532, (void *)func_0013D240, 16, 75);
        func_0031E4E0(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_003A73D0(p0) char *p0; {
    void func_002EF940();
    int v0;
    *(float *)(p0 + 20844) = (*(float *)(p0 + 20844) + *(float *)(p0 + 16));
    v0 = *(unsigned char *)(p0 + 6);
    switch (v0) {
    case 0:
        *(char *)(p0 + 6) = (v0 + 1);
        break;
    case 1:
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, (p0 + 20608));
}

void func_003A75E0(p0) char *p0; {
    int func_0024E800();
    int func_003AA8F0();
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 6);
    switch (v1) {
    default:
        return;
    case 0:
        *(char *)(v0 + 6) = (v1 + 1);
        /* fall through */
    case 1:
        v2 = func_0024E800((v0 + 19440));
        if ((v2 & 255) == 1) {
            *(char *)(v0 + 19994) = -1;
            *(char *)(v0 + 19995) = 0;
            *(char *)(v0 + 19990) = 0;
            v2 = func_003AA8F0(v0);
        }
        return;
    }
}

void func_003A7660(p0) char *p0; {
    int v0;
    v0 = *(unsigned char *)(p0 + 6);
    switch (v0) {
    default:
        return;
    case 0:
        *(char *)(p0 + 6) = (v0 + 1);
        /* fall through */
    case 1:
        return;
    }
}

int func_003A9BC0(p0) char *p0; {
    int func_0024E800();
    int func_003AA8F0();
    int func_003ACB40();
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 6);
    switch (v1) {
    case 0:
        *(char *)(v0 + 6) = (v1 + 1);
        *(char *)(v0 + 20836) = 0;
        /* fall through */
    case 1:
        v2 = func_0024E800((v0 + 19440));
        tmp0 = (v2 & 255);
        v3 = (int)v0;
        if (tmp0 == 1) {
            v2 = func_003ACB40(v3);
            if ((v2 & 255) == 0) {
                *(char *)(v0 + 19994) = -1;
                *(char *)(v0 + 19995) = 0;
                *(char *)(v0 + 19990) = 0;
                v2 = func_003AA8F0(v0);
            }
        }
        break;
    }
    return v2;
}

int func_003B98C0(int, char *, int, int, int, float);

int func_003AB610(char *p0, char *p1, int p2, int p3, int p4, int p5, int p6, int p7, float f1, float f2, float f3) {
    int v0;
    int v1;
    v1 = 0;
    if (*(unsigned short *)(p0 + 19968) > 0) {
        do {
            if (*(unsigned char *)((p0 + v1) + 19952) == 1) {
                v0 = func_003B98C0(*(int *)((char *)((v1 << 2) + (int)p0) + 19888), p1, p2, 1, v1, *(float *)(p1 + 4));
                break;
            }
            v1 = (v1 + 1);
        } while ((v1 < 16));
    }
    return v0;
}

void func_003ABCC0(p0) char *p0; {
    int func_00207480();
    int v0;
    char *v1;
    float v2;
    char *v3;
    char *v4;
    int tmp0;
    int tmp2;
    v0 = (*(unsigned char *)(p0 + 19428) + -10);
    v1 = p0;
    switch (v0) {
    case 0:
    case 1:
        v2 = 240.0f;
        if (*(float *)(v1 + 20844) > v2) {
            *(char *)(v1 + 20877) = 1;
        }
        if (*(unsigned char *)(v1 + 20835) == 0) {
            tmp0 = func_00207480(1, 107, 0, 16);
            *(int *)(v1 + 19180) = tmp0;
            v4 = *(char **)(v1 + 19180);
            if (v4 != 0) {
                *(int *)(v4 + 144) = *(int *)(*(char **)(v1 + 1816) + 260);
                *(char *)(v4 + 154) = 1;
            }
            *(char *)(v1 + 20835) = 1;
        }
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        v2 = 360.0f;
        if (*(float *)(v1 + 20844) > v2) {
            *(char *)(v1 + 20877) = 1;
        }
        if (*(unsigned char *)(v1 + 20835) == 0) {
            tmp2 = func_00207480(1, 704, 0, 16);
            *(int *)(v1 + 19180) = tmp2;
            v3 = *(char **)(v1 + 19180);
            if (v3 != 0) {
                *(int *)(v3 + 144) = *(int *)(*(char **)(v1 + 1816) + 260);
                *(char *)(v3 + 154) = 1;
            }
            *(char *)(v1 + 20835) = 1;
        }
        break;
    default:
        *(int *)(v1 + 20844) = 0;
        *(char *)(v1 + 20835) = 0;
        break;
    }
}

void func_003ABE00(p0) char *p0; {
    float v0;
    int v1;
    int tmp0;
    v0 = *(float *)(p0 + 20692);
    if (v0 > 5000.0f) {
        *(char *)(p0 + 19992) = 0;
    } else {
        if (v0 > 2000.0f) {
            if (*(unsigned char *)(p0 + 20837) == 0) {
                tmp0 = *(unsigned char *)(p0 + 19992);
                v1 = 1;
                if (tmp0 == 0) {
                    *(char *)(p0 + 20879) = v1;
                }
            }
            *(char *)(p0 + 19992) = 1;
        } else {
            *(char *)(p0 + 19992) = 2;
        }
    }
}

int func_003AD340(p0, p1) int p0; int p1; {
    char *v0;
    v0 = 0;
    if ((p1 < 24)) {
        v0 = (char *)(p1 << 2);
        v0 = (v0 + p0);
        v0 = *(char **)(v0 + 1816);
    }
    return (int)v0;
}

void func_003A9E40(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_003A3590();

void func_003AD610(char *p) { func_003A3590(p + -64); }

extern void func_003AD360();

void func_003AD620(char *p) { func_003AD360(p + -64); }

extern void func_003AD370();

void func_003AD630(char *p) { func_003AD370(p + -64); }

extern void func_003AC480();

void func_003AD650(char *p) { func_003AC480(p + -64); }

extern void func_003AC2F0();

void func_003AD660(char *p) { func_003AC2F0(p + -64); }

extern void func_003AC140();

void func_003AD670(char *p) { func_003AC140(p + -64); }

extern void func_003AC430();

void func_003AD680(char *p) { func_003AC430(p + -64); }

extern void func_003AC040();

void func_003AD6C0(char *p) { func_003AC040(p + -304); }

extern void func_003AA380();

void func_003AD6F0(char *p) { func_003AA380(p + -304); }

void func_003AD700(char *p) { func_003AC2F0(p + -304); }

void func_003AD710(char *p) { func_003AC140(p + -304); }

void func_003AD720(char *p) { func_003AC430(p + -304); }

extern void func_003AC760();

void func_003AD740(char *p) { func_003AC760(p + -464); }

extern void func_003AC730();

void func_003AD750(char *p) { func_003AC730(p + -464); }

extern void func_003AD380();

void func_003AD760(char *p) { func_003AD380(p + -464); }

void func_003AD780(char *p0) {
    *(char *)(p0 + 20) = 0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 32)) : "memory");
    *(int *)(p0 + 24) = 0;
}
