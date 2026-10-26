extern char D_005B3960[];

extern char D_005B3984[];

extern char D_005B3A04[];

int func_00252FA0();

int func_0028C110();

int func_0042D400(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B3960;
    *(char **)((char *)p0 + 64) = D_005B3984;
    *(char **)((char *)p0 + 160) = D_005B3A04;
    *(char *)((char *)p0 + 336) = 0;
    func_0028C110((p0 + 464));
    *(int *)((char *)p0 + 1104) = 0;
    return p0;
}

extern void func_0042D460();

void func_0042D8C0(char *p) { func_0042D460(p + -64); }
