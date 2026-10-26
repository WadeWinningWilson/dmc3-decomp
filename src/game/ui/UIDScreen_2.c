extern char D_005BE098;

int func_00195E20();

void func_003B7C40();

int func_003B7FC0();

int func_003B7BB0(p0) char *p0; {
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
                func_003B7C40(p0, v0);
                /* fall through */
            case 1:
                v2 = func_003B7FC0(v1);
                break;
            }
        } else {
            *(char *)(v1 + 3330) = *(signed char *)(v1 + 3329);
        }
    }
    if (*(unsigned char *)(v1 + 3328) == 1) {
        v2 = func_00195E20(&D_005BE098, v1);
    }
    return v2;
}
