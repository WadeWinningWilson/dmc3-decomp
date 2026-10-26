typedef struct { short k; short pad; int v; } K8;

int func_0030E980(char *p, int k) {
    int i;
    char *e;
    K8 *t;
    int n;
    n = *(int *)(p + 0x14);
    i = 0;
    if (0 < n) {
        t = *(K8 **)p;
        e = (char *)t;
        do {
            if (k == *(short *)e) {
                return t[i].v;
            }
            i++;
            e += 8;
        } while (i < n);
    }
    return 0;
}

char *func_0030E9D0(char *p) {
    int i;
    char *e;
    char *t;
    int n;
    n = *(int *)(p + 0x14);
    i = 0;
    if (0 < n) {
        t = *(char **)p;
        e = t;
        do {
            if (*(short *)e == -1) {
                return t + i * 8;
            }
            i++;
            e += 8;
        } while (i < n);
    }
    return 0;
}

int func_0013BF20();

int func_0030E500(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    *(int *)(p0 + 24) = 0;
    v0 = p0;
    if (p1 != 0) {
        v1 = func_0013BF20(p1);
        *(int *)(v0 + 24) = v1;
    }
    return v1;
}

void func_0030E450();

void func_0030E440(int p0, int p1) {
    func_0030E450(p0, 660, p1);
}
