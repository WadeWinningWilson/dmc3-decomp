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
extern int D_01DFAB7C[];
void func_002490F0(char *, int, int, int, int, int, float);
int func_002496D0(char *);
void func_0021CBB0(char *, int);
void func_002DAF70(char *, int, int, int, float);
int func_002DB2C0(char *);
float func_00131B50(float);
float func_001324B0(char *, char *);
int func_002242C0(char *);
int func_002D9EB0(char *);
void func_002F30B0(int, char *, char *);
void func_002DBAA0(char *, short, float);
float func_00132510(char *);
int func_002DB3E0(char *, int);
void func_0021B790(char *, int);
extern int D_01DFAB78[];
extern char D_00666710[];
extern char D_0066671A[];
unsigned short func_001AE770(char *, int);
void func_002DBCC0(char *, int, float, float);
void func_002DBD20(char *, float, float);
void func_00330B50(char *, int, char *, int);
void func_003305E0(char *, int, int, char *, int, int, int);
int func_002D9A10(char *, short, int);
void func_0021C7E0(char *, int, int, int);
void func_0025DD40(char *);
void func_00131650(float *, float *);
float func_00132630(float *, float *);
void func_00132580(float *, float, float *);
float func_00132470(char *, float *);
void func_001323E0(float *);
void func_0024BBC0(char *, char *, char *, float *, float);
void func_00105668(float *, float *, float);
short func_00131D10(float, float);
void func_00105760(float *, float *, float);
void func_00104B80(float *, float *, float *);
unsigned char func_002018A0(char *, float *, float *, float *, char *, int);
void func_00207470(int, int);
void func_00105578(float *, float *, float);
void func_001AAD30(char *);
char *func_001B0FD0(char *, int, int);
char *func_001B1610(int, char *);
void func_00407070(char *);
void func_001B1440(char *, char *, char *);
void func_001959E0(char *, int, char *);
void func_001B1430(char *, int);
void func_0013D240(char *, int);

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

static inline void phys_274(char *p) {
    *(float *)(p + 0x54) += *(float *)(p + 0x64) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) += *(float *)(p + 0x74) * *(float *)(p + 0x10);
}

void func_00274140(char *p) {
    float e;
    float d = 10000.0f;
    if (*(unsigned char *)(p + 0x3B9D) == 1 && func_00131B50(*(float *)(p + 0x54) - *(float *)(p + 0x3C44)) < 200.0f) {
        d = func_001324B0(p + 0x50, p + 0x3C40);
    }
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x514));
        func_002490F0(p, 7, 0x1E, -1, 0, 0, -1.0f);
        *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        *(unsigned char *)(p + 0x2866) = 0;
        *(unsigned char *)(p + 0x2867) = 1;
        *(float *)(p + 0x2874) = 0.0f;
        *(short *)(p + 0x2856) = 0;
        func_002DBCC0(p, 1, -7.0f, 0.0f);
        (*(unsigned char *)(p + 0x284C))++;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 7, 0x1F, -1, 0, 0, -1.0f);
        if (*(unsigned char *)(p + 0x2998) == 0x79) {
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x520);
            func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x524) / *(float *)(p + 0x2870), 0.0f);
        } else {
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x528);
            func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x52C) / *(float *)(p + 0x2870), 0.0f);
        }
            func_00330B50(D_01DFABA0, 0x10, p + 0x50, 4);
            func_003305E0(D_01DFABA0, 1, 0x2A, p + 0x50, 0, 0, 0);
        if ((unsigned char)func_002242C0(p) == 0) {
            func_002F30B0(0x58, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        } else {
            func_002F30B0(0x7F, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        }
            func_002DAF70(p, 0xE39, 0, 0, 0.0f);
            *(float *)(p + 0x2878) = 0.0f;
            *(unsigned char *)(p + 0x284C) = 3;
            break;
        }
        if (*(unsigned char *)(p + 0x24D5) == 1 && (*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
            func_002490F0(p, 7, 0x21, -1, 0, 0, -1.0f);
            *(unsigned char *)(p + 0x284C) = 2;
        }
        if (!(d <= *(float *)(*(char **)(p + 0x2844) + 0x51C))) {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
            phys_274(p);
        }
        break;
    case 2:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_002490F0(p, 7, 0x21, -1, 0, 0, 81.0f);
            *(short *)(p + 0x2856) = 1;
        }
        *(float *)(p + 0x2874) = *(float *)(p + 0x2874) + *(float *)(p + 0x10);
        if (!(*(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 0x10) * 2))) {
        if (*(unsigned char *)(p + 0x2998) == 0x79) {
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x520);
            func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x524) / *(float *)(p + 0x2870), 0.0f);
        } else {
            *(float *)(p + 0x2870) = *(float *)(*(char **)(p + 0x2844) + 0x528);
            func_002DBD20(p, *(float *)(*(char **)(p + 0x2844) + 0x52C) / *(float *)(p + 0x2870), 0.0f);
        }
            if (*(short *)(p + 0x2856) == 0) {
                func_00330B50(D_01DFABA0, 0x10, p + 0x50, 4);
                func_003305E0(D_01DFABA0, 1, 0x2A, p + 0x50, 0, 0, 0);
            } else {
                func_00330B50(D_01DFABA0, 0x10, p + 0x50, 4);
                func_00330B50(D_01DFABA0, 0x1A, p + 0x50, 4);
            }
        if ((unsigned char)func_002242C0(p) == 0) {
            func_002F30B0(0x58, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        } else {
            func_002F30B0(0x7F, *(char **)(((char **)(p + 0x1384))[func_002D9EB0(p)] + 0x104), p);
        }
            func_002490F0(p, 7, 0x1F, -1, 0, 0, 6.0f);
            *(unsigned char *)(p + 0x2867) = 0;
            if (*(short *)(p + 0x2856) != 0) {
                func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x6A8));
                *(float *)(p + 0x2878) = *(float *)(*(char **)(p + 0x2844) + 0x6A8);
            } else {
                func_002DAF70(p, 0xE39, 0, 0, 0.0f);
                *(float *)(p + 0x2878) = 0.0f;
            }
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
            *(unsigned char *)(p + 0x284C) = 3;
        }
        break;
    case 3:
        *(float *)(p + 0x2878) = *(float *)(p + 0x2878) - *(float *)(p + 0x10);
        if ((unsigned char)func_002DB2C0(p) != 0 || *(float *)(p + 0x2878) <= 0.0f) {
            e = func_00132510(p + 0x4970);
            if (*(unsigned char *)(p + 0x2867) == 1) {
                func_002DB3E0(p, *(short *)(p + 0x90));
                phys_274(p);
            }
            *(unsigned char *)(p + 0x2867) = 1;
            *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x2870) < 0.0f || !(e <= *(float *)(*(char **)(p + 0x2844) + 0x518)) ||
                d < *(float *)(*(char **)(p + 0x2844) + 0x51C)) {
                if (*(unsigned char *)(p + 0x2998) == 0x79) {
                    if (*(float *)(p + 0x2874) < *(float *)(*(char **)(p + 0x2844) + 0x50C)) {
                        func_002490F0(p, 7, 0x20, -1, 0, 0, -1.0f);
                    } else if (*(short *)(p + 0x2856) == 0) {
                        func_002490F0(p, 7, 0x35, -1, 0, 0, -1.0f);
                    } else {
                        func_002490F0(p, 7, 0x36, -1, 0, 0, -1.0f);
                    }
                } else {
                    if (*(float *)(p + 0x2874) < *(float *)(*(char **)(p + 0x2844) + 0x50C)) {
                        func_002490F0(p, 7, 0x37, -1, 0, 0, -1.0f);
                    } else if (*(short *)(p + 0x2856) == 0) {
                        func_002490F0(p, 7, 0x38, -1, 0, 0, -1.0f);
                    } else {
                        func_002490F0(p, 7, 0x39, -1, 0, 0, -1.0f);
                    }
                }
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB78[0] = D_01DFAB78[0] | 0x1000000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x80000000;
            }
                (*(unsigned char *)(p + 0x284C))++;
            }
        }
        break;
    case 4:
        func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        phys_274(p);
        if (*(unsigned char *)(p + 0x24D5) == 1) *(unsigned char *)(p + 0x2866) = 0;
        if ((unsigned char)func_002496D0(p) == 4) {
            if ((unsigned char)func_002242C0(p) == 0) {
                D_01DFAB78[0] = D_01DFAB78[0] | 0x1000000;
            } else {
                D_01DFAB7C[0] = D_01DFAB7C[0] | 0x80000000;
            }
            func_0021B790(p, 0xA);
            return;
        }
        break;
    }
    if (*(unsigned char *)(p + 0x24D5) == 2) *(unsigned char *)(p + 0x2866) = 1;
    if (*(unsigned char *)(p + 0x2866) == 1 && (unsigned char)func_002D9A10(p, *(short *)(p + 0x90), 1) == 1) {
        *(unsigned char *)(p + 0x2999) = *(unsigned char *)(p + 0x2998);
        *(unsigned char *)(p + 0x2998) = 9;
        func_0021C7E0(p, 0x11, -1, -1);
        func_0025DD40(p);
        return;
    }
}

