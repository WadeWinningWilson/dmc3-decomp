int func_00414FA0(char *p) {
    int i;
    int n = *(short *)(p + 4);
    for (i = 0; i < n; i++, p += 8) {
        if (*(unsigned char *)(p + 8) == 0) {
            return 1;
        }
    }
    return 0;
}

void func_00414EC0(char *p, short n) {
    int i;
    if (n > 10) n = 10;
    *(short *)(p + 4) = n;
    for (i = 0; i < *(short *)(p + 4); i++) {
        *(unsigned char *)(p + i * 8 + 8) = 0;
        *(int *)(p + i * 8 + 0xC) = 0;
    }
}

extern char D_005B31B0[];

void func_00414DB0();

int func_00414E20(p0) int p0; {
    func_00414DB0();
    *(char **)((char *)p0 + 0) = D_005B31B0;
    *(short *)((char *)p0 + 4) = 0;
    return p0;
}
