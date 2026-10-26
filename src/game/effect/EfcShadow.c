void func_00206730(char *);

unsigned char func_002077F0(int);

void func_0032E640(char *p) {
    int i;
    int j;
    int m;
    unsigned char k;
    for (i = 0; i < 2; i++) {
        func_00206730(p + 0x84 + i * 4);
    }
    k = *(unsigned char *)(p + 0xA0);
    if (((unsigned int)(k - 1) <= 1 || k == 3) && *(int *)(p + 0xB8) != 0) {
        for (j = 0; j < *(unsigned char *)(p + 0xA5); j++) {
            func_00206730(*(char **)(p + 0xB8) + j * 0x50 + 0x40);
        }
    }
    for (i = 0; i < 2; i++) {
        if (*(int *)(p + 0x84 + i * 4) != 0 && func_002077F0(*(int *)(p + 0x84 + i * 4)) == 1) {
            *(int *)(p + 0x84 + i * 4) = 0;
        }
    }
    k = *(unsigned char *)(p + 0xA0);
    if (((unsigned int)(k - 1) <= 1 || k == 3) && *(int *)(p + 0xB8) != 0) {
        for (m = 0; m < *(unsigned char *)(p + 0xA5); m++) {
            if (*(int *)(*(char **)(p + 0xB8) + m * 0x50 + 0x40) != 0 && func_002077F0(*(int *)(p + 0x84)) == 1) {
                *(int *)(p + 0x84) = 0;
            }
        }
    }
}

void func_001AD140(char *);

void func_0032E7C0(char *p) {
    int i;
    char *q;
    int c;
    for (i = 0, q = p; i < 2; i++, q += 4) {
        func_00206730(q + 0x84);
        if (*(int *)(q + 0x84) != 0) {
            func_001AD140(*(char **)(q + 0x84));
            *(int *)(q + 0x84) = 0;
        }
    }
    c = *(unsigned char *)(p + 0xA0);
    if ((unsigned int)(c - 1) <= 1 || c == 3) {
        if (*(int *)(p + 0xB8) != 0) {
            for (i = 0; i < *(unsigned char *)(p + 0xA5); i++) {
                func_00206730(*(char **)(p + 0xB8) + i * 0x50 + 0x40);
                if (*(int *)(*(char **)(p + 0xB8) + i * 0x50 + 0x40) != 0) {
                    func_001AD140(*(char **)(*(char **)(p + 0xB8) + i * 0x50 + 0x40));
                    *(int *)(*(char **)(p + 0xB8) + i * 0x50 + 0x40) = 0;
                }
            }
        }
    }
}

void func_0032E9B0(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

int func_0032D760();

int func_0032DC50();

int func_0032D700(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    switch (v0) {
    case 0:
        v2 = func_0032D760();
        *(char *)(v1 + 4) = (*(unsigned char *)(v1 + 4) + 1);
        break;
    case 1:
        v2 = func_0032DC50(p0, v0);
        break;
    }
    return v2;
}

void func_0032E9A0(void) {}
