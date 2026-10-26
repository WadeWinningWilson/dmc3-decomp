// cc: ee-gcc2.96 -O2 -G8
extern char D_01DFC7EC[];

int func_0010E4B8();

int func_0012ABE8(p0, p1, p2) int p0; int p1; int p2; {
    char *v0;
    char *v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = D_01DFC7EC;
    *(int *)(v1 + 0) = 0;
    v2 = func_0010E4B8(p1, p2);
    if (v2 == -1) {
        v3 = *(int *)(v1 + 0);
        if (v3 != 0) {
            *(int *)(v0 + 0) = v3;
        }
    }
    return v2;
}

void func_0010E4B0();

void func_0012AC48() {
    func_0010E4B0();
}
