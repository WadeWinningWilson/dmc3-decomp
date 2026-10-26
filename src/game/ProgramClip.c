char *func_00210240(char *);

extern char D_00558B60[];

int func_0030AA50(char *p) {
    float a = *(float *)(p + 0x10);
    int r;
    if ((a < 0.0f ? -a : a) <= 0.0001f) {
        return 0;
    }
    r = (int)func_00210240(p);
    return ((int (**)(char *, int))D_00558B60)[*(int *)(p + 0x20)](p + 0x24, r);
}

float func_0030AB00() {
    return 60.0f;
}

int func_0030AAE0(void) { return 1; }

int func_0030AAF0(void) { return 1; }

void func_0030AB10(void) {}

void func_0030AB20(void) {}
