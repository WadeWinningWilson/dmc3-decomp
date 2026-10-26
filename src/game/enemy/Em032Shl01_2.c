void func_00253110(char *, char *, int, float);

int func_002536B0(char *, char *);

void func_002530C0(char *, char *);

void func_004F6E90(char *p) {
    void func_004F73C0(char *, int);
    extern char D_0058BD20[];
    *(unsigned char *)(p + 0xBF0) = 1;
    *(float *)(p + 0x144) = *(float *)(p + 0x144) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x144) < 0.0f) {
        *(unsigned char *)(p + 0xBF0) = 0;
    }
    if (*(unsigned char *)(p + 0xBF0) == 1) {
        func_00253110(p, p + 0xBC0, 3, *(float *)(p + 0x10));
        switch (func_002536B0(p, p + 0xBC0)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0xBF0) = 0;
            break;
        case -1:
            *(unsigned char *)(p + 0xBF0) = 0;
            break;
        }
    }
    if (*(unsigned char *)(p + 0xBF0) == 0) {
        func_004F73C0(p, 0);
        *(unsigned char *)(p + 0x148) = 1;
        func_002530C0(p, D_0058BD20);
        *(unsigned char *)(p + 0xBF0) = 1;
        *(unsigned char *)(p + 5) = 1;
    }
}

void func_004F6F80(char *p) {
    void func_004F73C0(char *, int);
    extern char D_0058BD40[];
    *(float *)(p + 0xBAC) = *(float *)(p + 0xBAC) - *(float *)(p + 0x10);
    if (*(float *)(p + 0xBAC) < 0.0f) {
        func_004F73C0(p, 1);
        *(unsigned char *)(p + 0x148) = 1;
        func_002530C0(p, D_0058BD40);
        *(unsigned char *)(p + 0xBF0) = 1;
        *(unsigned char *)(p + 5) = 2;
    }
    if (*(unsigned char *)(p + 0xBF0) == 1) {
        func_00253110(p, p + 0xBD0, 3, *(float *)(p + 0x10));
        switch (func_002536B0(p, p + 0xBD0)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0xBF0) = 0;
            break;
        case -1:
            *(unsigned char *)(p + 0xBF0) = 0;
            break;
        }
    }
}

extern void func_004F7580();

void func_004F7660(char *p) { func_004F7580(p + -64); }

void func_004F7670(char *p) { func_004F7580(p + -160); }
