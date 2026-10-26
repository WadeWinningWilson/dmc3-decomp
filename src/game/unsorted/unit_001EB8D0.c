void func_001003E0();

void func_00100580();

int func_001EB950();

int func_001EB8D0(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    if (v0 != 0) {
        func_001003E0((v0 + 19200), (char *)func_001EB950, 560, 6);
        func_001003E0((v0 + 10240), (char *)func_001EB950, 560, 16);
        v2 = v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return v0;
}

void func_0013D240();

int func_001EB950(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    if (v0 != 0) {
        func_001003E0(p0, (char *)func_0013D240, 16, 2);
        v2 = v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return v0;
}

void func_00100450();

void func_001AAD30();

int func_001EB9B0(p0) int p0; {
    func_00100450(p0, (char *)func_001AAD30, (char *)func_0013D240, 16, 2);
    return p0;
}
