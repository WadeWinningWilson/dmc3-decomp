void func_0024DA80(char *, int, int);

void func_00346600(char *p, int i) {
    if (i != 1000) {
        unsigned char *e = (unsigned char *)(*(char **)(p + 0x2300) + i * 2);
        unsigned char a = e[0];
        unsigned char b = e[1];
        func_0024DA80(p + 0x2160, a, b);
        func_0024DA80(p + 0x2230, a, b);
        *(unsigned char *)(p + 0x2B41) = a;
        *(unsigned char *)(p + 0x2B42) = b;
    }
}

extern char D_005ACE90[];

extern char D_005ACEB4[];

extern char D_005ACF34[];

extern char D_005ACFC8[];

extern char D_005AD094[];

void func_0027CE70();

int func_003589B0();

int func_00344AF0(p0) int p0; {
    func_0027CE70();
    *(char **)((char *)p0 + 0) = D_005ACE90;
    *(char **)((char *)p0 + 64) = D_005ACEB4;
    *(char **)((char *)p0 + 160) = D_005ACF34;
    *(char **)((char *)p0 + 208) = D_005ACFC8;
    *(char **)((char *)p0 + 304) = D_005AD094;
    func_003589B0((p0 + 11200));
    *(char *)((char *)p0 + 11472) = 0;
    *(int *)((char *)p0 + 11476) = 0;
    *(char *)((char *)p0 + 11480) = 0;
    *(char *)((char *)p0 + 11481) = 0;
    *(char *)((char *)p0 + 11482) = 0;
    *(char *)((char *)p0 + 11483) = 0;
    *(char *)((char *)p0 + 11484) = 0;
    *(char *)((char *)p0 + 11485) = 0;
    *(char *)((char *)p0 + 11486) = 0;
    *(char *)((char *)p0 + 11487) = 0;
    return p0;
}

void func_00100580();

void func_0027D270();

void func_00358A00();

int func_00344B90(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v1 = p1;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005ACE90;
        *(char **)(v0 + 64) = D_005ACEB4;
        *(char **)(v0 + 160) = D_005ACF34;
        *(char **)(v0 + 208) = D_005ACFC8;
        *(char **)(v0 + 304) = D_005AD094;
        func_00358A00((v0 + 11200), -1);
        func_0027D270(v0, 0);
        v2 = (int)v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}

extern void func_00345180();

void func_00346C40(char *p) { func_00345180(p + -64); }

extern void func_00346680();

void func_00346C70(char *p) { func_00346680(p + -208); }
