extern char D_005BB3F0[];

extern char D_005BB414[];

extern char D_005BB494[];

int func_00252FA0();

int func_0028C110();

int func_00506F70(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005BB3F0;
    *(char **)((char *)p0 + 64) = D_005BB414;
    *(char **)((char *)p0 + 160) = D_005BB494;
    func_0028C110((p0 + 544));
    *(int *)((char *)p0 + 532) = 0;
    *(int *)((char *)p0 + 404) = 0;
    return p0;
}

void func_00507570(p0) char *p0; {
    *(float *)(p0 + 520) = (*(float *)(p0 + 520) + (0.01666666753590107f * *(float *)(p0 + 16)));
    *(char *)(p0 + 5) = (*(unsigned char *)(p0 + 5) + 1);
    *(float *)(p0 + 496) = (30.0f * *(float *)(p0 + 464));
    *(float *)(p0 + 500) = (30.0f * *(float *)(p0 + 468));
    *(float *)(p0 + 504) = (30.0f * *(float *)(p0 + 472));
    *(int *)(p0 + 508) = 0;
    *(int *)(p0 + 528) = 0x41200000;
    *(int *)(p0 + 524) = 0;
}

extern void func_005072A0();

void func_00507A50(char *p) { func_005072A0(p + -64); }

void func_00507A40(void) {}

void func_00507550(char *p0) {
    unsigned char t0;
    *(int *)(p0 + 520) = 0;
    t0 = (*(unsigned char *)(p0 + 5) + 1);
    *(char *)(p0 + 5) = (*(unsigned char *)(p0 + 5) + 1);
}
