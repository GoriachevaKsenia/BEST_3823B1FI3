long long change(int a, int b, int c, int d){
    long long int x, y, z;
    x = 100 * (long long)(a) + (long long)(b);
    y = 100 *(long long)(c) + (long long)(d);
    z = y - x;
    if (y - x < 0)
    return -1;
    else
    return z;
}