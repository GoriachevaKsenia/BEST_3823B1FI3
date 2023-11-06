#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 0; //Счётчик итераций
    int m = 0, middle = 0, left1 = left;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (number < middle){
        right = middle - 1; // чтобы уменьшить количество шагов поиска можно сразу смещать границы поиска на элемент, следующий за серединой отрезка
        i+=1;
        }
        else if (number > middle){
        left = middle + 1;
        i+=1;
        }
        else{
            if(left1 > 0){
            m = middle - left1;
            i+=1;
            }
            else{
            m= middle;
            i+=1;
            }
            i= m * i;
            return i; //НЕ МЕНЯТЬ!
        }
    }
}