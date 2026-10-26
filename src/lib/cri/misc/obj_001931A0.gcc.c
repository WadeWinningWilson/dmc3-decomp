// cc: ee-gcc2.96 -O2 -G0
void func_001931A0(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 4) = p1;
}

int func_001931A8(p0) char *p0; {
    return *(int *)(p0 + 4);
}

void func_001931B0(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 8) = p1;
}

int func_001931B8(p0) char *p0; {
    return *(int *)(p0 + 8);
}
