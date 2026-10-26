char *func_00501230(char *p) {
    int i;
    char *e;
    for (i = 0, e = p; i < 6; i++, e += 6) {
        if (*(unsigned char *)(e + 0x13ED) == 0) {
            return p + i * 6 + 0x13ED;
        }
    }
    return 0;
}

char *func_00501280(char *p, signed char k) {
    int i;
    char *e;
    for (i = 0, e = p; i < 6; i++, e += 6) {
        if (*(unsigned char *)(e + 0x13ED) == 1 && *(signed char *)(e + 0x13EF) == k) {
            return p + i * 6 + 0x13ED;
        }
    }
    return 0;
}

int func_005011F0(p0) char *p0; {
    int v0;
    v0 = 0;
    do {
        if (*(unsigned char *)(p0 + 5101) == 1) {
            return 0;
        }
        v0 = (v0 + 1);
        p0 = (p0 + 6);
    } while ((v0 < 6));
    return 1;
}

void func_005012F0(int p0, char *p1) {
    *(char *)(p1 + 0) = 0;
    *(char *)(p1 + 1) = 0;
}
