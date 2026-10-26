#include "game/mt_rand.h"
extern char D_005A77A0[];

extern char D_005A78F8[];

extern char D_005B14D0[];

extern char D_005B14F4[];

extern char D_005B1574[];

extern char D_005B1608[];

extern char D_005B16D4[];

extern char D_005B178C[];

void func_001003E0();

void func_00100580();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_002E7C40();

void func_002E8A50();

void func_00313E60();

void func_0031E4E0();

void func_00320590();

void func_00401030();

char *func_003DDC80(char *p, short flag) {
    void func_0013D240();
    if (p != 0) {
        *(char **)p = D_005B14D0;
        *(char **)(p + 64) = D_005B14F4;
        *(char **)(p + 160) = D_005B1574;
        *(char **)(p + 208) = D_005B1608;
        *(char **)(p + 304) = D_005B16D4;
        *(char **)(p + 464) = D_005B178C;
        func_0028C1A0((p + 3024), -1);
        func_00313E60((p + 2996), -1);
        func_002E8A50((p + 2972), -1);
        func_002E7C40((p + 2896), -1);
        if (p + 2528 != 0) {
            *(char **)(p + 2544) = D_005A78F8;
            if (p + 2528 != 0) {
                *(char **)(p + 2544) = D_005A77A0;
            }
        }
        func_00401030((p + 2368), -1);
        func_002791E0((p + 832), -1);
        func_001003E0((p + 532), (void *)func_0013D240, 16, 8);
        func_0031E4E0((p + 464), 0);
        func_00320590((p + 304), 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

float func_0034C160(float, float, float);

int func_003DC100(char *p, float *t) {
    void func_00131650(float *, float *);
    float func_00132470(float *, char *);
    float tmp[4] __attribute__((aligned(16)));
    float s;
    float u;
    if (func_00132470(t, p + 0x50) < 50.0f) {
        *(float *)(p + 0xEDC) = 0.0f;
        return 1;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0xEB0), "r"(p + 0x50), "r"(t) : "memory");
    func_00131650((float *)(p + 0xEB0), (float *)(p + 0xEB0));
    *(float *)(p + 0xEBC) = 1.0f;
    s = func_0034C160(*(float *)(p + 0xEDC), 5.0f, 0.1f * *(float *)(p + 0x10));
    *(float *)(p + 0xEDC) = s;
    u = s > 1.0f ? s * s : s;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0xEB0), "f"(u) : "t0", "memory");
    *(float *)(p + 0x50) += tmp[0];
    *(float *)(p + 0x58) += tmp[2];
    *(float *)(p + 0x5C) = 1.0f;
    return 0;
}

/* Pushes flagged entries up along their velocity once the player is above them. */
extern char D_01CAFF0C[];

static inline char *plDC2(int i) { return ((char **)(*(char **)D_01CAFF0C + 0xC))[i]; }

void func_003DC220(char *p) {
    void func_002EF940(int, char *);
    short func_0034B940(char *, char *);
    void func_00131700(char *, char *, char *);
    void func_00104B80(float *, float *, float *);
    void func_0034BA60(int, char *, int, int, int);
    float r[4];
    float v[4];
    float m[16] __attribute__((aligned(16)));
    unsigned char done;
    short s;
    float x;
    done = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0034BA60(0x4D, p + 0x50, 0x35, 0, 1);
        if (mt_rand() & 1) {
            func_0034BA60(0x4E, p + 0x50, 0x35, 0, 1);
        }
    case 1:
        *(float *)(p + 0x54) = 110.0f;
        s = (short)(func_0034B940(plDC2(*(unsigned char *)(p + 0xF02)) + 0x50, p + 0x50) - 0x8000 - 0x4001);
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        r[0] = 0.0f;
        r[1] = 6.283185f * ((float)s / 65536.0f);
        r[3] = 1.0f;
        r[2] = 0.0f;
        func_00131700((char *)m, (char *)m, (char *)r);
        v[2] = 3.0f;
        v[3] = 1.0f;
        v[0] = 0.0f;
        v[1] = 0.0f;
        func_00104B80((float *)(p + 0x60), m, v);
        x = *(float *)(p + 0x50) + *(float *)(p + 0x60) * *(float *)(p + 0x10);
        if (500.0f < x && x < 4500.0f) {
            *(float *)(p + 0x50) = x;
        } else {
            done = 1;
        }
        x = *(float *)(p + 0x58) + *(float *)(p + 0x68) * *(float *)(p + 0x10);
        if (500.0f < x && x < 4500.0f) {
            *(float *)(p + 0x58) = x;
        } else {
            done = 1;
        }
        *(short *)(p + 0x90) = s;
        if ((unsigned char)done == 0) {
            if ((*(float *)(p + 0xEC4) -= *(float *)(p + 0x10)) < 0.0f) {
                *(unsigned char *)(p + 0xF05) = 1;
            }
        } else {
            *(unsigned char *)(p + 0xF0B) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0xAF0);
}

