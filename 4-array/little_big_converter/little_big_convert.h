#include <math.h>

unsigned int little_big_convert(unsigned int input){
    int array[32];
    for(int i = 0; i < 32; i++){
        while (input >  0){
        array[i] = input % 2;
        input /= 2;
        }
    }
    return 0;
}