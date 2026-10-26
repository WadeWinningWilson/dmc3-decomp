// cc: ee-gcc2.96 -O2 -G0
extern char D_00529B34[];

int func_00121E40();

int func_00121F10();

void func_00155AD8();

int func_001621E0();

int func_00155C30(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    v0 = D_00529B34;
    v1 = p0;
    v2 = func_001621E0(v0);
    v4 = 0;
    v3 = 0x9600;
    if (v2 != 0) {
        func_00155AD8(v3);
        tmp0 = func_00121E40(v1);
        func_00155AD8(0x9601);
        if (tmp0 == 0) {
            tmp1 = func_00121F10();
            v4 = tmp1;
        }
        *(int *)(v0 + 0) = 0;
        v2 = v4;
    }
    return v2;
}

extern char D_00592A10[];

void func_0010F9C0();

int func_00112748();

void func_00155BC0();

void func_00155BF8();

int func_00155D70(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    func_00155BC0();
    tmp0 = func_00112748(p0, p1, p2);
    v2 = tmp0;
    v0 = (int)D_00592A10;
    v1 = v2;
    if (v2 < 0) {
        func_0010F9C0(v0, v1);
    }
    func_00155BF8();
    return v2;
}

extern char D_00592A30[];

int func_00111BE8();

int func_00155DE8(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    func_00155BC0();
    tmp0 = func_00111BE8(p0, p1);
    v0 = tmp0;
    v1 = (int)D_00592A30;
    v2 = v0;
    if (v0 < 0) {
        func_0010F9C0(v1, v2);
    }
    func_00155BF8();
    return v0;
}
