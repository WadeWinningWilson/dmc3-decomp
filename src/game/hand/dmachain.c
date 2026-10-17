/* GS DMA packet chain initialisers: each node's tag points at the previous node. */
#pragma opt_unroll_loops off

extern char *D_005BE0D8;
extern char D_0065D4D0[];
extern unsigned int D_0065E4D0[];
extern unsigned int D_0065E4D4[];
extern unsigned int D_0065E4D8[];
extern unsigned int D_0065E4DC[];
extern unsigned int D_0065E4E0[];
extern char D_0065E550[];
extern unsigned int D_0065F550[];
extern unsigned int D_0065F554[];
extern unsigned int D_0065F558[];
extern unsigned int D_0065F55C[];
extern unsigned int D_0065F560[];
extern char D_0065F620[];
extern unsigned int D_00660620[];
extern unsigned int D_00660624[];
extern unsigned int D_00660628[];
extern unsigned int D_0066062C[];
extern unsigned int D_00660630[];
extern char D_00660640[];
extern unsigned int D_00661640[];
extern unsigned int D_00661644[];
extern unsigned int D_00661648[];
extern unsigned int D_0066164C[];
extern unsigned int D_00661650[];
extern char D_0065D0B0[];
extern unsigned int D_0065D4B0[];
extern unsigned int D_0065D4B4[];
extern unsigned int D_0065D4B8[];
extern unsigned int D_0065D4BC[];
extern unsigned int D_0065D4C0[];
extern char D_00661660[];
extern unsigned int D_00661A60[];
extern unsigned int D_00661A64[];
extern unsigned int D_00661A68[];
extern unsigned int D_00661A6C[];
extern unsigned int D_00661A70[];
extern char D_00661AE0[];
extern unsigned int D_00661EE0[];
extern unsigned int D_00661EE4[];
extern unsigned int D_00661EE8[];
extern unsigned int D_00661EEC[];
extern unsigned int D_00661EF0[];
extern char D_00661F00[];
extern unsigned int D_00662300[];
extern unsigned int D_00662304[];
extern unsigned int D_00662308[];
extern unsigned int D_0066230C[];
extern unsigned int D_00662310[];
void func_00134DE0(char *, char *, int);
extern char D_0065E4F0[];
extern unsigned int D_0065E530[];
extern unsigned int D_0065E534[];
extern unsigned int D_0065E538[];
extern unsigned int D_0065E53C[];
extern unsigned int D_0065E540[];
extern char D_00661A80[];
extern unsigned int D_00661AC0[];
extern unsigned int D_00661AC4[];
extern unsigned int D_00661AC8[];
extern unsigned int D_00661ACC[];
extern unsigned int D_00661AD0[];
extern char D_0065F570[];
extern unsigned int D_0065F614[];
extern unsigned int D_0065F610[];
extern unsigned int D_0065F60C[];
extern unsigned int D_0065F608[];
extern unsigned int D_0065F604[];
extern unsigned int D_0065F600[];
extern unsigned int D_0065F5FC[];
extern unsigned int D_0065F5F8[];
extern unsigned int D_0065F5F4[];
extern unsigned int D_0065F5F0[];

void func_001A72B0(void) {
    unsigned int i;
    unsigned long long *n;
    n = (unsigned long long *)(D_0065D4D0 + (*(signed char *)(D_005BE0D8 + 0xE) << 11) + 0x7F0);
    for (i = 0x7F; i != 0; i--) {
        n[0] = ((unsigned long long)(unsigned int)(n - 2) << 32) | 0x20000000;
        n[1] = 0;
        n -= 2;
    }
    n[0] = 0xF0000000;
    n[1] = 0;
    D_0065E4D0[0] = 0;
    D_0065E4D4[0] = 0;
    D_0065E4D8[0] = 0;
    D_0065E4DC[0] = 0;
    D_0065E4E0[0] = 0;
}

void func_001A76A0(void) {
    unsigned int i;
    unsigned long long *n;
    n = (unsigned long long *)(D_0065E550 + (*(signed char *)(D_005BE0D8 + 0xE) << 11) + 0x7F0);
    for (i = 0x7F; i != 0; i--) {
        n[0] = ((unsigned long long)(unsigned int)(n - 2) << 32) | 0x20000000;
        n[1] = 0;
        n -= 2;
    }
    n[0] = 0xF0000000;
    n[1] = 0;
    D_0065F550[0] = 0;
    D_0065F554[0] = 0;
    D_0065F558[0] = 0;
    D_0065F55C[0] = 0;
    D_0065F560[0] = 0;
}

