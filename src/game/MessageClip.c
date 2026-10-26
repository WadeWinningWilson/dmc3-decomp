extern char D_01DFA340[];

extern signed char D_00666713[];

int func_0030EA90(char *, int);

int func_0030E380(char *p) {
    float x = *(float *)(p + 0x10);
    if (x < 0.0f) x = -x;
    if (!(x <= 0.0001f)) goto a;
    return 0;
a:
    if (D_00666713[0] == -1) return 1;
    return func_0030EA90(D_01DFA340, *(int *)(p + 0x20));
}

float func_0030E410() {
    return 60.0f;
}

void func_0030E420(void) {}

void func_0030E430(void) {}
