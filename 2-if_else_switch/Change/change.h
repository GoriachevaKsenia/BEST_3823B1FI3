long long change(int a, int b, int c, int d){
    long long int x, y, z;

    x = long long (100 * a) + long long (b);
    y = long long (100 *c) + long long (d);
    z = y - x;
    if (y - x < 0)
    return -1;
    else
    return z;
}