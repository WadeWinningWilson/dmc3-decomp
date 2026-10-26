extern "C" char D_0056E150[];

extern "C" void func_003AA8F0(char *);

extern "C" unsigned char func_003ACB40(char *p) {
    unsigned char r;
    if (*(signed char *)(p + 0x4E1A) == -1) {
        return 0;
    }
    *(unsigned char *)(p + 0x4E16) = *(unsigned char *)(((char **)D_0056E150)[*(signed char *)(p + 0x4E1A)] + *(signed char *)(p + 0x4E1B));
    r = 1;
    if (*(unsigned char *)(p + 0x4E16) == 0x17) {
        *(unsigned char *)(p + 0x4E16) = 0;
        r = 0;
    }
    *(signed char *)(p + 0x4E1B) = *(signed char *)(p + 0x4E1B) + 1;
    func_003AA8F0(p);
    *(int *)(p + 0x4BE0) = 0;
    return r;
}
