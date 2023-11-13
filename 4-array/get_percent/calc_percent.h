#include <math.h>

int calc_percent(int matrix[], int size){
    int k = 0;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(matrix[i] > matrix[j]){
                int m = matrix[j];
                matrix[j] = matrix[i];
                matrix[i] = m;
            }
        }
    }
    int min = matrix[0];
    int max = matrix[size - 1];
    double r = (max - min) / 2;
    for(int i = 0; i < size; i++){
        if(matrix[i] <= r){
            k += 1;
        }
    }
    double n = ((double) (size - k) / (double) (size)) * 100;
    return n;
}