// cc: ee-gcc2.96 -O2 -G0
extern char D_00529B74[];

void func_00155248(p0) int p0; {
    *(char *)D_00529B74 = p0;
}

extern char D_00529B70[];

void func_00155258(p0) int p0; {
    *(int *)D_00529B70 = p0;
}

int func_00155268() {
    return *(unsigned char *)D_00529B74;
}

int func_00155278() {
    return *(int *)D_00529B70;
}
