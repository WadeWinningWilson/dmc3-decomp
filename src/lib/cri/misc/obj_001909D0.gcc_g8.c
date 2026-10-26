// cc: ee-gcc2.96 -O2 -G8
int func_0017E050();

void func_0018F980();

int func_0018F998();

int func_00190AC0();

int func_00190A40(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = (char *)p0;
    v1 = 1;
    v4 = func_0018F998(p0, 6);
    v2 = (int)v0;
    if (v4 != v1) {
        v4 = func_0017E050(v2, *(int *)(v0 + 8400));
        v3 = (int)v0;
        if (v4 == v1) {
            v4 = func_00190AC0(v3);
            v5 = (int)v0;
            if (v4 != 0) {
                func_0018F980(v5, 6, 1);
                return;
            } else {
                return v4;
            }
        } else {
            return v4;
        }
    } else {
        return v4;
    }
}
