void func_002EF940(int, char *);

void func_0028C5C0(char *, int, float);

extern char D_01CAFF0C[];

void func_0040FDF0(char *, int);

void func_0040F220(char *p) {
    int i;
    for (i = 0; i < *(short *)(p + 0xE2); i++) {
        if (**(unsigned char **)(p + i * 4 + 0x108) == 1 && (*(unsigned char **)(p + i * 4 + 0x108))[1] == 1) {
            func_0040FDF0(p, (unsigned short)i);
            func_0028C5C0(*(char **)(p + i * 4 + 0x108) + 0x4A0, 0, 1.0f);
            switch (*(unsigned short *)(*(char **)(p + i * 4 + 0x108) + 2)) {
            case 0:
            case 1:
                break;
            case 2:
            case 3:
                if (*(unsigned char *)(p + 0xE1) == 0) {
                    func_002EF940(*(int *)D_01CAFF0C, *(char **)(p + i * 4 + 0x108) + 0x720);
                }
                break;
            }
        }
    }
}

char *func_0040FAD0(char *p, int i) {
    char *func_00207480(int, int, char *, int);
    return func_00207480(3, 0x1C, ((char **)(p + 0x108))[i] + 0x450, 0x40);
}

int func_00410080();

int func_0040F110(p0) char *p0; {
    char *v0;
    int v1;
    char *v2;
    char *v3;
    int v4;
    int v5;
    v0 = p0;
    v1 = 0;
    if ((0 < *(short *)(p0 + 226))) {
        v2 = v0;
        do {
            v3 = *(char **)(v2 + 264);
            v4 = 1;
            if (*(unsigned char *)(v3 + 0) == v4) {
                if (*(unsigned short *)(v3 + 2) != 3) {
                    *(char *)(v3 + 1) = v4;
                    v5 = func_00410080(v0, (v1 & 65535), v3);
                }
            }
            v1 = (v1 + 1);
            v2 = (v2 + 4);
        } while ((v1 < *(short *)(v0 + 226)));
    }
    *(char *)(v0 + 225) = 0;
    return v5;
}

int func_0040FAF0(p0, p1) int p0; int p1; {
    int func_00207480();
    char *v0;
    int v1;
    int tmp0;
    v0 = *(char **)((char *)((p1 << 2) + p0) + 264);
    if (*(unsigned short *)(v0 + 2) == 2) {
        tmp0 = func_00207480(3, 4, (v0 + 1104), 64);
        return tmp0;
    } else {
        v1 = func_00207480(3, 554, (v0 + 1104), 64);
        return v1;
    }
}

extern void func_0040E890();

void func_004104A0(char *p) { func_0040E890(p + -64); }

extern void func_004103E0();

void func_004104B0(char *p) { func_004103E0(p + -64); }

void func_004104C0(char *p) { func_004103E0(p + -160); }

extern void func_004103B0();

void func_004104D0(char *p) { func_004103B0(p + -208); }

void func_00410500(char *p) { func_004103E0(p + -208); }

void func_00410390(char *p) { *(char *)(p + 224) = 0; }

void func_00410380(char *p0) {
    *(char *)(p0 + 224) = 1;
}