int func_0024B500(char *p, char *a, char *b) {
    float v80[4] __attribute__((aligned(16)));
    float v70[4] __attribute__((aligned(16)));
    float v60[4] __attribute__((aligned(16)));
    unsigned int f;
    float t;
    f = 0;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v60), "r"((b + 0x130)), "r"((b + 0x120)) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v70), "r"((b + 0x120)), "r"((b + 0x130)) : "memory");
    func_00131650(v60, v60);
    func_00131650(v70, v70);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v80), "r"((a + 0xD0)), "r"((b + 0x120)) : "memory");
    if (func_00132630(v80, v60) < 0.0f) f |= 1;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v80), "r"((a + 0xD0)), "r"((b + 0x130)) : "memory");
    if ((t = func_00132630(v80, v70)) < 0.0f) f |= 2;
    switch (f) {
    case 0:
        func_00132580(v80, t, v70);
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(v80), "r"(b + 0x130) : "memory");
        break;
    case 1:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v80), "r"((b + 0x120)) : "memory");
        break;
    case 2:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v80), "r"((b + 0x130)) : "memory");
        break;
    case 3:
        return 1;
    }
    t = func_00132470(a + 0xD0, v80);
    if (t < *(float *)(a + 0x130) + *(float *)(b + 0x140)) {
        t = *(float *)(a + 0x130) + *(float *)(b + 0x140) - t;
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(v80), "r"(a + 0xD0) : "memory");
        func_001323E0(v80);
        func_0024BBC0(p, a, b, v80, t);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"((a + 0x120)), "r"((a + 0xD0)) : "memory");
        return 1;
    }
    return 0;
}

int func_00245590(char *p, float *pos, float *dir, char *out, float a, float h) {
    float m[16] __attribute__((aligned(16)));
    float v80[4] __attribute__((aligned(16)));
    float v70[4] __attribute__((aligned(16)));
    float v60[4] __attribute__((aligned(16)));
    float z;
    float side;
    short ang;
    unsigned int i;
    z = 80.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105668(m, m, a);
    ang = func_00131D10(dir[0], dir[2]);
    if ((unsigned short)(*(short *)(p + 0x90) - ang) < 0x8000) {
        ang = ang + 0x4000;
        side = -120.0f;
    } else {
        ang = ang - 0x4000;
        side = 120.0f;
    }
    func_00105760(m, m, 6.283185f * ((float)ang / 65536.0f));
    v80[3] = 1.0f;
    v80[0] = 0.0f;
    v80[1] = 0.0f;
    v80[2] = h;
    func_00104B80(v80, m, v80);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v80), "r"(pos) : "memory");
    if (func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v80, pos, v60, out, 0) == 0) {
        for (i = 0; i < 4; i++) {
            v80[3] = 1.0f;
            v80[0] = 0.0f;
            v80[2] = z;
            v80[1] = 0.0f;
            func_00104B80(v80, m, v80);
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v80), "r"(pos) : "memory");
            v70[1] = 0.0f;
            v70[3] = 1.0f;
            v70[0] = side;
            v70[2] = z;
            func_00104B80(v70, m, v70);
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v70), "r"(pos) : "memory");
            if (func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v80, v70, v60, out, 0) == 0) return 0;
            z += h / 4.0f;
        }
    }
    return 1;
}

