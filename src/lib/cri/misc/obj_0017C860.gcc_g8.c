// cc: ee-gcc2.96 -O2 -G8
void func_0017C8A0();

int func_0018D208();

int func_0017C860(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v3 = func_0018D208(p0, 6);
    v1 = (int)(v0 + 13780);
    v2 = v1;
    if (v3 != 0) {
        *(int *)(v0 + 8460) = v1;
        func_0017C8A0(v2);
        v3 = 0;
    }
    return v3;
}
