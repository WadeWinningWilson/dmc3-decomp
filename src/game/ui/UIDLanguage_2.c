extern char D_00569944[];

extern char D_005BE098;

extern char D_00666712[];

int func_00195E20();

void func_003DE200();

int func_003DE720();

int func_003DE120(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    if (v0 != 3) {
        tmp0 = 2;
        if (v0 != tmp0) {
            switch (v0) {
            case 0:
                func_003DE200(p0, v0);
                /* fall through */
            case 1:
                v2 = func_003DE720(v1);
                break;
            }
        } else {
            if (*(unsigned char *)(v1 + 15617) == 1) {
                *(char *)D_00666712 = *(int *)((D_00569944 + (*(signed char *)(v1 + 15618) << 3)) + 0);
            } else {
                *(char *)D_00666712 = *(signed char *)(v1 + 15620);
            }
            *(char *)(v1 + 15618) = 3;
            *(char *)(v1 + 15619) = *(signed char *)(v1 + 15618);
            *(char *)(v1 + 4) = 3;
        }
    }
    if (*(unsigned char *)(v1 + 15616) == 1) {
        v2 = func_00195E20(&D_005BE098, v1);
    }
    return v2;
}

extern char D_00569940[];

int func_003DE6D0(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    v1 = 0;
    v0 = D_00569940;
    do {
        if (p1 == *(int *)(v0 + 4)) {
            return v1;
        }
        v1 = (v1 + 1);
        v0 = (v0 + 8);
    } while ((v1 < 3));
    v1 = 0;
    return v1;
}
