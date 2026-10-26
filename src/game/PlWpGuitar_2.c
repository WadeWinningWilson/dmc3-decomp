void func_00303820(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

void func_00303870(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

extern char D_005A6F50[];

extern char D_005AB8C0[];

void func_0013D6A0();

char * func_00303430(p) char *p; {
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
    *(char * *)(p) = D_005AB8C0;
    *(char *)(p + 64) = 0;
    *(int *)(p + 56) = 0;
    *(int *)(p + 60) = 0;
    *(int *)(p + 68) = 0;
    return p;
}

int func_00303520();

int func_00303590();

void func_003034D0(p0) char *p0; {
    int v0;
    int v1;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 4);
    switch (v0) {
    default:
        return;
    case 0:
        tmp0 = func_00303520(p0, v0);
        return;
    case 1:
        v1 = func_00303590(p0, v0);
        return;
    }
}

extern void func_00303740();

void func_003038C0(char *p) { func_00303740(p + -64); }

void func_003038D0(char *p) { func_00303740(p + -160); }
