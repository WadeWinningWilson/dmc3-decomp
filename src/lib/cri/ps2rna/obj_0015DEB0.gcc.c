// cc: ee-gcc2.96 -O2 -G0
extern char D_00532630[];

extern char D_00532638[];

void func_0015DF40(p0, p1, p2) int p0; char *p1; char *p2; {
    if (*(int *)D_00532638 == 1) {
        if (*(int *)D_00532630 > 0) {
            *(int *)(p1 + 0) = 0;
            *(int *)(p2 + 0) = 48000;
        }
    } else {
        *(int *)(p1 + 0) = 0;
        *(int *)(p2 + 0) = 48000;
    }
}
