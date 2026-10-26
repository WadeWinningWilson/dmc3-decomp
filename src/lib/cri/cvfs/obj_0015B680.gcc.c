// cc: ee-gcc2.96 -O2 -G0
extern char D_00593918[];

void func_0015B320();

int func_0015B788(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_0015B320(p0, D_00593918);
        v1 = 0;
    } else {
        v1 = *(int *)(v0 + 16);
    }
    return v1;
}

extern char D_005939A0[];

void func_0015B2D8();

void func_0015B2F0();

void func_0015B948(p0) int p0; {
    char *v0;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_0015B320(p0, D_005939A0);
        return;
    } else {
        func_0015B2D8();
        *(char *)(v0 + 1) = 0;
        func_0015B2F0();
        return;
    }
}

int func_0015B998(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_0015B320(p0, D_005939A0);
        v1 = 0;
    } else {
        v1 = *(signed char *)(v0 + 1);
    }
    return v1;
}

extern char D_005939B8[];

int func_0015B9D0(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_0015B320(p0, D_005939B8);
        v1 = 0;
    } else {
        v1 = *(int *)(v0 + 4);
    }
    return v1;
}

int func_0015BA88(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_0015B320(p0, D_005939A0);
        v1 = 0;
    } else {
        v1 = *(int *)(v0 + 20);
    }
    return v1;
}
