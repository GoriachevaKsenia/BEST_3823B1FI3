#include <math.h>

char find_digit(double number, char digit){
    long long i = 1000000000000000;
    int k = 0;
    long long m = floor(number), n1 = number;
    if ((number > m) & (number < (number + 1))){
        long long n = number * 1000000000;
        if(n % 10 == 0){
            n /= 10;
        }
        while ((n / i) == 0){
            i /= 10;
        }
        while(n > 0){
            if((n / i) != digit){
                 n = n - (n / i) * i;
                 i /= 10;
                 k +=1;
            }
            else {
                return k + 2;
            }
        if (n == 0)
        return -1;
        }
    }
    else{
        while ((n1 / i) == 0){
            i /= 10;
        }
        while(n1 > 0){
            if((n1 / i) != digit){
                 n1 = n1 - (n1 / i) * i;
                 i /= 10;
                 k +=1;
            }
            else {
                return k + 1;
            }
        if (n1 == 0)
        return -1;
        } 
    }
}  