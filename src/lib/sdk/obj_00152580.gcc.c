// cc: ee-gcc2.96 -O2 -G0
void func_00152580(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 8) = p1;
}

int func_00152588(p0) char *p0; {
    return *(int *)(p0 + 12);
}

void func_00152620(p0) char *p0; {
    int tmp0;
    tmp0 = *(int *)(p0 + 12);
    if (tmp0 == 0) {
        *(int *)(p0 + 16) = 0;
        *(int *)(p0 + 12) = 1;
    }
}
