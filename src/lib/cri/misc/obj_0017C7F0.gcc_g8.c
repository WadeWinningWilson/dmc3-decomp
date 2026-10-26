// cc: ee-gcc2.96 -O2 -G8
int func_0017E050();

void func_0018F980();

int func_0018F998();

int func_0017C7F0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    v0 = (char *)p0;
    v1 = 1;
    v3 = func_0018F998(p0, 7);
    v2 = (int)v0;
    if (v3 != v1) {
        v3 = func_0017E050(v2, *(int *)(v0 + 8468));
        v4 = (int)v0;
        v5 = 7;
        v6 = 1;
        if (v3 == v1) {
            func_0018F980(v4, v5, v6);
            return;
        } else {
            return v3;
        }
    } else {
        return v3;
    }
}
