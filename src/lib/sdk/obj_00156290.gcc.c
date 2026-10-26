// cc: ee-gcc2.96 -O2 -G0
int func_00156290(p0) char *p0; {
    return *(signed char *)(p0 + 1);
}

extern char D_00529B7C[];

int func_001563C0() {
    int tmp0;
    tmp0 = (*(int *)(D_00529B7C + 0) + -1);
    *(int *)(D_00529B7C + 0) = (*(int *)(D_00529B7C + 0) + -1);
    return tmp0;
}

void func_0015E7E8();

void func_0015E800();

void func_001564C8(p0) int p0; {
    func_0015E7E8();
    *(char *)((char *)p0 + 0) = 0;
    func_0015E800();
}

void func_001564F0(p0) char *p0; {
    *(int *)(p0 + 60) = 0;
    *(char *)(p0 + 1) = 1;
}
