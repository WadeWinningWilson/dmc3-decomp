extern char *D_005BDB58;

extern char D_01DFABA0[];

void func_001AD100(char *);

void func_00131700(char *, char *, char *);

void func_00105230(char *, char *, char *);

void func_001318E0(char *, char *, char *);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, int);

void func_0028C5C0(char *, int, float);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_004AD0E0(char *p) {
    int func_002075D0(int, int, int, int, int);
    void func_001AD140(char *);
    void func_00330BD0(char *, int, char *, int, int);
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

extern char D_00645A30[];

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_004ACBA0(char *);

typedef struct { int w[16]; } S64_4AC;

char *func_004ACC90(char *p0, char *p1, int p2) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char *o;
    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x4C0, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_004ACBA0(t);
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
    o = ret;
    if (o != 0) {
        *(char *)(o + 0x45) = 4;
        *(char **)(ret + 0x3D0) = p0;
        *(S64_4AC *)(ret + 0x3E0) = **(S64_4AC **)(*(char **)(p1 + 4) + 0x104);
        *(int *)(ret + 0x4B4) = p2;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p0 + 0x50) : "memory");
        *(short *)(ret + 0x90) = *(short *)(p0 + 0x90);
    }
    return ret;
}

void func_004AD3D0(p) char *p; {
    void func_001AD140();
    void func_002075D0();
    void func_00330BD0();
    func_002075D0(3, 275, p + 1136, 0, 16);
    func_00330BD0(D_01DFABA0, 54, p + 80, 6, 0);
    func_001AD140(p);
}

int func_004AD390(p0) char *p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(int *)(p0 + 1056);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 1056) = 0;
    }
    return v2;
}

extern void func_004ACE10();

void func_004AD430(char *p) { func_004ACE10(p + -64); }

extern void func_004ACC00();

void func_004AD450(char *p) { func_004ACC00(p + -64); }

void func_004AD460(char *p) { func_004ACC00(p + -160); }

void func_004AD370(void) {}

void func_004AD380(void) {}
