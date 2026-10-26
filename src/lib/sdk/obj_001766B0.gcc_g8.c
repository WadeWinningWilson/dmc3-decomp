// cc: ee-gcc2.96 -O2 -G8
extern char D_005969A0[];

int func_00175970();

int func_00175E88();

void func_001798E8();

void func_0018CF18();

void func_00176708(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int tmp0;
    int tmp1;
    v0 = p1;
    tmp0 = func_00175E88();
    v1 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_005969A0);
        return;
    } else {
        tmp1 = func_00175970(v1);
        func_0018CF18(tmp1, 7, (v0 != 1));
        return;
    }
}
