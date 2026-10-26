extern char D_005A9460[];

void func_002904A0();

int func_00290510(p0) int p0; {
    func_002904A0();
    *(char **)((char *)p0 + 0) = D_005A9460;
    return p0;
}

unsigned char func_00290990(char *p) { return *(unsigned char *)(p + 24); }

void func_002905B0(char *p0) {
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 20) = 0;
    *(char *)(p0 + 24) = 1;
}
