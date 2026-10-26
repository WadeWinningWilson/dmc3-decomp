void func_00278060(char *p, char *q);

extern char D_01DF5D20[];

float func_001F9C40(char *, int);

extern int D_01CAFF14[];

int func_00277EF0(char *, float);

void func_0024F380(char *p) {
    void func_0024F480(char *, int);
    float s = func_001F9C40(D_01DF5D20, 0x87);
    float f = *(float *)(p + 0x10) * s;
    if (*(unsigned char *)(p + 0x20) == 1) {
        if ((unsigned char)func_00277EF0(p + 0x30, f) == 1) {
            func_00278060(p + 0x30, ((char **)D_01CAFF14)[0]);
        } else {
            switch (*(unsigned char *)(p + 0x120)) {
            case 0:
                *(unsigned char *)(p + 0x20) = 0;
                break;
            case 1:
                func_0024F480(p, 0);
                break;
            case 2:
                if (*(unsigned char *)(p + 0x21) == 0) {
                    func_0024F480(p, 1);
                } else {
                    func_0024F480(p, 0);
                }
                break;
            }
        }
    }
}

void func_00277DA0(char *);

void func_00277DE0(char *, int, float *, int);

int func_0024F2E0(char *p) {
    void func_0024F480(char *p, int sel);
    float m[16] __attribute__((aligned(16)));
    float f = *(float *)(p + 0x10) < 0.0f ? -*(float *)(p + 0x10) : *(float *)(p + 0x10);
    if (f < 0.0001f) return 0;
    func_00277DA0(p + 0x30);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00277DE0(p + 0x30, (int)(p + 0x40), m, 0);
    func_0024F480(p, 0);
    return 1;
}

float func_0024F680(p0) char *p0; {
    float v0;
    int tmp0;
    tmp0 = *(unsigned char *)(p0 + 288);
    if (tmp0 == 0) {
        v0 = *(float *)(p0 + 292);
    } else {
        v0 = 100000.0f;
    }
    return v0;
}

void func_0024F470(void) {}
