void func_0022F0D0(char *);

void func_0022F610(char *);

void func_0022F620(char *);

void func_0022F060(char *p) {
    switch (*(int *)(p + 0x10)) {
    case 0:
        func_0022F0D0(p);
        break;
    case 1:
        func_0022F610(p);
        break;
    case 2:
        func_0022F620(p);
        break;
    }
}

extern char D_01DFABA0[];

void func_00128488(char *, int, int);

extern int D_01CAFF30[];

extern unsigned char D_01CAFF40[];

extern int D_01CAFF38[];

extern unsigned char D_01CAFF3E[];

extern unsigned char D_01CAFF3C[];

extern char D_006480D0[];

extern char D_01DFA310[];

int func_001960F0(char *p, int n);

extern unsigned char D_01CAFF3D[];

extern int D_01CB12BC[];

extern int D_01CAFF34[];

extern unsigned char D_01CAFF3F[];

extern int D_01CAFF44[];

extern char D_01CAFF48[];

extern char D_01CAFF83[];

extern char D_01CAFF8C[];

extern unsigned char D_01CAFF98[];

extern unsigned char D_01CAFF5E[];

extern unsigned char D_01CAFF64[];

extern char D_01CAFF9C[];

extern char D_01CAFFFC[];

extern char D_01CB0004[];

extern char D_01CB000C[];

extern char D_01CB0014[];

extern char D_01CB0020[];

extern char D_01CB0080[];

extern char D_01CB0288[];

extern char D_01CB0490[];

void func_00195F60(char *);

void func_00331300(char *);

void func_0030E440(char *, int);

void func_00253870(char *);

typedef struct { int f; char pad[0x64]; } S22E;

extern S22E D_01CB02BC[5];

void func_0022ECC0(char *p) {
    int i;
    *(int *)(p + 0x14) = 0;
    *(int *)(p + 0x10) = 0;
    *(int *)(p + 0xC) = 0;
    *(int *)(p + 0x18) = 0x708;
    *(int *)(p + 0x24) = 0;
    *(int *)(p + 0x1C) = 0;
    func_001960F0(D_006480D0, 0x24);
    func_00195F60(D_006480D0);
    func_00331300(D_01DFABA0);
    func_0030E440(D_01DFA310, D_01CB12BC[0]);
    D_01CAFF38[0] = 0;
    D_01CAFF30[0] = 1;
    D_01CAFF3C[0] = 2;
    D_01CAFF34[0] = 1;
    D_01CAFF3D[0] = 0;
    D_01CAFF3E[0] = 0;
    D_01CAFF3F[0] = 1;
    D_01CAFF40[0] = 1;
    D_01CAFF44[0] = 0;
    func_00128488(D_01CAFF48, 0, 0x3B);
    func_00128488(D_01CAFF83, 0, 8);
    func_00128488(D_01CAFF8C, 0, 8);
    D_01CAFF98[0] = 0;
    D_01CAFF5E[0] = 1;
    D_01CAFF64[0] = 1;
    func_00253870(D_01CAFF9C);
    func_00128488(D_01CAFFFC, 0, 8);
    func_00128488(D_01CB0004, 0, 8);
    func_00128488(D_01CB000C, 0, 8);
    func_00128488(D_01CB0014, 0, 0xC);
    func_00128488(D_01CB0020, 0, 0x60);
    func_00128488(D_01CB0080, 0, 0x208);
    func_00128488(D_01CB0288, 0, 0x208);
    for (i = 0; i < 5; i++) {
        D_01CB02BC[i].f |= 0x80000;
        D_01CB02BC[i].f |= 0x200000;
    }
    func_00128488(D_01CB0490, -1, 0x69);
}

extern char D_005D0E70[];

extern char D_00666750[];

void func_0013DA70();

void func_001AED10();

void func_0030E540();

void func_0022EF30(void) {
    func_0013DA70(D_005D0E70);
    func_001AED10(D_00666750);
    func_0030E540(D_01DFA310);
}

extern char D_005BBA1C;

int func_001AF3F0();

int func_001AFB90();

void func_0022EFF0(p0) int p0; {
    int tmp0;
    int tmp1;
    tmp0 = func_001AFB90(D_00666750, 900, 0, 8);
    *(int *)((char *)p0 + 32) = tmp0;
    tmp1 = func_001AF3F0(D_00666750, &D_005BBA1C, 0, 0);
    *(int *)((char *)p0 + 36) = tmp1;
    *(int *)((char *)p0 + 44) = 0;
    *(int *)((char *)p0 + 12) = 1;
    *(int *)((char *)p0 + 16) = 0;
    *(int *)((char *)p0 + 20) = 0;
    *(int *)((char *)p0 + 28) = 0;
}

extern char D_005A7910[];

extern char D_005A7A20[];

void func_00100580();

int func_0022F7E0(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A7A20;
        if (v0 != 0) {
            *(char **)(v0 + 0) = D_005A7910;
        }
        v2 = (int)v0;
        if ((short)p1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}
