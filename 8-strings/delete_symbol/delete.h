#include <math.h>
#include <string.h>

void DelSymbol1(char *str, char sym){
   for(int i = 0; str[i];){
    if(str[i] == sym){
         for(int k = i; str[k]; k++){
            str[k] = str[k + 1];
         }
    }
    else
    i++;
   }
} 