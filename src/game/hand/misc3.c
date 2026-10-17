/* Hand-matched functions (third file: its callee declarations differ from misc.c/misc2.c). */

#include "game/mt_rand.h"

extern char D_01CAFF0C[];
extern float D_00569370[];
int func_003ACB40(char *);
void func_002EF940(int, char *);
short func_0034B940(char *, char *);

void func_003A5120(unsigned char *p) {
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

extern signed char D_005BCD60[];
void func_0031E570(char *);
int func_0024E780(char *, int, int);
void func_0024E7B0(char *, int, int);
int func_0024E800(char *);
int func_002D65E0(char *);
void func_002D2270(char *, int);
void func_002D6D30(char *);

typedef struct O2D3 { char pad[0x2F70]; char sub[16]; } O2D3;

void func_002D38A0(O2D3 *q) {
    unsigned char *p = (unsigned char *)q;
    switch (p[5]) {
    case 0:
        p[5]++;
        func_0031E570((char *)p + 0x1D0);
        p[0x1E2] = 3;
        p[0x1E3] = 2;
    case 1:
        if ((unsigned char)func_0024E780(q->sub, 0, 0) == 2) {
            func_0024E7B0(q->sub, 0, 0);
            if (*(char **)(p + 0x3914) != 0) {
                (*(char **)(p + 0x3914))[0x3B] = 0;
            }
        }
        if ((unsigned char)func_0024E800(q->sub) == 1) {
            if (func_002D65E0((char *)p)) {
                func_002D2270((char *)p, 0x17);
            } else {
                func_002D2270((char *)p, D_005BCD60[p[0x38D0]]);
            }
            func_002D6D30((char *)p);
        }
        break;
    }
}

extern char D_01DF5D20[];
extern char D_01DF8E4D[];
extern char D_00645A30[];
extern int D_005BE09C;
void func_001F9BF0(char *);
void func_001ACCD0(int);
void func_0021DC70(int, int);
int func_002B5500(char *);
void func_00195C60(char *, int, int);
void func_002D8F40(int, int);

void func_0023A480(char *p, int k) {
    (*(char **)D_01CAFF0C)[9] = 1;
    (*(char **)D_01CAFF0C)[8] = 1;
    D_01DF8E4D[0] = 1;
    func_001F9BF0(D_01DF5D20);
    func_001ACCD0(D_005BE09C);
    func_0021DC70(*(int *)(*(char **)D_01CAFF0C + 0xC), 1);
    p[0x5BE2] = func_002B5500(p + 0x2070);
    switch (k) {
    case 0:
        func_00195C60(D_00645A30, 4, 0);
        break;
    case 1:
        func_00195C60(D_00645A30, 5, 1);
        func_00195C60(D_00645A30, 4, 0);
        (*(char **)(p + 0x2058))[0x28B4] = 1;
        func_002D8F40(*(int *)(p + 0x2058), 0);
        break;
    case 2:
        break;
    }
}

/* Two-state setup (offset table swap, reset vectors to (0,0,-1.8194,0)); per-entry scaled update. */
void func_0024DA80(char *, int, int);
void func_003A0CD0(char *, int);
void func_003A0F20(char *);
int func_0039DED0(char *);
void func_003A0230(char *);

void func_00394450(char *p) {
    p[0x2DE8] = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(short *)(p + 0x2DDC) != 0x5E) {
            *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
            *(short *)(p + 0x2DDC) = 0x5E;
            func_0024DA80(p + 0x29D0, 0, 0x5E);
            func_0024DA80(p + 0x2AA0, 0, 0x5E);
        }
        (*(unsigned char *)(p + 5))++;
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(unsigned int *)(p + 0x68) = 0xBFE8E38E;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0x2E00) = 0;
        *(int *)(p + 0x2E04) = 0;
        *(unsigned int *)(p + 0x2E08) = 0xBFE8E38E;
        *(int *)(p + 0x2E0C) = 0;
        p[0x2DE0] = 1;
    case 1:
        func_003A0CD0(p, 0x300);
        func_003A0F20(p);
        if ((unsigned char)func_0039DED0(p) == 1) {
            func_003A0230(p);
        }
        break;
    }
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

