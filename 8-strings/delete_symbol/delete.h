#include <math.h>
#include <string.h>

void DelSymbol1(char* str, char sym){
    char* p1 = str, * p2 = str;
    while(*p1){
        if(*p1 == sym){
            p1 ++;
        }
        else{
            *p2 ++ = *p1 ++;
        }
    }
    *p2 = "\0";
} 