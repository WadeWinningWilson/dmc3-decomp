// cc: ee-gcc2.96 -O2 -G0
int func_00175EA0(p0) char *p0; {
    return *(int *)(p0 + 76);
}

int func_00175EA8(p0) char *p0; {
    return *(int *)(p0 + 72);
}

int func_00175EB0(p0) char *p0; {
    return *(int *)(p0 + 172);
}

void func_0018CF18();

void func_00175FB0(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = *(int *)(v0 + 64);
    if (p1 == 0) {
        func_0018CF18(v1, 15, 0);
        return;
    } else {
        if (*(int *)(v0 + 12) == 1) {
            func_0018CF18(v1, 15, 2);
            return;
        } else {
            func_0018CF18(v1, 15, 1);
            return;
        }
    }
}
