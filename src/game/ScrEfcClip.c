int func_0027BCB0(char *, int);

void func_00288140(char *);

int func_00287F50(char *p) {
    char *func_00210240(char *);
    short func_0027BC40(char *, int);
    float a = *(float *)(p + 0x10);
    if ((a < 0.0f ? -a : a) < 0.0001f) {
        return 0;
    }
    *(float *)(p + 0x20) = *(float *)(p + 0x24);
    if (func_0027BC40(func_00210240(p) + 0x260C, *(unsigned char *)(p + 0x40)) < 0 &&
        func_0027BCB0(func_00210240(p) + 0x260C, *(unsigned char *)(p + 0x40)) < 0) {
        return 0;
    }
    func_00288140(p);
    return 1;
}

int func_0012B1A0(char *, char *);

extern char D_005BBFF8[4];

extern char D_005BBFFC[4];

extern char D_005BC000[4];

extern char D_005BC004[4];

extern char D_005BC008[4];

extern char D_005BC00C[4];

extern char D_005BC010[4];

extern char D_005BC014[4];

extern char D_005BC018[4];

extern char D_005BC01C[4];

extern char D_005BC020[4];

extern char D_005BC024[4];

extern char D_005BC028[4];

extern char D_005BC02C[4];

extern char D_005BC030[4];

void func_00288190(char *p, char *name) {
    if (func_0012B1A0(name, D_005BBFF8) == 0) {
        *(int *)(p + 0x40) = 2;
    } else if (func_0012B1A0(name, D_005BBFFC) == 0) {
        *(int *)(p + 0x40) = 11;
    } else if (func_0012B1A0(name, D_005BC000) == 0) {
        *(int *)(p + 0x40) = 8;
    } else if (func_0012B1A0(name, D_005BC004) == 0) {
        *(int *)(p + 0x40) = 9;
    } else if (func_0012B1A0(name, D_005BC008) == 0) {
        *(int *)(p + 0x40) = 5;
    } else if (func_0012B1A0(name, D_005BC00C) == 0) {
        *(int *)(p + 0x40) = 7;
    } else if (func_0012B1A0(name, D_005BC010) == 0) {
        *(int *)(p + 0x40) = 12;
    } else if (func_0012B1A0(name, D_005BC014) == 0) {
        *(int *)(p + 0x40) = 1;
    } else if (func_0012B1A0(name, D_005BC018) == 0) {
        *(int *)(p + 0x40) = 4;
    } else if (func_0012B1A0(name, D_005BC01C) == 0) {
        *(int *)(p + 0x40) = 10;
    } else if (func_0012B1A0(name, D_005BC020) == 0) {
        *(int *)(p + 0x40) = 3;
    } else if (func_0012B1A0(name, D_005BC024) == 0) {
        *(int *)(p + 0x40) = 6;
    } else if (func_0012B1A0(name, D_005BC028) == 0) {
        *(int *)(p + 0x40) = 13;
    } else if (func_0012B1A0(name, D_005BC02C) == 0) {
        *(int *)(p + 0x40) = 14;
    } else if (func_0012B1A0(name, D_005BC030) == 0) {
        *(int *)(p + 0x40) = 15;
    } else {
        return;
    }
}

