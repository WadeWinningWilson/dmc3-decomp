// cc: ee-gcc2.96 -O2 -G0
extern char D_0052C380[];

int func_0015A348() {
    return (int)D_0052C380;
}

extern char D_0052C270[];

int func_0015A358() {
    return *(int *)D_0052C270;
}

extern char D_0052C274[];

void func_0015A368(p0) int p0; {
    *(int *)D_0052C274 = p0;
}

int func_0015A378() {
    return *(int *)D_0052C274;
}

void func_00128488();

void func_0015A7B0();

void func_0015A4F0(p0) int p0; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        func_0015A7B0();
        *(char *)(v0 + 0) = 0;
        func_00128488(v0, 0, 568);
        return;
    } else {
        return;
    }
}

void func_0015A540(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 40) = p1;
}
