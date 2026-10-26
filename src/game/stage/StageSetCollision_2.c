extern char D_005AADD0[];

extern char D_005AED40[];

extern char D_005AED64[];

extern char D_005AEDE4[];

extern char D_005AEE78[];

void func_0024F750();

int func_0028C110();

int func_0038ACB0(p0) int p0; {
    func_0024F750();
    *(char **)((char *)p0 + 208) = D_005AADD0;
    *(int *)((char *)p0 + 216) = -1;
    *(char **)((char *)p0 + 0) = D_005AED40;
    *(char **)((char *)p0 + 64) = D_005AED64;
    *(char **)((char *)p0 + 160) = D_005AEDE4;
    *(char **)((char *)p0 + 208) = D_005AEE78;
    func_0028C110((p0 + 400));
    *(char *)((char *)p0 + 385) = 0;
    *(int *)((char *)p0 + 388) = 0;
    return p0;
}

extern void func_0038AE40();

void func_0038B3A0(char *p) { func_0038AE40(p + -64); }

extern void func_0038B290();

void func_0038B3B0(char *p) { func_0038B290(p + -64); }

extern void func_0038B2F0();

void func_0038B3C0(char *p) { func_0038B2F0(p + -64); }

void func_0038B3D0(char *p) { func_0038B2F0(p + -160); }

void func_0038B400(char *p) { func_0038B2F0(p + -208); }

void func_0038B2D0(char *p) { *(char *)(p + 384) = 0; }

void func_0038B2C0(char *p0) {
    *(char *)(p0 + 384) = 1;
}
