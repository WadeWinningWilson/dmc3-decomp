#include "game/mt_rand.h"
int func_002DAA00(unsigned char *, int);

void func_002E0A60(unsigned char *p) {
    void func_002490F0(unsigned char *, int, int, int, int, int, float);
    int func_002496D0(unsigned char *);
    void func_0021B790(unsigned char *, int);
    void func_0021CBB0(unsigned char *);
    void func_002DBAA0(unsigned char *, short, float);
    unsigned char ok = 1;
    switch (p[0x284C]) {
    case 0:
        func_0021CBB0(p);
        if (*(int *)(p + 0x2AE8) != 0) {
            ok = func_002DAA00(p, *(int *)(p + 0x2AE8) + 0x10);
        }
        if (ok) {
            if (mt_rand() % 10 > 4) {
                func_002490F0(p, 1, 0, -1, 1, 0, -1.0f);
                *(short *)(p + 0x2856) = 10;
            } else {
                func_002490F0(p, 1, 0xF, -1, 1, 0, -1.0f);
                *(short *)(p + 0x2856) = 8;
            }
            *(short *)(p + 0x90) = *(short *)(p + 0x2AE4);
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
        } else {
            func_002490F0(p, 1, 1, -1, 1, 0, -1.0f);
            *(short *)(p + 0x2856) = 8;
            *(short *)(p + 0x90) = *(short *)(p + 0x2AE4) + 0x8000;
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        }
        p[0x284C]++;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, p[0x2856]);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
        }
        break;
    }
}

int func_002DF910(char *p, int a, int b) {
    void func_002E0580(char *, int, int, int);
    int func_002E02C0(char *, int, int);
    int r;
    if (*(unsigned char *)(p + 0x3C80) == 6) {
        func_002E0580(p, a, b, 0);
        r = func_002E02C0(p, a, b);
    }
    return r;
}

typedef struct { float x; float y; float z; float w; } cf4;

typedef struct { float x; float y; } cf2;

typedef struct { unsigned char x; unsigned char y; } cb2;

typedef struct { cf4 a; cf4 b; cf2 c; cb2 e; float d[10]; } cam54;

extern cam54 *D_005BC2E4;

void func_002E0000(char *p, unsigned char k) {
    float s = *(float *)(p + 0x2AA8);
    cam54 *e = &D_005BC2E4[k];
    cam54 *d = (cam54 *)(p + 0x2A7C);
    d->a = e->a;
    d->b = e->b;
    d->c = e->c;
    d->e = e->e;
    d->d[0] = e->d[0];
    d->d[1] = e->d[1];
    d->d[2] = e->d[2];
    d->d[3] = e->d[3];
    d->d[4] = e->d[4];
    d->d[5] = e->d[5];
    d->d[6] = e->d[6];
    d->d[7] = e->d[7];
    d->d[8] = e->d[8];
    d->d[9] = e->d[9];
    *(float *)(p + 0x2AA8) = s;
}

void func_0021C7A0(char *, int);

void func_002E1B90(char *);

void func_002D9450(char *, int, int, float);

void func_002E1AB0(char *, int);

void func_002E00E0(char *p, int a, int b, signed char c) {
    void func_0021CB60(char *, unsigned int);
    func_002E1B90(p);
    *(int *)(p + 0x2AEC) = b;
    *(int *)(p + 0x2AE8) = a;
    *(unsigned char *)(p + 0x28A9) = 0;
    func_002D9450(p, 7, 0, 0.0f);
    func_002E1AB0(p, b);
    func_0021C7A0(p, 0x29);
    func_0021CB60(p, 0x10000);
    if (c == -1) *(signed char *)(p + 0x2AE2) = *(signed char *)(*(char **)(p + 0x2AEC) + 0x18);
    else *(signed char *)(p + 0x2AE2) = c;
    switch (*(signed char *)(p + 0x2AE2)) {
    case -1: case 0:
    default:
        if (*(unsigned int *)(p + 0x2898) & 2) *(unsigned char *)(p + 0x2AE1) = 3;
        else *(unsigned char *)(p + 0x2AE1) = 1;
        break;
    case 1:
        if (*(unsigned int *)(p + 0x2898) & 2) *(unsigned char *)(p + 0x2AE1) = 3;
        else *(unsigned char *)(p + 0x2AE1) = 2;
        break;
    case 2: *(unsigned char *)(p + 0x2AE1) = 3; break;
    case 3: *(unsigned char *)(p + 0x2AE1) = 3; break;
    case 4: *(unsigned char *)(p + 0x2AE1) = 5; break;
    case 5: *(unsigned char *)(p + 0x2AE1) = 5; break;
    case 6: *(unsigned char *)(p + 0x2AE1) = 6; break;
    case 7:
        if (*(unsigned int *)(p + 0x2898) & 2) *(unsigned char *)(p + 0x2AE1) = 3;
        else *(unsigned char *)(p + 0x2AE1) = 4;
        break;
    }
    if (*(float *)(p + 0x2AD4) <= 0.0f && *(unsigned char *)(p + 0x2AE1) != 3) *(unsigned char *)(p + 0x2AE1) = 3;
    *(unsigned char *)(p + 0x2998) = 0;
}

