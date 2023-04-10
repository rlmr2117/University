#include <stdio.h>

int Euclid(int a, int b)
{
    if (b == 0) return a;//b�� 0�� ���� ��� a ����

    return Euclid(b, a % b);//b�� 0�� �ƴ� ��쿡 b�� a�� b�� ���� �������� ���ȣ��
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