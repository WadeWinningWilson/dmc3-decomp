extern char D_005A6F30[];

extern char D_005A6F40[];

void func_00100580();

int func_00101590(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A6F40;
        if (v0 != 0) {
            *(char **)(v0 + 0) = D_005A6F30;
        }
        v2 = (int)v0;
        if ((short)p1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}
