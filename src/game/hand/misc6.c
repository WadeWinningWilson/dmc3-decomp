/* Hand-matched functions (sixth file: its callee declarations differ from the others). */

extern char D_00666710[];
extern char D_0066671A[];
extern char D_01DFC180[];
int func_001AE770();
int func_002D9EB0();
void func_004BD3C0(char *, int, short, int, unsigned char, unsigned char);

int func_0026E400(char *p0) {
    char *v0;
    unsigned char v1;
    int v2;
    char *v3;
    int v4;
    char *v5;
    int tmp5;
    int tmp11;
    v0 = p0;
    v1 = 0;
    if ((*(unsigned char *)(p0 + 32663) < *(unsigned char *)(p0 + 32664))) {
        *(float *)(v0 + 32672) -= *(float *)(v0 + 16);
        if (*(float *)(v0 + 32672) <= 0.0f) {
            *(float *)(v0 + 32672) = *(float *)(v0 + 32668);
            *(char *)(v0 + 32665) = (*(unsigned char *)(v0 + 32665) + 1);
            if (*(unsigned char *)(v0 + 32665) > 10) {
                *(char *)(v0 + 32665) = 0;
            }
            if (*(unsigned char *)(v0 + 10648) == 83) {
                v1 = 1;
            }
            *(char *)(v0 + 32663) = (*(unsigned char *)(v0 + 32663) + 1);
            tmp5 = func_002D9EB0(v0);
            func_004BD3C0(v0, *(int *)(*(char **)((char *)((tmp5 << 2) + (int)v0) + 4996) + 260), *(short *)(v0 + 144), *(signed char *)(v0 + 32663), *(unsigned char *)(v0 + 212), v1);
        }
    }
    if (*(unsigned char *)(v0 + 32662) == 5) {
        v4 = 0;
        v5 = (D_01DFC180 + (*(unsigned char *)(v0 + 212) * 10));
        do {
            *(char *)(v5 + 0) = 1;
            *(char *)(v5 + 1) = 1;
            v4 = (v4 + 5);
            *(char *)(v5 + 2) = 1;
            *(char *)(v5 + 3) = 1;
            *(char *)(v5 + 4) = 1;
            v5 = (v5 + 5);
        } while ((v4 < 10));
        return (*(unsigned char *)(v0 + 32663) < *(unsigned char *)(v0 + 32664));
    } else {
        tmp11 = func_001AE770(D_00666710, 16);
        if ((*(unsigned short *)(v0 + 18880) & *(unsigned short *)((D_0066671A + ((tmp11 & 65535) << 1)) + 0))) {
            return 1;
        } else {
            v2 = 0;
            v3 = (D_01DFC180 + (*(unsigned char *)(v0 + 212) * 10));
            do {
                *(char *)(v3 + 0) = 1;
                *(char *)(v3 + 1) = 1;
                v2 = (v2 + 5);
                *(char *)(v3 + 2) = 1;
                *(char *)(v3 + 3) = 1;
                *(char *)(v3 + 4) = 1;
                v3 = (v3 + 5);
            } while ((v2 < 10));
            return 0;
        }
    }
}
