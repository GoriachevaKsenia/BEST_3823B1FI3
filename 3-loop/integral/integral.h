#include <math.h>

double integral(double a, double b, double c, double left, double right){
    double y0 = (b * b) / 4 / a - (b * b) / 2 / a + c;
    double d = b * b - 4 * a *c;
    double x1 = (-b + sqrt(d)) / 2 / a;
    double x2 = (-b - sqrt(d)) / 2 / a;
    if (((left == x1) & (right == x2) & (y0 < 0)) || ((left == x2) & (right == x1) & (y0 < 0)))
    return -1;
    double Integral = fabs((a / 3) * pow (left, 3) + (b / 2) * pow(left, 2) + c * left - ((a / 3)* pow(right, 3) + (b / 2) * pow(right,2)+c * right));
    return Integral;
}