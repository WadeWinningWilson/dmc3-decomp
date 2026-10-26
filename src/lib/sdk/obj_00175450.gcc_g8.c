// cc: ee-gcc2.96 -O2 -G8
extern char D_0053EE10[];

extern char D_00637CC0[];

extern char D_0063BCC0[];

int func_00175590();

void func_00175618();

void func_00175638();

void func_00175718();

int func_00175810();

void func_00175450() {
    int v0;
    int v1;
    char *v2;
    int tmp0;
    tmp0 = func_00175590();
    v0 = tmp0;
    v2 = D_0053EE10;
    if (v0 == 1) {
        v1 = *(int *)(v2 + 0);
        if (v1 != v0) {
            func_00175618();
            func_00175638(0, 16384, D_00637CC0);
            func_00175810(8);
            func_00175718(D_0063BCC0, 16384, 0);
            v1 = func_00175810(9);
            *(int *)(v2 + 0) = v0;
        }
    }
}

void func_001754E0() {
    char *v0;
    int v1;
    v1 = func_00175590();
    v0 = D_0053EE10;
    if (v1 == 1) {
        v1 = *(int *)(v0 + 0);
        if (v1 != 0) {
            func_00175618(1);
            func_00175638(0, 16384, D_0063BCC0);
            func_00175810(8);
            func_00175718(D_00637CC0, 16384, 0);
            v1 = func_00175810(9);
            *(int *)(v0 + 0) = 0;
        }
    }
}
