int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0012B1A0(char *, int *);

extern int D_005BDA98;

int func_00450800(void);

int func_00450770(char *p) {
    char buf[0x20] __attribute__((aligned(16)));
    if ((func_0022CBA0(p) != 0) ^ 1) {
        do {
            func_0022CBB0(p, buf);
            if (func_0012B1A0(buf, &D_005BDA98) == 0) {
                return func_00450800();
            }
        } while ((func_0022CBA0(p) != 0) ^ 1);
    }
    return 0;
}

char *func_00279290(char *);

void func_001A2970(char *);

void func_001A2900(char *, float);

void func_001A2840(char *, int, float);

void func_0044EA50(char *p, unsigned char m) {
    switch (m) {
    case 0:
        *(int *)(p + 0x828) = 0;
        *(unsigned int *)(p + 0x824) = 0x90FFFFFF;
        func_001A2840(func_00279290(p + 0x200), *(int *)(p + 0x824), 1.0f);
        break;
    case 1:
        if (*(unsigned char *)(p + 0x811) == m) break;
        *(float *)(p + 0x828) = 30.0f;
        func_001A2900(func_00279290(p + 0x200), 1.0f / *(float *)(p + 0x828));
        break;
    case 2:
        if (*(unsigned char *)(p + 0x811) == m) break;
        *(int *)(p + 0x828) = 0;
        *(int *)(p + 0x824) = 0;
        func_001A2970(func_00279290(p + 0x200));
        break;
    }
    *(unsigned char *)(p + 0x811) = m;
}

extern char D_005AADD0[];

extern char D_005B4F30[];

extern char D_005B4F54[];

extern char D_005B4FD4[];

extern char D_005B5068[];

void func_0024F750();

int func_0028C110();

int func_00450930(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    func_0024F750();
    *(char **)(v0 + 208) = D_005AADD0;
    *(int *)(v0 + 216) = -1;
    *(char **)(v0 + 0) = D_005B4F30;
    *(char **)(v0 + 64) = D_005B4F54;
    *(char **)(v0 + 160) = D_005B4FD4;
    *(char **)(v0 + 208) = D_005B5068;
    func_0028C110((v0 + 832));
    v1 = 0;
    *(char *)(v0 + 220) = 1;
    *(char *)(v0 + 229) = 0;
    *(char *)(v0 + 230) = 0;
    *(char *)(v0 + 231) = 0;
    *(char *)(v0 + 233) = 0;
    *(char *)(v0 + 232) = 0;
    *(char *)(v0 + 235) = 0;
    *(char *)(v0 + 236) = 0;
    *(char *)(v0 + 234) = 0;
    while ((v1 < 8)) {
        *(char *)((char *)(v1 + (int)v0) + 221) = 0;
        *(int *)((char *)((v1 << 2) + (int)v0) + 240) = 0;
        *(int *)((char *)((v1 << 2) + (int)v0) + 800) = 0;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((v0 + (v1 << 6)) + 288)) : "memory");
        v1 = (v1 + 1);
    }
    *(int *)(v0 + 272) = 0;
    return (int)v0;
}

extern void func_004503B0();

void func_004506E0(char *p) { func_004503B0(p + -64); }

extern void func_004505D0();

void func_00450700(char *p) { func_004505D0(p + -64); }

void func_00450710(char *p) { func_004505D0(p + -160); }

void func_00450720(char *p) { func_004505D0(p + -208); }

void func_00450760(char *p) { func_004505D0(p + -304); }

void func_004505B0(char *p) { *(char *)(p + 2053) = 0; }

void func_004505C0(char *p, short v) { *(short *)(p + 500) = v; }
