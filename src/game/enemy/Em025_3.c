extern float D_00561F00[][3];

int func_002A4A40(char *);

void func_0029D480(char *p) {
    void func_0029DCE0(char *, int);
    void func_002A0100(char *);
    int k;
    func_0029DCE0(p, 0x39);
    *(unsigned char *)(p + 0xA993) = 1;
    *(unsigned char *)(p + 0xA992) = 0;
    func_002A0100(p);
    *(int *)(p + 0x9658) = -1;
    *(int *)(p + 0x9654) = -1;
    *(int *)(p + 0x9650) = -1;
    *(int *)(p + 0x964C) = -1;
    *(int *)(p + 0x9648) = -1;
    *(int *)(p + 0x966C) = 0;
    *(int *)(p + 0x9668) = 0;
    *(int *)(p + 0x9664) = 0;
    *(int *)(p + 0x9660) = 0;
    *(int *)(p + 0x965C) = 0;
    *(int *)(p + 0x9644) = 0;
    *(unsigned char *)(p + 0xA990) = 0;
    k = func_002A4A40(p);
    *(float *)(p + 0xAAA4) = ((float *)D_00561F00[k])[*(int *)(p + 0x8928)];
    *(unsigned char *)(p + 5) = 0x14;
}

void func_001AD140(char *);

void func_002A0090(char *p) {
    int i;
    for (i = 0; i < 7; i++) {
        if (*(char **)(p + i * 4 + 0xA9A8) != 0) {
            func_001AD140(*(char **)(p + i * 4 + 0xA9A8));
        }
        *(char **)(p + i * 4 + 0xA9A8) = 0;
    }
}

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_0028C740(char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_002A0090(char *p);

extern float D_005BCA44[];

extern float D_005606B0[][3];

void func_00298250(char *p) {
    void func_0029DCE0(char *, int);
    void func_002A0100(char *);
    int i;
    char *e;
    func_0029DCE0(p, 0x32);
    *(unsigned char *)(p + 5) = 0xB;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA993) = 0;
    func_002A0100(p);
    func_002A0090(p);
    func_0028C910(p + 0x9200);
    func_0028C8E0(p + 0x9200, 0xC);
    *(unsigned char *)(p + 0x9160) = 2;
    *(float *)(p + 0x9170) = 0.0f;
    *(float *)(p + 0x9174) = 0.0f;
    *(float *)(p + 0x9178) = 0.0f;
    *(float *)(p + 0x917C) = 1.0f;
    *(float *)(p + 0x9180) = D_005BCA44[0];
    for (i = 0; i < 10; i++) {
        UNIT(p + i * 64 + 0x9670);
        func_0028C3A0(p + 0x9200, 0, 0x3C, p + i * 64 + 0x9670);
        e = *(char **)((char *)(i * 4) + (int)p + 0x927C);
        e[2] = 1;
    }
    func_0028C740(p + 0x9200);
    *(int *)(p + 0x9644) = 0;
    *(unsigned char *)(p + 0x9640) = 0;
    *(float *)(p + 0x8924) = D_005606B0[func_002A4A40(p)][*(int *)(p + 0x8928)];
}

void func_00298E10(char *p) {
    void func_0029DCE0(char *, int);
    void func_002A0100(char *);
    int i;
    char *e;
    func_0029DCE0(p, 0x33);
    *(unsigned char *)(p + 5) = 0xC;
    *(unsigned char *)(p + 0xA992) = 0;
    *(unsigned char *)(p + 0xA993) = 0;
    func_002A0100(p);
    func_0028C910(p + 0x9200);
    func_0028C8E0(p + 0x9200, 0xC);
    *(unsigned char *)(p + 0x9160) = 2;
    *(float *)(p + 0x9170) = 0.0f;
    *(float *)(p + 0x9174) = 0.0f;
    *(float *)(p + 0x9178) = 0.0f;
    *(float *)(p + 0x917C) = 1.0f;
    *(float *)(p + 0x9180) = D_005BCA44[0];
    for (i = 0; i < 10; i++) {
        UNIT(p + i * 64 + 0x9670);
        func_0028C3A0(p + 0x9200, 0, 0x3C, p + i * 64 + 0x9670);
        e = *(char **)((char *)(i * 4) + (int)p + 0x927C);
        e[2] = 1;
    }
    func_0028C740(p + 0x9200);
    *(int *)(p + 0x9644) = 0;
    *(unsigned char *)(p + 0x9640) = 0;
    *(float *)(p + 0x8924) = D_005606B0[func_002A4A40(p)][*(int *)(p + 0x8928)];
    func_002A0090(p);
}