void func_001A7C00(void) {
    unsigned int i;
    unsigned long long *n;
    n = (unsigned long long *)(D_0065F620 + (*(signed char *)(D_005BE0D8 + 0xE) << 11) + 0x7F0);
    for (i = 0x7F; i != 0; i--) {
        n[0] = ((unsigned long long)(unsigned int)(n - 2) << 32) | 0x20000000;
        n[1] = 0;
        n -= 2;
    }
    n[0] = 0xF0000000;
    n[1] = 0;
    D_00660620[0] = 0;
    D_00660624[0] = 0;
    D_00660628[0] = 0;
    D_0066062C[0] = 0;
    D_00660630[0] = 0;
}

void func_001A7E30(void) {
    unsigned int i;
    unsigned long long *n;
    n = (unsigned long long *)(D_00660640 + (*(signed char *)(D_005BE0D8 + 0xE) << 11) + 0x7F0);
    for (i = 0x7F; i != 0; i--) {
        n[0] = ((unsigned long long)(unsigned int)(n - 2) << 32) | 0x20000000;
        n[1] = 0;
        n -= 2;
    }
    n[0] = 0xF0000000;
    n[1] = 0;
    D_00661640[0] = 0;
    D_00661644[0] = 0;
    D_00661648[0] = 0;
    D_0066164C[0] = 0;
    D_00661650[0] = 0;
}

void func_001A7090(void) {
    unsigned int i;
    unsigned long long *n;
    n = (unsigned long long *)(D_0065D0B0 + (*(signed char *)(D_005BE0D8 + 0xE) << 9) + 0x1F0);
    for (i = 0x1F; i != 0; i--) {
        n[0] = ((unsigned long long)(unsigned int)(n - 2) << 32) | 0x20000000;
        n[1] = 0;
        n -= 2;
    }
    n[0] = 0xF0000000;
    n[1] = 0;
    D_0065D4B0[0] = 0;
    D_0065D4B4[0] = 0;
    D_0065D4B8[0] = 0;
    D_0065D4BC[0] = 0;
    D_0065D4C0[0] = 0;
}

void func_001A8280(void) {
    unsigned int i;
    unsigned long long *n;
    n = (unsigned long long *)(D_00661660 + (*(signed char *)(D_005BE0D8 + 0xE) << 9) + 0x1F0);
    for (i = 0x1F; i != 0; i--) {
        n[0] = ((unsigned long long)(unsigned int)(n - 2) << 32) | 0x20000000;
        n[1] = 0;
        n -= 2;
    }
    n[0] = 0xF0000000;
    n[1] = 0;
    D_00661A60[0] = 0;
    D_00661A64[0] = 0;
    D_00661A68[0] = 0;
    D_00661A6C[0] = 0;
    D_00661A70[0] = 0;
}

void func_001A84B0(void) {
    unsigned int i;
    unsigned long long *n;
    n = (unsigned long long *)(D_00661AE0 + (*(signed char *)(D_005BE0D8 + 0xE) << 9) + 0x1F0);
    for (i = 0x1F; i != 0; i--) {
        n[0] = ((unsigned long long)(unsigned int)(n - 2) << 32) | 0x20000000;
        n[1] = 0;
        n -= 2;
    }
    n[0] = 0xF0000000;
    n[1] = 0;
    D_00661EE0[0] = 0;
    D_00661EE4[0] = 0;
    D_00661EE8[0] = 0;
    D_00661EEC[0] = 0;
    D_00661EF0[0] = 0;
}

void func_001A86E0(void) {
    unsigned int i;
    unsigned long long *n;
    n = (unsigned long long *)(D_00661F00 + (*(signed char *)(D_005BE0D8 + 0xE) << 9) + 0x1F0);
    for (i = 0x1F; i != 0; i--) {
        n[0] = ((unsigned long long)(unsigned int)(n - 2) << 32) | 0x20000000;
        n[1] = 0;
        n -= 2;
    }
    n[0] = 0xF0000000;
    n[1] = 0;
    D_00662300[0] = 0;
    D_00662304[0] = 0;
    D_00662308[0] = 0;
    D_0066230C[0] = 0;
    D_00662310[0] = 0;
}

