// cc: ee-gcc2.96 -O2 -G8
extern char D_00525B38[];

int func_001496B0() {
    int tmp0;
    tmp0 = (*(int *)(D_00525B38 + 0) + -1);
    *(int *)(D_00525B38 + 0) = (*(int *)(D_00525B38 + 0) + -1);
    return tmp0;
}
