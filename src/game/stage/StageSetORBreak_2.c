int func_003586A0();

int func_00358000(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    v1 = 0;
    *(char *)(p0 + 2018) = 0;
    v0 = p0;
    *(int *)(p0 + 2020) = 0;
    *(int *)(p0 + 2024) = 0;
    *(char *)(p0 + 2017) = 0;
    *(int *)(p0 + 2028) = 0xbf800000;
    while ((v1 < 5)) {
        tmp0 = ((v1 << 2) + (int)v0);
        v1 = (v1 + 1);
        *(int *)((char *)tmp0 + 2032) = 0;
    }
    v2 = func_003586A0(v0);
    *(char *)(v0 + 69) = 6;
    v3 = 0;
    *(char *)(v0 + 2064) = 0;
    *(char *)(v0 + 2065) = 0;
    *(short *)(v0 + 2066) = 0;
    *(int *)(v0 + 2072) = 0;
    *(int *)(v0 + 2076) = 0;
    *(int *)(v0 + 2080) = 0;
    *(int *)(v0 + 2096) = 0;
    *(int *)(v0 + 2100) = 0;
    *(int *)(v0 + 2104) = 0;
    *(int *)(v0 + 2108) = 0x3f800000;
    *(int *)(v0 + 2112) = 0x47c35000;
    *(char *)(v0 + 2116) = 0;
    *(char *)(v0 + 2117) = 0;
    *(short *)(v0 + 2118) = 0;
    while ((v3 < 10)) {
        tmp1 = ((v3 << 1) + (int)v0);
        v3 = (v3 + 1);
        *(short *)((char *)tmp1 + 2120) = -1;
    }
    *(char *)(v0 + 2064) = 0;
    *(char *)(v0 + 2065) = 0;
    *(short *)(v0 + 2066) = 1;
    *(short *)(v0 + 2068) = 0;
    *(char **)(v0 + 2072) = v0;
    *(int *)(v0 + 2076) = 0;
    *(char **)(v0 + 2080) = (v0 + 1312);
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"((v0 + 1312)), "r"((v0 + 2096)) : "memory");
    *(int *)(v0 + 12) = (*(int *)(v0 + 12) | 32);
    return v2;
}

extern char D_005BE098;

extern char D_01CAFF0C[];

int func_00195E20();

void func_0028C5C0(char *, int, float);

void func_002EF940();

void func_003581D0();

void func_00358260();

void func_00358400();

int func_00358120(p0) int p0; {
    char *v0;
    int v1;
    int tmp0;
    int tmp4;
    v0 = (char *)p0;
    func_003581D0();
    v1 = *(unsigned char *)(v0 + 2018);
    tmp0 = 2;
    if (v1 != tmp0) {
        switch (v1) {
        case 0:
            func_0028C5C0((v0 + 1376), 0, *(float *)(v0 + 16));
            func_002EF940(*(int *)D_01CAFF0C, (v0 + 2064));
            break;
        case 1:
            func_00358260(v0);
            func_002EF940(*(int *)D_01CAFF0C, (v0 + 2064));
            break;
        }
    } else {
        func_00358400(v0);
    }
    tmp4 = func_00195E20(&D_005BE098, v0);
    return tmp4;
}

void func_00358740(p0, p1) int p0; int p1; {
    int func_00207480();
    char *v0;
    int v1;
    char *v2;
    v0 = (char *)(((p1 << 2) + p0) + 2036);
    if (*(int *)((char *)((p1 << 2) + p0) + 2036) == 0) {
        v1 = func_00207480(3, 158, (p0 + 1312), 64);
        *(int *)(v0 + 0) = v1;
        v2 = *(char **)(v0 + 0);
        if (v2 != 0) {
            *(char *)(v2 + 58) = 1;
        }
    }
}

int func_001AD140();

int func_003587C0(p0) int p0; {
    int v0;
    int v1;
    int v2;
    char *v3;
    v2 = 0;
    v3 = (char *)p0;
    do {
        v0 = *(int *)(v3 + 2032);
        if (v0 != 0) {
            v1 = func_001AD140(v0);
            *(int *)(v3 + 2032) = 0;
        }
        v2 = (v2 + 1);
        v3 = (v3 + 4);
    } while ((v2 < 5));
    return v1;
}

extern void func_00358880();

void func_00358960(char *p) { func_00358880(p + -64); }

void func_00358970(char *p) { func_00358880(p + -160); }

void func_003589A0(char *p) { func_00358880(p + -208); }

void func_00358870(char *p) { *(char *)(p + 2016) = 0; }

void func_00358860(char *p0) {
    *(char *)(p0 + 2016) = 1;
}

void func_003587A0(int p0) {
    void func_00207480();
    func_00207480(3, 164, (p0 + 1312), 64);
}
