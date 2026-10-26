// cc: ee-gcc2.96 -O2 -G0
void func_0016CB90();

int func_0016CD60();

int func_0016CF28(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = func_0016CD60();
    v2 = 0;
    v3 = 0xff020103;
    if (v1 != 0) {
        func_0016CB90(v2, v3);
        return;
    } else {
        *(int *)(v0 + 0) = 1;
        return v1;
    }
}

int func_0016CF78(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(unsigned char *)(p0 + 0);
    v0 = (v0 << 8);
    v0 = (v0 | *(unsigned char *)(p0 + 1));
    v0 = (v0 << 8);
    v0 = (v0 | *(unsigned char *)(p0 + 2));
    v0 = (v0 << 8);
    v0 = (v0 | *(unsigned char *)(p0 + 3));
    v1 = 4;
    if (v0 != 256) {
        v1 = 3;
        if (v0 != 257) {
            v1 = 1;
            if (!((unsigned int)(v0 + -258) < (unsigned int)174)) {
                v1 = 32;
                if (v0 != 434) {
                    v1 = 64;
                    if (v0 != 435) {
                        v1 = 16;
                        if (v0 != 437) {
                            v1 = 128;
                            if (v0 != 439) {
                                v1 = 8;
                                v1 = ((v0 ^ 440) != 0 ? 0 : v1);
                            }
                        }
                    }
                }
            }
        }
    }
    return v1;
}
