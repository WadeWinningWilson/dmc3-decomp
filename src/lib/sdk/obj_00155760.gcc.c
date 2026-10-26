// cc: ee-gcc2.96 -O2 -G0
extern char D_00529AFA[];

void func_001558A8() {
    *(char *)D_00529AFA = 9;
}

extern char D_00529B68[];

extern char D_00592998[];

void func_0010F9C0();

void func_00155B08(p0) int p0; {
    int v0;
    *(int *)D_00529B68 = p0;
    if (p0 == 1) {
        func_0010F9C0(D_00592998);
        return;
    } else {
        return;
    }
}

int func_00155B48() {
    return *(int *)D_00529B68;
}
