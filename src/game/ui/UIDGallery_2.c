char *func_00207480(int, int, float *, int);

void func_00105230(float *, float *, char *);

void func_00104B80(char *, float *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00131700(float *, float *, float *);

void func_0050DB70(char *, float *, int);

int func_0050DA50(char *o, char *m, int c) {
    float w[4];
    float v[4];
    float r[4];
    float mm[16];
    int i;
    if (o == 0) {
        return 0;
    }
    v[0] = -54.0f;
    v[3] = 1.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    func_00104B80((char *)w, (float *)m, v);
    w[3] = 1.0f;
    UNIT(mm);
    r[0] = -1.5707963f;
    r[3] = 1.0f;
    r[1] = 0.0f;
    r[2] = 0.0f;
    func_00131700(mm, mm, r);
    func_00105230(mm, mm, (char *)w);
    func_00207480(3, 0x394, mm, 8);
    for (i = 0; i < 2; i++) {
        func_0050DB70(o, w, c);
    }
    return 1;
}

extern char D_005BB590[];

extern char D_005BB5B4[];

extern char D_005BB634[];

int func_00252FA0();

int func_0028C110();

int func_0050DCF0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005BB590;
    *(char **)((char *)p0 + 64) = D_005BB5B4;
    *(char **)((char *)p0 + 160) = D_005BB634;
    func_0028C110((p0 + 400));
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 336)) : "memory");
    *(int *)((char *)p0 + 1120) = 0;
    *(int *)((char *)p0 + 1124) = 0;
    *(int *)((char *)p0 + 1128) = 0;
    *(float *)((char *)p0 + 1132) = 0.0f;
    *(float *)((char *)p0 + 1136) = 0.0f;
    *(float *)((char *)p0 + 1152) = 0.0f;
    *(float *)((char *)p0 + 1156) = 0.0f;
    *(float *)((char *)p0 + 1160) = 0.0f;
    *(float *)((char *)p0 + 1164) = 1.0f;
    *(char *)((char *)p0 + 1168) = 1;
    *(char *)((char *)p0 + 1169) = 0;
    return p0;
}
