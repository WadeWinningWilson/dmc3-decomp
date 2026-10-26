extern char D_005ADB00[];

extern char D_005ADB24[];

extern char D_005ADBA4[];

int func_00252FA0();

int func_0028C110();

int func_0036DAD0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005ADB00;
    *(char **)((char *)p0 + 64) = D_005ADB24;
    *(char **)((char *)p0 + 160) = D_005ADBA4;
    func_0028C110((p0 + 352));
    return p0;
}
