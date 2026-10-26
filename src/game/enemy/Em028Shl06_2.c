extern char D_005B4A30[];

extern char D_005B4A54[];

extern char D_005B4AD4[];

int func_00252FA0();

int func_0028C110();

int func_0044C190(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B4A30;
    *(char **)((char *)p0 + 64) = D_005B4A54;
    *(char **)((char *)p0 + 160) = D_005B4AD4;
    func_0028C110((p0 + 336));
    *(int *)((char *)p0 + 1056) = 0;
    *(int *)((char *)p0 + 1060) = 0;
    *(int *)((char *)p0 + 1064) = 0;
    return p0;
}

extern void func_0044C260();

void func_0044C7F0(char *p) { func_0044C260(p + -64); }