void func_00316180(char *p, signed char k) {
    switch (k) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
        func_00207470(*(signed char *)(*(char **)(p + 0xC) + 0), *(short *)(*(char **)(p + 0xC) + 2));
        break;
    case 8: case 9: case 10:
        func_00207470(*(signed char *)(*(char **)(p + 0xC) + 8), *(short *)(*(char **)(p + 0xC) + 0xA));
        break;
    }
}

void func_00315980(char *p, signed char k) {
    switch (k) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
        func_00207470(3, 0x1C);
        break;
    case 8: case 9:
        func_00207470(3, 4);
        break;
    case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
        func_00207470(3, 0x91);
        break;
    }
}

void func_0041DDC0(signed char k, float *a, float *b, float *out) {
    float m[16] __attribute__((aligned(16)));
    float v80[4] __attribute__((aligned(16)));
    float v70[4] __attribute__((aligned(16)));
    float v60[4] __attribute__((aligned(16)));
    short s;
    float ang;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v70), "r"(a) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v60), "r"(b) : "memory");
    s = func_0034B940((char *)v60, (char *)v70);
    v80[1] = 500.0f;
    v80[0] = 0.0f;
    v80[2] = 0.0f;
    v80[3] = 1.0f;
    switch (k) {
    case 0: case 11: ang = 3.1415925f; break;
    case 1: case 12: ang = 2.3561945f; break;
    case 2: case 13: ang = 1.5707963f; break;
    case 3: case 14: ang = 0.7853981f; break;
    case 4: case 15: ang = 0.0f; break;
    case 5: case 16: ang = -0.6981317f; break;
    case 6: case 17: ang = -1.5707963f; break;
    case 7: case 18: ang = -2.3561945f; break;
    case 8: case 9: case 10:
        v80[3] = 1.0f;
        v80[2] = -300.0f;
        v80[0] = 0.0f;
        ang = 0.0f;
        v80[1] = 0.0f;
        break;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105578(m, m, ang);
    func_00105760(m, m, 6.283185f * ((float)s / 65536.0f));
    func_00104B80(v80, m, v80);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(out), "r"(v80), "r"(a) : "memory");
}

typedef struct { unsigned char f; int x; char **pp; } HB;
void func_001B51D0(char *);
void func_00207410(char *, char *, char *, char *);
void func_00207460(char *, char *, char *);
extern char D_01DF7E20[];
char *func_0013D2A0(char *, char *, int);
char *func_001B5E00(char *, char *);
void func_0038ACB0(char *);

char *func_00406F20(char *p, char *s) {
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
    **q = func_001B0FD0(a, 0x420, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x420, t);
        if (r != 0) {
            func_00407070(r);
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
        *(char **)(ret + 0x410) = p;
        func_00105300((float *)(ret + 0x3D0), s);
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

char *func_001B4FD0(char *a0, char *a1, char *a2, char *a3, char *a4, char *a5, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    int i;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    if (D_01DF7E20 == 0) {
        **q = func_001B0FD0(a, 0xAC0, 1);
    } else {
        **q = func_0013D2A0(a, D_01DF7E20, 0xAC0);
    }
    if ((t = **q) != 0) {
        r = func_001B1610(0xAC0, t);
        if (r != 0) {
            func_001B51D0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xC, **q);
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
        func_00207410(ret, a0, a3, a4);
        func_00207460(ret, a1, a5);
        *(float *)(ret + 0x40) = f;
        *(char **)(ret + 0x440) = a2;
        *(int *)(ret + 0xC0) = *(int *)(a2 + 0x64);
        for (i = 0; i < *(unsigned short *)(a2 + 0xC0); i++) {
            func_001B5E00(((char **)*(char **)(a2 + 0xC4))[i], ret);
        }
    }
    return ret;
}

typedef struct { float f[4]; } SF4; typedef struct { float f[3]; } SF3;
extern float D_005BDCD4;
extern float D_005BDCD8;
extern float D_005BDCDC;
void func_00133890(float *, float *, float *);
void func_0041E190(char *, char *, float);
float func_0041DB20(char *);
void func_0034BA60(int, char *, int, int, int);
void func_003C5480(char *, float *, int);
void func_003DC100(char *, float *);
extern char *D_005BE190[];
void func_00316F30(char *, float *, int);
void func_001316B0(char *, float *, float *, float);
void func_003176C0(char *, char *, char *);
extern char D_0054F038[];
extern char D_005BC280[8];
extern char D_0054F048[];
extern char D_005BC288[8];
extern char D_0054F058[];
extern char D_0054F068[];
extern char D_005BC290[4];
extern char D_005BC294[4];
int func_0012B1A0(char *, char *);
void func_002E2800(char *, int, int);
void func_002E3690(char *, int, int, int);

char *func_0038AA80(char *sc) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    if (*(unsigned char *)(sc + 0x3A) == 1 && *(short *)(sc + 0x3E) < 0) {
        return 0;
    }
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x420, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x420, t);
        if (r != 0) {
            func_0038ACB0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x3, **q);
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
    o = ret;
    if (o == 0) {
        return 0;
    }
    *(SF4 *)(o + 0xDC) = *(SF4 *)sc;
    *(SF4 *)(o + 0xEC) = *(SF4 *)(sc + 0x10);
    *(SF3 *)(o + 0xFC) = *(SF3 *)(sc + 0x20);
    *(SF3 *)(o + 0x108) = *(SF3 *)(sc + 0x2C);
    *(unsigned char *)(o + 0x114) = *(unsigned char *)(sc + 0x38);
    *(unsigned char *)(o + 0x115) = *(unsigned char *)(sc + 0x39);
    *(unsigned char *)(o + 0x116) = *(unsigned char *)(sc + 0x3A);
    *(unsigned char *)(o + 0x117) = *(unsigned char *)(sc + 0x3B);
    *(unsigned char *)(o + 0x118) = *(unsigned char *)(sc + 0x3C);
    *(short *)(o + 0x11A) = *(short *)(sc + 0x3E);
    *(float *)(o + 0x11C) = *(float *)(sc + 0x40);
    *(SF3 *)(o + 0x120) = *(SF3 *)(sc + 0x44);
    *(unsigned char *)(o + 0x12C) = *(unsigned char *)(sc + 0x50);
    *(int *)(o + 0x130) = *(int *)(sc + 0x54);
    *(int *)(o + 0x134) = *(int *)(sc + 0x58);
    *(unsigned char *)(ret + 0x180) = 1;
    return ret;
}

