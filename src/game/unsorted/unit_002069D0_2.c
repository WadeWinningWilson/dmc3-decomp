extern int D_006543E0[];

extern int D_006543E4[];

char *func_00206B80(char *);

int func_0013C740(int, char *, int);

int func_00206E00(char *p, char **out, int id) {
    char *func_00206BC0(char *, int);
    char *b;
    char *e;
    e = func_00206BC0(p, id);
    if (e == 0) return 3;
    if (*(unsigned char *)(e + 2) == 1) {
        if (*(unsigned char *)(e + 3) == 1) {
            *out = *(char **)(e + 8);
            return 1;
        }
        b = func_00206B80(p);
        if (b == 0) return 3;
        if (func_0013C740(*(int *)(e + 4), b, *(int *)(p + 0x184)) == 0) return 3;
        if (!(*(int *)(p + 0x184) + (*(short *)(b + 0xE) + *(short *)(b + 0x22)) * 0x20 < D_006543E0[0] + D_006543E4[0])) return 3;
        *(unsigned char *)(e + 3) = 1;
        *(char **)(e + 8) = b;
        *(int *)(p + 0x184) = *(int *)(p + 0x184) + (*(short *)(b + 0xE) + *(short *)(b + 0x22)) * 0x20;
    } else {
        *out = *(char **)(e + 8);
        return 0;
    }
    *out = b;
    return 2;
}

int func_00206C70() {
    char *func_00206BC0();
    char *v0;
    v0 = func_00206BC0();
    if (v0 == 0) {
        v0 = 0;
    } else {
        v0 = *(char **)(v0 + 4);
    }
    return (int)v0;
}

extern void func_00206B10();

void func_00206AA0(void) { func_00206B10(); }

int func_0013B920();

int func_00206C20(int p0, int p1, int p2, int p3) {
    char *func_00206BC0();
    int v0;
    char *v1;
    int v2;
    int tmp1;
    v0 = p1;
    v1 = func_00206BC0(p0, p2);
    if (v1 == 0) {
        v2 = 0;
    } else {
        tmp1 = func_0013B920(*(int *)(v1 + 4), v0);
        v2 = ((unsigned int)0 < (unsigned int)tmp1);
    }
    return v2;
}
