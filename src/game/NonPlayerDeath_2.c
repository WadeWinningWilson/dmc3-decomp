void func_00286040(char **h) {
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

void func_00286090(char **h) {
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

void func_002860E0(char **h) {
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

extern void func_0027D270();

void func_00286170(char *p) { func_0027D270(p + -64); }

void func_00286180(char *p) { func_0027D270(p + -160); }

extern void func_00281CB0();

void func_00286190(char *p) { func_00281CB0(p + -208); }

extern void func_0027D780();

void func_002861E0(char *p) { func_0027D780(p + -208); }

extern void func_0027D5B0();

void func_00286210(char *p) { func_0027D5B0(p + -208); }

extern void func_0027D540();

void func_00286220(char *p) { func_0027D540(p + -208); }

void func_00286230(char *p) { func_0027D270(p + -208); }

void func_00286240(char *p) { func_0027D270(p + -304); }

extern void func_0027D7A0();

void func_002861D0(char *p) { func_0027D7A0(p + -208); }

float func_002839A0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 9056);
    *(float *)(p1 + 0) = *(float *)(p0 + 9056);
    return t0;
}

float func_002839B0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 9012);
    *(float *)(p1 + 0) = *(float *)(p0 + 9012);
    return t0;
}
