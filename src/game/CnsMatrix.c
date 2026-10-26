void func_00105300(char *, char *);

void func_00104C00(char *, char *, char *);

void func_001FE710(char *, int);

void func_003AD7A0(char *a, char *p, int k, float x, float y, float z) {
    char m[0x40] __attribute__((aligned(16)));
    switch (*(unsigned char *)(a + 0x14)) {
    case 2:
        func_00104C00(m, a + 0x20, a + 0x60);
        func_00105300(*(char **)(p + 0x104), m);
        *(float *)(p + 0xE0) = x;
        *(float *)(p + 0xE4) = y;
        *(float *)(p + 0xE8) = z;
        break;
    case 1:
        func_00104C00(m, *(char **)(a + 0x18), a + 0x60);
        func_00105300(*(char **)(p + 0x104), m);
        *(float *)(p + 0xE0) = x;
        *(float *)(p + 0xE4) = y;
        *(float *)(p + 0xE8) = z;
        break;
    default:
        func_001FE710(p, k);
        break;
    }
}
