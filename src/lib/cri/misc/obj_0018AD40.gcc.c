// cc: ee-gcc2.96 -O2 -G0
void func_00180180();

int func_0018ADD8(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = 0;
    if (*(int *)(v0 + 4) == 0) {
        func_00180180(v1, 0xff000204);
        return;
    } else {
        if (((unsigned int)*(int *)(v0 + 64) < (unsigned int)14104)) {
            func_00180180(0, 0xff000205);
            return;
        } else {
            return 0;
        }
    }
}
