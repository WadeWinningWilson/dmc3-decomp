// cc: ee-gcc2.96 -O2 -G0
int func_0017D858(p0, p1) char *p0; int p1; {
    p0 = (p0 + (p1 * 116));
    return *(int *)(p0 + 4900);
}

int func_0017D878(p0, p1) char *p0; int p1; {
    p0 = (p0 + (p1 * 116));
    return *(int *)(p0 + 4924);
}

void func_0017D998(p0, p1, p2) int p0; int p1; int p2; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)((p0 + (p1 * 116)) + 4888);
    v1 = *(int *)(v0 + 36);
    v2 = (v1 + p2);
    if (v1 >= 0) {
        *(int *)(v0 + 36) = v2;
    }
}
