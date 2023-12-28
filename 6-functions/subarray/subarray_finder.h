#include <math.h>

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int a1 = -1, a2 = -1, a3 = -1;
    int f1 = 0, f2 = 0, f3 = 0;
    for(int i = 0; i < array_size; i++){
        if(f1 == 0){
            if(array[i] == subarray1[0]){
                a1 = i;
                for(int j = 1; j < subarray_size1; j++){
                    if(i + j < array_size){
                        if(array[i + j] == subarray1[j]){
                            f1 = 1;  
                        }
                        else{
                            a1 = -1;
                            f1 = 0;
                            break;
                        }
                    }
                    else{
                        a1 = -1;
                        f1 = 0;
                    }
                }
            }
        }
        if(f2 == 0){
            if(array[i] == subarray2[0]){
                a2 = i;
                for(int j = 1; j < subarray_size2; j++){
                    if(i + j < array_size){
                        if(array[i + j] == subarray2[j]){
                            f2 = 1;  
                        }
                        else{
                            a2 = -1;
                            f2 = 0;
                            break;
                        }
                    }
                    else{
                        a2 = -1;
                        f2 = 0;
                    }
                }
            }
        }
        if(f3 == 0){
            if(array[i] == subarray3[0]){
                a3 = i;
                for(int j = 1; j < subarray_size3; j++){
                    if(i + j < array_size){
                        if(array[i + j] == subarray3[j]){
                            f3 = 1;  
                        }
                        else{
                            a3 = -1;
                            f3 = 0;
                            break;
                        }
                    }
                    else{
                        a3 = -1;
                        f3 = 0;
                    }
                }
            }
        }
    }
    return a1 + a2 + a3;
}
