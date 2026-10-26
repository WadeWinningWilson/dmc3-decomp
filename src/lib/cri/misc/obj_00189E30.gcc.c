// cc: ee-gcc2.96 -O2 -G0
void func_00189F70();

void func_0018C458();

void func_00189F48(p0) int p0; {
    func_00189F70();
    func_0018C458(p0);
}

void func_0018F868();

void func_00189F70(p0) int p0; {
    func_0018F868(p0, 2);
}

void func_0018A158();

void func_0018A200();

void func_0018A288();

void func_0018A128(p0) int p0; {
    func_0018A158();
    func_0018A200(p0);
    func_0018A288(p0);
}

int func_0018D040();

void func_0018A200(p0) int p0; {
    int v0;
    char *v1;
    int v2;
    v0 = p0;
    v1 = (char *)(v0 + 2564);
    if (*(int *)(v1 + 24) == 0) {
        if (*(int *)(v1 + 60) == 2) {
            func_0018D040(p0, 15, 1);
        }
    }
    v2 = *(int *)(v1 + 20);
    if (v2 != 0) {
        return;
    } else {
        if (*(int *)(v1 + 60) == 1) {
            func_0018D040(v0, 15, 2);
            return;
        } else {
            return;
        }
    }
}
