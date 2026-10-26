extern int D_00541894[];

char *func_001B0FD0(char *, int, int);

void *func_00128488(void *, int, unsigned int);

void func_001F8050(char *p, unsigned char k) {
    int *e = &D_00541894[k * 3];
    char **s = (char **)(p + k * 4);
    int n;
    *s = func_001B0FD0(p + k * 16 + 0x58, *e, 0);
    n = *e;
    func_00128488(*s, 0, n);
}

extern int D_00541898[];

void func_001F8120(char *p, unsigned char k) {
    int *e = &D_00541898[k * 3];
    char **s = (char **)((char *)(k * 4) + (int)p + 0x2C);
    *s = func_001B0FD0(p + k * 16 + 0x108, *e, 0);
    func_00128488(*s, 0, *e);
}

short func_001F8640(char *p, unsigned char k, short id) {
    short i;
    unsigned short *t;
    if (k != 10) {
        t = *(unsigned short **)((char *)(k * 4) + (int)p + 0x2C);
        for (i = 0; i < t[0]; i++) {
            unsigned short v = t[i + 0x6401];
            if (v == id) {
                return i;
            }
        }
    } else {
        t = *(unsigned short **)((char *)(k * 4) + (int)p + 0x2C);
        for (i = 0; i < t[0]; i++) {
            unsigned short v = t[i + 0x8001];
            if (v == id) {
                return i;
            }
        }
    }
    return -1;
}

void func_0012B2E8(char *, char *);

void func_001F83E0(char *p, unsigned char k) {
    unsigned short i;
    char *s;
    char *d;
    d = *(char **)((char *)(k * 4) + (int)p + 0x2C);
    switch (k) {
    case 0: case 1: case 2: case 3: case 4: case 6: case 7: case 8:
        s = *(char **)((char *)(k * 4) + (int)p);
        *(unsigned short *)d = *(unsigned short *)s;
        for (i = 0; i < *(unsigned short *)d; i++) {
            func_0012B2E8(d + i * 0x20 + 2, s + 2);
            s += 0x10;
            *(unsigned short *)(d + i * 2 + 0xC802) = i;
        }
        break;
    case 5:
        s = *(char **)((char *)(k * 4) + (int)p);
        *(unsigned short *)d = *(unsigned short *)s;
        for (i = 0; i < *(unsigned short *)d; i++) {
            func_0012B2E8(d + i * 0x20 + 2, s + 2);
            s += 0x10;
            *(unsigned short *)(d + i * 2 + 0xC802) = i;
        }
        break;
    case 9:
        s = *(char **)((char *)(k * 4) + (int)p);
        *(unsigned short *)d = *(unsigned short *)s;
        for (i = 0; i < *(unsigned short *)d; i++) {
            func_0012B2E8(d + i * 0x20 + 2, s + 2);
            s += 0x20;
            *(unsigned short *)(d + i * 2 + 0xC802) = i;
        }
        break;
    case 10:
        break;
    }
}

int func_0013D5D0();

int func_001F80D0(p0, p1) int p0; int p1; {
    int tmp0;
    tmp0 = func_0013D5D0(((p0 + ((p1 & 255) << 4)) + 88));
    *(int *)((char *)(p0 + ((p1 & 255) << 2)) + 0) = 0;
    return tmp0;
}

int func_001F81A0(p0, p1) int p0; int p1; {
    int tmp0;
    tmp0 = func_0013D5D0(((p0 + ((p1 & 255) << 4)) + 264));
    *(int *)((char *)(((p1 & 255) << 2) + p0) + 44) = 0;
    return tmp0;
}

extern void func_001F7FF0();

void func_001F8580(void) { func_001F7FF0(); }

extern void func_001F81F0();

void func_001F8590(void) { func_001F81F0(); }
