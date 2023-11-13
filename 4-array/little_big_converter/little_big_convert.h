#include <math.h>

unsigned int little_big_convert(unsigned int input){
    unsigned int a1, a2, a3, a4;
    a1 = (input & 255) * pow(2, 24);
    a2 = (input & 65280) * 256;
    a3 = (input & 16711680) / 256;
    a4 = (input & 4278190080) / pow(2, 24);
    return a1 + a2 + a3 + a4;
} 