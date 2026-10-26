// cc: ee-gcc2.96 -O2 -G8
extern char D_00596730[];

int func_00175E88();

void func_001798E8();

void func_0018CF18();

void func_00176008(p0, p1) int p0; int p1; {
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    v0 = p1;
    v1 = (char *)p0;
    tmp0 = func_00175E88();
    if (tmp0 == 0) {
        func_001798E8(D_00596730);
        return;
    } else {
        v3 = *(int *)(v1 + 64);
        if (v0 == 0) {
            func_0018CF18(v3, 15, 0);
            return;
        } else {
            if (v0 == 1) {
                func_0018CF18(v3, 15, 1);
                return;
            } else {
                tmp1 = 2;
                if (v0 == tmp1) {
                    v4 = v3;
                    if (*(int *)(v1 + 12) == 1) {
                        func_0018CF18(v4, 15, 2);
                        return;
                    } else {
                        func_0018CF18(v4, 15, 1);
                        return;
                    }
                } else {
                    if (v0 != 3) {
                        return;
                    } else {
                        func_0018CF18(v3, 15, 5);
                        func_0018CF18(v3, 71, 1);
                        return;
                    }
                }
            }
        }
    }
}
