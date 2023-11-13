#include <math.h>

int determinant(int matrix[], int size){
    int det;
    if ((sqrt(size) > floor(sqrt(size))) & (sqrt(size) < (floor(sqrt(size)) + 1)))
    return -404;
    if (sqrt(size) == 1){
        return matrix[0];
    }
    if (sqrt(size) == 2){
        return matrix[0] * matrix[3] - matrix[1] * matrix[2];
    }
    if (sqrt(size) == 3){
        return matrix[0] * matrix[4] * matrix[8] + matrix[2] * matrix[3] * matrix[7] + matrix[1] * matrix[5] * matrix[6] - matrix[2] * matrix[4] * matrix[6] - matrix[0] * matrix[5] * matrix[7] - matrix[1] * matrix[3] * matrix[8];
    }
    
}