void func_001A49D0(Ent340 *, int, int, int);

void func_001A4350(Obj1A4 *p, unsigned int i, int a, int b) {
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

/* Pushes flagged entries up along their velocity once the player is above them. */
extern char D_01CAFF0C[];
void func_00105300(float *, char *);

typedef struct Blk40 {
    float a[4];
    float v[4];
    float b[4];
    float pos[4];
} Blk40;

typedef struct O37E1 {
    char pad0[0x69F8];
    char *arr[10];
    Blk40 blk[17];
    char pad1[0x6E78 - 0x6A20 - 17 * 0x40];
    int n;
    char pad2[0x6F5C - 0x6E7C];
    char *obj[10];
    char pad3[0x7805 - 0x6F84];
    unsigned char flag;
} O37E1;

void func_0037E150(O37E1 *p) {
    char *o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    int i;
    p->flag = 0;
    for (i = 0; i < p->n; i++) {
        func_00105300(p->blk[i].a, p->arr[i] + 0x1240);
        if (p->obj[i] != 0 && (*(int *)(p->obj[i] + 8) & 0x1000) &&
            !(*(float *)(o + 0x54) <= p->blk[i].pos[1])) {
            p->flag = 1;
            p->blk[i].pos[0] += 25.0f * p->blk[i].v[0];
            p->blk[i].pos[1] += 25.0f * p->blk[i].v[1];
            p->blk[i].pos[2] += 25.0f * p->blk[i].v[2];
        }
    }
}

extern float D_005BE1D0;
extern float D_005BCDC8;
extern short D_005BCDC0[4];
short func_002D6DB0(void);
void func_0034B8C0(short *, short *, int);
void func_00207480(int, int, char *, int);


void func_002D5170(O2D3 *q) {
    unsigned char *p = (unsigned char *)q;
    switch (p[5]) {
    case 0:
        p[5]++;
        func_0031E570((char *)p + 0x1D0);
        *(float *)(p + 0x38DC) = D_005BE1D0;
    case 1:
        *(float *)(p + 0x38DC) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x38DC) < 0.0f) {
            p[5]++;
            *(float *)(p + 0x38DC) = D_005BCDC8;
        }
        break;
    case 2:
        *(short *)(p + 0x37D8) = func_002D6DB0();
        func_0034B8C0((short *)(p + 0x38FC), (short *)(p + 0x37D8),
                      *(float *)(p + 0x10) * D_005BCDC0[*(unsigned char *)(p + 0x38D0)]);
        *(float *)(p + 0x38DC) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x38DC) < 0.0f) {
            p[5]++;
        }
        break;
    case 3:
        if ((unsigned char)func_0024E800(q->sub) == 1) {
            func_002D2270((char *)p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        }
        break;
    }
    if ((unsigned char)func_0024E780(q->sub, 0, 2) == 1) {
        func_0024E7B0(q->sub, 0, 2);
        func_00207480(3, 0x317, (char *)p + 0x1EF0, 16);
    }
}

extern float D_005695B0[];
void func_003A5C70(unsigned char *);
void func_003A5D20(unsigned char *, int);