void func_003DB330(unsigned char *);

void func_003DB220(unsigned char *p) {
    if (p[0xEFD] == 5) {
        return;
    }
    p[0xEFD] = 5;
    p[5] = 0;
    func_003DB330(p);
    *(float *)(p + 0xEC4) += mt_rand() % 60;
    p[0x1E1] = 1;
}

void func_003DADF0(unsigned char *);

void func_003DAE70(unsigned char *);

int func_003C5400(char *);

void func_003DB0B0(unsigned char *);

void func_003DAC90(unsigned char *p) {
    switch (mt_rand() % 3) {
    case 0:
        func_003DADF0(p);
        break;
    case 1:
        func_003DAE70(p);
        break;
    case 2:
        if (p[0xEFC]) {
            if (*(char **)(p + 0x308) != 0) {
                if ((unsigned char)func_003C5400(*(char **)(p + 0x308)) == 1) {
                    func_003DB0B0(p);
                    (*(unsigned char **)(p + 0x308))[0x1CF6]++;
                } else {
                    func_003DAE70(p);
                }
            }
        } else {
            func_003DB0B0(p);
        }
        break;
    }
}

extern char D_01CAFF0C[];

void func_003DCF70(unsigned char *p) {
    void func_002F2D30(char *, unsigned char *);
    switch (p[5]) {
    case 0:
        if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
            func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
        }
        *(float *)(p + 0xEC4) = mt_rand() % 5;
        p[5]++;
        break;
    case 1:
        *(float *)(p + 0xEC4) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0xEC4) < 0.0f) {
            func_00207470(3, 0x397, (char *)p + 0x9A0);
            *(float *)(p + 0xEC4) = 5.0f;
            p[5]++;
        }
        break;
    case 2:
        *(float *)(p + 0xEC4) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0xEC4) < 0.0f) {
            p[4]++;
        }
        break;
    }
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

static inline char *plr(unsigned char i) {
    return ((char **)(*(char **)D_01CAFF0C + 0xC))[i];
}

void func_003DB8C0(char *p) {
    int func_0034B940(char *, char *);
    void func_00131760(float *, float *, float *);
    void func_00104B80(char *, float *, float *);
    void func_00131650(char *, char *);
    float m[16] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    short a;
    if (*(unsigned char *)(p + 0xEFD) == 10) return;
    *(float *)(p + 0xEC4) = 40.0f;
    *(unsigned char *)(p + 0xEFD) = 10;
    *(unsigned char *)(p + 0xF06) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 0xEFE) = 1;
    *(unsigned char *)(p + 0xEFF) = 0x80;
    UNIT(m);
    a = func_0034B940(p + 0x50, plr(*(unsigned char *)(p + 0xF02)) + 0x50);
    r[2] = 0.0f;
    r[0] = -0.6981317f;
    r[1] = 6.283185f * (a / 65536.0f);
    r[3] = 1.0f;
    func_00131760(m, m, r);
    v[2] = 1.0f;
    v[3] = 1.0f;
    v[0] = 0.0f;
    v[1] = 0.0f;
    func_00104B80(p + 0x60, m, v);
    func_00131650(p + 0x60, p + 0x60);
    *(float *)(p + 0xEDC) = 4.0f;
    *(float *)(p + 0xEE0) = 0.0f;
    *(unsigned char *)(p + 0x1E1) = 1;
}

/* Wanders inside the 500..4500 square; leaving it (or the timer / distance) ends the state. */
typedef struct Walker { char pad[0x50]; char pos[0x10]; } Walker;

