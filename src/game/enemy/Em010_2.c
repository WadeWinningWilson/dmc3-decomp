void func_003F3AE0(char **h) {
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

void func_003F2F60(p0) char *p0; {
    float tmp2;
    *(char *)(p0 + 8135) = 1;
    tmp2 = (*(float *)(p0 + 14868) - *(float *)(p0 + 16));
    *(float *)(p0 + 14868) = (*(float *)(p0 + 14868) - *(float *)(p0 + 16));
    *(float *)(p0 + 1812) = (*(float *)(p0 + 1812) + (tmp2 * *(float *)(p0 + 16)));
}

int func_003F3A90();

int func_003F3780(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = (char *)p0;
    func_003F3A90((v0 + 14916));
    v1 = func_003F3A90((v0 + 14920));
    *(char *)(v0 + 14924) = 0;
    v2 = 0;
    v3 = v0;
    do {
        if (*(int *)(v3 + 14916) != 0) {
            *(char *)(v0 + 14924) = (*(unsigned char *)(v0 + 14924) + 1);
        }
        v2 = (v2 + 1);
        v3 = (v3 + 4);
    } while ((v2 < 2));
    return v1;
}

int func_003F36A0();

int func_003F37F0(p0) int p0; {
    int v0;
    int v1;
    v1 = func_003F3A90((p0 + 14912));
    v0 = p0;
    if (*(int *)((char *)p0 + 14912) == 0) {
        v1 = func_003F36A0(v0);
    }
    return v1;
}

extern void func_003E9940();

void func_003E9930(void) { func_003E9940(); }

extern void func_003E6500();

void func_003F3B60(char *p) { func_003E6500(p + -64); }

extern void func_003E64C0();

void func_003F3B70(char *p) { func_003E64C0(p + -64); }

extern void func_003E6120();

void func_003F3B90(char *p) { func_003E6120(p + -64); }

extern void func_003E60F0();

void func_003F3BA0(char *p) { func_003E60F0(p + -64); }

extern void func_003E63B0();

void func_003F3BF0(char *p) { func_003E63B0(p + -64); }

extern void func_003E6260();

void func_003F3C10(char *p) { func_003E6260(p + -64); }

extern void func_003E6150();

void func_003F3C20(char *p) { func_003E6150(p + -64); }

extern void func_003E1E40();

void func_003F3C40(char *p) { func_003E1E40(p + -64); }

void func_003F3C50(char *p) { func_003E1E40(p + -160); }

void func_003F3C60(char *p) { func_003E1E40(p + -208); }

extern void func_003E7980();

void func_003F3C70(char *p) { func_003E7980(p + -304); }

extern void func_003E6680();

void func_003F3C80(char *p) { func_003E6680(p + -304); }

extern void func_003E6560();

void func_003F3C90(char *p) { func_003E6560(p + -304); }

void func_003F3CC0(char *p) { func_003E6120(p + -304); }

void func_003F3CD0(char *p) { func_003E60F0(p + -304); }

void func_003F3D20(char *p) { func_003E63B0(p + -304); }

void func_003F3D40(char *p) { func_003E6260(p + -304); }

void func_003F3D50(char *p) { func_003E6150(p + -304); }

void func_003F3D70(char *p) { func_003E1E40(p + -304); }

extern void func_003E7F90();

void func_003F3DE0(char *p) { func_003E7F90(p + -464); }

void func_003F3E00(char *p) { func_003E1E40(p + -464); }

unsigned char func_003E8010(char *p) { return *(unsigned char *)(p + 13356); }

signed char func_003E8020(char *p) { return *(signed char *)(p + 13364); }

signed char func_003E8030(char *p) { return *(signed char *)(p + 13365); }

signed char func_003E8040(char *p) { return *(signed char *)(p + 13366); }

signed char func_003E8050(char *p) { return *(signed char *)(p + 13367); }

signed char func_003E8060(char *p) { return *(signed char *)(p + 13368); }

float func_003E6740(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 13348) = *(float *)(p1 + 44);
    return t0;
}

float func_003F39F0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 12572);
    *(float *)(p1 + 0) = *(float *)(p0 + 12572);
    return t0;
}

float func_003F3A00(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 12444);
    *(float *)(p1 + 0) = *(float *)(p0 + 12444);
    return t0;
}
