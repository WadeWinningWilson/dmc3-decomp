void func_004D9DD0(char *p) {
    void func_004D9B90(char *, int);
    void func_004D9950(char *);
    void func_004D9AC0(char *, int);
    if (*(signed char *)(p + 0x57B) != -1) {
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            *(float *)(p + 0x560) = 30.0f;
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            break;
        case 1:
            *(float *)(p + 0x560) = *(float *)(p + 0x560) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x560) < 0.0f) {
                func_004D9B90(p, 1);
                func_004D9950(p);
                *(float *)(p + 0x560) = 60.0f;
                *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            }
            break;
        case 2:
            *(float *)(p + 0x560) = *(float *)(p + 0x560) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x560) < 0.0f) {
                func_004D9AC0(p, 1);
                *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
                *(unsigned char *)(p + 5) = 0;
            }
            break;
        }
    } else {
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        *(unsigned char *)(p + 5) = 0;
    }
}

int func_004D9900(p0) int p0; {
    void func_004D9950();
    void func_004D9AC0();
    int func_004D9B90();
    int tmp0;
    func_004D9950();
    func_004D9AC0(p0, 0);
    tmp0 = func_004D9B90(p0, 0);
    *(char *)((char *)p0 + 4) = (*(unsigned char *)((char *)p0 + 4) + 1);
    *(char *)((char *)p0 + 5) = 0;
    return tmp0;
}

extern void func_004DA360();

void func_004DA420(char *p) { func_004DA360(p + -64); }

void func_004DA430(char *p) { func_004DA360(p + -160); }

extern void func_004DA340();

void func_004DA440(char *p) { func_004DA340(p + -208); }

void func_004DA470(char *p) { func_004DA360(p + -208); }

void func_004DA320(char *p) { *(char *)(p + 1404) = 0; }
