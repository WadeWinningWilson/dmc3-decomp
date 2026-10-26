// cc: ee-gcc2.96 -O2 -G0
int func_00175DD0(p0) char *p0; {
    return *(int *)(p0 + 68);
}

int func_00175DD8(p0) char *p0; {
    return *(int *)(p0 + 476);
}

void func_00178B48();

void func_0017A770();

void func_00175DE0(p0, p1) int p0; int p1; {
    func_0017A770(*(int *)((char *)p0 + 68));
    func_00178B48(p0, p1);
}
