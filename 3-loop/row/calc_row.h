long long calc_row(int n, long long k){
    long long i = 0, c = 0, m = 1;
    if ((k > -1000) &(k < 1000)){
    while (i < n){
    c += m * k;
    m += 1;
    i += 1;
    }
    }
    return c;
}