char *func_00279290(char *);

void func_001A1F90(char *);

void func_0041C360(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 1:
        func_001A1F90(func_00279290(p + 0xAC0));
    }
    func_001A1F90(func_00279290(p + 0x16C0));
}

extern char D_005B35B0[];

extern char D_005B35D4[];

extern char D_005B3654[];

extern char D_005B36E8[];

extern char D_005B37B4[];

void func_0027CE70();

int func_003589B0();

void func_00400FF0();

int func_00419860(p0) int p0; {
    func_0027CE70();
    *(char **)((char *)p0 + 0) = D_005B35B0;
    *(char **)((char *)p0 + 64) = D_005B35D4;
    *(char **)((char *)p0 + 160) = D_005B3654;
    *(char **)((char *)p0 + 208) = D_005B36E8;
    *(char **)((char *)p0 + 304) = D_005B37B4;
    func_00400FF0((p0 + 11200));
    func_00400FF0((p0 + 11228));
    func_003589B0((p0 + 11264));
    return p0;
}

void func_00100580();

void func_0027D270();

void func_00358A00();

void func_00401030();

int func_004198E0(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v1 = p1;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005B35B0;
        *(char **)(v0 + 64) = D_005B35D4;
        *(char **)(v0 + 160) = D_005B3654;
        *(char **)(v0 + 208) = D_005B36E8;
        *(char **)(v0 + 304) = D_005B37B4;
        func_00358A00((v0 + 11264), -1);
        func_00401030((v0 + 11228), -1);
        func_00401030((v0 + 11200), -1);
        func_0027D270(v0, 0);
        v2 = (int)v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}

extern void func_00419E30();

void func_0041C7C0(char *p) { func_00419E30(p + -64); }
