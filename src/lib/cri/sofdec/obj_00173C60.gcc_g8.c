// cc: ee-gcc2.96 -O2 -G8
void func_00175D80();

void func_00174358(p0) char *p0; {
    func_00175D80(0, 27, (int)*(float *)(p0 + 0));
    func_00175D80(0, 7, 1);
}

char *func_00173FF8();

int func_001744C0(p0) int p0; {
    char *tmp0;
    tmp0 = func_00173FF8();
    *(int *)(tmp0 + 104) = p0;
    return p0;
}
