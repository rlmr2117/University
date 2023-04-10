#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "euclid.h"

int main() {
	clock_t start_time = 0, end_time = 0;
	double result;
	int i = 0;

	start_time = clock();
	test_Euclid();
	end_time = clock();

	result = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
	printf("ÃÑ ¼Ò¿ä ½Ã°£ : %lf \n", result);
	
}