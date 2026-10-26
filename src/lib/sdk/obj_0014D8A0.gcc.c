// cc: ee-gcc2.96 -O2 -G0
int func_0014D8A0(p0) char *p0; {
    return *(signed char *)(p0 + 73);
}

int func_0014D8A8(p0) char *p0; {
    return *(signed char *)(p0 + 1);
}

int func_0014D8B0(p0, p1) char *p0; int p1; {
    int v0;
    v0 = *(int *)(p0 + 20);
    *(int *)(p0 + 88) = p1;
    if ((v0 < p1)) {
        *(int *)(p0 + 88) = v0;
    }
    return *(int *)(p0 + 88);
}
