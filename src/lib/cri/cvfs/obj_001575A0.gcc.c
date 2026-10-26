// cc: ee-gcc2.96 -O2 -G0
extern char D_00592EB8[];

void func_00156EF0();

int func_001575A0(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_00156EF0(p0, D_00592EB8);
        v1 = 0;
    } else {
        v1 = *(int *)(v0 + 12);
    }
    return v1;
}
