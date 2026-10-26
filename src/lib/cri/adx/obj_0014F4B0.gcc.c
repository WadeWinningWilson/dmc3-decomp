// cc: ee-gcc2.96 -O2 -G0
extern char D_005296DC[];

int func_0014F4B0() {
    int tmp0;
    tmp0 = (*(int *)(D_005296DC + 0) + 1);
    *(int *)(D_005296DC + 0) = (*(int *)(D_005296DC + 0) + 1);
    return tmp0;
}
