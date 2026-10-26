int func_002C3680(char *, int);

int func_002C3840(char *, char *, int, int, int);

int func_002C3540(char *, float *, int, char *, int);

int func_002C33D0(char *p, int *oi, float *of, int a, int b) {
    float t;
    char buf[28];
    int i;
    int r;
    i = func_002C3680(p, a);
    r = func_002C3840(p, buf, i, a, b);
    if (r == 0) {
        t = 0.0f;
        *oi = i;
        *of = t;
        return 0;
    }
    r = func_002C3540(p, &t, i, buf, r);
    if (r > 0) {
        if (i < *(int *)(p + 8) - 2 && (r = func_002C3840(p, buf, i + 1, a, b)) != 0) {
            i++;
            func_002C3540(p, &t, i, buf, r);
        }
    } else if (r < 0 && i > 0 && (r = func_002C3840(p, buf, i - 1, a, b)) != 0) {
        i--;
        func_002C3540(p, &t, i, buf, r);
    }
    *oi = i;
    *of = t;
    return 1;
}
