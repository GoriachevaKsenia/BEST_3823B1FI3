#include <math.h>

char find_bin_pattern(int number){
    long long n = 0, m = 0, k = 1, n1;
    while (number > 0)
    {
        n += (number % 2) * k ;
        number /= 2;
        k *= 10;
    }
    while (n > 0)
    {
        n1 = n % 1000;
        if (n1 == 101)
        m += 1;
        n /= 10;
    } 
    return m;
}