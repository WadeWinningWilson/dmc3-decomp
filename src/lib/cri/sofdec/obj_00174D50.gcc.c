// cc: ee-gcc2.96 -O2 -G0
extern char D_005962B8[];

void func_001712F8();

void func_00174A90();

void func_00174DD0();

int func_00175E88();

void func_001798E8();

void func_00174D50(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    v1 = p1;
    tmp0 = func_00175E88();
    v2 = (int)v0;
    if (tmp0 == 0) {
        func_001798E8(D_005962B8);
        return;
    } else {
        func_00174DD0(v2);
        *(int *)(v0 + 464) = v1;
        *(int *)(v0 + 484) = 2;
        *(int *)(v0 + 488) = 0;
        *(int *)(v0 + 492) = 0;
        *(int *)(v0 + 496) = 0;
        func_00174A90(v0);
        func_001712F8(v0);
        return;
    }
}

extern char D_005962E8[];

void func_0015A7B0();

void func_001744C0();

void func_00179058();

void func_0017A5E0();

void func_0017A908();

int func_0018B460();

void func_00174DD0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    v1 = *(int *)(v0 + 64);
    if (v1 == 0) {
        return;
    } else {
        func_0017A5E0();
        *(int *)(v0 + 8) = 0;
        tmp0 = func_0018B460(v1);
        v2 = -308;
        if (tmp0 != 0) {
            func_001744C0(v2);
            func_001798E8(D_005962E8);
        }
        func_00179058((v0 + 660));
        *(int *)(v0 + 692) = 0;
        v3 = *(int *)(v0 + 68);
        if (*(int *)(v0 + 68) != 0) {
            func_0017A908(v3);
        }
        func_0015A7B0(*(int *)(v0 + 76));
        return;
    }
}

extern char D_00596308[];

void func_00178BA8();

void func_00174E68(p0) int p0; {
    char *v0;
    int v1;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_00175E88();
    v1 = (int)v0;
    if (tmp0 == 0) {
        func_001798E8(D_00596308);
        return;
    } else {
        func_00174DD0(v1);
        func_00178BA8(v0, 0);
        *(int *)(v0 + 120) = 0;
        func_0015A7B0(*(int *)(v0 + 76));
        return;
    }
}