void func_0028B090(char *p, int t) {
    char *q;
    char *r;
    int i;
    int j;
    switch (t) {
    case 0:
        break;
    case 2:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x447A0000;
        *(int *)(q + 0x4) = 0x44898000;
        *(int *)(q + 0x8) = 0x80808080;
        *(int *)(q + 0xC) = 0x3;
        *(unsigned char *)(q + 0x10) = 0x0;
        break;
    case 11:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x447A0000;
        *(int *)(q + 0x4) = 0x44898000;
        *(int *)(q + 0x8) = 0x40808080;
        *(int *)(q + 0xC) = 0x10;
        *(int *)(q + 0x10) = 0x10;
        *(int *)(q + 0x14) = 0x8;
        *(int *)(q + 0x18) = 0x8;
        *(int *)(q + 0x1C) = 0x4;
        *(int *)(q + 0x20) = 0x3;
        *(int *)(q + 0x24) = 0x0;
        *(unsigned char *)(q + 0x28) = 0x0;
        break;
    case 8:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x80404040;
        *(unsigned char *)(q + 0x4) = 0x40;
        *(int *)(q + 0x8) = 0x3;
        *(int *)(q + 0xC) = 0x0;
        for (i = 0; i < 0x80; i++) q[i + 0x10] = 0;
        *(unsigned char *)(q + 0x90) = 0x0;
        break;
    case 9:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x80808080;
        *(unsigned char *)(q + 0x4) = 0x80;
        *(int *)(q + 0x8) = 0x6;
        *(int *)(q + 0xC) = 0x0;
        for (i = 0; i < 0x80; i++) q[i + 0x10] = 0;
        *(unsigned char *)(q + 0x90) = 0x0;
        break;
    case 5:
        r = *(char **)(p + 0x38);
        *(int *)(r + 0x0) = 0x0;
        for (j = 0; j < 0x80; j++) r[j + 0x4] = 0;
        *(int *)(r + 0x84) = 0x0;
        *(int *)(r + 0x88) = 0x80FFFFFF;
        *(unsigned char *)(r + 0x8C) = 0x40;
        *(unsigned char *)(r + 0x8D) = 0x40;
        *(unsigned char *)(r + 0x8E) = 0x0;
        break;
    case 7:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x80808080;
        *(unsigned char *)(q + 0x4) = 0x40;
        *(int *)(q + 0x8) = 0x10;
        *(int *)(q + 0xC) = 0x4;
        *(int *)(q + 0x10) = 0x0;
        *(int *)(q + 0x14) = 0x5;
        *(int *)(q + 0x18) = 0x3F666666;
        *(int *)(q + 0x1C) = 0x0;
        for (i = 0; i < 0x80; i++) q[i + 0x20] = 0;
        *(unsigned char *)(q + 0xA0) = 0x0;
        break;
    case 12:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x64;
        *(int *)(q + 0x4) = 0x64;
        *(int *)(q + 0x8) = 0x10808080;
        *(int *)(q + 0xC) = 0x1;
        *(int *)(q + 0x10) = 0x4;
        *(int *)(q + 0x14) = 0x0;
        *(int *)(q + 0x18) = 0x80000000;
        *(int *)(q + 0x1C) = 0x80FFFFFF;
        *(unsigned char *)(q + 0x20) = 0x0;
        break;
    case 1:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x0;
        *(int *)(q + 0x4) = 0x0;
        *(int *)(q + 0x8) = 0x0;
        *(int *)(q + 0xC) = 0x0;
        *(int *)(q + 0x10) = 0x40808080;
        *(unsigned char *)(q + 0x14) = 0x0;
        break;
    case 4:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x0;
        *(int *)(q + 0x4) = 0x43FA0000;
        *(int *)(q + 0x8) = 0x447A0000;
        *(int *)(q + 0xC) = 0x80000000;
        *(unsigned char *)(q + 0x14) = 0x0;
        *(int *)(q + 0x10) = 0x80FF4040;
        *(unsigned char *)(q + 0x15) = 0x40;
        *(unsigned char *)(q + 0x16) = 0x0;
        break;
    case 10:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x64;
        *(int *)(q + 0x4) = 0x64;
        *(int *)(q + 0x8) = 0x60808080;
        *(unsigned char *)(q + 0xC) = 0x80;
        *(unsigned char *)(q + 0xD) = 0x80;
        *(unsigned char *)(q + 0xE) = 0x20;
        *(int *)(q + 0x10) = 0x8;
        *(int *)(q + 0x14) = 0x1;
        *(int *)(q + 0x18) = 0x5A;
        *(int *)(q + 0x1C) = 0x2D;
        for (i = 0; i < 0x80; i++) q[i + 0x20] = 0;
        *(unsigned char *)(q + 0xA0) = 0x0;
        break;
    case 3:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x447A0000;
        *(int *)(q + 0x4) = 0x43FA0000;
        *(int *)(q + 0x8) = 0x447A0000;
        *(int *)(q + 0xC) = 0x43FA0000;
        *(int *)(q + 0x10) = 0x447A0000;
        *(int *)(q + 0x14) = 0x40808080;
        *(int *)(q + 0x18) = 0x1;
        *(int *)(q + 0x1C) = 0x3F000000;
        *(int *)(q + 0x20) = 0x0;
        *(unsigned char *)(q + 0x24) = 0x0;
        break;
    case 6:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x0;
        *(int *)(q + 0x4) = 0x0;
        *(int *)(q + 0x8) = 0x43960000;
        *(int *)(q + 0xC) = 0x0;
        *(int *)(q + 0x10) = 0x42C80000;
        *(int *)(q + 0x14) = 0x10;
        *(int *)(q + 0x18) = 0x3DCCCCCD;
        *(int *)(q + 0x1C) = 0x3E4CCCCD;
        *(int *)(q + 0x20) = 0x3F000000;
        *(int *)(q + 0x24) = 0x3F000000;
        *(int *)(q + 0x28) = 0x30;
        *(unsigned char *)(q + 0x2C) = 0x0;
        *(unsigned char *)(q + 0x2D) = 0x80;
        *(int *)(q + 0x30) = 0x80F02040;
        *(int *)(q + 0x34) = 0x0;
        *(unsigned char *)(q + 0x38) = 0x0;
        break;
    case 13:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x0;
        *(int *)(q + 0x4) = 0x4;
        *(int *)(q + 0x8) = 0x3E800000;
        *(int *)(q + 0xC) = 0x3F000000;
        *(int *)(q + 0x10) = 0x3F800000;
        *(int *)(q + 0x14) = 0x3F800000;
        *(int *)(q + 0x18) = 0x0;
        *(int *)(q + 0x1C) = 0x3E4CCCCD;
        *(int *)(q + 0x20) = 0x0;
        *(int *)(q + 0x24) = 0x0;
        *(int *)(q + 0x28) = 0x80000000;
        *(int *)(q + 0x2C) = 0x80FFFFFF;
        *(unsigned char *)(q + 0x30) = 0x0;
        *(unsigned char *)(q + 0x31) = 0x80;
        *(unsigned char *)(q + 0x32) = 0x0;
        break;
    case 14:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x0;
        *(int *)(q + 0x4) = 0x80000000;
        *(int *)(q + 0x8) = 0x1;
        *(int *)(q + 0xC) = 0x1;
        for (i = 0; i < 0x80; i++) q[i + 0x10] = 0;
        *(unsigned char *)(q + 0x90) = 0x0;
        break;
    case 15:
        q = *(char **)(p + 0x38);
        *(int *)(q + 0x0) = 0x0;
        *(unsigned char *)(q + 0x4) = 0xFF;
        *(int *)(q + 0x8) = 0x0;
        *(int *)(q + 0xC) = 0xA0000000;
        *(unsigned char *)(q + 0x10) = 0x0;
        break;
    }
}

