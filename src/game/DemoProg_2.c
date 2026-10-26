extern char D_005A6F50[];

extern char D_005ABD80[];

extern unsigned char D_005BE18C;

void func_0013D6A0(char *);

char *func_0030DA60(char *p) {
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005ABD80;
    *(unsigned char *)(p + 4) = 0;
    D_005BE18C = 0;
    *(unsigned char *)(p + 0x58) = 0;
    *(int *)(p + 0x54) = 0;
    *(int *)(p + 0x48) = 0;
    return p;
}
