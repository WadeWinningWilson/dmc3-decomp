void func_004DBF00(char *p) {
    int k = *(unsigned char *)(p + 5);
    if (k == 3 || k == 0) {
        *(char *)(p + 5) = 1;
        *(float *)(p + 0xDB0) = *(float *)(p + 0xDB8);
    }
}

void func_004DC3A0(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = *(unsigned char *)(p0 + 5);
    v0 = 3;
    if (tmp0 == 2) {
        *(char *)(p0 + 5) = v0;
        *(float *)(p0 + 3504) = *(float *)(p0 + 3508);
        *(char *)(p0 + 3533) = 1;
        *(int *)(p0 + 3524) = 0;
        *(int *)(p0 + 3456) = 0;
        *(int *)(p0 + 3460) = 0;
        *(int *)(p0 + 3464) = 0;
    }
}

extern void func_004DBD50();

void func_004DD330(char *p) { func_004DBD50(p + -64); }

extern void func_004DCF90();

void func_004DD340(char *p) { func_004DCF90(p + -64); }

extern void func_004DD220();

void func_004DD350(char *p) { func_004DD220(p + -64); }

void func_004DD360(char *p) { func_004DD220(p + -160); }

extern void func_004DD1E0();

void func_004DD370(char *p) { func_004DD1E0(p + -208); }

void func_004DD3A0(char *p) { func_004DD220(p + -208); }

void func_004DD1D0(char *p) { *(char *)(p + 3531) = 0; }

void func_004DD1C0(char *p0) {
    *(char *)(p0 + 3531) = 1;
}
