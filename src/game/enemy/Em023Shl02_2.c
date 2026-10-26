void func_001AD140(char *);

extern char D_005BE098[4];

void func_001AD100(char *);

void func_00206730(char *);

void func_0028C5C0(char *, int, float);

void func_00195E20(char *, char *);

void func_0034BA60(int, char *, int, int, int);

void func_00382A50(char *);

void func_004F27F0(char *);

void func_004F2870(char *);

void func_004F2D30(char *);

void func_004F3020(char *);

void func_004F3380(char *p);

void func_004F25F0(char *p) {
    char *g;
    char *e;
    func_00382A50(p + 0x288);
    func_00206730(p + 0x28C);
    func_00206730(p + 0x290);
    g = *(char **)(p + 0x288);
    if (g == 0) {
        func_0034BA60(0x2E, p + 0x50, 0x29, 0, 1);
        func_001AD140(p);
        return;
    }
    e = ((char **)(g + 0x69F8))[*(int *)(p + 0x19C)];
    if (*(unsigned char *)(e + 0x135C) == 0) {
        func_0034BA60(0x2E, p + 0x50, 0x29, 0, 1);
        func_001AD140(p);
        return;
    }
    if (*(int *)(e + 0x144C) == 0) {
        func_0034BA60(0x2E, p + 0x50, 0x29, 0, 1);
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(g + 0x77C8) != 0) {
        func_0034BA60(0x2E, p + 0x50, 0x29, 0, 1);
        func_001AD140(p);
        return;
    }
    func_001AD100(p);
    if (*(float *)(p + 0x194) < 0.0f) {
        func_001AD140(p);
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_004F27F0(p);
        break;
    case 1:
        func_004F2870(p);
        break;
    case 2:
        func_004F2D30(p);
        break;
    case 3:
        func_004F3020(p);
        break;
    case 4:
        func_004F3380(p);
        break;
    }
    func_0028C5C0(p + 0x2A0, 0, 1.0f);
    func_00195E20(D_005BE098, p);
}

extern char D_005BA490[];

extern char D_005BA4B4[];

extern char D_005BA534[];

int func_00252FA0();

int func_0028C110();

int func_004F20A0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005BA490;
    *(char **)((char *)p0 + 64) = D_005BA4B4;
    *(char **)((char *)p0 + 160) = D_005BA534;
    func_0028C110((p0 + 672));
    *(int *)((char *)p0 + 648) = 0;
    *(int *)((char *)p0 + 404) = 0;
    return p0;
}

extern void func_004F23D0();

void func_004F35F0(char *p) { func_004F23D0(p + -64); }

void func_004F35E0(char *p0) {
    *(char *)(p0 + 408) = 1;
}