static inline float frand485(void) { return 2.3283064e-10f * (float)mt_rand(); }

void func_00485F70(char *p, float *out, float t) {
    float v[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float up[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    v[0] = (1.0f - t) * (D_005BDCD4 * (frand485() - 0.5f));
    v[1] = (1.0f - t) * (D_005BDCDC + D_005BDCD8 * (frand485() - 0.5f));
    v[2] = *(float *)(p + 0x158) * t;
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x400), "r"(p + 0x3F0) : "memory");
    up[0] = 0.0f;
    up[1] = 1.0f;
    up[2] = 0.0f;
    up[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00133890(m, d, up);
    func_00104B80(v, m, v);
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(out), "r"(v), "r"(p + 0x3F0) : "memory");
    out[3] = 1.0f;
}

static inline float frand3D1(void) { return 2.3283064e-10f * (float)mt_rand(); }

void func_003D18E0(char *p) {
    float v[4] __attribute__((aligned(16)));
    float r;
    v[1] = 60.0f;
    v[0] = 0.0f;
    v[2] = 150.0f;
    v[3] = 1.0f;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 30.0f;
    *(float *)(p + 0x68) = 20.0f;
    *(float *)(p + 0x6C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(*(char **)(*(char **)(p + 0x194) + 0x104) + 0x30) : "memory");
    func_0041E190((char *)v, (char *)v, 6.283185f * ((float)*(short *)(*(char **)(p + 0xD0) + 0x90) / 65536.0f));
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(v) : "memory");
    r = 20.0f * frand3D1();
    *(float *)(p + 0x68) = func_0041DB20(p + 0x50) / (65.0f + r);
    *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    *(float *)(p + 0x84) = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    if (*(int *)(p + 0xB88) == 5) {
        *(float *)(p + 0xB70) = 0.0f;
        *(float *)(p + 0xB74) = 0.0f;
        *(float *)(p + 0xB78) = 0.0f;
        *(float *)(p + 0xB7C) = 1.0f;
    } else {
        *(float *)(p + 0xB70) = 0.0f;
        *(float *)(p + 0xB74) = 0.0f;
        *(float *)(p + 0xB78) = 300.0f;
        *(float *)(p + 0xB7C) = 1.0f;
        func_0041E190(p + 0xB70, p + 0xB70, 6.283185f * (60.0f * (float)*(unsigned int *)(p + 0xB88) / 360.0f));
    }
}

void func_003DBE50(char *p) {
    float v[4] __attribute__((aligned(16)));
    char *q;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0034BA60(0x4D, p + 0x50, 0x35, 0, 1);
        if (mt_rand() & 1) {
            func_0034BA60(0x4E, p + 0x50, 0x35, 0, 1);
        }
    case 1:
        if (*(unsigned char *)(p + 0xEFC) == 1) {
        q = *(char **)(p + 0x308);
        if (q != 0) {
            if (*(unsigned char *)(q + 0x1CE1) == 1) {
                func_003C5480(q, v, *(unsigned char *)(p + 0xF00));
                if ((*(float *)(p + 0xEEC) -= *(float *)(p + 0x10)) < 0.0f) {
                    *(float *)(p + 0xEEC) = 10.0f;
                    func_0034BA60(0x4A, p + 0x50, 0x35, 0, 1);
                }
                if (mt_rand() % 60 == 0) {
                    func_0034BA60(0x4B, p + 0x50, 0x35, 0, 1);
                }
            } else {
                *(unsigned char *)(p + 0xF05) = 1;
            }
        }
        } else {
            return;
        }
        if (!(func_00132470((char *)v, (float *)(p + 0x50)) <= 100.0f)) {
            func_003DC100(p, v);
        }
        *(float *)(p + 0x54) = 110.0f;
        *(short *)(p + 0x90) = func_0034B940(((char **)(*(char **)D_01CAFF0C + 0xC))[*(unsigned char *)(p + 0xF02)] + 0x50, p + 0x50);
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0xAF0);
}

void func_005088F0(char *p) {
    float v[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    short s;
    char *o;
    int n;
    float d;
    o = D_005BE190[0];
    s = 0;
    func_00316F30(p, a, 0);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(o + 0x50) : "memory");
    v[1] = v[1] + 100.0f;
    v[3] = 1.0f;
    func_001316B0(p + 0x190, v, a, 0.4f);
    *(float *)(p + 0x19C) = 1.0f;
    d = func_001324B0((char *)a, p + 0x190) / 0.4142129f;
    *(float *)(p + 0x238) = d;
    if (d < 400.0f) *(float *)(p + 0x238) = 400.0f;
    if (!(*(float *)(p + 0x238) <= 800.0f)) {
        *(float *)(p + 0x210) = 0.034906585f;
        s = func_0034B940(p + 0x190, (char *)a);
        s = s - 0x38E;
        s = s - *(short *)(p + 0x24A);
        n = 0x7F;
        *(float *)(p + 0x238) = func_001324B0((char *)a, p + 0x190);
        *(float *)(p + 0x238) = *(float *)(p + 0x238) + 400.0f;
    } else {
        *(float *)(p + 0x210) = 0.2617994f;
        n = 0;
        s = 0;
    }
    func_0034B8C0((short *)(p + 0x24A), &s, n);
    *(float *)(p + 0x214) = 6.283185f * ((float)*(short *)(p + 0x24A) / 65536.0f);
    func_003176C0(p, p + 0x1A0, p + 0x190);
}

typedef struct { int r[4]; } RD2E3;

void func_0022CB30(RD2E3 *);
void func_0022CB50(RD2E3 *, char *);
int func_0022CBA0(RD2E3 *);
void func_0022CBB0(RD2E3 *, char *);
int func_0022CD60(RD2E3 *);
float func_0022CD90(RD2E3 *);
int func_002070F0(char *);
void func_00207100(char *, float *);
void func_00104C00(float *, float *, char *);
void func_00104E78(float *, float *);
float func_001324E0(float *);
void func_001EFFE0(char *, float);

