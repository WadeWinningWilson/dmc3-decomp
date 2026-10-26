float func_001F9C40(char *, int);

extern char D_01DF5D20[];

extern unsigned char D_01DFA32C[];

extern char D_006663C0[];

extern char D_01CB1290[];

extern signed char D_01CB131C[];

extern int D_00559A50[];

int func_001AE1E0(char *, int);

int func_0030F790(char *, char *);

void func_0030FCB0(char *, char *, char *);

void func_0030FCF0(char *, char *, char *);

void func_001F4170(char *, int);

void func_0030EFE0(char *, char *);

void func_0030EB50(char *p) {
    void func_0030EAA0(char *, int, short, short, int);
    void func_001F41B0(char *, int, int);
    void func_001F4820(char *, int);
    unsigned char c;
    char *s;
    float f;
    c = 1;
    (*(int *)(p + 0x1C))++;
    switch (*(unsigned char *)p) {
    case 0:
        return;
    case 2:
        if (D_01DFA32C[0] != 0 || !((unsigned short)func_001AE1E0(D_006663C0, 0) & 0x10)) {
            f = func_001F9C40(D_01DF5D20, 0x87);
            if (!((*(float *)(p + 0x48) -= f) < f)) break;
        }
        *(unsigned char *)p = 1;
    case 1:
        while (c == 1) {
            s = *(char **)(p + 0x18);
            switch ((unsigned char)func_0030F790(p, p + 0x18)) {
            case 0:
                func_0030FCB0(p, p + 0x3C, p + 0x18);
                if (D_01DFA32C[0] != 0 || !((unsigned short)func_001AE1E0(D_006663C0, 0) & 0x10)) {
                    *(float *)(p + 0x48) += *(float *)(p + 0x44);
                    if (!(*(float *)(p + 0x48) < func_001F9C40(D_01DF5D20, 0x87))) {
                        c = 0;
                        *(unsigned char *)p = 2;
                    }
                }
                break;
            case 1:
                func_0030FCF0(p, p + 0x3C, s);
                break;
            case 2:
                break;
            case 3:
            case 4:
                func_0030FCF0(p, p + 0x3C, s);
                break;
            case 5:
            case 6:
                func_0030FCF0(p, p + 0x3C, s);
                break;
            case 7:
                *(float *)(p + 0x50) = *(float *)(p + 0x54);
                break;
            case 8:
                func_0030FCF0(p, p + 0x3C, s);
                break;
            case 9:
                *(unsigned char *)p = 3;
                c = 0;
                break;
            case 10:
                *(unsigned char *)p = 2;
                c = 0;
                *(float *)(p + 0x48) += *(float *)(p + 0x4C);
                break;
            case 11:
            case 12:
                func_0030FCF0(p, p + 0x3C, s);
                break;
            case 13:
                *(unsigned char *)p = 0;
                func_0030EAA0(p, *(int *)(p + 0x10), *(short *)(p + 0x14), *(short *)(p + 0x16), 1);
                return;
            case 14:
                *(unsigned char *)p = 4;
                c = 0;
                *(float *)(p + 0x50) = 128.0f;
                break;
            case 15:
                *(unsigned char *)p = 5;
                c = 0;
                *(float *)(p + 0x50) = 0.0f;
                break;
            case 16:
                *(int *)(p + 0x40) = *(int *)(p + 0x3C);
                func_0030FCF0(p, p + 0x3C, s);
                break;
            case 21:
                if (*(unsigned char *)(p + 0x20) == 1) {
                    c = 0;
                    break;
                }
                *(unsigned char *)p = 0;
                return;
            case 20:
                *(unsigned char *)(p + 0x20) = 1;
                c = 0;
                break;
            case 17:
                func_0030FCF0(p, p + 0x3C, s);
                break;
            case 18:
                func_0030FCF0(p, p + 0x3C, s);
                break;
            case 19:
                func_0030FCF0(p, p + 0x3C, s);
                break;
            }
        }
        **(char **)(p + 0x3C) = 0;
        break;
    case 3:
        if ((unsigned short)func_001AE1E0(D_006663C0, 0)) *(unsigned char *)p = 1;
        if (*(int *)(p + 0x1C) & 0x20) {
            func_001F4170(D_01CB1290, 0x10);
            func_001F41B0(D_01CB1290, 0x1CA, 0x1B8);
            func_001F4820(D_01CB1290, D_00559A50[D_01CB131C[0]]);
        }
        func_001F4170(D_01CB1290, *(unsigned char *)(p + 0x34));
        break;
    case 4:
        f = func_001F9C40(D_01DF5D20, 0x87);
        if ((*(float *)(p + 0x50) -= *(float *)(p + 0x58) * f) <= 0.0f) {
            *(unsigned char *)p = 1;
            *(float *)(p + 0x50) = 0.0f;
        }
        break;
    case 5:
        f = func_001F9C40(D_01DF5D20, 0x87);
        if (!((*(float *)(p + 0x50) += *(float *)(p + 0x58) * f) < 128.0f)) {
            *(unsigned char *)p = 1;
            *(float *)(p + 0x50) = 128.0f;
        }
        break;
    }
    func_0030EFE0(p, p + 0x5D);
}

