extern char D_005B69C0[];

extern char D_005B69E4[];

extern char D_005B6A64[];

int func_00252FA0();

void func_002790E0();

int func_0028C110();

int func_0047F950(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B69C0;
    *(char **)((char *)p0 + 64) = D_005B69E4;
    *(char **)((char *)p0 + 160) = D_005B6A64;
    func_002790E0((p0 + 384));
    func_0028C110((p0 + 1920));
    *(char *)((char *)p0 + 69) = 2;
    *(short *)((char *)p0 + 144) = 0;
    *(int *)((char *)p0 + 360) = 0;
    return p0;
}
