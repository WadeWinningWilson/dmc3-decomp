int func_0013CEF0(p0, p1) char *p0; char *p1; {
    int tmp0;
    if (p1 == 0) {
        return 0;
    } else {
        tmp0 = *(int *)(p0 + 0);
        if (tmp0 != 0) {
            return 0;
        } else {
            *(char **)(p0 + 0) = p1;
            *(int *)(p0 + 4) = *(int *)(p1 + 8);
            *(int *)(p1 + 16) = (*(int *)(p1 + 16) + 1);
            *(int *)(p0 + 8) = *(int *)(p1 + 16);
            *(int *)(p1 + 24) = (*(int *)(p1 + 24) + 1);
            return 1;
        }
    }
}

int func_0013CF50(p0) char *p0; {
    char *v0;
    int tmp0;
    v0 = *(char **)(p0 + 0);
    if (v0 == 0) {
        return 0;
    } else {
        tmp0 = *(int *)(v0 + 16);
        if (*(int *)(p0 + 8) != tmp0) {
            return 0;
        } else {
            *(int *)(v0 + 24) = (*(int *)(v0 + 24) + -1);
            *(int *)(*(char **)(p0 + 0) + 16) = (*(int *)(*(char **)(p0 + 0) + 16) + -1);
            *(int *)(*(char **)(p0 + 0) + 8) = *(int *)(p0 + 4);
            *(int *)(p0 + 0) = 0;
            *(int *)(p0 + 4) = 0;
            *(int *)(p0 + 8) = 0;
            return 1;
        }
    }
}
