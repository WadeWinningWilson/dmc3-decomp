extern char *D_005BE0D8;

extern char D_006663C0[];

extern char D_00666200[];

void func_001AB960(char *, int, int, int, int);

int func_001AB4A0(char *);

void func_001AB390(char *);

unsigned short func_001AE1E0(char *, int);

extern char D_006480D0[];

extern char D_01DFA310[];

int func_001960F0(char *p, int n);

extern int D_01CB12BC[];

void func_00195F60(char *);

extern signed char D_00666714[];

extern char D_0053FD30[];

extern char D_0053FD3C[];

void func_001AAE30(char *, char *, int, int, int);

void func_001AB200(char *, int);

void func_001AB220(char *, int, int);

void func_001AB140(char *);

void func_0030E500(char *, int);

unsigned char func_002FE570(char *p) {
    unsigned char r;
    int f;
    unsigned short w;
    r = 0;
    switch (*(unsigned int *)(p + 0x10)) {
    case 0:
        f = 0;
        if (D_00666714[0] == 3) f = 1;
        func_001AAE30(D_00666200, D_0053FD30, *(int *)(p + 0x24), 0, f);
        func_001AB200(D_00666200, *(unsigned short *)(D_005BE0D8 + 0x4C));
        func_001AB220(D_00666200, 0, 1);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
    case 1:
        w = *(unsigned short *)(D_0053FD3C + *(int *)(p + 0x24) * 20);
        func_001AB960(D_00666200, 0, (0x200 - w) / 2, 0x200, w);
        if ((func_001AE1E0(D_006663C0, 0) & 0x800) == 0 && func_001AB4A0(D_00666200) <= 0) break;
        func_001AB390(D_00666200);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 2: case 3:
        *(int *)(p + 0x10) = *(unsigned int *)(p + 0x10) + 1;
        break;
    case 4:
        func_001AB140(D_00666200);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 5:
        func_001960F0(D_006480D0, 0x24);
        func_00195F60(D_006480D0);
        func_0030E500(D_01DFA310, D_01CB12BC[0]);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 6:
        r = 1;
        break;
    default:
        *(int *)(p + 0xC) = 2;
        *(int *)(p + 0x10) = 0;
        break;
    }
    return r;
}
