char *func_00279290(char *);

void func_001A1E10(char *);

void func_003C4EF0(char *p) {
    func_001A1E10(func_00279290(p + 0x680));
    func_001A1E10(func_00279290(p + 0xC80));
}

extern char D_01CAFF0C[];

void func_003C57E0(char *p) {
    void func_002EF940(int, char *);
    int func_003C8130(char *, int);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0x15D4) = 120.0f;
    case 1:
        if ((unsigned char)func_003C8130(p, 1) == 0) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
        *(float *)(p + 0x15D4) = *(float *)(p + 0x15D4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x15D4) < 0.0f) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

int func_0024E800(char *);

void func_0034BA60(int, char *, int, int, int);

void func_003C2D30(char *, int);

void func_003C7410(char *p) {
    void func_002EF940(int, char *);
    int func_003C8130(char *, int);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        func_0034BA60(0x43, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
    case 1:
        func_003C2D30(p, 0);
        func_003C8130(p, 1);
        if ((unsigned char)func_0024E800(p + 0x1500) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C7780(char *p) {
    void func_002EF940(int, char *);
    int func_003C8130(char *, int);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        func_0034BA60(0x43, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
    case 1:
        func_003C2D30(p, 1);
        func_003C8130(p, 1);
        if ((unsigned char)func_0024E800(p + 0x1500) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

int func_0024E780(char *, int, int);

void func_0024E7B0(char *, int, int);

extern int D_0056EC50[];

void func_003C6880(char *, int);

void func_003C67A0(char *p) {
    void func_002EF940(int, char *);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 3) {
            func_0024E7B0(p + 0x1500, 0, 0);
            func_003C6880(p, D_0056EC50[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3]);
        }
        if ((unsigned char)func_0024E800(p + 0x1430) == 1) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C290(char *, int, int, char *);

extern float D_0056EC20[];

extern int D_0056EC80[];

static inline void mot_setup(char *p) {
    func_0024E7B0(p + 0x1500, 0, 0);
    func_0028C8E0(p + 0x1950, 5);
    func_0028C910(p + 0x1950);
    func_0028C290(p + 0x1950, 7, 0x14, p + 0x64C);
    func_0028C290(p + 0x1950, 8, 0x14, p + 0x64C);
    func_0028C290(p + 0x1950, 9, 0x14, p + 0x64C);
    func_0028C290(p + 0x1950, 0xD, 0x14, p + 0x64C);
    func_0028C290(p + 0x1950, 0xE, 0x14, p + 0x64C);
}

void func_003C7830(char *p) {
    void func_002EF940(int, char *);
    int func_003C8130(char *, int);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0x15D4) = D_0056EC20[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3];
        *(int *)(p + 0x16E0) = 0;
        *(float *)(p + 0x15F0) = 40.0f;
        {
            int f = D_0056EC80[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3];
            if (f != 0) {
                func_003C6880(p, f);
            }
        }
    case 1:
        func_003C2D30(p, 1);
        *(float *)(p + 0x15F0) = *(float *)(p + 0x15F0) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x15F0) < 0.0f) {
            *(float *)(p + 0x15F0) = 40.0f;
            func_003C8130(p, 1);
        }
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 8) {
            mot_setup(p);
        }
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 9) {
            mot_setup(p);
        }
        *(float *)(p + 0x15D4) = *(float *)(p + 0x15D4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x15D4) < 0.0f) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

extern float D_0056EBF0[];

void func_003C74C0(char *p) {
    void func_002EF940(int, char *);
    int func_003C8130(char *, int);
    void func_003C8350(char *);
    int func_003C8470(char *, int, int);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0x15D4) = D_0056EBF0[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3];
        func_003C8350(p);
        *(int *)(p + 0x16E0) = 0;
        *(float *)(p + 0x15F0) = 40.0f;
        {
            int f = D_0056EC80[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3];
            if (f != 0) {
                func_003C6880(p, f);
            }
        }
    case 1:
        func_003C2D30(p, 0);
        *(float *)(p + 0x15F0) = *(float *)(p + 0x15F0) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x15F0) < 0.0f) {
            *(float *)(p + 0x15F0) = 40.0f;
            func_003C8130(p, 1);
            func_003C8350(p);
        }
        if ((unsigned char)func_003C8470(p, 0, 0) == 0) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 8) {
            mot_setup(p);
        }
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 9) {
            mot_setup(p);
        }
        *(float *)(p + 0x15D4) = *(float *)(p + 0x15D4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x15D4) < 0.0f) {
            *(unsigned char *)(p + 0x1CEA) = 1;
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

extern signed char D_0056EBD8[];

extern unsigned char D_0056EA00[];

extern signed char D_005BCE30;

void func_004D6180(char *, int);

void func_003C4F30(char *);

void func_003C61D0(char *);

void func_0034B330(int);

int func_003C6060(char *);

void func_003C62C0(char *);

void func_003C5DB0(char *p) {
    void func_002EF940(int, char *);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        func_003C2D30(p, 2);
        if ((unsigned char)func_0024E780(p + 0x1430, 0, 0) == 1) {
            func_0024E7B0(p + 0x1430, 0, 0);
            func_004D6180(*(char **)(*(char **)(p + 0x5C0) + 0x104), D_0056EBD8[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3]);
        }
        if ((unsigned char)func_0024E780(p + 0x1430, 0, 0) == 2) {
            func_0024E7B0(p + 0x1430, 0, 0);
            func_004D6180(*(char **)(*(char **)(p + 0x5C0) + 0x104), D_0056EBD8[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3]);
        }
        if ((unsigned char)func_0024E800(p + 0x1430) == 1) {
            func_003C4F30(p);
            *(unsigned char *)(p + 0x1CE8) = 1;
            *(unsigned char *)(p + 0x1CEC) = 0;
            *(unsigned char *)(p + 0x1CED) = 0;
            *(unsigned char *)(p + 0x1CEE) = 0;
            *(unsigned char *)(p + 0x1CF5) = 0;
            *(unsigned char *)(p + 0x1CF4) = 0;
            *(unsigned char *)(p + 0x1CEF) = 0;
            *(unsigned char *)(p + 0x1CF0) = 0;
            *(unsigned char *)(p + 0x1CF1) = 0;
            *(unsigned char *)(p + 0x1CF2) = 0;
            *(unsigned char *)(p + 0x1CF3) = 0;
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            *(float *)(p + 0x15D4) = 240.0f;
            *(float *)(p + 0x15EC) = 30.0f;
            D_005BCE30 = D_0056EA00[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3];
            func_003C61D0(p);
            func_0034B330(3);
        } else {
            func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
        }
        break;
    case 2:
        if (D_005BCE30 > 0) {
            *(float *)(p + 0x15EC) = *(float *)(p + 0x15EC) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x15EC) < 0.0f) {
                *(float *)(p + 0x15EC) = 30.0f;
                if ((unsigned char)func_003C6060(p) == 1) {
                    D_005BCE30 = D_005BCE30 - 1;
                }
            }
        } else {
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            break;
        }
        func_003C62C0(p);
        break;
    case 3:
        *(float *)(p + 0x15D4) = *(float *)(p + 0x15D4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x15D4) < 0.0f && !(*(short *)(p + 0x15F8) > 4)) {
            *(unsigned char *)(p + 0x1CED) = 1;
            func_003C61D0(p);
            func_0034B330(0);
        } else {
            func_003C62C0(p);
        }
        break;
    }
}

