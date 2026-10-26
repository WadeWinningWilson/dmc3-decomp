// cc: ee-gcc2.96 -O2 -G0
extern char D_00592A50[];

void func_0010F9C0();

int func_00111E70();

void func_00155BC0();

void func_00155BF8();

int func_00155E50(p0) int p0; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    func_00155BC0();
    tmp0 = func_00111E70(p0);
    v0 = tmp0;
    v1 = (int)D_00592A50;
    v2 = v0;
    if (v0 < 0) {
        func_0010F9C0(v1, v2);
    }
    func_00155BF8();
    return v0;
}

extern char D_00592A70[];

int func_00112228();

int func_00155EA8(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    func_00155BC0();
    tmp0 = func_00112228(p0, p1, p2);
    v2 = tmp0;
    v0 = (int)D_00592A70;
    v1 = v2;
    if (v2 < 0) {
        func_0010F9C0(v0, v1);
    }
    func_00155BF8();
    return v2;
}
