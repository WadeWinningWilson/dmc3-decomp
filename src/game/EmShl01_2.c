void func_001318E0(char *, char *, char *);

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

extern V4 D_005599B0;

void func_00133890(char *, char *, V4 *);

void func_0030B770(char *p) {
    V4 t;
    int i;
    t = D_005599B0;
    for (i = 0; i < 3; i++) {
        func_00133890(p + i * 0x40 + 0x1670, p + i * 0x10 + 0x1610, &t);
        func_001318E0(p + i * 0x40 + 0x1670, p + i * 0x40 + 0x1670, p + 0xE0);
        *(float *)(p + i * 0x40 + 0x16A0) = *(float *)(p + i * 0x10 + 0x1640);
        *(float *)(p + i * 0x40 + 0x16A4) = *(float *)(p + i * 0x10 + 0x1644);
        *(float *)(p + i * 0x40 + 0x16A8) = *(float *)(p + i * 0x10 + 0x1648);
        *(float *)(p + i * 0x40 + 0x16AC) = 1.0f;
    }
}

int func_0024E780(char *, int, int);

char *func_00279290(char *);

extern char D_005BE098[4];

void func_00195E20(char *, char *);

void func_001A29A0(char *);

extern char D_005599AC[];

extern char D_005599A8[];

extern float D_005BC6A8;

extern float D_005BC6AC;

void func_0030BF70(int, float, int, int, int, int, int, int, char *, int);

void func_0030BBC0(char *p) {
    unsigned char r;
    int m;
    int i;
    float t;
    float u;
    r = func_0024E780(*(char **)(p + 0x173C), 0, 1);
    if (!(*(float *)(p + 0xE8) <= *(float *)D_005599AC)) {
        *(float *)(p + 0xE8) = *(float *)(p + 0xE8) + *(float *)D_005599A8;
        if (*(float *)(p + 0xE8) < *(float *)D_005599AC) *(float *)(p + 0xE8) = *(float *)D_005599AC;
    }
    if (r == 2) {
        if (*(unsigned char *)(p + 0x1739) == 1) {
            m = 2;
        } else {
            m = 0;
        }
        func_0030BF70(*(int *)(p + 0xD0), *(float *)(p + 0xE8), *(int *)(p + 0xD4), *(int *)(p + 0xD8), *(int *)(p + 0x173C), *(int *)(p + 0x1740), *(int *)(p + 0x1744), 1, p + 0x1670, m);
        func_0030BF70(*(int *)(p + 0xD0), *(float *)(p + 0xE8), *(int *)(p + 0xD4), *(int *)(p + 0xD8), *(int *)(p + 0x173C), *(int *)(p + 0x1740), *(int *)(p + 0x1744), 2, p + 0x16B0, m);
        func_0030BF70(*(int *)(p + 0xD0), *(float *)(p + 0xE8), *(int *)(p + 0xD4), *(int *)(p + 0xD8), *(int *)(p + 0x173C), *(int *)(p + 0x1740), *(int *)(p + 0x1744), 3, p + 0x16F0, m);
        p[4] = 2;
    } else {
        t = *(float *)(p + 0x1734);
        if (!(t <= 0.0f)) {
            u = t - D_005BC6A8 / D_005BC6AC;
            *(float *)(p + 0x1734) = u;
            if (u < 0.0f) {
                *(float *)(p + 0x1734) = 0.0f;
                p[0x1738] = 0;
            }
        }
        if (*(unsigned char *)(p + 0x1739) == 1) {
            for (i = 0; i < 3; i++) func_001A29A0(func_00279290(p + i * 0x600 + 0x180));
        }
        func_00195E20(D_005BE098, p);
    }
}

extern char D_005ABB00[];

extern char D_005ABB24[];

extern char D_005ABBA4[];

void func_00100450();

int func_00252FA0();

void func_002790E0();

void func_002791E0();

int func_0028C110();

int func_0030AFB0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005ABB00;
    *(char **)((char *)p0 + 64) = D_005ABB24;
    *(char **)((char *)p0 + 160) = D_005ABBA4;
    func_00100450((p0 + 384), (char *)func_002790E0, (char *)func_002791E0, 1536, 3);
    func_0028C110((p0 + 5008));
    return p0;
}
