extern char D_005A7780[];

extern char D_005A7790[];

void func_00277D30();

int func_004914E0(p0) char *p0; {
    *(char **)(p0 + 224) = D_005A7790;
    *(int *)(p0 + 232) = 0;
    *(int *)(p0 + 228) = 0;
    *(char **)(p0 + 224) = D_005A7780;
    func_00277D30();
    return (int)p0;
}
