extern unsigned char D_00568BA0[];

void func_003AA990(char *, int);

void func_003AA8F0(char *p) {
    switch (*(unsigned char *)(p + 0x4E16)) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 15: case 16: case 17: case 18: case 19: case 20: case 21:
        func_003AA990(p, D_00568BA0[*(unsigned char *)(p + 0x4E16) * 2]);
        break;
    case 14:
        func_003AA990(p, 9);
        break;
    case 22:
        func_003AA990(p, 9);
        break;
    case 23:
        return;
    default:
        return;
    }
    *(unsigned char *)(p + 0x4E19) = 0;
    *(unsigned char *)(p + 0x4E1C) = 0;
}
