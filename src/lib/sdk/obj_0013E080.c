void func_0013E080(p0) char *p0; {
    *(char *)(p0 + 0) = 0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
}

int func_0013E090(p0) char *p0; {
    return (*(int *)(p0 + 8) == 0);
}

void func_0013E0A0(p0) char *p0; {
    *(char *)(p0 + 0) = 0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 20) = 100;
}

int func_0013E0C0(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(int *)(p0 + 8);
    if (v0 > 0) {
        *(int *)(p0 + 8) = (v0 + -1);
        *(int *)(p0 + 20) = (int)((float)*(int *)(p0 + 12) + (((float)(*(int *)(p0 + 16) - *(int *)(p0 + 12)) * (float)(*(int *)(p0 + 4) - *(int *)(p0 + 8))) / (float)*(int *)(p0 + 4)));
        if (*(int *)(p0 + 20) > 100) {
            *(int *)(p0 + 20) = 100;
        }
        if (*(int *)(p0 + 20) < 0) {
            *(int *)(p0 + 20) = 0;
        }
        v1 = 1;
    } else {
        v1 = 0;
    }
    return v1;
}
