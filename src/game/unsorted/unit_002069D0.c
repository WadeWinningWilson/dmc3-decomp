char *func_00206BC0(short *p, short k) {
    int i;
    for (i = 0; i < p[0]; i++) {
        int v = *(short *)((char *)p + i * 12 + 4);
        if (v == k) return (char *)p + i * 12 + 4;
    }
    return 0;
}

int func_0013BF60(char *, char *, int);

int func_0013BF20(char *);

typedef struct { short id; unsigned char a; unsigned char b; char *p; int r; } E12;

typedef struct { short n; short pad; E12 e[32]; char x[0x388 - 0x184]; } T206;

int func_00206C70(T206 *, int);

int func_00206CA0(T206 *t, char *s, int id, unsigned char a, unsigned char b) {
    int r;
    if (func_00206C70(t, id) != 0) return 1;
    if (t->n >= 32) return 0;
    if (a == 1) {
        r = 0;
    } else {
        if (b == 1) {
            r = func_0013BF60(s, (char *)t + 0x38C, -1);
        } else {
            r = func_0013BF20(s);
        }
        if (r == 0) return 0;
        t->e[t->n].b = 1;
    }
    t->e[t->n].id = id;
    t->e[t->n].a = a;
    t->e[t->n].p = s;
    t->e[t->n].r = r;
    t->n++;
    return 1;
}

int func_002069D0(p0) char *p0; {
    int v0;
    int v1;
    *(short *)(p0 + 0) = 0;
    v1 = 0;
    v0 = -1;
    do {
        *(short *)(p0 + 4) = v0;
        *(char *)(p0 + 6) = 0;
        v1 = (v1 + 8);
        *(char *)(p0 + 7) = 0;
        *(int *)(p0 + 8) = 0;
        *(int *)(p0 + 12) = 0;
        *(short *)(p0 + 16) = v0;
        *(char *)(p0 + 18) = 0;
        *(char *)(p0 + 19) = 0;
        *(int *)(p0 + 20) = 0;
        *(int *)(p0 + 24) = 0;
        *(short *)(p0 + 28) = v0;
        *(char *)(p0 + 30) = 0;
        *(char *)(p0 + 31) = 0;
        *(int *)(p0 + 32) = 0;
        *(int *)(p0 + 36) = 0;
        *(short *)(p0 + 40) = v0;
        *(char *)(p0 + 42) = 0;
        *(char *)(p0 + 43) = 0;
        *(int *)(p0 + 44) = 0;
        *(int *)(p0 + 48) = 0;
        *(short *)(p0 + 52) = v0;
        *(char *)(p0 + 54) = 0;
        *(char *)(p0 + 55) = 0;
        *(int *)(p0 + 56) = 0;
        *(int *)(p0 + 60) = 0;
        *(short *)(p0 + 64) = v0;
        *(char *)(p0 + 66) = 0;
        *(char *)(p0 + 67) = 0;
        *(int *)(p0 + 68) = 0;
        *(int *)(p0 + 72) = 0;
        *(short *)(p0 + 76) = v0;
        *(char *)(p0 + 78) = 0;
        *(char *)(p0 + 79) = 0;
        *(int *)(p0 + 80) = 0;
        *(int *)(p0 + 84) = 0;
        *(short *)(p0 + 88) = v0;
        *(char *)(p0 + 90) = 0;
        *(char *)(p0 + 91) = 0;
        *(int *)(p0 + 92) = 0;
        *(int *)(p0 + 96) = 0;
        p0 = (p0 + 96);
    } while ((v1 < 32));
    return 1;
}

extern char D_006543E0[];

void func_00206AB0(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    *(short *)(p0 + 392) = 0;
    *(int *)(p0 + 388) = *(int *)D_006543E0;
    v0 = 0;
    if ((0 < *(short *)(p0 + 0))) {
        v1 = p0;
        v2 = 1;
        do {
            if (*(unsigned char *)(v1 + 6) == v2) {
                *(char *)(v1 + 7) = 0;
            }
            v0 = (v0 + 1);
            v1 = (v1 + 12);
        } while ((v0 < *(short *)(p0 + 0)));
    }
}

extern char D_006480D0[];

int func_00196C40();

int func_00206B10(p0) int p0; {
    int v1;
    int v2;
    char *v0;
    v0 = (char *)p0;
    v2 = 0;
    do {
        if (-1 != *(short *)(v0 + 4)) {
            if (*(unsigned char *)(v0 + 6) == 0) {
                v1 = func_00196C40(D_006480D0, *(int *)(v0 + 12));
            }
        }
        v2 = (v2 + 1);
        v0 = (v0 + 12);
    } while ((v2 < 32));
    return v1;
}

int func_00206B80(p0) char *p0; {
    int v0;
    int v1;
    int tmp0;
    v0 = *(short *)(p0 + 392);
    tmp0 = (v0 < 8);
    if (tmp0 == 0) {
        return 0;
    } else {
        *(short *)(p0 + 392) = (v0 + 1);
        v1 = (int)((p0 + (v0 << 6)) + 396);
        return v1;
    }
}
