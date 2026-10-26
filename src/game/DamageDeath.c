extern char D_005AB100[];

extern char D_005AB118[];

int func_002E7840();

int func_002E7BF0(p0) int p0; {
    func_002E7840();
    *(char **)((char *)p0 + 0) = D_005AB100;
    *(char **)((char *)p0 + 4) = D_005AB118;
    *(int *)((char *)p0 + 68) = 0;
    *(int *)((char *)p0 + 72) = 0;
    return p0;
}

extern char D_005AB0C0[];

extern char D_005AB0D8[];

int func_002E82A0(p0) int p0; {
    func_002E7840();
    *(char **)((char *)p0 + 0) = D_005AB0C0;
    *(char **)((char *)p0 + 4) = D_005AB0D8;
    return p0;
}

extern char D_005AB080[];

extern char D_005AB098[];

int func_002E8370(p0) int p0; {
    func_002E7840();
    *(char **)((char *)p0 + 0) = D_005AB080;
    *(char **)((char *)p0 + 4) = D_005AB098;
    return p0;
}

extern void func_002E7C40();

void func_002E8450(char *p) { func_002E7C40(p + -4); }

extern void func_002E82E0();

void func_002E8460(char *p) { func_002E82E0(p + -4); }

extern void func_002E83B0();

void func_002E8470(char *p) { func_002E83B0(p + -4); }

void func_002E7CB0(char *p0, int p1, int p2) {
    *(int *)(p0 + 68) = p1;
    *(int *)(p0 + 72) = p2;
}

void func_002E8440(char *p) {
    extern void func_002E78A0(); func_002E78A0(p + -4); }
