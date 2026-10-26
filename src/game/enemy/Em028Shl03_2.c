extern char D_005B2850[];

extern char D_005B2874[];

extern char D_005B28F4[];

int func_00252FA0();

int func_0028C110();

int func_00407070(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B2850;
    *(char **)((char *)p0 + 64) = D_005B2874;
    *(char **)((char *)p0 + 160) = D_005B28F4;
    func_0028C110((p0 + 336));
    *(int *)((char *)p0 + 1040) = 0;
    *(int *)((char *)p0 + 1044) = 0;
    *(char *)((char *)p0 + 1048) = 0;
    *(int *)((char *)p0 + 1052) = 0;
    return p0;
}

int func_001AD140();

int func_00207480();

int func_004073E0();

int func_00407150(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_00207480(2, 166, (v0 + 976), 16);
    *(int *)(v0 + 1044) = tmp0;
    v1 = (int)v0;
    if (*(int *)(v0 + 1044) == 0) {
        v2 = func_001AD140(v1);
    } else {
        v2 = func_004073E0(v0);
        *(char *)(v0 + 1048) = 0;
        *(int *)(v0 + 1052) = 0;
    }
    return v2;
}

extern void func_00407340();

void func_00407550(char *p) { func_00407340(p + -64); }
