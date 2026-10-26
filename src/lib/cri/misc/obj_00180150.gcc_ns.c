// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
extern char D_0053EFEC[];

void func_001801F0();

int func_00180180(p0, p1) int p0; int p1; {
    int v0;
    char *v1;
    int v2;
    int v3;
    v3 = 0;
    v0 = p1;
    v1 = (char *)p0;
    if (v0 != 0) {
        if (v1 == 0) {
            func_001801F0(D_0053EFEC);
            v3 = v0;
        } else {
            func_001801F0((v1 + 2544));
            v2 = -*(int *)(v1 + 72);
            if (*(int *)(v1 + 72) > 0) {
                *(int *)(v1 + 72) = v2;
            }
            v3 = v0;
        }
    }
    return v3;
}
