#include "game/mt_rand.h"
void func_002EF940(int, char *);

short func_0034B940(char *, char *);

/* Pushes flagged entries up along their velocity once the player is above them. */
extern char D_01CAFF0C[];

float func_00132470(char *, float *);

void func_003C5480(char *, float *, int);

void func_003DC100(char *, float *);

void func_003DBE50(char *p) {
    void func_0034BA60(int, char *, int, int, int);
    float v[4] __attribute__((aligned(16)));
    char *q;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0034BA60(0x4D, p + 0x50, 0x35, 0, 1);
        if (mt_rand() & 1) {
            func_0034BA60(0x4E, p + 0x50, 0x35, 0, 1);
        }
    case 1:
        if (*(unsigned char *)(p + 0xEFC) == 1) {
        q = *(char **)(p + 0x308);
        if (q != 0) {
            if (*(unsigned char *)(q + 0x1CE1) == 1) {
                func_003C5480(q, v, *(unsigned char *)(p + 0xF00));
                if ((*(float *)(p + 0xEEC) -= *(float *)(p + 0x10)) < 0.0f) {
                    *(float *)(p + 0xEEC) = 10.0f;
                    func_0034BA60(0x4A, p + 0x50, 0x35, 0, 1);
                }
                if (mt_rand() % 60 == 0) {
                    func_0034BA60(0x4B, p + 0x50, 0x35, 0, 1);
                }
            } else {
                *(unsigned char *)(p + 0xF05) = 1;
            }
        }
        } else {
            return;
        }
        if (!(func_00132470((char *)v, (float *)(p + 0x50)) <= 100.0f)) {
            func_003DC100(p, v);
        }
        *(float *)(p + 0x54) = 110.0f;
        *(short *)(p + 0x90) = func_0034B940(((char **)(*(char **)D_01CAFF0C + 0xC))[*(unsigned char *)(p + 0xF02)] + 0x50, p + 0x50);
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0xAF0);
}

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

void func_0028C790(char *, int);

extern char D_00586E20[];

void func_003DD4D0(char *p) {
    char *q;
    func_0028C790(p + 0xBD0, 0);
    func_0028C790(p + 0xBD0, 1);
    func_0028C200(p + 0xBD0, p + 0xDF0, p + 0xE00, 2, D_00586E20, p, 0);
    func_0028C8E0(p + 0xBD0, 0);
    func_0028C910(p + 0xBD0);
    *(unsigned char *)(p + 0xDF0) = 6;
    *(unsigned char *)(p + 0xDF1) = 0;
    *(short *)(p + 0xDF2) = 0;
    *(unsigned char *)(p + 0xE00) = 2;
    *(int *)(p + 0xE10) = 0;
    *(int *)(p + 0xE14) = 0;
    *(int *)(p + 0xE18) = 0;
    *(float *)(p + 0xE1C) = 1.0f;
    *(float *)(p + 0xE20) = 40.0f;
    func_0028C3A0(p + 0xBD0, 0, -1, p + 0x9A0);
    q = *(char **)(p + 0xC4C);
    if (q != 0) {
        *(int *)(q + 0xC) = *(int *)(q + 0xC) & 0xFFFCFFFF;
    }
}

char *func_00279290(char *);

void func_001A2970(char *);

void func_001A2900(char *, float);

void func_001A2840(char *, int, float);

void func_003DA500(char *p, unsigned char m) {
    switch (m) {
    case 0:
        *(int *)(p + 0xEF0) = 0;
        *(unsigned int *)(p + 0xEF4) = 0xD00000D0;
        func_001A2840(func_00279290(p + 0x340), *(int *)(p + 0xEF4), 1.0f);
        break;
    case 1:
        if (*(unsigned char *)(p + 0xEF8) == m) break;
        *(float *)(p + 0xEF0) = 60.0f;
        func_001A2900(func_00279290(p + 0x340), 1.0f / *(float *)(p + 0xEF0));
        break;
    case 2:
        if (*(unsigned char *)(p + 0xEF8) == m) break;
        *(int *)(p + 0xEF0) = 0;
        *(int *)(p + 0xEF4) = 0;
        func_001A2970(func_00279290(p + 0x340));
        break;
    }
    *(unsigned char *)(p + 0xEF8) = m;
}

void func_003DADF0(char *);

void func_003DAE30(char *);

void func_003DAC90(char *);

void func_003DABD0(char *p) {
    switch (*(unsigned char *)(p + 0xEFD)) {
    case 0: case 2: case 3: case 4: case 6: case 7: case 8: case 9:
        if (*(unsigned char *)(p + 0xEFC) == 1) {
            if (*(char **)(p + 0x308)) {
                if (*(unsigned char *)(*(char **)(p + 0x308) + 0x1CE1) == 1) func_003DAE30(p);
                else func_003DAC90(p);
            } else {
                func_003DAC90(p);
            }
        } else {
            func_003DAC90(p);
        }
        break;
    case 1:
        func_003DADF0(p);
        break;
    case 5:
        func_003DAE30(p);
        break;
    case 10:
        break;
    }
}

void func_003DB5A0(char *p);

void func_003DB6C0(char *p);

void func_003DB8C0(char *);

void func_003DB7E0(char *);

void func_003DB220(char *);

void func_003DBA00(char *);

void func_003DAEC0(char *);

