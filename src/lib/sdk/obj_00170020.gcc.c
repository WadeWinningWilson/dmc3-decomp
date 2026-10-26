// cc: ee-gcc2.96 -O2 -G0
void func_00170020() {
}

extern char D_00634280[];

int func_00170028(p0) int p0; {
    if (*(int *)D_00634280 != 0) {
        p0 = (p0 | 0x2000000);
    }
    return p0;
}

extern char D_00634284[];

int func_00170048(p0) int p0; {
    if (*(int *)D_00634284 != 0) {
        p0 = (p0 | 0x2000000);
    }
    return p0;
}

extern char D_00634240[];

int func_00170140() {
    int v0;
    char *v1;
    int v2;
    char *v3;
    v1 = D_00634240;
    v0 = *(int *)(v1 + 84);
    v3 = *(char **)(v1 + 88);
    if (v0 > 0) {
        v1 = (char *)v0;
        v2 = 1;
        do {
            v1 = (v1 + -1);
            *(int *)(v3 + 392) = v2;
            v3 = (v3 + 1024);
        } while (v1 != 0);
    }
    return (int)v1;
}
