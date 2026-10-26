extern char D_005D0E44[];

extern char D_005D0E48[];

int func_0013B800(p0) int p0; {
    int v0;
    int tmp0;
    v0 = *(int *)D_005D0E48;
    if (!((unsigned int)v0 < (unsigned int)p0)) {
        tmp0 = *(int *)D_005D0E44;
        *(int *)D_005D0E48 = (v0 - p0);
        *(int *)D_005D0E44 = (tmp0 + p0);
        return tmp0;
    } else {
        return 0;
    }
}
