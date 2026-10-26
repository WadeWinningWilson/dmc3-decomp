// cc: ee-gcc2.96 -O2 -G0
void func_00193348();

void func_00177CE8(p0) char *p0; {
    func_00193348(*(int *)(p0 + 172));
}

void func_00193360();

void func_00177D00(p0) char *p0; {
    func_00193360(*(int *)(p0 + 172));
}

int func_00177D18(p0, p1, p2) char *p0; char *p1; char *p2; {
    int tmp0;
    int tmp1;
    p0 = (p0 + 424);
    tmp0 = *(int *)(p0 + 8);
    tmp1 = *(int *)(p0 + 4);
    *(int *)(p2 + 0) = *(int *)(p0 + 8);
    *(int *)(p1 + 0) = tmp1;
    return tmp0;
}