void func_003DA9C0(char *p) {
    if (*(unsigned char *)(p + 0xF07)) {
        switch (*(unsigned char *)(p + 0xEFD)) {
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
            func_003DB8C0(p);
            break;
        case 10:
            break;
        }
    }     else if (*(unsigned char *)(p + 0xF0A)) {
        switch (*(unsigned char *)(p + 0xEFD)) {
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 9:
            func_003DB7E0(p);
            break;
        case 8: case 10:
            break;
        }
    }     else if (*(unsigned char *)(p + 0xF09)) {
        switch (*(unsigned char *)(p + 0xEFD)) {
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 8: case 9:
            func_003DB6C0(p);
            break;
        case 7: case 10:
            break;
        }
    }     else if (*(unsigned char *)(p + 0xF08)) {
        switch (*(unsigned char *)(p + 0xEFD)) {
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 9:
            func_003DB5A0(p);
            break;
        case 7: case 8: case 10:
            break;
        }
    }     else if (*(unsigned char *)(p + 0xF0D)) {
        switch (*(unsigned char *)(p + 0xEFD)) {
        case 1:
            func_003DB220(p);
            break;
        case 0: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
            break;
        }
    }     else if (*(unsigned char *)(p + 0xF0B)) {
        switch (*(unsigned char *)(p + 0xEFD)) {
        case 0: case 1: case 2: case 3: case 4: case 5: case 9:
            func_003DBA00(p);
            break;
        case 6: case 7: case 8: case 10:
            break;
        }
    }     else if (*(unsigned char *)(p + 0xF0C)) {
        switch (*(unsigned char *)(p + 0xEFD)) {
        case 0: case 1: case 2:
            func_003DAEC0(p);
            break;
        case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
            break;
        }
    }
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005B1840[];

void func_00100450();

void func_0013D6A0();

void func_002791E0();

char * func_003DE040(p) char *p; {
    *(char * *)(p) = D_005A6F50;
    func_0013D6A0(p + 36);
    *(int *)(p + 32) = 0;
    *(int *)(p + 28) = 0;
    *(char *)(p + 7) = 0;
    *(char *)(p + 6) = 0;
    *(char *)(p + 5) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 24) = 0;
    *(int *)(p + 8) = 0;
    *(char *)(p + 52) = -1;
    *(char *)(p + 53) = 0;
    *(char *)(p + 54) = 0;
    *(int *)(p + 12) = 135;
    *(int *)(p + 16) = 1065353216;
    *(int *)(p + 20) = 1065353216;
    *(char * *)(p) = D_005B1840;
    func_00100450(p + 64, (void *)func_002790E0, (void *)func_002791E0, 1536, 10, 135);
    *(char *)(p + 15424) = 0;
    *(int *)(p + 56) = 0;
    *(char *)(p + 15616) = 0;
    *(char *)(p + 15617) = 0;
    *(char *)(p + 15618) = 0;
    *(char *)(p + 15619) = -1;
    *(char *)(p + 15620) = 0;
    *(short *)(p + 15628) = 0;
    *(short *)(p + 15626) = 0;
    *(short *)(p + 15624) = 0;
    *(short *)(p + 15622) = 0;
    *(short *)(p + 15632) = 0;
    *(short *)(p + 15630) = 0;
    return p;
}

void func_003DB330();

void func_003DB0B0(p0) char *p0; {
    int func_0034BA60();
    int v0;
    char *v1;
    int v2;
    int v3;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 3837);
    v1 = p0;
    if (v0 != 4) {
        *(char *)(v1 + 3837) = 4;
        *(char *)(v1 + 5) = 0;
        func_003DB330(p0, v0);
        *(char *)(v1 + 481) = 1;
        v3 = mt_rand();
        v2 = (v3 & 3);
        tmp0 = 3;
        if (v2 != tmp0) {
            switch (v2) {
            case 0:
                v3 = func_0034BA60(70, (v1 + 80), 53, 0, 1);
                break;
            case 1:
                v3 = func_0034BA60(71, (v1 + 80), 53, 0, 1);
                break;
            case 2:
                v3 = func_0034BA60(72, (v1 + 80), 53, 0, 1);
                break;
            }
        } else {
            v3 = func_0034BA60(73, (v1 + 80), 53, 0, 1);
        }
    }
}

extern void func_003DC730();

void func_003DCAF0(void) { func_003DC730(); }

extern void func_003DD7E0();

void func_003DDE40(char *p) { func_003DD7E0(p + -64); }

extern void func_003DDC80();

void func_003DDE70(char *p) { func_003DDC80(p + -64); }

void func_003DDE80(char *p) { func_003DDC80(p + -160); }

void func_003DDE90(char *p) { func_003DDC80(p + -208); }

extern void func_003DD700();

void func_003DDEA0(char *p) { func_003DD700(p + -304); }

extern void func_003DD8E0();

void func_003DDEB0(char *p) { func_003DD8E0(p + -304); }

extern void func_003DD840();

void func_003DDEC0(char *p) { func_003DD840(p + -304); }

void func_003DDEF0(char *p) { func_003DDC80(p + -304); }

void func_003DDF10(char *p) { func_003DDC80(p + -464); }

void func_003DD7D0(void) {}

signed char func_003DDC70(char *p) { return *(signed char *)(p + 481); }

float func_003DDB00(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 3816) = *(float *)(p1 + 44);
    return t0;
}

float func_003DDC50(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 3776);
    *(float *)(p1 + 0) = *(float *)(p0 + 3776);
    return t0;
}

float func_003DDC60(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 2884);
    *(float *)(p1 + 0) = *(float *)(p0 + 2884);
    return t0;
}
