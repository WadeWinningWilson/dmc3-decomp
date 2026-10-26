// cc: ee-gcc2.96 -O2 -G0
void func_00161D98();

void func_00148F38() {
    func_00161D98(7);
}

extern char D_00525B30[];

int func_00148FD8() {
    return *(int *)D_00525B30;
}

void func_0015C750();

void func_00149190() {
    func_0015C750();
}

int func_00160F98();

int func_00149228(p0, p1) char *p0; int p1; {
    int tmp3;
    tmp3 = func_00160F98(*(int *)(*(char **)((*(char **)(p0 + 12) + (p1 << 2)) + 8) + 4), 1);
    return ((unsigned int)tmp3 >> 1);
}
