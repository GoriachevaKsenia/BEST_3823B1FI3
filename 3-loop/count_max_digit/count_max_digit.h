#include <math.h>
#include<limits.h>

char count_max_digit(long long number){
    if (number < 0)
    number = number + (-2) * number;
    int n; 
    long long n1 = number;
    int k = 0;
    int MAX = number % 10;
    number /= 10;
    while (number > 0)
    {
        n = number % 10;
        if (n > MAX)
        MAX = n;
        number /= 10;
    } 
    while (n1 > 0)
    {
        n = n1 % 10;
        if (n == MAX)
        k += 1;
        n1 /= 10;
    } 
    return k;
} 