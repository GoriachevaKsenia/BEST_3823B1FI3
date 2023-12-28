#include <math.h>
#include <stddef.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    if (size > 8)
        return 0;
    unsigned long long res = 0;
    for ( int i = 0; i < size; i++){
        res += ((unsigned long long) arr[i] << (8 * i));
    }
    return res;
}

unsigned char unpack_ull(unsigned long long input){
    unsigned char i = (input >> 8 * 4)&0xff;
    return i;
}