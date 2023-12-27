#include <math.h>
#include <stdlib.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    if(aN != bM)
    return 0;
    int* matrix = (int*)malloc(sizeof(int) * aM * bN);
    for(int i = 0; i < aM * bN; i++){
        matrix[i] = 0;
    }
    int n = 0;
    while(n < aM * bN){
        for(int i = 0; i < aM; i++){
            for(int j = 0; j <bN; j++){
                for(int k = 0; k < aN; k++){
                    matrix[n] += A[i *aN + k] * B[j + k * bN];
                }
                n++;
            }
        }
    }
    return matrix;
}