void func_003A5B10(unsigned char *p) {
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

extern float D_005656A0[];
extern char D_005BE1A8[8];
void func_002D6F20(char *, int);
void func_001ACC30(int, int, int, int, int);
void func_0036DF10(char *, int, int, int, int, int);
int func_002075D0(int, int, int, int, int);

void func_002D56B0(O2D3 *q) {
    unsigned char *p = (unsigned char *)q;
    switch (p[5]) {
    case 0:
        p[5]++;
        func_0031E570((char *)p + 0x1D0);
        if (100.0f * (2.3283064e-10f * mt_rand()) < D_005656A0[*(int *)(p + 0x38F8)]) {
            func_002D6F20((char *)p, 2);
        }
    case 1:
        if ((unsigned char)func_0024E780(q->sub, 0, 1) == 1) {
            func_001ACC30(D_005BE09C, 2, 0x1E, 0x3C, 0);
            func_0036DF10(D_005BE1A8, 0, 1, 0x40, 0x3C, 0);
            *(int *)(p + 0x3918) = func_002075D0(3, 0x143, *(int *)(*(char **)(p + 0x6C8) + 0x104), 1, 0x10);
            p[5]++;
        }
        break;
    case 2:
        if ((unsigned char)func_0024E800(q->sub) == 1) {
            func_002D2270((char *)p, D_005BCD60[p[0x38D0]]);
        }
        break;
    }
}

extern float D_00569400[];
extern float D_00569404[];
void func_003A53F0(unsigned char *, int);

void func_003A5220(unsigned char *p) {
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
extern char *D_005BDB58;
extern char D_01DFABA0[];
void func_001AD100(char *);
void func_001AD140(char *);
void func_00131700(char *, char *, char *);
void func_00105230(char *, char *, char *);
void func_001318E0(char *, char *, char *);
void func_0028C200(char *, char *, char *, int, char *, char *, int);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
char *func_0028C3A0(char *, int, int, int);
void func_0028C5C0(char *, int, float);
void func_00330BD0(char *, int, char *, int, int);

void func_003A6340(unsigned char *p) {
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

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_004AD0E0(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        QCOPY(p + 0x440, p + 0x50);
        UNIT(p + 0x470);
        func_00131700(p + 0x470, p + 0x470, p + 0x450);
        func_00105230(p + 0x470, p + 0x470, p + 0x440);
        func_001318E0(p + 0x470, p + 0x470, p + 0x460);
        *(unsigned char *)(p + 0x370) = 5;
        *(unsigned char *)(p + 0x371) = 0;
        *(short *)(p + 0x372) = 0;
        *(unsigned char *)(p + 0x380) = 2;
        *(float *)(p + 0x390) = 0.0f;
        *(float *)(p + 0x394) = 0.0f;
        *(float *)(p + 0x398) = 0.0f;
        *(float *)(p + 0x39C) = 1.0f;
        *(float *)(p + 0x3A0) = 80.0f;
        func_0028C200(p + 0x150, p + 0x370, p + 0x380, 3, D_005BDB58, p, 0);
        *(int *)(p + 0x228) = 0x30440;
        func_0028C8E0(p + 0x150, 9);
        func_0028C910(p + 0x150);
        func_0028C3A0(p + 0x150, 0, -1, (int)(p + 0x470));
        *(float *)(p + 0x4B0) = 0.0f;
        *(unsigned char *)(p + 4) = 1;
        return;
    case 1:
        *(float *)(p + 0x4B0) = *(float *)(p + 0x4B0) + *(float *)(p + 0x10);
        if (!(*(float *)(p + 0x4B0) < 60.0f)) {
            *(unsigned char *)(p + 4) = 2;
        } else {
            *(float *)(p + 0x50) = *(float *)(p + 0x50) + *(float *)(p + 0x60) * *(float *)(p + 0x10);
            *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
            *(float *)(p + 0x58) = *(float *)(p + 0x58) + *(float *)(p + 0x68) * *(float *)(p + 0x10);
            *(float *)(p + 0x5C) = 1.0f;
            QCOPY(p + 0x440, p + 0x50);
            UNIT(p + 0x470);
            func_00131700(p + 0x470, p + 0x470, p + 0x450);
            func_00105230(p + 0x470, p + 0x470, p + 0x440);
            func_001318E0(p + 0x470, p + 0x470, p + 0x460);
            func_0028C5C0(p + 0x150, 0, 1.0f);
        }
        if (*(int *)(*(char **)(p + 0x1CC) + 8) & 0x30000) {
            func_002075D0(3, 0x113, (int)(p + 0x470), 0, 0x10);
            func_00330BD0(D_01DFABA0, 0x36, p + 0x50, 6, 0);
            func_001AD140(p);
        }
        break;
    default:
        func_001AD140(p);
        break;
    }
}
