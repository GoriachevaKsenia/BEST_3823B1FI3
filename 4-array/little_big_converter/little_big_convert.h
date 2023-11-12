#include <math.h>

unsigned int little_big_convert(unsigned int input){
    unsigned int a1, a2, a3, a4;
    a1 = (input & 255) * pow(2, 24);
    a2 = (input & 65280) * 256;
    a3 = (input & 16711680) / 256;
    a4 = (input & 4278190080) / pow(2, 24);
    return a1 + a2 + a3 + a4;
}

/* long long array1[32];
    for(int i = 0; i < 32; i++){
        while (input >  0){
        array1[i] = input % 2;
        input /= 2;
        }
    }
    long long array2[32];
    for(int i = 31; i > 0; i--){
        for(int j = 0; j < 32; j++){
            array2[j] = array1[i];
        }
    }*/