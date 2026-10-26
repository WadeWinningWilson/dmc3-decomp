float func_0024B880(float a, float b, float c, float d) {
    float x;
    float y;
    if (!(a <= c) && b < d) {
        x = a - c;
        y = d - b;
        return (c - d) + (x < y ? x : y);
    }
    if (a < c && !(b <= d)) {
        x = c - a;
        y = b - d;
        return (a - b) + (x < y ? x : y);
    }
    x = c;
    if (!(a < c)) {
        x = a;
    }
    y = b <= d ? b : d;
    return (a - b) + (c - d) - (x - y);
}

int func_0024B750(char *w, char *a, char *b);

int func_0024A540(char *, char *, char *);

int func_0024A4E0(char *, char *, char *);

int func_0024A7A0(char *, char *, char *);

int func_0024B500(char *, char *, char *);

int func_0024B940(char *, char *, char *);

unsigned char func_0024A2B0(char *p, char *a, char *b) {
    unsigned char r = 0;
    switch (*(unsigned char *)(a + 0x110)) {
    case 0: case 1: break;
    case 2:
        switch (*(unsigned char *)(b + 0x110)) {
        case 0: case 1: break;
        case 2:
            r = func_0024A540(p, a, b);
            break;
        case 3:
            if (func_0024A4E0(p, a, b)) r = func_0024A7A0(p, a, b);
            break;
        case 4:
            if (func_0024A4E0(p, a, b)) r = func_0024B500(p, a, b);
            break;
        case 5:
            r = func_0024B750(p, a, b);
            break;
        case 6:
            r = func_0024B940(p, a, b);
            break;
        }
        break;
    case 3:
        switch (*(unsigned char *)(b + 0x110)) {
        case 2:
            if (func_0024A4E0(p, a, b)) r = func_0024A7A0(p, b, a);
            break;
        case 0: case 1: case 3: case 4: case 5: case 6: break;
        }
        break;
    case 4:
        switch (*(unsigned char *)(b + 0x110)) {
        case 2:
            r = func_0024B500(p, b, a);
            break;
        case 0: case 1: case 3: case 4: case 5: case 6: break;
        }
        break;
    case 5:
        switch (*(unsigned char *)(b + 0x110)) {
        case 2:
            if (func_0024A4E0(p, a, b)) r = func_0024B750(p, b, a);
            break;
        case 0: case 1: case 3: case 4: case 5: case 6: break;
        }
        break;
    case 6:
        switch (*(unsigned char *)(b + 0x110)) {
        case 2:
            r = func_0024B940(p, b, a);
            break;
        case 0: case 1: case 3: case 4: case 5: case 6: break;
        }
        break;
    }
    return r;
}