void func_001A8A20(int a) {
    char *b;
    if (D_0065E4D0[0] != 0) {
        b = D_0065D4D0 + (*(signed char *)(D_005BE0D8 + 0xE) << 11);
        func_00134DE0(b + 0x7F0, b, a);
        *(int *)(D_005BE0D8 + 0x80) += D_0065E4D0[0];
        *(int *)(D_005BE0D8 + 0x84) += D_0065E4D4[0];
        *(int *)(D_005BE0D8 + 0x88) += D_0065E4DC[0];
        *(int *)(D_005BE0D8 + 0x8C) += D_0065E4E0[0];
    }
}

void func_001A8B90(int a) {
    char *b;
    if (D_0065F550[0] != 0) {
        b = D_0065E550 + (*(signed char *)(D_005BE0D8 + 0xE) << 11);
        func_00134DE0(b + 0x7F0, b, a);
        *(int *)(D_005BE0D8 + 0x80) += D_0065F550[0];
        *(int *)(D_005BE0D8 + 0x84) += D_0065F554[0];
        *(int *)(D_005BE0D8 + 0x88) += D_0065F55C[0];
        *(int *)(D_005BE0D8 + 0x8C) += D_0065F560[0];
    }
}

void func_001A8E70(int a) {
    char *b;
    if (D_00661640[0] != 0) {
        b = D_00660640 + (*(signed char *)(D_005BE0D8 + 0xE) << 11);
        func_00134DE0(b + 0x7F0, b, a);
        *(int *)(D_005BE0D8 + 0x80) += D_00661640[0];
        *(int *)(D_005BE0D8 + 0x84) += D_00661644[0];
        *(int *)(D_005BE0D8 + 0x88) += D_0066164C[0];
        *(int *)(D_005BE0D8 + 0x8C) += D_00661650[0];
    }
}

void func_001A74E0(void) {
    unsigned long long *n;
    n = (unsigned long long *)(D_0065E4F0 + (*(signed char *)(D_005BE0D8 + 0xE) << 5) + 0x10);
    n[0] = ((unsigned long long)(unsigned int)(n - 2) << 32) | 0x20000000;
    n[1] = 0;
    n -= 2;
    n[0] = 0xF0000000;
    n[1] = 0;
    D_0065E530[0] = 0;
    D_0065E534[0] = 0;
    D_0065E538[0] = 0;
    D_0065E53C[0] = 0;
    D_0065E540[0] = 0;
}

void func_001A8060(void) {
    unsigned long long *n;
    n = (unsigned long long *)(D_00661A80 + (*(signed char *)(D_005BE0D8 + 0xE) << 5) + 0x10);
    n[0] = ((unsigned long long)(unsigned int)(n - 2) << 32) | 0x20000000;
    n[1] = 0;
    n -= 2;
    n[0] = 0xF0000000;
    n[1] = 0;
    D_00661AC0[0] = 0;
    D_00661AC4[0] = 0;
    D_00661AC8[0] = 0;
    D_00661ACC[0] = 0;
    D_00661AD0[0] = 0;
}

void func_001A8DC0(int a) {
    char *b;
    int k = *(signed char *)(D_005BE0D8 + 0xE);
    if (D_00660620[0] != 0) {
        b = D_0065F620 + (k << 11);
        func_00134DE0(b + 0x7F0, b, a);
        *(int *)(D_005BE0D8 + 0x80) += D_00660620[0];
        *(int *)(D_005BE0D8 + 0x84) += D_00660624[0];
        *(int *)(D_005BE0D8 + 0x88) += D_0066062C[0];
        *(int *)(D_005BE0D8 + 0x8C) += D_00660630[0];
    }
}

void func_001A78D0(void) {
    unsigned long long *a;
    unsigned long long *b;
    char *n = D_0065F570 + (*(signed char *)(D_005BE0D8 + 0xE) << 5);
    a = (unsigned long long *)(n + 0x10);
    b = (unsigned long long *)(n + 0x50);
    a[0] = ((unsigned long long)(unsigned int)(a - 2) << 32) | 0x20000000;
    a[1] = 0;
    a[-2] = 0xF0000000;
    a[-1] = 0;
    b[0] = ((unsigned long long)(unsigned int)(b - 2) << 32) | 0x20000000;
    b[1] = 0;
    b[-2] = 0xF0000000;
    b[-1] = 0;
    D_0065F614[0] = 0;
    D_0065F610[0] = 0;
    D_0065F60C[0] = 0;
    D_0065F608[0] = 0;
    D_0065F604[0] = 0;
    D_0065F600[0] = 0;
    D_0065F5FC[0] = 0;
    D_0065F5F8[0] = 0;
    D_0065F5F4[0] = 0;
    D_0065F5F0[0] = 0;
}
