char *func_00279290(char *);

void func_001A2970(char *);

void func_001A2900(char *, float);

void func_001A2840(char *, int, float);

void func_0043EEF0(char *p, unsigned char k) {
    switch (k) {
    case 0:
        *(int *)(p + 0x7EC) = 0;
        *(int *)(p + 0x7E8) = 0xA0E0E0E0;
        func_001A2840(func_00279290(p + 0x1C0), *(int *)(p + 0x7E8), 1.0f);
        break;
    case 1:
        *(int *)(p + 0x7EC) = 0;
        *(int *)(p + 0x7E8) = 0xA00000E0;
        func_001A2840(func_00279290(p + 0x1C0), *(int *)(p + 0x7E8), 1.0f);
        break;
    case 2:
        *(int *)(p + 0x7EC) = 0;
        *(int *)(p + 0x7E8) = 0xA0E00000;
        func_001A2840(func_00279290(p + 0x1C0), *(int *)(p + 0x7E8), 1.0f);
        break;
    case 3:
        if (*(unsigned char *)(p + 0x7CB) != k) {
            *(float *)(p + 0x7EC) = 30.0f;
            func_001A2900(func_00279290(p + 0x1C0), 1.0f / *(float *)(p + 0x7EC));
        }
        break;
    case 4:
        if (*(unsigned char *)(p + 0x7CB) != k) {
            *(int *)(p + 0x7EC) = 0;
            *(int *)(p + 0x7E8) = 0;
            func_001A2970(func_00279290(p + 0x1C0));
        }
        break;
    }
    *(unsigned char *)(p + 0x7CB) = k;
}

extern char D_01CAFF0C[];

void func_002F2D30(char *, char *);

extern unsigned int D_00575930[];

extern unsigned int D_00575960[];

extern float D_00575880[];

extern float D_005BC34C;

extern int D_005BE140;

extern char D_005BE138;

extern signed char D_005BC348;

extern char *D_005BE13C;

void func_0043FF40(char *);

void func_0043EB20(char *, int);

void func_00450480(char *, float);

void func_0043F3C0(char *p);

void func_0043F130(char *p) {
    char *q;
    int t;
    if (*(unsigned char *)(p + 0x7C6) != 0) {
        *(unsigned char *)(p + 0x7C6) = 0;
        if (*(unsigned char *)(p + 0x7C4) == 0) {
            *(unsigned char *)(p + 0x7C4) = 1;
            func_0043FF40(p);
        }
    }
    if (*(unsigned char *)(p + 0x7C7) != 0) {
        *(unsigned char *)(p + 0x7C7) = 0;
        *(unsigned char *)(p + 0x7C5) = 1;
    }
    if (*(unsigned char *)(p + 0x7C5) != 0) {
        if (*(unsigned char *)(*(char **)(p + 0x804) + 0x800) == 2) *(unsigned char *)(p + 0x7CA) = 1;
        if (*(unsigned char *)(*(char **)(p + 0x804) + 0x800) == 3) {
            *(unsigned char *)(p + 0x7C9) = 1;
            func_0043EB20(p, 1);
            if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
            *(float *)(p + 0x7F4) = -1.0f;
            *(unsigned char *)(p + 0x7C5) = 0;
        }
        func_0043F3C0(p);
        if (*(unsigned char *)(p + 0x7C5) == 0) return;
        if (*(signed char *)(p + 0x7C1) == 0) {
            q = *(char **)(p + 0x804);
            if (*(unsigned int *)(p + 0x7E4) > D_00575930[(*(unsigned char *)(p + 0x7C2) << 1) + *(unsigned char *)(q + 0x803)]) {
                *(unsigned char *)(q + 0x80D) = 1;
                *(int *)(p + 0x7E4) = 0;
            }
        } else {
        switch (*(unsigned char *)(p + 0x7C0)) {
        case 0: case 3: case 4: case 5:
            t = *(int *)(*(char **)(p + 0x1B0) + 0x104);
            D_005BE138 = 1;
            D_005BC34C = 0.1f;
            D_005BE140 = t;
            D_005BC348 = 1;
            D_005BE13C = p;
            break;
        case 1: case 2:
            D_005BC348 = -1;
            D_005BE138 = 0;
            D_005BE13C = 0;
            D_005BC34C = 1.0f;
            D_005BE140 = 0;
            break;
        }
        q = *(char **)(p + 0x804);
        if (*(unsigned int *)(p + 0x7DC) > D_00575960[(*(unsigned char *)(p + 0x7C2) << 1) + *(unsigned char *)(q + 0x803)]) {
            *(unsigned char *)(q + 0x80C) = 1;
            *(int *)(p + 0x7DC) = 0;
        }
        if (*(unsigned int *)(p + 0x7E0) != 0) {
            func_00450480(*(char **)(p + 0x804), (float)*(unsigned int *)(p + 0x7E0) * D_00575880[*(unsigned char *)(p + 0x7C2)]);
            *(int *)(p + 0x7E0) = 0;
        }
        }
    } else if (*(signed char *)(p + 0x7C1) == 1) {
        D_005BE138 = 0;
        D_005BC348 = -1;
        D_005BE13C = 0;
        D_005BC34C = 1.0f;
        D_005BE140 = 0;
    }
}

int func_0043FA30();

int func_004400F0(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = 1;
    v1 = p0;
    if (*(unsigned char *)(p0 + 1984) != v0) {
        *(char *)(v1 + 1984) = v0;
        v2 = func_0043FA30(p0, v0);
        *(char *)(v1 + 4) = 0;
    }
    return v2;
}

int func_00440130(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = 2;
    v1 = p0;
    if (*(unsigned char *)(p0 + 1984) != v0) {
        *(char *)(v1 + 1984) = v0;
        v2 = func_0043FA30(p0, v0);
        *(char *)(v1 + 4) = 0;
    }
    return v2;
}

int func_004401B0(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = 4;
    v1 = p0;
    if (*(unsigned char *)(p0 + 1984) != v0) {
        *(char *)(v1 + 1984) = v0;
        v2 = func_0043FA30(p0, v0);
        *(char *)(v1 + 4) = 0;
    }
    return v2;
}

extern void func_00440700();

void func_00440980(char *p) { func_00440700(p + -64); }

extern void func_00440870();

void func_004409A0(char *p) { func_00440870(p + -64); }

void func_004409B0(char *p) { func_00440870(p + -160); }

void func_004409C0(char *p) { func_00440870(p + -208); }

extern void func_00440820();

void func_004409E0(char *p) { func_00440820(p + -304); }

void func_004409F0(char *p) { func_00440870(p + -304); }

void func_00440860(char *p) { *(char *)(p + 1987) = 0; }
