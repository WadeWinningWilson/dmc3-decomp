// cc: ee-gcc2.96 -O2 -G8
int func_00152668();

void func_00141DB8(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = *(int *)(v0 + 4);
    if (v1 == 3) {
        v1 = func_00152668(*(int *)(v0 + 8));
        *(int *)(v0 + 140) = 0;
        *(int *)(v0 + 4) = 0;
    }
}
