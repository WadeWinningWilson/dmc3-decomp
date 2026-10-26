// cc: ee-gcc2.96 -O2 -G0
extern char D_00595658[];

int func_00171138();

int func_001711F0();

void func_001798E8();

int func_00171248(p0) int p0; {
    int v0;
    int v1;
    int tmp0;
    int tmp1;
    v0 = p0;
    if (v0 == 0) {
        func_001798E8(D_00595658);
        v1 = 0;
    } else {
        tmp0 = func_00171138();
        tmp1 = func_001711F0(v0);
        v1 = (tmp0 + tmp1);
    }
    return v1;
}

extern char D_0053D7C0[];

extern char D_0053D7C4[];

extern char D_00637B08[];

void func_001712A8(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    int v2;
    char *v3;
    int tmp0;
    v0 = p0;
    *(int *)D_0053D7C0 = v0;
    *(int *)D_0053D7C4 = p1;
    v1 = 0;
    if (v0 > 0) {
        v2 = (int)D_00637B08;
        do {
            tmp0 = (v1 << 2);
            v1 = (v1 + 1);
            v3 = (char *)(tmp0 + v2);
            *(int *)(v3 + 0) = *(int *)((char *)(tmp0 + p2) + 0);
        } while ((v1 < v0));
    }
}
