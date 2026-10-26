void func_0038FE50(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

int func_001AD140();

int func_0038D250();

int func_0038D070(p0) char *p0; {
    int v0;
    int v1;
    *(int *)(p0 + 272) = (*(int *)(p0 + 272) | 8);
    v1 = func_0038D250();
    v0 = (int)p0;
    if ((v1 & 255) == 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

extern void func_0038EAA0();

void func_0038FEC0(char *p) { func_0038EAA0(p + -64); }

extern void func_0038EB10();

void func_0038FEE0(char *p) { func_0038EB10(p + -64); }

extern void func_0038FCE0();

void func_0038FF20(char *p) { func_0038FCE0(p + -64); }

void func_0038FF30(char *p) { func_0038FCE0(p + -160); }

void func_0038FF40(char *p) { func_0038FCE0(p + -208); }

extern void func_0038E9E0();

void func_0038FF60(char *p) { func_0038E9E0(p + -304); }

extern void func_0038E8F0();

void func_0038FF70(char *p) { func_0038E8F0(p + -304); }

void func_0038FF90(char *p) { func_0038EB10(p + -304); }

void func_0038FFC0(char *p) { func_0038FCE0(p + -304); }

void func_0038FFD0(char *p) { func_0038FCE0(p + -464); }

void func_0038EA90(void) {}

void func_0038EB00(void) {}

float func_0038EBA0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 1080) = *(float *)(p1 + 44);
    return t0;
}

float func_0038FCC0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 1052);
    *(float *)(p1 + 0) = *(float *)(p0 + 1052);
    return t0;
}

float func_0038FCD0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 3940);
    *(float *)(p1 + 0) = *(float *)(p0 + 3940);
    return t0;
}
