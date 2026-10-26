extern char D_005AADD0[];

extern char D_005B0E20[];

extern char D_005B0E44[];

extern char D_005B0EC4[];

extern char D_005B0F58[];

void func_0024F750(char *);

void func_00100450(char *, void *, void *, int, int);

void func_003CF660(void);

void func_003CF5F0(void);

char *func_003CF4B0(char *p) {
    int i;
    char *e;
    char *q;
    func_0024F750(p);
    *(char **)(p + 0xD0) = D_005AADD0;
    *(int *)(p + 0xD8) = -1;
    *(char **)p = D_005B0E20;
    *(char **)(p + 0x40) = D_005B0E44;
    *(char **)(p + 0xA0) = D_005B0EC4;
    *(char **)(p + 0xD0) = D_005B0F58;
    func_00100450(p + 0xE0, (void *)func_003CF660, (void *)func_003CF5F0, 0x720, 0x18);
    *(unsigned char *)(p + 0xACE4) = 1;
    *(unsigned char *)(p + 0xACE5) = 0;
    *(unsigned char *)(p + 0xACE6) = 0;
    *(unsigned char *)(p + 0xACE7) = 0;
    *(int *)(p + 0xACE8) = 0;
    *(int *)(p + 0xACEC) = 0;
    *(int *)(p + 0xACE0) = 0;
    for (i = 0, q = p; i < 8; i++, q += 0x20) {
        e = q + 0xABE0;
        *(unsigned char *)(e + 0) = 0;
        *(unsigned char *)(e + 1) = 0;
        *(unsigned char *)(e + 2) = 0;
        *(unsigned char *)(e + 3) = 0;
        *(int *)(e + 8) = 0;
        *(int *)(e + 0x14) = 0;
        *(unsigned char *)(e + 4) = 0;
        *(int *)(e + 0xC) = 0;
        *(int *)(e + 0x18) = 0;
        *(unsigned char *)(e + 5) = 0;
        *(int *)(e + 0x10) = 0;
        *(int *)(e + 0x1C) = 0;
    }
    return p;
}
