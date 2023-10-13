int chocolate(int n, int m, int k){
    if ((k > 0) & (n > 0) & (m > 0) & (k <= m * n)) 
    if ((k % n == 0) || (k % m == 0))
    return 1;
    else
    return 0;
}