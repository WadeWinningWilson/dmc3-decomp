extern char * D_005BE0D8;

extern char D_006480D0[];

void func_001029B8();

int func_00102B48();

int func_00195EA0();

int func_00134070(p0) int p0; {
    int tmp0;
    int tmp6;
    tmp0 = func_00102B48();
    *(int *)(D_005BE0D8 + 144) = tmp0;
    func_001029B8(p0, *(signed char *)(D_005BE0D8 + 1), *(signed char *)(D_005BE0D8 + 2), *(signed char *)(D_005BE0D8 + 3));
    tmp6 = func_00195EA0(D_006480D0);
    return tmp6;
}
