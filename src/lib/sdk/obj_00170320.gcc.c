// cc: ee-gcc2.96 -O2 -G0
int func_001704B8(p0, p1, p2) char *p0; char *p1; char *p2; {
    int tmp0;
    p0 = (p0 + 120);
    tmp0 = *(int *)(p0 + 24);
    *(int *)(p1 + 0) = *(int *)(p0 + 24);
    *(int *)(p2 + 0) = *(int *)(p0 + 28);
    return tmp0;
}

void func_00170538() {
}

void func_00170540() {
}

void func_00170548() {
}

extern char D_00634240[];

int func_00170618(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    char *v3;
    char *v4;
    v3 = D_00634240;
    v2 = *(int *)(v3 + 84);
    v4 = *(char **)(v3 + 88);
    if (v2 > 0) {
        v0 = 2;
        v1 = ((p0 << 2) + 400);
        do {
            v3 = *(char **)(v4 + 392);
            v2 = (v2 + -1);
            if ((int)v3 == v0) {
                v3 = (v4 + v1);
                *(int *)(v3 + 0) = p1;
            }
            v4 = (v4 + 1024);
        } while (v2 != 0);
    }
    return (int)v3;
}
