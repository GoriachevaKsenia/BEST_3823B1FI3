#include <math.h>

void transform(double* array, int size, int* comands, int comands_count){
    /*for(int i = 0; i < comands_count; i++){
        switch(comands[i]){
            case 1:
            for(int j = 0; j < size; j++){
                array[j] += 1;
            }
            break;
            case 2:
            for(int j = 0; j < size; j++){
                array[j] =sqrt(abs(array[j]));
            }
            break;
            case 3:
            double sr_arifm = 0;
            for(int j = 0; j < size; j++){
                sr_arifm += array[j];
            }
            sr_arifm /= size;
            for(int j = 0; j < size; j++){
                sr_arifm = pow(abs(array[j]), sr_arifm);
            }
            break;
            case 4:
            for(int j = 0; j < size; j++){
                if(j % 2 == 0)
                array[j] = -(int)array[j];
                else
                array[j] = pow((int)array[j], -1);
            }
            break;
            case 5:
            for(int j = 0; j < size; j++){
               if(((int)array[j] % 2 == 0)&(j % 2 == 0))
               array[j] = 0;
            }
            break;
            case 6:
            for(int j = 0; j < size; j++){
                if(j % 2 == 0)
                array[j] = abs(array[j]);
                else
                array[j] = -abs(array[j]);
            }
            break;
            default:
            break;
        }
    }*/
    return
}
