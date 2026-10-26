unsigned char func_002DA0B0(char *, signed char);

void func_0028D560(char *p) {
    *(unsigned char *)(p + 0xD8) = 1;
    if (func_002DA0B0(*(char **)(p + 0xE0), *(signed char *)(p + 0xD2)) == 0 || func_002DA0B0(*(char **)(p + 0xE0), *(signed char *)(p + 0xD2)) == 3) {
        *(unsigned char *)(p + 5) = 0;
        *(unsigned char *)(p + 6) = 0;
    } else {
        *(signed char *)(p + 0xDA) = -1;
    }
}

extern void func_0028D830();

void func_0028D910(char *p) { func_0028D830(p + -64); }

void func_0028D920(char *p) { func_0028D830(p + -160); }
