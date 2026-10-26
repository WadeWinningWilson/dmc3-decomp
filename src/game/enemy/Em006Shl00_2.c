extern char D_005B81D0[];

extern char D_005B81F4[];

extern char D_005B8274[];

int func_00252FA0();

int func_0028C110();

int func_004ACBA0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B81D0;
    *(char **)((char *)p0 + 64) = D_005B81F4;
    *(char **)((char *)p0 + 160) = D_005B8274;
    func_0028C110((p0 + 336));
    *(char *)((char *)p0 + 1072) = 0;
    *(int *)((char *)p0 + 1056) = 0;
    return p0;
}

extern void func_004AD3D0();

void func_004AD440(char *p) { func_004AD3D0(p + -64); }
