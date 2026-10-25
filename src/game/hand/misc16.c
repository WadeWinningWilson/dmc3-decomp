/* Hand-matched functions whose callee prototypes conflict with misc3-15 (part 3). */

typedef struct { signed char a; signed char b; signed char c; signed char d; signed char e; signed char f; signed char g; char pad; float fl; signed char c0; signed char c1; signed char c2; signed char c3; signed char c4; char pad2[3]; } T3E6;
extern T3E6 D_00569A20[];
extern float D_00570108[];
extern float D_0057010C[];
extern float D_00570204[];
extern float D_00570208[];
extern float D_005700B4[];
extern float D_005700B8[];
extern float D_005701B0[];
extern float D_005701B4[];
extern float D_00570060[];
extern float D_00570064[];
extern float D_0057015C[];
extern float D_00570160[];
void func_0024DB10(char *, int, int, int, int, int, int);
void func_0024DA80(char *, int, int);

#define T3 D_00569A20[*(int *)(p + 0x1F94)]
#define SETF(A, B, CMP) a = A[0]; *(float *)(p + 0x30A0) = a; b = B[0]; *(float *)(p + 0x30A4) = b; if (*(unsigned char *)(p + 0x3BF9) != CMP) { *(float *)(p + 0x3120) = a; *(float *)(p + 0x3124) = b; }

void func_003E6750(char *p, int k, int bl, int x) {
    float a;
    float b;
    *(int *)(p + 0x1F94) = k;
    if (bl != 0) {
        func_0024DB10(p + 0x1FD0, T3.a, T3.b, -1, -1, -1, x);
        func_0024DB10(p + 0x20A0, T3.a, T3.b, -1, -1, -1, x);
    } else {
        func_0024DA80(p + 0x1FD0, T3.a, T3.b);
        func_0024DA80(p + 0x20A0, T3.a, T3.b);
    }
    if (T3.g != 0) *(float *)(p + 0x3934) = 1.0f;
    else *(float *)(p + 0x3934) = 0.0f;
    *(unsigned char *)(p + 0x3A50) = T3.f != 0;
    *(signed char *)(p + 0x1FC4) = T3.c;
    *(signed char *)(p + 0x1FC5) = T3.d;
    *(signed char *)(p + 0x1FC6) = T3.e;
    *(float *)(p + 0x3A04) = T3.fl;
    *(float *)(p + 0x2170) = 1.0f;
    *(signed char *)(p + 0x3434) = T3.c0;
    *(signed char *)(p + 0x3436) = T3.c1;
    *(signed char *)(p + 0x3435) = T3.c2;
    *(signed char *)(p + 0x3437) = T3.c3;
    *(signed char *)(p + 0x3438) = T3.c4;
    if (*(unsigned char *)(p + 0x3435) == 3 || *(unsigned char *)(p + 0x3434) == 1) {
        switch (k) {
        case 0x1C:
        case 0x1B:
        case 0x15:
        case 0x14:
        case 0x13:
        case 0x20:
            switch (*(signed char *)(p + 0x1FC9)) {
            case 0:
                SETF(D_00570108, D_0057010C, 2)
                break;
            case 1:
                SETF(D_00570204, D_00570208, 2)
                break;
            }
            *(unsigned char *)(p + 0x3BF9) = 2;
            break;
        default:
            switch (*(signed char *)(p + 0x1FC9)) {
            case 0:
                SETF(D_005700B4, D_005700B8, 1)
                break;
            case 1:
                SETF(D_005701B0, D_005701B4, 1)
                break;
            }
            *(unsigned char *)(p + 0x3BF9) = 1;
            break;
        }
    } else {
        switch (*(signed char *)(p + 0x1FC9)) {
        case 0:
            SETF(D_00570060, D_00570064, 0)
            break;
        case 1:
            SETF(D_0057015C, D_00570160, 0)
            break;
        }
        *(unsigned char *)(p + 0x3BF9) = 0;
    }
}
