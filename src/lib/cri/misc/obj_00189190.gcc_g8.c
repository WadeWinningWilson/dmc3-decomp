// cc: ee-gcc2.96 -O2 -G8
int func_00188CA8();

void func_00188FF8();

int func_00189268(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    char *v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p2;
    v1 = (char *)p0;
    tmp0 = func_00188CA8();
    v2 = p1;
    v3 = v0;
    if (tmp0 == 0) {
        return v0;
    } else {
        func_00188FF8((*(int *)(v1 + 8120) + 4376), v2, v3);
        return;
    }
}

void func_00188558();

int func_001892D8(p0, p1) int p0; int p1; {
    int v0;
    char *v1;
    int v2;
    int tmp0;
    v0 = p1;
    v1 = (char *)p0;
    tmp0 = func_00188CA8();
    v2 = v0;
    if (tmp0 == 0) {
        return v0;
    } else {
        func_00188558((*(int *)(v1 + 8120) + 4376), v2);
        return;
    }
}
