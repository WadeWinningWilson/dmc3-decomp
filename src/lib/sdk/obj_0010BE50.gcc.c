// cc: ee-gcc2.96 -O2 -G0
void func_0010BEA0(p0) char *p0; {
    *(int *)(*(char **)(p0 + 64) + 4256) = 1;
}

int func_0010BEC8(p0, p1, p2, p3) char *p0; char *p1; char *p2; char *p3; {
    char *tmp0;
    int tmp3;
    tmp0 = *(char **)(p0 + 64);
    *(int *)(p1 + 0) = *(int *)(*(char **)(p0 + 64) + 172);
    *(int *)(p2 + 0) = *(int *)(tmp0 + 176);
    tmp3 = *(int *)(tmp0 + 180);
    *(int *)(p3 + 0) = *(int *)(tmp0 + 180);
    return tmp3;
}

int func_0010BEE8(p0) char *p0; {
    return *(int *)(*(char **)(p0 + 64) + 0);
}

int func_0010BEF8(p0) char *p0; {
    return (*(int *)(*(char **)(p0 + 64) + 4) == 0);
}

int func_0010BF68(p0) char *p0; {
    char *v0;
    char *v1;
    char *v2;
    char *v3;
    char *v4;
    char *v5;
    char *v6;
    v0 = *(char **)(p0 + 64);
    v1 = *(char **)(v0 + 464);
    if (v1 != 0) {
        *(int *)(v1 + 40) = 0;
    }
    v3 = *(char **)(v0 + 480);
    if (v3 != 0) {
        *(int *)(v3 + 40) = 0;
    }
    v4 = *(char **)(v0 + 496);
    if (v4 != 0) {
        *(int *)(v4 + 40) = 0;
    }
    v5 = *(char **)(v0 + 468);
    if (v5 != 0) {
        *(int *)(v5 + 40) = 0;
    }
    v6 = *(char **)(v0 + 484);
    if (v6 != 0) {
        *(int *)(v6 + 40) = 0;
    }
    v2 = *(char **)(v0 + 500);
    if (v2 != 0) {
        *(int *)(v2 + 40) = 0;
    }
    return 1;
}
