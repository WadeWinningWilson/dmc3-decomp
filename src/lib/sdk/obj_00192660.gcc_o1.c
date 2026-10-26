// cc: ee-gcc2.96 -O1 -G0
void func_001926F8(p0, p1, p2, p3) char *p0; int p1; int p2; int p3; {
    p0 = (p0 + 20);
    *(char *)(p0 + 2) = p3;
    *(char *)(p0 + 0) = p1;
    *(char *)(p0 + 1) = p2;
}
