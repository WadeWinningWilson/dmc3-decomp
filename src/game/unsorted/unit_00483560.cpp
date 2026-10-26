extern "C" char D_01CAFF0C[];

extern "C" short D_00583120[];

extern "C" short D_00583CE0[];

extern "C" short D_00583DC0[];

extern "C" int func_0020F180(char *);

extern "C" short *func_00483D90(char *p, signed char k, short id) {
    short *e = D_00583120;
    bool go = true;
    if (k == 13) {
        switch ((unsigned char)func_0020F180(*(char **)(*(char **)D_01CAFF0C + 0x18))) {
        case 1:
            e = D_00583CE0;
            break;
        case 2:
            e = D_00583DC0;
            break;
        case 0:
            break;
        }
    }
    do {
        if (*e == id && (signed char)e[1] == k) {
            go = false;
        } else if (*e == -1) {
            go = false;
        } else {
            e += 8;
        }
    } while (go == true);
    return e;
}
