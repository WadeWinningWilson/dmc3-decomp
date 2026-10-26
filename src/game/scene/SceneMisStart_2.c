extern signed char D_005BC278[4];

int func_002DD950(char *, int);

void func_002DD890(char *p) {
    switch (*(int *)(p + 0x18)) {
    case 0:
        *(int *)(p + 0x1F8) = 0;
        *(int *)(p + 0x18) = *(int *)(p + 0x18) + 1;
    case 1:
    case 2:
    case 3:
        if ((unsigned char)func_002DD950(p, D_005BC278[*(int *)(p + 0x18)]) == 1) {
            *(int *)(p + 0x1F8) = 0;
            *(int *)(p + 0x18) = *(int *)(p + 0x18) + 1;
        }
        break;
    case 4:
        *(int *)(p + 0x14) = 0;
        *(int *)(p + 0x18) = 0;
        break;
    }
}

void func_004028A0();

int func_00403020();

int func_002DD840(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    func_004028A0((v0 + 104));
    v1 = func_00403020((v0 + 104));
    if ((v1 & 255) == 1) {
        *(int *)(v0 + 20) = 0;
        *(int *)(v0 + 24) = 0;
    }
    return v1;
}
