#include<math.h>
bool compare_double(double x, double y) {
    if (ceil(x) == ceil(y))
    return true; // Not implementation
    else
    return false;
}

int get_nearest_int(double x) {
    return round(x); // Not implementation
}

double get_fractional(double x) {
    return x - floor(x); // Not implementation
}
