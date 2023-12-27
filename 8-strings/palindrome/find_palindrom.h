#include <math.h>
#include <string.h>

int is_palindrom(char text[]){
    int n, k = 0;
    n = strlen(text) - 1;
    while(n > k){
        while ((text[n] == text[k] + 32) || (text[k] == text[n] + 32)){
            k++;
            n--;
        }
        while ((text[n] < 65) || ((text[n] > 90) & (text[n] < 97)) || (text[n] > 122))
            n--;
        while ((text[k] < 65) || ((text[k] > 91) & (text[k] < 97)) || (text[k] > 122))
            k++;
        while ((text[n] == text[k] + 32) || (text[k] == text[n] + 32)){
            k++;
            n--;
        }
        while ((text[n] < 65) || ((text[n] > 90) & (text[n] < 97)) || (text[n] > 122))
            n--;
        while ((text[k] < 65) || ((text[k] > 91) & (text[k] < 97)) || (text[k] > 122))
            k++;
        if(text[k]!=text[n])
            return 0;
    k++;
    n--;
    }
    return 1;
}
