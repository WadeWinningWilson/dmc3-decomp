char *func_00279290(char *);

void func_001A1F90(char *);

void func_002B45A0(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 0:
    case 1:
        func_001A1F90(func_00279290(p + 0xAC0));
    }
    func_001A1F90(func_00279290(p + 0x16C0));
}

extern char D_005A9C80[];

extern char D_005A9CA4[];

extern char D_005A9D24[];

extern char D_005A9DB8[];

extern char D_005A9E84[];

void func_0027CE70();

int func_003589B0();

int func_002ADD50(p0) int p0; {
    func_0027CE70();
    *(char **)((char *)p0 + 0) = D_005A9C80;
    *(char **)((char *)p0 + 64) = D_005A9CA4;
    *(char **)((char *)p0 + 160) = D_005A9D24;
    *(char **)((char *)p0 + 208) = D_005A9DB8;
    *(char **)((char *)p0 + 304) = D_005A9E84;
    func_003589B0((p0 + 11200));
    return p0;
}

void func_00100580();

void func_0027D270();

void func_00358A00();

int func_002ADDC0(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v1 = p1;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A9C80;
        *(char **)(v0 + 64) = D_005A9CA4;
        *(char **)(v0 + 160) = D_005A9D24;
        *(char **)(v0 + 208) = D_005A9DB8;
        *(char **)(v0 + 304) = D_005A9E84;
        func_00358A00((v0 + 11200), -1);
        func_0027D270(v0, 0);
        v2 = (int)v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}

extern void func_002AE2F0();

void func_002B46E0(char *p) { func_002AE2F0(p + -64); }
