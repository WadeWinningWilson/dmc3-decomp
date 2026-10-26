float func_004D2B70(p0) int p0; {
    return (100.0f * (*(float *)((char *)p0 + 44948) / *(float *)((char *)p0 + 45328)));
}

extern char D_0058AEF0[];

int func_004D2D20(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = (p1 & 255);
    v1 = (v0 + -23);
    if (v1 < 0) {
        v2 = 1;
    } else {
        if (!(v0 < 69)) {
            v2 = 1;
        } else {
            v2 = ((*(unsigned char *)((D_0058AEF0 + v1) + 0) & (1 << *(unsigned char *)((char *)p0 + 45783))) != 0);
        }
    }
    return v2;
}

extern void func_004D4450();

void func_004D49E0(char *p) { func_004D4450(p + -64); }

extern void func_004D4470();

void func_004D49F0(char *p) { func_004D4470(p + -64); }

extern void func_004D4490();

void func_004D4A00(char *p) { func_004D4490(p + -64); }

extern void func_004D44C0();

void func_004D4A60(char *p) { func_004D44C0(p + -64); }

void func_004D4A70(char *p) { func_004D44C0(p + -160); }

void func_004D4A80(char *p) { func_004D44C0(p + -208); }

extern void func_004D4410();

void func_004D4AA0(char *p) { func_004D4410(p + -304); }

void func_004D4B00(char *p) { func_004D44C0(p + -304); }

extern void func_004D35B0();

void func_004D4B10(char *p) { func_004D35B0(p + -464); }

extern void func_004D4080();

void func_004D4B20(char *p) { func_004D4080(p + -464); }

extern void func_004D44A0();

void func_004D4B30(char *p) { func_004D44A0(p + -464); }

extern void func_004D44B0();

void func_004D4B40(char *p) { func_004D44B0(p + -464); }

extern void func_004C56A0();

void func_004D4B60(char *p) { func_004C56A0(p + -464); }

void func_004D4B90(char *p) { func_004D44C0(p + -464); }

void func_004BFDB0(char *p, char v) { *(char *)(p + 52) = v; }

int func_004BFDC0(char *p) { return *(int *)(p + 3164); }

void func_004D4110(void) {}
