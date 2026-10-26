// cc: ee-gcc2.96 -O2 -G8
int func_0017E010();

int func_00181B78();

void func_00181BE8();

int func_00181C48();

void func_00181AF0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int tmp1;
    v0 = (char *)p0;
    v4 = func_00181B78();
    v1 = (int)v0;
    if (v4 != 1) {
        tmp1 = *(int *)(v0 + 8060);
        v4 = func_0017E010(v1, *(int *)(v0 + 8060));
        v2 = (int)v0;
        v3 = tmp1;
        if (v4 == 1) {
            v4 = func_00181C48(v2, v3);
            v5 = (int)v0;
            if (v4 != 0) {
                func_00181BE8(v5, 1);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
