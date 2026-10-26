// cc: ee-gcc2.96 -O2 -G0
void func_00128488();

void func_0018FAB0(p0) int p0; {
    int tmp0;
    func_00128488((p0 + 24), 0, 240);
    tmp0 = *(int *)((char *)p0 + 412);
    *(int *)((char *)p0 + 20) = 0;
    *(int *)((char *)p0 + 412) = (tmp0 + 1);
}

void func_0018FAF0(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 0) = p1;
}

void func_0018FAF8(p0, p1) char *p0; char *p1; {
    *(long *)(p0 + 312) = *(long *)(p1 + 0);
    *(long *)(p0 + 320) = *(long *)(p1 + 8);
}
