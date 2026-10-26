// cc: ee-gcc2.96 -O2 -G0
void func_00173E80();

void func_00173910() {
    func_00173E80();
}

int func_00173F00();

int func_00173A78() {
    int v0;
    int v1;
    int tmp0;
    tmp0 = func_00173F00();
    v1 = tmp0;
    v0 = 97;
    if (v1 != 81) {
        if (v1 == v0) {
            v1 = 65;
        }
    } else {
        v1 = 65;
    }
    return v1;
}

void func_001774E0();

void func_00173B90(p0) int p0; {
    char *v5;
    int v6;
    int v4;
    int v2;
    int v1;
    char *v0;
    int v7;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    v1 = 17;
    *(int *)(v0 + 184) = 0;
    v2 = (int)(v0 + 8);
    *(int *)(v0 + 188) = 0;
    v3 = (int)(v0 + 12);
    *(int *)(v0 + 192) = 0;
    v4 = (int)(v0 + 16);
    v5 = (v0 + 212);
    v6 = 0;
    v7 = 7;
    do {
        tmp0 = (v6 + 192);
        v6 = (v6 + 20);
        v7 = (v7 + -1);
        *(int *)(v5 + -16) = 0;
        *(int *)((char *)(v2 + tmp0) + 0) = 0;
        *(int *)((char *)(v3 + tmp0) + 0) = 0;
        *(int *)((char *)(v4 + tmp0) + 0) = 0;
        *(int *)(v5 + 0) = v1;
        v5 = (v5 + 20);
    } while (v7 >= 0);
    func_001774E0(v0, 0, v0, v7, v6, v4, v3, v2);
}

void func_00173C60();

void func_0018CF18();

void func_00173C10(p0) int p0; {
    int tmp1;
    tmp1 = *(int *)((char *)p0 + 64);
    func_0018CF18(*(int *)((char *)p0 + 64), 75, (char *)func_00173C60);
    func_0018CF18(tmp1, 76, p0);
}
