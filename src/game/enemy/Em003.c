char *func_00279290(char *);

void func_001A1F90(char *);

void func_00344940(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 12:
    case 13:
        func_001A1F90(func_00279290(p + 0xAC0));
        func_001A1F90(func_00279290(p + 0x10C0));
    }
    func_001A1F90(func_00279290(p + 0x16C0));
}

extern char D_005ACC50[];

extern char D_005ACC74[];

extern char D_005ACCF4[];

extern char D_005ACD88[];

extern char D_005ACE54[];

void func_0027CE70();

int func_003589B0();

int func_0033DCC0(p0) int p0; {
    func_0027CE70();
    *(char **)((char *)p0 + 0) = D_005ACC50;
    *(char **)((char *)p0 + 64) = D_005ACC74;
    *(char **)((char *)p0 + 160) = D_005ACCF4;
    *(char **)((char *)p0 + 208) = D_005ACD88;
    *(char **)((char *)p0 + 304) = D_005ACE54;
    func_003589B0((p0 + 11200));
    return p0;
}

void func_00100580();

void func_0027D270();

void func_00358A00();

int func_0033DD30(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v1 = p1;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005ACC50;
        *(char **)(v0 + 64) = D_005ACC74;
        *(char **)(v0 + 160) = D_005ACCF4;
        *(char **)(v0 + 208) = D_005ACD88;
        *(char **)(v0 + 304) = D_005ACE54;
        func_00358A00((v0 + 11200), -1);
        func_0027D270(v0, 0);
        v2 = (int)v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}

extern void func_0033E260();

void func_00344AA0(char *p) { func_0033E260(p + -64); }
