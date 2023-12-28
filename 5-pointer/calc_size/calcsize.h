#include <math.h>

int calcsize(void* memory){
    char* array = (char*)memory;
    int size = 0;
    while (*array != 47){
        array++;
        size++;
    }
    *array = size - 1;
    int i = 0;
    while(*array != 11){
        array--;
        i++;
    }
    return size + i;
}
