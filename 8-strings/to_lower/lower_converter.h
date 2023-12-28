#include <math.h>
#include <string.h>

void lower(char* str){
    int n;
    n = strlen(str);
    for(int i = 0; i < n; i++){
        if((str[i] >= 'A') & (str[i] <= 'Z')){
            str[i] +=32;
        }
    }
} 