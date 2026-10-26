// cc: ee-gcc2.96 -O2 -G0
extern char D_0058F8D8[];

void func_0013E1B8();

void func_0013E390();

void func_0013E430();

void func_0013E3D8(p0) int p0; {
    char *v0;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_0013E1B8(D_0058F8D8);
        return;
    } else {
        func_0013E430();
        func_0013E390(v0);
        *(int *)(v0 + 4) = 1;
        return;
    }
}

extern char D_0058F900[];

void func_0013E430(p0) char *p0; {
    if (p0 == 0) {
        func_0013E1B8(D_0058F900);
        return;
    } else {
        *(int *)(p0 + 4) = 0;
        return;
    }
}

extern char D_0058F928[];

void func_0013E460(p0) char *p0; {
    if (p0 == 0) {
        func_0013E1B8(D_0058F928);
        return;
    } else {
        *(int *)(p0 + 36) = 1;
        return;
    }
}
