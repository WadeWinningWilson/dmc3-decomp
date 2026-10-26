float func_00131AB0(float f0) {
    float v0;
    float v1;
    float v2;
    float v3;
    v0 = -3.141592502593994f;
    if (f0 < v0) {
        v1 = 6.283185005187988f;
        do {
            f0 = (f0 + v1);
        } while (f0 < v0);
    } else {
        v2 = 3.141592502593994f;
        if (f0 > v2) {
            v3 = 6.283185005187988f;
            do {
                f0 = (f0 - v3);
            } while (f0 > v2);
        }
    }
    return f0;
}