float func_00132470(char *, char *);

int func_0021D320(char *, int, int, int, int);

void func_003C3CA0(char *, int);

extern float D_0056ED80[];

int func_0021D260(char *, int, int);

void func_003C6D70(char *p) {
    void func_002EF940(int, char *);
    void func_003C8130(char *, int);
    float v[4] __attribute__((aligned(16)));
    char *pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(unsigned char *)(p + 0x1CF7) = 0;
        func_0034BA60(0x37, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        func_0034BA60(0x26, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
    case 1:
        func_003C8130(p, 1);
        if ((unsigned char)func_0024E780(p + 0x1500, 0, 0) == 7) {
            func_0024E7B0(p + 0x1500, 0, 0);
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            break;
        }
        if (*(unsigned char *)(p + 0x1CF7) != 0) break;
        __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(*(char **)(*(char **)(p + 0x670) + 0x104)), "r"(v) : "memory");
        if (!(func_00132470(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, (char *)v) < D_0056ED80[*(unsigned char *)(p + 0x15D1) + *(unsigned char *)(p + 0x15D0) * 3])) break;
        *(unsigned char *)(p + 0x1CF7) = func_0021D260(pl, 3, *(int *)(p + 0x1354));
        if (*(unsigned char *)(p + 0x1CF7) != 0) {
            if ((unsigned char)func_0021D320(pl, 3, *(unsigned char *)(p + 0x1CF7), 0, 0x1E) == 0) {
                *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
                break;
            }
            func_003C3CA0(p, 0x13);
            break;
        }
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        break;
    case 2:
        if ((unsigned char)func_0024E800(p + 0x1500) == 1) *(unsigned char *)(p + 0x1CEA) = 1;
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x1BD0);
}

