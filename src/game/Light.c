extern char D_005A7780[];

extern char D_005A7790[];

void func_00100580();

int func_00202ED0(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A7780;
        if (v0 != 0) {
            *(char **)(v0 + 0) = D_005A7790;
        }
        v2 = (int)v0;
        if ((short)p1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}
