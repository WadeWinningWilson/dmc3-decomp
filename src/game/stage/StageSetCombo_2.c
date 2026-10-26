extern char D_01CAFF0C[];

void func_004557B0();

int func_00456280();

int func_00455BD0(p0) char *p0; {
    char *v0;
    int tmp0;
    v0 = p0;
    if (*(unsigned char *)(p0 + 1602) == 0) {
        if (!(*(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 12) + 15760) < *(unsigned char *)(v0 + 1603))) {
            func_004557B0();
        }
    }
    tmp0 = func_00456280(v0);
    return tmp0;
}

extern void func_00456C20();

void func_00456D10(char *p) { func_00456C20(p + -64); }

void func_00456D20(char *p) { func_00456C20(p + -160); }

void func_00456D60(char *p) { func_00456C20(p + -208); }

void func_00456C00(char *p) { *(char *)(p + 1600) = 0; }

void func_00456C10(char *p, short v) { *(short *)(p + 504) = v; }

void func_00456BF0(char *p0) {
    *(char *)(p0 + 1600) = 1;
}
