void func_00207480();

void func_0034BA60();

void func_0041D670();

void func_003D1DE0(p) char *p; {
    func_0034BA60(75, p + 80, 50, 0, 1);
    func_00207480(3, 822, p + 496, 16);
    *(int *)(p + 2880) = 1120403456;
    func_0041D670(p + 2944);
}

extern char D_005B10D0[];

extern char D_005B10F4[];

extern char D_005B1174[];

int func_00252FA0();

void func_002790E0();

int func_0028C110();

void func_0031DCB0();

int func_003D2180(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B10D0;
    *(char **)((char *)p0 + 64) = D_005B10F4;
    *(char **)((char *)p0 + 160) = D_005B1174;
    *(char *)((char *)p0 + 432) = 0;
    func_002790E0((p0 + 576));
    func_0031DCB0((p0 + 2112));
    func_0028C110((p0 + 2256));
    return p0;
}
