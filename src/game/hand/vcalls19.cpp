/* Hand-matched C++ functions whose prototypes or classes conflict with vcalls-vcalls18. */

extern "C" {
extern char *D_01CAFF0C[];
}

static inline bool push2F2(char *p, char *e) {
    char *n = *(char **)(p + 0x838);
    if (n != 0) {
        *(char **)(p + 0x838) = *(char **)(n + 4);
        *(char **)n = e;
        *(char **)(n + 4) = *(char **)(p + 0x834);
        *(char **)(p + 0x834) = n;
        return true;
    }
    return false;
}

extern "C" void func_002F2E30(char *p, char *e) {
    if (push2F2(p, e) != 0) {
        char *b;
        int k;
        *(int *)(p + 0x1C) = *(int *)(p + 0x1C) + 1;
        b = *(char **)(D_01CAFF0C[0] + 4);
        k = *(signed char *)(e + 0x46);
        ((int *)(b + 0x64))[k / 32] |= 1 << (k & 0x1F);
        if (*(signed char *)(e + 0x46) == 0x1B) *(int *)(p + 0x20) = *(int *)(p + 0x20) + 1;
    }
}
