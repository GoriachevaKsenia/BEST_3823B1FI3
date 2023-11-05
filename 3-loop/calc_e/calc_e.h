#include <math.h>

unsigned long long calc_e(char order){
    double i;
    int t = floor(exp(1) * pow(10, order));
    int flag = 0;
    for (i = 1; flag == 0; i++)
    {
        double y = pow((1 + 1 / i), i);
        if(floor(y * pow(10, order)) == t)
        flag = 1;
    }
    return (unsigned long long) i;
}