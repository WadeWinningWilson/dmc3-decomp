int func_00430AD0(p0) char *p0; {
    int v0;
    char *v1;
    float v2;
    float v3;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 15476);
    tmp0 = 2;
    if (v0 != tmp0) {
        switch (v0) {
        case 0:
            v2 = *(float *)(*(char **)(p0 + 10300) + 544);
            break;
        case 1:
            v2 = *(float *)(*(char **)(p0 + 10300) + 548);
            break;
        }
    } else {
        v2 = *(float *)(*(char **)(p0 + 10300) + 552);
    }
    if (*(float *)(p0 + 15496) >= v2) {
        *(float *)(p0 + 15496) = v2;
    }
    v3 = *(float *)(p0 + 15496);
    if (v3 <= 0.0f) {
        *(char *)(p0 + 15494) = 0;
        *(char *)(p0 + 15495) = 0;
    } else {
        v1 = *(char **)(p0 + 10300);
        if (v3 <= *(float *)(v1 + 544)) {
            *(char *)(p0 + 15494) = 1;
            *(char *)(p0 + 15495) = 1;
            if (*(float *)(p0 + 15496) == *(float *)(*(char **)(p0 + 10300) + 544)) {
                *(char *)(p0 + 15495) = 2;
            }
        } else {
            if (v3 <= *(float *)(v1 + 548)) {
                *(char *)(p0 + 15494) = 2;
                *(char *)(p0 + 15495) = 3;
                if (*(float *)(p0 + 15496) == *(float *)(*(char **)(p0 + 10300) + 548)) {
                    *(char *)(p0 + 15495) = 4;
                }
            } else {
                *(char *)(p0 + 15494) = 3;
                *(char *)(p0 + 15495) = 5;
                if (*(float *)(p0 + 15496) == *(float *)(*(char **)(p0 + 10300) + 552)) {
                    *(char *)(p0 + 15495) = 6;
                }
            }
        }
    }
    return *(unsigned char *)(p0 + 15494);
}
