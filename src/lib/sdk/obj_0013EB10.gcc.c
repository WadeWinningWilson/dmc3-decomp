// cc: ee-gcc2.96 -O2 -G0
extern char D_0058FAA8[];

void func_0013E1B8();

int func_0013EC08(p0) char *p0; {
    int v0;
    if (p0 == 0) {
        func_0013E1B8(D_0058FAA8);
        v0 = -1;
    } else {
        v0 = *(int *)(p0 + 4);
    }
    return v0;
}

extern char D_0058FAD0[];

int func_0013EC38(p0, p1, p2) char *p0; char *p1; char *p2; {
    int v0;
    if (p0 == 0) {
        func_0013E1B8(D_0058FAD0);
        return;
    } else {
        if (p1 != 0) {
            v0 = *(int *)(p0 + 28);
            *(int *)(p1 + 0) = v0;
        }
        if (p2 != 0) {
            v0 = *(int *)(p0 + 32);
            *(int *)(p2 + 0) = v0;
        }
        return v0;
    }
}

extern char D_0058FAF8[];

int func_0013EC80(p0, p1, p2) char *p0; char *p1; char *p2; {
    int v0;
    if (p0 == 0) {
        func_0013E1B8(D_0058FAF8);
        return;
    } else {
        if (p1 != 0) {
            v0 = *(int *)(p0 + 16);
            *(int *)(p1 + 0) = v0;
        }
        if (p2 != 0) {
            v0 = *(int *)(p0 + 20);
            *(int *)(p2 + 0) = v0;
        }
        return v0;
    }
}