void func_002E1A00(char *p) {
    void func_002490F0(char *, int, int, int, int, int, float);
    int func_002496D0(char *);
    void func_0021B790(char *, int);
    void func_002DBAA0(char *, short, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002490F0(p, 1, 6, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 4);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
        }
        break;
    }
}

void func_002E1900(char *p) {
    void func_002490F0(char *, int, int, int, int, int, float);
    int func_002496D0(char *);
    void func_0021B790(char *, int);
    void func_002DBAA0(char *, short, float);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        if (*(unsigned char *)(p + 0x2AE3) == 1) {
            func_002490F0(p, 1, 9, -1, 0, 0, -1.0f);
            *(short *)(p + 0x2856) = 10;
        } else {
            func_002490F0(p, 1, 7, -1, 0, 0, -1.0f);
            *(short *)(p + 0x2856) = 6;
        }
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, *(unsigned char *)(p + 0x2856));
        } else {
            func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
        }
        break;
    }
}

int func_0023DF80(char *, float);

void func_002DBD20(char *, float, float);

void func_002DB880(char *, short);

void func_002DBD00(char *);

void func_002DBCC0(char *, int, float, float);

void func_0021CB50(char *, int);

void func_002DAB90(char *, int);

void func_002E1750(char *p) {
    int func_002496D0(char *);
    void func_002490F0(char *, int, int, int, int, int, float);
    void func_0021CBB0(char *, int);
    void func_0021B790(char *, int);
    void func_0021CB60(char *, int);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CB50(p, 2);
        *(short *)(p + 0x90) = *(short *)(p + 0x2AE4);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
        func_002490F0(p, 1, 0xD, -1, 1, 0, -1.0f);
        func_002DBD00(p);
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x283C) + 0x30), *(float *)(*(char **)(p + 0x283C) + 0x34));
        func_002DBD20(p, 0.0f, 0.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002496D0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_002490F0(p, 1, 0xE, -1, 2, 3, -1.0f);
            func_0021CBB0(p, 1);
            func_0021CB60(p, 2);
            func_0021CB50(p, 1);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
            break;
        }
        func_002DB880(p, *(short *)(p + 0x28DC));
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 0xA);
        } else {
            func_002DAB90(p, 3);
        }
        break;
    }
}

void func_002DFF90(char *p, char *q) {
    void func_0021CBE0(char *, int, float);
    func_0021CBE0(p, 0, *(float *)(q + 0x1C));
}

void func_00332890(char *, char *, int, int, float, float, float, float, float);

void func_002DFFB0(char *p, char *q, int c, float x, float y, float z) {
    func_00332890(p + 0x3D90, q, c, 1, *(float *)(q + 0x28), *(float *)(q + 0x24), x, y, z);
}

void func_002DFFD0(char *p, char *q, int c, char *r, int s, float x, float y, float z, float w) {
    func_00332890(p + 0x3D90, r, c, s, w, *(float *)(q + 0x24), x, y, z);
}

extern char D_01CAFF0C[];

void func_0034BA60(int, char *, int, int, int);

void func_002F2FB0(char *);

char *func_002F3080(char *);

void func_002D9290(char *, int, float);

void func_002E0A50(char *, int);

