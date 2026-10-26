extern char * D_005BE0D8;

int func_00134A80();

int func_0013CD90() {
    int tmp1;
    *(int *)0x10000010 = 139;
    *(int *)0x10000000 = 0;
    *(char *)(D_005BE0D8 + 18) = 0;
    tmp1 = func_00134A80();
    *(char *)(D_005BE0D8 + 18) = 1;
    return tmp1;
}

void func_0013CDD0(p0) int p0; {
    *(char *)(D_005BE0D8 + 19) = p0;
}
