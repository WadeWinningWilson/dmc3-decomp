short func_0034B940(char *, char *);

void func_00131650(char *, char *);

void func_00482070(char *p) {
    *(short *)(p + 0x90) = func_0034B940(p + ((*(signed char *)(p + 0x288) + 1) << 4) + 0x310, p + 0x50);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x300), "r"(p + 0x50), "r"(p + ((*(signed char *)(p + 0x288) + 1) << 4) + 0x310) : "memory");
    func_00131650(p + 0x300, p + 0x300);
    *(float *)(p + 0x30C) = 1.0f;
}

char *func_00279290(char *);

void func_001A2970(char *);

void func_001A2900(char *, float);

void func_001A2840(char *, int, float);

void func_00480E90(char *p, unsigned char k) {
    switch (k) {
    case 0:
    case 1:
        *(float *)(p + 0x294) = 0.0f;
        *(int *)(p + 0x290) = 0x90FFFFFF;
        func_001A2840(func_00279290(p + 0x740), *(int *)(p + 0x290), 1.0f);
        break;
    case 2:
        if (*(unsigned char *)(p + 0x28B) != k) {
            *(float *)(p + 0x294) = 10.0f;
            func_001A2900(func_00279290(p + 0x740), 1.0f / *(float *)(p + 0x294));
        }
        break;
    case 3:
        if (*(unsigned char *)(p + 0x28B) != k) {
            *(float *)(p + 0x294) = 20.0f;
            func_001A2900(func_00279290(p + 0x740), 1.0f / *(float *)(p + 0x294));
        }
        break;
    case 4:
        if (*(unsigned char *)(p + 0x28B) != k) {
            *(float *)(p + 0x294) = 0.0f;
            *(int *)(p + 0x290) = 0;
            func_001A2970(func_00279290(p + 0x740));
        }
        break;
    }
    *(unsigned char *)(p + 0x28B) = k;
}

extern char D_01CAFF0C[];

void func_002EF940();

void func_004811A0();

void func_00481240();

void func_00481490();

void func_00481570();

void func_00481620();

int func_00481C80();

int func_00481CB0();

void func_00482470();

int func_00482580();

int func_004810C0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    int tmp1;
    int tmp3;
    v0 = (char *)p0;
    func_00481C80();
    func_00481CB0(v0);
    v1 = *(signed char *)(v0 + 647);
    tmp0 = 4;
    if (v1 != tmp0) {
        if (v1 != 3) {
            tmp1 = 2;
            if (v1 != tmp1) {
                switch (v1) {
                case 0:
                    func_004811A0(v0);
                    break;
                case 1:
                    func_00481240(v0);
                    break;
                }
            } else {
                func_00481490(v0);
            }
        } else {
            func_00481570(v0);
        }
    } else {
        func_00481620(v0);
    }
    if (*(signed char *)(v0 + 647) != 4) {
        func_002EF940(*(int *)D_01CAFF0C, (v0 + 4112));
        func_00482470(v0);
    }
    tmp3 = func_00482580(v0);
    return tmp3;
}

float func_00132470();

int func_004820F0(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    float tmp2;
    v0 = p0;
    tmp2 = func_00132470(((p0 + ((*(signed char *)(p0 + 648) + 1) << 4)) + 784), (v0 + 80));
    if (tmp2 <= 100.0f) {
        v1 = (*(signed char *)(v0 + 648) + 1);
        if ((v1 < (*(signed char *)(v0 + 649) + -1))) {
            *(char *)(v0 + 648) = v1;
        } else {
            *(char *)(v0 + 641) = 1;
        }
        v2 = 1;
    } else {
        v2 = 0;
    }
    return v2;
}

extern void func_00481B70();

void func_00482980(char *p) { func_00481B70(p + -64); }

extern void func_00481C60();

void func_00482990(char *p) { func_00481C60(p + -64); }

extern void func_00482870();

void func_004829B0(char *p) { func_00482870(p + -64); }

void func_004829C0(char *p) { func_00482870(p + -160); }

void func_004829D0(char *p) { func_00482870(p + -208); }

extern void func_004827C0();

void func_004829F0(char *p) { func_004827C0(p + -304); }

void func_00482A00(char *p) { func_00482870(p + -304); }

void func_00482820(char *p) { *(char *)(p + 640) = 0; }

float func_00482850(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 672);
    *(float *)(p1 + 0) = *(float *)(p0 + 672);
    return t0;
}

float func_00482860(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 668);
    *(float *)(p1 + 0) = *(float *)(p0 + 668);
    return t0;
}
