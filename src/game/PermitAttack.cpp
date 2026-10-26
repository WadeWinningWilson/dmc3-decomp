extern "C" void func_00414FF0(char *p, float f) {
    int i;
    for (i = 0; i < *(short *)(p + 4); i++) {
        if (*(unsigned char *)(p + i * 8 + 8) == 0) {
            ((unsigned char *)(p + 8))[i * 8] = 1;
            ((float *)(p + 0xC))[i * 2] = f;
            return;
        }
    }
}
