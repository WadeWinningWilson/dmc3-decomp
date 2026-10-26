// cc: ee-gcc2.96 -O2 -G0
void func_001648D8();

int func_0016A398();

void func_00164B80(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    char *v0;
    char *v1;
    char *v2;
    char *v3;
    int v4;
    int tmp0;
    v0 = (char *)(p0 + 352);
    v1 = (char *)p1;
    v2 = (char *)p2;
    v3 = (char *)p3;
    tmp0 = func_0016A398();
    v4 = 0xff03020f;
    if (tmp0 != 0) {
        func_001648D8(0, v4);
        return;
    } else {
        *(int *)(v1 + 0) = (*(int *)(v0 + 728) << 11);
        *(int *)(v2 + 0) = *(int *)(v0 + 228);
        *(int *)(v3 + 0) = -1;
        return;
    }
}

int func_00164C10(p0, p1, p2) int p0; int p1; int p2; {
    char *v0;
    char *v1;
    char *v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    v0 = (char *)(p0 + 352);
    v1 = (char *)p1;
    v2 = (char *)p2;
    tmp0 = func_0016A398();
    v3 = 0;
    v4 = 0xff03020e;
    if (tmp0 != 0) {
        func_001648D8(v3, v4);
        return;
    } else {
        tmp1 = *(int *)(v0 + 208);
        *(int *)(v1 + 0) = *(int *)(v0 + 208);
        *(int *)(v2 + 0) = *(int *)(v0 + 212);
        return tmp1;
    }
}

int func_00164D68(p0, p1, p2) int p0; char *p1; char *p2; {
    char *v0;
    int v1;
    v0 = (char *)(p0 + 328);
    if (p1 != 0) {
        v1 = *(int *)(v0 + 0);
        *(int *)(p1 + 0) = v1;
    }
    if (p2 != 0) {
        v1 = *(int *)(v0 + 8);
        *(int *)(p2 + 0) = v1;
    }
    return v1;
}

void func_00164E10();

int func_00164F78();

int func_00164D90(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    v0 = p0;
    tmp0 = func_0016A398();
    v1 = 0;
    v2 = p1;
    if (tmp0 != 0) {
        func_001648D8(v1, 0xff03020c);
        return;
    } else {
        tmp1 = func_00164F78(v0, v2);
        v3 = tmp1;
        v4 = v0;
        if (v3 == 0) {
            func_00164E10(v4);
        }
        return v3;
    }
}
