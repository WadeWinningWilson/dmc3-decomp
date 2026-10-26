// cc: ee-gcc2.96 -O2 -G0
extern char D_00595A28[];

extern char D_00595A58[];

void func_001798E8();

int func_001725B0(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = 1;
    if (*(int *)(v0 + 0) == 2) {
        func_001798E8(D_00595A28);
        v1 = 0;
    }
    if (!((unsigned int)*(int *)(v0 + 36) < (unsigned int)3)) {
        func_001798E8(D_00595A58);
        v1 = 0;
    }
    return v1;
}
