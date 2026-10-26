// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
extern char D_005946A8[];

extern char D_005946D8[];

void func_0015E818();

int func_0015EBC8(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    if (p0 == 0) {
        func_0015E818(D_005946A8);
        return;
    } else {
        v0 = *(int *)(p0 + 4);
        if (v0 == 0) {
            func_0015E818(D_005946D8);
            return;
        } else {
            *(int *)(p0 + 32) = p2;
            *(int *)(p0 + 28) = p1;
            return v0;
        }
    }
}
