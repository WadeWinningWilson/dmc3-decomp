extern int D_005BE084;

extern int D_005BE088;

extern int D_005BE08C;

extern char D_005BE090;

int func_00122130();

int func_0013CE10() {
    int v0;
    int v1;
    int tmp0;
    if (D_005BE088 == 0) {
        tmp0 = (D_005BE08C + -1);
        D_005BE08C = (D_005BE08C + -1);
        if (tmp0 <= 0) {
            v0 = func_00122130(&D_005BE090);
            v1 = 1;
            if (v0 == v1) {
                D_005BE088 = v1;
            } else {
                D_005BE08C = 60;
                D_005BE084 = (D_005BE084 + 1);
            }
        }
    }
    return v0;
}
