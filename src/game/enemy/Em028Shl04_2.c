void func_00131700(char *, char *, char *);

void func_00105230(char *, char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00407BF0(char *p) {
    float v[4];
    v[0] = 0.0f;
    v[1] = 6.283185f * ((float)*(short *)(p + 0x428) / 65536.0f);
    v[2] = 0.0f;
    v[3] = 1.0f;
    UNIT(p + 0x3E0);
    func_00131700(p + 0x3E0, p + 0x3E0, (char *)v);
    func_00105230(p + 0x3E0, p + 0x3E0, p + 0x50);
}

extern char D_00568D20[];

void func_0028C200();

void func_0028C3A0();

void func_0028C8E0();

void func_0028C910();

void func_00407B40(p) char *p; {
    func_0028C200(p + 336, p + 880, p + 896, 3, D_00568D20, p, 0);
    func_0028C8E0(p + 336, 4);
    func_0028C910(p + 336);
    *(char *)(p + 880) = 1;
    *(char *)(p + 881) = 0;
    *(short *)(p + 882) = 0;
    *(char *)(p + 896) = 2;
    *(int *)(p + 912) = 0;
    *(int *)(p + 916) = 0;
    *(int *)(p + 920) = 0;
    *(int *)(p + 924) = 1065353216;
    *(int *)(p + 928) = 1116471296;
    func_0028C3A0(p + 336, 0, 30, p + 992);
    if (*(char **)(p + 460) != 0) {
        *(char *)(*(char **)(p + 460) + 2) = 1;
    }
}

extern void func_004077E0();

void func_00407D30(char *p) { func_004077E0(p + -64); }

extern void func_004076D0();

void func_00407D40(char *p) { func_004076D0(p + -64); }

extern void func_00407AA0();

void func_00407D50(char *p) { func_00407AA0(p + -64); }
