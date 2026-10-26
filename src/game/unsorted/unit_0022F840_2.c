char *func_001B0FD0(char *, int, int);

extern char D_005BBE58[8];

extern char D_005BBE60[8];

extern char D_005BBE68[8];

extern char D_005BBE70[8];

extern char D_005BBE78[8];

extern char D_005BBE80[8];

extern char D_005BBE88[8];

extern char D_005BBE90[8];

extern char D_005BBE98[8];

extern char D_005BBEA0[8];

extern char D_005BBEA8[8];

extern char D_005BE0D0[8];

void func_0012B2E8(char *, char *);

void func_0012ACE8(char *, char *, char *, char *);

int func_001EBB20(char *, char *);

void func_001EBB10(char *, char *, char *);

int func_0012BA60(char *, char *);

signed char func_00230450(char *);

void func_001A95A0(char *);

void func_001A9660(char *);

void func_001A9730(char *);

void func_00304BC0(char *);

int func_00230180(int *p, char *a, char *b) {
    char buf[128];
    char *o;
    if (p[0] < 0x100) {
        func_0012B2E8((char *)p + p[0] * 32 + 0x1004, b);
        func_0012B2E8((char *)p + p[0] * 32 + 0x3004, a);
        func_0012ACE8(buf, D_005BBE58, a, b);
        o = func_001B0FD0((char *)p + p[0] * 16 + 4, func_001EBB20(D_005BE0D0, buf), 0);
        func_001EBB10(D_005BE0D0, buf, o);
        if (func_0012BA60(b, D_005BBE60) || func_0012BA60(b, D_005BBE68) || func_0012BA60(b, D_005BBE70)) {
            *(char *)(p[0] + (int)p + 0x5104) = 4;
        } else if (func_0012BA60(b, D_005BBE78) || func_0012BA60(b, D_005BBE80) || func_0012BA60(b, D_005BBE88)) {
            *(char *)(p[0] + (int)p + 0x5104) = 5;
        } else if (func_0012BA60(b, D_005BBE90) || func_0012BA60(b, D_005BBE98) || func_0012BA60(b, D_005BBEA0) ||
                   func_0012BA60(b, D_005BBEA8)) {
            *(char *)(p[0] + (int)p + 0x5104) = 6;
        } else {
            switch (func_00230450(o)) {
            case 0:
                *(char *)(p[0] + (int)p + 0x5104) = 0;
                func_001A95A0(o);
                break;
            case 1:
                *(char *)(p[0] + (int)p + 0x5104) = 1;
                func_001A9660(o);
                break;
            case 2:
                *(char *)(p[0] + (int)p + 0x5104) = 2;
                func_001A9730(o);
                break;
            case 3:
                *(char *)(p[0] + (int)p + 0x5104) = 3;
                break;
            case 7:
                *(char *)(p[0] + (int)p + 0x5104) = 7;
                func_00304BC0(o);
                break;
            }
        }
        p[0]++;
    }
    return p[0] - 1;
}

int func_0022F930();

int func_0022FA40();

int func_0022F9F0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = p1;
    v1 = p2;
    v2 = func_0022F930();
    v3 = p0;
    if (v2 < 0) {
        v2 = func_0022FA40(v3, v0, v1);
    }
    return v2;
}
