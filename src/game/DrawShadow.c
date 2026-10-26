extern char D_005AC2F0[];

void func_0013D6A0();

void func_0031DC40();

char * func_0031DCB0(p) char *p; {
    func_0031DC40(p);
    *(char * *)(p) = D_005AC2F0;
    func_0013D6A0(p + 4);
    *(int *)(p + 60) = 0;
    *(int *)(p + 44) = 0;
    *(int *)(p + 48) = 0;
    *(char *)(p + 128) = 0;
    return p;
}

void func_00130990();

int func_001B0FD0();

void func_003038E0();

void func_003038F0();

int func_00303DD0();

void func_00304020();

int func_0031DD70(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    func_003038E0((v0 + 32));
    tmp0 = func_00303DD0((v0 + 32));
    v2 = tmp0;
    tmp1 = func_001B0FD0((v0 + 4), v2, -2);
    v1 = tmp1;
    if (v1 == 0) {
        v3 = 0;
    } else {
        func_00130990(v1, ((unsigned int)v2 >> 2));
        func_003038F0((v0 + 32), v1);
        func_00304020((v0 + 32), v2);
        v3 = 1;
        *(char *)(v0 + 128) = v3;
    }
    return v3;
}

extern char D_01CAFF14[];

int func_00304360();

void func_00304C30();

int func_0031DE10(p0) char *p0; {
    int v0;
    int v1;
    v0 = (int)p0;
    if (*(unsigned char *)(p0 + 128) != 0) {
        func_00304C30((v0 + 32), *(int *)D_01CAFF14);
        v1 = func_00304360((v0 + 32));
    }
    return v1;
}

extern void func_0013D5D0();

void func_0031DE50(char *p) { func_0013D5D0(p + 4); }