void func_0030F510(char *p, int s, int *last) {
    void func_001F41C0(char *p, unsigned int v);
    extern int D_01CB1308[];
    extern int D_01CB130C[];
    extern int D_01CB1310[];
    void func_001F41B0(char *, int, int);
    void func_001F4820(char *, int);
    int x;
    int y;
    if (*last != s) {
        *(char *)*last = 0;
        x = D_01CB1308[0];
        y = D_01CB130C[0];
        if (*(unsigned char *)(p + 33) == 1) {
            func_001F41C0(D_01CB1290, *(int *)(p + 48));
            func_001F41B0(D_01CB1290, x + 1, y + 1);
            D_01CB1310[0] = 0xFFFFF1;
            func_001F4820(D_01CB1290, s);
        }
        func_001F41C0(D_01CB1290, *(int *)(p + 36));
        func_001F41B0(D_01CB1290, x, y);
        D_01CB1310[0] = 0xFFFFF2;
        func_001F4820(D_01CB1290, s);
        *last = s;
    }
}

extern char *D_005BE0D8;

extern int D_01DFA328[];

extern char D_01C61820[];

int func_001B6800(char *, short, short, short, int, int, int, int, char *);

void func_00310360(char *p, int k, char *s) {
    extern int D_01CB1308[];
    extern int D_01CB130C[];
    void func_001F41B0(char *, int, int);
    int y;
    int h;
    int r;
    y = D_01CB1308[0] + 1;
    h = D_01CB130C[0];
    if (D_01DFA328[0] != 0) {
        switch ((unsigned char)k) {
        case 0xE:
        case 0xF:
            r = 0x28;
            break;
        default:
            r = 0x14;
            break;
        }
        switch ((unsigned char)k) {
        case 0x10: k = 3; break;
        case 0x11: k = 1; break;
        case 0x12: k = 2; break;
        }
        r = func_001B6800(D_01C61820, y, *(signed char *)(D_005BE0D8 + 3) != 0 ? (int)(h >> 1) - *(short *)(D_005BE0D8 + 0x2E) : h - *(short *)(D_005BE0D8 + 0x2E), r, 0x14, 0x80, D_01DFA328[0], k, s);
    }
    func_001F41B0(D_01CB1290, y + r + 1, h);
}

void func_0030F610(char *p, int k) {
    extern int D_01CB1308[];
    extern int D_01CB130C[];
    void func_001F41B0(char *, int, int);
    int r;
    int y;
    int h;
    unsigned char c;
    y = D_01CB1308[0] + 1;
    h = D_01CB130C[0];
    if (D_01DFA328[0] != 0) {
        switch ((unsigned char)k) {
        case 0xE:
        case 0xF:
            c = *(unsigned char *)(p + 0x34);
            r = c * 2;
            break;
        default:
            c = *(unsigned char *)(p + 0x34);
            r = c;
            break;
        }
        switch ((unsigned char)k) {
        case 0x10: k = 3; break;
        case 0x11: k = 1; break;
        case 0x12: k = 2; break;
        }
        func_001B6800(D_01C61820, y, *(signed char *)(D_005BE0D8 + 3) != 0 ? (int)(h >> 1) - *(short *)(D_005BE0D8 + 0x2E) : h - *(short *)(D_005BE0D8 + 0x2E), r, c, (unsigned int)*(float *)(p + 0x50), D_01DFA328[0], k, (char *)0xFFFFF2);
    }
    func_001F41B0(D_01CB1290, y + r + 1, h);
}

void func_0030EA90(p0, p1) int p0; int p1; {
    int func_0030EAA0();
    func_0030EAA0(p0, p1, 0, 0, 0);
}

extern char D_01DFA310[];

int func_0030E980();

int func_0030FDF0();

