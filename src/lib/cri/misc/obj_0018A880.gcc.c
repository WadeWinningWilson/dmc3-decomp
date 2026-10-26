// cc: ee-gcc2.96 -O2 -G0
int func_0018B540();

int func_0018AC48(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = func_0018B540();
    if (v1 == 0) {
        *(int *)(v0 + 76) = 6;
    }
    return v1;
}
