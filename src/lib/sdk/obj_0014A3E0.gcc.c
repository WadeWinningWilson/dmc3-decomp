// cc: ee-gcc2.96 -O2 -G0
extern char D_00525B48[];

int func_0014A490();

int func_0014A7C8() {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = D_00525B48;
    v3 = 15;
    v1 = 1;
    do {
        v2 = *(signed char *)(v0 + 0);
        if (v2 == v1) {
            v2 = func_0014A490(v0);
        }
        v3 = (v3 + -1);
        v0 = (v0 + 168);
    } while (v3 >= 0);
    return v2;
}

int func_0014A828(p0) char *p0; {
    return *(int *)(p0 + 48);
}

int func_0014A830(p0) char *p0; {
    return *(int *)(p0 + 44);
}

void func_00141E08();

void func_0014A838(p0) char *p0; {
    func_00141E08(*(int *)(p0 + 4));
}

void func_0014A850(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 52) = p1;
}

int func_0014A858(p0) char *p0; {
    return *(int *)(p0 + 52);
}

void func_0014A860(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 156) = p1;
}

int func_0014A868(p0) char *p0; {
    return *(int *)(p0 + 156);
}

void func_00141B20();

void func_0014A870(p0) char *p0; {
    func_00141B20(*(int *)(p0 + 4));
}