static inline char *el2E3(char *p, int i) { if (i >= *(int *)(p + 0x30)) return 0; return *(char **)p + i * 0x80; }

void func_002E37C0(char *p, char *src) {
    RD2E3 rd;
    char w[64];
    float f;
    int a;
    func_0022CB30(&rd);
    func_0022CB50(&rd, src);
    while (!func_0022CBA0(&rd)) {
        func_0022CBB0(&rd, w);
        if (func_0012B1A0(w, D_0054F038) == 0) {
            *(int *)(p + 0x44) = func_0022CD60(&rd);
            f = func_0022CD90(&rd);
            *(float *)(p + 0x48) = f;
            func_002E2800(p, *(int *)(p + 0x44), (int)f);
            el2E3(p, 0)[0x78] = 1;
            el2E3(p, *(int *)(p + 0x44) - 1)[0x78] = 1;
        } else if (func_0012B1A0(w, D_005BC280) == 0) {
            *(float *)(p + 0x20) = func_0022CD90(&rd);
            *(float *)(p + 0x24) = func_0022CD90(&rd);
            *(float *)(p + 0x28) = func_0022CD90(&rd);
        } else if (func_0012B1A0(w, D_0054F048) == 0) {
            *(float *)(p + 0x8) = func_0022CD90(&rd);
        } else if (func_0012B1A0(w, D_005BC288) == 0) {
            *(float *)(p + 0xC) = func_0022CD90(&rd);
        } else if (func_0012B1A0(w, D_0054F058) == 0) {
            *(float *)(p + 0x14) = func_0022CD90(&rd);
        } else if (func_0012B1A0(w, D_0054F068) == 0) {
            *(float *)(p + 0x64) = func_0022CD90(&rd);
        } else if (func_0012B1A0(w, D_005BC290) == 0) {
            a = func_0022CD60(&rd);
            func_002E3690(p, a, func_0022CD60(&rd), 0);
        } else if (func_0012B1A0(w, D_005BC294) == 0) {
            return;
        }
    }
}

static inline char *plDC2(int i) { return ((char **)(*(char **)D_01CAFF0C + 0xC))[i]; }

void func_003DC220(char *p) {
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

typedef struct { float x, y, z, w; } V4F __attribute__((aligned(16)));
extern char D_005BE098[8];
void func_0048D820(char *);
unsigned char func_0048D140(char *);
float func_0011DBE0(float, float);
void func_00195E20(char *, char *);

void func_001F0170(char *p) {
    V4F w;
    V4F v;
    float n[16] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float l;
    float s;
    float d;
    float r;
    *(float *)(p + 0x6EC) += *(float *)(p + 0x6F8) * *(float *)(p + 0x10);
    *(float *)(p + 0x6F0) += *(float *)(p + 0x6FC) * *(float *)(p + 0x10);
    *(float *)(p + 0x6F4) += *(float *)(p + 0x700) * *(float *)(p + 0x10);
    v.x = 0.0f;
    ((float *)&v)[1] = *(float *)(p + 0x748) * *(float *)(p + 0x10);
    ((float *)&v)[2] = 0.0f;
    v.w = 1.0f;
    if ((unsigned char)func_002070F0(p) == 1) {
        func_00207100(p, m);
        func_00104C00(n, m, p + 0x50);
    } else {
        func_00105300(n, p + 0x50);
    }
    n[12] = 0.0f;
    n[13] = 0.0f;
    n[14] = 0.0f;
    func_00104E78(n, n);
    func_00104B80((float *)&v, n, (float *)&v);
    *(float *)(p + 0x6EC) += v.x;
    *(float *)(p + 0x6F0) += v.y;
    *(float *)(p + 0x6F4) += v.z;
    w.x = *(float *)(p + 0x6F8);
    w.y = *(float *)(p + 0x6FC);
    w.z = *(float *)(p + 0x700);
    w.w = 1.0f;
    r = func_001324E0((float *)&w);
    l = r;
    s = *(float *)(*(char **)(p + 0xA0) + 0x7C);
    d = s * *(float *)(p + 0x10);
    if (s < 1.0f && !(d < 1.0f)) d = 0.99999f;
    r -= d;
    if (!(l <= 0.0f)) {
        if (r < 0.0f) r = 0.0f;
    } else if (l < 0.0f) {
        if (!(r <= 0.0f)) r = 0.0f;
    } else {
        r = 0.0f;
    }
    func_001EFFE0(p, r);
}

void func_0039A470(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float a;
    float b;
    a = 6.283185f * ((float)*(short *)(p + 0x2DEA) / 65536.0f);
    b = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(p + 0x60) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(v), "f"(*(float *)(p + 0x10)) : "t0", "memory");
    v[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105668(m, m, a);
    func_00105760(m, m, b);
    func_00104B80(v, m, v);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
}

typedef struct { float v[4]; } V48C __attribute__((aligned(16)));

extern V48C D_00586710;
void func_00133010(char *, char *, V48C *);
unsigned char func_004820F0(char *);
void func_00482070(char *);
float func_0034C160(float, float, float);
float func_00131BA0(short);
extern float D_005BDED0;
void func_001B6460(int *, float *);
void func_001B6470(int *, char *);
void func_001B64B0(int *, char *);
void func_001B64E0(int *, char *);
void func_001B6500(int *, int);
void func_001B6510(int *, int);
void func_001B6520(int *, int);
void func_001B6530(int *, unsigned short);
void func_001B6540(int *, int);
void func_001B6550(int *, unsigned char);
void func_001B6560(int *, float);
void func_001B90E0(int *, int);
void func_001B9520(int *, int);
int func_003016E0(char *);
extern int D_01C61820[];

void func_0048CE50(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    V48C up;
    func_0048D820(p + 0x1130);
    if (*(char **)(p + 0x22C) != 0 && (*(int *)(*(char **)(p + 0x22C) + 8) & 0x20000)) {
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        return;
    }
    if (func_0048D140(p) == 1) return;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0xF0), "f"(*(float *)(p + 0x10)) : "t0", "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(tmp) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
    up = D_00586710;
    func_00133010(p + 0x150, p + 0xF0, &up);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    func_0028C5C0(p + 0x1B0, 0, *(float *)(p + 0x10));
    func_00195E20(D_005BE098, p);
}

