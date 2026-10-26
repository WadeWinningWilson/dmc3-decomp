extern "C" short func_0027BC50(char *p, unsigned char a, unsigned char b) {
    int i;
    for (i = 0; i < 20; i++) {
        int v = *(short *)(p + i * 2 + 4);
        if (v == a) {
            int w = *(unsigned char *)(p + i + 0xAC);
            if (w == b) return i;
        }
    }
    return -1;
}
