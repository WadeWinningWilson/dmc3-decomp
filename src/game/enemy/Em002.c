char *func_00279290(char *);

void func_001A1F90(char *);

void func_002C2FF0(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 8:
    case 9:
        func_001A1F90(func_00279290(p + 0xAC0));
        func_001A1F90(func_00279290(p + 0x10C0));
    }
    func_001A1F90(func_00279290(p + 0x16C0));
}

extern char D_005AA110[];

extern char D_005AA134[];

extern char D_005AA1B4[];

extern char D_005AA248[];

extern char D_005AA314[];

void func_0027CE70();

int func_003589B0();

int func_002BC2B0(p0) int p0; {
    func_0027CE70();
    *(char **)((char *)p0 + 0) = D_005AA110;
    *(char **)((char *)p0 + 64) = D_005AA134;
    *(char **)((char *)p0 + 160) = D_005AA1B4;
    *(char **)((char *)p0 + 208) = D_005AA248;
    *(char **)((char *)p0 + 304) = D_005AA314;
    func_003589B0((p0 + 11200));
    return p0;
}

void func_00100580();

void func_0027D270();

void func_00358A00();

int func_002BC320(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v1 = p1;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005AA110;
        *(char **)(v0 + 64) = D_005AA134;
        *(char **)(v0 + 160) = D_005AA1B4;
        *(char **)(v0 + 208) = D_005AA248;
        *(char **)(v0 + 304) = D_005AA314;
        func_00358A00((v0 + 11200), -1);
        func_0027D270(v0, 0);
        v2 = (int)v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}

extern void func_002BC850();

void func_002C3150(char *p) { func_002BC850(p + -64); }
