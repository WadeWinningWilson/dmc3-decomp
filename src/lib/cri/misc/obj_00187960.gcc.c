// cc: ee-gcc2.96 -O2 -G0
void func_00187A98(p0) char *p0; {
    *(int *)(*(char **)(p0 + 8120) + 124) = 1;
}

int func_00187AA8(p0) char *p0; {
    return *(int *)(*(char **)(p0 + 8120) + 124);
}

int func_00187AB8(p0, p1) char *p0; int p1; {
    char *tmp0;
    tmp0 = *(char **)(p0 + 8120);
    *(int *)(*(char **)(p0 + 8120) + 128) = p1;
    return (int)tmp0;
}

void func_00187BF0(p0) char *p0; {
    if (p0 != 0) {
        *(int *)(p0 + 0) = 0;
    }
}

void func_00187C00(p0) char *p0; {
    if (p0 != 0) {
        *(int *)(p0 + 0) = 2;
    }
}

void func_00187C18(p0) char *p0; {
    if (p0 != 0) {
        *(int *)(p0 + 0) = 4;
    }
}
