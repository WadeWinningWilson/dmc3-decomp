extern char * D_005BE0D8;

void func_001B9910(p0) char *p0; {
    char *v0;
    if (*(int *)(p0 + 0) == -1) {
        v0 = D_005BE0D8;
        if (v0 != 0) {
            *(int *)(p0 + 0) = ((*(signed char *)(v0 + 5) + 2) << 3);
        }
    }
}

void func_001B98F0(char *p0) {
    *(int *)(p0 + 0) = -1;
}
