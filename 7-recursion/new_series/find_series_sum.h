#include <math.h>

double find_elem(int k){
    if(k == 0)
       return 0;
    double n = (find_elem(k-1)+1)/k;
    return n;
}

double find_sum_elements_series(int k){
    if (k < 0)
    return -1;
    double res = 0;
    for(int i = k-1; i >= 0; i--){
        res += find_elem(i);
    }
    return res;
}