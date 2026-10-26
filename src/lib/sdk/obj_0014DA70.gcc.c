// cc: ee-gcc2.96 -O2 -G0
extern char D_00528778[];

int func_0014DA88() {
    int tmp0;
    tmp0 = (*(int *)(D_00528778 + 0) + 1);
    *(int *)(D_00528778 + 0) = (*(int *)(D_00528778 + 0) + 1);
    return tmp0;
}

int func_0014E128(p0, p1, p2) char *p0; char *p1; char *p2; {
    *(int *)(p1 + 0) = *(int *)(p0 + 28);
    *(int *)(p2 + 0) = *(int *)(p0 + 24);
    return 1;
}

int func_0014E140(p0) char *p0; {
    return *(int *)(p0 + 4);
}

int func_0014E158(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 44) = p1;
    return 1;
}

void func_0014E168() {
}

int func_0014E170(p0) char *p0; {
    return *(int *)(p0 + 16);
}

int func_0014E178(p0) char *p0; {
    return *(int *)(p0 + 20);
}

void func_0014E180(p0, p1) char *p0; int p1; {
    *(char *)(p0 + 68) = p1;
}

int func_0014E188(p0) char *p0; {
    return *(signed char *)(p0 + 68);
}

int func_001537B8();

void func_0014E190(p0, p1) char *p0; int p1; {
    int tmp1;
    tmp1 = func_001537B8(*(int *)(p0 + 8));
    *(int *)((char *)p1 + 0) = tmp1;
}
