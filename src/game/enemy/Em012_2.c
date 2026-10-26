short func_00131D10(float, float);

#define VSUBR(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

short func_003C0350(char *p, char *q) {
    float d[4];
    VSUBR(d, q, p + 0x50);
    return func_00131D10(d[0], d[2]);
}

void func_003C04A0(char *, int, int);

void func_003BE540(char *p, unsigned char k) {
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 0x2730) = k;
    switch (*(unsigned char *)(p + 0x2730)) {
    case 0: case 1: case 2: func_003C04A0(p, 0, 0); break;
    case 3: func_003C04A0(p, 0, 1); break;
    case 7: func_003C04A0(p, 0, 0); break;
    case 5: func_003C04A0(p, 0, 0); break;
    case 6: func_003C04A0(p, 0, 0); break;
    case 4: func_003C04A0(p, 0, 0); break;
    case 8: func_003C04A0(p, 1, 0); break;
    case 9: func_003C04A0(p, 2, 1); break;
    case 10: func_003C04A0(p, 3, 0); break;
    case 12: func_003C04A0(p, 2, 0); break;
    case 11: case 13: break;
    }
}

extern void func_001AD140();

void func_003C0500(void) { func_001AD140(); }

extern void func_003BC580();

void func_003C0FD0(char *p) { func_003BC580(p + -64); }

extern void func_003C0920();

void func_003C0FE0(char *p) { func_003C0920(p + -64); }

extern void func_003C0890();

void func_003C1000(char *p) { func_003C0890(p + -64); }

extern void func_003BBFF0();

void func_003C1020(char *p) { func_003BBFF0(p + -64); }

void func_003C1030(char *p) { func_003BBFF0(p + -160); }

void func_003C1040(char *p) { func_003BBFF0(p + -208); }

extern void func_003C05E0();

void func_003C1060(char *p) { func_003C05E0(p + -304); }

extern void func_003C0520();

void func_003C1070(char *p) { func_003C0520(p + -304); }

void func_003C1090(char *p) { func_003C0890(p + -304); }

void func_003C10B0(char *p) { func_003BBFF0(p + -304); }

void func_003C1140(char *p) { func_003BBFF0(p + -464); }

unsigned char func_003C0440(char *p) { return *(unsigned char *)(p + 10032); }

signed char func_003C0450(char *p) { return *(signed char *)(p + 10033); }

signed char func_003C0460(char *p) { return *(signed char *)(p + 10034); }

signed char func_003C0470(char *p) { return *(signed char *)(p + 10035); }

signed char func_003C0480(char *p) { return *(signed char *)(p + 10036); }

signed char func_003C0490(char *p) { return *(signed char *)(p + 10037); }

void func_003BD8A0(char *p0, int p1) {
    *(char *)(p0 + 10038) = p1;
    *(char *)(p0 + 10042) = 0;
    *(char *)(p0 + 10041) = 0;
    *(char *)(p0 + 10040) = 0;
    *(char *)(p0 + 10039) = 0;
}

float func_003C0510(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 7056) = *(float *)(p1 + 44);
    return t0;
}

float func_003C0910(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 6820);
    *(float *)(p1 + 0) = *(float *)(p0 + 6820);
    return t0;
}
