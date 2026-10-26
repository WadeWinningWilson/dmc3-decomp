// cc: ee-gcc2.96 -O2 -G0
void func_001827C8();

void func_001765B8(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = p1;
    v2 = 4;
    v3 = 0;
    if (v0 != 0) {
        v3 = *(int *)(v0 + 64);
    }
    if (v1 == 1) {
        func_001827C8(v3, v2, 1);
        return;
    } else {
        func_001827C8(v3, 4, 0);
        return;
    }
}

void func_0018CF18();

void func_00176600(p0, p1) char *p0; int p1; {
    int v0;
    v0 = *(int *)(p0 + 64);
    if (p1 == 1) {
        func_0018CF18(v0, 39, 1);
        return;
    } else {
        func_0018CF18(v0, 39, 0);
        return;
    }
}
