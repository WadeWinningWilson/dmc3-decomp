char *func_00279290(char *);

void func_001A1F90(char *);

void func_0040DC30(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 24:
        func_001A1F90(func_00279290(p + 0xAC0));
    }
    func_001A1F90(func_00279290(p + 0x16C0));
}

void func_0040DCA0(char *p) {
    void func_001A1E10(char *);
    func_001A1E10(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 24:
        func_001A1E10(func_00279290(p + 0xAC0));
    }
    func_001A1E10(func_00279290(p + 0x16C0));
}

extern char D_005B2D60[];

extern char D_005B2D84[];

extern char D_005B2E04[];

extern char D_005B2E98[];

extern char D_005B2F64[];

void func_0027CE70();

void func_00400FF0();

int func_004968C0();

int func_0040B3A0(p0) int p0; {
    func_0027CE70();
    *(char **)((char *)p0 + 0) = D_005B2D60;
    *(char **)((char *)p0 + 64) = D_005B2D84;
    *(char **)((char *)p0 + 160) = D_005B2E04;
    *(char **)((char *)p0 + 208) = D_005B2E98;
    *(char **)((char *)p0 + 304) = D_005B2F64;
    func_00400FF0((p0 + 11216));
    func_00400FF0((p0 + 11244));
    func_004968C0((p0 + 11280));
    return p0;
}

void func_00100580();

void func_0027D270();

void func_00401030();

void func_00496910();

int func_0040B420(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v1 = p1;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005B2D60;
        *(char **)(v0 + 64) = D_005B2D84;
        *(char **)(v0 + 160) = D_005B2E04;
        *(char **)(v0 + 208) = D_005B2E98;
        *(char **)(v0 + 304) = D_005B2F64;
        func_00496910((v0 + 11280), -1);
        func_00401030((v0 + 11244), -1);
        func_00401030((v0 + 11216), -1);
        func_0027D270(v0, 0);
        v2 = (int)v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}

extern void func_0040B970();

void func_0040E040(char *p) { func_0040B970(p + -64); }