void func_003C8F90(char **h) {
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

int func_003C7B30();

int func_003C7C30();

int func_003C7FC0();

int func_003C7AB0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    v3 = func_003C7B30();
    v1 = (int)v0;
    if (v3 != 0) {
        v3 = func_003C7C30(v1);
        if ((v3 & 255) == 0) {
            tmp0 = *(unsigned char *)(v0 + 7402);
            v2 = (int)v0;
            if (tmp0 == 1) {
                v3 = func_003C7FC0(v2);
            }
        }
        *(char *)(v0 + 7402) = 0;
    } else {
        tmp1 = *(unsigned char *)(v0 + 7402);
        v4 = (int)v0;
        if (tmp1 == 1) {
            v3 = func_003C7FC0(v4);
            *(char *)(v0 + 7402) = 0;
        }
    }
    return v3;
}

extern char D_0056EA30[];

extern char D_0056EBB0[];

void func_003C80C0(p0) char *p0; {
    *(float *)(p0 + 5608) = *(float *)((D_0056EA30 + ((*(unsigned char *)(p0 + 5585) + (*(unsigned char *)(p0 + 5584) * 3)) << 2)) + 0);
    *(float *)(p0 + 5604) = *(float *)((D_0056EBB0 + ((*(unsigned char *)(p0 + 5585) + (*(unsigned char *)(p0 + 5584) * 3)) << 2)) + 0);
    *(float *)(p0 + 7348) = *(float *)(p0 + 7204);
    *(float *)(p0 + 7352) = *(float *)(p0 + 7204);
}

extern char D_005B0390[];

extern char D_005B03A8[];

int func_002E7840();

int func_003C8680(p0) int p0; {
    func_002E7840();
    *(char **)((char *)p0 + 0) = D_005B0390;
    *(char **)((char *)p0 + 4) = D_005B03A8;
    return p0;
}

extern void func_003C4D80();

void func_003C9010(char *p) { func_003C4D80(p + -64); }

extern void func_003C8E10();

void func_003C9040(char *p) { func_003C8E10(p + -64); }

void func_003C9050(char *p) { func_003C8E10(p + -160); }

void func_003C9060(char *p) { func_003C8E10(p + -208); }

extern void func_003C4C50();

void func_003C9070(char *p) { func_003C4C50(p + -304); }

extern void func_003C4E50();

void func_003C9080(char *p) { func_003C4E50(p + -304); }

extern void func_003C4DB0();

void func_003C9090(char *p) { func_003C4DB0(p + -304); }

void func_003C90C0(char *p) { func_003C8E10(p + -304); }

extern void func_003C4BF0();

void func_003C90D0(char *p) { func_003C4BF0(p + -464); }

extern void func_003C4B90();

void func_003C90E0(char *p) { func_003C4B90(p + -464); }

void func_003C9100(char *p) { func_003C8E10(p + -464); }

void func_003C4D70(void) {}

signed char func_003C8E00(char *p) { return *(signed char *)(p + 481); }

float func_003C3C90(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 5600) = *(float *)(p1 + 44);
    return t0;
}

float func_003C8DE0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 7344);
    *(float *)(p1 + 0) = *(float *)(p0 + 7344);
    return t0;
}

float func_003C8DF0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 7204);
    *(float *)(p1 + 0) = *(float *)(p0 + 7204);
    return t0;
}

int func_003C5700(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    int func_002EF940();
    int func_003C8130();
    void func_003C8350();
    int func_003C8470();
    int v0;
    char *v1;
    int tmp0;
    int tmp2;
    int tmp4;
    v0 = *(unsigned char *)(p0 + 6);
    v1 = p0;
    switch (v0) {
    case 0:
        *(char *)(v1 + 6) = (v0 + 1);
        *(int *)(v1 + 5588) = 0;
        *(int *)(v1 + 5856) = 0;
        /* fall through */
    case 1:
        tmp0 = func_003C8130(v1, 0);
        if ((tmp0 & 255) == 0) {
            *(char *)(v1 + 6) = (*(unsigned char *)(v1 + 6) + 1);
        }
        break;
    case 2:
        func_003C8350();
        tmp2 = func_003C8470(v1, 1, 1);
        if ((tmp2 & 255) == 0) {
            *(char *)(v1 + 7402) = 1;
        }
        if (*(unsigned char *)(v1 + 7399) == 1) {
            *(char *)(v1 + 7402) = 1;
        }
        break;
    }
    tmp4 = func_002EF940(*(int *)D_01CAFF0C, (v1 + 7120));
    return tmp4;
}
