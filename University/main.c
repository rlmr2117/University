#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "euclid.h"

int main() {
    time_t start_time = 0, end_time = 0;
    double result;
    int i = 0;

    start_time = time(NULL);
    test_Euclid();
    end_time = time(NULL);

    result = difftime(end_time, start_time);
    printf("�� �ҿ� �ð� : %lf ��\n", result);

    return 0;
}