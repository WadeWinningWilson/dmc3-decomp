// cc: ee-gcc2.96 -O2 -G0
extern char D_0052A390[];

int func_001567A0() {
    int tmp0;
    tmp0 = (*(int *)(D_0052A390 + 0) + 1);
    *(int *)(D_0052A390 + 0) = (*(int *)(D_0052A390 + 0) + 1);
    return tmp0;
}

extern char D_0052A394[];

extern char D_00592C20[];

int func_0012ACE8();

int func_001567B8(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int v0;
    int v1;
    int tmp0;
    int tmp2;
    v0 = p1;
    v1 = 0;
    if (p2 > 0) {
        p3 = -86;
        do {
            tmp0 = (v0 + v1);
            v1 = (v1 + 1);
            *(char *)((char *)tmp0 + 0) = p3;
        } while ((v1 < p2));
    }
    tmp2 = func_0012ACE8(v0, D_00592C20, *(int *)(D_0052A394 + 0), p3);
    *(int *)(D_0052A394 + 0) = (*(int *)(D_0052A394 + 0) + 1);
    return tmp2;
}
