extern char D_005B48C0[];

extern char D_005B48E4[];

extern char D_005B4964[];

int func_00252FA0();

int func_0028C110();

int func_00448B50(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B48C0;
    *(char **)((char *)p0 + 64) = D_005B48E4;
    *(char **)((char *)p0 + 160) = D_005B4964;
    func_0028C110((p0 + 400));
    *(char *)((char *)p0 + 69) = 4;
    *(short *)((char *)p0 + 144) = 0;
    *(int *)((char *)p0 + 944) = 0;
    *(int *)((char *)p0 + 948) = 0;
    *(int *)((char *)p0 + 952) = 0;
    return p0;
}
