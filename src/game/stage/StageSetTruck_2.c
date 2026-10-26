void func_00105230(char *, char *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00105760(char *, char *, float);

typedef struct { float v[4]; } __attribute__((aligned(16))) V4Q;

extern V4Q D_0057BB20;

void func_00474E80(char *p, char *o) {
    V4Q t;
    char *m;
    char *e = p + *(signed char *)((char *)*(signed char *)(p + 0x19D) + (int)p + 0x13B) * 4;
    *o = *(signed char *)(e + 0xFB);
    *(float *)(o + 4) = (float)*(short *)(e + 0xFC) / 360.0f * 6.283185f;
    m = o + 0x450;
    UNIT(m);
    func_00105760(o + 0x450, o + 0x450, -1.0f * *(float *)(o + 4) * 0.5f * (float)*(signed char *)(p + 0x188));
    t = D_0057BB20;
    t.v[0] = *(float *)(p + 0xE4);
    t.v[1] = *(float *)(p + 0xE8);
    t.v[2] = *(float *)(p + 0xEC);
    func_00105230(o + 0x450, o + 0x450, t.v);
    *(signed char *)(p + 0x19D) = (*(signed char *)(p + 0x19D) + 1) % *(signed char *)(p + 0x13A);
}

extern void func_00474D30();

void func_00476C20(char *p) { func_00474D30(p + -64); }

extern void func_00476B10();

void func_00476C30(char *p) { func_00476B10(p + -64); }

void func_00476C40(char *p) { func_00476B10(p + -160); }

extern void func_00475470();

void func_00476C60(char *p) { func_00475470(p + -208); }

void func_00476C70(char *p) { func_00476B10(p + -208); }

void func_004754E0(void) {}
