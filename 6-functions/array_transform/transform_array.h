#include <math.h>

void transform(double* array, int size, int* comands, int comands_count){
    for(int i = 0; i < comands_count; i++){
        switch(comands[i]){
            case 1:
            for(int j = 0; j < size; j++){
                array[j] += 1;
            }
            break;
            case 2:
            for(int j = 0; j < size; j++){
                array[j] = sqrt(array[j]);
            }
            break;
            case 3:
            double sr_arifm = 0;
            for(int j = 0; j < size; j++){
                if(array[j] < 0)
                sr_arifm -= array[j];
                else
                sr_arifm += array[j];
            }
            sr_arifm /= size;
            for(int j = 0; j < size; j++){
                array[j] = pow(array[j], sr_arifm);
            }
            break;
            case 4:
            for(int j = 0; j < size; j++){
                if((int)array[j] % 2 == 0)
                array[j] = (int)array[j] * (-1);
                else
                array[j] = 0;
            }
            break;
            case 5:
            for(int j = 0; j < size; j++){
               if(((int)array[j] % 2 == 0)&(j % 2 == 0))
               array[j] = 0;
            }
            break;
            case 6:
            int t, n = 0, k = 0, l = 0;
            for(int j = 0; j < size; j++){
                if(array[j] > 0)
                n++;
                if(array[j] < 0)
                k++;
                if(array[j] == 0)
                l++;
            }
            if (n == k + l)
            break;
            else{ 
                if(n < k + l){
                    t = ((k + l) - n) / 2;
                    for(int j = 0; j < size; j++){
                        if(t != 0){
                            if(array[j] < 0){
                                array[j] *= (-1);
                                t--;
                            }
                        }
                    }
                break;
                }
                else{
                    t = (n - (k + l))/2;
                     for(int j = 0; j < size; j++){
                        if(t != 0){
                            if(array[j] > 0){
                                array[j] *= (-1);
                                t--;
                            }
                        }
                    }
                break; 
                }
            }
            default:
            break;
        }
    }
} 