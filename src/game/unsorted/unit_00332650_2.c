extern char D_01CAFF0C[];

unsigned char func_003330C0(char *, int);

void func_00332F20(char *, int, int, int, float);

void func_00332AE0(char *p, int a, float x, float y) {
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
