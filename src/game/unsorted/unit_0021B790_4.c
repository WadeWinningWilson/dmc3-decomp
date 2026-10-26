int func_0023DF80(char *, float);

void func_0021BFC0(char *);

int func_00430EA0(char *, int);

void func_002DA3A0(char *, int);

int func_002496D0(char *);

void func_002490F0(char *, int, int, int, int, int, float);

void func_0021B790(char *, int);

void func_002DBAA0(char *, short, float);

void func_002DBD20(char *, float, float);

void func_002DBD00(char *);

void func_002DBCC0(char *, int, float, float);

void func_002DBD30(char *);

void func_0021C380(char *, int);

void func_0021CB60(char *, int);

void func_0021C100(char *, int, int, float, float);

int func_00249E20(char *, int);

void func_002DBCA0(char *, int);

void func_002DA540(char *);

void func_002242D0(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        if (!(*(int *)(p + 0x2898) & 2)) {
            switch (*(signed char *)(p + 0x3D49)) {
            case 0:
                func_002490F0(p, 3, 1, -1, 0, 0, -1.0f);
                break;
            case 1:
                func_002490F0(p, 4, 1, -1, 0, 0, -1.0f);
                break;
            case 2:
                func_002490F0(p, 5, 1, -1, 0, 0, -1.0f);
                break;
            case 3:
                func_002490F0(p, 6, 1, -1, 0, 0, -1.0f);
                break;
            case 4:
                func_002490F0(p, 7, 1, -1, 0, 0, -1.0f);
                break;
            default:
                func_002490F0(p, 1, 0x10, -1, 0, 0, -1.0f);
                break;
            }
            func_002DBCA0(p, 1);
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
            *(unsigned char *)(p + 0x284C) = 1;
        } else {
            *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8000;
            func_002DBCC0(p, 1, *(float *)(*(char **)(p + 0x283C) + 0x1F8), *(float *)(*(char **)(p + 0x283C) + 0x1FC));
            func_002DBD00(p);
            func_002DBD20(p, *(float *)(*(char **)(p + 0x283C) + 0x200), *(float *)(*(char **)(p + 0x283C) + 0x204));
            func_002490F0(p, 0, 0x2A, -1, 0, 0, 7.0f);
            func_0021C380(p, 0);
            *(unsigned char *)(p + 0x284C) = 2;
        }
        func_0021CB60(p, 0x10000);
        break;
    case 1:
        func_002496D0(p);
        if ((unsigned char)func_00249E20(p, 0) == 4) {
            func_0021B790(p, 9);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
        }
        break;
    case 2:
        if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
            func_0021BFC0(p);
            break;
        }
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        func_002DA540(p);
        func_00430EA0(p, 0);
        if (*(float *)(p + 0x150) < 0.0f) {
            func_002DBD30(p);
        }
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021C100(p, 8, 5, 0.0f, -1.5f);
            return;
        }
        break;
    }
}

void func_0021CBB0(char *, int);

void func_0021CB50(char *, int);

void func_0021D3F0(char *, int);

void func_00227DE0(char *p) {
    if (*(unsigned char *)(p + 0x2AF8) == 0) {
        switch (*(unsigned char *)(p + 0x2AF9)) {
        case 0:
            if (*(unsigned char *)(p + 0x2AFD) == 0) {
                func_0021D3F0(p, 0);
                return;
            }
            break;
        default:
            if (*(unsigned char *)(p + 0x2AFD) != 1) {
                func_0021D3F0(p, 0);
                return;
            }
            break;
        }
    }
    if (*(unsigned char *)(p + 0x2AFC) != *(unsigned char *)(p + 0x2AFB)) {
        if (*(int *)(p + 0x24BC) != 0) {
            switch (*(unsigned char *)(p + 0x2AF9)) {
            case 0:
                if (*(unsigned char *)(p + 0x2AFB) == 1) {
                    func_002490F0(p, 0x20, *(unsigned char *)(p + 0x2AFB), -1, 2, 8, -1.0f);
                } else {
                    func_002490F0(p, 0x20, *(unsigned char *)(p + 0x2AFB), -1, 0, 0, -1.0f);
                }
                break;
            default:
                func_002490F0(p, 0x20, *(unsigned char *)(p + 0x2AFB), -1, 0, 0, -1.0f);
                break;
            }
        }
        *(unsigned char *)(p + 0x2AFC) = *(unsigned char *)(p + 0x2AFB);
        return;
    }
    switch (*(unsigned char *)(p + 0x2AF9)) {
    case 0:
        switch (*(unsigned char *)(p + 0x2AFD)) {
        case 1:
            func_0021B790(p, 0xA);
            break;
        case 2:
            func_0021C100(p, 4, 0xA, 0.0f, -1.5f);
            break;
        case 3:
            func_0021B790(p, 0xA);
            break;
        default:
            func_002496D0(p);
            break;
        }
        break;
    case 1:
        func_002496D0(p);
        break;
    case 2:
        switch (*(unsigned char *)(p + 0x2AFD)) {
        case 1:
            switch (*(unsigned char *)(p + 0x284C)) {
            case 0:
                func_0021CBB0(p, 1);
                *(short *)(p + 0x28DC) = *(short *)(p + 0x90) + 0x8001;
                func_0021CB50(p, 1);
                func_0021CB60(p, 2);
                *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
            case 1:
                if ((unsigned char)func_002496D0(p) == 4) {
                    func_0021D3F0(p, 1);
                    func_002490F0(p, 1, 9, -1, 0, 0, -1.0f);
                    *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
                } else {
                    func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
                }
                break;
            case 2:
                if ((unsigned char)func_002496D0(p) == 4) {
                    func_0021B790(p, 0xA);
                } else {
                    func_002DBAA0(p, *(short *)(p + 0x28DC), 1.0f);
                }
                break;
            }
            break;
        default:
            func_002496D0(p);
            break;
        }
        break;
    case 3:
        func_002496D0(p);
        break;
    }
}

void func_0021C580();

void func_0021C770();

void func_0021C7A0(int p0, int p1) {
    func_0021C770();
    func_0021C580(p0, p1);
}