void func_00481310(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    float f;
    if (*(unsigned char *)(p + 0x281) == 0 && func_004820F0(p) == 1) {
        if (*(unsigned char *)(p + 0x281) == 1) {
            func_001ACC30(D_005BE09C, 3, 0x32, 0x1E, 0);
        } else {
            func_00482070(p);
            func_001ACC30(D_005BE09C, 3, 0xF, 0xA, 0);
        }
    }
    if (*(unsigned char *)(p + 0x281) == 0) {
        *(float *)(p + 0x2A8) = func_0034C160(*(float *)(p + 0x2A8), 13.0f, 0.05f * *(float *)(p + 0x10));
        *(short *)(p + 0x28C) += 1024.0f * *(float *)(p + 0x10);
        f = *(float *)(p + 0x2A8) + 12.0f * func_00131BA0(*(short *)(p + 0x28C));
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x300), "f"(f) : "t0", "memory");
        *(float *)(p + 0x50) += tmp[0] * *(float *)(p + 0x10);
        *(float *)(p + 0x54) += tmp[1] * *(float *)(p + 0x10);
        *(float *)(p + 0x58) += tmp[2] * *(float *)(p + 0x10);
    }
}

void func_004F5410(char *p, short a, unsigned char flag, float f) {
    float v[4] __attribute__((aligned(16)));
    float m2[16] __attribute__((aligned(16)));
    float m1[16] __attribute__((aligned(16)));
    char *q;
    char *b;
    short ang;
    q = *(char **)(*(char **)D_01CAFF0C + 0xC);
    if (flag == 0) {
        b = *(char **)(((char **)(q + 0x1388))[func_002D9EB0(q)] + 0x104) + 0x30;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xBD0), "r"(b) : "memory");
    } else {
        b = p + 0xBD0;
    }
    ang = a + (*(short *)(p + 0xBEA) + *(int *)(p + 0xBC0) * 0x2AAB);
    v[0] = 0.0f;
    v[1] = f;
    v[2] = D_005BDED0;
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m2), "r"(v) : "memory");
    func_00105760(m1, m2, 6.283185f * ((float)ang / 65536.0f));
    __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(m1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v), "r"(b) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0x50), "r"(b) : "memory");
}

typedef struct { char pad[0x14]; unsigned char b14; char pad2[0x9B]; } E301;
void func_001ACCA0(int, int);
void func_002D9FE0(char *, int);
void func_0024FE00(char *);
void func_00320540(char *);
void func_0031E400(char *);
void func_00100450(char *, void *, void *, int, int);
void func_002790E0(char *);
void func_0031DCB0(char *);
void func_002030F0(char *);
void func_00203090(char *, int);
void func_0013D6A0(char *);
void func_0024D930(char *);
void func_0028C110(char *);
void func_00291100(char *);
void func_002047C0(char *, int);
void func_002E7BF0(char *);
void func_002E8A10(char *);
void func_00313E20(char *);
void func_0022C820(char *);
void func_002E1BC0(char *);
void func_003C9D90(char *);
void func_003AD780(char *);
extern char D_005B1930[], D_005B1954[], D_005B19D4[], D_005B1A68[], D_005B1B34[], D_005B1BEC[];
extern char D_005A77A0[], D_005AAA98[], D_005B0890[], D_005AFA60[];

void func_003014F0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float s = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_001B6470(D_01C61820, *(char **)(p + 0x44) + 0x2C0);
    func_001B64B0(D_01C61820, *(char **)(p + 0x44) + 0x2D80);
    func_001B6460(D_01C61820, m);
    func_001B6560(D_01C61820, (float)(unsigned int)s);
    func_001B6530(D_01C61820, *(int *)(*(char **)(p + 0x44) + 0x42F0) * 3);
    func_001B6510(D_01C61820, 2);
    func_001B6520(D_01C61820, 0);
    func_001B6550(D_01C61820, (*(E301 **)(p + 0x40))[*(short *)(p + 0x3A)].b14);
    func_001B6540(D_01C61820, 0);
    if (*(unsigned char *)(p + 0x39) == 1) {
        if ((unsigned char)func_003016E0(p) != 0) {
            func_001B64E0(D_01C61820, *(char **)(p + 0x44) + 0x3830);
            func_001B6500(D_01C61820, *(int *)(*(char **)(p + 0x44) + 0x42E0));
            func_001B9520(D_01C61820, 0);
        }
    } else {
        func_001B90E0(D_01C61820, 0);
    }
}

#define PAD249(p) (p + *(unsigned char *)(p + 0x28A0) * 0x1A0 + 0x41F0)

void func_00249A00(char *p, signed char m) {
    unsigned char c;
    unsigned int i;
    int k;
    if (m == 1) {
        *(unsigned char *)(p + 0x24D1) = func_0024E780(PAD249(p), 0, 0);
        *(unsigned char *)(p + 0x24EC) = *(unsigned char *)(p + 0x24D2);
        c = func_0024E780(PAD249(p), 0, 1);
        if (c != 0) {
            *(unsigned char *)(p + 0x24D2) = c & ~0xC0;
            *(unsigned char *)(p + 0x24EB) = c & 0xC0;
        }
        *(unsigned char *)(p + 0x24ED) = *(unsigned char *)(p + 0x24D3);
        *(unsigned char *)(p + 0x24D3) = func_0024E780(PAD249(p), 0, 2);
        c = *(unsigned char *)(p + 0x24D3);
        if (c & 0x40) {
            *(unsigned char *)(p + 0x24EF) = c;
        } else if (*(unsigned char *)(p + 0x24ED) != c) {
            if (c & 0x20) {
                func_002D9FE0(p, c & 0xF);
                func_0024E7B0(PAD249(p), 0, 2);
            } else if (c & 0x10) {
                func_001ACCA0(D_005BE09C, c & 0xF);
                func_0024E7B0(PAD249(p), 0, 2);
            }
        }
        *(unsigned char *)(p + 0x24D4) = func_0024E780(PAD249(p), 0, 3);
        *(unsigned char *)(p + 0x24D5) = func_0024E780(PAD249(p), 0, 4);
        func_0024E7B0(PAD249(p), 0, 4);
        for (i = 0; i < 5; i++) {
            *(unsigned char *)(p + i + 0x24D6) = func_0024E780(PAD249(p), 1, i);
            c = *(unsigned char *)(p + i + 0x24D6);
            k = c & 0xF;
            switch ((unsigned char)(c & 0xF0)) {
            case 0x10:
                *(signed char *)(p + (unsigned char)k + 0x24DB) = 2;
                break;
            case 0x20:
                *(signed char *)(p + (unsigned char)k + 0x24DB) = 0;
                break;
            case 0x30:
                *(signed char *)(p + (unsigned char)k + 0x24DB) = 1;
                break;
            case 0:
                break;
            }
        }
        return;
    }
    if ((unsigned char)func_0024E780(p + *(unsigned char *)(p + 0x28A0) * 0x1A0 + 0x4120, 0, 2) & 0x80) {
        *(signed char *)(p + 0x24CE) = 1;
        return;
    }
    *(signed char *)(p + 0x24CE) = 0;
}

