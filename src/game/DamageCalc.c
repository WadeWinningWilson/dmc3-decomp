extern char D_005AB1A0[];

void func_002E89A0();

int func_002E8A10(p0) int p0; {
    func_002E89A0();
    *(char **)((char *)p0 + 0) = D_005AB1A0;
    *(int *)((char *)p0 + 4) = 0;
    *(int *)((char *)p0 + 8) = 0;
    *(int *)((char *)p0 + 12) = 0;
    return p0;
}

void func_002E8AB0(p0, p1, p2, p3, p4) char *p0; int p1; int p2; int p3; int p4; {
    *(int *)(p0 + 4) = p1;
    *(int *)(p0 + 8) = p2;
    *(int *)(p0 + 12) = p3;
    *(int *)(p0 + 16) = 0;
    *(char *)(p0 + 20) = p4;
    *(char *)(*(char **)(p0 + 8) + 0) = -1;
    *(char *)(*(char **)(p0 + 8) + 1) = -1;
    *(float *)(*(char **)(p0 + 8) + 4) = *(float *)(*(char **)(p0 + 4) + 44);
    *(float *)(*(char **)(p0 + 8) + 8) = *(float *)(*(char **)(p0 + 4) + 48);
    *(float *)(*(char **)(p0 + 8) + 12) = *(float *)(*(char **)(p0 + 4) + 52);
}

extern char D_01DF5D20[];

void func_002E8B10(p0) char *p0; {
    float v0;
    v0 = 180.0f;
    *(float *)(p0 + 16) += *(float *)D_01DF5D20;
    if (*(float *)(p0 + 16) > v0) {
        *(float *)(*(char **)(p0 + 8) + 8) = *(float *)(*(char **)(p0 + 4) + 48);
        v0 = *(float *)(*(char **)(p0 + 4) + 52);
        *(float *)(*(char **)(p0 + 8) + 12) = v0;
    }
}

void func_002E99D0(void) {}

extern char D_005BE134;

void func_002E99C0(void) {
    D_005BE134 = 0;
}
