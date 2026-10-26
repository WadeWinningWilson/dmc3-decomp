extern char D_005ADC70[];

extern char D_005ADD60[];

void func_002790E0();

int func_0036E550(p0) int p0; {
    func_002790E0();
    *(char **)((char *)p0 + 0) = D_005ADC70;
    *(char **)((char *)p0 + 4) = D_005ADD60;
    return p0;
}

extern char D_01CAFF30[];

void func_0036FD20(p0) char *p0; {
    int v0;
    if (*(int *)D_01CAFF30 == 8) {
        v0 = 1;
        if (*(unsigned char *)(p0 + 179) == 0) {
            *(char *)(p0 + 179) = v0;
            *(int *)(p0 + 184) = 0x453b8000;
        }
    }
}
