#include <stdio.h>

int Euclid(int a, int b)
{
    if (b == 0) return a;//b가 0이 됐을 경우 a 리턴

    return Euclid(b, a % b);//b가 0이 아닐 경우에 b와 a를 b로 나눈 나머지로 재귀호출
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