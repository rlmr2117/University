#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void test_Euclid(){
	int i = 0, j = 0, res = 0, res2 = 0;

	srand(time(NULL));

	i = rand() % 100 + 1;
	j = rand() % 100 + 1;

	printf("���� 1 : %d\t ���� 2 : %d \n\n", i, j);
	res = Euclid(i, j);
	res2 = Euclid2(i, j);
	printf("��� ȣ�� ���� ��� : %d \n", res);
	printf("�ݺ��� ���� ��� : %d\n\n", res2);
}