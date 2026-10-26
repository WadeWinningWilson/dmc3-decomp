// cc: ee-gcc2.96 -O2 -G0
void func_0013F520();

int func_0013F7B0(p0) char *p0; {
    int v0;
    v0 = 2;
    if (*(signed char *)(p0 + 1) == v0) {
        func_0013F520();
        return;
    } else {
        return v0;
    }
}

int func_0013F838(p0) char *p0; {
    return *(int *)(p0 + 20);
}

void func_0013F840(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 32) = p1;
}

int func_0013F848(p0) char *p0; {
    return *(int *)(p0 + 32);
}

void func_0013F850(char *p0, float f0) {
    *(float *)(p0 + 36) = f0;
}

float func_0013F858(p0) char *p0; {
    return *(float *)(p0 + 36);
}

void func_0013F860(char *p0, float f0) {
    *(float *)(p0 + 40) = f0;
}

float func_0013F868(p0) char *p0; {
    return *(float *)(p0 + 40);
}
