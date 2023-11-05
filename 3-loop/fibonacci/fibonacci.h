long fib(int m){
   long long f1 = 0, f2 = 1, f3 = 0, f4 = 1;
   if (m == 0){
      return f1;
      f4 = 0;
   }
   if (m == 1){
      return f2;
      f4 = 1;
   }
   if (m < 0){
      return -1;
   }
   if (m > 1){
   for (int i = 2; i <= m; i++)
   {
      if (f3 <= m){
      f3 = f1 + f2;
      f1 = f2;
      f2 = f3;
      if (f3 <= m)
      f4 += f3;
      }
   }
   return f4;
   }
}