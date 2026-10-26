// cc: ee-gcc2.96 -O2 -G8
void func_0014A860();

void func_00150690(p0, p1) char *p0; int p1; {
    int v0;
    int v1;
    *(char *)(p0 + 152) = p1;
    v0 = *(int *)(p0 + 4);
    v1 = v0;
    if (v0 != 0) {
        func_0014A860(v1);
        return;
    } else {
        return;
    }
}

extern char D_00591760[];

void func_001446F0();

void func_0014A830();

int func_001506E8(p0) char *p0; {
    if (p0 == 0) {
        func_001446F0(D_00591760);
        return -1;
    } else {
        func_0014A830(*(int *)(p0 + 4));
        return;
    }
}

extern char D_00591790[];

void func_0014A828();

int func_00150720(p0) char *p0; {
    if (p0 == 0) {
        func_001446F0(D_00591790);
        return -1;
    } else {
        func_0014A828(*(int *)(p0 + 4));
        return;
    }
}

void func_0014A838();

void func_00150758(p0) char *p0; {
    if (p0 == 0) {
        func_001446F0(D_00591790);
        return;
    } else {
        func_0014A838(*(int *)(p0 + 4));
        return;
    }
}

extern char D_005917C0[];

void func_0014A870();

void func_00150AC0(p0) char *p0; {
    if (p0 == 0) {
        func_001446F0(D_005917C0);
        return;
    } else {
        func_0014A870(*(int *)(p0 + 4));
        return;
    }
}
