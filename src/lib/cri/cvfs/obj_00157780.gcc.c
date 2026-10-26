// cc: ee-gcc2.96 -O2 -G0
extern char D_00592EB8[];

void func_00156EF0();

int func_00157868(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_00156EF0(p0, D_00592EB8);
        v1 = 0;
    } else {
        v1 = *(signed char *)(v0 + 2);
    }
    return v1;
}

int func_001578A0() {
    return 2048;
}

int func_001578A8(p0) int p0; {
    int v1;
    char *v0;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_00156EF0(p0, D_00592EB8);
        v1 = 0;
    } else {
        v1 = (*(signed char *)(v0 + 2) != 1) ? 0 : (*(int *)(v0 + 20) << 11);
    }
    return v1;
}

extern char D_0052BCB8[];

void func_001578F8(p0) int p0; {
    *(int *)D_0052BCB8 = p0;
}

int func_00157908() {
    return *(int *)D_0052BCB8;
}

extern char D_0052AFBC[];

void func_00157918(p0) int p0; {
    char *v0;
    v0 = D_0052AFBC;
    *(int *)(v0 + 0) = p0;
    if (!((unsigned int)p0 < (unsigned int)2)) {
        *(int *)(v0 + 0) = 0;
    }
}

int func_00157938() {
    return *(int *)D_0052AFBC;
}

int func_00157A10() {
    return 0;
}

void func_00157948();

void func_00157A18() {
    func_00157948();
}
