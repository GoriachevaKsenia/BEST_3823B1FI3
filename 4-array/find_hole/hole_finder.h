#include <math.h>

int hole_finder(int matrix[], int length, int width){
    int size = length * width, min = 100000; 
    double k;
    for(int i = width + 1; i < size - (width + 1); i++){
        if((matrix[i] < matrix[i - width]) & (matrix[i] < matrix[i + width]) & (matrix[i] < matrix[i - 1]) & (matrix[i] < matrix[i - 1])){
            if(matrix[i] < min){
                min = matrix[i];
                k = i;
            }
        }
    }
    double i = ceil((k + 1) / (double) (width)) - 1;
    double j = round((((k + 1) / (double) (width)) - floor((k + 1) / (double) (width))) * width) - 1;
    int ind = i * 100 + j;
    return ind;
}