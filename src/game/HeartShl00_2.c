void func_00104B80(char *, char *, char *);

void func_004E29F0(char *, char *, int, float);

int func_004E2930(char *o, char *m, int n) {
    float w[4];
    float v[4];
    int i;
    if (o == 0) {
        return 0;
    }
    v[2] = 250.0f;
    v[3] = 1.0f;
    v[0] = 0.0f;
    v[1] = 0.0f;
    func_00104B80((char *)w, m, (char *)v);
    for (i = 0; i < n; i++) {
        func_004E29F0(o, (char *)w, i, 15.0f + 5.0f * (float)(i + 1));
    }
    return 1;
}

void func_00131700(char *, char *, char *);

void func_00105230(char *, char *, char *);

void func_001318E0(char *, char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00104C00(char *, char *, char *);

void func_004E23D0(char *p) {
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    *(short *)(p + 0x90) = 0.5f + 65536.0f * *(float *)(p + 0x648) / 360.0f;
    t[2] = 40.0f;
    t[0] = 0.0f;
    t[1] = 0.0f;
    t[3] = 1.0f;
    r[0] = *(float *)(p + 0x644) / 360.0f * 6.283185f;
    r[1] = (float)*(short *)(p + 0x90) / 65536.0f * 6.283185f;
    r[2] = 0.0f;
    r[3] = 1.0f;
    UNIT(p + 0x680);
    func_00131700(p + 0x680, p + 0x680, (char *)r);
    func_00105230(p + 0x680, p + 0x680, (char *)t);
    func_00104C00(p + 0x680, *(char **)(p + 0x740), p + 0x680);
    UNIT(p + 0x6C0);
    func_00131700(p + 0x6C0, p + 0x6C0, (char *)r);
    func_00105230(p + 0x6C0, p + 0x6C0, (char *)t);
    func_001318E0(p + 0x6C0, p + 0x6C0, p + 0x660);
    func_00104C00(p + 0x6C0, *(char **)(p + 0x740), p + 0x6C0);
    UNIT(p + 0x700);
    func_00105230(p + 0x700, p + 0x700, p + 0x670);
}

extern char D_00578830[];

extern char D_00578870[];

void func_0028C200();

void func_0028C3A0();

void func_0028C8E0();

void func_0028C910();

void func_004E2540(p) char *p; {
    *(char *)(p + 1440) = 4;
    *(int *)(p + 1456) = 0;
    *(int *)(p + 1460) = 0;
    *(int *)(p + 1464) = 0;
    *(int *)(p + 1468) = 1065353216;
    *(int *)(p + 1472) = 0;
    *(int *)(p + 1476) = 0;
    *(int *)(p + 1480) = 1157234688;
    *(int *)(p + 1484) = 1065353216;
    *(int *)(p + 1488) = 1114636288;
    *(char *)(p + 1520) = 4;
    *(int *)(p + 1536) = 0;
    *(int *)(p + 1540) = 0;
    *(int *)(p + 1544) = 0;
    *(int *)(p + 1548) = 1065353216;
    *(int *)(p + 1552) = 0;
    *(int *)(p + 1556) = 0;
    *(int *)(p + 1560) = 1157234688;
    *(int *)(p + 1564) = 1065353216;
    *(int *)(p + 1568) = 1120403456;
    *(char *)(p + 1424) = 1;
    *(char *)(p + 1425) = 0;
    *(short *)(p + 1426) = 0;
    *(char *)(p + 1428) = 1;
    *(char *)(p + 1429) = 0;
    *(short *)(p + 1430) = 1;
    func_0028C200(p + 336, p + 1424, p + 1440, 3, D_00578830, p, 0);
    func_0028C8E0(p + 336, 0);
    func_0028C910(p + 336);
    *(int *)(p + 552) = 196673;
    func_0028C3A0(p + 336, 0, -1, p + 1664);
    func_0028C200(p + 880, p + 1424, p + 1440, 1, D_00578870, p, 0);
    func_0028C8E0(p + 880, 0);
    func_0028C910(p + 880);
    *(int *)(p + 1096) = 196868;
    func_0028C3A0(p + 880, 1, -1, p + 1664);
}

int func_004E26F0();

int func_004E2750(p0) int p0; {
    char *v0;
    int v1;
    char *v2;
    int v3;
    char *v4;
    v0 = (char *)p0;
    v1 = 0;
    v4 = v0;
    do {
        v2 = *(char **)(v4 + 460);
        if (v2 != 0) {
            if ((*(unsigned char *)(*(char **)(v2 + 260) + 0) & 0x30000) != 0) {
                if (*(unsigned char *)(v0 + 1600) == 0) {
                    *(char *)(v0 + 1600) = 1;
                    v3 = func_004E26F0(v0);
                }
            }
        }
        v1 = (v1 + 1);
        v4 = (v4 + 544);
    } while ((v1 < 2));
    return v3;
}

extern char D_005B9F20[];

extern char D_005B9F44[];

extern char D_005B9FC4[];

void func_00100450();

int func_00252FA0();

int func_0028C110();

void func_0028C1A0();

int func_004E2BC0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B9F20;
    *(char **)((char *)p0 + 64) = D_005B9F44;
    *(char **)((char *)p0 + 160) = D_005B9FC4;
    func_00100450((p0 + 400), (char *)func_0028C110, (char *)func_0028C1A0, 544, 2);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 336)) : "memory");
    *(int *)((char *)p0 + 1584) = 0;
    *(int *)((char *)p0 + 1588) = 0;
    *(int *)((char *)p0 + 1592) = 0;
    *(float *)((char *)p0 + 1596) = 0.0f;
    *(float *)((char *)p0 + 1600) = 0.0f;
    *(short *)((char *)p0 + 144) = 0;
    *(float *)((char *)p0 + 1616) = 0.0f;
    *(float *)((char *)p0 + 1620) = 0.0f;
    *(float *)((char *)p0 + 1624) = 0.0f;
    *(float *)((char *)p0 + 1628) = 1.0f;
    *(float *)((char *)p0 + 1632) = 0.0f;
    *(float *)((char *)p0 + 1636) = 0.0f;
    *(float *)((char *)p0 + 1640) = 0.0f;
    *(float *)((char *)p0 + 1644) = 1.0f;
    *(float *)((char *)p0 + 1648) = 0.0f;
    *(float *)((char *)p0 + 1652) = 0.0f;
    *(float *)((char *)p0 + 1656) = 0.0f;
    *(float *)((char *)p0 + 1660) = 1.0f;
    *(char *)((char *)p0 + 1664) = 1;
    return p0;
}

extern void func_004E1E90();

void func_004E2900(char *p) { func_004E1E90(p + -64); }
