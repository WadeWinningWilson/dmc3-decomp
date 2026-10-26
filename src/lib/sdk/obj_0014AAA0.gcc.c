// cc: ee-gcc2.96 -O2 -G0
int func_0014AC00(p0) char *p0; {
    return *(int *)(p0 + 152);
}

int func_0014AC20(p0) int p0; {
    return (p0 + 88);
}

void func_00141AA0();

void func_0014AC28(p0) char *p0; {
    func_00141AA0(*(int *)(p0 + 4));
}

int func_0014AC58() {
    return 0;
}

extern char D_005265CC[];

extern char D_005265D0[];

int func_0014AC60(p0, p1) int p0; int p1; {
    *(int *)D_005265CC = p0;
    *(int *)D_005265D0 = p1;
    return 0;
}
