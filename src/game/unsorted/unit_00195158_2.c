void func_00128488();

void func_00195320(p0) int p0; {
    int v0;
    char *v1;
    v0 = 0;
    v1 = (char *)p0;
    do {
        *(int *)(v1 + 256) = 0;
        *(int *)(v1 + 0) = 0;
        v0 = (v0 + 8);
        *(int *)(v1 + 260) = 0;
        *(int *)(v1 + 4) = 0;
        *(int *)(v1 + 264) = 0;
        *(int *)(v1 + 8) = 0;
        *(int *)(v1 + 268) = 0;
        *(int *)(v1 + 12) = 0;
        *(int *)(v1 + 272) = 0;
        *(int *)(v1 + 16) = 0;
        *(int *)(v1 + 276) = 0;
        *(int *)(v1 + 20) = 0;
        *(int *)(v1 + 280) = 0;
        *(int *)(v1 + 24) = 0;
        *(int *)(v1 + 284) = 0;
        *(int *)(v1 + 28) = 0;
        v1 = (v1 + 32);
    } while (((unsigned int)v0 < (unsigned int)64));
    func_00128488((p0 + 1104), 0, 8);
}

void func_00195870(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)(signed char)p1;
    v0 = (char *)((int)v0 << 2);
    v0 = (char *)(p0 + (int)v0);
    v0 = *(char **)(v0 + 0);
    if (v0 != 0) {
        do {
            *(char *)(v0 + 54) = 0;
            v0 = *(char **)(v0 + 32);
        } while (v0 != 0);
    }
}
