void func_00100450();

void func_0013D760();

void func_0013D7E0();

void func_0013E000();

int func_0013D6C0(p0) int p0; {
    int v0;
    char *v1;
    int v2;
    v1 = (char *)p0;
    func_00100450((v1 + 8), (char *)func_0013D7E0, (char *)func_0013D760, 0x30384, 2);
    *(int *)(v1 + 0) = 0;
    *(int *)(v1 + 4) = 100;
    v0 = 0;
    v2 = 0;
    do {
        func_0013E000(((v1 + v2) + 0x3032c), *(int *)(v1 + 4));
        v0 = (v0 + 1);
        v2 = (v2 + 0x30384);
    } while ((v0 < 2));
    return (int)v1;
}
