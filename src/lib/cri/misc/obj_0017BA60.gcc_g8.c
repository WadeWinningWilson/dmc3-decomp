// cc: ee-gcc2.96 -O2 -G8
void func_0014FCE8();

int func_0018D208();

void func_0017BA60(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    v0 = *(char **)(p0 + 8188);
    tmp0 = *(int *)(v0 + 0);
    tmp1 = func_0018D208(p0, 27);
    v1 = tmp1;
    v2 = *(int *)(v0 + 68);
    v3 = v1;
    v4 = tmp0;
    if (v2 != v1) {
        *(int *)(v0 + 68) = v1;
        func_0014FCE8(v4, v3);
        return;
    } else {
        return;
    }
}
