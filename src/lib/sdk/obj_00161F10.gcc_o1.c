// cc: ee-gcc2.96 -O1 -G0
extern char D_0053B870[];

int func_00162078(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)(p0 << 2);
    p0 = ((unsigned int)p0 < (unsigned int)7);
    v0 = (D_0053B870 + (int)v0);
    v1 = 0;
    if (p0 != 0) {
        v1 = *(int *)(v0 + 0);
    }
    return v1;
}
