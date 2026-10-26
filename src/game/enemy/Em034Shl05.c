float func_00132470(float *, char *);

float func_0011DBE0(float, float);

void func_0028C5C0(char *, int, float);

extern int D_005BE09C;

extern char D_01DFABA0[];

void func_00206730(char *);

void func_00330BD0(char *, int, char *, int, int);

extern char D_01CAFF0C[];

extern float D_00577A80[];

extern float D_00577AA8[];

extern float D_00577AA4[];

void func_00332AE0(char *, float *, float, float);

typedef struct { float v[4]; } V48C __attribute__((aligned(16)));

extern V48C D_00586DC0;

void func_004B6500(char *p) {
    char *func_00207470(int, int, float *);
    void func_00133890(char *, char *, V48C *);
    float tmp[4] __attribute__((aligned(16)));
    V48C up;
    char *o;
    int f;
    func_00206730(p + 0x460);
    if ((*(float *)(p + 0x468) -= *(float *)(p + 0x10)) < 0.0f) {
        *(unsigned char *)(p + 4) = 3;
        return;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0xF0), "f"(*(float *)(p + 0x10)) : "t0", "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vadd.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(tmp) : "memory");
    if ((unsigned char)*(unsigned char *)(p + 0x46C) == 0) {
        o = *(char **)(*(char **)&D_005BE09C + 0x23C);
        if (o != 0 && func_00132470((float *)(o + 0x70), p + 0x50) < 500.0f) {
            func_00330BD0(D_01DFABA0, 0x3B, p + 0x50, 0x22, 0);
            *(unsigned char *)(p + 0x46C) = 1;
        }
    }
    if (*(char **)(p + 0x20C) != 0 && (f = *(int *)(*(char **)(p + 0x20C) + 8)) != 0) {
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        if (f & 0x11040) func_00207470(3, 0x1B3, (float *)(p + 0x150));
        else func_00207470(3, 0x115, (float *)(p + 0x150));
        if (f & 0x30000) func_00330BD0(D_01DFABA0, 0x3D, p + 0x50, 0x22, 0);
        return;
    }
    if (*(char **)(p + 0x210) != 0 && ((f = *(int *)(*(char **)(p + 0x210) + 8)) & 3)) {
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        func_00207470(3, 0x115, (float *)(p + 0x150));
        if (f & 2) func_00330BD0(D_01DFABA0, 0x2F, p + 0x50, 0x22, 0);
        func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_00577A80, D_00577AA8[0], D_00577AA4[0]);
        return;
    }
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    up = D_00586DC0;
    func_00133890(p + 0x150, p + 0xF0, &up);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
}

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

extern char D_00577780[];

typedef struct { float v[4]; } __attribute__((aligned(16))) V4_004B6310;

extern V4_004B6310 D_00586DB0;

void func_004B6310(char *p) {
    char *func_00207470(int, int, char *);
    void func_00133890(float *, float *, float *);
    V4_004B6310 m;
    char *o;
    p[4] = 1;
    p[0x44] = -1;
    p[0x45] = 4;
    p[0x46C] = 0;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    m = D_00586DB0;
    func_00133890((float *)(p + 0x150), (float *)(p + 0xF0), (float *)&m);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(char **)(p + 0x460) = func_00207470(3, 0x114, 0);
    if ((o = *(char **)(p + 0x460)) != 0) {
        *(char **)(o + 0x90) = p + 0x150;
        o[0x9A] = 3;
        (*(char **)(p + 0x460))[0x3A] = 1;
    }
    p[0x3B0] = 5;
    p[0x3B1] = 0;
    *(short *)(p + 0x3B2) = 0;
    p[0x3B4] = 2;
    p[0x3B5] = 0;
    *(short *)(p + 0x3B6) = 1;
    p[0x3C0] = 2;
    *(int *)(p + 0x3D0) = 0;
    *(int *)(p + 0x3D4) = 0;
    *(int *)(p + 0x3D8) = 0;
    *(float *)(p + 0x3DC) = 1.0f;
    *(float *)(p + 0x3E0) = 18.0f;
    p[0x410] = 2;
    *(int *)(p + 0x420) = 0;
    *(int *)(p + 0x424) = 0;
    *(int *)(p + 0x428) = 0;
    *(float *)(p + 0x42C) = 1.0f;
    *(float *)(p + 0x430) = 30.0f;
    if (*(unsigned char *)(p + 0x46D) == 0) {
        func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 3, D_00577780, p, 0);
        *(int *)(p + 0x268) = 0x30443;
        func_0028C8E0(p + 0x190, 4);
    } else {
        func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 1, D_00577780, p, 0);
        *(int *)(p + 0x268) = 0x3050C;
        func_0028C8E0(p + 0x190, 7);
    }
    func_0028C910(p + 0x190);
    func_0028C3A0(p + 0x190, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x190, 1, -1, p + 0x150);
    *(float *)(p + 0x468) = 120.0f;
}

extern char D_00645A30[];

void func_0028C110(char *);

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00252FA0(char *);

extern char D_005B8370[];

extern char D_005B8394[];

extern char D_005B8414[];

char *func_004B6100(float *p0, float *p1, char p2) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x470, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B8370;
            *(char **)(t + 0x40) = D_005B8394;
            *(char **)(t + 0xA0) = D_005B8414;
            func_0028C110(t + 0x190);
            *(char *)(t + 0x46C) = 0;
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
        r = *b.pp; r[0x18] = 1;
        goto ok;
    }
    *b.pp = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p0) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xF0), "r"(p1) : "memory");
        *(char *)(ret + 0x46D) = p2;
    }
    return ret;
}

void func_004B67D0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x464) = 1.0f;
    case 1:
        *(float *)(p + 0x464) = *(float *)(p + 0x464) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x464) < 0.0f) {
            *(unsigned char *)(p + 4) = 3;
        }
        break;
    }
    func_00206730(p + 0x460);
}

int func_001AD140();

int func_004B6830(p0) char *p0; {
    int v0;
    int v1;
    int tmp0;
    v0 = (int)p0;
    v1 = *(int *)(p0 + 1120);
    if (v1 != 0) {
        func_001AD140(v1);
    }
    tmp0 = func_001AD140(v0);
    return tmp0;
}

extern void func_004B68B0();

void func_004B6950(char *p) { func_004B68B0(p + -64); }

void func_004B6960(char *p) { func_004B68B0(p + -160); }

void func_004B6870(void) {}

void func_004B6880(void) {}

void func_004B6890(void) {}

void func_004B68A0(void) {}
