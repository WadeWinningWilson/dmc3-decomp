extern char D_01DFABA0[];

char *func_00279290(char *);

void func_001A1E70(char *, int);

void func_001A2000(char *, int);

void func_003303F0(char *, int, int, int, int);

extern int D_01CAFF30[];

extern unsigned char D_0054A0E0[];

void func_001A1E10(char *);

void func_003564A0(char *, int, char *);

void func_00356570(char *, int, char *);

void func_00355A00(char *p) {
    *(unsigned char *)(p + 5) = 6;
    *(unsigned char *)(p + 6) = 0;
    func_001A1E10(func_00279290(p + 0x2AC0));
    if (D_0054A0E0[D_01CAFF30[0] * 0x298] == 0) {
        func_001A2000(func_00279290(p + 0x2AC0), 3);
        func_001A2000(func_00279290(p + 0x2AC0), 4);
    }
    switch (*(unsigned char *)(p + 0x7AFC)) {
    case 4:
        func_001A1E70(func_00279290(p + 0x42C0), 0);
        func_001A2000(func_00279290(p + 0x72C0), 0);
        break;
    case 3:
        func_001A1E70(func_00279290(p + 0x42C0), 1);
        func_001A2000(func_00279290(p + 0x72C0), 1);
        break;
    case 2:
        func_001A1E70(func_00279290(p + 0x42C0), 2);
        func_001A2000(func_00279290(p + 0x72C0), 2);
        break;
    case 1:
        func_001A1E70(func_00279290(p + 0x42C0), 3);
        func_001A2000(func_00279290(p + 0x72C0), 3);
        break;
    case 0:
        func_001A1E70(func_00279290(p + 0x42C0), 4);
        func_001A2000(func_00279290(p + 0x72C0), 4);
        break;
    }
    func_003303F0(D_01DFABA0, 7, 0x24, 0x40, 0);
    func_003564A0(p, 8, p + 0x7A94);
    func_00356570(p, 8, p + 0x7A94);
    if (D_0054A0E0[D_01CAFF30[0] * 0x298] != 0) {
        func_003564A0(p, 0xA, p + 0x7AC8);
        func_00356570(p, 0xA, p + 0x7AC8);
    }
    func_003303F0(D_01DFABA0, 7, 0x21, 0x40, 0);
}

extern char *D_005BE0D8;

extern char D_006663C0[];

extern char D_01DF5D20[];

unsigned short func_001AE1E0(char *, int);

void func_00356CC0(char *, char *);

void func_003570A0(char *, int, int);

void func_003570B0(char *, int, int, int);

int func_00356D10(char *, char *);

void func_00355620(char *p) {
    float func_001F9C40(char *, int);
    if (func_001AE1E0(D_006663C0, 0) & 0x40) {
        *(unsigned char *)(p + 5) = 5;
        return;
    }
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0x7980) = 20.0f;
        func_001A1E70(func_00279290(p + 0x2AC0), 1);
        func_001A1E70(func_00279290(p + 0x2AC0), 2);
        func_003303F0(D_01DFABA0, 7, 0x21, 0x40, 0);
    case 1:
        *(float *)(p + 0x7980) = *(float *)(p + 0x7980) - func_001F9C40(D_01DF5D20, 0x87);
        if (*(float *)(p + 0x7980) < 0.0f) {
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            func_00356CC0(p, p + 0x7A94);
            func_003570A0(p + 0x7B00, *(int *)(p + 0x7B38), 1);
            func_003564A0(p, 8, p + 0x7B00);
            func_00356570(p, 8, p + 0x7B00);
        }
        break;
    case 2:
        if ((unsigned char)func_00356D10(p, p + 0x7A94) == 0) {
            func_003570B0(p + 0x7B00, *(int *)(p + 0x7B38), 1, *(int *)(p + 0x7B40));
            func_003564A0(p, 8, p + 0x7B00);
            func_00356570(p, 8, p + 0x7B00);
        } else {
            func_003564A0(p, 8, p + 0x7A94);
            func_00356570(p, 8, p + 0x7A94);
            if (*(unsigned char *)((char *)D_0054A0E0 + D_01CAFF30[0] * 0x298) != 0) {
                *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
                *(float *)(p + 0x7980) = 20.0f;
                func_001A1E70(func_00279290(p + 0x2AC0), 3);
                func_001A1E70(func_00279290(p + 0x2AC0), 4);
                func_003303F0(D_01DFABA0, 7, 0x21, 0x40, 0);
            } else {
                *(unsigned char *)(p + 6) = 5;
            }
        }
        if (*(int *)(D_005BE0D8 + 0x54) & 1) func_003303F0(D_01DFABA0, 7, 0x1F, 0x40, 0);
        break;
    case 3:
        *(float *)(p + 0x7980) = *(float *)(p + 0x7980) - func_001F9C40(D_01DF5D20, 0x87);
        if (*(float *)(p + 0x7980) < 0.0f) {
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            func_00356CC0(p, p + 0x7AC8);
            func_003570A0(p + 0x7B00, *(int *)(p + 0x7B38), 1);
            func_003564A0(p, 0xA, p + 0x7B00);
            func_00356570(p, 0xA, p + 0x7B00);
        }
        break;
    case 4:
        if ((unsigned char)func_00356D10(p, p + 0x7AC8) == 0) {
            func_003570B0(p + 0x7B00, *(int *)(p + 0x7B38), 1, *(int *)(p + 0x7B40));
            func_003564A0(p, 0xA, p + 0x7B00);
            func_00356570(p, 0xA, p + 0x7B00);
        } else {
            func_003564A0(p, 0xA, p + 0x7AC8);
            func_00356570(p, 0xA, p + 0x7AC8);
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        }
        if (*(int *)(D_005BE0D8 + 0x54) & 1) func_003303F0(D_01DFABA0, 7, 0x1F, 0x40, 0);
        break;
    case 5:
        *(unsigned char *)(p + 5) = 6;
        *(unsigned char *)(p + 6) = 0;
        break;
    }
}

void func_00353580();

int func_00353880();

int func_00356460();

int func_00353510(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = (int)p0;
    switch (v0) {
    case 0:
        func_00353580(p0, v0);
        /* fall through */
    case 1:
        v2 = func_00353880(v1);
        break;
    case 2:
        v2 = func_00356460(p0, v0);
        break;
    }
    return v2;
}

void func_00353E60(p0) char *p0; {
    float func_001F9C40();
    char *v0;
    float v1;
    float tmp0;
    v0 = p0;
    if (*(unsigned char *)(p0 + 31072) == 1) {
        tmp0 = func_001F9C40(D_01DF5D20, 135);
        v1 = (*(float *)(v0 + 31096) - tmp0);
        *(float *)(v0 + 31096) = v1;
        if (v1 < 0.0f) {
            *(char *)(v0 + 5) = 2;
            *(char *)(v0 + 6) = 0;
        }
    }
}

extern char D_006011CC[];

int func_0013E040();

int func_00356410(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(unsigned char *)(p0 + 31076) == 1) {
        v1 = func_0013E040(D_006011CC, 30, 0);
        *(char *)(v0 + 5) = 7;
        *(char *)(v0 + 6) = 0;
    }
    return v1;
}
