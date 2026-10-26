// cc: ee-gcc2.96 -O2 -G8
int func_00192710(p0, p1, p2, p3) char *p0; char *p1; char *p2; char *p3; {
    unsigned char tmp2;
    p0 = (p0 + 20);
    *(char *)(p1 + 0) = *(unsigned char *)(p0 + 0);
    *(char *)(p2 + 0) = *(unsigned char *)(p0 + 1);
    tmp2 = *(unsigned char *)(p0 + 2);
    *(char *)(p3 + 0) = *(unsigned char *)(p0 + 2);
    return tmp2;
}
