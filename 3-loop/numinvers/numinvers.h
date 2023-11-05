int num_invers(int num){
    int n = 0, n1 = 0, k = 1;
    long long m = 10000000000;
    if (num > 0)
    {
        while(num > 0){
            n1 = num / m;
            if (n1 > 0){ 
            n += n1*k;
            k *= 10;
            }
            num = num - n1 * m;
            m /= 10;
        }
    }
    else n = 0;
    return n;
}