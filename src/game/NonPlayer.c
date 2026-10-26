int func_00250030(char *p) {
    return *(float *)(p + 0xF4) > 0.0f;
}

int func_00250060(char *p) {
    float a = *(float *)(p + 0xF0);
    if (!(a <= 1.0f) || a < -1.0f) {
        return 1;
    }
    a = *(float *)(p + 0xF8);
    if (!(a <= 1.0f) || a < -1.0f) {
        return 1;
    }
    return 0;
}

short func_00131D10(float, float);

short func_002500D0(char *p) {
    return func_00131D10(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
}

extern int D_005BE09C;

void func_001ACCF0(int, float, float, float, float);

void func_002500E0(char *p) {
    func_001ACCF0(D_005BE09C, *(float *)(p + 0x50), 100.0f + *(float *)(p + 0x54), *(float *)(p + 0x58), 1.0f);
}

void func_00100580(char *);

extern char D_005A7D90[];

extern char D_005A7DB4[];

extern char D_005A7E34[];

extern char D_005A7EC8[];

void func_0024FDB0(char *, int);

char *func_0024F810(char *, short);

char *func_0024FEA0(char *p, short flags) {
    if (p) {
        *(char **)p = D_005A7D90;
        *(char **)(p + 0x40) = D_005A7DB4;
        *(char **)(p + 0xA0) = D_005A7E34;
        *(char **)(p + 0xD0) = D_005A7EC8;
        func_0024FDB0(p + 0xD0, 0);
        func_0024F810(p, 0);
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

typedef struct { float v[4]; } F4;

int func_002529A0(char *p, int k, float *out, float *r) {
    switch (k) {
    case 0:
        *(F4 *)out = *(F4 *)(p + 0x50);
        *r = 100.0f;
        return 1;
    case 1:
        *(F4 *)out = *(F4 *)(p + 0x50);
        out[1] = out[1] + 100.0f;
        *r = 100.0f;
        return 1;
    }
    return 0;
}

extern unsigned char D_01CAFF3C[];

extern unsigned char D_01CAFF3D[];

float func_00250380(char *p, unsigned int n) {
    float f = (float)n;
    switch (*(unsigned char *)(p + 0x100)) {
    case 7: f *= 25.0f; break;
    case 6: f *= 22.5f; break;
    case 5: f *= 20.0f; break;
    case 4: f *= 15.0f; break;
    case 3: f *= 12.5f; break;
    case 2: f *= 10.0f; break;
    case 1: f *= 7.5f; break;
    case 0: f *= 5.0f; break;
    }
    if (D_01CAFF3D[0]) {
        f *= 0.1f;
    } else {
        switch (D_01CAFF3C[0]) {
        case 4: f *= 2.0f; break;
        case 3: f *= 1.5f; break;
        case 2: f *= 1.2f; break;
        case 1: break;
        case 0: f *= 0.5f; break;
        }
    }
    f *= 0.01f;
    return f;
}

void func_0024F750();

void func_0024FD80();

int func_0024FE00(p0) int p0; {
    func_0024F750();
    func_0024FD80((p0 + 208));
    *(char **)((char *)p0 + 0) = D_005A7D90;
    *(char **)((char *)p0 + 64) = D_005A7DB4;
    *(char **)((char *)p0 + 160) = D_005A7E34;
    *(char **)((char *)p0 + 208) = D_005A7EC8;
    *(int *)((char *)p0 + 276) = 0;
    *(int *)((char *)p0 + 280) = 0;
    *(int *)((char *)p0 + 284) = 0;
    *(char *)((char *)p0 + 288) = -1;
    *(int *)((char *)p0 + 292) = 0x43480000;
    *(int *)((char *)p0 + 296) = 0x43160000;
    *(char *)((char *)p0 + 300) = 127;
    *(char *)((char *)p0 + 301) = 48;
    *(int *)((char *)p0 + 272) = 0;
    return p0;
}

extern char D_01CAFF0C[];

int func_002D90A0();

int func_00250170(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(signed char *)(p0 + 288);
    if (v0 != -1) {
        v1 = func_002D90A0(*(int *)((char (*)[4])((char *)*(int *)D_01CAFF0C + 12))[(v0 & 255)]);
    }
    return v1;
}

extern void func_001AD140();

void func_0024FFC0(void) { func_001AD140(); }

extern void func_00252B10();

void func_00252CD0(char *p) { func_00252B10(p + -64); }

extern void func_00252AE0();

void func_00252CE0(char *p) { func_00252AE0(p + -64); }

extern void func_00252AB0();

void func_00252CF0(char *p) { func_00252AB0(p + -64); }

extern void func_00252A70();

void func_00252D00(char *p) { func_00252A70(p + -64); }

extern void func_00252A40();

void func_00252D10(char *p) { func_00252A40(p + -64); }

extern void func_00252990();

void func_00252D30(char *p) { func_00252990(p + -64); }

extern void func_00252950();

void func_00252D40(char *p) { func_00252950(p + -64); }

extern void func_00252910();

void func_00252D50(char *p) { func_00252910(p + -64); }

extern void func_002528D0();

void func_00252D60(char *p) { func_002528D0(p + -64); }

extern void func_00252890();

void func_00252D70(char *p) { func_00252890(p + -64); }

extern void func_00252850();

void func_00252D80(char *p) { func_00252850(p + -64); }

extern void func_00252810();

void func_00252D90(char *p) { func_00252810(p + -64); }

extern void func_002527D0();

void func_00252DA0(char *p) { func_002527D0(p + -64); }

extern void func_00252790();

void func_00252DB0(char *p) { func_00252790(p + -64); }

extern void func_00252750();

void func_00252DC0(char *p) { func_00252750(p + -64); }

extern void func_00252710();

void func_00252DD0(char *p) { func_00252710(p + -64); }

extern void func_002526D0();

void func_00252DE0(char *p) { func_002526D0(p + -64); }

extern void func_00252680();

void func_00252DF0(char *p) { func_00252680(p + -64); }

extern void func_00252640();

void func_00252E00(char *p) { func_00252640(p + -64); }

extern void func_00252600();

void func_00252E10(char *p) { func_00252600(p + -64); }

extern void func_002525C0();

void func_00252E40(char *p) { func_002525C0(p + -208); }

extern void func_00250520();

void func_00252E50(char *p) { func_00250520(p + -208); }

extern void func_00250150();

void func_00252E70(char *p) { func_00250150(p + -208); }

extern void func_00250140();

void func_00252E80(char *p) { func_00250140(p + -208); }

extern void func_00250130();

void func_00252E90(char *p) { func_00250130(p + -208); }

extern void func_00250120();

void func_00252EA0(char *p) { func_00250120(p + -208); }

extern void func_00250110();

void func_00252EB0(char *p) { func_00250110(p + -208); }

extern void func_00250020();

void func_00252F00(char *p) { func_00250020(p + -208); }

extern void func_00250010();

void func_00252F10(char *p) { func_00250010(p + -208); }

extern void func_00250000();

void func_00252F20(char *p) { func_00250000(p + -208); }

extern void func_0024FFF0();

void func_00252F30(char *p) { func_0024FFF0(p + -208); }

extern void func_0024FFE0();

void func_00252F40(char *p) { func_0024FFE0(p + -208); }

extern void func_0024FFD0();

void func_00252F50(char *p) { func_0024FFD0(p + -208); }

extern void func_0024FF80();

void func_00252F70(char *p) { func_0024FF80(p + -208); }

extern void func_0024FF40();

void func_00252F80(char *p) { func_0024FF40(p + -208); }

void func_002501B0(char *p, int v) { *(int *)(p + 284) = v; }

void func_00252B50(char *p0, int p1, int p2, float f0, float f1) {
    *(float *)(p0 + 292) = f0;
    *(float *)(p0 + 296) = f1;
    *(char *)(p0 + 300) = p1;
    *(char *)(p0 + 301) = p2;
}
