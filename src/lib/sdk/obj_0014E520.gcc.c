// cc: ee-gcc2.96 -O2 -G0
void func_00158738();

void func_00158758();

void func_0014E588(p0) int p0; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        func_00158738(*(int *)(v0 + 8), *(int *)(v0 + 12), *(int *)(v0 + 16), *(int *)(v0 + 4));
        func_00158758(*(int *)(v0 + 0));
        return;
    } else {
        func_00158738(p0, 0, 0, 0);
        func_00158758(0);
        return;
    }
}