int func_0030FD40(p0, p1, p2, p3, p4, p5, p6, p7) int p0; int p1; int p2; int p3; int p4; int p5; int p6; int p7; {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    v1 = p2;
    v2 = p3;
    v3 = p4;
    v4 = p5;
    v5 = p6;
    v6 = p7;
    v7 = func_0030E980(D_01DFA310);
    v0 = p0;
    if (v7 == 0) {
        v8 = 0;
    } else {
        v8 = func_0030FDF0(v0, v7, v1, v2, v3, v4, v5, v6);
    }
    return v8;
}

extern char D_01CB1291[];

int func_0030FD40();

int func_003101B0(p0, p1, p2) int p0; int p1; int p2; {
    int tmp0;
    *(char *)D_01CB1291 = 0;
    tmp0 = func_0030FD40(p0, p1, 0, 0, 0, p2, 0xfffff2, 1);
    *(char *)D_01CB1291 = 1;
    return tmp0;
}

int func_00310200(p0, p1, p2) int p0; int p1; int p2; {
    int tmp0;
    *(char *)D_01CB1291 = 0;
    tmp0 = func_0030FDF0(p0, p1, 0, 0, 0, p2, 0xfffff2, 1);
    *(char *)D_01CB1291 = 1;
    return tmp0;
}

int func_00310250(p0, p1, p2, p3, p4) char *p0; int p1; char *p2; int p3; int p4; {
    extern char D_01CB1308[];
    extern char D_01CB130C[];
    extern char D_01CB1310[];
    void func_001F41B0();
    void func_001F41C0();
    int func_001F4820();
    int v0;
    char *v1;
    int v2;
    char *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v0 = p1;
    v1 = p2;
    v2 = p3;
    v3 = *(char **)(p2 + 0);
    v4 = p4;
    if ((int)v3 != v0) {
        *(char *)(v3 + 0) = 0;
        v5 = *(int *)D_01CB1308;
        v6 = *(int *)D_01CB130C;
        if (*(unsigned char *)(p0 + 2093) == 1) {
            func_001F41C0(D_01CB1290, 0x80000000);
            func_001F41B0(D_01CB1290, (v5 + 1), (v6 + 1));
            *(int *)D_01CB1310 = (v4 + -1);
            func_001F4820(D_01CB1290, v0);
        }
        func_001F41C0(D_01CB1290, (v2 | 0x80000000));
        func_001F41B0(D_01CB1290, v5, v6);
        *(int *)D_01CB1310 = v4;
        v7 = func_001F4820(D_01CB1290, v0);
        *(int *)(v1 + 0) = v0;
    }
    return v7;
}

extern char D_005A8DD0[];

extern char D_005A8DF4[];

extern char D_005A8E74[];

extern char D_005ABDE0[];

extern char D_005ABE04[];

extern char D_005ABE84[];

void func_00100450();

void func_0013D240();

void func_001AAD30();

int func_00231560();

void func_0024D930();

void func_0024F750();

void func_002790E0();

void func_002791E0();

int func_0028C110();

void func_00291050();

void func_0031DCB0();

int func_00310C80(p0) int p0; {
    func_0024F750();
    *(char **)((char *)p0 + 0) = D_005A8DD0;
    *(char **)((char *)p0 + 64) = D_005A8DF4;
    *(char **)((char *)p0 + 160) = D_005A8E74;
    *(char *)((char *)p0 + 68) = -1;
    *(char *)((char *)p0 + 69) = 1;
    *(int *)((char *)p0 + 232) = 0;
    *(int *)((char *)p0 + 236) = 0;
    *(int *)((char *)p0 + 240) = 0;
    *(int *)((char *)p0 + 244) = 0;
    *(char *)((char *)p0 + 221) = 0;
    *(char *)((char *)p0 + 209) = 0;
    *(char **)((char *)p0 + 0) = D_005ABDE0;
    *(char **)((char *)p0 + 64) = D_005ABE04;
    *(char **)((char *)p0 + 160) = D_005ABE84;
    func_00100450((p0 + 368), (char *)func_00291050, (char *)func_00231560, 112, 3, D_005ABDE0);
    func_00100450((p0 + 708), (char *)func_001AAD30, (char *)func_0013D240, 16, 31);
    func_002790E0((p0 + 1216));
    func_0031DCB0((p0 + 2752));
    func_0024D930((p0 + 2896));
    func_0028C110((p0 + 3104));
    func_00100450((p0 + 3648), (char *)func_002790E0, (char *)func_002791E0, 1536, 3);
    return p0;
}