void func_003DC500(Walker *q) {
    void func_0034BA60(int, char *, signed char, int, int);
    void func_002EF940(int, char *);
    unsigned char *p = (unsigned char *)q;
    unsigned char out = 0;
    float x;
    switch (p[5]) {
    case 0:
        p[5]++;
        func_0034BA60(0x4D, q->pos, 0x35, 0, 1);
        if (mt_rand() & 1) {
            func_0034BA60(0x4E, q->pos, 0x35, 0, 1);
        }
    case 1:
        *(float *)(p + 0x54) = 110.0f;
        x = *(float *)(p + 0x50) + *(float *)(p + 0x60) * *(float *)(p + 0x10);
        if (500.0f < x && x < 4500.0f) {
            *(float *)(p + 0x50) = x;
        } else {
            out = 1;
        }
        x = *(float *)(p + 0x58) + *(float *)(p + 0x68) * *(float *)(p + 0x10);
        if (500.0f < x && x < 4500.0f) {
            *(float *)(p + 0x58) = x;
        } else {
            out = 1;
        }
        if (out == 0) {
            *(float *)(p + 0xEC4) -= *(float *)(p + 0x10);
            if (*(float *)(p + 0xEC4) < 0.0f) {
                p[0xF05] = 1;
            }
            if (*(float *)(p + 0xEE4) < 200.0f) {
                p[0xF05] = 1;
            }
        } else {
            p[0xF0B] = 1;
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, (char *)p + 0xAF0);
}

void func_003DD120(Walker *q) {
    void func_0034BA60(int, char *, signed char, int, int);
    void func_00105230(float *, float *, float *);
    char *func_00207480(int, int, float *, int);
    unsigned char *p = (unsigned char *)q;
    unsigned char out;
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    switch (p[5]) {
    case 0:
        *(float *)(p + 0xEC4) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0xEC4) < 0.0f) {
            v[0] = *(float *)(p + 0x50);
            v[1] = -45.0f;
            v[2] = *(float *)(p + 0x58);
            v[3] = 1.0f;
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
            func_00105230(m, m, v);
            func_00207480(3, 0x146, m, 16);
            if (mt_rand() & 1) {
                func_0034BA60(0x4E, q->pos, 0x35, 0, 1);
            }
            func_0034BA60(0x4C, q->pos, 0x35, 0, 1);
            *(float *)(p + 0xEC4) = 60.0f;
            p[5]++;
        }
        break;
    case 1:
        out = 0;
        if (!(500.0f <= *(float *)(p + 0x50)) || !(*(float *)(p + 0x50) <= 4500.0f)) {
            out = 1;
        }
        if (!(500.0f <= *(float *)(p + 0x58)) || !(*(float *)(p + 0x58) <= 4500.0f)) {
            out = 1;
        }
        if (out == 0) {
            *(float *)(p + 0x54) += *(float *)(p + 0x10) * 5.1666665f;
            *(float *)(p + 0xEC4) -= *(float *)(p + 0x10);
            if (*(float *)(p + 0xEC4) < 0.0f) {
                p[0xF05] = 1;
            }
        } else {
            p[0xF0B] = 1;
        }
        break;
    }
}

void func_003DA7C0(char *p) {
    char *q;
    if (*(unsigned char *)(p + 0xEFC) != 1) {
        return;
    }
    q = *(char **)(p + 0x308);
    if (q == 0) {
        return;
    }
    if (*(unsigned char *)(q + 0x1CE1) != 1) {
        return;
    }
    switch (*(unsigned char *)(q + 0x1CE2)) {
    case 0:
        break;
    case 1:
        if (*(unsigned char *)(p + 0xF00) % 2 == 0) {
            *(unsigned char *)(p + 0xF0D) = 1;
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0xF00) % 2 != 0) {
            *(unsigned char *)(p + 0xF0D) = 1;
        }
        break;
    case 3:
        *(unsigned char *)(p + 0xF0D) = 1;
        break;
    case 4:
        *(unsigned char *)(p + 0xF0B) = 1;
        break;
    }
}

