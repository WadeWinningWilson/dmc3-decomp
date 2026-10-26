// cc: ee-gcc2.96 -O2 -G8
extern char D_00590DC8[];

void func_001446F0();

void func_0015A908();

int func_00147278(p0) char *p0; {
    if (p0 == 0) {
        func_001446F0(D_00590DC8);
        return -1;
    } else {
        func_0015A908(*(int *)(p0 + 148));
        return;
    }
}
