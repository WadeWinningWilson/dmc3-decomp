// cc: ee-gcc2.96 -O2 -G0
extern char D_00532630[];

extern char D_00532638[];

extern char D_00532660[];

int func_00156D58();

void func_0015D4A0() {
    char *v0;
    int v1;
    if (*(int *)D_00532638 == 1) {
        if (*(int *)D_00532630 > 0) {
            v0 = D_00532660;
            if (*(int *)(v0 + 0) != 1) {
                v1 = func_00156D58(14, 0, 0, 0, 0);
                *(int *)(v0 + 0) = 1;
            }
        }
    } else {
        v0 = D_00532660;
        if (*(int *)(v0 + 0) != 1) {
            v1 = func_00156D58(14, 0, 0, 0, 0);
            *(int *)(v0 + 0) = 1;
        }
    }
}

void func_0015D510() {
    char *v0;
    int v1;
    if (*(int *)D_00532638 == 1) {
        if (*(int *)D_00532630 > 0) {
            v0 = D_00532660;
            if (*(int *)(v0 + 0) != 0) {
                v1 = func_00156D58(15, 0, 0, 0, 0);
                *(int *)(v0 + 0) = 0;
            }
        }
    } else {
        v0 = D_00532660;
        if (*(int *)(v0 + 0) != 0) {
            v1 = func_00156D58(15, 0, 0, 0, 0);
            *(int *)(v0 + 0) = 0;
        }
    }
}

extern char D_00532678[];

void func_0015D5C8(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    if (*(int *)D_00532638 == 1) {
        if (*(int *)D_00532630 > 0) {
            if (*(int *)D_00532678 == 2) {
                v1 = *(signed char *)(v0 + 86);
                if (v1 != p1) {
                    *(char *)(v0 + 86) = p1;
                }
            }
        }
    } else {
        if (*(int *)D_00532678 == 2) {
            v1 = *(signed char *)(v0 + 86);
            if (v1 != p1) {
                *(char *)(v0 + 86) = p1;
            }
        }
    }
}

int func_0015D618(p0) char *p0; {
    return *(signed char *)(p0 + 87);
}
