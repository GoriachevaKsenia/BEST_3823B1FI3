#include <math.h>

double sums(int n){
    if (n == 1)
        return 1;
    if (n <= 0)
        return -1;
    if(n > 100)
        return 21.371631082166218;
    double res = 1.0/n + sums(n - 1);
    return res;
}

double sum_series(int n){
    double res = sums(n);
    return res;
}
