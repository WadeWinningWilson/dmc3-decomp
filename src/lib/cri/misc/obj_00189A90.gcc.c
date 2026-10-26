// cc: ee-gcc2.96 -O2 -G0
int func_00189B00(p0) char *p0; {
    *(int *)(p0 + 76) = 3;
    return 0;
}

void func_0017C6A8();

void func_00180180();

int func_001803A0();

void func_0018F160();

int func_00189B10(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p0;
    v1 = p1;
    tmp0 = func_001803A0();
    v2 = 0xff000000;
    v3 = 0;
    if (tmp0 != 0) {
        func_00180180(v3, (v2 | 324));
        return;
    } else {
        func_0018F160(v0, v1);
        func_0017C6A8(v0, v1);
        return 0;
    }
}

void func_0018CF18();

int func_00189B80(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p0;
    tmp0 = func_001803A0();
    v1 = 0;
    v2 = p1;
    v3 = 0xff000145;
    if (tmp0 != 0) {
        func_00180180(v1, v3, v2);
        return;
    } else {
        func_0018CF18(v0, 30, v2);
        return 0;
    }
}
