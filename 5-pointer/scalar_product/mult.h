#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    double xy = 0, xx = 0, yy = 0, koren, ygol, res;
    for(int i = 0; i < size; i++){
        xy += vec1[i] * vec2[i];
        xx += vec1[i] * vec1[i];
        yy += vec2[i] * vec2[i];
    }
    koren = sqrt(xx * yy);
    ygol = acos(xy / koren);
    res = (int)(ygol * 180 / 3.14);
    return res;
}