void func_003DB7E0(char *p) {
    void func_00131650(char *, char *);
    void func_00131760(float *, float *, float *);
    void func_00104B80(char *, float *, float *);
    float m[16];
    float r[4];
    float v[4];
    if (*(unsigned char *)(p + 0xEFD) == 8) {
        return;
    }
    *(float *)(p + 0xEC4) = 40.0f;
    *(unsigned char *)(p + 0xEFD) = 8;
    *(unsigned char *)(p + 5) = 0;
    UNIT(m);
    r[0] = -1.5707962f;
    r[3] = 1.0f;
    r[1] = 0.0f;
    r[2] = 0.0f;
    func_00131760(m, m, r);
    v[2] = 1.0f;
    v[3] = 1.0f;
    v[0] = 0.0f;
    v[1] = 0.0f;
    func_00104B80(p + 0x60, m, v);
    func_00131650(p + 0x60, p + 0x60);
    *(float *)(p + 0xEDC) = 4.0f;
    *(int *)(p + 0xEE0) = 0;
    *(unsigned char *)(p + 0x1E1) = 1;
}

static inline char *pl3DB(int i) { return ((char **)(*(char **)D_01CAFF0C + 0xC))[i]; }

void func_003DBA00(char *p) {
    char *func_00207480(int, int, float *, int);
    void func_00105230(float *, float *, char *);
    void func_00131700(float *, float *, float *);
    float m[16] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    char *q;
    char *w;
    *(unsigned char *)(p + 0xEFD) = 9;
    *(float *)(p + 0xEC4) = 0.0f;
    if (*(unsigned char *)(p + 0xEFC) == 1 && (w = *(char **)(p + 0x308)) != 0 && *(unsigned char *)(w + 0x1CE1) == 1) {
        *(float *)(p + 0xEC4) = *(float *)(p + 0xEC4) + (float)(mt_rand() % 60U);
    }
    *(unsigned char *)(p + 0xF06) = 0;
    *(unsigned char *)(p + 5) = 0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    r[0] = 1.5707963f;
    r[3] = 1.0f;
    r[1] = 0.0f;
    r[2] = 0.0f;
    func_00131700(m, m, r);
    func_00105230(m, m, p + 0x50);
    func_00207480(3, 0x12E, m, 0x10);
    q = pl3DB(*(unsigned char *)(p + 0xF02)) + 0x50;
    *(float *)(p + 0x50) = *(float *)q + ((float)(mt_rand() % 600U) - 300.0f);
    *(float *)(p + 0x54) = -200.0f;
    q = pl3DB(*(unsigned char *)(p + 0xF02)) + 0x50;
    *(float *)(p + 0x58) = *(float *)(q + 8) + ((float)(mt_rand() % 600U) - 300.0f);
    *(float *)(p + 0x5C) = 1.0f;
    *(unsigned char *)(p + 0x1E1) = 0;
}

void func_003DCB00(char *p) {
    unsigned char func_002EF940(char *p, char *s);
    float tmp[4] __attribute__((aligned(16)));
    float s;
    float q;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
    case 1:
        s = func_0034C160(*(float *)(p + 0xEDC), 5.0f, *(float *)(p + 0x10));
        q = s * s;
        *(float *)(p + 0xEDC) = s;
        if (!(q <= 5.0f)) q = 5.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x60), "f"(q) : "t0", "memory");
        *(float *)(p + 0x50) += tmp[0] * *(float *)(p + 0x10);
        *(float *)(p + 0x54) += *(float *)(p + 0x10) * (tmp[1] + *(float *)(p + 0xEE0));
        *(float *)(p + 0x58) += tmp[2] * *(float *)(p + 0x10);
        *(float *)(p + 0xEE0) += -0.8f * *(float *)(p + 0x10);
        if (*(float *)(p + 0x54) < 110.0f) *(float *)(p + 0x54) = 110.0f;
        if ((*(float *)(p + 0xEC4) -= *(float *)(p + 0x10)) < 0.0f) *(unsigned char *)(p + 0xF05) = 1;
        break;
    }
    func_002EF940(*(char **)D_01CAFF0C, p + 0xAF0);
}

