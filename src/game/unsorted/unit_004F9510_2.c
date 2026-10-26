extern char D_01CAFF0C[];

unsigned char func_004F9970(char *p, short a, unsigned char b) {
    unsigned char r = 1;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 0xA) == 1) return 0;
    if (*(unsigned char *)(p + 0x20) < 4) {
        *(short *)((char *)(*(unsigned char *)(p + 0x20) * 4) + (int)p + 0x10) = a;
        *(unsigned char *)((char *)(*(unsigned char *)(p + 0x20) * 4) + (int)p + 0x12) = b;
        *(unsigned char *)(p + 0x20) = *(unsigned char *)(p + 0x20) + 1;
    } else {
        r = 0;
    }
    return r;
}
