void func_00211770();

char *func_00211810();

int func_00211840(p0) char *p0; {
    char *v0;
    char *v1;
    char *v2;
    v0 = p0;
    *(int *)(p0 + 40) = -1;
    v2 = 0;
    *(char *)(p0 + 44) = 0;
    func_00211770();
    if (((*(unsigned char *)(v0 + 44) != 0) ^ 1)) {
        do {
            v1 = func_00211810(v0);
            if (v2 == 0) {
                v2 = v1;
            } else {
                if (*(float *)(v1 + 4) < *(float *)(v2 + 4)) {
                    v2 = v1;
                }
            }
            func_00211770(v0);
        } while (((*(unsigned char *)(v0 + 44) != 0) ^ 1));
    }
    return (int)v2;
}
