extern char D_005D0E44[];

extern char D_005D0E48[];

int func_0013B8B0(p0, p1) char *p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = ((*(int *)D_005D0E44 + 15) & -16);
    v1 = (*(int *)D_005D0E48 - (v0 - *(int *)D_005D0E44));
    if (!((unsigned int)v1 < (unsigned int)p1)) {
        *(int *)D_005D0E48 = (v1 - p1);
        *(int *)(p0 + 0) = v0;
        *(int *)D_005D0E44 = (v0 + p1);
        v2 = *(int *)D_005D0E48;
    } else {
        *(int *)(p0 + 0) = 0;
        v2 = *(int *)D_005D0E48;
    }
    return v2;
}
