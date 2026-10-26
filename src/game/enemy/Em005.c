#include "game/mt_rand.h"
int func_0034A6E0(char *p, int x) {
    float f;
    int r = 0;
    switch (x) {
    case 0:
        r = 0;
        break;
    case 1:
        r = 8;
        break;
    case 2:
        r = 0xC;
        break;
    case 3:
        if (100.0f * (2.3283064e-10f * mt_rand()) < 50.0f) r = 0;
        else r = 4;
        break;
    case 4:
        if (100.0f * (2.3283064e-10f * mt_rand()) < 50.0f) r = 0;
        else r = 8;
        break;
    case 5:
        if (100.0f * (2.3283064e-10f * mt_rand()) < 50.0f) r = 0;
        else r = 0xC;
        break;
    case 6:
        f = 100.0f * (2.3283064e-10f * mt_rand());
        if (f < 25.0f) r = 0;
        else if (f < 50.0f) r = 4;
        else if (f < 75.0f) r = 8;
        else r = 0xC;
        break;
    case 7:
        f = 100.0f * (2.3283064e-10f * mt_rand());
        if (f < 15.0f) r = 0;
        else if (f < 30.0f) r = 4;
        else if (f < 65.0f) r = 8;
        else r = 0xC;
        break;
    }
    return r;
}

void func_0034AC40(char **h) {
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

extern char D_005AD0D0[];

extern char D_005AD0F4[];

extern char D_005AD174[];

extern char D_005AD208[];

extern char D_005AD2D4[];

void func_0027CE70();

int func_003CCB00();

int func_00346CB0(p0) int p0; {
    func_0027CE70();
    *(char **)((char *)p0 + 0) = D_005AD0D0;
    *(char **)((char *)p0 + 64) = D_005AD0F4;
    *(char **)((char *)p0 + 160) = D_005AD174;
    *(char **)((char *)p0 + 208) = D_005AD208;
    *(char **)((char *)p0 + 304) = D_005AD2D4;
    func_003CCB00((p0 + 11216));
    *(int *)((char *)p0 + 11208) = 0;
    *(int *)((char *)p0 + 11504) = 0;
    *(int *)((char *)p0 + 11508) = 0;
    *(int *)((char *)p0 + 11512) = 0;
    return p0;
}

void func_00100580();

void func_0027D270();

void func_003CCB50();

int func_00346D30(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v1 = p1;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005AD0D0;
        *(char **)(v0 + 64) = D_005AD0F4;
        *(char **)(v0 + 160) = D_005AD174;
        *(char **)(v0 + 208) = D_005AD208;
        *(char **)(v0 + 304) = D_005AD2D4;
        func_003CCB50((v0 + 11216), -1);
        func_0027D270(v0, 0);
        v2 = (int)v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}

extern char D_01CAFF0C[];

int func_001AD140();

int func_002F2D30();

int func_0034A5B0(p0) int p0; {
    char *v0;
    int v1;
    int v10;
    int v11;
    int v12;
    int v13;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    v0 = (char *)p0;
    v1 = *(int *)(*(char **)D_01CAFF0C + 32);
    v2 = (int)v0;
    if (v1 != 0) {
        v10 = func_002F2D30(v1, v2);
    }
    v8 = *(int *)(v0 + 200);
    if (v8 != 0) {
        v10 = func_001AD140(v8);
        *(int *)(v0 + 200) = 0;
    }
    v11 = *(int *)(v0 + 11208);
    if (v11 != 0) {
        v10 = func_001AD140(v11);
        *(int *)(v0 + 11208) = 0;
    }
    v12 = *(int *)(v0 + 9776);
    if (v12 != 0) {
        v10 = func_001AD140(v12);
        *(int *)(v0 + 9776) = 0;
    }
    v13 = *(int *)(v0 + 9780);
    if (v13 != 0) {
        v10 = func_001AD140(v13);
        *(int *)(v0 + 9780) = 0;
    }
    v3 = *(int *)(v0 + 9872);
    if (v3 != 0) {
        v10 = func_001AD140(v3);
        *(int *)(v0 + 9872) = 0;
    }
    v4 = *(int *)(v0 + 9876);
    if (v4 != 0) {
        v10 = func_001AD140(v4);
        *(int *)(v0 + 9876) = 0;
    }
    v5 = *(int *)(v0 + 9880);
    if (v5 != 0) {
        v10 = func_001AD140(v5);
        *(int *)(v0 + 9880) = 0;
    }
    v6 = *(int *)(v0 + 9884);
    if (v6 != 0) {
        v10 = func_001AD140(v6);
        *(int *)(v0 + 9884) = 0;
    }
    v7 = *(int *)(v0 + 9888);
    if (v7 != 0) {
        v10 = func_001AD140(v7);
        *(int *)(v0 + 9888) = 0;
    }
    v9 = *(int *)(v0 + 9892);
    if (v9 != 0) {
        v10 = func_001AD140(v9);
        *(int *)(v0 + 9892) = 0;
    }
    return v10;
}

extern void func_00347320();

void func_0034AC90(char *p) { func_00347320(p + -64); }

extern void func_0034A480();

void func_0034ACC0(char *p) { func_0034A480(p + -208); }

extern void func_0034A240();

void func_0034ACD0(char *p) { func_0034A240(p + -208); }
