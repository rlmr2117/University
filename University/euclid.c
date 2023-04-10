#include <stdio.h>

int Euclid(int a, int b) 
{
    if (b == 0) return a;

    return Euclid(b, a % b);
}

int Euclid2(int x, int y) { 
    int temp;

    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    return x;
}