typedef struct { char pad[0x7F4]; int a[44]; int b[44]; } S3E1;
extern int D_01CAFF38[];
extern char D_0056CCF4[];
extern unsigned char D_0056CB66[];
extern unsigned char D_0056CB67[];
unsigned int func_002F2FC0(char *, unsigned int);
void func_003FA3F0(char *, int);
int func_0034B800(char *, char *, short, short, float);
extern char D_01CAF570[];
extern char D_005D0E78[];
extern char D_00666750[];
extern char D_01DFA310[];
extern char D_00540330[];
extern int D_01CAFF30[];
extern unsigned char D_01CAFF3F[];
extern unsigned char D_00666712[];
extern int D_01CB12BC[];
int func_002871D0(int);
void func_00323140(int, int, int, int, int);
void func_00323100(int);
void func_003712B0(char *, int);
void func_0013DC30(char *, int, int);
int func_001AFB90(char *, int, int, int);
char *func_001AF3F0(char *, char *, int, int);
void func_0030E440(char *, int);
void func_0030E580(char *, char *);
void func_002DD470(void);
void func_002DD840(void);
void func_002DD890(void);
void func_0030E540(char *);
void func_001AF080(char *, char *);
void func_00195520(char *, int);

char *func_003E1A60(char *p) {
    int i;
    S3E1 *q = (S3E1 *)p;
    int j;
    char *s;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E400(p + 0x1D0);
    *(char **)(p + 0x0) = D_005B1930;
    *(char **)(p + 0x40) = D_005B1954;
    *(char **)(p + 0xA0) = D_005B19D4;
    *(char **)(p + 0xD0) = D_005B1A68;
    *(char **)(p + 0x130) = D_005B1B34;
    *(char **)(p + 0x1D0) = D_005B1BEC;
    func_00100450(p + 0x1D8, (void *)func_001AAD30, (void *)func_0013D240, 0x10, 0x50);
    func_002790E0(p + 0x980);
    func_002790E0(p + 0xF80);
    func_0031DCB0(p + 0x1580);
    func_0031DCB0(p + 0x1610);
    func_002790E0(p + 0x16C0);
    func_00100450(p + 0x1CC0, (void *)func_002030F0, (void *)func_00203090, 0x40, 6);
    s = p + 0x1E40;
    *(float *)(p + 0x1E48) = 0.3f;
    *(float *)(p + 0x1E4C) = 0.98f;
    *(float *)(p + 0x1E50) = 0.95f;
    *(float *)(p + 0x1E54) = 50.0f;
    *(float *)(p + 0x1E60) = 0.0f;
    *(float *)(p + 0x1E64) = -0.1f;
    *(float *)(p + 0x1E68) = 0.0f;
    *(float *)(p + 0x1E6C) = 0.0f;
    *(int *)(p + 0x1E44) = 0;
    func_0013D6A0(s + 0x34);
    *(int *)(s + 0) = 0;
    *(int *)(s + 0x30) = 0;
    *(float *)(s + 0x64) = -999999.0f;
    *(float *)(s + 0x50) = 0.0f;
    *(float *)(s + 0x54) = 0.0f;
    *(float *)(s + 0x58) = 0.0f;
    *(float *)(s + 0x5C) = 0.0f;
    *(float *)(s + 0x60) = 0.0f;
    *(float *)(s + 0x68) = 1.0f;
    func_0024D930(p + 0x1FD0);
    func_0024D930(p + 0x20A0);
    func_0028C110(p + 0x2180);
    *(char *)(p + 0x23A0) = 0;
    *(char *)(p + 0x23A1) = 0;
    *(short *)(p + 0x23A2) = 0;
    *(int *)(p + 0x23A8) = 0;
    *(int *)(p + 0x23AC) = 0;
    *(int *)(p + 0x23B0) = 0;
    *(float *)(p + 0x23C0) = 0.0f;
    *(float *)(p + 0x23C4) = 0.0f;
    *(float *)(p + 0x23C8) = 0.0f;
    *(float *)(p + 0x23CC) = 1.0f;
    *(float *)(p + 0x23D0) = 100000.0f;
    *(char *)(p + 0x23D4) = 0;
    *(char *)(p + 0x23D5) = 0;
    *(short *)(p + 0x23D6) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + 0x23D8 + i * 2) = -1;
    func_00100450(p + 0x23F0, (void *)func_00291100, (void *)func_002047C0, 0x50, 0x28);
    func_002E7BF0(p + 0x33A8);
    func_002E8A10(p + 0x33F4);
    func_00313E20(p + 0x340C);
    s = p + 0x36F0;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005AAA98;
    func_002E1BC0(s);
    s = p + 0x3780;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005AAA98;
    func_002E1BC0(s);
    s = p + 0x3810;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005AAA98;
    func_002E1BC0(s);
    s = p + 0x38A0;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005AAA98;
    func_002E1BC0(s);
    s = p + 0x3940;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005B0890;
    func_003C9D90(s);
    s = p + 0x39A0;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005B0890;
    func_003C9D90(s);
    s = p + 0x3AF0;
    *(char **)(s + 0x10) = D_005A77A0;
    func_0022C820(s);
    *(char **)(s + 0x10) = D_005AFA60;
    func_003AD780(s);
    q = (S3E1 *)p;
    for (j = 0; j < 44; j++) {
        q->b[j] = 0;
        q->a[j] = 0;
    }
    return p;
}

