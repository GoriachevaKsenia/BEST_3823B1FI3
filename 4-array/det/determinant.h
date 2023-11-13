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
    if (sqrt(size) == 4){
        return  (matrix[0] * matrix[5] - matrix[1] * matrix[4]) * (matrix[10] * matrix[15] - matrix[11] * matrix[14]) - (matrix[0] * matrix[9] - matrix[1] * matrix[8]) * (matrix[6] * matrix[15] - matrix[7] * matrix[14]) + (matrix[0] * matrix[13] - matrix[1] * matrix[12]) * (matrix[6] * matrix[11] - matrix[7] * matrix[10]) + (matrix[4] * matrix[9] - matrix[5] * matrix[8]) * (matrix[2] * matrix[15] - matrix[3] * matrix[14]) - (matrix[4] * matrix[13] - matrix[5] * matrix[12]) * (matrix[2] * matrix[11] - matrix[3] * matrix[10]) + (matrix[8] * matrix[13] - matrix[9] * matrix[12]) * (matrix[2] * matrix[7] - matrix[3] * matrix[6]);
    }
    if (sqrt(size) == 5){
        int m1 = (matrix[0] * matrix[6] - matrix[1] * matrix[5]) * (matrix[12] * matrix[18] * matrix[24] + matrix[14] * matrix[17] * matrix[23] + matrix[13] * matrix[19] * matrix[22] - matrix[14] * matrix[18] * matrix[22] - matrix[13] * matrix[17] * matrix[24] - matrix[12] * matrix[19] * matrix[23]);
        int m2 = (matrix[0] * matrix[11] - matrix[1] * matrix[10]) * (matrix[7] * matrix[18] * matrix[24] + matrix[9] * matrix[17] * matrix[23] + matrix[8] * matrix[19] * matrix[22] - matrix[9] * matrix[18] * matrix[22] - matrix[8] * matrix[17] * matrix[24] - matrix[7] * matrix[19] * matrix[23]);
        int m3 = (matrix[0] * matrix[16] - matrix[1] * matrix[15]) * (matrix[7] * matrix[13] * matrix[24] + matrix[9] * matrix[12] * matrix[23] + matrix[8] * matrix[14] * matrix[22] - matrix[9] * matrix[13] * matrix[22] - matrix[8] * matrix[12] * matrix[24] - matrix[7] * matrix[14] * matrix[23]);
        int m4 = (matrix[0] * matrix[21] - matrix[1] * matrix[20]) * (matrix[7] * matrix[13] * matrix[19] + matrix[9] * matrix[12] * matrix[18] + matrix[8] * matrix[14] * matrix[17] - matrix[9] * matrix[13] * matrix[17] - matrix[8] * matrix[12] * matrix[19] - matrix[7] * matrix[14] * matrix[18]);
        int m5 = (matrix[5] * matrix[11] - matrix[6] * matrix[10]) * (matrix[2] * matrix[18] * matrix[24] + matrix[4] * matrix[17] * matrix[23] + matrix[3] * matrix[19] * matrix[22] - matrix[4] * matrix[18] * matrix[22] - matrix[3] * matrix[17] * matrix[24] - matrix[2] * matrix[19] * matrix[23]);
        int m6 = (matrix[5] * matrix[16] - matrix[6] * matrix[15]) * (matrix[2] * matrix[13] * matrix[24] + matrix[4] * matrix[12] * matrix[23] + matrix[3] * matrix[14] * matrix[22] - matrix[4] * matrix[13] * matrix[22] - matrix[3] * matrix[12] * matrix[24] - matrix[2] * matrix[14] * matrix[23]);
        int m7 = (matrix[5] * matrix[21] - matrix[6] * matrix[20]) * (matrix[2] * matrix[13] * matrix[19] + matrix[4] * matrix[12] * matrix[18] + matrix[3] * matrix[14] * matrix[17] - matrix[4] * matrix[13] * matrix[17] - matrix[3] * matrix[12] * matrix[19] - matrix[2] * matrix[14] * matrix[18]);
        int m8 = (matrix[10] * matrix[16] - matrix[11] * matrix[15]) * (matrix[2] * matrix[8] * matrix[24] + matrix[4] * matrix[7] * matrix[23] + matrix[3] * matrix[9] * matrix[22] - matrix[4] * matrix[8] * matrix[22] - matrix[3] * matrix[7] * matrix[24] - matrix[2] * matrix[9] * matrix[23]);
        int m9 = (matrix[10] * matrix[21] - matrix[11] * matrix[20]) * (matrix[2] * matrix[8] * matrix[19] + matrix[4] * matrix[7] * matrix[18] + matrix[3] * matrix[9] * matrix[17] - matrix[4] * matrix[8] * matrix[17] - matrix[3] * matrix[7] * matrix[19] - matrix[2] * matrix[9] * matrix[18]);
        int m10 = (matrix[15] * matrix[21] - matrix[116] * matrix[20]) * (matrix[2] * matrix[8] * matrix[14] + matrix[4] * matrix[7] * matrix[13] + matrix[3] * matrix[9] * matrix[12] - matrix[4] * matrix[8] * matrix[12] - matrix[3] * matrix[7] * matrix[14] - matrix[2] * matrix[9] * matrix[13]);
        return m1 - m2 + m3 - m4 + m5 - m6 + m7 + m8 - m9 + m10;
    }
}