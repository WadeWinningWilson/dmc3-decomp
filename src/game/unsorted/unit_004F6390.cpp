extern "C" void func_00104B80(float *, char *, float *);

extern "C" void func_004F6470(char *, float *, int, int, float);

extern "C" int func_004F6390(char *a, char *b, int n, int c) {
    float m[4];
    float v[4];
    int i;
    if (a == 0) {
        return 0;
    }
    v[1] = 100.0f;
    v[3] = 1.0f;
    v[0] = 0.0f;
    v[2] = 0.0f;
    func_00104B80(m, b, v);
    for (i = 0; i < n; i++) {
        func_004F6470(a, m, i, c, 15.0f + 30.0f * (float)(i + 1));
    }
    return 1;
}
