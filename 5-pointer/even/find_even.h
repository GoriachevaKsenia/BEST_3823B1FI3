#include <math.h>
#include <stdio.h>

int* find_even(int* arr, int size){
    int k = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 == 0){
            k = i;
            return arr + k;
        }
        if ((i == size - 1) & (arr[i] % 2 != 0))
        return NULL;
    } 
}