void func_003DCC70(char *p) {
    unsigned char func_002EF940(char *p, char *s);
    float tmp[4] __attribute__((aligned(16)));
    float s;
    float q;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
    case 1:
        s = func_0034C160(*(float *)(p + 0xEDC), 20.0f, 4.0f * *(float *)(p + 0x10));
        q = s * s;
        *(float *)(p + 0xEDC) = s;
        if (!(q <= 20.0f)) q = 20.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x60), "f"(q) : "t0", "memory");
        *(float *)(p + 0x50) += tmp[0] * *(float *)(p + 0x10);
        *(float *)(p + 0x54) += *(float *)(p + 0x10) * (tmp[1] + *(float *)(p + 0xEE0));
        *(float *)(p + 0x58) += tmp[2] * *(float *)(p + 0x10);
        *(float *)(p + 0xEE0) += -0.8f * *(float *)(p + 0x10);
        if (*(float *)(p + 0x54) < 110.0f) {
            *(float *)(p + 0x54) = 110.0f;
            if ((*(float *)(p + 0xEC4) -= *(float *)(p + 0x10)) < 0.0f) *(unsigned char *)(p + 0xF05) = 1;
        }
        break;
    }
    func_002EF940(*(char **)D_01CAFF0C, p + 0xAF0);
}

void func_003DCDF0(char *p) {
    unsigned char func_002EF940(char *p, char *s);
    float tmp[4] __attribute__((aligned(16)));
    float s;
    float q;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
    case 1:
        s = func_0034C160(*(float *)(p + 0xEDC), 20.0f, 4.0f * *(float *)(p + 0x10));
        q = s * s;
        *(float *)(p + 0xEDC) = s;
        if (!(q <= 20.0f)) q = 20.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x60), "f"(q) : "t0", "memory");
        *(float *)(p + 0x50) += tmp[0] * *(float *)(p + 0x10);
        *(float *)(p + 0x54) += *(float *)(p + 0x10) * (tmp[1] + *(float *)(p + 0xEE0));
        *(float *)(p + 0x58) += tmp[2] * *(float *)(p + 0x10);
        *(float *)(p + 0xEE0) += -0.8f * *(float *)(p + 0x10);
        if (*(float *)(p + 0x54) < 110.0f) {
            *(float *)(p + 0x54) = 110.0f;
            if ((*(float *)(p + 0xEC4) -= *(float *)(p + 0x10)) < 0.0f) *(unsigned char *)(p + 0xF05) = 1;
        }
        break;
    }
    func_002EF940(*(char **)D_01CAFF0C, p + 0xAF0);
}

void func_003DD5B0(char *);

void func_003DC730(char *p) {
    void func_0034BA60(int, char *, int, int, int);
    unsigned char func_002EF940(char *p, char *s);
    void func_003DD4D0(char *);
    float tmp[4] __attribute__((aligned(16)));
    float s;
    float q;
    float x;
    unsigned char fl;
    fl = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if ((*(float *)(p + 0xEC4) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 5))++;
            *(float *)(p + 0xEC4) = 25.0f;
            func_003DD5B0(p);
            if (mt_rand() & 1) func_0034BA60(0x4E, p + 0x50, 0x35, 0, 1);
            *(unsigned char *)(p + 6) = 0;
        }
        break;
    case 1:
        if (*(unsigned char *)(p + 0xF01) == 0) {
            s = func_0034C160(*(float *)(p + 0xEDC), 15.0f, 3.0f * *(float *)(p + 0x10));
            q = s * s;
            *(float *)(p + 0xEDC) = s;
            if (!(q <= 15.0f)) q = 15.0f;
        } else {
            s = func_0034C160(*(float *)(p + 0xEDC), 18.0f, 5.0f * *(float *)(p + 0x10));
            q = s * s;
            *(float *)(p + 0xEDC) = s;
            if (!(q <= 18.0f)) q = 18.0f;
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x60), "f"(q) : "t0", "memory");
        *(float *)(p + 0x54) += *(float *)(p + 0x10) * (tmp[1] + *(float *)(p + 0xEE0));
        if ((unsigned char)*(unsigned char *)(p + 0xF01) == 0) *(float *)(p + 0xEE0) += -0.5f * *(float *)(p + 0x10);
        else *(float *)(p + 0xEE0) += -0.4f * *(float *)(p + 0x10);
        x = *(float *)(p + 0x50) + tmp[0] * *(float *)(p + 0x10);
        if (500.0f < x && x < 4500.0f) *(float *)(p + 0x50) = x;
        else fl = 1;
        x = *(float *)(p + 0x58) + tmp[2] * *(float *)(p + 0x10);
        if (500.0f < x && x < 4500.0f) *(float *)(p + 0x58) = x;
        else fl = 1;
        if (fl == 0) {
            switch (*(unsigned char *)(p + 6)) {
            case 0:
                if ((*(float *)(p + 0xEC4) -= *(float *)(p + 0x10)) < 0.0f) {
                    func_003DD4D0(p);
                    (*(unsigned char *)(p + 6))++;
                }
                break;
            case 1:
                if (*(float *)(p + 0x54) <= 110.0f) *(unsigned char *)(p + 0xF05) = 1;
                break;
            }
        } else {
            *(unsigned char *)(p + 0xF0B) = 1;
        }
        break;
    }
    func_002EF940(*(char **)D_01CAFF0C, p + 0xAF0);
}

