extern char D_0057BA70[];

void func_00253110(char *, char *, int, float);

int func_002536B0(char *, char *);

void func_00471F60(char *, int);

void func_002530C0(char *, char *);

void func_00471940(char *p) {
    *(unsigned char *)(p + 0x4B0) = 1;
    *(float *)(p + 0x144) = *(float *)(p + 0x144) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x144) < 0.0f) {
        *(unsigned char *)(p + 0x4B0) = 0;
    }
    if (*(unsigned char *)(p + 0x4B0) == 1) {
        func_00253110(p, p + 0x480, 3, *(float *)(p + 0x10));
        switch (func_002536B0(p, p + 0x480)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x4B0) = 0;
            break;
        case -1:
            *(unsigned char *)(p + 0x4B0) = 0;
            break;
        }
    }
    if (*(unsigned char *)(p + 0x4B0) == 0) {
        func_00471F60(p, 0);
        *(unsigned char *)(p + 0x148) = 1;
        func_002530C0(p, D_0057BA70);
        *(unsigned char *)(p + 0x4B0) = 1;
        *(unsigned char *)(p + 5) = 1;
    }
}

void func_001AD140(char *);

extern char D_01DFABA0[];

void func_00330B50(char *, int, char *, int);

extern char D_0057BA90[];

void func_00471A30(char *p) {
    int func_00471E60(char *p);
    *(float *)(p + 0x470) = *(float *)(p + 0x470) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x470) < 0.0f) {
        func_00471F60(p, 1);
        *(unsigned char *)(p + 0x148) = 1;
        func_002530C0(p, D_0057BA90);
        *(unsigned char *)(p + 0x4B0) = 1;
        *(unsigned char *)(p + 5) = 2;
        func_00330B50(D_01DFABA0, 0, p + 0x50, 7);
        if ((unsigned char)func_00471E60(p) == 0) {
            func_001AD140(p);
            return;
        }
    }
    if (*(unsigned char *)(p + 0x4B0) == 1) {
        func_00253110(p, p + 0x490, 3, *(float *)(p + 0x10));
        switch (func_002536B0(p, p + 0x490)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x4B0) = 0;
            break;
        case -1:
            *(unsigned char *)(p + 0x4B0) = 0;
            break;
        }
    }
}

extern char D_0057BA50[];

int func_00471DF0(char *);

void func_00472080(char *);

void func_00471C30(char *);

void func_00471CB0(char *);

void func_00471680(char *p) {
    int func_00471E60(char *);
    if ((unsigned char)func_00471DF0(p) == 0) {
        func_001AD140(p);
        return;
    }
    *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x464) + 0x90);
    if (*(unsigned char *)(p + 0x4B1) == 0) {
        func_00471F60(p, 0);
        *(unsigned char *)(p + 0x148) = 1;
        func_002530C0(p, D_0057BA50);
        func_00472080(p);
        func_00330B50(D_01DFABA0, 2, p + 0x50, 7);
    } else {
        func_00471F60(p, 1);
        *(unsigned char *)(p + 0x148) = 1;
        func_002530C0(p, D_0057BA90);
        *(unsigned char *)(p + 0x4B0) = 1;
        *(unsigned char *)(p + 5) = 2;
        func_00330B50(D_01DFABA0, 0, p + 0x50, 7);
        if ((unsigned char)func_00471E60(p) == 0) {
            func_001AD140(p);
            return;
        }
    }
    func_00471C30(p);
    func_00471CB0(p);
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
}

extern void func_00472170();

void func_00472280(char *p) { func_00472170(p + -64); }
