#include <math.h>
#include <string.h>

int calculate_expression(char expression[]){
    int n = strlen(expression), k = 0;
    if((expression[0] > 47) & (expression[0] < 58)){
        if (expression[1] == '0')
            k += (expression[0] - 48) * 10 + (expression[1] - 48);
        else
            k += expression[0] - 48;
    for(int i = 1; i < n; i++){
        if((expression[i] == '+' & expression[i + 1] == '-') || (expression[i] == '-' & expression[i + 1] == '+') || (expression[i] == '+' & expression[i + 1] == '+') || (expression[i] == '-' & expression[i + 1] == '-'))
        return -1;
        if(expression[i] == '+'){
            if ((expression[i+2] != '+') & (expression[i+2] != '-') & (expression[i+2] != '\0'))
            k += (expression[i + 1] - 48) * 10 + (expression[i + 2] - 48);
            else 
            k += expression[i + 1] - 48;
        }
        if(expression[i] == '-'){
            if ((expression[i+2] != '+') & (expression[i+2] != '-') & (expression[i+2] != '\0'))
            k -= (expression[i + 1] - 48) * 10 + (expression[i + 2] - 48);
            else 
            k -= expression[i + 1] - 48; 
        } 
    }
    }
    else{
    for(int i = 0; i < n; i++){
        if((expression[i] == '+' & expression[i + 1] == '-') || (expression[i] == '-' & expression[i + 1] == '+') || (expression[i] == '+' & expression[i + 1] == '+') || (expression[i] == '-' & expression[i + 1] == '-'))
        return -1;
        if(expression[i] == '+'){
            if ((expression[i+2] != '+') & (expression[i+2] != '-') & (expression[i+2] != '\0'))
            k += (expression[i + 1] - 48) * 10 + (expression[i + 2] - 48);
            else 
            k += expression[i + 1] - 48;
        }
        if(expression[i] == '-'){
            if ((expression[i+2] != '+') & (expression[i+2] != '-') & (expression[i+2] !='\0'))
            k -= (expression[i + 1] - 48) * 10 + (expression[i + 2] - 48);
            else 
            k -= expression[i + 1] - 48; 
        } 
    }
    }
    return k;
}