#include <stdbool.h>


bool is_digit(char x) {
    if ((x >= 48) & (x <= 57))
    return true; // No implementation
}

bool is_letter(char x) {
    if (((x >= 65) & (x <= 90)) || ((x >= 97) & (x <= 122)))
    return true; // No implementation
}

bool is_punctuation(char x) {
    if (((x >= 33) & (x <= 47)) || ((x >= 58) & (x <= 64)) || ((x >= 91) & (x <= 96)) || ((x >= 123) & (x <= 126)))
    return true; // No implementation
}

int get_ascii_code(char first, char second, char third) {
    char x, y, z;
    int num; 
    if (first < 127)
    x = first;
    if (second < 127)
    y = second;
    if (third < 127)
    z = third;
    num = x * 1000000 + y * 1000 + z;
    return num; // No implementation
}