void func_002E1310(char *p) {
    int func_002496D0(char *);
    void func_002490F0(char *, int, int, int, int, int, float);
    void func_0021CBB0(char *, int);
    void func_0021CB60(char *, int);
    char *o;
    unsigned char found;
    float f;
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        *(short *)(p + 0x90) = *(short *)(p + 0x2AE4);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
        func_002D9450(p, 0, 0, 0.0f);
        found = 0;
        func_002F2FB0(*(char **)(*(char **)D_01CAFF0C + 0x20));
        for (;;) {
            o = func_002F3080(*(char **)(*(char **)D_01CAFF0C + 0x20));
            if (o == 0) break;
            if (*(signed char *)(o + 0x46) == 0x2B) {
                found = 1;
                break;
            }
        }
        if (found) func_0034BA60(0x3D, p + 0x50, 0x2B, 0, 1);
        func_002DBD00(p);
        func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x283C) + 0x0), *(float *)(*(char **)(p + 0x283C) + 0x4));
        func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x8), 0.0f);
        *(short *)(p + 0x2856) = 0;
        *(short *)(p + 0x2858) = 0;
        *(short *)(p + 0x285A) = 0;
        *(short *)(p + 0x285C) = 0;
        *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x283C) + 0x3C);
        func_002D9290(p, 0, *(float *)(p + 0x2870) / 2.0f);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) <= 0.0f) {
            *(unsigned char *)(p + 0x2AE3) = 0;
            func_002490F0(p, 1, 4, -1, 0, 0, -1.0f);
            func_0021CB50(p, 2);
            func_002D9450(p, 5, 0, 0.0f);
            found = 0;
            func_002F2FB0(*(char **)(*(char **)D_01CAFF0C + 0x20));
            for (;;) {
                o = func_002F3080(*(char **)(*(char **)D_01CAFF0C + 0x20));
                if (o == 0) break;
                if (*(signed char *)(o + 0x46) == 0x2B) found = 1;
            }
            if (found) func_0034BA60(0x3C, p + 0x50, 0x2B, 0, 1);
            (*(unsigned char *)(p + 0x284C))++;
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x24D5) != 1) func_002496D0(p);
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021CBB0(p, 1);
            func_0021CB60(p, 2);
            func_0021CB50(p, 1);
            *(float *)(p + 0x150) = *(float *)(p + 0x150) * *(float *)(*(char **)(p + 0x283C) + 0x38);
            (*(unsigned char *)(p + 0x284C))++;
        } else {
            func_002DB880(p, *(short *)(p + 0x28DC));
        }
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            *(short *)(p + 0x2858) = 0;
            *(short *)(p + 0x285A) = 0;
            if (*(unsigned char *)(p + 0x28AC) == 1 && *(unsigned char *)(p + 0x28AD) == 0) {
                *(unsigned char *)(p + 0x2854) = 1;
                func_0021C7A0(p, 0x2A);
                return;
            }
            *(unsigned char *)(p + 0x2AE3) = 0;
            func_002E0A50(p, 7);
            return;
        }
        if (*(unsigned char *)(p + 0x24D5) == 2) (*(short *)(p + 0x2858))++;
        if (*(unsigned char *)(p + 0x24D5) == 3) {
            *(short *)(p + 0x2858) = 0;
            (*(short *)(p + 0x285A))++;
        }
        func_002DAB90(p, 3);
        break;
    }
    if (!(*(float *)(p + 0x2AD4) <= 0.0f)) {
        if (*(short *)(p + 0x2858) != 0 && ((*(unsigned short *)(p + 0x49C4) & 0xF0) || *(unsigned char *)(p + 0x3C6C) == 2)) {
            *(short *)(p + 0x285C) = 1;
        }
        if ((*(short *)(p + 0x285A) != 0 && *(short *)(p + 0x285C) != 0) || *(unsigned char *)(p + 0x24D5) == 4) {
            func_002E0A50(p, 8);
        }
    }
}

void func_00226A00(char *, int);

void func_00225F30(char *, int);

void func_00226580(char *, int);

int func_002DB3E0(char *, int);