int func_0027BDB0();

int func_002880E0(p0) int p0; {
    int func_00210240();
    int func_0027BC40();
    char *v0;
    int v1;
    int v2;
    int tmp0;
    int tmp2;
    int tmp3;
    v0 = (char *)p0;
    tmp0 = func_00210240();
    v2 = func_0027BC40((tmp0 + 9740), *(unsigned char *)(v0 + 64));
    tmp2 = (short)v2;
    v1 = (int)v0;
    if (tmp2 != -1) {
        tmp3 = func_00210240(v1);
        v2 = func_0027BDB0((tmp3 + 9740), *(unsigned char *)(v0 + 64));
    }
    return v2;
}

int func_001B0FD0();

int func_0028AEC0(p0, p1) int p0; int p1; {
    int func_0013D5D0();
    int v3;
    int v2;
    int v0;
    char *v1;
    v0 = p1;
    v1 = (char *)p0;
    v2 = func_0013D5D0((v1 + 40));
    switch (v0) {
    case 2:
        v2 = func_001B0FD0((v1 + 40), 24, -1);
        v3 = v2;
        break;
    case 11:
        v2 = func_001B0FD0((v1 + 40), 48, -1);
        v3 = v2;
        break;
    case 8:
        v2 = func_001B0FD0((v1 + 40), 152, -1);
        v3 = v2;
        break;
    case 9:
        v2 = func_001B0FD0((v1 + 40), 152, -1);
        v3 = v2;
        break;
    case 5:
        v2 = func_001B0FD0((v1 + 40), 152, -1);
        v3 = v2;
        break;
    case 7:
        v2 = func_001B0FD0((v1 + 40), 168, -1);
        v3 = v2;
        break;
    case 12:
        v2 = func_001B0FD0((v1 + 40), 40, -1);
        v3 = v2;
        break;
    case 1:
        v2 = func_001B0FD0((v1 + 40), 28, -1);
        v3 = v2;
        break;
    case 4:
        v2 = func_001B0FD0((v1 + 40), 32, -1);
        v3 = v2;
        break;
    case 10:
        v2 = func_001B0FD0((v1 + 40), 168, -1);
        v3 = v2;
        break;
    case 3:
        v2 = func_001B0FD0((v1 + 40), 44, -1);
        v3 = v2;
        break;
    case 6:
        v2 = func_001B0FD0((v1 + 40), 64, -1);
        v3 = v2;
        break;
    case 13:
        v2 = func_001B0FD0((v1 + 40), 60, -1);
        v3 = v2;
        break;
    case 14:
        v2 = func_001B0FD0((v1 + 40), 152, -1);
        v3 = v2;
        break;
    case 15:
        v2 = func_001B0FD0((v1 + 40), 24, -1);
        v3 = v2;
        break;
    }
    *(int *)(v1 + 56) = v3;
    return v2;
}

void func_0028B600(char *p) {
    extern void func_0013D5D0(); func_0013D5D0(p + 40); }

float func_0028B5F0(char *p) { return *(float *)(p + 36); }
