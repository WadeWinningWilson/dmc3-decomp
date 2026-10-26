void func_002490F0(char *, int, int, int, int, int, float);

void func_0021C7A0(char *, int);

void func_002DBD20(char *, float, float);

void func_002DBD00(char *);

void func_002DBD30(char *);

void func_0021C380(char *, int);

void func_002DA3A0(char *, short);

void func_0021C100(char *p, int k, int n, float a, float b) {
    unsigned char s;
    *(unsigned char *)(p + 0x299C) = 0;
    s = k;
    *(unsigned char *)(p + 0x2998) = 0;
    *(unsigned char *)(p + 0x2904) = k;
    *(unsigned char *)(p + 0x28A9) = 0;
    switch (s) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 8:
    default:
        if (*(unsigned char *)(p + 0x28A6) == 0) *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
        *(float *)(p + 0x64) = a;
        *(float *)(p + 0x74) = b;
        func_002DBD00(p);
        func_002DBD30(p);
        switch (s) {
        case 4:
        case 2:
        default:
            func_002490F0(p, 0, 0x24, -1, 2, n, -1.0f);
            func_0021C380(p, 9);
            break;
        case 0:
            func_002490F0(p, 0, 0x25, -1, 2, n, -1.0f);
            func_0021C380(p, 9);
            break;
        case 8:
            func_002490F0(p, 0, 0x24, -1, 2, n, -1.0f);
            func_0021C380(p, 0xC);
            break;
        }
        func_002DA3A0(p, *(short *)(p + 0x90));
        break;
    case 7:
        if (*(unsigned char *)(p + 0x28A6) == 0) *(short *)(p + 0x28DC) = *(short *)(p + 0x90);
    case 6:
        *(float *)(p + 0x64) = a;
        *(float *)(p + 0x74) = b;
        func_002DBD00(p);
        func_002DBD20(p, *(float *)(p + 0x150) / 2.0f, 0.0f);
        *(float *)(p + 0x2870) = (float)(unsigned int)n;
        func_002490F0(p, 0, 0x10, -1, 2, n, -1.0f);
        if (s == 6) {
            func_0021C380(p, 9);
        } else {
            func_0021C380(p, 0xA);
        }
        func_002DA3A0(p, *(short *)(p + 0x28DC));
        break;
    }
    func_0021C7A0(p, 9);
}

int func_002242C0(p0) char *p0; {
    return (*(unsigned char *)(p0 + 213) == 1);
}

int func_0021CB60(p0, p1) char *p0; int p1; {
    int tmp0;
    tmp0 = (*(int *)(p0 + 10392) & ~p1);
    *(int *)(p0 + 10392) = (*(int *)(p0 + 10392) & ~p1);
    return tmp0;
}

extern char D_00544B00[];

void func_0021C770(char *p0, int p1) {
    signed char t0;
    t0 = *(signed char *)((D_00544B00 + ((p1 & 255) << 1)) + 0);
    *(char *)(p0 + 10314) = *(signed char *)((D_00544B00 + ((p1 & 255) << 1)) + 0);
    *(int *)(p0 + 10316) = 0;
}

int func_0021CB50(char *p0, int p1) {
    int t0;
    t0 = (*(int *)(p0 + 10392) | p1);
    *(int *)(p0 + 10392) = (*(int *)(p0 + 10392) | p1);
    return t0;
}

int func_0021CBB0(char *p0, int p1) {
    int t0;
    t0 = (*(int *)(p0 + 10388) | p1);
    *(int *)(p0 + 10388) = (*(int *)(p0 + 10388) | p1);
    return t0;
}