typedef struct { float x, y, z, w; } V4h;

int func_003DD7E0(char *p, int k, V4h *out, float *r) {
    switch (k) {
    case 0:
        *out = *(V4h *)(p + 0x50);
        out->y += 100.0f;
        *r = 100.0f;
        return 1;
    }
    return 0;
}

void func_00206730(char *);

void func_003C5430(char *, char *);

void func_003DD450(char *p) {
    void func_001AD140(char *);
    void func_002F2D30(char *, char *);
    char *g;
    if (*(unsigned char *)(p + 0xEFC) == 1 && *(char **)(p + 0x308) != 0) {
        func_003C5430(*(char **)(p + 0x308), p);
    }
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2D30(g, p);
    }
    func_00206730(p + 0xEA0);
    if (*(char **)(p + 0xEA0) != 0) {
        func_001AD140(*(char **)(p + 0xEA0));
        *(char **)(p + 0xEA0) = 0;
    }
}

void func_003DBDA0(char *p) {
    void func_002EF940(int, char *);
    short func_0034B940(char *, char *);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        *(float *)(p + 0x54) = 110.0f;
        *(short *)(p + 0x90) = func_0034B940(((char **)(*(char **)D_01CAFF0C + 0xC))[*(unsigned char *)(p + 0xF02)] + 0x50, p + 0x50);
        *(float *)(p + 0xEC4) = *(float *)(p + 0xEC4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xEC4) < 0.0f) {
            *(unsigned char *)(p + 0xF05) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0xAF0);
}

char *func_00279290(char *);

void func_001A29A0(char *);

void func_003DA500(char *, int);

void func_003DA600(char *p) {
    switch (*(unsigned char *)(p + 0xEF8)) {
    case 0:
        if (*(unsigned char *)(p + 0xEFD) != 4 && *(unsigned char *)(p + 0xEFD) != 5) {
            func_003DA500(p, 1);
        }
        break;
    case 1:
        *(float *)(p + 0xEF0) = *(float *)(p + 0xEF0) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xEF0) < 0.0f) {
            func_003DA500(p, 2);
        }
        break;
    case 2:
        return;
    }
    func_001A29A0(func_00279290(p + 0x340));
}

int func_003DA920(char *p) {
    int r;
    if (*(unsigned char *)(p + 0xF07)) {
        r = 1;
    } else if (*(unsigned char *)(p + 0xF08)) {
        r = 1;
    } else if (*(unsigned char *)(p + 0xF09)) {
        r = 1;
    } else if (*(unsigned char *)(p + 0xF0A)) {
        r = 1;
    } else if (*(unsigned char *)(p + 0xF0B)) {
        r = 1;
    } else if (*(unsigned char *)(p + 0xF0C)) {
        r = 1;
    } else {
        r = *(unsigned char *)(p + 0xF0D);
    }
    return r;
}

static inline char *ent_3DB(char *base, unsigned char i) {
    return *(char **)((char *)(i * 4) + (int)base + 0xC);
}

