// cc: ee-gcc2.96 -O2 -G0
extern char D_005933C0[];

void func_00158910();

int func_001591C0(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_00158910(p0, D_005933C0);
        v1 = 0;
    } else {
        v1 = *(int *)(v0 + 28);
    }
    return v1;
}
