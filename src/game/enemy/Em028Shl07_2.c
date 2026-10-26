void func_001AD140(char *);

void func_0028C5C0(char *, int, float);

void func_0034BA60(int, char *, int, int, int);

int func_00457B30(char *, int);

void func_00457DB0(char *);

void func_004579C0(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x3E0) = *(float *)(p + 0x3E0) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x3E0) < 0.0f) {
            *(float *)(p + 0x3DC) = 300.0f;
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        }
        *(float *)(p + 0x3E4) = *(float *)(p + 0x3E4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x3E4) < 0.0f) {
            func_0034BA60(0x1F, p + 0x50, *(signed char *)(*(char **)(p + 0x500) + 0x46), 0, 1);
            *(float *)(p + 0x3E4) = 50.0f;
        }
        break;
    case 1:
        *(float *)(p + 0x3E4) = *(float *)(p + 0x3E4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x3E4) < 0.0f) {
            func_0034BA60(0x1F, p + 0x50, *(signed char *)(*(char **)(p + 0x500) + 0x46), 0, 1);
            *(float *)(p + 0x3E4) = 50.0f;
        }
        switch (func_00457B30(p, 1)) {
        case 0:
            break;
        case 1:
            func_001AD140(p);
            return;
        case -1:
            func_001AD140(p);
            return;
        }
        break;
    }
    func_00457DB0(p);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

extern float D_005BE1F8;

void func_00457F80(char *p);

void func_00457840(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x3DC) = 120.0f;
        switch (*(unsigned char *)(p + 0x3D4)) {
        case 0:
            func_00457F80(p);
            break;
        case 1:
            if (*(unsigned char *)(p + 0x3D1) == 0) {
                func_00457F80(p);
            }
            break;
        }
        func_0034BA60(0x1F, p + 0x50, *(signed char *)(*(char **)(p + 0x500) + 0x46), 0, 1);
        *(float *)(p + 0x3E4) = 50.0f;
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
    case 1:
        *(float *)(p + 0x3E4) = *(float *)(p + 0x3E4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x3E4) < 0.0f) {
            func_0034BA60(0x1F, p + 0x50, *(signed char *)(*(char **)(p + 0x500) + 0x46), 0, 1);
            *(float *)(p + 0x3E4) = 50.0f;
        }
        func_00457B30(p, 0);
        if (!(D_005BE1F8 <= 0.0f)) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(unsigned char *)(p + 6) = 0;
        } else if (*(unsigned char *)(*(char **)(p + 0x500) + 0x4BE4) != 0x19) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(unsigned char *)(p + 6) = 0;
        }
    }
    func_00457DB0(p);
    func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
}

extern char D_005B5390[];

extern char D_005B53B4[];

extern char D_005B5434[];

int func_00252FA0();

int func_0028C110();

int func_00456F20(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B5390;
    *(char **)((char *)p0 + 64) = D_005B53B4;
    *(char **)((char *)p0 + 160) = D_005B5434;
    func_0028C110((p0 + 336));
    *(char *)((char *)p0 + 976) = 0;
    *(int *)((char *)p0 + 1280) = 0;
    *(int *)((char *)p0 + 1040) = 0;
    *(int *)((char *)p0 + 1044) = 0;
    *(int *)((char *)p0 + 1048) = 0;
    *(int *)((char *)p0 + 1052) = 0x3f800000;
    *(int *)((char *)p0 + 1284) = 0;
    *(int *)((char *)p0 + 1288) = 0;
    *(int *)((char *)p0 + 1292) = 0;
    *(short *)((char *)p0 + 982) = 0;
    *(char *)((char *)p0 + 977) = 0;
    *(char *)((char *)p0 + 978) = 0;
    *(int *)((char *)p0 + 988) = 0;
    *(int *)((char *)p0 + 992) = 0;
    *(int *)((char *)p0 + 1056) = 0;
    *(int *)((char *)p0 + 1060) = 0;
    *(int *)((char *)p0 + 1064) = 0;
    *(int *)((char *)p0 + 1068) = 0x3f800000;
    *(int *)((char *)p0 + 1072) = 0;
    *(int *)((char *)p0 + 1076) = 0;
    *(int *)((char *)p0 + 1080) = 0;
    *(int *)((char *)p0 + 1084) = 0x3f800000;
    *(int *)((char *)p0 + 1008) = 0x3f800000;
    *(int *)((char *)p0 + 1012) = 0x3f800000;
    *(int *)((char *)p0 + 1016) = 0x3f800000;
    *(int *)((char *)p0 + 1020) = 0x3f800000;
    *(char *)((char *)p0 + 979) = 0;
    *(int *)((char *)p0 + 984) = 0;
    *(int *)((char *)p0 + 996) = 0;
    return p0;
}

void func_00457F00(p0, p1) char *p0; char *p1; {
    if (p1 != 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p1), "r"((p0 + 80)) : "memory");
    } else {
        if (*(unsigned char *)(p0 + 976) != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((*(int *)(p0 + 1280) + 80)), "r"((p0 + 80)) : "memory");
        } else {
            *(int *)(p0 + 80) = 0;
            *(int *)(p0 + 84) = 0;
            *(int *)(p0 + 88) = 0;
            *(int *)(p0 + 92) = 0x3f800000;
        }
    }
    *(int *)(p0 + 92) = 0x3f800000;
    *(float *)(p0 + 1040) = *(float *)(p0 + 80);
    *(float *)(p0 + 1044) = *(float *)(p0 + 84);
    *(float *)(p0 + 1048) = *(float *)(p0 + 88);
    *(int *)(p0 + 1052) = 0x3f800000;
}
