// cc: ee-gcc2.96 -O2 -G8
int func_00148058();

int func_0017A040();

int func_0017A240();

int func_00179FD8(p0) int p0; {
    int v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    int tmp2;
    v0 = p0;
    v1 = 0;
    tmp0 = func_00148058();
    v2 = tmp0;
    if (v2 == 1) {
        tmp1 = func_0017A040();
        v3 = v0;
        if (tmp1 != v2) {
            tmp2 = func_0017A240(v3);
            v1 = tmp2;
        }
    }
    return v1;
}

extern char D_005975B0[];

int func_00175E88();

void func_001798E8();

int func_0017A4F0();

int func_0017A508(p0) int p0; {
    int v0;
    int v1;
    int tmp0;
    int tmp1;
    tmp0 = func_00175E88();
    v0 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_005975B0);
        v1 = 0;
    } else {
        tmp1 = func_0017A4F0(v0);
        v1 = (tmp1 != 1);
    }
    return v1;
}

char *func_00173FF8();

void func_0017A558(p0, p1) int p0; int p1; {
    char *tmp0;
    tmp0 = func_00173FF8();
    *(int *)((char *)p0 + 96) = p1;
    *(int *)(tmp0 + 36) = p1;
}
