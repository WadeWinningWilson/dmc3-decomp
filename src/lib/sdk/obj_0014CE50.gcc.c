// cc: ee-gcc2.96 -O2 -G0
void func_0014CE50(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 100) = p1;
}

void func_0014CE58(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 108) = p1;
}

void func_0014CE60(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 104) = p1;
}

void func_0014CE68(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 112) = p1;
}

void func_0014CE70(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 116) = p1;
}

void func_0014CE78(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 120) = p1;
}

void func_0014CE80(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 124) = p1;
}

int func_0014CE88(p0, p1) char *p0; int p1; {
    int v0;
    int v1;
    int tmp0;
    v0 = *(signed char *)(p0 + 726);
    v1 = 1;
    if (v0 != v1) {
        tmp0 = *(int *)(p0 + 72);
        *(char *)(p0 + 726) = v1;
        v0 = (tmp0 + 36);
        *(int *)(p0 + 72) = v0;
    }
    *(short *)(p0 + 744) = p1;
    return v0;
}

int func_0014CEB0(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    int v1;
    char *v2;
    int tmp0;
    v0 = *(signed char *)(p0 + 726);
    v1 = 1;
    v2 = (char *)((p1 << 1) + (int)p0);
    if (v0 != v1) {
        tmp0 = *(int *)(p0 + 72);
        *(char *)(p0 + 726) = v1;
        v0 = (tmp0 + 36);
        *(int *)(p0 + 72) = v0;
    }
    *(short *)(v2 + 746) = p2;
    return v0;
}