void func_003DB5A0(char *p) {
    void func_00104B80(char *, char *, char *);
    void func_00131760(char *, char *, float *);
    void func_00131650(char *, char *);
    short func_0034B940(char *, char *);
    float m[16] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    short a;
    if (*(unsigned char *)(p + 0xEFD) == 6) return;
    *(float *)(p + 0xEC4) = 30.0f;
    *(unsigned char *)(p + 0xEFD) = 6;
    *(unsigned char *)(p + 5) = 0;
    UNIT(m);
    a = func_0034B940(p + 0x50, ent_3DB(*(char **)D_01CAFF0C, (unsigned char)*(unsigned char *)(p + 0xF02)) + 0x50);
    r[0] = 0.0f;
    r[1] = 6.283185f * (a / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131760((char *)m, (char *)m, r);
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 1.0f;
    v[3] = 1.0f;
    func_00104B80(p + 0x60, (char *)m, (char *)v);
    func_00131650(p + 0x60, p + 0x60);
    *(float *)(p + 0xEDC) = 1.0f;
    *(int *)(p + 0xEE0) = 0;
    *(unsigned char *)(p + 0x1E1) = 0;
}

void func_003DDB10(char *p) {
    switch (*(unsigned char *)(p + 0xEFD)) {
    case 4:
    case 5:
        *(float *)(p + 0xEC8) = *(float *)(p + 0xEC8) - 5.0f * *(float *)(p + 0x10);
        if (*(float *)(p + 0xEC8) < -70.0f) *(float *)(p + 0xEC8) = -70.0f;
        *(float *)(p + 0xECC) = *(float *)(p + 0xECC) - 2.0f * *(float *)(p + 0x10);
        if (*(float *)(p + 0xECC) < -20.0f) *(float *)(p + 0xECC) = -20.0f;
        break;
    default:
        *(float *)(p + 0xEC8) = *(float *)(p + 0xEC8) + 5.0f * *(float *)(p + 0x10);
        if (!(*(float *)(p + 0xEC8) <= 0.0f)) *(float *)(p + 0xEC8) = 0.0f;
        *(float *)(p + 0xECC) = *(float *)(p + 0xECC) + 2.0f * *(float *)(p + 0x10);
        if (!(*(float *)(p + 0xECC) <= 0.0f)) *(float *)(p + 0xECC) = 0.0f;
        break;
    }
    *(float *)(*(char **)(*(char **)(p + 0x304) + 0x100) + 0x34) = *(float *)(p + 0xED0) + *(float *)(p + 0xEC8);
    *(float *)(*(char **)(*(char **)(p + 0x304) + 0x100) + 0x38) = *(float *)(p + 0xED4) + *(float *)(p + 0xECC);
}

static inline char *ent_3DB6(char *base, unsigned char i) {
    return *(char **)((char *)(i * 4) + (int)base + 0xC);
}

void func_003DB6C0(char *p) {
    void func_00104B80(char *, char *, char *);
    void func_00131760(char *, char *, float *);
    void func_00131650(char *, char *);
    short func_0034B940(char *, char *);
    float m[16] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    short a;
    if (*(unsigned char *)(p + 0xEFD) == 7) return;
    *(float *)(p + 0xEC4) = 40.0f;
    *(unsigned char *)(p + 0xEFD) = 7;
    *(unsigned char *)(p + 5) = 0;
    UNIT(m);
    a = func_0034B940(p + 0x50, ent_3DB6(*(char **)D_01CAFF0C, (unsigned char)*(unsigned char *)(p + 0xF02)) + 0x50);
    r[0] = -0.6981317f;
    r[1] = 6.283185f * (a / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131760((char *)m, (char *)m, r);
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 1.0f;
    v[3] = 1.0f;
    func_00104B80(p + 0x60, (char *)m, (char *)v);
    func_00131650(p + 0x60, p + 0x60);
    *(float *)(p + 0xEDC) = 4.0f;
    *(int *)(p + 0xEE0) = 0;
    *(unsigned char *)(p + 0x1E1) = 1;
}

int func_00133C10(char *, int, int);

void func_003DA6C0(char *p) {
    switch (*(unsigned char *)(p + 0xEFD)) {
    case 0: case 2: case 3: case 4: case 9:
        if (func_00133C10(p + 0x50, 200, 200)) *(unsigned char *)(p + 0xF0B) = 1;
        break;
    case 1: case 5: case 6: case 7: case 8: case 10:
        break;
    }
}

void func_003DD700(char *p, unsigned int k) {
    switch (k) {
    case 0: case 1: case 4: case 8: case 10: case 11: case 12:
        *(unsigned char *)(p + 0xF08) = 1;
        break;
    case 2: case 3: case 5: case 9:
        *(unsigned char *)(p + 0xF09) = 1;
        break;
    case 7:
        *(unsigned char *)(p + 0xF0A) = 1;
        break;
    case 20:
        *(unsigned char *)(p + 0xF07) = 1;
        break;
    case 21:
        *(unsigned char *)(p + 0xF07) = 1;
        break;
    case 6: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 22:
        break;
    }
}

void func_003DA730(char *p) {
    float func_00132470(char *, char *);
    *(float *)(p + 0xEE4) = func_00132470(*(char **)((char *)(*(unsigned char *)(p + 0xF02) * 4) + (int)*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    switch (*(unsigned char *)(p + 0xEFD)) {
    case 0: case 2:
        if (!(*(float *)(p + 0xEE4) <= 500.0f)) *(unsigned char *)(p + 0xF0C) = 1;
        break;
    case 1: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        break;
    }
}

void func_003DAE30(char *p0) {
    void func_003DD4D0();
    *(char *)(p0 + 3837) = 1;
    *(char *)(p0 + 3846) = 1;
    *(char *)(p0 + 5) = 0;
    func_003DD4D0();
    *(char *)(p0 + 481) = 0;
}

void func_003DDDC0(char **h) {
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

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

char *func_003DDF20(char *p) {
    void func_0013D240(char *, int);
    void func_003DE040(char *);
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
    **q = func_001B0FD0(a, 0x3D40, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x3D40, t);
        if (r != 0) {
            func_003DE040(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x2C, **q);
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
        *(char **)(ret + 0x38) = p;
    }
    return ret;
}

extern char D_01DFABA0[];

void func_003305E0(char *, int, int, int, int, int, int);

void func_003DD840(char *p) {
    char *func_00207480(int, int, char *, int);
    char *q;
    func_00206730(p + 0xEA0);
    if (*(char **)(p + 0xEA0) == 0) {
        *(char **)(p + 0xEA0) = func_00207480(3, 0xDC, 0, 16);
        q = *(char **)(p + 0xEA0);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x2EC) + 0x104);
            q[0x9A] = 1;
            *(*(char **)(p + 0xEA0) + 0x3A) = 1;
        }
    }
    func_003305E0(D_01DFABA0, 0, 0x5A, (int)(p + 0x50), 0, 0, 0);
}

void func_003DD8E0(char *p) {
    void func_001AD140(char *);
    char *func_00207480(int, int, char *, int);
    char *q;
    func_00206730(p + 0xEA0);
    if (*(char **)(p + 0xEA0) != 0) {
        func_001AD140(*(char **)(p + 0xEA0));
        *(char **)(p + 0xEA0) = 0;
    }
    q = func_00207480(3, 0xDC, 0, 16);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x2EC) + 0x104);
        q[0x9A] = 1;
        q[0x3A] = 1;
    }
    func_003305E0(D_01DFABA0, 0, 0x5C, (int)(p + 0x50), 0, 0, 0);
}

int func_003DDC30(p0, p1) int p0; int p1; {
    char *v0;
    v0 = 0;
    if ((p1 < 8)) {
        v0 = (char *)(p1 << 2);
        v0 = (v0 + p0);
        v0 = *(char **)(v0 + 744);
    }
    return (int)v0;
}

void func_003DD390(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_003D98A0();

void func_003DDE10(char *p) { func_003D98A0(p + -64); }

extern void func_003DDC50();

void func_003DDE20(char *p) { func_003DDC50(p + -64); }

extern void func_003DDC60();

void func_003DDE30(char *p) { func_003DDC60(p + -64); }

extern void func_003DD7D0();

void func_003DDE50(char *p) { func_003DD7D0(p + -64); }

extern void func_003DD780();

void func_003DDE60(char *p) { func_003DD780(p + -64); }

extern void func_003DDB00();

void func_003DDED0(char *p) { func_003DDB00(p + -304); }

void func_003DDEE0(char *p) { func_003DD780(p + -304); }

extern void func_003DDC70();

void func_003DDF00(char *p) { func_003DDC70(p + -464); }
