// cc: ee-gcc2.96 -O2 -G0
int func_0018C428(p0, p1, p2) char *p0; int p1; int p2; {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 13864);
    if (v0 != 0) {
        if (*(int *)(v0 + 3512) < 0) {
            *(int *)(v0 + 3512) = p1;
        }
        v1 = *(int *)(v0 + 3516);
        if (v1 < 0) {
            *(int *)(v0 + 3516) = p2;
        }
    }
    return v1;
}

void func_0018C4A0();

void func_0018CD00();

void func_0018C458(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = *(int *)(v0 + 13864);
    if (v1 == 0) {
        return;
    } else {
        func_0018C4A0();
        func_0018CD00(v0);
        return;
    }
}
