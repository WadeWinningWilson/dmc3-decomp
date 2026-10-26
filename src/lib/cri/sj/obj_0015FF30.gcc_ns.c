// cc: ee-gcc2.96 -O2 -G0 -fno-schedule-insns
extern char D_00594C78[];

extern char D_00594CA8[];

void func_0015E818();

int func_00160078(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    if (p0 == 0) {
        func_0015E818(D_00594C78);
        return;
    } else {
        v0 = *(signed char *)(p0 + 4);
        if (v0 == 0) {
            func_0015E818(D_00594CA8);
            return;
        } else {
            *(int *)(p0 + 44) = p2;
            *(int *)(p0 + 40) = p1;
            return v0;
        }
    }
}
