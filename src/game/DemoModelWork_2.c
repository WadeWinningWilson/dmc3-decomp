char *func_00210240(char *);

char *func_00215A30(char *, int, int);

int func_00210810(char *, float);

char *func_00210830(char *, int, float);

int func_00231E00(char *p, short k) {
    char *g;
    float f;
    char *s;
    int r = 0;
    g = func_00210240(*(char **)(p + 0x200C));
    f = *(float *)(g + 0xC) + *(float *)(g + 0x10);
    s = func_00215A30(func_00210240(*(char **)(p + 0x200C)), 2, k);
    if (func_00210810(s, f) > 0) {
        char *e = func_00210830(s, 0, f);
        if (e != 0) {
            r = *(int *)(e + 0x18);
        }
    }
    return r;
}

int func_00231C40();

int func_00231EB0();

int func_00233800();

int func_00233810();

int func_002315C0(p0) char *p0; {
    int v0;
    int v1;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 4);
    tmp0 = 3;
    if (v0 != tmp0) {
        switch (v0) {
        case 0:
            v1 = func_00231C40(p0, v0);
            break;
        case 1:
            v1 = func_00231EB0(p0, v0);
            break;
        case 2:
            v1 = func_00233800(p0, v0);
            break;
        }
    } else {
        v1 = func_00233810(p0, v0);
    }
    return v1;
}
