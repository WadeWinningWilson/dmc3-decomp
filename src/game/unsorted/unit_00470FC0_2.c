extern char D_005B5F60[];

extern char D_005B5F84[];

extern char D_005B6004[];

int func_00252FA0();

int func_0028C110();

int func_00471520(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B5F60;
    *(char **)((char *)p0 + 64) = D_005B5F84;
    *(char **)((char *)p0 + 160) = D_005B6004;
    func_0028C110((p0 + 400));
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 336)) : "memory");
    *(int *)((char *)p0 + 1120) = 0;
    *(int *)((char *)p0 + 1124) = 0;
    *(int *)((char *)p0 + 1132) = 0;
    *(float *)((char *)p0 + 1136) = 0.0f;
    *(float *)((char *)p0 + 1152) = 0.0f;
    *(float *)((char *)p0 + 1156) = 0.0f;
    *(float *)((char *)p0 + 1160) = 0.0f;
    *(float *)((char *)p0 + 1164) = 1.0f;
    *(float *)((char *)p0 + 1168) = 0.0f;
    *(float *)((char *)p0 + 1172) = 0.0f;
    *(float *)((char *)p0 + 1176) = 0.0f;
    *(float *)((char *)p0 + 1180) = 1.0f;
    *(float *)((char *)p0 + 1184) = 0.0f;
    *(float *)((char *)p0 + 1188) = 0.0f;
    *(float *)((char *)p0 + 1192) = 0.0f;
    *(float *)((char *)p0 + 1196) = 1.0f;
    *(char *)((char *)p0 + 1200) = 1;
    *(char *)((char *)p0 + 1201) = 0;
    return p0;
}
