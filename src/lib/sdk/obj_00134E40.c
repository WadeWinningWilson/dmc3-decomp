void func_00134DE0();

void func_001350E0(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    func_00134DE0(p1, p2, p3);
}

extern char D_005189F0[];

extern char D_00518A00[];

extern char * D_005BE0D8;

int func_00134EA0();

int func_001351D0(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    v0 = p1;
    if (*(signed char *)(D_005BE0D8 + 13) != 0) {
        v1 = func_00134EA0(p0, D_005189F0, 1, v0);
    } else {
        v1 = func_00134EA0(p0, D_00518A00, 1, v0);
    }
    return (v1 & 255);
}