void func_002965E0(char *, int);

void func_0029D480(char *p);

void func_00298250(char *p);

void func_00298E10(char *p);

extern float D_0055E590[][3][20][6];

extern int D_0055FC10[][8];

int func_0034BBE0(int, float *);

void func_0029D120(char *);

void func_00299B70(char *);

void func_002999D0(char *);

void func_00299AA0(char *);

void func_00299E80(char *);

void func_0029B250(char *);

void func_0029C3B0(char *);

void func_002977B0(char *);

void func_0029F960(char *p) {
    float v[20];
    int i;
    int r;
    int a;
    if (*(unsigned char *)(p + 0xAA92) == 0) {
        for (i = 0; i < 20; i++) {
            v[i] = D_0055E590[func_002A4A40(p)][*(int *)(p + 0x8928)][i][*(int *)(p + 0xA8F4)];
        }
        r = func_0034BBE0(20, v);
        if (r >= 12) {
            *(unsigned char *)(p + 0xAA92) = 1;
            *(int *)(p + 0xAA94) = r - 12;
            *(int *)(p + 0xAA98) = -1;
        }
    }
    if (*(unsigned char *)(p + 0xAA92) != 0) {
        (*(int *)(p + 0xAA98))++;
        r = D_0055FC10[*(int *)(p + 0xAA94)][*(int *)(p + 0xAA98)];
        if (r == -1) {
            *(unsigned char *)(p + 0xAA92) = 0;
            *(int *)(p + 0xAA94) = 0;
            *(int *)(p + 0xAA98) = 0;
            func_002965E0(p, 0xFFFF);
            return;
        }
    }
    a = *(int *)&D_0055E590[func_002A4A40(p)][*(int *)(p + 0x8928)][r][0];
    if (*(unsigned char *)(p + 0xAA92) == 0 && *(unsigned char *)(p + 0xA991) != 0) a = 0;
    switch (a) {
    case 0:
        func_0029D120(p);
        break;
    case 1:
        func_00299B70(p);
        break;
    case 2:
        func_00298250(p);
        break;
    case 3:
        func_00298E10(p);
        break;
    case 4:
        func_002999D0(p);
        break;
    case 5:
        func_00299AA0(p);
        break;
    case 6:
        func_00299E80(p);
        break;
    case 7:
        func_0029B250(p);
        break;
    case 8:
        func_0029C3B0(p);
        break;
    case 9:
        func_002977B0(p);
        break;
    case 10:
        func_002965E0(p, 0xFFFF);
        break;
    case 11:
        func_0029D480(p);
        break;
    case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19:
    default:
        func_002965E0(p, 0xFFFF);
        break;
    }
}

void func_00299CC0(p) char *p; {
    void func_0029DCE0();
    void func_002A0100();
    func_0029DCE0(p, 30);
    *(char *)(p + 5) = 5;
    *(char *)(p + 43411) = 1;
    *(char *)(p + 43410) = 0;
    *(char *)(p + 43400) = 0;
    func_002A0100(p);
}

int func_002A4030(p0) int p0; {
    int v0;
    int v1;
    v0 = -1;
    v1 = 0;
    do {
        if (*(unsigned char *)((char *)(p0 + v1) + 43256) == 0) {
            v0 = v1;
            break;
        }
        v1 = (v1 + 1);
    } while ((v1 < 3));
    return v0;
}