void func_002E0E00(char *p) {
    int func_002496D0(char *);
    void func_002490F0(char *, int, int, int, int, int, float);
    void func_0021CBB0(char *, int);
    void func_0021CB60(char *, int);
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CB50(p, 2);
        *(short *)(p + 0x90) = *(short *)(p + 0x2AE4);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
        if (*(unsigned char *)(p + 0x28AC) == 1 && *(unsigned char *)(p + 0x28AD) == 0 && *(unsigned char *)(p + 0x28AA) != 1 &&
            *(unsigned char *)(p + 0x28AE) == 1) {
            *(unsigned char *)(p + 0x28AE) = 0;
            func_00226A00(p, 0);
            func_00225F30(p, 2);
            func_00226580(p, 0);
        }
        func_002DBD00(p);
        switch (*(signed char *)(p + 0x2AE2)) {
        case 0: case 1: case 2:
            *(unsigned char *)(p + 0x2AE3) = 0;
            func_002490F0(p, 1, 4, -1, 0, 0, -1.0f);
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x283C) + 0x0), *(float *)(*(char **)(p + 0x283C) + 0x4));
            func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x8), 0.0f);
            *(unsigned char *)(p + 0x2867) = 1;
            break;
        case 3:
            *(unsigned char *)(p + 0x2AE3) = 0;
            func_002490F0(p, 1, 0x1A, -1, 0, 0, -1.0f);
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x283C) + 0xC), *(float *)(*(char **)(p + 0x283C) + 0x10));
            func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x14), 0.0f);
            *(unsigned char *)(p + 0x2867) = 1;
            break;
        case 4:
            *(unsigned char *)(p + 0x2AE3) = 1;
            func_002490F0(p, 1, 5, -1, 0, 0, -1.0f);
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x283C) + 0x18), *(float *)(*(char **)(p + 0x283C) + 0x1C));
            func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x20), 0.0f);
            *(unsigned char *)(p + 0x2867) = 1;
            break;
        case -1: case 5:
        default:
            *(unsigned char *)(p + 0x2AE3) = 1;
            func_002490F0(p, 1, 0x1B, -1, 0, 0, -1.0f);
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x283C) + 0x24), *(float *)(*(char **)(p + 0x283C) + 0x28));
            func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x2C), 0.0f);
            *(unsigned char *)(p + 0x2867) = 1;
            break;
        }
        *(unsigned char *)(p + 0x2866) = 1;
        *(unsigned char *)(p + 0x2868) = 0;
        *(short *)(p + 0x2856) = 0;
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        if (*(unsigned char *)(p + 0x2866) == 1) func_002496D0(p);
        if (*(unsigned char *)(p + 0x24D5)) *(unsigned char *)(p + 0x2866) = 0;
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64))) {
            func_0021CBB0(p, 1);
            func_0021CB60(p, 2);
            func_0021CB50(p, 1);
            switch (*(signed char *)(p + 0x2AE2)) {
            case 0: case 1: case 2:
                *(float *)(p + 0x150) = *(float *)(p + 0x150) * *(float *)(*(char **)(p + 0x283C) + 0x38);
                break;
            case 3:
                *(float *)(p + 0x150) = *(float *)(p + 0x150) * *(float *)(*(char **)(p + 0x283C) + 0x20C);
                break;
            case 4:
                *(float *)(p + 0x150) = *(float *)(p + 0x150) * *(float *)(*(char **)(p + 0x283C) + 0x210);
                break;
            case -1: case 5:
            default:
                *(float *)(p + 0x150) = *(float *)(p + 0x150) * *(float *)(*(char **)(p + 0x283C) + 0x214);
                break;
            }
            (*(unsigned char *)(p + 0x284C))++;
        } else {
            func_002DB880(p, *(short *)(p + 0x28DC));
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            if (*(unsigned char *)(p + 0x28AC) == 1 && *(unsigned char *)(p + 0x28AD) == 0) {
                *(unsigned char *)(p + 0x2854) = 1;
                func_0021C7A0(p, 0x2A);
                return;
            }
            func_002E0A50(p, 7);
            return;
        }
        if (*(unsigned char *)(p + 0x24D5) == 2) *(short *)(p + 0x2856) = 1;
        if (*(unsigned char *)(p + 0x24D5) == 3) *(short *)(p + 0x2856) = 2;
        func_002DB3E0(p, *(short *)(p + 0x28DC));
        break;
    }
    if (*(unsigned char *)(p + 0x2867) == 1 && !(*(float *)(p + 0x2AD4) <= 0.0f)) {
        if (*(short *)(p + 0x2856) == 0 && ((*(unsigned short *)(p + 0x49C4) & 0xF0) || *(unsigned char *)(p + 0x3C6C) == 2)) {
            *(unsigned char *)(p + 0x2868) = 1;
        }
        if (*(short *)(p + 0x2856) == 2 && *(unsigned char *)(p + 0x2868) == 1) func_002E0A50(p, 8);
        if (*(unsigned char *)(p + 0x24D5) == 4) func_002E0A50(p, 7);
    }
}

void func_002DFC90();

void func_002DFC30(int p0, int p1, int p2) {
    void func_002E02C0();
    void func_002E0580();
    func_002E0580(p0, p1, p2, 1);
    func_002E02C0(p0, p1, p2);
    func_002DFC90(p0, p1, p2);
}

int func_002DFE20();

int func_002DFDB0(p0, p1, p2, p3) char *p0; char *p1; int p2; int p3; {
    int v0;
    int v1;
    *(float *)(p0 + 10664) = *(float *)(p1 + 44);
    *(char *)(p0 + 10653) = 1;
    *(char *)(p0 + 10654) = *(unsigned char *)(p0 + 10648);
    if (*(signed char *)(p0 + 15689) == 4) {
        v0 = p3;
        if (*(unsigned char *)(p0 + 10312) == 17) {
            v1 = func_002DFE20(p0, 0, v0);
        }
    }
    return v1;
}

void func_002E1BC0(char *p0) {
    *(char *)(p0 + 20) = 0;
    *(char *)(p0 + 21) = 0;
    *(char *)(p0 + 22) = 0;
    *(int *)(p0 + 128) = 0x3f800000;
    *(int *)(p0 + 136) = 0x3f800000;
    *(int *)(p0 + 132) = 0x3f800000;
    *(char *)(p0 + 96) = 0;
    *(int *)(p0 + 100) = 0;
    *(int *)(p0 + 104) = 0x3f800000;
    *(char *)(p0 + 112) = 0;
    *(int *)(p0 + 116) = 0;
    *(int *)(p0 + 104) = 0x3f800000;
}

void func_002DFFA0(int p0) {
    void func_0021CBE0();
    func_0021CBE0(p0, 0);
}
