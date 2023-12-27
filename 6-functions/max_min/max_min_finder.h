#include <math.h>

void get_max_min(int* array, int size, int* pMax, int* pMin){
    *pMax = - 100000;
    *pMin = 100000;
    for(int i = 0; i < size; i++){
        if(*pMin > array[i])
        *pMin = array[i];
        if(*pMax < array[i])
        *pMax = array[i];
    }
}
