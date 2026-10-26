#include "game/mt_rand.h"
int func_002EE580();

void func_002EE480(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    char *v3;
    int v4;
    int v5;
    v0 = p0;
    if (*(int *)(p0 + 1000) != 0) {
        v1 = mt_rand();
        v2 = v1;
        v3 = (v0 + 996);
        v4 = *(int *)(v0 + 1000);
        v5 = (((unsigned int)v2 % (unsigned int)100) + 1);
        if (v4 != 0) {
            do {
                v5 = (v5 - *(int *)(v3 + 8));
                if (v5 <= 0) {
                    v1 = func_002EE580(v0, *(signed char *)(v3 + 0), v4);
                    break;
                }
                v3 = (v3 + 12);
                v4 = *(int *)(v3 + 4);
            } while (v4 != 0);
        }
    }
}

extern void func_002EE3E0();

void func_002EEC40(char *p) { func_002EE3E0(p + -64); }

extern void func_002EE3D0();

void func_002EEC50(char *p) { func_002EE3D0(p + -64); }

extern void func_002EE2E0();

void func_002EEC60(char *p) { func_002EE2E0(p + -64); }

extern void func_002EEB50();

void func_002EEC70(char *p) { func_002EEB50(p + -64); }

void func_002EEC80(char *p) { func_002EEB50(p + -160); }

extern void func_002EE680();

void func_002EECC0(char *p) { func_002EE680(p + -208); }

void func_002EECE0(char *p) { func_002EEB50(p + -208); }

void func_002EEA90(char *p, short v) { *(short *)(p + 1102) = v; }

void func_002EE670(char *p0) {
    *(char *)(p0 + 1175) = 1;
}
