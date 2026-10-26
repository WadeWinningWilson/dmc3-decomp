extern char D_005BA710[];

extern char D_005BA734[];

extern char D_005BA7B4[];

int func_00252FA0();

void func_002790E0();

int func_0028C110();

void func_0031DCB0();

int func_004F5F10(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005BA710;
    *(char **)((char *)p0 + 64) = D_005BA734;
    *(char **)((char *)p0 + 160) = D_005BA7B4;
    *(char *)((char *)p0 + 432) = 0;
    func_002790E0((p0 + 576));
    func_0031DCB0((p0 + 2112));
    func_0028C110((p0 + 2256));
    return p0;
}