static inline int lt425(float a, float b) { return a < b; }

void func_00425970(char *p) {
    int *t;
    char *e;
    float *q;
    float r;
    float acc;
    unsigned char lim;
    t = *(int **)(D_0056CCF4 + *(unsigned char *)(p + 5) * 52);
    lim = 14;
    if (D_01CAFF38[0] != 0x191) lim = 8;
    if (func_002F2FC0(*(char **)(*(char **)D_01CAFF0C + 0x20), 0x10000000) < lim && (*(unsigned char *)(p + 0x496) & 1)) {
        (*(signed char *)(p + 0x48B))--;
        if (!(*(signed char *)(p + 0x48B) > 0)) {
            *(unsigned char *)(p + 0x48B) = D_0056CB66[*(unsigned char *)(p + 0x3AB) * 36] + (unsigned char)(unsigned int)((float)D_0056CB67[*(unsigned char *)(p + 0x3AB) * 36] * (2.3283064e-10f * mt_rand()));
            func_003FA3F0(p, 7);
            return;
        }
    }
    for (; *t != 0; t += 3) {
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, *(short *)(p + 0x90) + *(short *)((char *)t + 4), *(short *)((char *)t + 6), *(float *)((char *)t + 8)) == 1) {
            e = *(char **)t;
            r = 100.0f * (2.3283064e-10f * mt_rand());
            acc = 0.0f;
            q = (float *)((char *)(*(unsigned char *)(p + 0x3AB) * 4) + (int)e);
        lp:
            acc += *q;
            if (!lt425(r, acc)) goto adv;
            if (*(unsigned short *)(e + 0x10) == *(unsigned char *)(p + 5)) return;
            func_003FA3F0(p, *(unsigned short *)(e + 0x10));
            return;
        adv:
            q += 5;
            e += 0x14;
            goto lp;
        }
    }
}

static inline char *ent2DC(char *t, unsigned short i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(i * 4 + t + 8) == 0) { r = 0; } else { r = t + *(int *)(i * 4 + t + 8); } return r; }

static inline char *gch2DC(char *h, unsigned short i) { char *r; char *t; unsigned short k = i; if (**(unsigned short **)(h + 8) == 0) { t = *(char **)(h + 0xC); r = ent2DC(t, k); } else { r = *(char **)(h + 0xC); } return r; }

static inline int fl2DC(char *q) { return (*(unsigned int *)(q + 0x6C) & 0x40000) != 0; }

int func_002DCF60(char *p) {
    unsigned char ok;
    switch (*(int *)(p + 0x10)) {
    case 0:
        if (func_002871D0(*(int *)(*(char **)(p + 0xC) + 8)) != 0) {
            (*(int *)(p + 0x10))++;
            *(int *)(p + 0x64) = 6;
            func_00323140(*(int *)(*(char **)(p + 0xC) + 0xC), 0, 0x20, 4, 4);
        }
        break;
    case 1:
        if (--*(int *)(p + 0x64) < 0) {
            (*(int *)(p + 0x10))++;
            func_00323100(*(int *)(*(char **)(p + 0xC) + 0xC));
        }
        break;
    case 2:
        func_003712B0(D_01CAF570, 0);
        if (D_01CAFF30[0] < 0xE) {
            func_0013DC30(D_005D0E78, 0x33, 0);
        } else {
            func_0013DC30(D_005D0E78, 0x34, 0);
        }
        (*(int *)(p + 0x10))++;
        *(int *)(p + 0x14) = 0;
        *(int *)(p + 0x18) = 0;
        if (*(signed char *)(p + 0x1C) == -1) {
            *(int *)(p + 0x4C) = func_001AFB90(D_00666750, D_01CAFF30[0] + 0xC8, 0, 8);
            *(int *)(p + 0x50) = func_001AFB90(D_00666750, 0xE6, 0, 8);
            *(int *)(p + 0x54) = func_001AFB90(D_00666750, 0xE7, 0, 8);
        } else {
            *(int *)(p + 0x4C) = func_001AFB90(D_00666750, *(signed char *)(p + 0x1C) + 0x1B66, 0, 8);
            *(int *)(p + 0x50) = func_001AFB90(D_00666750, 0x1B73, 0, 8);
            *(int *)(p + 0x54) = func_001AFB90(D_00666750, 0xE7, 0, 8);
        }
        *(char **)(p + 0x5C) = func_001AF3F0(D_00666750, D_00540330 + D_00666712[0] * 4, 0, 0);
        break;
    case 3:
        ok = 1;
        if (*(unsigned char *)(*(char **)(p + 0x5C) + 1) != 0 && *(unsigned char *)(*(char **)(p + 0x5C) + 1) != 3) ok = 0;
        if (ok == 1) {
            func_0030E440(D_01DFA310, D_01CB12BC[0]);
            func_0030E580(D_01DFA310, gch2DC(*(char **)(p + 0x5C), 0));
            func_0030E580(D_01DFA310, gch2DC(*(char **)(p + 0x5C), 1));
            func_0030E580(D_01DFA310, gch2DC(*(char **)(p + 0x5C), 2));
            if (D_01CAFF30[0] == 1 && D_01CAFF3F[0] == 1 && fl2DC(*(char **)(p + 0xC)) == 0) {
                (*(int *)(p + 0x10))++;
                *(int *)(p + 0x14) = 2;
            } else {
                (*(int *)(p + 0x10))++;
                *(int *)(p + 0x14) = 0;
            }
        }
        break;
    case 4:
        switch (*(int *)(p + 0x14)) {
        case 0:
            func_002DD470();
            break;
        case 1:
            func_002DD840();
            break;
        case 2:
            func_002DD890();
            break;
        }
        break;
    case 5:
        func_0030E540(D_01DFA310);
        func_001AF080(D_00666750, *(char **)(p + 0x5C));
        switch (*(unsigned char *)(*(char **)(*(char **)(p + 0xC) + 4) + 0xF0)) {
        case 0:
            return 1;
        case 1:
            return 2;
        case 2:
            return 3;
        case 3:
            return 4;
        }
        break;
    }
    func_00195520(D_00645A30, 0x2C);
    return 0;
}
