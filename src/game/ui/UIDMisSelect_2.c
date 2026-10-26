char * func_002790E0();

extern char D_005A6F50[];

extern char D_005B7610[];

void func_00100450();

void func_0013D6A0();

void func_002791E0();

void func_004907A0();

char * func_0048E9D0(p) char *p; {
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
    *(char * *)(p) = D_005B7610;
    func_00100450(p + 128, (void *)func_002790E0, (void *)func_002791E0, 1536, 9, 135);
    func_00100450(p + 13952, (void *)func_002790E0, (void *)func_002791E0, 1536, 2);
    *(char *)(p + 17024) = 0;
    *(int *)(p + 60) = 0;
    *(int *)(p + 64) = 0;
    *(int *)(p + 68) = 0;
    *(char *)(p + 17168) = 0;
    *(char *)(p + 17174) = 0;
    *(char *)(p + 17175) = 0;
    *(char *)(p + 17176) = 0;
    *(char *)(p + 17177) = 0;
    *(char *)(p + 17178) = 0;
    *(char *)(p + 17180) = -1;
    func_004907A0(p);
    return p;
}

int func_004907E0(p0) char *p0; {
    char *v1;
    int v0;
    int v2;
    char *v3;
    v0 = 2;
    v2 = 0;
    v3 = p0;
    do {
        v1 = (v3 + 17184);
        if (*(int *)(v3 + 17184) != 0) {
            v0 = 1;
        }
        if (*(unsigned char *)(v1 + 10) != 0) {
            v0 = 1;
        }
        if (*(unsigned char *)(v1 + 9) == 1) {
            v1 = (char *)*(signed char *)(v1 + 8);
            if ((int)v1 == *(signed char *)(p0 + 17180)) {
                v0 = 1;
            }
        }
        v2 = (v2 + 1);
        v3 = (v3 + 12);
    } while ((v2 < 2));
    if ((v0 & 255) == 1) {
        return v0;
    } else {
        *(char *)(p0 + 17194) = 1;
        *(char *)(p0 + 17206) = 1;
        return v0;
    }
}

extern char D_00586751[];

signed char func_0048F870(int p0, int p1) {
    return *(signed char *)((D_00586751 + (p1 << 1)) + 0);
}
