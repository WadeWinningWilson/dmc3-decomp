// cc: ee-gcc2.96 -O2 -G0
extern char D_0052BCC0[];

extern char D_00592F40[];

extern char D_00592F48[];

void func_0012B070();

int func_0012B1A0();

void func_0012B2E8();

int func_0012B400();

void func_00157120();

void func_00157AF8(p0, p1) int p0; int p1; {
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int tmp0;
    int tmp1;
    v0 = p1;
    v1 = (char *)p0;
    func_0012B2E8(v0, D_0052BCC0);
    v2 = *(signed char *)(v1 + 0);
    v3 = 92;
    if (v2 != 47) {
        if (v2 != v3) {
            func_0012B070(v0, D_00592F40);
        }
    }
    func_0012B070(v0, v1);
    tmp0 = func_0012B400(v0);
    tmp1 = func_0012B1A0(((v0 + tmp0) + -2), D_00592F48);
    v6 = v0;
    v5 = (int)D_00592F48;
    if (tmp1 != 0) {
        func_0012B070(v6, v5);
        v6 = v0;
    }
    func_00157120(v6);
}
