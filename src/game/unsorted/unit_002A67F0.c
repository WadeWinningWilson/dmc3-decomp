int func_002A67F0(int k, unsigned char flag) {
    if (flag == 1) k = 0;
    switch ((unsigned char)k) {
    case 0: return 4;
    case 1: return 0;
    case 2: return 1;
    case 3: return 2;
    case 4: return 3;
    }
    return 5;
}

int func_002A6880(p0) int p0; {
    int v0;
    v0 = (p0 & 255);
    switch (v0) {
    case 0:
        return 1;
    case 1:
        return 2;
    case 2:
        return 3;
    case 3:
        return 4;
    case 4:
        return 0;
    }
    return 5;
}
