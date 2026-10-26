extern char *D_005BE09C;

float func_00132470(char *, float *);

static inline float lerp_3CC(float a, float b, float t) {
    return a + (b - a) * t;
}

unsigned char func_003CC9D0(char *p, unsigned char *out, float *t, float *pos) {
    float d;
    unsigned char r;
    if (*(char **)(D_005BE09C + 0x23C) == 0) return 0;
    d = func_00132470(*(char **)(D_005BE09C + 0x23C) + 0x70, pos);
    r = 0;
    if (d < 200.0f) {
        r = 1;
        if (!(d <= 150.0f)) {
            *t = (d - 150.0f) / 50.0f;
            *out = (unsigned int)lerp_3CC(48.0f, 127.0f, *t);
        } else {
            *t = 0.0f;
            *out = 0x30;
        }
    }
    return r;
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_003CC2D0(char *p) {
    *(unsigned char *)(p + 0xCD0) = 1;
    QCOPY(p + 0x50, p + 0xD10);
}

void func_001A1F90();

int func_00279290();

void func_003CC3A0(int p0) {
    int t0;
    t0 = func_00279290((p0 + 576));
    func_001A1F90(t0);
}

void func_001A1E10();

void func_003CC3D0(int p0) {
    int t0;
    t0 = func_00279290((p0 + 576));
    func_001A1E10(t0);
}

extern char D_005B0B40[];

extern char D_005B0B64[];

extern char D_005B0BE4[];

void func_00100450();

void func_0013D240();

void func_001AAD30();

void func_0024D930();

void func_0024D9A0();

int func_00252FA0();

void func_002790E0();

int func_0028C110();

int func_003CB8E0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = (char *)p0;
    func_00252FA0();
    *(char **)(v0 + 0) = D_005B0B40;
    *(char **)(v0 + 64) = D_005B0B64;
    *(char **)(v0 + 160) = D_005B0BE4;
    func_00100450((v0 + 340), (char *)func_001AAD30, (char *)func_0013D240, 16, 4);
    func_002790E0((v0 + 576));
    *(char *)(v0 + 2112) = 0;
    func_0028C110((v0 + 2240));
    func_00100450((v0 + 2784), (char *)func_0024D930, (char *)func_0024D9A0, 208, 2);
    *(char *)(v0 + 3200) = 0;
    *(char *)(v0 + 3201) = 0;
    *(short *)(v0 + 3202) = 0;
    *(int *)(v0 + 3208) = 0;
    v2 = 0;
    *(int *)(v0 + 3212) = 0;
    v3 = v0;
    *(int *)(v0 + 3216) = 0;
    *(int *)(v0 + 3232) = 0;
    *(int *)(v0 + 3236) = 0;
    *(int *)(v0 + 3240) = 0;
    *(int *)(v0 + 3244) = 0x3f800000;
    *(int *)(v0 + 3248) = 0x47c35000;
    *(char *)(v0 + 3252) = 0;
    *(char *)(v0 + 3253) = 0;
    *(short *)(v0 + 3254) = 0;
    v1 = -1;
    do {
        *(short *)(v3 + 3256) = v1;
        *(short *)(v3 + 3258) = v1;
        v2 = (v2 + 5);
        *(short *)(v3 + 3260) = v1;
        *(short *)(v3 + 3262) = v1;
        *(short *)(v3 + 3264) = v1;
        v3 = (v3 + 10);
    } while ((v2 < 10));
    *(char *)(v0 + 3376) = 0;
    return (int)v0;
}

extern void func_0024DD30();

void func_003CC390(char *p) { func_0024DD30(p + 2784); }

extern void func_003CBA00();

void func_003CCAE0(char *p) { func_003CBA00(p + -64); }

void func_003CCAF0(char *p) { func_003CBA00(p + -160); }

void func_003CC9C0(void) {}
