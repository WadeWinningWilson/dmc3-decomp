extern char D_01CAFF0C[];

unsigned char func_003330C0(char *, int);

void func_00332AE0(char *p, int a, float x, float y) {
    void func_00332F20(char *, int, int, int, float);
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 0xA) != 0) return;
    if (func_003330C0(p, a) == 1) {
        *(float *)(p + 4) = *(float *)(p + 4) + (int)y;
        while (*(float *)(p + 4) > 700.0f) {
            if (*(unsigned char *)p < 7) *(float *)(p + 4) = 300.0f + (int)(*(float *)(p + 4) - 700.0f);
            switch (*(unsigned char *)p) {
            case 0: *(unsigned char *)p = 1; break;
            case 1: *(unsigned char *)p = 2; break;
            case 2: *(unsigned char *)p = 3; break;
            case 3: *(unsigned char *)p = 4; break;
            case 4: *(unsigned char *)p = 5; break;
            case 5: *(unsigned char *)p = 6; break;
            case 6: *(unsigned char *)p = 7; break;
            case 7:
                if (*(float *)(p + 4) > 700.0f) *(float *)(p + 4) = 699.0f;
                break;
            }
        }
    }
    func_00332F20(p, a, 2, 1, x);
}

void func_00332CF0(char *, float, float);

void func_00332890(char *p, int a, int dbl, int chk, float x, float b, float y, float z, float e) {
    void func_00332F20(char *, int, float, int, int);
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 0xA) != 0) return;
    if ((unsigned char)chk) {
        if (func_003330C0(p, a) != 1) goto tail;
    }
    *(float *)(p + 4) = *(float *)(p + 4) + (int)(float)(e * (*(float *)(p + 8) * (b * (dbl ? 2.0 : 1.0))));
    while (*(float *)(p + 4) > 700.0f) {
        if (*(unsigned char *)p < 7) *(float *)(p + 4) = 300.0f + (int)(*(float *)(p + 4) - 700.0f);
        switch (*(unsigned char *)p) {
        case 0: *(unsigned char *)p = 1; break;
        case 1: *(unsigned char *)p = 2; break;
        case 2: *(unsigned char *)p = 3; break;
        case 3: *(unsigned char *)p = 4; break;
        case 4: *(unsigned char *)p = 5; break;
        case 5: *(unsigned char *)p = 6; break;
        case 6: *(unsigned char *)p = 7; break;
        case 7:
            if (*(float *)(p + 4) > 700.0f) *(float *)(p + 4) = 699.0f;
            break;
        }
    }
    func_00332F20(p, a, x, 1, chk);
tail:
    func_00332CF0(p, y, z);
}
