#include <math.h>

double calc_sum_elements(int* array, int array_size){
    if (array_size <= 0)
    return -1;
    if (array_size == 1)
    return array[0];
    return array[0] + calc_sum_elements(array + 1, array_size - 1);
}
