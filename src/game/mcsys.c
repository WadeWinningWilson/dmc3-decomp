extern char D_01DFC30C[];

extern char D_01DFC1A0[];

int func_004E9E90(int i, int j) {
    char *g = D_01DFC30C;
    char *e;
    if (i < 0 || i >= 5) return 0;
    e = D_01DFC1A0 + i * 64 + 0x2C;
    if (*(int *)(e + 0x28) == 0) goto a;
    return 0;
a:
    if (*(int *)g == i) goto b;
    return 0;
b:
    if (*(int *)(e + 0x2C) > 0) goto c;
    return 0;
c:
    if (*(int *)(e + 0x34) <= 0) return 0;
    return *(int *)(*(char **)(g + 0x10) + j * 12 + 4);
}

extern unsigned char D_0058BAC0[];

extern unsigned char D_0058BAD0[];

int func_004EE870(int f, int v, unsigned char *out, int w) {
    unsigned char buf[0x20];
    unsigned char *tbl;
    unsigned char *q;
    short n;
    short b;
    short len;
    short pad;
    if ((f & 0x08000000) && v < 0) v = ~v + 1;
    if (f & 0x1000) {
        tbl = D_0058BAC0;
    } else {
        tbl = D_0058BAD0;
    }
    n = 0;
    q = buf;
    b = (f & 0xF) + 1;
    do {
        *q++ = tbl[(unsigned int)v % b];
        n++;
        v = (unsigned int)v / b;
    } while (v);
    if (f & 0xFF0) {
        buf[n++] = (unsigned int)(f & 0xFF0) >> 4;
        f |= 0x04000000;
    }
    len = n;
    if (w - len > 0) {
        if (f & 0x80000000) {
            while (n > 0) *out++ = buf[--n];
            while (n++ < w - len) *out++ = ' ';
        } else {
            pad = w - len;
            if (f & 0x40000000) {
                if (f & 0x04000000) *out++ = buf[--n];
                while (pad-- > 0) *out++ = '0';
            } else {
                while (pad-- > 0) *out++ = ' ';
            }
            while (n > 0) *out++ = buf[--n];
        }
    } else {
        w = 0;
        while (n > 0) {
            w++;
            *out++ = buf[--n];
        }
    }
    return w;
}

void func_004EAAC0(char *p) { *(int *)(p + 0) = 0; }

extern char D_01DFABA0[];

extern char D_006663C0[];

void func_003303F0(char *, int, int, int, int);

unsigned short func_001AE360(char *, int);

int func_004E9CD0(void);

void func_004EA690(void);

int func_004F1010(char *p, int a) {
    int r;
    if (*(int *)(p + 0x208) == 0) {
        r = a;
        if (func_001AE360(D_006663C0, 0) & 0x50) {
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
            switch (func_004E9CD0()) {
            case 1:
            case 2:
            case 3:
                *(int *)(p + 0x208) = 1;
                break;
            case 0:
            case 4:
            case 5:
            default:
                func_004EA690();
                break;
            }
        }
    } else {
        switch (func_004E9CD0()) {
        case 1: r = 0x4E34; break;
        case 2: r = 0x4E35; break;
        case 3: r = 0x4E36; break;
        }
        if (func_001AE360(D_006663C0, 0) & 0x50) {
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
            func_004EA690();
        }
    }
    return r;
}
