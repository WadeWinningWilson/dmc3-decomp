char *func_00279290(char *);

void func_001A2970(char *);

void func_001A2900(char *, float);

void func_001A2840(char *, int, float);

void func_001A27E0(char *, int, float, float);

void func_001A28A0(char *, int, float);

void func_001A2940(char *);

void func_0028BCE0(char *p, unsigned char k, char *e, float f) {
    switch (k) {
    case 0: case 1: case 2:
        func_001A2840(func_00279290(e), *(int *)(*(char **)(p + 0xE0) + 0x24F8), 1.0f);
        break;
    case 3:
        func_001A2840(func_00279290(e), *(int *)(*(char **)(p + 0xE0) + 0x24F8), 1.0f);
        break;
    case 4:
        func_001A27E0(func_00279290(e), *(int *)(*(char **)(p + 0xE0) + 0x24F8), 0.05f, 0.0f);
        break;
    case 6:
        func_001A28A0(func_00279290(e), *(int *)(*(char **)(p + 0xE0) + 0x24F8), 1.0f);
        func_001A2940(func_00279290(e));
        break;
    case 5:
        func_001A2900(func_00279290(e), 1.0f / *(float *)(*(char **)(p + 0xE0) + 0x24F4));
        break;
    case 7:
        func_001A2970(func_00279290(e));
        break;
    case 8:
        func_001A28A0(func_00279290(e), 0xA0C0C0C0, f);
        break;
    case 9:
        func_001A2840(func_00279290(e), 0xA0C0C0C0, 1.0f);
        break;
    }
}
