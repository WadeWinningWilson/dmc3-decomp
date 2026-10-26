// cc: ee-gcc2.96 -O2 -G8
int func_00173A78();

int func_00176DD8();

void func_001931A0();

void func_00178340(p0) int p0; {
    char *v0;
    int v1;
    int tmp0;
    int tmp1;
    int tmp2;
    v0 = (char *)p0;
    if (*(int *)(v0 + 80) == 0) {
        tmp0 = func_00173A78();
        v1 = tmp0;
        tmp1 = -1;
        if (v1 != tmp1) {
            *(int *)(v0 + 84) = v1;
        } else {
            *(int *)(v0 + 84) = 17;
        }
    }
    tmp2 = func_00176DD8(v0);
    func_001931A0(tmp2, *(int *)(v0 + 84));
}

extern char D_00597058[];

int func_00175E88();

void func_001798E8();

void func_00193450();

void func_001783A8(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int tmp0;
    int tmp1;
    v0 = p1;
    tmp0 = func_00175E88();
    v1 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_00597058);
        return;
    } else {
        tmp1 = func_00176DD8(v1);
        func_00193450(tmp1, v0);
        return;
    }
}
