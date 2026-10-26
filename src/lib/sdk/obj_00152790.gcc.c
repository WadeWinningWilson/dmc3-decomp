// cc: ee-gcc2.96 -O2 -G0
extern char D_00529728[];

int func_00152698();

int func_00152790() {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = D_00529728;
    v3 = 15;
    v1 = 1;
    do {
        v2 = *(int *)(v0 + 0);
        if (v2 == v1) {
            v2 = func_00152698(v0);
        }
        v3 = (v3 + -1);
        v0 = (v0 + 60);
    } while (v3 >= 0);
    return v2;
}

extern char D_006315CC[];

extern char D_006315D0[];

void func_00152870() {
    *(int *)D_006315CC = 0;
    *(int *)D_006315D0 = 0;
}

extern char D_00529AF0[];

void func_00152A38();

void func_00152A68(p0) int p0; {
    func_00152A38(D_00529AF0, p0, 0);
}
