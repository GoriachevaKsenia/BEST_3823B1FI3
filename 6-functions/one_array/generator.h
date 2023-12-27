#include <math.h>
#include <stdlib.h>

int* array_generator(int* real_size, int k, int m, int f){
    *real_size = 30;
    int i = 0;
    int* array = (int*)calloc(sizeof(int), *real_size);
    array[*real_size - 1] = f;
    int summa = f;
    while(summa < m){
        if(summa < k){
            if(array[i]< f){
                i++;
                summa++;
            }
        }
        if (summa > k)
        break;
    }
    return array;
}
