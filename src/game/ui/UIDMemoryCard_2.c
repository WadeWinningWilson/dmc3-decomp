extern char D_005BA090[];

extern char D_005BA0B4[];

extern char D_005BA134[];

int func_00252FA0();

void func_002790E0();

int func_0028C110();

void func_0031DCB0();

int func_004E63D0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005BA090;
    *(char **)((char *)p0 + 64) = D_005BA0B4;
    *(char **)((char *)p0 + 160) = D_005BA134;
    func_0028C110((p0 + 416));
    func_002790E0((p0 + 1152));
    func_0031DCB0((p0 + 2688));
    *(int *)((char *)p0 + 1136) = 0;
    *(int *)((char *)p0 + 1140) = 0;
    return p0;
}
