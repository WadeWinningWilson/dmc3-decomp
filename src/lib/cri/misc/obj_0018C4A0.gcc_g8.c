// cc: ee-gcc2.96 -O2 -G8
int func_001709F8();

void func_0018C8F8();

int func_0018C8A8(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    char *v0;
    char *v1;
    int v2;
    int tmp1;
    v0 = (char *)p0;
    v1 = (char *)p3;
    v2 = *(int *)(v0 + 3520);
    if (*(int *)(v0 + 3520) != 0) {
        func_0018C8F8(v2);
        return;
    } else {
        tmp1 = func_001709F8(*(int *)(v0 + 3496));
        *(int *)(v1 + 0) = tmp1;
        return tmp1;
    }
}
