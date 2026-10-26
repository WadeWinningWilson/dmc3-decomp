// cc: ee-gcc2.96 -O2 -G0
void func_0018FB40(p0, p1) char *p0; char *p1; {
    *(long *)(p0 + 360) = *(long *)(p1 + 0);
    *(long *)(p0 + 368) = *(long *)(p1 + 8);
}

void func_0018FB58(p0, p1) char *p0; int p1; {
    if (p1 > 0) {
        *(int *)(p0 + 16) = p1;
    }
}

void func_0018FB68(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 4) = p1;
}

void func_0018FB70(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 12) = p1;
}

int func_001900F8();

int func_00190098(p0, p1) int p0; int p1; {
    char *v0;
    char *v1;
    int v2;
    int tmp1;
    v0 = (char *)p0;
    v2 = 0;
    if (*(int *)(v0 + 16) > 0) {
        v1 = (v0 + 24);
        do {
            v2 = (v2 + 1);
            *(int *)(v1 + 0) = (*(int *)(v1 + 0) - p1);
            v1 = (v1 + 4);
        } while ((v2 < *(int *)(v0 + 16)));
    }
    tmp1 = func_001900F8(v0);
    *(int *)(v0 + 424) = tmp1;
    return tmp1;
}

extern char D_0053F0B8[];

extern char D_0053F0BC[];

void func_00190148(p0, p1) int p0; int p1; {
    *(int *)D_0053F0BC = p0;
    *(int *)D_0053F0B8 = p1;
}
