void func_001003E0();

void func_00100580();

void func_0013D760();

int func_0013D840(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    if (v0 != 0) {
        func_001003E0((v0 + 8), (char *)func_0013D760, 0x30384, 2);
        v2 = v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return v0;
}
