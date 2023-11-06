#include <math.h>

double limit(double eps, int n_max){
   double x = 1;
   double c = 0;
   double y = sqrt(2) / 2;
   if (n_max == 1)
   return y;
   for (x = 1; x < n_max; x++)
   {
      c = y;
      y = (sqrt(x * x + x) * y + 1) / sqrt(x * x + 3 * x + 2);
      if ((y - c) < eps)
      break;
      }
      return y;
}