// cc: ee-gcc2.96 -O2 -G0
int func_00173E68(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 * 20) + p0) + 204);
}

int func_00173EE8(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 * 20) + p0) + 208);
}

int func_00173F68(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 * 20) + p0) + 212);
}

int func_00173F80(p0) char *p0; {
    return *(int *)(p0 + 188);
}

extern char D_00595DA8[];

int func_00175970();

int func_00175E88();

void func_001798E8();

void func_00187DC8();

int func_00173F88(p0) int p0; {
    int v0;
    int tmp0;
    int tmp1;
    tmp0 = func_00175E88();
    v0 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_00595DA8);
        return 0;
    } else {
        tmp1 = func_00175970(v0);
        func_00187DC8(tmp1);
        return;
    }
}

extern char D_00595DE0[];

int func_00173FE8() {
    return (int)D_00595DE0;
}

extern char D_0053D7D0[];

int func_00173FF8() {
    return (int)D_0053D7D0;
}

void func_00174008(p0, p1) int p0; int p1; {
    func_001798E8(p1);
}

void func_00179668();

void func_001796C8();

void func_00179718();

void func_00179768();

void func_00179F10();

void func_00179F58();

void func_00179FD8();

void func_001741D8() {
    func_00179668(2, (char *)func_00179F10, 0);
    func_00179718((char *)func_00179F58, 0);
    func_001796C8((char *)func_00179FD8, 0);
    func_00179768();
}

extern char D_0053D7C8[];

void func_00174020();

void func_00174390() {
    char *v0;
    v0 = D_0053D7C8;
    if (*(int *)(v0 + 0) != 0) {
        *(int *)(v0 + 0) = 0;
        func_00174020();
        return;
    } else {
        return;
    }
}

void func_00146BE0();

void func_0015AE50();

void func_0015E8C8();

void func_0015F208();

void func_0015FD48();

void func_001726E0();

int func_00173FF8();

int func_001745B8();

void func_00175438();

void func_00176D88();

void func_001795D0();

void func_001796A8();

void func_001796F8();

void func_00179748();

void func_00179798();

int func_0017A648();

void func_001743C0() {
    int v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    int tmp0;
    tmp0 = func_00173FF8();
    v0 = tmp0;
    v1 = (*(int *)(D_0053D7C8 + 0) + -1);
    *(int *)(D_0053D7C8 + 0) = v1;
    if (v1 == 0) {
        v4 = (char *)(v0 + 108);
        v2 = 1;
        v3 = 7;
        do {
            if (*(int *)(v4 + 4) == v2) {
                func_001726E0(v4);
            }
            v3 = (v3 + -1);
            v4 = (v4 + 696);
        } while (v3 >= 0);
        func_00179798();
        func_001796A8();
        func_00179748();
        func_001796F8();
        func_00176D88();
        func_0015AE50();
        func_001745B8();
        func_00146BE0();
        func_0017A648();
        func_0015FD48();
        func_0015E8C8();
        func_0015F208();
        func_00175438();
        func_001795D0();
        return;
    } else {
        return;
    }
}
