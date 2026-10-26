// cc: ee-gcc2.96 -O2 -G8
void func_0013E430();

void func_0013EFA8(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    v0 = *(char **)(p0 + 4);
    v1 = *(int *)(*(char **)(v0 + 4) + 192);
    v2 = v1;
    if (v1 != 0) {
        func_0013E430(v2, v1);
        return;
    } else {
        return;
    }
}
