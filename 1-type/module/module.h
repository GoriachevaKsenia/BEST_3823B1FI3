#include<math.h>
int get_module(int a, int b, int c) {
    int x;
    x = ((long long) (a) * (long long) (b)) % (long long ) (c);
    return x; // Not implementation
}