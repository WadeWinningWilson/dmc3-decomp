int func_0050E790(char *p) {
    char *func_00207480(int, int, float *, int);
    char *q;
    *(char **)(p + 0x460) = func_00207480(3, 0xD3, 0, 8);
    q = *(char **)(p + 0x460);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x150;
        *(char *)(q + 0x9A) = 0;
        *(char *)(*(char **)(p + 0x460) + 0x3A) = 1;
        return 1;
    }
    return 0;
}

void func_001AD140(char *);

int func_0050E800(char *p) {
    char *func_00207480(int, int, char *, int);
    char *q;
    if (*(char **)(p + 0x460) != 0) {
        func_001AD140(*(char **)(p + 0x460));
    }
    *(char **)(p + 0x460) = func_00207480(3, 0x3B7, 0, 8);
    q = *(char **)(p + 0x460);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x150;
        q[0x9A] = 0;
        *(*(char **)(p + 0x460) + 0x3A) = 1;
        return 1;
    }
    return 0;
}

void func_00206730(char *);

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

void func_00228260(char *);

void func_0050E000(char *);

void func_0050E160(char *);

void func_0050E420(char *);

void func_0050E5B0(char *);

void func_0050DF50(char *p) {
    func_001AD100(p);
    func_00206730(p + 0x460);
    func_00228260(p + 0x464);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_0050E000(p);
        break;
    case 1:
        func_0050E160(p);
        break;
    case 2:
        func_0050E420(p);
        break;
    }
    func_0050E5B0(p);
    if (*(unsigned char *)(p + 0x491) != 0) {
        func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
    }
}

extern void func_0050DE10();

void func_0050E9D0(char *p) { func_0050DE10(p + -64); }
